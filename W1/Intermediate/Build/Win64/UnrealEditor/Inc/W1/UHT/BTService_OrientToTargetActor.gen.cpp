// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "W1/AI/BTService_OrientToTargetActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTService_OrientToTargetActor() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UBTService();
UPackage* Z_Construct_UPackage__Script_W1();
W1_API UClass* Z_Construct_UClass_UBTService_OrientToTargetActor();
W1_API UClass* Z_Construct_UClass_UBTService_OrientToTargetActor_NoRegister();
// End Cross Module References

// Begin Class UBTService_OrientToTargetActor
void UBTService_OrientToTargetActor::StaticRegisterNativesUBTService_OrientToTargetActor()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBTService_OrientToTargetActor);
UClass* Z_Construct_UClass_UBTService_OrientToTargetActor_NoRegister()
{
	return UBTService_OrientToTargetActor::StaticClass();
}
struct Z_Construct_UClass_UBTService_OrientToTargetActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "AI/BTService_OrientToTargetActor.h" },
		{ "ModuleRelativePath", "AI/BTService_OrientToTargetActor.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTService_OrientToTargetActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UBTService_OrientToTargetActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBTService,
	(UObject* (*)())Z_Construct_UPackage__Script_W1,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTService_OrientToTargetActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBTService_OrientToTargetActor_Statics::ClassParams = {
	&UBTService_OrientToTargetActor::StaticClass,
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
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBTService_OrientToTargetActor_Statics::Class_MetaDataParams), Z_Construct_UClass_UBTService_OrientToTargetActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBTService_OrientToTargetActor()
{
	if (!Z_Registration_Info_UClass_UBTService_OrientToTargetActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBTService_OrientToTargetActor.OuterSingleton, Z_Construct_UClass_UBTService_OrientToTargetActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBTService_OrientToTargetActor.OuterSingleton;
}
template<> W1_API UClass* StaticClass<UBTService_OrientToTargetActor>()
{
	return UBTService_OrientToTargetActor::StaticClass();
}
UBTService_OrientToTargetActor::UBTService_OrientToTargetActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBTService_OrientToTargetActor);
UBTService_OrientToTargetActor::~UBTService_OrientToTargetActor() {}
// End Class UBTService_OrientToTargetActor

// Begin Registration
struct Z_CompiledInDeferFile_FID_unreal_action_W1_Source_W1_AI_BTService_OrientToTargetActor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBTService_OrientToTargetActor, UBTService_OrientToTargetActor::StaticClass, TEXT("UBTService_OrientToTargetActor"), &Z_Registration_Info_UClass_UBTService_OrientToTargetActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBTService_OrientToTargetActor), 245282811U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_unreal_action_W1_Source_W1_AI_BTService_OrientToTargetActor_h_881887248(TEXT("/Script/W1"),
	Z_CompiledInDeferFile_FID_unreal_action_W1_Source_W1_AI_BTService_OrientToTargetActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_unreal_action_W1_Source_W1_AI_BTService_OrientToTargetActor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
