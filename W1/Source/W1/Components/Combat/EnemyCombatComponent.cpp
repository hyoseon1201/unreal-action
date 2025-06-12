
#include "Components/Combat/EnemyCombatComponent.h"
#include "AbilitySystemBlueprintLibrary.h"
#include "W1GameplayTags.h"
#include "W1FunctionLibrary.h"

#include "W1DebugHelper.h"

void UEnemyCombatComponent::OnHitTargetActor(AActor* HitActor)
{
	if (OverlappedActors.Contains(HitActor))
	{
		return;
	}

	OverlappedActors.AddUnique(HitActor);

	bool bIsValidBlock = false;

	const bool bIsPlayerBlocking = UW1FunctionLibrary::NativeDoesActorHaveTag(HitActor, W1GameplayTags::Player_Status_Blocking);
	const bool bIsMyAttackUnblockable = UW1FunctionLibrary::NativeDoesActorHaveTag(GetOwningPawn(), W1GameplayTags::Enemy_Status_Unblockable);

	if (bIsPlayerBlocking && !bIsMyAttackUnblockable)
	{
		bIsValidBlock = UW1FunctionLibrary::IsValidBlock(GetOwningPawn(), HitActor);
	}

	FGameplayEventData EventData;
	EventData.Instigator = GetOwningPawn();
	EventData.Target = HitActor;

	if (bIsValidBlock)
	{
		UAbilitySystemBlueprintLibrary::SendGameplayEventToActor(HitActor, W1GameplayTags::Player_Event_SuccessfulBlock, EventData);
	}
	else
	{
		UAbilitySystemBlueprintLibrary::SendGameplayEventToActor(GetOwningPawn(), W1GameplayTags::Shared_Event_MeleeHit, EventData);
	}
}
