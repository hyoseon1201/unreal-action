// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "W1/W1Types/W1EnumTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeW1EnumTypes() {}

// Begin Cross Module References
UPackage* Z_Construct_UPackage__Script_W1();
W1_API UEnum* Z_Construct_UEnum_W1_EW1ConfirmType();
W1_API UEnum* Z_Construct_UEnum_W1_EW1ValidType();
// End Cross Module References

// Begin Enum EW1ConfirmType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EW1ConfirmType;
static UEnum* EW1ConfirmType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EW1ConfirmType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EW1ConfirmType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_W1_EW1ConfirmType, (UObject*)Z_Construct_UPackage__Script_W1(), TEXT("EW1ConfirmType"));
	}
	return Z_Registration_Info_UEnum_EW1ConfirmType.OuterSingleton;
}
template<> W1_API UEnum* StaticEnum<EW1ConfirmType>()
{
	return EW1ConfirmType_StaticEnum();
}
struct Z_Construct_UEnum_W1_EW1ConfirmType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "W1Types/W1EnumTypes.h" },
		{ "No.Name", "EW1ConfirmType::No" },
		{ "Yes.Name", "EW1ConfirmType::Yes" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EW1ConfirmType::Yes", (int64)EW1ConfirmType::Yes },
		{ "EW1ConfirmType::No", (int64)EW1ConfirmType::No },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_W1_EW1ConfirmType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_W1,
	nullptr,
	"EW1ConfirmType",
	"EW1ConfirmType",
	Z_Construct_UEnum_W1_EW1ConfirmType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_W1_EW1ConfirmType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_W1_EW1ConfirmType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_W1_EW1ConfirmType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_W1_EW1ConfirmType()
{
	if (!Z_Registration_Info_UEnum_EW1ConfirmType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EW1ConfirmType.InnerSingleton, Z_Construct_UEnum_W1_EW1ConfirmType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EW1ConfirmType.InnerSingleton;
}
// End Enum EW1ConfirmType

// Begin Enum EW1ValidType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EW1ValidType;
static UEnum* EW1ValidType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EW1ValidType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EW1ValidType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_W1_EW1ValidType, (UObject*)Z_Construct_UPackage__Script_W1(), TEXT("EW1ValidType"));
	}
	return Z_Registration_Info_UEnum_EW1ValidType.OuterSingleton;
}
template<> W1_API UEnum* StaticEnum<EW1ValidType>()
{
	return EW1ValidType_StaticEnum();
}
struct Z_Construct_UEnum_W1_EW1ValidType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "InValid.Name", "EW1ValidType::InValid" },
		{ "ModuleRelativePath", "W1Types/W1EnumTypes.h" },
		{ "Valid.Name", "EW1ValidType::Valid" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EW1ValidType::Valid", (int64)EW1ValidType::Valid },
		{ "EW1ValidType::InValid", (int64)EW1ValidType::InValid },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_W1_EW1ValidType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_W1,
	nullptr,
	"EW1ValidType",
	"EW1ValidType",
	Z_Construct_UEnum_W1_EW1ValidType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_W1_EW1ValidType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_W1_EW1ValidType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_W1_EW1ValidType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_W1_EW1ValidType()
{
	if (!Z_Registration_Info_UEnum_EW1ValidType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EW1ValidType.InnerSingleton, Z_Construct_UEnum_W1_EW1ValidType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EW1ValidType.InnerSingleton;
}
// End Enum EW1ValidType

// Begin Registration
struct Z_CompiledInDeferFile_FID_unreal_action_W1_Source_W1_W1Types_W1EnumTypes_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EW1ConfirmType_StaticEnum, TEXT("EW1ConfirmType"), &Z_Registration_Info_UEnum_EW1ConfirmType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1163415110U) },
		{ EW1ValidType_StaticEnum, TEXT("EW1ValidType"), &Z_Registration_Info_UEnum_EW1ValidType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 851855648U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_unreal_action_W1_Source_W1_W1Types_W1EnumTypes_h_850987525(TEXT("/Script/W1"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_unreal_action_W1_Source_W1_W1Types_W1EnumTypes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_unreal_action_W1_Source_W1_W1Types_W1EnumTypes_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
