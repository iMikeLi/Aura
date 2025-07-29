// Copyright iMikeLi


#include "AbilitySystem/Abilities/ArcaneShards.h"

FString UArcaneShards::GetDescriptionPure()
{
	return FString::Printf(TEXT(
		// Title
		"<Title>ArcaneShards</>\n\n"

		// Description
		"<Default>Summon shards of arcane energy</>"));
}

FString UArcaneShards::GetActualLevelDescription(int32 Level)
{
	const int32 ScaledDamage = Damage.GetValueAtLevel(Level);
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
		// Number of Chains
		"<Small>Shards: </><Damage>%d</>"),

		// Values
		Level,
		ScaledDamage,
		ManaCost,
		Cooldown,
		FMath::Min(Level, MaxNumShards));
}

FString UArcaneShards::GetNextLevelDescription(int32 Level)
{
	const int32 ScaledDamage = Damage.GetValueAtLevel(Level);
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
		// Number of Chains
		"<Small>Shards: </><Damage>%d</>"),

		// Values
		Level,
		ScaledDamage,
		ManaCost,
		Cooldown,
		FMath::Min(Level, MaxNumShards));
}