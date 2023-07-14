// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "SWorldUserWidget.generated.h"


class USizeBox;

/**
 * 
 */
UCLASS()
class ACTIONROGUELIKE_API USWorldUserWidget : public UUserWidget
{
	GENERATED_BODY()
	
public:

	void SetAttachedActor(AActor* ToActor);

protected:

	UPROPERTY(EditDefaultsOnly, Category = "UI")
	FVector WorldOffset;

	UPROPERTY(meta = (BindWidget))
	USizeBox* ParentSizeBox;

	UPROPERTY(BlueprintReadOnly, Category = "UI")
	AActor* AttachedActor;

	virtual void NativeTick(const FGeometry& MyGeometry, float InDeltaTime) override;

};
