
#include "W1Types/W1StructTypes.h"
#include "AbilitySystems/Abilities/W1HeroGameplayAbility.h"

bool FW1HeroAbilitySet::IsValid() const
{
	return InputTag.IsValid() && AbilityToGrant;
}