
#include "Components/Combat/HeroCombatComponent.h"
#include "Items/Weapons/W1HeroWeapon.h"

AW1HeroWeapon* UHeroCombatComponent::GetHeroCarriedWeaponByTag(FGameplayTag InWeaponTag)
{
	return Cast<AW1HeroWeapon>(GetCharacterCarriedWeaponByTag(InWeaponTag));
}
