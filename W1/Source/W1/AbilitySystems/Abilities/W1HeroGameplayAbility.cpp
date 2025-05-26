
#include "AbilitySystems/Abilities/W1HeroGameplayAbility.h"
#include "Characters/W1HeroCharacter.h"
#include "Controllers/W1HeroController.h"
#include "AbilitySystems/W1AbilitySystemComponent.h"
#include "W1GameplayTags.h"

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

FGameplayEffectSpecHandle UW1HeroGameplayAbility::MakeHeroDamageEffectSpecHandle(TSubclassOf<UGameplayEffect> EffectClass, float InWeaponBaseDamage, FGameplayTag InCurrentAttackTypeTag, int32 InCurrentComboCount)
{
	check(EffectClass);

	FGameplayEffectContextHandle ContextHandle = GetW1AbilitySystemComponentFromActorInfo()->MakeEffectContext();
	ContextHandle.SetAbility(this);
	ContextHandle.AddSourceObject(GetAvatarActorFromActorInfo());
	ContextHandle.AddInstigator(GetAvatarActorFromActorInfo(), GetAvatarActorFromActorInfo());

	FGameplayEffectSpecHandle EffectSpecHandle = GetW1AbilitySystemComponentFromActorInfo()->MakeOutgoingSpec(EffectClass, GetAbilityLevel(), ContextHandle);

	EffectSpecHandle.Data->SetSetByCallerMagnitude(W1GameplayTags::Shared_SetByCaller_BaseDamage, InWeaponBaseDamage);

	if (InCurrentAttackTypeTag.IsValid())
	{
		EffectSpecHandle.Data->SetSetByCallerMagnitude(InCurrentAttackTypeTag, InCurrentComboCount);
	}

	return EffectSpecHandle;
}
