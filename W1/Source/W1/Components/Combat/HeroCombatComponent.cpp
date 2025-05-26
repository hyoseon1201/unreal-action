
#include "Components/Combat/HeroCombatComponent.h"
#include "Items/Weapons/W1HeroWeapon.h"
#include "AbilitySystemBlueprintLibrary.h"
#include "W1GameplayTags.h"

#include "W1DebugHelper.h"

AW1HeroWeapon* UHeroCombatComponent::GetHeroCarriedWeaponByTag(FGameplayTag InWeaponTag)
{
	return Cast<AW1HeroWeapon>(GetCharacterCarriedWeaponByTag(InWeaponTag));
}

void UHeroCombatComponent::OnHitTargetActor(AActor* HitActor)
{
	if (OverlappedActors.Contains(HitActor))
	{
		return;
	}

	OverlappedActors.AddUnique(HitActor);

	FGameplayEventData Data;
	Data.Instigator = GetOwningPawn();
	Data.Target = HitActor;

	UAbilitySystemBlueprintLibrary::SendGameplayEventToActor(GetOwningPawn(), W1GameplayTags::Shared_Event_MeleeHit, Data);
}

void UHeroCombatComponent::OnWeaponPulledFromTargetActor(AActor* InteractedActor)
{
	
}
