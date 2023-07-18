// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SProjectileBase.h"
#include <GameplayTagContainer.h>
#include "SAction.h"
#include "SMagicProjectile.generated.h"

class USphereComponent;
class UProjectileMovementComponent;
class UParticleSystemComponent;

UCLASS()
class ACTIONROGUELIKE_API ASMagicProjectile : public ASProjectileBase
{
	GENERATED_BODY()

public:	
	// Sets default values for this actor's properties
	ASMagicProjectile();

	virtual void PostInitializeComponents() override;

	// Called every frame
	virtual void Tick(float DeltaTime) override;


protected:

	void OnActorHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit) override;

	void Explode_Implementation(AActor* SourceActor, AActor* TargetActor) override;


public:

	UFUNCTION()
	ASMagicProjectile* CreateBounceBulletBack(APawn* SourcePawn);



protected:

	UPROPERTY(EditDefaultsOnly, Category = "Damage")
	FGameplayTag ParryTag;

	UPROPERTY(EditDefaultsOnly, Category = "Damage")
	FGameplayTag ViolentTag;

	UPROPERTY(EditDefaultsOnly, Category = "Damage")
	TSubclassOf<USAction> BurningEffectClass;

};
