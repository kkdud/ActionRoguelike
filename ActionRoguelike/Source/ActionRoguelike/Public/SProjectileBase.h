// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SProjectileBase.generated.h"

class UParticleSystemComponent;
class USphereComponent;
class UProjectileMovementComponent;
class USoundCue;

UCLASS()
class ACTIONROGUELIKE_API ASProjectileBase : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ASProjectileBase();


protected:

	UPROPERTY(EditDefaultsOnly, Category = "Damage")
	float DamageAmount;

	UPROPERTY(EditDefaultsOnly, Category = "Effects")
	UParticleSystem* ImpactVFX;

	UPROPERTY(EditDefaultsOnly, Category = "Effects")
	USoundCue* ImpactSound;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	USphereComponent* SphereComp;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	UProjectileMovementComponent* MoveComp;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	UParticleSystemComponent* EffectComp;

	UFUNCTION()
	virtual void OnActorHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);

	UFUNCTION()
	void PlayImpactEffect(AActor* SourceActor, AActor* TargetActor);

	UFUNCTION()
	void DamageActor(AActor* SourceActor, AActor* TargetActor);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void Explode(AActor* SourceActor, AActor* TargetActor);

	UFUNCTION()
	void SetIgnoreCollision(UPrimitiveComponent* CollisionComp, bool bIgnore);

	UFUNCTION()
	void SetVelocity(FVector Velocity);

	//UFUNCTION()
	FVector GetVelocity() const;

public:	

	virtual void PostInitializeComponents() override;

	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
