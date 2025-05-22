
#pragma once

#include "NativeGameplayTags.h"

namespace W1GameplayTags
{
	//Input Tags
	W1_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(InputTag_Move);
	W1_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(InputTag_Look);
	W1_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(InputTag_EquipAxe);
	W1_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(InputTag_UnequipAxe);

	//Player Tags
	W1_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Player_Ability_Equip_Axe);
	W1_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Player_Ability_Unequip_Axe);

	W1_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Player_Weapon_Axe);

	W1_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Player_Event_Equip_Axe);
	W1_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Player_Event_Unequip_Axe);
}