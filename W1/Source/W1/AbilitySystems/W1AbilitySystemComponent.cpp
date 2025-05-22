
#include "AbilitySystems/W1AbilitySystemComponent.h"
#include "AbilitySystems/Abilities/W1GameplayAbility.h"

void UW1AbilitySystemComponent::OnAbilityInputPressed(const FGameplayTag& InInputTag)
{
	if (!InInputTag.IsValid())
	{
		return;
	}

	TArray<FGameplayAbilitySpec> AbilitySpecsCopy = GetActivatableAbilities();
	for (const FGameplayAbilitySpec& AbilitySpec : AbilitySpecsCopy)
	{
		if (!AbilitySpec.DynamicAbilityTags.HasTagExact(InInputTag))
		{
			continue;
		}

		TryActivateAbility(AbilitySpec.Handle);
	}
}

void UW1AbilitySystemComponent::OnAbilityInputReleased(const FGameplayTag& InInputTag)
{
}

void UW1AbilitySystemComponent::GrantHeroWeaponAbilities(const TArray<FW1HeroAbilitySet>& InDefaultWeaponAbilities, int32 ApplyLevel, TArray<FGameplayAbilitySpecHandle>& OutGrantedAbilitySpecHandles)
{
	if (InDefaultWeaponAbilities.IsEmpty())
	{
		return;
	}

	for (const FW1HeroAbilitySet& AbilitySet : InDefaultWeaponAbilities)
	{
		if (!AbilitySet.IsValid())
		{
			continue;
		}
		
		FGameplayAbilitySpec AbilitySpec(AbilitySet.AbilityToGrant);
		AbilitySpec.SourceObject = GetAvatarActor();
		AbilitySpec.Level = ApplyLevel;
		AbilitySpec.DynamicAbilityTags.AddTag(AbilitySet.InputTag);

		OutGrantedAbilitySpecHandles.AddUnique(GiveAbility(AbilitySpec));
	}
}

void UW1AbilitySystemComponent::RemovedGrantedHeroWeaponAbilities(UPARAM(ref) TArray<FGameplayAbilitySpecHandle>& InSpecHandlesToRemove)
{
	if (InSpecHandlesToRemove.IsEmpty())
	{
		return;
	}

	for (const FGameplayAbilitySpecHandle& SpecHandle : InSpecHandlesToRemove)
	{
		if (SpecHandle.IsValid())
		{
			ClearAbility(SpecHandle);
		}
	}

	InSpecHandlesToRemove.Empty();
}