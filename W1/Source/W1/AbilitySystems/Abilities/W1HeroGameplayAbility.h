
#pragma once

#include "AbilitySystems/Abilities/W1GameplayAbility.h"
#include "W1HeroGameplayAbility.generated.h"

class AW1HeroCharacter;
class AW1HeroController;
class UHeroCombatComponent;

/**
 * 
 */
UCLASS()
class W1_API UW1HeroGameplayAbility : public UW1GameplayAbility
{
	GENERATED_BODY()
	
public:
	UFUNCTION(BlueprintPure, Category = "W1|Ability")
	AW1HeroCharacter* GetHeroCharacterFromActorInfo();

	UFUNCTION(BlueprintPure, Category = "W1|Ability")
	AW1HeroController* GetHeroControllerFromActorInfo();

	UFUNCTION(BlueprintPure, Category = "W1|Ability")
	UHeroCombatComponent* GetHeroCombatComponentFromActorInfo();

private:
	TWeakObjectPtr<AW1HeroCharacter> CachedW1HeroCharacter;
	TWeakObjectPtr<AW1HeroController> CachedW1HeroController;
};
