
#pragma once

#include "Components/Combat/PawnCombatComponent.h"
#include "HeroCombatComponent.generated.h"

class AW1HeroWeapon;

/**
 * 
 */
UCLASS()
class W1_API UHeroCombatComponent : public UPawnCombatComponent
{
	GENERATED_BODY()
	
public:
	UFUNCTION(BlueprintPure, Category = "W1|Combat")
	AW1HeroWeapon* GetHeroCarriedWeaponByTag(FGameplayTag InWeaponTag);

	virtual void OnHitTargetActor(AActor* HitActor) override;
	virtual void OnWeaponPulledFromTargetActor(AActor* InteractedActor) override;
};
