
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "W1WeaponBase.generated.h"

UCLASS()
class W1_API AW1WeaponBase : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AW1WeaponBase();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
