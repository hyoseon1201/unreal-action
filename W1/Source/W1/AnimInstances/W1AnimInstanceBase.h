
#pragma once

#include "Animation/AnimInstance.h"
#include "GameplayTagContainer.h"
#include "W1AnimInstanceBase.generated.h"

/**
 * 
 */
UCLASS()
class W1_API UW1AnimInstanceBase : public UAnimInstance
{
	GENERATED_BODY()
	
protected:
	UFUNCTION(BlueprintPure, meta = (BlueprintThreadSafe))
	bool DoesOwnerHaveTag(FGameplayTag TagToCheck) const;
};
