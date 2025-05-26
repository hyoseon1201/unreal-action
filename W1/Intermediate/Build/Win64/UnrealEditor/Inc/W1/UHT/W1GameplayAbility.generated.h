// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AbilitySystems/Abilities/W1GameplayAbility.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPawnCombatComponent;
class UW1AbilitySystemComponent;
enum class EW1SuccessType : uint8;
struct FActiveGameplayEffectHandle;
struct FGameplayEffectSpecHandle;
#ifdef W1_W1GameplayAbility_generated_h
#error "W1GameplayAbility.generated.h already included, missing '#pragma once' in W1GameplayAbility.h"
#endif
#define W1_W1GameplayAbility_generated_h

#define FID_unreal_action_W1_Source_W1_AbilitySystems_Abilities_W1GameplayAbility_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execBP_ApplyEffectSpecHandleToTarget); \
	DECLARE_FUNCTION(execGetW1AbilitySystemComponentFromActorInfo); \
	DECLARE_FUNCTION(execGetPawnCombatComponentFromActorInfo);


#define FID_unreal_action_W1_Source_W1_AbilitySystems_Abilities_W1GameplayAbility_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUW1GameplayAbility(); \
	friend struct Z_Construct_UClass_UW1GameplayAbility_Statics; \
public: \
	DECLARE_CLASS(UW1GameplayAbility, UGameplayAbility, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/W1"), NO_API) \
	DECLARE_SERIALIZER(UW1GameplayAbility)


#define FID_unreal_action_W1_Source_W1_AbilitySystems_Abilities_W1GameplayAbility_h_24_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UW1GameplayAbility(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UW1GameplayAbility(UW1GameplayAbility&&); \
	UW1GameplayAbility(const UW1GameplayAbility&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UW1GameplayAbility); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UW1GameplayAbility); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UW1GameplayAbility) \
	NO_API virtual ~UW1GameplayAbility();


#define FID_unreal_action_W1_Source_W1_AbilitySystems_Abilities_W1GameplayAbility_h_21_PROLOG
#define FID_unreal_action_W1_Source_W1_AbilitySystems_Abilities_W1GameplayAbility_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_unreal_action_W1_Source_W1_AbilitySystems_Abilities_W1GameplayAbility_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_unreal_action_W1_Source_W1_AbilitySystems_Abilities_W1GameplayAbility_h_24_INCLASS_NO_PURE_DECLS \
	FID_unreal_action_W1_Source_W1_AbilitySystems_Abilities_W1GameplayAbility_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> W1_API UClass* StaticClass<class UW1GameplayAbility>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_unreal_action_W1_Source_W1_AbilitySystems_Abilities_W1GameplayAbility_h


#define FOREACH_ENUM_EW1ABILITYACTIVATIONPOLICY(op) \
	op(EW1AbilityActivationPolicy::OnTriggered) \
	op(EW1AbilityActivationPolicy::OnGiven) 

enum class EW1AbilityActivationPolicy : uint8;
template<> struct TIsUEnumClass<EW1AbilityActivationPolicy> { enum { Value = true }; };
template<> W1_API UEnum* StaticEnum<EW1AbilityActivationPolicy>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
