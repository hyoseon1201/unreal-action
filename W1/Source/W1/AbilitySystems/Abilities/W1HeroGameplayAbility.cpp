
#include "AbilitySystems/Abilities/W1HeroGameplayAbility.h"
#include "Characters/W1HeroCharacter.h"
#include "Controllers/W1HeroController.h"

AW1HeroCharacter* UW1HeroGameplayAbility::GetHeroCharacterFromActorInfo()
{
	if (!CachedW1HeroCharacter.IsValid())
	{
		CachedW1HeroCharacter = Cast<AW1HeroCharacter>(CurrentActorInfo->AvatarActor);
	}

	return CachedW1HeroCharacter.IsValid() ? CachedW1HeroCharacter.Get() : nullptr;
}

AW1HeroController* UW1HeroGameplayAbility::GetHeroControllerFromActorInfo()
{
	if (!CachedW1HeroController.IsValid())
	{
		CachedW1HeroController = Cast<AW1HeroController>(CurrentActorInfo->PlayerController);
	}

	return CachedW1HeroController.IsValid() ? CachedW1HeroController.Get() : nullptr;
}

UHeroCombatComponent* UW1HeroGameplayAbility::GetHeroCombatComponentFromActorInfo()
{
	return GetHeroCharacterFromActorInfo()->GetHeroCombatComponent();
}
