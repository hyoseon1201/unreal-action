// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameModes/W1GameModeBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef W1_W1GameModeBase_generated_h
#error "W1GameModeBase.generated.h already included, missing '#pragma once' in W1GameModeBase.h"
#endif
#define W1_W1GameModeBase_generated_h

#define FID_unreal_action_W1_Source_W1_GameModes_W1GameModeBase_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAW1GameModeBase(); \
	friend struct Z_Construct_UClass_AW1GameModeBase_Statics; \
public: \
	DECLARE_CLASS(AW1GameModeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/W1"), NO_API) \
	DECLARE_SERIALIZER(AW1GameModeBase)


#define FID_unreal_action_W1_Source_W1_GameModes_W1GameModeBase_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AW1GameModeBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AW1GameModeBase(AW1GameModeBase&&); \
	AW1GameModeBase(const AW1GameModeBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AW1GameModeBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AW1GameModeBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AW1GameModeBase) \
	NO_API virtual ~AW1GameModeBase();


#define FID_unreal_action_W1_Source_W1_GameModes_W1GameModeBase_h_12_PROLOG
#define FID_unreal_action_W1_Source_W1_GameModes_W1GameModeBase_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_unreal_action_W1_Source_W1_GameModes_W1GameModeBase_h_15_INCLASS_NO_PURE_DECLS \
	FID_unreal_action_W1_Source_W1_GameModes_W1GameModeBase_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> W1_API UClass* StaticClass<class AW1GameModeBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_unreal_action_W1_Source_W1_GameModes_W1GameModeBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
