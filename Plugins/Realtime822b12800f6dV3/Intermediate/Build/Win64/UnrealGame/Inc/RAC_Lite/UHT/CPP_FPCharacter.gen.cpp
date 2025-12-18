// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Core/CPP_FPCharacter.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeCPP_FPCharacter() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
ENGINE_API UClass* Z_Construct_UClass_UMaterial_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPostProcessComponent_NoRegister();
RAC_LITE_API UClass* Z_Construct_UClass_ACPP_ConfiguratorGameMode_NoRegister();
RAC_LITE_API UClass* Z_Construct_UClass_ACPP_FPCharacter();
RAC_LITE_API UClass* Z_Construct_UClass_ACPP_FPCharacter_NoRegister();
RAC_LITE_API UClass* Z_Construct_UClass_UCPP_PawnInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_RAC_Lite();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ACPP_FPCharacter *********************************************************
void ACPP_FPCharacter::StaticRegisterNativesACPP_FPCharacter()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_ACPP_FPCharacter;
UClass* ACPP_FPCharacter::GetPrivateStaticClass()
{
	using TClass = ACPP_FPCharacter;
	if (!Z_Registration_Info_UClass_ACPP_FPCharacter.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("CPP_FPCharacter"),
			Z_Registration_Info_UClass_ACPP_FPCharacter.InnerSingleton,
			StaticRegisterNativesACPP_FPCharacter,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_ACPP_FPCharacter.InnerSingleton;
}
UClass* Z_Construct_UClass_ACPP_FPCharacter_NoRegister()
{
	return ACPP_FPCharacter::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ACPP_FPCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Core/CPP_FPCharacter.h" },
		{ "ModuleRelativePath", "Public/Core/CPP_FPCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameMode_MetaData[] = {
		{ "ModuleRelativePath", "Public/Core/CPP_FPCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PostProcessComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Core/CPP_FPCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PostProcessMaterial_MetaData[] = {
		{ "ModuleRelativePath", "Public/Core/CPP_FPCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GameMode;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PostProcessComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PostProcessMaterial;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACPP_FPCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACPP_FPCharacter_Statics::NewProp_GameMode = { "GameMode", nullptr, (EPropertyFlags)0x0144000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACPP_FPCharacter, GameMode), Z_Construct_UClass_ACPP_ConfiguratorGameMode_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameMode_MetaData), NewProp_GameMode_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACPP_FPCharacter_Statics::NewProp_PostProcessComponent = { "PostProcessComponent", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACPP_FPCharacter, PostProcessComponent), Z_Construct_UClass_UPostProcessComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PostProcessComponent_MetaData), NewProp_PostProcessComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACPP_FPCharacter_Statics::NewProp_PostProcessMaterial = { "PostProcessMaterial", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACPP_FPCharacter, PostProcessMaterial), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PostProcessMaterial_MetaData), NewProp_PostProcessMaterial_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACPP_FPCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_FPCharacter_Statics::NewProp_GameMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_FPCharacter_Statics::NewProp_PostProcessComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_FPCharacter_Statics::NewProp_PostProcessMaterial,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_FPCharacter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ACPP_FPCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_RAC_Lite,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_FPCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ACPP_FPCharacter_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UCPP_PawnInterface_NoRegister, (int32)VTABLE_OFFSET(ACPP_FPCharacter, ICPP_PawnInterface), false },  // 3050825359
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_ACPP_FPCharacter_Statics::ClassParams = {
	&ACPP_FPCharacter::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ACPP_FPCharacter_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_FPCharacter_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009003A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_FPCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_ACPP_FPCharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ACPP_FPCharacter()
{
	if (!Z_Registration_Info_UClass_ACPP_FPCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACPP_FPCharacter.OuterSingleton, Z_Construct_UClass_ACPP_FPCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ACPP_FPCharacter.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ACPP_FPCharacter);
ACPP_FPCharacter::~ACPP_FPCharacter() {}
// ********** End Class ACPP_FPCharacter ***********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RAC_Lite_Source_RAC_Lite_Public_Core_CPP_FPCharacter_h__Script_RAC_Lite_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACPP_FPCharacter, ACPP_FPCharacter::StaticClass, TEXT("ACPP_FPCharacter"), &Z_Registration_Info_UClass_ACPP_FPCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACPP_FPCharacter), 3659929202U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RAC_Lite_Source_RAC_Lite_Public_Core_CPP_FPCharacter_h__Script_RAC_Lite_773056844(TEXT("/Script/RAC_Lite"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RAC_Lite_Source_RAC_Lite_Public_Core_CPP_FPCharacter_h__Script_RAC_Lite_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RAC_Lite_Source_RAC_Lite_Public_Core_CPP_FPCharacter_h__Script_RAC_Lite_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
