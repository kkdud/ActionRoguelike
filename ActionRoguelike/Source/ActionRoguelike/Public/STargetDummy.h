// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "STargetDummy.generated.h"

class USAttributeComponent;
class UStaticMeshComponent;

UCLASS()
class ACTIONROGUELIKE_API ASTargetDummy : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ASTargetDummy();

protected:

	UPROPERTY(EditAnywhere, Category = "Material")
	FName TimeToHitName;

	UPROPERTY(EditAnywhere, Category = "Material")
	FName HitFlashSpeedName;

	UPROPERTY(EditAnywhere, Category = "Material")
	float HitFlashSpeedValue;

	UPROPERTY(VisibleAnywhere)
	USAttributeComponent* AttributeComp;

	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* MeshComp;

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UFUNCTION()
	void OnHealthChanged(AActor* InstigatorActor, USAttributeComponent* OwningComp, float NewHealth, float Delta);


public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
