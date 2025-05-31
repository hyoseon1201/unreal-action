// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AnimInstances/W1AnimInstanceBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGameplayTag;
#ifdef W1_W1AnimInstanceBase_generated_h
#error "W1AnimInstanceBase.generated.h already included, missing '#pragma once' in W1AnimInstanceBase.h"
#endif
#define W1_W1AnimInstanceBase_generated_h

#define FID_unreal_action_W1_Source_W1_AnimInstances_W1AnimInstanceBase_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execDoesOwnerHaveTag);


#define FID_unreal_action_W1_Source_W1_AnimInstances_W1AnimInstanceBase_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUW1AnimInstanceBase(); \
	friend struct Z_Construct_UClass_UW1AnimInstanceBase_Statics; \
public: \
	DECLARE_CLASS(UW1AnimInstanceBase, UAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/W1"), NO_API) \
	DECLARE_SERIALIZER(UW1AnimInstanceBase)


#define FID_unreal_action_W1_Source_W1_AnimInstances_W1AnimInstanceBase_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UW1AnimInstanceBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UW1AnimInstanceBase(UW1AnimInstanceBase&&); \
	UW1AnimInstanceBase(const UW1AnimInstanceBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UW1AnimInstanceBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UW1AnimInstanceBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UW1AnimInstanceBase) \
	NO_API virtual ~UW1AnimInstanceBase();


#define FID_unreal_action_W1_Source_W1_AnimInstances_W1AnimInstanceBase_h_11_PROLOG
#define FID_unreal_action_W1_Source_W1_AnimInstances_W1AnimInstanceBase_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_unreal_action_W1_Source_W1_AnimInstances_W1AnimInstanceBase_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_unreal_action_W1_Source_W1_AnimInstances_W1AnimInstanceBase_h_14_INCLASS_NO_PURE_DECLS \
	FID_unreal_action_W1_Source_W1_AnimInstances_W1AnimInstanceBase_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> W1_API UClass* StaticClass<class UW1AnimInstanceBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_unreal_action_W1_Source_W1_AnimInstances_W1AnimInstanceBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
