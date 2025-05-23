
#pragma once

#include "AbilitySystems/Abilities/W1GameplayAbility.h"
#include "W1EnemyGameplayAbility.generated.h"

class AW1EnemyCharacter;
class UEnemyCombatComponent;

/**
 * 
 */
UCLASS()
class W1_API UW1EnemyGameplayAbility : public UW1GameplayAbility
{
	GENERATED_BODY()
	
public:
	UFUNCTION(BlueprintPure, Category = "W1|Ability")
	AW1EnemyCharacter* GetEnemyCharacterFromActorInfo();

	UFUNCTION(BlueprintPure, Category = "W1|Ability")
	UEnemyCombatComponent* GetEnemyCombatComponentFromActorInfo();

private:
	TWeakObjectPtr<AW1EnemyCharacter> CachedW1EnemyCharacter;
};
