
#include "Items/Weapons/W1WeaponBase.h"

// Sets default values
AW1WeaponBase::AW1WeaponBase()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AW1WeaponBase::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AW1WeaponBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

