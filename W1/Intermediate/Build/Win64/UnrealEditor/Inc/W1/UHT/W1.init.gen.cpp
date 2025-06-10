// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeW1_init() {}
	W1_API UFunction* Z_Construct_UDelegateFunction_W1_OnAbilityTaskTickDelegate__DelegateSignature();
	W1_API UFunction* Z_Construct_UDelegateFunction_W1_OnEquippedWeaponChangedDelegate__DelegateSignature();
	W1_API UFunction* Z_Construct_UDelegateFunction_W1_OnPercentChangedDelegate__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_W1;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_W1()
	{
		if (!Z_Registration_Info_UPackage__Script_W1.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_W1_OnAbilityTaskTickDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_W1_OnEquippedWeaponChangedDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_W1_OnPercentChangedDelegate__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/W1",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xEDCCE5F7,
				0x7031303D,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_W1.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_W1.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_W1(Z_Construct_UPackage__Script_W1, TEXT("/Script/W1"), Z_Registration_Info_UPackage__Script_W1, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xEDCCE5F7, 0x7031303D));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
