// Fill out your copyright notice in the Description page of Project Settings.


#include "SProjectileBase.h"
#include <Components/SphereComponent.h>
#include <Particles/ParticleSystemComponent.h>
#include <GameFramework/ProjectileMovementComponent.h>
#include <Kismet/GameplayStatics.h>
#include "SAttributeComponent.h"
#include "SActionComponent.h"
#include "Sound/SoundCue.h"

// Sets default values
ASProjectileBase::ASProjectileBase()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	SphereComp = CreateDefaultSubobject<USphereComponent>("SphereComp");
	SphereComp->SetCollisionProfileName("Projectile");
	RootComponent = SphereComp;

	EffectComp = CreateDefaultSubobject<UParticleSystemComponent>("EffectComp");
	EffectComp->SetupAttachment(SphereComp);

	MoveComp = CreateDefaultSubobject<UProjectileMovementComponent>("MoveComp");
	MoveComp->bRotationFollowsVelocity = true;
	MoveComp->bInitialVelocityInLocalSpace = true;
	MoveComp->ProjectileGravityScale = 0.0f;
	MoveComp->InitialSpeed = 8000.0f;

	DamageAmount = -20.0f;


}


void ASProjectileBase::OnActorHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
{
	Explode(GetInstigator(), OtherActor);
}



void ASProjectileBase::PlayImpactEffect(AActor* SourceActor, AActor* TargetActor)
{
	if (ensure(!IsPendingKill()))
	{
		UGameplayStatics::SpawnEmitterAtLocation(this, ImpactVFX, GetActorLocation(), GetActorRotation());

		UGameplayStatics::PlaySoundAtLocation(this, ImpactSound, GetActorLocation());


		Destroy();
	}
}

void ASProjectileBase::DamageActor(AActor* SourceActor, AActor* TargetActor)
{
	if (ensure(!IsPendingKill()))
	{
		if (TargetActor)
		{
			USAttributeComponent* AttributeComp =  Cast<USAttributeComponent>(TargetActor->GetComponentByClass(USAttributeComponent::StaticClass()));
			if (AttributeComp && AttributeComp->IsAlive())
			{
				AttributeComp->ApplyHealthChange(SourceActor, DamageAmount);
			}
		}
	}
}

void ASProjectileBase::Explode_Implementation(AActor* SourceActor, AActor* TargetActor)
{
	DamageActor(SourceActor, TargetActor);

	PlayImpactEffect(SourceActor, TargetActor);
}

void ASProjectileBase::SetIgnoreCollision(UPrimitiveComponent* CollisionComp, bool bIgnore)
{
	if (!CollisionComp)
	{
		UE_LOG(LogTemp, Warning, TEXT("Parameter CollisionComp is invalid! Please check it."));
		return;
	}

	AActor* IgnoreActor = CollisionComp->GetOwner();

	if (ensure(IgnoreActor))
	{
		SphereComp->IgnoreActorWhenMoving(IgnoreActor, bIgnore);

		CollisionComp->IgnoreActorWhenMoving(this, bIgnore);
	}
}

void ASProjectileBase::SetVelocity(FVector Velocity)
{
	MoveComp->Velocity = Velocity;
}

FVector ASProjectileBase::GetVelocity() const
{
	return MoveComp->Velocity;
}

void ASProjectileBase::PostInitializeComponents()
{
	Super::PostInitializeComponents();

	SphereComp->IgnoreActorWhenMoving(GetInstigator(), true);
	SphereComp->OnComponentHit.AddDynamic(this, &ASProjectileBase::OnActorHit);
}

// Called every frame
void ASProjectileBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

