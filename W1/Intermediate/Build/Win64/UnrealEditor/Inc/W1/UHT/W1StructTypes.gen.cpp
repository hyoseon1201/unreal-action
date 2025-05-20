// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "W1/W1Types/W1StructTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeW1StructTypes() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
UPackage* Z_Construct_UPackage__Script_W1();
W1_API UClass* Z_Construct_UClass_UW1HeroLinkedAnimLayer_NoRegister();
W1_API UScriptStruct* Z_Construct_UScriptStruct_FW1HeroWeaponData();
// End Cross Module References

// Begin ScriptStruct FW1HeroWeaponData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_W1HeroWeaponData;
class UScriptStruct* FW1HeroWeaponData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_W1HeroWeaponData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_W1HeroWeaponData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FW1HeroWeaponData, (UObject*)Z_Construct_UPackage__Script_W1(), TEXT("W1HeroWeaponData"));
	}
	return Z_Registration_Info_UScriptStruct_W1HeroWeaponData.OuterSingleton;
}
template<> W1_API UScriptStruct* StaticStruct<FW1HeroWeaponData>()
{
	return FW1HeroWeaponData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FW1HeroWeaponData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "W1Types/W1StructTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeaponAnimLayerToLink_MetaData[] = {
		{ "Category", "W1HeroWeaponData" },
		{ "ModuleRelativePath", "W1Types/W1StructTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_WeaponAnimLayerToLink;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FW1HeroWeaponData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FW1HeroWeaponData_Statics::NewProp_WeaponAnimLayerToLink = { "WeaponAnimLayerToLink", nullptr, (EPropertyFlags)0x0014000000010015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FW1HeroWeaponData, WeaponAnimLayerToLink), Z_Construct_UClass_UClass, Z_Construct_UClass_UW1HeroLinkedAnimLayer_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeaponAnimLayerToLink_MetaData), NewProp_WeaponAnimLayerToLink_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FW1HeroWeaponData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FW1HeroWeaponData_Statics::NewProp_WeaponAnimLayerToLink,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FW1HeroWeaponData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FW1HeroWeaponData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_W1,
	nullptr,
	&NewStructOps,
	"W1HeroWeaponData",
	Z_Construct_UScriptStruct_FW1HeroWeaponData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FW1HeroWeaponData_Statics::PropPointers),
	sizeof(FW1HeroWeaponData),
	alignof(FW1HeroWeaponData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FW1HeroWeaponData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FW1HeroWeaponData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FW1HeroWeaponData()
{
	if (!Z_Registration_Info_UScriptStruct_W1HeroWeaponData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_W1HeroWeaponData.InnerSingleton, Z_Construct_UScriptStruct_FW1HeroWeaponData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_W1HeroWeaponData.InnerSingleton;
}
// End ScriptStruct FW1HeroWeaponData

// Begin Registration
struct Z_CompiledInDeferFile_FID_unreal_action_W1_Source_W1_W1Types_W1StructTypes_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FW1HeroWeaponData::StaticStruct, Z_Construct_UScriptStruct_FW1HeroWeaponData_Statics::NewStructOps, TEXT("W1HeroWeaponData"), &Z_Registration_Info_UScriptStruct_W1HeroWeaponData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FW1HeroWeaponData), 1400038117U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_unreal_action_W1_Source_W1_W1Types_W1StructTypes_h_3406018066(TEXT("/Script/W1"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_unreal_action_W1_Source_W1_W1Types_W1StructTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_unreal_action_W1_Source_W1_W1Types_W1StructTypes_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
