// Fill out your copyright notice in the Description page of Project Settings.


#include "AI/SBTTask_HealthSelf.h"
#include "AIController.h"
#include "SAttributeComponent.h"



EBTNodeResult::Type USBTTask_HealthSelf::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	APawn* AIPawn = OwnerComp.GetAIOwner()->GetPawn();
	if (ensure(AIPawn))
	{
		USAttributeComponent* AttributeComp = USAttributeComponent::GetAttributes(AIPawn);
		if (ensure(AttributeComp))
		{
			AttributeComp->ApplyHealthChange(AIPawn, AttributeComp->GetHealthMax());
		}
	}

	return EBTNodeResult::Succeeded;
}
