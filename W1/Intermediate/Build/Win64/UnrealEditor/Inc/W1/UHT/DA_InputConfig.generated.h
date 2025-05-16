// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DataAssets/Input/DA_InputConfig.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef W1_DA_InputConfig_generated_h
#error "DA_InputConfig.generated.h already included, missing '#pragma once' in DA_InputConfig.h"
#endif
#define W1_DA_InputConfig_generated_h

#define FID_unreal_action_W1_Source_W1_DataAssets_Input_DA_InputConfig_h_15_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FW1InputActionConfig_Statics; \
	W1_API static class UScriptStruct* StaticStruct();


template<> W1_API UScriptStruct* StaticStruct<struct FW1InputActionConfig>();

#define FID_unreal_action_W1_Source_W1_DataAssets_Input_DA_InputConfig_h_31_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDA_InputConfig(); \
	friend struct Z_Construct_UClass_UDA_InputConfig_Statics; \
public: \
	DECLARE_CLASS(UDA_InputConfig, UDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/W1"), NO_API) \
	DECLARE_SERIALIZER(UDA_InputConfig)


#define FID_unreal_action_W1_Source_W1_DataAssets_Input_DA_InputConfig_h_31_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDA_InputConfig(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UDA_InputConfig(UDA_InputConfig&&); \
	UDA_InputConfig(const UDA_InputConfig&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDA_InputConfig); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDA_InputConfig); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDA_InputConfig) \
	NO_API virtual ~UDA_InputConfig();


#define FID_unreal_action_W1_Source_W1_DataAssets_Input_DA_InputConfig_h_28_PROLOG
#define FID_unreal_action_W1_Source_W1_DataAssets_Input_DA_InputConfig_h_31_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_unreal_action_W1_Source_W1_DataAssets_Input_DA_InputConfig_h_31_INCLASS_NO_PURE_DECLS \
	FID_unreal_action_W1_Source_W1_DataAssets_Input_DA_InputConfig_h_31_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> W1_API UClass* StaticClass<class UDA_InputConfig>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_unreal_action_W1_Source_W1_DataAssets_Input_DA_InputConfig_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
