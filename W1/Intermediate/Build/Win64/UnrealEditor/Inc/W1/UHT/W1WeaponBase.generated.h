// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Items/Weapons/W1WeaponBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef W1_W1WeaponBase_generated_h
#error "W1WeaponBase.generated.h already included, missing '#pragma once' in W1WeaponBase.h"
#endif
#define W1_W1WeaponBase_generated_h

#define FID_unreal_action_W1_Source_W1_Items_Weapons_W1WeaponBase_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnCollisionBoxEndOverlap); \
	DECLARE_FUNCTION(execOnCollisionBoxBeginOverlap);


#define FID_unreal_action_W1_Source_W1_Items_Weapons_W1WeaponBase_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAW1WeaponBase(); \
	friend struct Z_Construct_UClass_AW1WeaponBase_Statics; \
public: \
	DECLARE_CLASS(AW1WeaponBase, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/W1"), NO_API) \
	DECLARE_SERIALIZER(AW1WeaponBase)


#define FID_unreal_action_W1_Source_W1_Items_Weapons_W1WeaponBase_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AW1WeaponBase(AW1WeaponBase&&); \
	AW1WeaponBase(const AW1WeaponBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AW1WeaponBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AW1WeaponBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AW1WeaponBase) \
	NO_API virtual ~AW1WeaponBase();


#define FID_unreal_action_W1_Source_W1_Items_Weapons_W1WeaponBase_h_10_PROLOG
#define FID_unreal_action_W1_Source_W1_Items_Weapons_W1WeaponBase_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_unreal_action_W1_Source_W1_Items_Weapons_W1WeaponBase_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_unreal_action_W1_Source_W1_Items_Weapons_W1WeaponBase_h_13_INCLASS_NO_PURE_DECLS \
	FID_unreal_action_W1_Source_W1_Items_Weapons_W1WeaponBase_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> W1_API UClass* StaticClass<class AW1WeaponBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_unreal_action_W1_Source_W1_Items_Weapons_W1WeaponBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
