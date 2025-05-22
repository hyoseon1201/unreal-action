
#pragma once

#include "DataAssets/DA_StartUpDataBase.h"
#include "W1Types/W1StructTypes.h"
#include "DA_HeroStartUpData.generated.h"


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
