
#pragma once

#include "Engine/DataAsset.h"
#include "DA_StartUpDataBase.generated.h"

class UW1GameplayAbility;
class UW1AbilitySystemComponent;

/**
 * 
 */
UCLASS()
class W1_API UDA_StartUpDataBase : public UDataAsset
{
	GENERATED_BODY()

public:
	virtual void GiveToAbilitySystemComponent(UW1AbilitySystemComponent* InASCToGive, int32 ApplyLevel = 1);
	
protected:
	UPROPERTY(EditDefaultsOnly, Category = "StartUpData")
	TArray<TSubclassOf<UW1GameplayAbility>> ActivateOnGivenAbilities;

	UPROPERTY(EditDefaultsOnly, Category = "StartUpData")
	TArray<TSubclassOf<UW1GameplayAbility>> ReactiveAbilities;

	void GrantAbilities(const TArray<TSubclassOf<UW1GameplayAbility>>& InAbilitiesToGive, UW1AbilitySystemComponent* InASCToGive, int32 ApplyLevel = 1);
};
