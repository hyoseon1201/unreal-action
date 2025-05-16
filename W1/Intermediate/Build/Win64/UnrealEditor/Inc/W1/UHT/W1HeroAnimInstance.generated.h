// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AnimInstances/Hero/W1HeroAnimInstance.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef W1_W1HeroAnimInstance_generated_h
#error "W1HeroAnimInstance.generated.h already included, missing '#pragma once' in W1HeroAnimInstance.h"
#endif
#define W1_W1HeroAnimInstance_generated_h

#define FID_unreal_action_W1_Source_W1_AnimInstances_Hero_W1HeroAnimInstance_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUW1HeroAnimInstance(); \
	friend struct Z_Construct_UClass_UW1HeroAnimInstance_Statics; \
public: \
	DECLARE_CLASS(UW1HeroAnimInstance, UW1CharacterAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/W1"), NO_API) \
	DECLARE_SERIALIZER(UW1HeroAnimInstance)


#define FID_unreal_action_W1_Source_W1_AnimInstances_Hero_W1HeroAnimInstance_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UW1HeroAnimInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UW1HeroAnimInstance(UW1HeroAnimInstance&&); \
	UW1HeroAnimInstance(const UW1HeroAnimInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UW1HeroAnimInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UW1HeroAnimInstance); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UW1HeroAnimInstance) \
	NO_API virtual ~UW1HeroAnimInstance();


#define FID_unreal_action_W1_Source_W1_AnimInstances_Hero_W1HeroAnimInstance_h_12_PROLOG
#define FID_unreal_action_W1_Source_W1_AnimInstances_Hero_W1HeroAnimInstance_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_unreal_action_W1_Source_W1_AnimInstances_Hero_W1HeroAnimInstance_h_15_INCLASS_NO_PURE_DECLS \
	FID_unreal_action_W1_Source_W1_AnimInstances_Hero_W1HeroAnimInstance_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> W1_API UClass* StaticClass<class UW1HeroAnimInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_unreal_action_W1_Source_W1_AnimInstances_Hero_W1HeroAnimInstance_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
