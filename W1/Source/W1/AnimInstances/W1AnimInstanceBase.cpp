
#include "AnimInstances/W1AnimInstanceBase.h"
#include "W1FunctionLibrary.h"

bool UW1AnimInstanceBase::DoesOwnerHaveTag(FGameplayTag TagToCheck) const
{
    if (APawn* OwningPawn = TryGetPawnOwner())
    {
        return UW1FunctionLibrary::NativeDoesActorHaveTag(OwningPawn, TagToCheck);
    }

    return false;
}
