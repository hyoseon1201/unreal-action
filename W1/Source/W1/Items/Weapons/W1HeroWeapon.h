
#pragma once

#include "Items/Weapons/W1WeaponBase.h"
#include "W1Types/W1StructTypes.h"
#include "GameplayAbilitySpecHandle.h"
#include "W1HeroWeapon.generated.h"

/**
 * 
 */
UCLASS()
class W1_API AW1HeroWeapon : public AW1WeaponBase
{
	GENERATED_BODY()
	
public:
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "WeaponData")
	FW1HeroWeaponData HeroWeaponData;

	UFUNCTION(BlueprintCallable)
	void AssignGrantedAbilitySpecHandles(const TArray<FGameplayAbilitySpecHandle>& InSpecHandles);

	UFUNCTION(BlueprintPure)
	TArray<FGameplayAbilitySpecHandle> GetGrantedAbilitySpecHandles() const;

private:
	TArray<FGameplayAbilitySpecHandle> GrantedAbilitySpecHandles;
};
