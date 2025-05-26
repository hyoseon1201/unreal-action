
#include "AbilitySystems/Abilities/W1GameplayAbility.h"
#include "AbilitySystems/W1AbilitySystemComponent.h"
#include "Components/Combat/PawnCombatComponent.h"
#include "AbilitySystemBlueprintLibrary.h"

void UW1GameplayAbility::OnGiveAbility(const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilitySpec& Spec)
{
	Super::OnGiveAbility(ActorInfo, Spec);

	if (AbilityActivationPolicy == EW1AbilityActivationPolicy::OnGiven)
	{
		if (ActorInfo && !Spec.IsActive())
		{
			ActorInfo->AbilitySystemComponent->TryActivateAbility(Spec.Handle);
		}
	}
}

void UW1GameplayAbility::EndAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo, bool bReplicateEndAbility, bool bWasCancelled)
{
	Super::EndAbility(Handle, ActorInfo, ActivationInfo, bReplicateEndAbility, bWasCancelled);

	if (AbilityActivationPolicy == EW1AbilityActivationPolicy::OnGiven)
	{
		if (ActorInfo)
		{
			ActorInfo->AbilitySystemComponent->ClearAbility(Handle);
		}
	}
}

UPawnCombatComponent* UW1GameplayAbility::GetPawnCombatComponentFromActorInfo() const
{
	return GetAvatarActorFromActorInfo()->FindComponentByClass<UPawnCombatComponent>();
}

UW1AbilitySystemComponent* UW1GameplayAbility::GetW1AbilitySystemComponentFromActorInfo() const
{
	return Cast<UW1AbilitySystemComponent>(CurrentActorInfo->AbilitySystemComponent);
}

FActiveGameplayEffectHandle UW1GameplayAbility::NativeApplyEffectSpecHandleToTarget(AActor* TargetActor, const FGameplayEffectSpecHandle& InSpecHandle)
{
	UAbilitySystemComponent* ASC = UAbilitySystemBlueprintLibrary::GetAbilitySystemComponent(TargetActor);
	
	if (!ASC)
	{
		if (TargetActor)
		{
			UE_LOG(LogTemp, Error, TEXT("TargetActor is not null! Name: %s, Class: %s"),
				*TargetActor->GetName(), *TargetActor->GetClass()->GetName());
		}
		else
		{
			UE_LOG(LogTemp, Error, TEXT("TargetActor is nullptr!"));
		}
	}
	else
	{
		UE_LOG(LogTemp, Log, TEXT("ASC is valid for TargetActor: %s (%s)"),
			*TargetActor->GetName(), *TargetActor->GetClass()->GetName());
	}

	check(ASC && InSpecHandle.IsValid());
	
	return GetW1AbilitySystemComponentFromActorInfo()->ApplyGameplayEffectSpecToTarget(*InSpecHandle.Data, ASC);
}

FActiveGameplayEffectHandle UW1GameplayAbility::BP_ApplyEffectSpecHandleToTarget(AActor* TargetActor, const FGameplayEffectSpecHandle& InSpecHandle, EW1SuccessType& OutSuccessType)
{
	FActiveGameplayEffectHandle ActiveGameplayEffectHandle = NativeApplyEffectSpecHandleToTarget(TargetActor, InSpecHandle);

	OutSuccessType = ActiveGameplayEffectHandle.WasSuccessfullyApplied() ? EW1SuccessType::Successful : EW1SuccessType::Failed;

	return ActiveGameplayEffectHandle;
}
