
#pragma once

#include "Kismet/BlueprintFunctionLibrary.h"
#include "W1FunctionLibrary.generated.h"

class UW1AbilitySystemComponent;

UENUM()
enum class EW1ConfirmType : uint8
{
	Yes,
	No
};

/**
 * 
 */
UCLASS()
class W1_API UW1FunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	
public:
	static UW1AbilitySystemComponent* NativeGetW1ASCFromActor(AActor* InActor);

	UFUNCTION(BlueprintCallable, Category = "W1|FunctionLibrary")
	static void AddGameplayTagToActorIfNone(AActor* InActor, FGameplayTag TagToAdd);

	UFUNCTION(BlueprintCallable, Category = "W1|FunctionLibrary")
	static void RemoveGTameplayTagFromActorIfFound(AActor* InActor, FGameplayTag TagToRemove);

	static bool NativeDoesActorHaveTag(AActor* InActor, FGameplayTag TagToCheck);

	UFUNCTION(BlueprintCallable, Category = "W1|FunctionLibrary", meta = (DisplayName = "Does Actor Have Tag", ExpandEnumAsExecs = "OutConfirmType"))
	static void BP_DoesActorHaveTag(AActor* InActor, FGameplayTag TagToCheck, EW1ConfirmType& OutConfirmType);
};
