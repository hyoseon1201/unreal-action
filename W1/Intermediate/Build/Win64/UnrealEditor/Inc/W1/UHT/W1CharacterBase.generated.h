// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Characters/W1CharacterBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef W1_W1CharacterBase_generated_h
#error "W1CharacterBase.generated.h already included, missing '#pragma once' in W1CharacterBase.h"
#endif
#define W1_W1CharacterBase_generated_h

#define FID_unreal_action_W1_Source_W1_Characters_W1CharacterBase_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAW1CharacterBase(); \
	friend struct Z_Construct_UClass_AW1CharacterBase_Statics; \
public: \
	DECLARE_CLASS(AW1CharacterBase, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/W1"), NO_API) \
	DECLARE_SERIALIZER(AW1CharacterBase) \
	virtual UObject* _getUObject() const override { return const_cast<AW1CharacterBase*>(this); }


#define FID_unreal_action_W1_Source_W1_Characters_W1CharacterBase_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AW1CharacterBase(AW1CharacterBase&&); \
	AW1CharacterBase(const AW1CharacterBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AW1CharacterBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AW1CharacterBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AW1CharacterBase) \
	NO_API virtual ~AW1CharacterBase();


#define FID_unreal_action_W1_Source_W1_Characters_W1CharacterBase_h_12_PROLOG
#define FID_unreal_action_W1_Source_W1_Characters_W1CharacterBase_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_unreal_action_W1_Source_W1_Characters_W1CharacterBase_h_15_INCLASS_NO_PURE_DECLS \
	FID_unreal_action_W1_Source_W1_Characters_W1CharacterBase_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> W1_API UClass* StaticClass<class AW1CharacterBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_unreal_action_W1_Source_W1_Characters_W1CharacterBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
