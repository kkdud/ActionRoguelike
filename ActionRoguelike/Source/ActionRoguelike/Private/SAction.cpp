// Fill out your copyright notice in the Description page of Project Settings.


#include "SAction.h"



void USAction::StartAction_Implementation(AActor* Instigator)
{
	UE_LOG(LogTemp, Log, TEXT("Start Action: %s"), *GetNameSafe(this));
}

void USAction::StopAction_Implementation(AActor* Instigator)
{
	UE_LOG(LogTemp, Log, TEXT("Stop Action: %s"), *GetNameSafe(this));
}

bool USAction::IsRunning()
{
	return RunningState;
}


UWorld* USAction::GetWorld() const
{
	UActorComponent* ActorComp = Cast<UActorComponent>(GetOuter());
	if (ActorComp)
	{
		return ActorComp->GetWorld();
	}

	return nullptr;
}

USAction::USAction()
{
	RunningState = false;
}
