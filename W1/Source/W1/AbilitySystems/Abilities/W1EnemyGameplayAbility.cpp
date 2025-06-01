
#include "AbilitySystems/Abilities/W1EnemyGameplayAbility.h"
#include "Characters/W1EnemyCharacter.h"
#include "AbilitySystems/W1AbilitySystemComponent.h"
#include "W1GameplayTags.h"

AW1EnemyCharacter* UW1EnemyGameplayAbility::GetEnemyCharacterFromActorInfo()
{
	if (!CachedW1EnemyCharacter.IsValid())
	{
		CachedW1EnemyCharacter = Cast<AW1EnemyCharacter>(CurrentActorInfo->AvatarActor);
	}

	return CachedW1EnemyCharacter.IsValid() ? CachedW1EnemyCharacter.Get() : nullptr;
}

UEnemyCombatComponent* UW1EnemyGameplayAbility::GetEnemyCombatComponentFromActorInfo()
{
	return GetEnemyCharacterFromActorInfo()->GetEnemyCombatComponent();
}

FGameplayEffectSpecHandle UW1EnemyGameplayAbility::MakeEnemyDamageEffectSpecHandle(TSubclassOf<UGameplayEffect> EffectClass, const FScalableFloat& InDamageScalableFloat)
{
	check(EffectClass);

	FGameplayEffectContextHandle ContextHandle = GetW1AbilitySystemComponentFromActorInfo()->MakeEffectContext();
	ContextHandle.SetAbility(this);
	ContextHandle.AddSourceObject(GetAvatarActorFromActorInfo());
	ContextHandle.AddInstigator(GetAvatarActorFromActorInfo(), GetAvatarActorFromActorInfo());

	FGameplayEffectSpecHandle EffectSpecHandle = GetW1AbilitySystemComponentFromActorInfo()->MakeOutgoingSpec(EffectClass, GetAbilityLevel(), ContextHandle);

	EffectSpecHandle.Data->SetSetByCallerMagnitude(W1GameplayTags::Shared_SetByCaller_BaseDamage, InDamageScalableFloat.GetValueAtLevel(GetAbilityLevel()));

	return EffectSpecHandle;
}
