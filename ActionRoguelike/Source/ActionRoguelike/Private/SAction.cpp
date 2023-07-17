// Fill out your copyright notice in the Description page of Project Settings.


#include "SAction.h"
#include "SActionComponent.h"



USAction::USAction()
{
	RunningState = false;
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

bool USAction::CanStart_Implementation(AActor* Instigator)
{
	if (RunningState)
	{
		return false;
	}

	USActionComponent* ActionComp = GetOwningComponent();
	if (ActionComp->ActiveGameplayTags.HasAny(BlockedTags))
	{
		return false;
	}

	return true;
}

bool USAction::CanStop_Implementation(AActor* Instigator)
{
	return RunningState;
}

void USAction::StartAction_Implementation(AActor* Instigator)
{
	UE_LOG(LogTemp, Log, TEXT("Start Action: %s"), *GetNameSafe(this));

	USActionComponent* ActionComp = GetOwningComponent();
	if (ensureMsgf(ActionComp, TEXT("USAction::StartAction_Implementation")))
	{
		ActionComp->ActiveGameplayTags.AppendTags(GrantsTags);
	}

	RunningState = true;
}

void USAction::StopAction_Implementation(AActor* Instigator)
{
	UE_LOG(LogTemp, Log, TEXT("Stop Action: %s"), *GetNameSafe(this));

	USActionComponent* ActionComp = GetOwningComponent();
	if (ensureMsgf(ActionComp, TEXT("USAction::StopAction_Implementation")))
	{
		ActionComp->ActiveGameplayTags.RemoveTags(GrantsTags);
	}

	RunningState = false;
}


bool USAction::IsRunning()
{
	return RunningState;
}


USActionComponent* USAction::GetOwningComponent() const
{
	return Cast<USActionComponent>(GetOuter());
}



