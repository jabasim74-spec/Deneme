// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Core/CPP_ClickInterface.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeCPP_ClickInterface() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
RAC_LITE_API UClass* Z_Construct_UClass_UCPP_ClickInterface();
RAC_LITE_API UClass* Z_Construct_UClass_UCPP_ClickInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_RAC_Lite();
// ********** End Cross Module References **********************************************************

// ********** Begin Interface UCPP_ClickInterface **************************************************
void UCPP_ClickInterface::StaticRegisterNativesUCPP_ClickInterface()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UCPP_ClickInterface;
UClass* UCPP_ClickInterface::GetPrivateStaticClass()
{
	using TClass = UCPP_ClickInterface;
	if (!Z_Registration_Info_UClass_UCPP_ClickInterface.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("CPP_ClickInterface"),
			Z_Registration_Info_UClass_UCPP_ClickInterface.InnerSingleton,
			StaticRegisterNativesUCPP_ClickInterface,
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
	return Z_Registration_Info_UClass_UCPP_ClickInterface.InnerSingleton;
}
UClass* Z_Construct_UClass_UCPP_ClickInterface_NoRegister()
{
	return UCPP_ClickInterface::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UCPP_ClickInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Core/CPP_ClickInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ICPP_ClickInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UCPP_ClickInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_RAC_Lite,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCPP_ClickInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCPP_ClickInterface_Statics::ClassParams = {
	&UCPP_ClickInterface::StaticClass,
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
	0x000040A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCPP_ClickInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UCPP_ClickInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCPP_ClickInterface()
{
	if (!Z_Registration_Info_UClass_UCPP_ClickInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCPP_ClickInterface.OuterSingleton, Z_Construct_UClass_UCPP_ClickInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCPP_ClickInterface.OuterSingleton;
}
UCPP_ClickInterface::UCPP_ClickInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCPP_ClickInterface);
// ********** End Interface UCPP_ClickInterface ****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RAC_Lite_Source_RAC_Lite_Public_Core_CPP_ClickInterface_h__Script_RAC_Lite_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCPP_ClickInterface, UCPP_ClickInterface::StaticClass, TEXT("UCPP_ClickInterface"), &Z_Registration_Info_UClass_UCPP_ClickInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCPP_ClickInterface), 2451268137U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RAC_Lite_Source_RAC_Lite_Public_Core_CPP_ClickInterface_h__Script_RAC_Lite_991286505(TEXT("/Script/RAC_Lite"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RAC_Lite_Source_RAC_Lite_Public_Core_CPP_ClickInterface_h__Script_RAC_Lite_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RAC_Lite_Source_RAC_Lite_Public_Core_CPP_ClickInterface_h__Script_RAC_Lite_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
