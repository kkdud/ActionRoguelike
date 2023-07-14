// Fill out your copyright notice in the Description page of Project Settings.


#include "AI/SBTService_CheckHealth.h"
#include "AIController.h"
#include "SAttributeComponent.h"
#include <BehaviorTree/BlackboardComponent.h>


void USBTService_CheckHealth::TickNode(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds)
{
	Super::TickNode(OwnerComp, NodeMemory, DeltaSeconds);

	APawn* MyPawn = OwnerComp.GetAIOwner()->GetPawn();
	if (ensure(MyPawn))
	{
		USAttributeComponent* AttributeComp = USAttributeComponent::GetAttributes(MyPawn);
		if (ensure(AttributeComp))
		{
			bool bLowHealth = AttributeComp->GetHealth() / AttributeComp->GetHealthMax() < LowHealthFraction;

			UBlackboardComponent* BBComp = OwnerComp.GetBlackboardComponent();
			if (ensure(BBComp))
			{
				BBComp->SetValueAsBool(LowHealthKey.SelectedKeyName, bLowHealth);
			}
		}
	}
}

USBTService_CheckHealth::USBTService_CheckHealth()
{
	LowHealthFraction = 0.3f;
}
