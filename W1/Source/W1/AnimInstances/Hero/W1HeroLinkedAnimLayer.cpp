
#include "AnimInstances/Hero/W1HeroLinkedAnimLayer.h"
#include "AnimInstances/Hero/W1HeroAnimInstance.h"

UW1HeroAnimInstance* UW1HeroLinkedAnimLayer::GetHeroAnimInstance() const
{
	return Cast<UW1HeroAnimInstance>(GetOwningComponent()->GetAnimInstance());
}
