// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "W1/GameModes/W1GameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeW1GameModeBase() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
UPackage* Z_Construct_UPackage__Script_W1();
W1_API UClass* Z_Construct_UClass_AW1GameModeBase();
W1_API UClass* Z_Construct_UClass_AW1GameModeBase_NoRegister();
// End Cross Module References

// Begin Class AW1GameModeBase
void AW1GameModeBase::StaticRegisterNativesAW1GameModeBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AW1GameModeBase);
UClass* Z_Construct_UClass_AW1GameModeBase_NoRegister()
{
	return AW1GameModeBase::StaticClass();
}
struct Z_Construct_UClass_AW1GameModeBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "GameModes/W1GameModeBase.h" },
		{ "ModuleRelativePath", "GameModes/W1GameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AW1GameModeBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AW1GameModeBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_W1,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AW1GameModeBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AW1GameModeBase_Statics::ClassParams = {
	&AW1GameModeBase::StaticClass,
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
	0x009002ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AW1GameModeBase_Statics::Class_MetaDataParams), Z_Construct_UClass_AW1GameModeBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AW1GameModeBase()
{
	if (!Z_Registration_Info_UClass_AW1GameModeBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AW1GameModeBase.OuterSingleton, Z_Construct_UClass_AW1GameModeBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AW1GameModeBase.OuterSingleton;
}
template<> W1_API UClass* StaticClass<AW1GameModeBase>()
{
	return AW1GameModeBase::StaticClass();
}
AW1GameModeBase::AW1GameModeBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AW1GameModeBase);
AW1GameModeBase::~AW1GameModeBase() {}
// End Class AW1GameModeBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_unreal_action_W1_Source_W1_GameModes_W1GameModeBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AW1GameModeBase, AW1GameModeBase::StaticClass, TEXT("AW1GameModeBase"), &Z_Registration_Info_UClass_AW1GameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AW1GameModeBase), 631821848U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_unreal_action_W1_Source_W1_GameModes_W1GameModeBase_h_1228356038(TEXT("/Script/W1"),
	Z_CompiledInDeferFile_FID_unreal_action_W1_Source_W1_GameModes_W1GameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_unreal_action_W1_Source_W1_GameModes_W1GameModeBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
