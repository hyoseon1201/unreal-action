
#pragma once

#include "GameFramework/PlayerController.h"
#include "GenericTeamAgentInterface.h"
#include "W1HeroController.generated.h"

/**
 * 
 */
UCLASS()
class W1_API AW1HeroController : public APlayerController, public IGenericTeamAgentInterface
{
	GENERATED_BODY()
	
public:
	AW1HeroController();

	// Begin IGenericTeamAgentInInterface Interface
	virtual FGenericTeamId GetGenericTeamId() const;
	// End IGenericTeamAgentInInterface Interface

private:
	FGenericTeamId HeroTeamId;
};
