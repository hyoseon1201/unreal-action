
#include "Characters/W1EnemyCharacter.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Components/Combat/EnemyCombatComponent.h"
#include "Engine/AssetManager.h"
#include "DataAssets/DA_StartUpDataBase.h"
#include "Components/UI/EnemyUIComponent.h"

#include "W1DebugHelper.h"

AW1EnemyCharacter::AW1EnemyCharacter()
{
	AutoPossessAI = EAutoPossessAI::PlacedInWorldOrSpawned;

	bUseControllerRotationPitch = false;
	bUseControllerRotationRoll = false;
	bUseControllerRotationYaw = false;

	GetCharacterMovement()->bUseControllerDesiredRotation = false;
	GetCharacterMovement()->bOrientRotationToMovement = true;
	GetCharacterMovement()->RotationRate = FRotator(0.f, 100.f, 0.f);
	GetCharacterMovement()->MaxWalkSpeed = 300.f;
	GetCharacterMovement()->BrakingDecelerationWalking = 1000.f;

	EnemyCombatComponent = CreateDefaultSubobject<UEnemyCombatComponent>("EnemyCombatComponent");
	EnemyUIComponent = CreateDefaultSubobject<UEnemyUIComponent>("EnemyUIComponent");
}

UPawnCombatComponent* AW1EnemyCharacter::GetPawnCombatComponent() const
{
	return EnemyCombatComponent;
}

UPawnUIComponent* AW1EnemyCharacter::GetPawnUIComponent() const
{
	return EnemyUIComponent;
}

UEnemyUIComponent* AW1EnemyCharacter::GetEnemyUIComponent() const
{
	return EnemyUIComponent;
}

void AW1EnemyCharacter::PossessedBy(AController* NewController)
{
	Super::PossessedBy(NewController);

	InitEnemyStartUpData();
}

void AW1EnemyCharacter::InitEnemyStartUpData()
{
	if (CharacterStartUpData.IsNull())
	{
		return;
	}

	UAssetManager::GetStreamableManager().RequestAsyncLoad(
		CharacterStartUpData.ToSoftObjectPath(),
		FStreamableDelegate::CreateLambda(
			[this]()
			{
				if (UDA_StartUpDataBase* LoadedData = CharacterStartUpData.Get())
				{
					LoadedData->GiveToAbilitySystemComponent(W1AbilitySystemComponent);
				}
			}
		)
	);
}
