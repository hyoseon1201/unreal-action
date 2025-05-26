// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "W1/Items/Weapons/W1HeroWeapon.h"
#include "GameplayAbilities/Public/GameplayAbilitySpecHandle.h"
#include "W1/W1Types/W1StructTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeW1HeroWeapon() {}

// Begin Cross Module References
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAbilitySpecHandle();
UPackage* Z_Construct_UPackage__Script_W1();
W1_API UClass* Z_Construct_UClass_AW1HeroWeapon();
W1_API UClass* Z_Construct_UClass_AW1HeroWeapon_NoRegister();
W1_API UClass* Z_Construct_UClass_AW1WeaponBase();
W1_API UScriptStruct* Z_Construct_UScriptStruct_FW1HeroWeaponData();
// End Cross Module References

// Begin Class AW1HeroWeapon Function AssignGrantedAbilitySpecHandles
struct Z_Construct_UFunction_AW1HeroWeapon_AssignGrantedAbilitySpecHandles_Statics
{
	struct W1HeroWeapon_eventAssignGrantedAbilitySpecHandles_Parms
	{
		TArray<FGameplayAbilitySpecHandle> InSpecHandles;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Items/Weapons/W1HeroWeapon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InSpecHandles_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InSpecHandles_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InSpecHandles;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AW1HeroWeapon_AssignGrantedAbilitySpecHandles_Statics::NewProp_InSpecHandles_Inner = { "InSpecHandles", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayAbilitySpecHandle, METADATA_PARAMS(0, nullptr) }; // 3490030742
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AW1HeroWeapon_AssignGrantedAbilitySpecHandles_Statics::NewProp_InSpecHandles = { "InSpecHandles", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(W1HeroWeapon_eventAssignGrantedAbilitySpecHandles_Parms, InSpecHandles), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InSpecHandles_MetaData), NewProp_InSpecHandles_MetaData) }; // 3490030742
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AW1HeroWeapon_AssignGrantedAbilitySpecHandles_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AW1HeroWeapon_AssignGrantedAbilitySpecHandles_Statics::NewProp_InSpecHandles_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AW1HeroWeapon_AssignGrantedAbilitySpecHandles_Statics::NewProp_InSpecHandles,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AW1HeroWeapon_AssignGrantedAbilitySpecHandles_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AW1HeroWeapon_AssignGrantedAbilitySpecHandles_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AW1HeroWeapon, nullptr, "AssignGrantedAbilitySpecHandles", nullptr, nullptr, Z_Construct_UFunction_AW1HeroWeapon_AssignGrantedAbilitySpecHandles_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AW1HeroWeapon_AssignGrantedAbilitySpecHandles_Statics::PropPointers), sizeof(Z_Construct_UFunction_AW1HeroWeapon_AssignGrantedAbilitySpecHandles_Statics::W1HeroWeapon_eventAssignGrantedAbilitySpecHandles_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AW1HeroWeapon_AssignGrantedAbilitySpecHandles_Statics::Function_MetaDataParams), Z_Construct_UFunction_AW1HeroWeapon_AssignGrantedAbilitySpecHandles_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AW1HeroWeapon_AssignGrantedAbilitySpecHandles_Statics::W1HeroWeapon_eventAssignGrantedAbilitySpecHandles_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AW1HeroWeapon_AssignGrantedAbilitySpecHandles()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AW1HeroWeapon_AssignGrantedAbilitySpecHandles_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AW1HeroWeapon::execAssignGrantedAbilitySpecHandles)
{
	P_GET_TARRAY_REF(FGameplayAbilitySpecHandle,Z_Param_Out_InSpecHandles);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AssignGrantedAbilitySpecHandles(Z_Param_Out_InSpecHandles);
	P_NATIVE_END;
}
// End Class AW1HeroWeapon Function AssignGrantedAbilitySpecHandles

// Begin Class AW1HeroWeapon Function GetGrantedAbilitySpecHandles
struct Z_Construct_UFunction_AW1HeroWeapon_GetGrantedAbilitySpecHandles_Statics
{
	struct W1HeroWeapon_eventGetGrantedAbilitySpecHandles_Parms
	{
		TArray<FGameplayAbilitySpecHandle> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Items/Weapons/W1HeroWeapon.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AW1HeroWeapon_GetGrantedAbilitySpecHandles_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayAbilitySpecHandle, METADATA_PARAMS(0, nullptr) }; // 3490030742
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AW1HeroWeapon_GetGrantedAbilitySpecHandles_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(W1HeroWeapon_eventGetGrantedAbilitySpecHandles_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 3490030742
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AW1HeroWeapon_GetGrantedAbilitySpecHandles_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AW1HeroWeapon_GetGrantedAbilitySpecHandles_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AW1HeroWeapon_GetGrantedAbilitySpecHandles_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AW1HeroWeapon_GetGrantedAbilitySpecHandles_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AW1HeroWeapon_GetGrantedAbilitySpecHandles_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AW1HeroWeapon, nullptr, "GetGrantedAbilitySpecHandles", nullptr, nullptr, Z_Construct_UFunction_AW1HeroWeapon_GetGrantedAbilitySpecHandles_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AW1HeroWeapon_GetGrantedAbilitySpecHandles_Statics::PropPointers), sizeof(Z_Construct_UFunction_AW1HeroWeapon_GetGrantedAbilitySpecHandles_Statics::W1HeroWeapon_eventGetGrantedAbilitySpecHandles_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AW1HeroWeapon_GetGrantedAbilitySpecHandles_Statics::Function_MetaDataParams), Z_Construct_UFunction_AW1HeroWeapon_GetGrantedAbilitySpecHandles_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AW1HeroWeapon_GetGrantedAbilitySpecHandles_Statics::W1HeroWeapon_eventGetGrantedAbilitySpecHandles_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AW1HeroWeapon_GetGrantedAbilitySpecHandles()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AW1HeroWeapon_GetGrantedAbilitySpecHandles_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AW1HeroWeapon::execGetGrantedAbilitySpecHandles)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FGameplayAbilitySpecHandle>*)Z_Param__Result=P_THIS->GetGrantedAbilitySpecHandles();
	P_NATIVE_END;
}
// End Class AW1HeroWeapon Function GetGrantedAbilitySpecHandles

// Begin Class AW1HeroWeapon
void AW1HeroWeapon::StaticRegisterNativesAW1HeroWeapon()
{
	UClass* Class = AW1HeroWeapon::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AssignGrantedAbilitySpecHandles", &AW1HeroWeapon::execAssignGrantedAbilitySpecHandles },
		{ "GetGrantedAbilitySpecHandles", &AW1HeroWeapon::execGetGrantedAbilitySpecHandles },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AW1HeroWeapon);
UClass* Z_Construct_UClass_AW1HeroWeapon_NoRegister()
{
	return AW1HeroWeapon::StaticClass();
}
struct Z_Construct_UClass_AW1HeroWeapon_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Items/Weapons/W1HeroWeapon.h" },
		{ "ModuleRelativePath", "Items/Weapons/W1HeroWeapon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HeroWeaponData_MetaData[] = {
		{ "Category", "WeaponData" },
		{ "ModuleRelativePath", "Items/Weapons/W1HeroWeapon.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_HeroWeaponData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AW1HeroWeapon_AssignGrantedAbilitySpecHandles, "AssignGrantedAbilitySpecHandles" }, // 3167895290
		{ &Z_Construct_UFunction_AW1HeroWeapon_GetGrantedAbilitySpecHandles, "GetGrantedAbilitySpecHandles" }, // 1589785067
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AW1HeroWeapon>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AW1HeroWeapon_Statics::NewProp_HeroWeaponData = { "HeroWeaponData", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AW1HeroWeapon, HeroWeaponData), Z_Construct_UScriptStruct_FW1HeroWeaponData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HeroWeaponData_MetaData), NewProp_HeroWeaponData_MetaData) }; // 937674827
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AW1HeroWeapon_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AW1HeroWeapon_Statics::NewProp_HeroWeaponData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AW1HeroWeapon_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AW1HeroWeapon_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AW1WeaponBase,
	(UObject* (*)())Z_Construct_UPackage__Script_W1,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AW1HeroWeapon_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AW1HeroWeapon_Statics::ClassParams = {
	&AW1HeroWeapon::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AW1HeroWeapon_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AW1HeroWeapon_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AW1HeroWeapon_Statics::Class_MetaDataParams), Z_Construct_UClass_AW1HeroWeapon_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AW1HeroWeapon()
{
	if (!Z_Registration_Info_UClass_AW1HeroWeapon.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AW1HeroWeapon.OuterSingleton, Z_Construct_UClass_AW1HeroWeapon_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AW1HeroWeapon.OuterSingleton;
}
template<> W1_API UClass* StaticClass<AW1HeroWeapon>()
{
	return AW1HeroWeapon::StaticClass();
}
AW1HeroWeapon::AW1HeroWeapon() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AW1HeroWeapon);
AW1HeroWeapon::~AW1HeroWeapon() {}
// End Class AW1HeroWeapon

// Begin Registration
struct Z_CompiledInDeferFile_FID_unreal_action_W1_Source_W1_Items_Weapons_W1HeroWeapon_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AW1HeroWeapon, AW1HeroWeapon::StaticClass, TEXT("AW1HeroWeapon"), &Z_Registration_Info_UClass_AW1HeroWeapon, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AW1HeroWeapon), 2482463925U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_unreal_action_W1_Source_W1_Items_Weapons_W1HeroWeapon_h_691536757(TEXT("/Script/W1"),
	Z_CompiledInDeferFile_FID_unreal_action_W1_Source_W1_Items_Weapons_W1HeroWeapon_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_unreal_action_W1_Source_W1_Items_Weapons_W1HeroWeapon_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
