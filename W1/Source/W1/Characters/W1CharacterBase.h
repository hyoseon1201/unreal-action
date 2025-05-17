
#pragma once

#include "GameFramework/Character.h"
#include "AbilitySystemInterface.h"
#include "W1CharacterBase.generated.h"

class UW1AbilitySystemComponent;
class UW1AttributeSet;

UCLASS()
class W1_API AW1CharacterBase : public ACharacter, public IAbilitySystemInterface
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AW1CharacterBase();

	//~ Begin AbilitySystem Interface
	virtual UAbilitySystemComponent* GetAbilitySystemComponent() const;
	//~ End AbilitySystem Interface

protected:
	//~ Begin APawn Interface
	virtual void PossessedBy(AController* NewController) override;
	//~ End APawn Interface

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "AbilitySystem")
	UW1AbilitySystemComponent* W1AbilitySystemComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "AbilitySystem")
	UW1AttributeSet* W1AttributeSet;

public:
	FORCEINLINE UW1AbilitySystemComponent* GetW1AbilitySystemComponent() const
	{
		return W1AbilitySystemComponent;
	}

	FORCEINLINE UW1AttributeSet* GetW1AttributeSet() const
	{
		return W1AttributeSet;
	}
};
