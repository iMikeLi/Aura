// Copyright iMikeLi


#include "AbilitySystem/Abilities/Electrocute.h"

FString UElectrocute::GetDescriptionPure()
{
	return FString::Printf(TEXT(
		// Title
		"<Title>Electrocute</>\n\n"

		// Description
		"<Default>Throws a Lightningchain with a chance to Stun</>"));
}

FString UElectrocute::GetActualLevelDescription(int32 Level)
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
		"<Small>Chaining Targets: </><Damage>%d</>"),

		// Values
		Level,
		ScaledDamage,
		ManaCost,
		Cooldown,
		FMath::Min(Level-1, MaxNumShockTargets));
}

FString UElectrocute::GetNextLevelDescription(int32 Level)
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
		"<Small>Chaining Targets: </><Damage>%d</>"),

		// Values
		Level,
		ScaledDamage,
		ManaCost,
		Cooldown,
		FMath::Min(Level-1, MaxNumShockTargets));

}