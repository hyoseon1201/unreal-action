
#pragma once

#include "Abilities/GameplayAbility.h"
#include "W1GameplayAbility.generated.h"

class UPawnCombatComponent;
class UW1AbilitySystemComponent;

UENUM(BlueprintType)
enum class EW1AbilityActivationPolicy : uint8
{
	OnTriggered,
	OnGiven
};

/**
 * 
 */
UCLASS()
class W1_API UW1GameplayAbility : public UGameplayAbility
{
	GENERATED_BODY()
	
protected:
	//~ Begin UGameplayAbility Interface
	virtual void OnGiveAbility(const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilitySpec& Spec) override;
	
	virtual void EndAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo, bool bReplicateEndAbility, bool bWasCancelled) override;
	//~ End UGameplayAbility Interface

	UPROPERTY(EditDefaultsOnly, Category = "W1Ability")
	EW1AbilityActivationPolicy AbilityActivationPolicy = EW1AbilityActivationPolicy::OnTriggered;

	UFUNCTION(BlueprintPure, Category = "W1|Ability")
	UPawnCombatComponent* GetPawnCombatComponentFromActorInfo() const;

	UFUNCTION(BlueprintPure, Category = "W1|Ability")
	UW1AbilitySystemComponent* GetW1AbilitySystemComponent() const;
};
