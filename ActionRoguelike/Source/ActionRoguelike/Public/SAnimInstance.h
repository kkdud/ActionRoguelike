// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "SActionComponent.h"
#include "SAnimInstance.generated.h"

/**
 * 
 */
UCLASS()
class ACTIONROGUELIKE_API USAnimInstance : public UAnimInstance
{
	GENERATED_BODY()
	
protected:

	void NativeInitializeAnimation() override;

	void NativeUpdateAnimation(float DeltaSeconds) override;

protected:

	UPROPERTY()
	bool bIsStunned;

	UPROPERTY(BlueprintReadOnly, Category = "Animation")
	USActionComponent* ActionComp;



};
