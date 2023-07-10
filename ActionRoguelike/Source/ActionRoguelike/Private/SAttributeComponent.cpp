// Fill out your copyright notice in the Description page of Project Settings.


#include "SAttributeComponent.h"
#include <DrawDebugHelpers.h>

// Sets default values for this component's properties
USAttributeComponent::USAttributeComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...

	Health = 100.0f;
}


// Called when the game starts
void USAttributeComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


bool USAttributeComponent::ApplyHealthChange(float Delta)
{
	Health += Delta;

	OnHealthChanged.Broadcast(nullptr, this, Health, Delta);

	FVector Location = GetOwner()->GetActorLocation();
	FString CombinedString = FString::Printf(TEXT("Health: %f"), Health);

	DrawDebugString(GetWorld(), Location, CombinedString, nullptr, FColor::Green, 2.0f, false, 3.0f);

	return true;
}


bool USAttributeComponent::IsAlive() const
{
	return Health > 0.0f;
}

// Called every frame
void USAttributeComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

