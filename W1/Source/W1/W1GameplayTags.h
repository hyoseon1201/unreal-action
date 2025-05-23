
#pragma once

#include "NativeGameplayTags.h"

namespace W1GameplayTags
{
	//Input Tags
	W1_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(InputTag_Move);
	W1_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(InputTag_Look);
	W1_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(InputTag_EquipAxe);
	W1_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(InputTag_UnequipAxe);
	W1_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(InputTag_LightAttack_Axe);
	W1_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(InputTag_HeavyAttack_Axe);

	//Player Tags
	W1_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Player_Ability_Equip_Axe);
	W1_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Player_Ability_Unequip_Axe);
	W1_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Player_Ability_Attack_Light_Axe);
	W1_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Player_Ability_Attack_Heavy_Axe);

	W1_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Player_Weapon_Axe);

	W1_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Player_Event_Equip_Axe);
	W1_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Player_Event_Unequip_Axe);

	W1_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Player_Status_JumpToFinisher);

	//Enemy Tags
	W1_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Enemy_Weapon);
}