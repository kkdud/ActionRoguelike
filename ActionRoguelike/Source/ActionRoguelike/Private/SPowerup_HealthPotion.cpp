// Fill out your copyright notice in the Description page of Project Settings.


#include "SPowerup_HealthPotion.h"
#include "SAttributeComponent.h"
#include "SPlayerState.h"



ASPowerup_HealthPotion::ASPowerup_HealthPotion()
{
	CreditCost = 10;
}


void ASPowerup_HealthPotion::Interact_Implementation(APawn* InstigatorPawn)
{
	if (!ensure(InstigatorPawn))
	{
		return;
	}

	USAttributeComponent* AttributeComp = Cast<USAttributeComponent>(InstigatorPawn->GetComponentByClass(USAttributeComponent::StaticClass()));
	if (ensure(AttributeComp))
	{
		if (ASPlayerState* PS = InstigatorPawn->GetPlayerState<ASPlayerState>())
		{
			if (PS->RemoveCredits(CreditCost))
			{
				if (AttributeComp->ApplyHealthChange(this, AttributeComp->GetHealthMax()))
				{
					HideAndCooldownPowerup();
				}
				else
				{
					PS->AddCredits(CreditCost);
				}
			}
		}
	}
}
