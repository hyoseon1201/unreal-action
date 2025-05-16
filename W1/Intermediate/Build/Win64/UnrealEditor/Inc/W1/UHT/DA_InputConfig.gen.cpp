// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "W1/DataAssets/Input/DA_InputConfig.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDA_InputConfig() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
UPackage* Z_Construct_UPackage__Script_W1();
W1_API UClass* Z_Construct_UClass_UDA_InputConfig();
W1_API UClass* Z_Construct_UClass_UDA_InputConfig_NoRegister();
W1_API UScriptStruct* Z_Construct_UScriptStruct_FW1InputActionConfig();
// End Cross Module References

// Begin ScriptStruct FW1InputActionConfig
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_W1InputActionConfig;
class UScriptStruct* FW1InputActionConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_W1InputActionConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_W1InputActionConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FW1InputActionConfig, (UObject*)Z_Construct_UPackage__Script_W1(), TEXT("W1InputActionConfig"));
	}
	return Z_Registration_Info_UScriptStruct_W1InputActionConfig.OuterSingleton;
}
template<> W1_API UScriptStruct* StaticStruct<FW1InputActionConfig>()
{
	return FW1InputActionConfig::StaticStruct();
}
struct Z_Construct_UScriptStruct_FW1InputActionConfig_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "DataAssets/Input/DA_InputConfig.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputTag_MetaData[] = {
		{ "Category", "InputTag" },
		{ "ModuleRelativePath", "DataAssets/Input/DA_InputConfig.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputAction_MetaData[] = {
		{ "Category", "W1InputActionConfig" },
		{ "ModuleRelativePath", "DataAssets/Input/DA_InputConfig.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InputTag;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InputAction;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FW1InputActionConfig>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FW1InputActionConfig_Statics::NewProp_InputTag = { "InputTag", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FW1InputActionConfig, InputTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputTag_MetaData), NewProp_InputTag_MetaData) }; // 1298103297
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FW1InputActionConfig_Statics::NewProp_InputAction = { "InputAction", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FW1InputActionConfig, InputAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputAction_MetaData), NewProp_InputAction_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FW1InputActionConfig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FW1InputActionConfig_Statics::NewProp_InputTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FW1InputActionConfig_Statics::NewProp_InputAction,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FW1InputActionConfig_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FW1InputActionConfig_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_W1,
	nullptr,
	&NewStructOps,
	"W1InputActionConfig",
	Z_Construct_UScriptStruct_FW1InputActionConfig_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FW1InputActionConfig_Statics::PropPointers),
	sizeof(FW1InputActionConfig),
	alignof(FW1InputActionConfig),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FW1InputActionConfig_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FW1InputActionConfig_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FW1InputActionConfig()
{
	if (!Z_Registration_Info_UScriptStruct_W1InputActionConfig.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_W1InputActionConfig.InnerSingleton, Z_Construct_UScriptStruct_FW1InputActionConfig_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_W1InputActionConfig.InnerSingleton;
}
// End ScriptStruct FW1InputActionConfig

// Begin Class UDA_InputConfig
void UDA_InputConfig::StaticRegisterNativesUDA_InputConfig()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDA_InputConfig);
UClass* Z_Construct_UClass_UDA_InputConfig_NoRegister()
{
	return UDA_InputConfig::StaticClass();
}
struct Z_Construct_UClass_UDA_InputConfig_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "DataAssets/Input/DA_InputConfig.h" },
		{ "ModuleRelativePath", "DataAssets/Input/DA_InputConfig.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultMappingContext_MetaData[] = {
		{ "Category", "DA_InputConfig" },
		{ "ModuleRelativePath", "DataAssets/Input/DA_InputConfig.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NativeInputActions_MetaData[] = {
		{ "Category", "DA_InputConfig" },
		{ "ModuleRelativePath", "DataAssets/Input/DA_InputConfig.h" },
		{ "TitleProperty", "InputTag" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultMappingContext;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NativeInputActions_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_NativeInputActions;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDA_InputConfig>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDA_InputConfig_Statics::NewProp_DefaultMappingContext = { "DefaultMappingContext", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDA_InputConfig, DefaultMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultMappingContext_MetaData), NewProp_DefaultMappingContext_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDA_InputConfig_Statics::NewProp_NativeInputActions_Inner = { "NativeInputActions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FW1InputActionConfig, METADATA_PARAMS(0, nullptr) }; // 2135789688
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDA_InputConfig_Statics::NewProp_NativeInputActions = { "NativeInputActions", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDA_InputConfig, NativeInputActions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NativeInputActions_MetaData), NewProp_NativeInputActions_MetaData) }; // 2135789688
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDA_InputConfig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDA_InputConfig_Statics::NewProp_DefaultMappingContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDA_InputConfig_Statics::NewProp_NativeInputActions_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDA_InputConfig_Statics::NewProp_NativeInputActions,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDA_InputConfig_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDA_InputConfig_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_W1,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDA_InputConfig_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDA_InputConfig_Statics::ClassParams = {
	&UDA_InputConfig::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UDA_InputConfig_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UDA_InputConfig_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDA_InputConfig_Statics::Class_MetaDataParams), Z_Construct_UClass_UDA_InputConfig_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDA_InputConfig()
{
	if (!Z_Registration_Info_UClass_UDA_InputConfig.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDA_InputConfig.OuterSingleton, Z_Construct_UClass_UDA_InputConfig_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDA_InputConfig.OuterSingleton;
}
template<> W1_API UClass* StaticClass<UDA_InputConfig>()
{
	return UDA_InputConfig::StaticClass();
}
UDA_InputConfig::UDA_InputConfig(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDA_InputConfig);
UDA_InputConfig::~UDA_InputConfig() {}
// End Class UDA_InputConfig

// Begin Registration
struct Z_CompiledInDeferFile_FID_unreal_action_W1_Source_W1_DataAssets_Input_DA_InputConfig_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FW1InputActionConfig::StaticStruct, Z_Construct_UScriptStruct_FW1InputActionConfig_Statics::NewStructOps, TEXT("W1InputActionConfig"), &Z_Registration_Info_UScriptStruct_W1InputActionConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FW1InputActionConfig), 2135789688U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDA_InputConfig, UDA_InputConfig::StaticClass, TEXT("UDA_InputConfig"), &Z_Registration_Info_UClass_UDA_InputConfig, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDA_InputConfig), 757903386U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_unreal_action_W1_Source_W1_DataAssets_Input_DA_InputConfig_h_3912356654(TEXT("/Script/W1"),
	Z_CompiledInDeferFile_FID_unreal_action_W1_Source_W1_DataAssets_Input_DA_InputConfig_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_unreal_action_W1_Source_W1_DataAssets_Input_DA_InputConfig_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_unreal_action_W1_Source_W1_DataAssets_Input_DA_InputConfig_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_unreal_action_W1_Source_W1_DataAssets_Input_DA_InputConfig_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
