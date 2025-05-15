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
UPackage* Z_Construct_UPackage__Script_W1();
W1_API UClass* Z_Construct_UClass_AW1CharacterBase();
W1_API UClass* Z_Construct_UClass_AW1CharacterBase_NoRegister();
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
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AW1CharacterBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AW1CharacterBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_W1,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AW1CharacterBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AW1CharacterBase_Statics::ClassParams = {
	&AW1CharacterBase::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
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
		{ Z_Construct_UClass_AW1CharacterBase, AW1CharacterBase::StaticClass, TEXT("AW1CharacterBase"), &Z_Registration_Info_UClass_AW1CharacterBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AW1CharacterBase), 3063834761U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_unreal_action_W1_Source_W1_Characters_W1CharacterBase_h_2242667050(TEXT("/Script/W1"),
	Z_CompiledInDeferFile_FID_unreal_action_W1_Source_W1_Characters_W1CharacterBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_unreal_action_W1_Source_W1_Characters_W1CharacterBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
