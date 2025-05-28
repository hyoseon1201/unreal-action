// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Controllers/W1AIController.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
struct FAIStimulus;
#ifdef W1_W1AIController_generated_h
#error "W1AIController.generated.h already included, missing '#pragma once' in W1AIController.h"
#endif
#define W1_W1AIController_generated_h

#define FID_unreal_action_W1_Source_W1_Controllers_W1AIController_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnEnemyPerceptionUpdated);


#define FID_unreal_action_W1_Source_W1_Controllers_W1AIController_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAW1AIController(); \
	friend struct Z_Construct_UClass_AW1AIController_Statics; \
public: \
	DECLARE_CLASS(AW1AIController, AAIController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/W1"), NO_API) \
	DECLARE_SERIALIZER(AW1AIController)


#define FID_unreal_action_W1_Source_W1_Controllers_W1AIController_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AW1AIController(AW1AIController&&); \
	AW1AIController(const AW1AIController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AW1AIController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AW1AIController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AW1AIController) \
	NO_API virtual ~AW1AIController();


#define FID_unreal_action_W1_Source_W1_Controllers_W1AIController_h_13_PROLOG
#define FID_unreal_action_W1_Source_W1_Controllers_W1AIController_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_unreal_action_W1_Source_W1_Controllers_W1AIController_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_unreal_action_W1_Source_W1_Controllers_W1AIController_h_16_INCLASS_NO_PURE_DECLS \
	FID_unreal_action_W1_Source_W1_Controllers_W1AIController_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> W1_API UClass* StaticClass<class AW1AIController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_unreal_action_W1_Source_W1_Controllers_W1AIController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
