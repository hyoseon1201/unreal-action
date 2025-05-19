// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AbilitySystems/Abilities/W1HeroGameplayAbility.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AW1HeroCharacter;
class AW1HeroController;
class UHeroCombatComponent;
#ifdef W1_W1HeroGameplayAbility_generated_h
#error "W1HeroGameplayAbility.generated.h already included, missing '#pragma once' in W1HeroGameplayAbility.h"
#endif
#define W1_W1HeroGameplayAbility_generated_h

#define FID_unreal_action_W1_Source_W1_AbilitySystems_Abilities_W1HeroGameplayAbility_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetHeroCombatComponentFromActorInfo); \
	DECLARE_FUNCTION(execGetHeroControllerFromActorInfo); \
	DECLARE_FUNCTION(execGetHeroCharacterFromActorInfo);


#define FID_unreal_action_W1_Source_W1_AbilitySystems_Abilities_W1HeroGameplayAbility_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUW1HeroGameplayAbility(); \
	friend struct Z_Construct_UClass_UW1HeroGameplayAbility_Statics; \
public: \
	DECLARE_CLASS(UW1HeroGameplayAbility, UW1GameplayAbility, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/W1"), NO_API) \
	DECLARE_SERIALIZER(UW1HeroGameplayAbility)


#define FID_unreal_action_W1_Source_W1_AbilitySystems_Abilities_W1HeroGameplayAbility_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UW1HeroGameplayAbility(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UW1HeroGameplayAbility(UW1HeroGameplayAbility&&); \
	UW1HeroGameplayAbility(const UW1HeroGameplayAbility&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UW1HeroGameplayAbility); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UW1HeroGameplayAbility); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UW1HeroGameplayAbility) \
	NO_API virtual ~UW1HeroGameplayAbility();


#define FID_unreal_action_W1_Source_W1_AbilitySystems_Abilities_W1HeroGameplayAbility_h_14_PROLOG
#define FID_unreal_action_W1_Source_W1_AbilitySystems_Abilities_W1HeroGameplayAbility_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_unreal_action_W1_Source_W1_AbilitySystems_Abilities_W1HeroGameplayAbility_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_unreal_action_W1_Source_W1_AbilitySystems_Abilities_W1HeroGameplayAbility_h_17_INCLASS_NO_PURE_DECLS \
	FID_unreal_action_W1_Source_W1_AbilitySystems_Abilities_W1HeroGameplayAbility_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> W1_API UClass* StaticClass<class UW1HeroGameplayAbility>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_unreal_action_W1_Source_W1_AbilitySystems_Abilities_W1HeroGameplayAbility_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
