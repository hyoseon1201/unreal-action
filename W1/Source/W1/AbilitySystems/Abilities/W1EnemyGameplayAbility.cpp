
#include "AbilitySystems/Abilities/W1EnemyGameplayAbility.h"
#include "Characters/W1EnemyCharacter.h"

AW1EnemyCharacter* UW1EnemyGameplayAbility::GetEnemyCharacterFromActorInfo()
{
	if (!CachedW1EnemyCharacter.IsValid())
	{
		CachedW1EnemyCharacter = Cast<AW1EnemyCharacter>(CurrentActorInfo->AvatarActor);
	}

	return CachedW1EnemyCharacter.IsValid() ? CachedW1EnemyCharacter.Get() : nullptr;
}

UEnemyCombatComponent* UW1EnemyGameplayAbility::GetEnemyCombatComponentFromActorInfo()
{
	return GetEnemyCharacterFromActorInfo()->GetEnemyCombatComponent();
}
