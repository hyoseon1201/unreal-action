// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "W1/DataAssets/DA_StartUpDataBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDA_StartUpDataBase() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
UPackage* Z_Construct_UPackage__Script_W1();
W1_API UClass* Z_Construct_UClass_UDA_StartUpDataBase();
W1_API UClass* Z_Construct_UClass_UDA_StartUpDataBase_NoRegister();
W1_API UClass* Z_Construct_UClass_UW1GameplayAbility_NoRegister();
// End Cross Module References

// Begin Class UDA_StartUpDataBase
void UDA_StartUpDataBase::StaticRegisterNativesUDA_StartUpDataBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDA_StartUpDataBase);
UClass* Z_Construct_UClass_UDA_StartUpDataBase_NoRegister()
{
	return UDA_StartUpDataBase::StaticClass();
}
struct Z_Construct_UClass_UDA_StartUpDataBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "DataAssets/DA_StartUpDataBase.h" },
		{ "ModuleRelativePath", "DataAssets/DA_StartUpDataBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActivateOnGivenAbilities_MetaData[] = {
		{ "Category", "StartUpData" },
		{ "ModuleRelativePath", "DataAssets/DA_StartUpDataBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReactiveAbilities_MetaData[] = {
		{ "Category", "StartUpData" },
		{ "ModuleRelativePath", "DataAssets/DA_StartUpDataBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_ActivateOnGivenAbilities_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ActivateOnGivenAbilities;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ReactiveAbilities_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReactiveAbilities;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDA_StartUpDataBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UDA_StartUpDataBase_Statics::NewProp_ActivateOnGivenAbilities_Inner = { "ActivateOnGivenAbilities", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UW1GameplayAbility_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDA_StartUpDataBase_Statics::NewProp_ActivateOnGivenAbilities = { "ActivateOnGivenAbilities", nullptr, (EPropertyFlags)0x0024080000010001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDA_StartUpDataBase, ActivateOnGivenAbilities), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActivateOnGivenAbilities_MetaData), NewProp_ActivateOnGivenAbilities_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UDA_StartUpDataBase_Statics::NewProp_ReactiveAbilities_Inner = { "ReactiveAbilities", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UW1GameplayAbility_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDA_StartUpDataBase_Statics::NewProp_ReactiveAbilities = { "ReactiveAbilities", nullptr, (EPropertyFlags)0x0024080000010001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDA_StartUpDataBase, ReactiveAbilities), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReactiveAbilities_MetaData), NewProp_ReactiveAbilities_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDA_StartUpDataBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDA_StartUpDataBase_Statics::NewProp_ActivateOnGivenAbilities_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDA_StartUpDataBase_Statics::NewProp_ActivateOnGivenAbilities,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDA_StartUpDataBase_Statics::NewProp_ReactiveAbilities_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDA_StartUpDataBase_Statics::NewProp_ReactiveAbilities,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDA_StartUpDataBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDA_StartUpDataBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_W1,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDA_StartUpDataBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDA_StartUpDataBase_Statics::ClassParams = {
	&UDA_StartUpDataBase::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UDA_StartUpDataBase_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UDA_StartUpDataBase_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDA_StartUpDataBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UDA_StartUpDataBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDA_StartUpDataBase()
{
	if (!Z_Registration_Info_UClass_UDA_StartUpDataBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDA_StartUpDataBase.OuterSingleton, Z_Construct_UClass_UDA_StartUpDataBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDA_StartUpDataBase.OuterSingleton;
}
template<> W1_API UClass* StaticClass<UDA_StartUpDataBase>()
{
	return UDA_StartUpDataBase::StaticClass();
}
UDA_StartUpDataBase::UDA_StartUpDataBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDA_StartUpDataBase);
UDA_StartUpDataBase::~UDA_StartUpDataBase() {}
// End Class UDA_StartUpDataBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_unreal_action_W1_Source_W1_DataAssets_DA_StartUpDataBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDA_StartUpDataBase, UDA_StartUpDataBase::StaticClass, TEXT("UDA_StartUpDataBase"), &Z_Registration_Info_UClass_UDA_StartUpDataBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDA_StartUpDataBase), 2187016199U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_unreal_action_W1_Source_W1_DataAssets_DA_StartUpDataBase_h_1667338571(TEXT("/Script/W1"),
	Z_CompiledInDeferFile_FID_unreal_action_W1_Source_W1_DataAssets_DA_StartUpDataBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_unreal_action_W1_Source_W1_DataAssets_DA_StartUpDataBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
