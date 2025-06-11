// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "W1/Items/W1ProjectileBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeW1ProjectileBase() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UProjectileMovementComponent_NoRegister();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_W1();
W1_API UClass* Z_Construct_UClass_AW1ProjectileBase();
W1_API UClass* Z_Construct_UClass_AW1ProjectileBase_NoRegister();
W1_API UEnum* Z_Construct_UEnum_W1_EProjectileDamagePolicy();
// End Cross Module References

// Begin Enum EProjectileDamagePolicy
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EProjectileDamagePolicy;
static UEnum* EProjectileDamagePolicy_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EProjectileDamagePolicy.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EProjectileDamagePolicy.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_W1_EProjectileDamagePolicy, (UObject*)Z_Construct_UPackage__Script_W1(), TEXT("EProjectileDamagePolicy"));
	}
	return Z_Registration_Info_UEnum_EProjectileDamagePolicy.OuterSingleton;
}
template<> W1_API UEnum* StaticEnum<EProjectileDamagePolicy>()
{
	return EProjectileDamagePolicy_StaticEnum();
}
struct Z_Construct_UEnum_W1_EProjectileDamagePolicy_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Items/W1ProjectileBase.h" },
		{ "OnBeginOverlap.Name", "EProjectileDamagePolicy::OnBeginOverlap" },
		{ "OnHit.Name", "EProjectileDamagePolicy::OnHit" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EProjectileDamagePolicy::OnHit", (int64)EProjectileDamagePolicy::OnHit },
		{ "EProjectileDamagePolicy::OnBeginOverlap", (int64)EProjectileDamagePolicy::OnBeginOverlap },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_W1_EProjectileDamagePolicy_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_W1,
	nullptr,
	"EProjectileDamagePolicy",
	"EProjectileDamagePolicy",
	Z_Construct_UEnum_W1_EProjectileDamagePolicy_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_W1_EProjectileDamagePolicy_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_W1_EProjectileDamagePolicy_Statics::Enum_MetaDataParams), Z_Construct_UEnum_W1_EProjectileDamagePolicy_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_W1_EProjectileDamagePolicy()
{
	if (!Z_Registration_Info_UEnum_EProjectileDamagePolicy.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EProjectileDamagePolicy.InnerSingleton, Z_Construct_UEnum_W1_EProjectileDamagePolicy_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EProjectileDamagePolicy.InnerSingleton;
}
// End Enum EProjectileDamagePolicy

// Begin Class AW1ProjectileBase
void AW1ProjectileBase::StaticRegisterNativesAW1ProjectileBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AW1ProjectileBase);
UClass* Z_Construct_UClass_AW1ProjectileBase_NoRegister()
{
	return AW1ProjectileBase::StaticClass();
}
struct Z_Construct_UClass_AW1ProjectileBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Items/W1ProjectileBase.h" },
		{ "ModuleRelativePath", "Items/W1ProjectileBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileCollisionBox_MetaData[] = {
		{ "Category", "Projectile" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Items/W1ProjectileBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileNiagaraComponent_MetaData[] = {
		{ "Category", "Projectile" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Items/W1ProjectileBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileMovementComp_MetaData[] = {
		{ "Category", "Projectile" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Items/W1ProjectileBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileDamagePolicy_MetaData[] = {
		{ "Category", "Projectile" },
		{ "ModuleRelativePath", "Items/W1ProjectileBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ProjectileCollisionBox;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ProjectileNiagaraComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ProjectileMovementComp;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ProjectileDamagePolicy_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ProjectileDamagePolicy;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AW1ProjectileBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AW1ProjectileBase_Statics::NewProp_ProjectileCollisionBox = { "ProjectileCollisionBox", nullptr, (EPropertyFlags)0x00200800000b001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AW1ProjectileBase, ProjectileCollisionBox), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProjectileCollisionBox_MetaData), NewProp_ProjectileCollisionBox_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AW1ProjectileBase_Statics::NewProp_ProjectileNiagaraComponent = { "ProjectileNiagaraComponent", nullptr, (EPropertyFlags)0x00200800000b001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AW1ProjectileBase, ProjectileNiagaraComponent), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProjectileNiagaraComponent_MetaData), NewProp_ProjectileNiagaraComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AW1ProjectileBase_Statics::NewProp_ProjectileMovementComp = { "ProjectileMovementComp", nullptr, (EPropertyFlags)0x00200800000b001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AW1ProjectileBase, ProjectileMovementComp), Z_Construct_UClass_UProjectileMovementComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProjectileMovementComp_MetaData), NewProp_ProjectileMovementComp_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AW1ProjectileBase_Statics::NewProp_ProjectileDamagePolicy_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AW1ProjectileBase_Statics::NewProp_ProjectileDamagePolicy = { "ProjectileDamagePolicy", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AW1ProjectileBase, ProjectileDamagePolicy), Z_Construct_UEnum_W1_EProjectileDamagePolicy, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProjectileDamagePolicy_MetaData), NewProp_ProjectileDamagePolicy_MetaData) }; // 3212640293
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AW1ProjectileBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AW1ProjectileBase_Statics::NewProp_ProjectileCollisionBox,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AW1ProjectileBase_Statics::NewProp_ProjectileNiagaraComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AW1ProjectileBase_Statics::NewProp_ProjectileMovementComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AW1ProjectileBase_Statics::NewProp_ProjectileDamagePolicy_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AW1ProjectileBase_Statics::NewProp_ProjectileDamagePolicy,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AW1ProjectileBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AW1ProjectileBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_W1,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AW1ProjectileBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AW1ProjectileBase_Statics::ClassParams = {
	&AW1ProjectileBase::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AW1ProjectileBase_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AW1ProjectileBase_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AW1ProjectileBase_Statics::Class_MetaDataParams), Z_Construct_UClass_AW1ProjectileBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AW1ProjectileBase()
{
	if (!Z_Registration_Info_UClass_AW1ProjectileBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AW1ProjectileBase.OuterSingleton, Z_Construct_UClass_AW1ProjectileBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AW1ProjectileBase.OuterSingleton;
}
template<> W1_API UClass* StaticClass<AW1ProjectileBase>()
{
	return AW1ProjectileBase::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AW1ProjectileBase);
AW1ProjectileBase::~AW1ProjectileBase() {}
// End Class AW1ProjectileBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_unreal_action_W1_Source_W1_Items_W1ProjectileBase_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EProjectileDamagePolicy_StaticEnum, TEXT("EProjectileDamagePolicy"), &Z_Registration_Info_UEnum_EProjectileDamagePolicy, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3212640293U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AW1ProjectileBase, AW1ProjectileBase::StaticClass, TEXT("AW1ProjectileBase"), &Z_Registration_Info_UClass_AW1ProjectileBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AW1ProjectileBase), 1309721890U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_unreal_action_W1_Source_W1_Items_W1ProjectileBase_h_2669504685(TEXT("/Script/W1"),
	Z_CompiledInDeferFile_FID_unreal_action_W1_Source_W1_Items_W1ProjectileBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_unreal_action_W1_Source_W1_Items_W1ProjectileBase_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_unreal_action_W1_Source_W1_Items_W1ProjectileBase_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_unreal_action_W1_Source_W1_Items_W1ProjectileBase_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
