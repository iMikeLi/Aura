// Copyright iMikeLi


#pragma once

#include "CoreMinimal.h"
#include "AbilitySystem/Abilities/AuraProjectileSpell.h"
#include "AuraFireBolt.generated.h"

/**
 *
 */
UCLASS()
class AURA_API UAuraFireBolt : public UAuraProjectileSpell
{
	GENERATED_BODY()
public:
	virtual FString GetDescriptionPure() override;
	virtual FString GetActualLevelDescription(int32 Level) override;
	virtual FString GetNextLevelDescription(int32 Level) override;
};