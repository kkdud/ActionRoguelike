// Fill out your copyright notice in the Description page of Project Settings.


#include "SGameModeBase.h"
#include <EnvironmentQuery/EnvQueryManager.h>
#include "AI/SAICharacter.h"
#include <EngineUtils.h>
#include "SAttributeComponent.h"



ASGameModeBase::ASGameModeBase()
{
	SpawnBotTimerInterval = 2.0f;
}


void ASGameModeBase::StartPlay()
{
	Super::StartPlay();

	CheckNecessaryParamSettings();

	GetWorldTimerManager().SetTimer(TimerHandle_SpawnBots, this, &ASGameModeBase::SpawnBotTimerElapsed, SpawnBotTimerInterval, true);
}

void ASGameModeBase::SpawnBotTimerElapsed()
{
	UEnvQueryInstanceBlueprintWrapper* QueryInstance = UEnvQueryManager::RunEQSQuery(this, SpawnBotQuery, this, EEnvQueryRunMode::RandomBest5Pct, nullptr);

	QueryInstance->GetOnQueryFinishedEvent().AddDynamic(this, &ASGameModeBase::OnQueryCompleted);
}

void ASGameModeBase::OnQueryCompleted(UEnvQueryInstanceBlueprintWrapper* QueryInstance, EEnvQueryStatus::Type QueryStatus)
{
	if (QueryStatus != EEnvQueryStatus::Success)
	{
		UE_LOG(LogTemp, Warning, TEXT("Spawn bot EQS Query Failed!"));
		return;
	}

	int32 NrOfAliveBots = 0;
	for (TActorIterator<ASAICharacter> It(GetWorld()); It; ++It)
	{
		ASAICharacter* Bot = *It;

		if (Bot->IsAlive())
		{
			NrOfAliveBots++;
		}
	}

	float MaxBotCount = 10.0f;
	
	if (DifficultyCurve)
	{
		MaxBotCount = DifficultyCurve->GetFloatValue(GetWorld()->TimeSeconds);
	}

	//UE_LOG(LogTemp, Warning, TEXT("DifficultyCurve = %p, NrOfAliveBots = %d, MaxBotCount = %f"), DifficultyCurve, NrOfAliveBots, MaxBotCount);

	if (NrOfAliveBots >= MaxBotCount)
	{
		return;
	}

	TArray<FVector> Locations = QueryInstance->GetResultsAsLocations();

	if (Locations.IsValidIndex(0))
	{
		GetWorld()->SpawnActor<AActor>(MinionClass, Locations[0], FRotator::ZeroRotator);
	}
}

void ASGameModeBase::CheckNecessaryParamSettings()
{
	ensureMsgf(MinionClass, TEXT("Necessary parameter [MinionClass] is missing, otherwise it will crash."));
	ensureMsgf(SpawnBotQuery, TEXT("Necessary parameter [SpawnBotQuery] is missing, otherwise it will crash."));
}
