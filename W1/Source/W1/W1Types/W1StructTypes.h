
#pragma once

#include "W1StructTypes.generated.h"

class UW1HeroLinkedAnimLayer;

USTRUCT(BlueprintType)
struct FW1HeroWeaponData
{
	GENERATED_BODY()

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	TSubclassOf<UW1HeroLinkedAnimLayer> WeaponAnimLayerToLink;
};