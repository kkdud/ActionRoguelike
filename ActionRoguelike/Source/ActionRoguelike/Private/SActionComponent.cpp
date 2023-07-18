// Fill out your copyright notice in the Description page of Project Settings.


#include "SActionComponent.h"
#include "SAction.h"






// Sets default values for this component's properties
USActionComponent::USActionComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}

// Called every frame
void USActionComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
}

void USActionComponent::OnComponentDestroyed(bool bDestroyingHierarchy)
{
	for (USAction* Action : Actions)
	{
		Action->MarkPendingKill();
	}
}

// Called when the game starts
void USActionComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	for (TSubclassOf<USAction> ActionClass : DefaultActions)
	{
		AddAction(GetOwner(), ActionClass);
	}
}


void USActionComponent::AddAction(AActor* Instigator, TSubclassOf<USAction> ActionClass, bool AutoActivate /* = false */)
{
	if (!ensure(ActionClass))
	{
		return;
	}

	USAction* NewAction = NewObject<USAction>(this, ActionClass);
	if (ensure(NewAction))
	{
		Actions.Add(NewAction);

		if (AutoActivate && NewAction->CanStart(Instigator))
		{
			NewAction->StartAction(Instigator);
		}
	}
}

void USActionComponent::RemoveAction(USAction* Action)
{
	if (ensure(Action && Actions.Num() > 0))
	{
		if (Action->CanStop(GetOwner()))
		{
			Action->StopAction(GetOwner());
		}

		Actions.Remove(Action);
	}
}

bool USActionComponent::StartActionByName(AActor* Instigator, FName ActionName)
{
	for (USAction* Action : Actions)
	{
		if (Action && Action->ActionName == ActionName && !Action->IsRunning())
		{
			if (!Action->CanStart(Instigator))
			{
				FString DebugMsg = FString::Printf(TEXT("Failed to run action: %s"), *ActionName.ToString());
				GEngine->AddOnScreenDebugMessage(-1, 0.5f, FColor::White, DebugMsg);
				continue;
			}

			Action->StartAction(Instigator);
			return true;
		}
	}

	return false;
}

bool USActionComponent::StopActionByName(AActor* Instigator, FName ActionName)
{
	for (USAction* Action : Actions)
	{
		if (Action && Action->ActionName == ActionName)
		{
			if (!Action->CanStop(Instigator))
			{
				FString DebugMsg = FString::Printf(TEXT("Failed to stop action: %s"), *ActionName.ToString());
				GEngine->AddOnScreenDebugMessage(-1, 0.5f, FColor::White, DebugMsg);
				continue;
			}

			Action->StopAction(Instigator);
			return true;
		}
	}

	return false;
}


