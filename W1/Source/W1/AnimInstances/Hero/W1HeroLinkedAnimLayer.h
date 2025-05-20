
#pragma once

#include "AnimInstances/W1AnimInstanceBase.h"
#include "W1HeroLinkedAnimLayer.generated.h"

class UW1HeroAnimInstance;

/**
 * 
 */
UCLASS()
class W1_API UW1HeroLinkedAnimLayer : public UW1AnimInstanceBase
{
	GENERATED_BODY()
	
public:
	UFUNCTION(BlueprintPure, meta = (BlueprintThreadSafe))
	UW1HeroAnimInstance* GetHeroAnimInstance() const;
};
