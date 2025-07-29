// Copyright iMikeLi

#pragma once

#include "CoreMinimal.h"
#include "AbilitySystem/Abilities/AuraBeamSpell.h"
#include "Electrocute.generated.h"

/**
 *
 */
UCLASS()
class AURA_API UElectrocute : public UAuraBeamSpell
{
	GENERATED_BODY()
public:
	virtual FString GetDescriptionPure() override;
	virtual FString GetActualLevelDescription(int32 Level) override;
	virtual FString GetNextLevelDescription(int32 Level) override;
};