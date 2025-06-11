// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Items/W1ProjectileBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef W1_W1ProjectileBase_generated_h
#error "W1ProjectileBase.generated.h already included, missing '#pragma once' in W1ProjectileBase.h"
#endif
#define W1_W1ProjectileBase_generated_h

#define FID_unreal_action_W1_Source_W1_Items_W1ProjectileBase_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnProjectileBeginOverlap); \
	DECLARE_FUNCTION(execOnProjectileHit);


#define FID_unreal_action_W1_Source_W1_Items_W1ProjectileBase_h_21_CALLBACK_WRAPPERS
#define FID_unreal_action_W1_Source_W1_Items_W1ProjectileBase_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAW1ProjectileBase(); \
	friend struct Z_Construct_UClass_AW1ProjectileBase_Statics; \
public: \
	DECLARE_CLASS(AW1ProjectileBase, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/W1"), NO_API) \
	DECLARE_SERIALIZER(AW1ProjectileBase)


#define FID_unreal_action_W1_Source_W1_Items_W1ProjectileBase_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AW1ProjectileBase(AW1ProjectileBase&&); \
	AW1ProjectileBase(const AW1ProjectileBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AW1ProjectileBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AW1ProjectileBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AW1ProjectileBase) \
	NO_API virtual ~AW1ProjectileBase();


#define FID_unreal_action_W1_Source_W1_Items_W1ProjectileBase_h_18_PROLOG
#define FID_unreal_action_W1_Source_W1_Items_W1ProjectileBase_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_unreal_action_W1_Source_W1_Items_W1ProjectileBase_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_unreal_action_W1_Source_W1_Items_W1ProjectileBase_h_21_CALLBACK_WRAPPERS \
	FID_unreal_action_W1_Source_W1_Items_W1ProjectileBase_h_21_INCLASS_NO_PURE_DECLS \
	FID_unreal_action_W1_Source_W1_Items_W1ProjectileBase_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> W1_API UClass* StaticClass<class AW1ProjectileBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_unreal_action_W1_Source_W1_Items_W1ProjectileBase_h


#define FOREACH_ENUM_EPROJECTILEDAMAGEPOLICY(op) \
	op(EProjectileDamagePolicy::OnHit) \
	op(EProjectileDamagePolicy::OnBeginOverlap) 

enum class EProjectileDamagePolicy : uint8;
template<> struct TIsUEnumClass<EProjectileDamagePolicy> { enum { Value = true }; };
template<> W1_API UEnum* StaticEnum<EProjectileDamagePolicy>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
