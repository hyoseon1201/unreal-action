// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "W1/Controllers/W1AIController.h"
#include "Runtime/AIModule/Classes/Perception/AIPerceptionTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeW1AIController() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_AAIController();
AIMODULE_API UClass* Z_Construct_UClass_UAIPerceptionComponent_NoRegister();
AIMODULE_API UClass* Z_Construct_UClass_UAISenseConfig_Sight_NoRegister();
AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FAIStimulus();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
UPackage* Z_Construct_UPackage__Script_W1();
W1_API UClass* Z_Construct_UClass_AW1AIController();
W1_API UClass* Z_Construct_UClass_AW1AIController_NoRegister();
// End Cross Module References

// Begin Class AW1AIController Function OnEnemyPerceptionUpdated
struct Z_Construct_UFunction_AW1AIController_OnEnemyPerceptionUpdated_Statics
{
	struct W1AIController_eventOnEnemyPerceptionUpdated_Parms
	{
		AActor* Actor;
		FAIStimulus Stimulus;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Controllers/W1AIController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Stimulus;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AW1AIController_OnEnemyPerceptionUpdated_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(W1AIController_eventOnEnemyPerceptionUpdated_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AW1AIController_OnEnemyPerceptionUpdated_Statics::NewProp_Stimulus = { "Stimulus", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(W1AIController_eventOnEnemyPerceptionUpdated_Parms, Stimulus), Z_Construct_UScriptStruct_FAIStimulus, METADATA_PARAMS(0, nullptr) }; // 177100813
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AW1AIController_OnEnemyPerceptionUpdated_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AW1AIController_OnEnemyPerceptionUpdated_Statics::NewProp_Actor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AW1AIController_OnEnemyPerceptionUpdated_Statics::NewProp_Stimulus,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AW1AIController_OnEnemyPerceptionUpdated_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AW1AIController_OnEnemyPerceptionUpdated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AW1AIController, nullptr, "OnEnemyPerceptionUpdated", nullptr, nullptr, Z_Construct_UFunction_AW1AIController_OnEnemyPerceptionUpdated_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AW1AIController_OnEnemyPerceptionUpdated_Statics::PropPointers), sizeof(Z_Construct_UFunction_AW1AIController_OnEnemyPerceptionUpdated_Statics::W1AIController_eventOnEnemyPerceptionUpdated_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AW1AIController_OnEnemyPerceptionUpdated_Statics::Function_MetaDataParams), Z_Construct_UFunction_AW1AIController_OnEnemyPerceptionUpdated_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AW1AIController_OnEnemyPerceptionUpdated_Statics::W1AIController_eventOnEnemyPerceptionUpdated_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AW1AIController_OnEnemyPerceptionUpdated()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AW1AIController_OnEnemyPerceptionUpdated_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AW1AIController::execOnEnemyPerceptionUpdated)
{
	P_GET_OBJECT(AActor,Z_Param_Actor);
	P_GET_STRUCT(FAIStimulus,Z_Param_Stimulus);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnEnemyPerceptionUpdated(Z_Param_Actor,Z_Param_Stimulus);
	P_NATIVE_END;
}
// End Class AW1AIController Function OnEnemyPerceptionUpdated

// Begin Class AW1AIController
void AW1AIController::StaticRegisterNativesAW1AIController()
{
	UClass* Class = AW1AIController::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnEnemyPerceptionUpdated", &AW1AIController::execOnEnemyPerceptionUpdated },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AW1AIController);
UClass* Z_Construct_UClass_AW1AIController_NoRegister()
{
	return AW1AIController::StaticClass();
}
struct Z_Construct_UClass_AW1AIController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "Controllers/W1AIController.h" },
		{ "ModuleRelativePath", "Controllers/W1AIController.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnemyPerceptionComponent_MetaData[] = {
		{ "Category", "W1AIController" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Controllers/W1AIController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AISenseConfig_Sight_MetaData[] = {
		{ "Category", "W1AIController" },
		{ "ModuleRelativePath", "Controllers/W1AIController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableDetourCrowdAvoidance_MetaData[] = {
		{ "Category", "Detour Crowd Avoidance Config" },
		{ "ModuleRelativePath", "Controllers/W1AIController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DetourCrowdAvoidanceQuality_MetaData[] = {
		{ "Category", "Detour Crowd Avoidance Config" },
		{ "EditCondition", "bEnableDetourCrowdAvoidance" },
		{ "ModuleRelativePath", "Controllers/W1AIController.h" },
		{ "UIMax", "4" },
		{ "UIMin", "1" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollisionQueryRange_MetaData[] = {
		{ "Category", "Detour Crowd Avoidance Config" },
		{ "EditCondition", "bEnableDetourCrowdAvoidance" },
		{ "ModuleRelativePath", "Controllers/W1AIController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EnemyPerceptionComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AISenseConfig_Sight;
	static void NewProp_bEnableDetourCrowdAvoidance_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableDetourCrowdAvoidance;
	static const UECodeGen_Private::FIntPropertyParams NewProp_DetourCrowdAvoidanceQuality;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CollisionQueryRange;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AW1AIController_OnEnemyPerceptionUpdated, "OnEnemyPerceptionUpdated" }, // 2831936052
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AW1AIController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AW1AIController_Statics::NewProp_EnemyPerceptionComponent = { "EnemyPerceptionComponent", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AW1AIController, EnemyPerceptionComponent), Z_Construct_UClass_UAIPerceptionComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnemyPerceptionComponent_MetaData), NewProp_EnemyPerceptionComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AW1AIController_Statics::NewProp_AISenseConfig_Sight = { "AISenseConfig_Sight", nullptr, (EPropertyFlags)0x0020080000020015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AW1AIController, AISenseConfig_Sight), Z_Construct_UClass_UAISenseConfig_Sight_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AISenseConfig_Sight_MetaData), NewProp_AISenseConfig_Sight_MetaData) };
void Z_Construct_UClass_AW1AIController_Statics::NewProp_bEnableDetourCrowdAvoidance_SetBit(void* Obj)
{
	((AW1AIController*)Obj)->bEnableDetourCrowdAvoidance = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AW1AIController_Statics::NewProp_bEnableDetourCrowdAvoidance = { "bEnableDetourCrowdAvoidance", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AW1AIController), &Z_Construct_UClass_AW1AIController_Statics::NewProp_bEnableDetourCrowdAvoidance_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableDetourCrowdAvoidance_MetaData), NewProp_bEnableDetourCrowdAvoidance_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AW1AIController_Statics::NewProp_DetourCrowdAvoidanceQuality = { "DetourCrowdAvoidanceQuality", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AW1AIController, DetourCrowdAvoidanceQuality), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DetourCrowdAvoidanceQuality_MetaData), NewProp_DetourCrowdAvoidanceQuality_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AW1AIController_Statics::NewProp_CollisionQueryRange = { "CollisionQueryRange", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AW1AIController, CollisionQueryRange), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollisionQueryRange_MetaData), NewProp_CollisionQueryRange_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AW1AIController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AW1AIController_Statics::NewProp_EnemyPerceptionComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AW1AIController_Statics::NewProp_AISenseConfig_Sight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AW1AIController_Statics::NewProp_bEnableDetourCrowdAvoidance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AW1AIController_Statics::NewProp_DetourCrowdAvoidanceQuality,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AW1AIController_Statics::NewProp_CollisionQueryRange,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AW1AIController_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AW1AIController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AAIController,
	(UObject* (*)())Z_Construct_UPackage__Script_W1,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AW1AIController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AW1AIController_Statics::ClassParams = {
	&AW1AIController::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AW1AIController_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AW1AIController_Statics::PropPointers),
	0,
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AW1AIController_Statics::Class_MetaDataParams), Z_Construct_UClass_AW1AIController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AW1AIController()
{
	if (!Z_Registration_Info_UClass_AW1AIController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AW1AIController.OuterSingleton, Z_Construct_UClass_AW1AIController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AW1AIController.OuterSingleton;
}
template<> W1_API UClass* StaticClass<AW1AIController>()
{
	return AW1AIController::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AW1AIController);
AW1AIController::~AW1AIController() {}
// End Class AW1AIController

// Begin Registration
struct Z_CompiledInDeferFile_FID_unreal_action_W1_Source_W1_Controllers_W1AIController_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AW1AIController, AW1AIController::StaticClass, TEXT("AW1AIController"), &Z_Registration_Info_UClass_AW1AIController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AW1AIController), 2771258712U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_unreal_action_W1_Source_W1_Controllers_W1AIController_h_1181587075(TEXT("/Script/W1"),
	Z_CompiledInDeferFile_FID_unreal_action_W1_Source_W1_Controllers_W1AIController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_unreal_action_W1_Source_W1_Controllers_W1AIController_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
