// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "W1/Characters/W1CharacterBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeW1CharacterBase() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_W1();
W1_API UClass* Z_Construct_UClass_AW1CharacterBase();
W1_API UClass* Z_Construct_UClass_AW1CharacterBase_NoRegister();
W1_API UClass* Z_Construct_UClass_UDA_StartUpDataBase_NoRegister();
W1_API UClass* Z_Construct_UClass_UPawnCombatInterface_NoRegister();
W1_API UClass* Z_Construct_UClass_UPawnUIInterface_NoRegister();
W1_API UClass* Z_Construct_UClass_UW1AbilitySystemComponent_NoRegister();
W1_API UClass* Z_Construct_UClass_UW1AttributeSet_NoRegister();
// End Cross Module References

// Begin Class AW1CharacterBase
void AW1CharacterBase::StaticRegisterNativesAW1CharacterBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AW1CharacterBase);
UClass* Z_Construct_UClass_AW1CharacterBase_NoRegister()
{
	return AW1CharacterBase::StaticClass();
}
struct Z_Construct_UClass_AW1CharacterBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Characters/W1CharacterBase.h" },
		{ "ModuleRelativePath", "Characters/W1CharacterBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_W1AbilitySystemComponent_MetaData[] = {
		{ "Category", "AbilitySystem" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//~ End APawn Interface\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Characters/W1CharacterBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_W1AttributeSet_MetaData[] = {
		{ "Category", "AbilitySystem" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Characters/W1CharacterBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterStartUpData_MetaData[] = {
		{ "Category", "CharacterData" },
		{ "ModuleRelativePath", "Characters/W1CharacterBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_W1AbilitySystemComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_W1AttributeSet;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_CharacterStartUpData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AW1CharacterBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AW1CharacterBase_Statics::NewProp_W1AbilitySystemComponent = { "W1AbilitySystemComponent", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AW1CharacterBase, W1AbilitySystemComponent), Z_Construct_UClass_UW1AbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_W1AbilitySystemComponent_MetaData), NewProp_W1AbilitySystemComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AW1CharacterBase_Statics::NewProp_W1AttributeSet = { "W1AttributeSet", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AW1CharacterBase, W1AttributeSet), Z_Construct_UClass_UW1AttributeSet_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_W1AttributeSet_MetaData), NewProp_W1AttributeSet_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_AW1CharacterBase_Statics::NewProp_CharacterStartUpData = { "CharacterStartUpData", nullptr, (EPropertyFlags)0x0024080000010015, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AW1CharacterBase, CharacterStartUpData), Z_Construct_UClass_UDA_StartUpDataBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterStartUpData_MetaData), NewProp_CharacterStartUpData_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AW1CharacterBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AW1CharacterBase_Statics::NewProp_W1AbilitySystemComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AW1CharacterBase_Statics::NewProp_W1AttributeSet,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AW1CharacterBase_Statics::NewProp_CharacterStartUpData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AW1CharacterBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AW1CharacterBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_W1,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AW1CharacterBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AW1CharacterBase_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UAbilitySystemInterface_NoRegister, (int32)VTABLE_OFFSET(AW1CharacterBase, IAbilitySystemInterface), false },  // 2272790346
	{ Z_Construct_UClass_UPawnCombatInterface_NoRegister, (int32)VTABLE_OFFSET(AW1CharacterBase, IPawnCombatInterface), false },  // 3319181939
	{ Z_Construct_UClass_UPawnUIInterface_NoRegister, (int32)VTABLE_OFFSET(AW1CharacterBase, IPawnUIInterface), false },  // 689714945
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_AW1CharacterBase_Statics::ClassParams = {
	&AW1CharacterBase::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AW1CharacterBase_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AW1CharacterBase_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AW1CharacterBase_Statics::Class_MetaDataParams), Z_Construct_UClass_AW1CharacterBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AW1CharacterBase()
{
	if (!Z_Registration_Info_UClass_AW1CharacterBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AW1CharacterBase.OuterSingleton, Z_Construct_UClass_AW1CharacterBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AW1CharacterBase.OuterSingleton;
}
template<> W1_API UClass* StaticClass<AW1CharacterBase>()
{
	return AW1CharacterBase::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AW1CharacterBase);
AW1CharacterBase::~AW1CharacterBase() {}
// End Class AW1CharacterBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_unreal_action_W1_Source_W1_Characters_W1CharacterBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AW1CharacterBase, AW1CharacterBase::StaticClass, TEXT("AW1CharacterBase"), &Z_Registration_Info_UClass_AW1CharacterBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AW1CharacterBase), 1072965161U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_unreal_action_W1_Source_W1_Characters_W1CharacterBase_h_1042883696(TEXT("/Script/W1"),
	Z_CompiledInDeferFile_FID_unreal_action_W1_Source_W1_Characters_W1CharacterBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_unreal_action_W1_Source_W1_Characters_W1CharacterBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
