// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include <EnvironmentQuery/EnvQueryTypes.h>
#include "SPowerupActor.h"
#include "SGameModeBase.generated.h"


class UEnvQuery;
class UEnvQueryInstanceBlueprintWrapper;
class UCurveFloat;

/**
 * 
 */
UCLASS()
class ACTIONROGUELIKE_API ASGameModeBase : public AGameModeBase
{
	GENERATED_BODY()


public:

	ASGameModeBase();

	virtual void StartPlay() override;


public:

	UFUNCTION(Exec)
	void KillAll();


protected:

	UPROPERTY(EditDefaultsOnly, Category = "Powerup")
	float RequiredPowerupDistance;

	UPROPERTY(EditDefaultsOnly, Category = "Powerup")
	float DesiredPowerupCount;

	UPROPERTY(EditDefaultsOnly, Category = "Powerup")
	UEnvQuery* PowerupSpawnQuery;

	UPROPERTY(EditDefaultsOnly, Category = "Powerup")
	TArray<TSubclassOf<ASPowerupActor>> PowerupClasses;

	UPROPERTY(EditDefaultsOnly, Category = "Credits")
	float CreditPerKill;

	UPROPERTY(EditDefaultsOnly, Category = "AI")
	float BotSpawnTimerInterval;

	UPROPERTY(EditDefaultsOnly, Category = "AI")
	UEnvQuery* BotSpawnQuery;

	UPROPERTY(EditDefaultsOnly, Category = "AI")
	TSubclassOf<AActor> MinionClass;

	UPROPERTY(EditDefaultsOnly, Category = "AI")
	UCurveFloat* DifficultyCurve;



	UFUNCTION()
	void BotSpawnTimerElapsed();

	UFUNCTION()
	void OnBotSpawnQueryCompleted(UEnvQueryInstanceBlueprintWrapper* QueryInstance, EEnvQueryStatus::Type QueryStatus);

	UFUNCTION()
	void RespawnPlayerElapsed(AController* Controller);

	UFUNCTION()
	void OnPowerupSpawnQueryCompleted(UEnvQueryInstanceBlueprintWrapper* QueryInstance, EEnvQueryStatus::Type QueryStatus);



public:

	virtual void OnActorKilled(AActor* VictimActor, AActor* Killer);


protected:

	FTimerHandle TimerHandle_BotSpawns;


	virtual void CheckNecessaryParamSettings();

	void SetBotSpawnsTimer();

	void SpawnPowerItems();
};
