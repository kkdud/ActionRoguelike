// Fill out your copyright notice in the Description page of Project Settings.


#include "SMagicProjectile.h"
#include "SProjectileBase.h"
#include "SGameplayFunctionLibrary.h"
#include "SActionComponent.h"
#include <GameFramework/ProjectileMovementComponent.h>
#include <GameFramework/Character.h>
#include <Components/CapsuleComponent.h>
#include <Components/SphereComponent.h>
#include <Particles/ParticleSystemComponent.h>
#include "SCharacter.h"

// Sets default values
ASMagicProjectile::ASMagicProjectile()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

void ASMagicProjectile::PostInitializeComponents()
{
	Super::PostInitializeComponents();
}

// Called every frame
void ASMagicProjectile::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}


void ASMagicProjectile::OnActorHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
{
	if (OtherActor)
	{
		ensure(OtherActor != GetInstigator());

		USActionComponent* TargetActorActionComp = Cast<USActionComponent>(OtherActor->GetComponentByClass(USActionComponent::StaticClass()));
		if (TargetActorActionComp && TargetActorActionComp->ActiveGameplayTags.HasTag(ParryTag))
		{
			ASMagicProjectile* BouncedBullet = CreateBounceBulletBack(Cast<APawn>(OtherActor));

			Destroy();

			return;
		}


		ASCharacter* SourceCharacter = Cast<ASCharacter>(GetInstigator());
		if (SourceCharacter)
		{
			USActionComponent* SourceActorActionComp = Cast<USActionComponent>(GetInstigator()->GetComponentByClass(USActionComponent::StaticClass()));
			if (SourceActorActionComp && TargetActorActionComp && BurningEffectClass && SourceActorActionComp->ActiveGameplayTags.HasTag(ViolentTag))
			{
				TargetActorActionComp->AddAction(GetInstigator(), BurningEffectClass, true);
			}
		}

	}

	PlayImpactEffect(GetInstigator(), OtherActor);

	USGameplayFunctionLibrary::ApplyDirectionalDamage(GetInstigator(), OtherActor, DamageAmount, Hit);
}


ASMagicProjectile* ASMagicProjectile::CreateBounceBulletBack(APawn* SourcePawn)
{
	FActorSpawnParameters Params;
	Params.Template = this;
	Params.Instigator = Cast<APawn>(SourcePawn);

	ASMagicProjectile* BouncedBullet = Cast<ASMagicProjectile>(GetWorld()->SpawnActor<AActor>(GetClass(), GetActorTransform(), Params));

	BouncedBullet->SphereComp->ClearMoveIgnoreActors();

	ACharacter* Character = Cast<ACharacter>(SourcePawn);
	if (Character)
	{
		BouncedBullet->SetIgnoreCollision(Character->GetCapsuleComponent(), true);
		BouncedBullet->SetActorLocation(GetActorLocation());
		BouncedBullet->SetVelocity(-MoveComp->Velocity);

		BouncedBullet->EffectComp->ActivateSystem();
	}

	return BouncedBullet;
}

void ASMagicProjectile::Explode_Implementation(AActor* SourceActor, AActor* TargetActor)
{
	Super::Explode_Implementation(SourceActor, TargetActor);
}

