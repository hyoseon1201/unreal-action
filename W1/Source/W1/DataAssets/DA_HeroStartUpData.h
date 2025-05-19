
#pragma once

#include "CoreMinimal.h"
#include "DataAssets/DA_StartUpDataBase.h"
#include "GameplayTagContainer.h"
#include "DA_HeroStartUpData.generated.h"

USTRUCT(BlueprintType)
struct FW1HeroAbilitySet
{
	GENERATED_BODY()

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, meta = (Category = "InputTag"))
	FGameplayTag InputTag;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	TSubclassOf<UW1GameplayAbility> AbilityToGrant;

	bool IsValid() const;
};

/**
 * 
 */
UCLASS()
class W1_API UDA_HeroStartUpData : public UDA_StartUpDataBase
{
	GENERATED_BODY()

public:
	virtual void GiveToAbilitySystemComponent(UW1AbilitySystemComponent* InASCToGive, int32 ApplyLevel = 1) override;
	
private:
	UPROPERTY(EditDefaultsOnly, Category = "StartUpData", meta = (TitleProperty = "InputTag"))
	TArray<FW1HeroAbilitySet> HeroStartUpAbilitySets;
};
