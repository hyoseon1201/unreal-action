// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DataAssets/DA_StartUpDataBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef W1_DA_StartUpDataBase_generated_h
#error "DA_StartUpDataBase.generated.h already included, missing '#pragma once' in DA_StartUpDataBase.h"
#endif
#define W1_DA_StartUpDataBase_generated_h

#define FID_unreal_action_W1_Source_W1_DataAssets_DA_StartUpDataBase_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDA_StartUpDataBase(); \
	friend struct Z_Construct_UClass_UDA_StartUpDataBase_Statics; \
public: \
	DECLARE_CLASS(UDA_StartUpDataBase, UDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/W1"), NO_API) \
	DECLARE_SERIALIZER(UDA_StartUpDataBase)


#define FID_unreal_action_W1_Source_W1_DataAssets_DA_StartUpDataBase_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDA_StartUpDataBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UDA_StartUpDataBase(UDA_StartUpDataBase&&); \
	UDA_StartUpDataBase(const UDA_StartUpDataBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDA_StartUpDataBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDA_StartUpDataBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDA_StartUpDataBase) \
	NO_API virtual ~UDA_StartUpDataBase();


#define FID_unreal_action_W1_Source_W1_DataAssets_DA_StartUpDataBase_h_13_PROLOG
#define FID_unreal_action_W1_Source_W1_DataAssets_DA_StartUpDataBase_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_unreal_action_W1_Source_W1_DataAssets_DA_StartUpDataBase_h_16_INCLASS_NO_PURE_DECLS \
	FID_unreal_action_W1_Source_W1_DataAssets_DA_StartUpDataBase_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> W1_API UClass* StaticClass<class UDA_StartUpDataBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_unreal_action_W1_Source_W1_DataAssets_DA_StartUpDataBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
