// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "SAttributeComponent.h"
#include "SAICharacter.generated.h"

class UPawnSensingComponent;
class USAttributeComponent;

UCLASS()
class ACTIONROGUELIKE_API ASAICharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ASAICharacter();

protected:

	virtual void PostInitializeComponents() override;

	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;


protected:

	UPROPERTY(VisibleAnywhere, Category = "AI")
	UPawnSensingComponent* PawnSensComp;

	UFUNCTION()
	void OnPawnSeen(APawn* Pawn);

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	USAttributeComponent* AttributeComp;


public:

	UFUNCTION(BlueprintCallable)
	bool IsAlive() const;


};
