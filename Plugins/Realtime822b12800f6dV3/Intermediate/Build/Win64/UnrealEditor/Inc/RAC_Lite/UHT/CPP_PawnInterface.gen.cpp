// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Core/CPP_PawnInterface.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeCPP_PawnInterface() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
RAC_LITE_API UClass* Z_Construct_UClass_UCPP_PawnInterface();
RAC_LITE_API UClass* Z_Construct_UClass_UCPP_PawnInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_RAC_Lite();
// ********** End Cross Module References **********************************************************

// ********** Begin Interface UCPP_PawnInterface ***************************************************
void UCPP_PawnInterface::StaticRegisterNativesUCPP_PawnInterface()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UCPP_PawnInterface;
UClass* UCPP_PawnInterface::GetPrivateStaticClass()
{
	using TClass = UCPP_PawnInterface;
	if (!Z_Registration_Info_UClass_UCPP_PawnInterface.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("CPP_PawnInterface"),
			Z_Registration_Info_UClass_UCPP_PawnInterface.InnerSingleton,
			StaticRegisterNativesUCPP_PawnInterface,
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
	return Z_Registration_Info_UClass_UCPP_PawnInterface.InnerSingleton;
}
UClass* Z_Construct_UClass_UCPP_PawnInterface_NoRegister()
{
	return UCPP_PawnInterface::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UCPP_PawnInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Core/CPP_PawnInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ICPP_PawnInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UCPP_PawnInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_RAC_Lite,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCPP_PawnInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCPP_PawnInterface_Statics::ClassParams = {
	&UCPP_PawnInterface::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCPP_PawnInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UCPP_PawnInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCPP_PawnInterface()
{
	if (!Z_Registration_Info_UClass_UCPP_PawnInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCPP_PawnInterface.OuterSingleton, Z_Construct_UClass_UCPP_PawnInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCPP_PawnInterface.OuterSingleton;
}
UCPP_PawnInterface::UCPP_PawnInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCPP_PawnInterface);
// ********** End Interface UCPP_PawnInterface *****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_asasi_Documents_GitHub_Deneme_Plugins_Realtime822b12800f6dV3_Source_RAC_Lite_Public_Core_CPP_PawnInterface_h__Script_RAC_Lite_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCPP_PawnInterface, UCPP_PawnInterface::StaticClass, TEXT("UCPP_PawnInterface"), &Z_Registration_Info_UClass_UCPP_PawnInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCPP_PawnInterface), 3050825359U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_asasi_Documents_GitHub_Deneme_Plugins_Realtime822b12800f6dV3_Source_RAC_Lite_Public_Core_CPP_PawnInterface_h__Script_RAC_Lite_2661565397(TEXT("/Script/RAC_Lite"),
	Z_CompiledInDeferFile_FID_Users_asasi_Documents_GitHub_Deneme_Plugins_Realtime822b12800f6dV3_Source_RAC_Lite_Public_Core_CPP_PawnInterface_h__Script_RAC_Lite_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_asasi_Documents_GitHub_Deneme_Plugins_Realtime822b12800f6dV3_Source_RAC_Lite_Public_Core_CPP_PawnInterface_h__Script_RAC_Lite_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
