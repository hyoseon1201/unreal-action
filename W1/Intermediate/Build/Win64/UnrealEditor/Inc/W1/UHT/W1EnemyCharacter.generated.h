// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Characters/W1EnemyCharacter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef W1_W1EnemyCharacter_generated_h
#error "W1EnemyCharacter.generated.h already included, missing '#pragma once' in W1EnemyCharacter.h"
#endif
#define W1_W1EnemyCharacter_generated_h

#define FID_unreal_action_W1_Source_W1_Characters_W1EnemyCharacter_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnBodyCollisionBoxBeginOverlap);


#define FID_unreal_action_W1_Source_W1_Characters_W1EnemyCharacter_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAW1EnemyCharacter(); \
	friend struct Z_Construct_UClass_AW1EnemyCharacter_Statics; \
public: \
	DECLARE_CLASS(AW1EnemyCharacter, AW1CharacterBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/W1"), NO_API) \
	DECLARE_SERIALIZER(AW1EnemyCharacter)


#define FID_unreal_action_W1_Source_W1_Characters_W1EnemyCharacter_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AW1EnemyCharacter(AW1EnemyCharacter&&); \
	AW1EnemyCharacter(const AW1EnemyCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AW1EnemyCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AW1EnemyCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AW1EnemyCharacter) \
	NO_API virtual ~AW1EnemyCharacter();


#define FID_unreal_action_W1_Source_W1_Characters_W1EnemyCharacter_h_15_PROLOG
#define FID_unreal_action_W1_Source_W1_Characters_W1EnemyCharacter_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_unreal_action_W1_Source_W1_Characters_W1EnemyCharacter_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_unreal_action_W1_Source_W1_Characters_W1EnemyCharacter_h_18_INCLASS_NO_PURE_DECLS \
	FID_unreal_action_W1_Source_W1_Characters_W1EnemyCharacter_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> W1_API UClass* StaticClass<class AW1EnemyCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_unreal_action_W1_Source_W1_Characters_W1EnemyCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
