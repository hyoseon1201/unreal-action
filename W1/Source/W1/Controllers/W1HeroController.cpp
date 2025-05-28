
#include "Controllers/W1HeroController.h"

AW1HeroController::AW1HeroController()
{
	HeroTeamId = FGenericTeamId(0);
}

FGenericTeamId AW1HeroController::GetGenericTeamId() const
{
	return HeroTeamId;
}
