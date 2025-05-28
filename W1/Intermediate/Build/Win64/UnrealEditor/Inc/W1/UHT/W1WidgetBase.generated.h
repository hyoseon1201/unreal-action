// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Widgets/W1WidgetBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UEnemyUIComponent;
class UHeroUIComponent;
#ifdef W1_W1WidgetBase_generated_h
#error "W1WidgetBase.generated.h already included, missing '#pragma once' in W1WidgetBase.h"
#endif
#define W1_W1WidgetBase_generated_h

#define FID_unreal_action_W1_Source_W1_Widgets_W1WidgetBase_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execInitEnemyCreatedWidget);


#define FID_unreal_action_W1_Source_W1_Widgets_W1WidgetBase_h_13_CALLBACK_WRAPPERS
#define FID_unreal_action_W1_Source_W1_Widgets_W1WidgetBase_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUW1WidgetBase(); \
	friend struct Z_Construct_UClass_UW1WidgetBase_Statics; \
public: \
	DECLARE_CLASS(UW1WidgetBase, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/W1"), NO_API) \
	DECLARE_SERIALIZER(UW1WidgetBase)


#define FID_unreal_action_W1_Source_W1_Widgets_W1WidgetBase_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UW1WidgetBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UW1WidgetBase(UW1WidgetBase&&); \
	UW1WidgetBase(const UW1WidgetBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UW1WidgetBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UW1WidgetBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UW1WidgetBase) \
	NO_API virtual ~UW1WidgetBase();


#define FID_unreal_action_W1_Source_W1_Widgets_W1WidgetBase_h_10_PROLOG
#define FID_unreal_action_W1_Source_W1_Widgets_W1WidgetBase_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_unreal_action_W1_Source_W1_Widgets_W1WidgetBase_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_unreal_action_W1_Source_W1_Widgets_W1WidgetBase_h_13_CALLBACK_WRAPPERS \
	FID_unreal_action_W1_Source_W1_Widgets_W1WidgetBase_h_13_INCLASS_NO_PURE_DECLS \
	FID_unreal_action_W1_Source_W1_Widgets_W1WidgetBase_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> W1_API UClass* StaticClass<class UW1WidgetBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_unreal_action_W1_Source_W1_Widgets_W1WidgetBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
