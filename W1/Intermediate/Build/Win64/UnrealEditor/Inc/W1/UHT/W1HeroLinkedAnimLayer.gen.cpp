// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "W1/AnimInstances/Hero/W1HeroLinkedAnimLayer.h"
#include "Runtime/Engine/Classes/Components/SkeletalMeshComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeW1HeroLinkedAnimLayer() {}

// Begin Cross Module References
UPackage* Z_Construct_UPackage__Script_W1();
W1_API UClass* Z_Construct_UClass_UW1AnimInstanceBase();
W1_API UClass* Z_Construct_UClass_UW1HeroAnimInstance_NoRegister();
W1_API UClass* Z_Construct_UClass_UW1HeroLinkedAnimLayer();
W1_API UClass* Z_Construct_UClass_UW1HeroLinkedAnimLayer_NoRegister();
// End Cross Module References

// Begin Class UW1HeroLinkedAnimLayer Function GetHeroAnimInstance
struct Z_Construct_UFunction_UW1HeroLinkedAnimLayer_GetHeroAnimInstance_Statics
{
	struct W1HeroLinkedAnimLayer_eventGetHeroAnimInstance_Parms
	{
		UW1HeroAnimInstance* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "ModuleRelativePath", "AnimInstances/Hero/W1HeroLinkedAnimLayer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UW1HeroLinkedAnimLayer_GetHeroAnimInstance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(W1HeroLinkedAnimLayer_eventGetHeroAnimInstance_Parms, ReturnValue), Z_Construct_UClass_UW1HeroAnimInstance_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UW1HeroLinkedAnimLayer_GetHeroAnimInstance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UW1HeroLinkedAnimLayer_GetHeroAnimInstance_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UW1HeroLinkedAnimLayer_GetHeroAnimInstance_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UW1HeroLinkedAnimLayer_GetHeroAnimInstance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UW1HeroLinkedAnimLayer, nullptr, "GetHeroAnimInstance", nullptr, nullptr, Z_Construct_UFunction_UW1HeroLinkedAnimLayer_GetHeroAnimInstance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UW1HeroLinkedAnimLayer_GetHeroAnimInstance_Statics::PropPointers), sizeof(Z_Construct_UFunction_UW1HeroLinkedAnimLayer_GetHeroAnimInstance_Statics::W1HeroLinkedAnimLayer_eventGetHeroAnimInstance_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UW1HeroLinkedAnimLayer_GetHeroAnimInstance_Statics::Function_MetaDataParams), Z_Construct_UFunction_UW1HeroLinkedAnimLayer_GetHeroAnimInstance_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UW1HeroLinkedAnimLayer_GetHeroAnimInstance_Statics::W1HeroLinkedAnimLayer_eventGetHeroAnimInstance_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UW1HeroLinkedAnimLayer_GetHeroAnimInstance()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UW1HeroLinkedAnimLayer_GetHeroAnimInstance_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UW1HeroLinkedAnimLayer::execGetHeroAnimInstance)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UW1HeroAnimInstance**)Z_Param__Result=P_THIS->GetHeroAnimInstance();
	P_NATIVE_END;
}
// End Class UW1HeroLinkedAnimLayer Function GetHeroAnimInstance

// Begin Class UW1HeroLinkedAnimLayer
void UW1HeroLinkedAnimLayer::StaticRegisterNativesUW1HeroLinkedAnimLayer()
{
	UClass* Class = UW1HeroLinkedAnimLayer::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetHeroAnimInstance", &UW1HeroLinkedAnimLayer::execGetHeroAnimInstance },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UW1HeroLinkedAnimLayer);
UClass* Z_Construct_UClass_UW1HeroLinkedAnimLayer_NoRegister()
{
	return UW1HeroLinkedAnimLayer::StaticClass();
}
struct Z_Construct_UClass_UW1HeroLinkedAnimLayer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "AnimInstances/Hero/W1HeroLinkedAnimLayer.h" },
		{ "ModuleRelativePath", "AnimInstances/Hero/W1HeroLinkedAnimLayer.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UW1HeroLinkedAnimLayer_GetHeroAnimInstance, "GetHeroAnimInstance" }, // 2889426111
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UW1HeroLinkedAnimLayer>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UW1HeroLinkedAnimLayer_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UW1AnimInstanceBase,
	(UObject* (*)())Z_Construct_UPackage__Script_W1,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UW1HeroLinkedAnimLayer_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UW1HeroLinkedAnimLayer_Statics::ClassParams = {
	&UW1HeroLinkedAnimLayer::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x009000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UW1HeroLinkedAnimLayer_Statics::Class_MetaDataParams), Z_Construct_UClass_UW1HeroLinkedAnimLayer_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UW1HeroLinkedAnimLayer()
{
	if (!Z_Registration_Info_UClass_UW1HeroLinkedAnimLayer.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UW1HeroLinkedAnimLayer.OuterSingleton, Z_Construct_UClass_UW1HeroLinkedAnimLayer_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UW1HeroLinkedAnimLayer.OuterSingleton;
}
template<> W1_API UClass* StaticClass<UW1HeroLinkedAnimLayer>()
{
	return UW1HeroLinkedAnimLayer::StaticClass();
}
UW1HeroLinkedAnimLayer::UW1HeroLinkedAnimLayer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UW1HeroLinkedAnimLayer);
UW1HeroLinkedAnimLayer::~UW1HeroLinkedAnimLayer() {}
// End Class UW1HeroLinkedAnimLayer

// Begin Registration
struct Z_CompiledInDeferFile_FID_unreal_action_W1_Source_W1_AnimInstances_Hero_W1HeroLinkedAnimLayer_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UW1HeroLinkedAnimLayer, UW1HeroLinkedAnimLayer::StaticClass, TEXT("UW1HeroLinkedAnimLayer"), &Z_Registration_Info_UClass_UW1HeroLinkedAnimLayer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UW1HeroLinkedAnimLayer), 3742103494U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_unreal_action_W1_Source_W1_AnimInstances_Hero_W1HeroLinkedAnimLayer_h_3059645468(TEXT("/Script/W1"),
	Z_CompiledInDeferFile_FID_unreal_action_W1_Source_W1_AnimInstances_Hero_W1HeroLinkedAnimLayer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_unreal_action_W1_Source_W1_AnimInstances_Hero_W1HeroLinkedAnimLayer_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
