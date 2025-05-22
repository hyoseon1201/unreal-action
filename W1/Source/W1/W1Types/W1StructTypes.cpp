
#include "W1Types/W1StructTypes.h"
#include "AbilitySystems/Abilities/W1GameplayAbility.h"

bool FW1HeroAbilitySet::IsValid() const
{
	return InputTag.IsValid() && AbilityToGrant;
}