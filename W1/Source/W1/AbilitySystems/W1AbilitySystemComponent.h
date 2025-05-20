
#pragma once

#include "AbilitySystemComponent.h"
#include "W1AbilitySystemComponent.generated.h"

/**
 * 
 */
UCLASS()
class W1_API UW1AbilitySystemComponent : public UAbilitySystemComponent
{
	GENERATED_BODY()
	
public:
	void OnAbilityInputPressed(const FGameplayTag& InInputTag);
	void OnAbilityInputReleased(const FGameplayTag& InInputTag);
};
