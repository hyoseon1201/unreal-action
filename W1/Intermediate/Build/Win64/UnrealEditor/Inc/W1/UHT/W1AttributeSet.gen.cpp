// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "W1/AbilitySystems/W1AttributeSet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeW1AttributeSet() {}

// Begin Cross Module References
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAttributeSet();
UPackage* Z_Construct_UPackage__Script_W1();
W1_API UClass* Z_Construct_UClass_UW1AttributeSet();
W1_API UClass* Z_Construct_UClass_UW1AttributeSet_NoRegister();
// End Cross Module References

// Begin Class UW1AttributeSet
void UW1AttributeSet::StaticRegisterNativesUW1AttributeSet()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UW1AttributeSet);
UClass* Z_Construct_UClass_UW1AttributeSet_NoRegister()
{
	return UW1AttributeSet::StaticClass();
}
struct Z_Construct_UClass_UW1AttributeSet_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "AbilitySystems/W1AttributeSet.h" },
		{ "ModuleRelativePath", "AbilitySystems/W1AttributeSet.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UW1AttributeSet>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UW1AttributeSet_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAttributeSet,
	(UObject* (*)())Z_Construct_UPackage__Script_W1,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UW1AttributeSet_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UW1AttributeSet_Statics::ClassParams = {
	&UW1AttributeSet::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x003000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UW1AttributeSet_Statics::Class_MetaDataParams), Z_Construct_UClass_UW1AttributeSet_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UW1AttributeSet()
{
	if (!Z_Registration_Info_UClass_UW1AttributeSet.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UW1AttributeSet.OuterSingleton, Z_Construct_UClass_UW1AttributeSet_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UW1AttributeSet.OuterSingleton;
}
template<> W1_API UClass* StaticClass<UW1AttributeSet>()
{
	return UW1AttributeSet::StaticClass();
}
UW1AttributeSet::UW1AttributeSet(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UW1AttributeSet);
UW1AttributeSet::~UW1AttributeSet() {}
// End Class UW1AttributeSet

// Begin Registration
struct Z_CompiledInDeferFile_FID_unreal_action_W1_Source_W1_AbilitySystems_W1AttributeSet_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UW1AttributeSet, UW1AttributeSet::StaticClass, TEXT("UW1AttributeSet"), &Z_Registration_Info_UClass_UW1AttributeSet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UW1AttributeSet), 3420286935U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_unreal_action_W1_Source_W1_AbilitySystems_W1AttributeSet_h_3228611233(TEXT("/Script/W1"),
	Z_CompiledInDeferFile_FID_unreal_action_W1_Source_W1_AbilitySystems_W1AttributeSet_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_unreal_action_W1_Source_W1_AbilitySystems_W1AttributeSet_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
