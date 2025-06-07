// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "W1FunctionLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class APawn;
class UPawnCombatComponent;
enum class EW1ConfirmType : uint8;
enum class EW1ValidType : uint8;
struct FGameplayTag;
struct FScalableFloat;
#ifdef W1_W1FunctionLibrary_generated_h
#error "W1FunctionLibrary.generated.h already included, missing '#pragma once' in W1FunctionLibrary.h"
#endif
#define W1_W1FunctionLibrary_generated_h

#define FID_unreal_action_W1_Source_W1_W1FunctionLibrary_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execComputeHitReactDirectionTag); \
	DECLARE_FUNCTION(execGetScalableFloatValueAtLevel); \
	DECLARE_FUNCTION(execIsTargetPawnHostile); \
	DECLARE_FUNCTION(execBP_GetPawnCombatComponentFromActor); \
	DECLARE_FUNCTION(execBP_DoesActorHaveTag); \
	DECLARE_FUNCTION(execRemoveGameplayTagFromActorIfFound); \
	DECLARE_FUNCTION(execAddGameplayTagToActorIfNone);


#define FID_unreal_action_W1_Source_W1_W1FunctionLibrary_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUW1FunctionLibrary(); \
	friend struct Z_Construct_UClass_UW1FunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UW1FunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/W1"), NO_API) \
	DECLARE_SERIALIZER(UW1FunctionLibrary)


#define FID_unreal_action_W1_Source_W1_W1FunctionLibrary_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UW1FunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UW1FunctionLibrary(UW1FunctionLibrary&&); \
	UW1FunctionLibrary(const UW1FunctionLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UW1FunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UW1FunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UW1FunctionLibrary) \
	NO_API virtual ~UW1FunctionLibrary();


#define FID_unreal_action_W1_Source_W1_W1FunctionLibrary_h_15_PROLOG
#define FID_unreal_action_W1_Source_W1_W1FunctionLibrary_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_unreal_action_W1_Source_W1_W1FunctionLibrary_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_unreal_action_W1_Source_W1_W1FunctionLibrary_h_18_INCLASS_NO_PURE_DECLS \
	FID_unreal_action_W1_Source_W1_W1FunctionLibrary_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> W1_API UClass* StaticClass<class UW1FunctionLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_unreal_action_W1_Source_W1_W1FunctionLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
