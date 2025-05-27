// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/UI/PawnUIComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef W1_PawnUIComponent_generated_h
#error "PawnUIComponent.generated.h already included, missing '#pragma once' in PawnUIComponent.h"
#endif
#define W1_PawnUIComponent_generated_h

#define FID_unreal_action_W1_Source_W1_Components_UI_PawnUIComponent_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPawnUIComponent(); \
	friend struct Z_Construct_UClass_UPawnUIComponent_Statics; \
public: \
	DECLARE_CLASS(UPawnUIComponent, UPawnExtensionComponentBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/W1"), NO_API) \
	DECLARE_SERIALIZER(UPawnUIComponent)


#define FID_unreal_action_W1_Source_W1_Components_UI_PawnUIComponent_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPawnUIComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UPawnUIComponent(UPawnUIComponent&&); \
	UPawnUIComponent(const UPawnUIComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPawnUIComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPawnUIComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPawnUIComponent) \
	NO_API virtual ~UPawnUIComponent();


#define FID_unreal_action_W1_Source_W1_Components_UI_PawnUIComponent_h_10_PROLOG
#define FID_unreal_action_W1_Source_W1_Components_UI_PawnUIComponent_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_unreal_action_W1_Source_W1_Components_UI_PawnUIComponent_h_13_INCLASS_NO_PURE_DECLS \
	FID_unreal_action_W1_Source_W1_Components_UI_PawnUIComponent_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> W1_API UClass* StaticClass<class UPawnUIComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_unreal_action_W1_Source_W1_Components_UI_PawnUIComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
