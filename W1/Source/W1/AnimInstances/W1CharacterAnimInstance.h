

#pragma once

#include "CoreMinimal.h"
#include "AnimInstances/W1AnimInstanceBase.h"
#include "W1CharacterAnimInstance.generated.h"

class AW1CharacterBase;
class UCharacterMovementComponent;

/**
 * 
 */
UCLASS()
class W1_API UW1CharacterAnimInstance : public UW1AnimInstanceBase
{
	GENERATED_BODY()
	
public:
	virtual void NativeInitializeAnimation() override;
	virtual void NativeThreadSafeUpdateAnimation(float DeltaSeconds) override;

protected:
	UPROPERTY()
	AW1CharacterBase* OwningCharacter;

	UPROPERTY()
	UCharacterMovementComponent* OwningMovementComponent;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = "AnimData|LocomotionData")
	float GroundSpeed;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = "AnimData|LocomotionData")
	bool bAsAcceleration;
};
