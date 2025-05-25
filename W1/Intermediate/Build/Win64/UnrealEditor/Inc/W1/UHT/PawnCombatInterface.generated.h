// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Interfaces/PawnCombatInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef W1_PawnCombatInterface_generated_h
#error "PawnCombatInterface.generated.h already included, missing '#pragma once' in PawnCombatInterface.h"
#endif
#define W1_PawnCombatInterface_generated_h

#define FID_unreal_action_W1_Source_W1_Interfaces_PawnCombatInterface_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	W1_API UPawnCombatInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UPawnCombatInterface(UPawnCombatInterface&&); \
	UPawnCombatInterface(const UPawnCombatInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(W1_API, UPawnCombatInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPawnCombatInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPawnCombatInterface) \
	W1_API virtual ~UPawnCombatInterface();


#define FID_unreal_action_W1_Source_W1_Interfaces_PawnCombatInterface_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUPawnCombatInterface(); \
	friend struct Z_Construct_UClass_UPawnCombatInterface_Statics; \
public: \
	DECLARE_CLASS(UPawnCombatInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/W1"), W1_API) \
	DECLARE_SERIALIZER(UPawnCombatInterface)


#define FID_unreal_action_W1_Source_W1_Interfaces_PawnCombatInterface_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_unreal_action_W1_Source_W1_Interfaces_PawnCombatInterface_h_13_GENERATED_UINTERFACE_BODY() \
	FID_unreal_action_W1_Source_W1_Interfaces_PawnCombatInterface_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_unreal_action_W1_Source_W1_Interfaces_PawnCombatInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IPawnCombatInterface() {} \
public: \
	typedef UPawnCombatInterface UClassType; \
	typedef IPawnCombatInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_unreal_action_W1_Source_W1_Interfaces_PawnCombatInterface_h_10_PROLOG
#define FID_unreal_action_W1_Source_W1_Interfaces_PawnCombatInterface_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_unreal_action_W1_Source_W1_Interfaces_PawnCombatInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> W1_API UClass* StaticClass<class UPawnCombatInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_unreal_action_W1_Source_W1_Interfaces_PawnCombatInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
