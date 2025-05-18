// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DataAssets/DA_HeroStartUpData.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef W1_DA_HeroStartUpData_generated_h
#error "DA_HeroStartUpData.generated.h already included, missing '#pragma once' in DA_HeroStartUpData.h"
#endif
#define W1_DA_HeroStartUpData_generated_h

#define FID_unreal_action_W1_Source_W1_DataAssets_DA_HeroStartUpData_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDA_HeroStartUpData(); \
	friend struct Z_Construct_UClass_UDA_HeroStartUpData_Statics; \
public: \
	DECLARE_CLASS(UDA_HeroStartUpData, UDA_StartUpDataBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/W1"), NO_API) \
	DECLARE_SERIALIZER(UDA_HeroStartUpData)


#define FID_unreal_action_W1_Source_W1_DataAssets_DA_HeroStartUpData_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDA_HeroStartUpData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UDA_HeroStartUpData(UDA_HeroStartUpData&&); \
	UDA_HeroStartUpData(const UDA_HeroStartUpData&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDA_HeroStartUpData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDA_HeroStartUpData); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDA_HeroStartUpData) \
	NO_API virtual ~UDA_HeroStartUpData();


#define FID_unreal_action_W1_Source_W1_DataAssets_DA_HeroStartUpData_h_11_PROLOG
#define FID_unreal_action_W1_Source_W1_DataAssets_DA_HeroStartUpData_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_unreal_action_W1_Source_W1_DataAssets_DA_HeroStartUpData_h_14_INCLASS_NO_PURE_DECLS \
	FID_unreal_action_W1_Source_W1_DataAssets_DA_HeroStartUpData_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> W1_API UClass* StaticClass<class UDA_HeroStartUpData>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_unreal_action_W1_Source_W1_DataAssets_DA_HeroStartUpData_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
