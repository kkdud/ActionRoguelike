// Fill out your copyright notice in the Description page of Project Settings.


#include "AI/SAICharacter.h"
#include <Perception/PawnSensingComponent.h>
#include <AIController.h>
#include <BehaviorTree/BlackboardComponent.h>
#include <DrawDebugHelpers.h>
#include "SAttributeComponent.h"

// Sets default values
ASAICharacter::ASAICharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	PawnSensComp = CreateDefaultSubobject<UPawnSensingComponent>("PawnSensComp");

	AttributeComp = CreateDefaultSubobject<USAttributeComponent>("AttributeComp");

	AutoPossessAI = EAutoPossessAI::PlacedInWorldOrSpawned;

}

void ASAICharacter::PostInitializeComponents()
{
	Super::PostInitializeComponents();
	
	PawnSensComp->OnSeePawn.AddDynamic(this, &ASAICharacter::OnPawnSeen);
}

void ASAICharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ASAICharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ASAICharacter::OnPawnSeen(APawn* Pawn) 
{
	AAIController* AIC = Cast<AAIController>(GetController());
	if (AIC)
	{
		UBlackboardComponent* BBComp = AIC->GetBlackboardComponent();

		BBComp->SetValueAsObject("TargetActor", Pawn);

		DrawDebugString(GetWorld(), Pawn->GetActorLocation(), "PLAYER SPOTTED", nullptr, FColor::Green, 2.0f, false, 2.0f);
	}
}

bool ASAICharacter::IsAlive() const
{
	if (!AttributeComp)
	{
		return false;
	}

	return AttributeComp->IsAlive();
}
