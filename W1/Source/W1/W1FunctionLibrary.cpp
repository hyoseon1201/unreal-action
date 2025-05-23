
#include "W1FunctionLibrary.h"
#include "AbilitySystemBlueprintLibrary.h"
#include "AbilitySystems/W1AbilitySystemComponent.h"

UW1AbilitySystemComponent* UW1FunctionLibrary::NativeGetW1ASCFromActor(AActor* InActor)
{
	check(InActor);

	return CastChecked<UW1AbilitySystemComponent>(UAbilitySystemBlueprintLibrary::GetAbilitySystemComponent(InActor));
}

void UW1FunctionLibrary::AddGameplayTagToActorIfNone(AActor* InActor, FGameplayTag TagToAdd)
{
	UW1AbilitySystemComponent* ASC = NativeGetW1ASCFromActor(InActor);

	if (!ASC->HasMatchingGameplayTag(TagToAdd))
	{
		ASC->AddLooseGameplayTag(TagToAdd);
	}
}

void UW1FunctionLibrary::RemoveGTameplayTagFromActorIfFound(AActor* InActor, FGameplayTag TagToRemove)
{
	UW1AbilitySystemComponent* ASC = NativeGetW1ASCFromActor(InActor);

	if (ASC->HasMatchingGameplayTag(TagToRemove))
	{
		ASC->RemoveLooseGameplayTag(TagToRemove);
	}
}

bool UW1FunctionLibrary::NativeDoesActorHaveTag(AActor* InActor, FGameplayTag TagToCheck)
{
	UW1AbilitySystemComponent* ASC = NativeGetW1ASCFromActor(InActor);

	return ASC->HasMatchingGameplayTag(TagToCheck);
}

void UW1FunctionLibrary::BP_DoesActorHaveTag(AActor* InActor, FGameplayTag TagToCheck, EW1ConfirmType& OutConfirmType)
{
	OutConfirmType = NativeDoesActorHaveTag(InActor, TagToCheck) ? EW1ConfirmType::Yes : EW1ConfirmType::No;
}
