
#include "AbilitySystems/W1AbilitySystemComponent.h"
#include "AbilitySystems/Abilities/W1GameplayAbility.h"
#include "W1GameplayTags.h"

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

		if (InInputTag.MatchesTag(W1GameplayTags::InputTag_Toggleable))
		{
			if (AbilitySpec.IsActive())
			{
				CancelAbilityHandle(AbilitySpec.Handle);
			}
			else
			{
				TryActivateAbility(AbilitySpec.Handle);
			}
		}
		else
		{
			TryActivateAbility(AbilitySpec.Handle);
		}
	}
}

void UW1AbilitySystemComponent::OnAbilityInputReleased(const FGameplayTag& InInputTag)
{
	if (!InInputTag.IsValid() || !InInputTag.MatchesTag(W1GameplayTags::InputTag_MustBeHeld))
	{
		return;
	}

	TArray<FGameplayAbilitySpec> AbilitySpecsCopy = GetActivatableAbilities();
	for (const FGameplayAbilitySpec& AbilitySpec : AbilitySpecsCopy)
	{
		if (AbilitySpec.DynamicAbilityTags.HasTagExact(InInputTag) && AbilitySpec.IsActive())
		{
			CancelAbilityHandle(AbilitySpec.Handle);
		}
	}
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
		
		FGameplayAbilitySpec AbilitySpec(static_cast<TSubclassOf<UGameplayAbility>>(AbilitySet.AbilityToGrant));
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

bool UW1AbilitySystemComponent::TryActivateAbilityByTag(FGameplayTag AbilityTagToActivate)
{
	check(AbilityTagToActivate.IsValid());

	TArray<FGameplayAbilitySpec*> FoundAbilitySpecs;

	GetActivatableGameplayAbilitySpecsByAllMatchingTags(AbilityTagToActivate.GetSingleTagContainer(), FoundAbilitySpecs);
	
	if (!FoundAbilitySpecs.IsEmpty())
	{
		const int32 RandomAbilityIndex = FMath::RandRange(0, FoundAbilitySpecs.Num() - 1);
		FGameplayAbilitySpec* SpecToActivate = FoundAbilitySpecs[RandomAbilityIndex];

		check(SpecToActivate);

		if (!SpecToActivate->IsActive())
		{
			return TryActivateAbility(SpecToActivate->Handle);
		}
	}
	
	return false;
}
