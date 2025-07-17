// Copyright iMikeLi



#include "AbilitySystem/Abilities/AuraFireBolt.h"
#include "Aura/Public/AuraGameplayTags.h"

FString UAuraFireBolt::GetDescriptionPure()
{
	return FString::Printf(TEXT(
		// Title
		"<Title>FIRE BOLT</>\n\n"

		// Description
		"<Default> Launches Firebolts with a chance to burn.</>"));
}

FString UAuraFireBolt::GetActualLevelDescription(int32 Level)
{
	const int32 Damage = GetDamageByDamageType(Level, FAuraGameplayTags::Get().Damage_Fire);
	const float ManaCost = FMath::Abs(GetManaCost(Level));
	const float Cooldown = GetCooldown(Level);
	return FString::Printf(TEXT(
		// Title
		"<Title>ACTUAL LEVEL: </>\n\n"


		// Level
		"<Small>Level: </><Level>%d</>\n"
		// Damage
		"<Small>Damage: </><Damage>%d</>\n"
		// ManaCost
		"<Small>ManaCost: </><ManaCost>%.1f</>\n"
		// Cooldown
		"<Small>Cooldown: </><Cooldown>%.1f</>\n"
		// Number of FireBolts
		"<Small>Projectiles: </><Damage>%d</>"),

			// Values
			Level,
			Damage,
			ManaCost,
			Cooldown,
			FMath::Min(Level, NumProjectiles));
}

FString UAuraFireBolt::GetNextLevelDescription(int32 Level)
{
	const int32 Damage = GetDamageByDamageType(Level, FAuraGameplayTags::Get().Damage_Fire);
	const float ManaCost = FMath::Abs(GetManaCost(Level));
	const float Cooldown = GetCooldown(Level);
	return FString::Printf(TEXT(
		// Title
		"<Title>NEXT LEVEL: </>\n\n"

		// Level
		"<Small>Level: </><Level>%d</>\n"
		// Damage
		"<Small>Damage: </><Damage>%d</>\n"
		// ManaCost
		"<Small>ManaCost: </><ManaCost>%.1f</>\n"
		// Cooldown
		"<Small>Cooldown: </><Cooldown>%.1f</>\n"
		// Number of FireBolts
		"<Small>Projectiles: </><Damage>%d</>"),

		// Values
		Level,
		Damage,
		ManaCost,
		Cooldown,
		FMath::Min(Level, NumProjectiles));
}