// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/UI/HeroUIComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UTexture2D;
#ifdef W1_HeroUIComponent_generated_h
#error "HeroUIComponent.generated.h already included, missing '#pragma once' in HeroUIComponent.h"
#endif
#define W1_HeroUIComponent_generated_h

#define FID_unreal_action_W1_Source_W1_Components_UI_HeroUIComponent_h_7_DELEGATE \
W1_API void FOnEquippedWeaponChangedDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnEquippedWeaponChangedDelegate, const TSoftObjectPtr<UTexture2D>& SoftWeaponIcon);


#define FID_unreal_action_W1_Source_W1_Components_UI_HeroUIComponent_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHeroUIComponent(); \
	friend struct Z_Construct_UClass_UHeroUIComponent_Statics; \
public: \
	DECLARE_CLASS(UHeroUIComponent, UPawnUIComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/W1"), NO_API) \
	DECLARE_SERIALIZER(UHeroUIComponent)


#define FID_unreal_action_W1_Source_W1_Components_UI_HeroUIComponent_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHeroUIComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UHeroUIComponent(UHeroUIComponent&&); \
	UHeroUIComponent(const UHeroUIComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHeroUIComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHeroUIComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHeroUIComponent) \
	NO_API virtual ~UHeroUIComponent();


#define FID_unreal_action_W1_Source_W1_Components_UI_HeroUIComponent_h_12_PROLOG
#define FID_unreal_action_W1_Source_W1_Components_UI_HeroUIComponent_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_unreal_action_W1_Source_W1_Components_UI_HeroUIComponent_h_15_INCLASS_NO_PURE_DECLS \
	FID_unreal_action_W1_Source_W1_Components_UI_HeroUIComponent_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> W1_API UClass* StaticClass<class UHeroUIComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_unreal_action_W1_Source_W1_Components_UI_HeroUIComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
