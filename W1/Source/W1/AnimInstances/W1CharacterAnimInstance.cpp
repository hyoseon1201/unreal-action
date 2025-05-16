
#include "AnimInstances/W1CharacterAnimInstance.h"
#include "Characters/W1CharacterBase.h"
#include "GameFramework/CharacterMovementComponent.h"

void UW1CharacterAnimInstance::NativeInitializeAnimation()
{
	OwningCharacter = Cast<AW1CharacterBase>(TryGetPawnOwner());

	if (OwningCharacter)
	{
		OwningMovementComponent = OwningCharacter->GetCharacterMovement();
	}
}

void UW1CharacterAnimInstance::NativeThreadSafeUpdateAnimation(float DeltaSeconds)
{
	if (!OwningCharacter || !OwningMovementComponent)
	{
		return;
	}

	GroundSpeed = OwningCharacter->GetVelocity().Size2D();

	bAsAcceleration = OwningMovementComponent->GetCurrentAcceleration().SizeSquared2D() > 0.f;
}
