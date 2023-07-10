// Fill out your copyright notice in the Description page of Project Settings.


#include "AI/SBTService_CheckAttackRange.h"
#include <BehaviorTree/BlackboardComponent.h>
#include <AIController.h>



void USBTService_CheckAttackRange::TickNode(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds)
{
	Super::TickNode(OwnerComp, NodeMemory, DeltaSeconds);

	// Check distance between ai pawn and target actor 

	UBlackboardComponent* BlackboardComp = OwnerComp.GetBlackboardComponent();
	if (ensure(BlackboardComp))
	{

		AActor* TargetActor = Cast<AActor>(BlackboardComp->GetValueAsObject("TargetActor"));
		if (TargetActor)
		{
			AAIController* AIController = OwnerComp.GetAIOwner();
			if (ensure(AIController))
			{
				APawn* AIPawn = AIController->GetPawn();
				if (ensure(AIPawn))
				{
					float DistanceTo = FVector::Distance(TargetActor->GetActorLocation(), AIPawn->GetActorLocation());
					
					bool bWithinRange = DistanceTo < 1000.f;
					
					bool bHasLOS = false;
					if (bWithinRange)
					{
						bHasLOS = AIController->LineOfSightTo(TargetActor);
					}

					BlackboardComp->SetValueAsBool(AttackRangeKey.SelectedKeyName, bWithinRange && bHasLOS);
				}
			}
		}
	}
}
