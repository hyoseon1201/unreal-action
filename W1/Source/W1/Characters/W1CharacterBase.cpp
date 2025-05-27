
#include "Characters/W1CharacterBase.h"
#include "AbilitySystems/W1AbilitySystemComponent.h"
#include "AbilitySystems/W1AttributeSet.h"

// Sets default values
AW1CharacterBase::AW1CharacterBase()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;
	PrimaryActorTick.bStartWithTickEnabled = false;

	GetMesh()->bReceivesDecals = false;

	W1AbilitySystemComponent = CreateDefaultSubobject<UW1AbilitySystemComponent>(TEXT("W1AbilitySystemComponent"));
	W1AttributeSet = CreateDefaultSubobject<UW1AttributeSet>(TEXT("W1AttributeSet"));
}

UAbilitySystemComponent* AW1CharacterBase::GetAbilitySystemComponent() const
{
	return GetW1AbilitySystemComponent();
}

UPawnCombatComponent* AW1CharacterBase::GetPawnCombatComponent() const
{
	return nullptr;
}

UPawnUIComponent* AW1CharacterBase::GetPawnUIComponent() const
{
	return nullptr;
}

void AW1CharacterBase::PossessedBy(AController* NewController)
{
	Super::PossessedBy(NewController);

	if (W1AbilitySystemComponent)
	{
		W1AbilitySystemComponent->InitAbilityActorInfo(this, this);

		ensureMsgf(!CharacterStartUpData.IsNull(), TEXT("Forgot to assign start up data to %s"), *GetName());
	}
}

