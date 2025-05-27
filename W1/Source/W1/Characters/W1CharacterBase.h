
#pragma once

#include "GameFramework/Character.h"
#include "AbilitySystemInterface.h"
#include "Interfaces/PawnCombatInterface.h"
#include "Interfaces/PawnUIInterface.h"
#include "W1CharacterBase.generated.h"

class UW1AbilitySystemComponent;
class UW1AttributeSet;
class UDA_StartUpDataBase;

UCLASS()
class W1_API AW1CharacterBase : public ACharacter, public IAbilitySystemInterface, public IPawnCombatInterface, public IPawnUIInterface
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AW1CharacterBase();

	//~ Begin AbilitySystem Interface
	virtual UAbilitySystemComponent* GetAbilitySystemComponent() const;
	//~ End AbilitySystem Interface

	//~ Begin PawnCombatInterface Interface
	virtual UPawnCombatComponent* GetPawnCombatComponent() const override;
	//~ End PawnCombatInterface Interface

	//~ Begin IPawnUIInterface Interface
	virtual UPawnUIComponent* GetPawnUIComponent() const override;
	//~ End IPawnUIInterface Interface
protected:
	//~ Begin APawn Interface
	virtual void PossessedBy(AController* NewController) override;
	//~ End APawn Interface

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "AbilitySystem")
	UW1AbilitySystemComponent* W1AbilitySystemComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "AbilitySystem")
	UW1AttributeSet* W1AttributeSet;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "CharacterData")
	TSoftObjectPtr<UDA_StartUpDataBase> CharacterStartUpData;

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
