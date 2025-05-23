
#pragma once

#include "DataAssets/DA_StartUpDataBase.h"
#include "DA_EnemyStartUpData.generated.h"

class UW1EnemyGameplayAbility;

/**
 * 
 */
UCLASS()
class W1_API UDA_EnemyStartUpData : public UDA_StartUpDataBase
{
	GENERATED_BODY()
public:
	virtual void GiveToAbilitySystemComponent(UW1AbilitySystemComponent* InASCToGive, int32 ApplyLevel = 1) override;
	
private:
	UPROPERTY(EditDefaultsOnly, Category = "StartUpData")
	TArray<TSubclassOf<UW1EnemyGameplayAbility>> EnemyCombatAbilities;
};
