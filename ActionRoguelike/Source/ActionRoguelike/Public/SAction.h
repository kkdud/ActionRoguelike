// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include <GameplayTagContainer.h>
#include "SAction.generated.h"

class USActionComponent;

/**
 * 
 */
UCLASS(Blueprintable)
class ACTIONROGUELIKE_API USAction : public UObject
{
	GENERATED_BODY()
	

public:

	USAction();

	UWorld* GetWorld() const override;


public:

	/* Action nickname to start/stop without a reference to the object. */
	UPROPERTY(EditDefaultsOnly, Category = "Action")
	FName ActionName;


	UFUNCTION(BlueprintNativeEvent, Category = "Action")
	bool CanStart(AActor* Instigator);

	UFUNCTION(BlueprintNativeEvent, Category = "Action")
	bool CanStop(AActor* Instigator);

	UFUNCTION(BlueprintNativeEvent, Category = "Action")
	void StartAction(AActor* Instigator);

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Action")
	void StopAction(AActor* Instigator);

	UFUNCTION(BlueprintCallable, Category = "Action")
	bool IsRunning();


protected:

	UPROPERTY(EditDefaultsOnly, Category = "Tags")
	FGameplayTagContainer GrantsTags;

	UPROPERTY(EditDefaultsOnly, Category = "Tags")
	FGameplayTagContainer BlockedTags;


	UFUNCTION(BlueprintCallable, Category = "Action")
	USActionComponent* GetOwningComponent() const;


protected:

	bool RunningState;



};
