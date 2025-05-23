
#include "DataAssets/DA_EnemyStartUpData.h"
#include "AbilitySystems/W1AbilitySystemComponent.h"
#include "AbilitySystems/Abilities/W1EnemyGameplayAbility.h"

void UDA_EnemyStartUpData::GiveToAbilitySystemComponent(UW1AbilitySystemComponent* InASCToGive, int32 ApplyLevel)
{
	Super::GiveToAbilitySystemComponent(InASCToGive, ApplyLevel);

	if (!EnemyCombatAbilities.IsEmpty())
	{
		for (const TSubclassOf<UW1EnemyGameplayAbility>& AbilityClass : EnemyCombatAbilities)
		{
			if (!AbilityClass)
			{
				continue;
			}

			FGameplayAbilitySpec AbilitySpec(AbilityClass);
			AbilitySpec.SourceObject = InASCToGive->GetAvatarActor();
			AbilitySpec.Level = ApplyLevel;

			InASCToGive->GiveAbility(AbilitySpec);
		}
	}
}
