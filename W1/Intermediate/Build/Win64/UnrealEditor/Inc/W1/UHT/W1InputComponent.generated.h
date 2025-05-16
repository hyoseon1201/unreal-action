// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/Input/W1InputComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef W1_W1InputComponent_generated_h
#error "W1InputComponent.generated.h already included, missing '#pragma once' in W1InputComponent.h"
#endif
#define W1_W1InputComponent_generated_h

#define FID_unreal_action_W1_Source_W1_Components_Input_W1InputComponent_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUW1InputComponent(); \
	friend struct Z_Construct_UClass_UW1InputComponent_Statics; \
public: \
	DECLARE_CLASS(UW1InputComponent, UEnhancedInputComponent, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/W1"), NO_API) \
	DECLARE_SERIALIZER(UW1InputComponent)


#define FID_unreal_action_W1_Source_W1_Components_Input_W1InputComponent_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UW1InputComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UW1InputComponent(UW1InputComponent&&); \
	UW1InputComponent(const UW1InputComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UW1InputComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UW1InputComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UW1InputComponent) \
	NO_API virtual ~UW1InputComponent();


#define FID_unreal_action_W1_Source_W1_Components_Input_W1InputComponent_h_13_PROLOG
#define FID_unreal_action_W1_Source_W1_Components_Input_W1InputComponent_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_unreal_action_W1_Source_W1_Components_Input_W1InputComponent_h_16_INCLASS_NO_PURE_DECLS \
	FID_unreal_action_W1_Source_W1_Components_Input_W1InputComponent_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> W1_API UClass* StaticClass<class UW1InputComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_unreal_action_W1_Source_W1_Components_Input_W1InputComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
