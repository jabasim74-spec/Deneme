// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Core/CPP_FlyPawn.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeCPP_FlyPawn() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_ADefaultPawn();
ENGINE_API UClass* Z_Construct_UClass_UMaterial_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPostProcessComponent_NoRegister();
RAC_LITE_API UClass* Z_Construct_UClass_ACPP_ConfiguratorGameMode_NoRegister();
RAC_LITE_API UClass* Z_Construct_UClass_ACPP_FlyPawn();
RAC_LITE_API UClass* Z_Construct_UClass_ACPP_FlyPawn_NoRegister();
RAC_LITE_API UClass* Z_Construct_UClass_UCPP_PawnInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_RAC_Lite();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ACPP_FlyPawn *************************************************************
void ACPP_FlyPawn::StaticRegisterNativesACPP_FlyPawn()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_ACPP_FlyPawn;
UClass* ACPP_FlyPawn::GetPrivateStaticClass()
{
	using TClass = ACPP_FlyPawn;
	if (!Z_Registration_Info_UClass_ACPP_FlyPawn.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("CPP_FlyPawn"),
			Z_Registration_Info_UClass_ACPP_FlyPawn.InnerSingleton,
			StaticRegisterNativesACPP_FlyPawn,
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
	return Z_Registration_Info_UClass_ACPP_FlyPawn.InnerSingleton;
}
UClass* Z_Construct_UClass_ACPP_FlyPawn_NoRegister()
{
	return ACPP_FlyPawn::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ACPP_FlyPawn_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Core/CPP_FlyPawn.h" },
		{ "ModuleRelativePath", "Public/Core/CPP_FlyPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameMode_MetaData[] = {
		{ "ModuleRelativePath", "Public/Core/CPP_FlyPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PostProcessComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Core/CPP_FlyPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PostProcessMaterial_MetaData[] = {
		{ "ModuleRelativePath", "Public/Core/CPP_FlyPawn.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GameMode;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PostProcessComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PostProcessMaterial;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACPP_FlyPawn>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACPP_FlyPawn_Statics::NewProp_GameMode = { "GameMode", nullptr, (EPropertyFlags)0x0144000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACPP_FlyPawn, GameMode), Z_Construct_UClass_ACPP_ConfiguratorGameMode_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameMode_MetaData), NewProp_GameMode_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACPP_FlyPawn_Statics::NewProp_PostProcessComponent = { "PostProcessComponent", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACPP_FlyPawn, PostProcessComponent), Z_Construct_UClass_UPostProcessComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PostProcessComponent_MetaData), NewProp_PostProcessComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACPP_FlyPawn_Statics::NewProp_PostProcessMaterial = { "PostProcessMaterial", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACPP_FlyPawn, PostProcessMaterial), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PostProcessMaterial_MetaData), NewProp_PostProcessMaterial_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACPP_FlyPawn_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_FlyPawn_Statics::NewProp_GameMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_FlyPawn_Statics::NewProp_PostProcessComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_FlyPawn_Statics::NewProp_PostProcessMaterial,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_FlyPawn_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ACPP_FlyPawn_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ADefaultPawn,
	(UObject* (*)())Z_Construct_UPackage__Script_RAC_Lite,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_FlyPawn_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ACPP_FlyPawn_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UCPP_PawnInterface_NoRegister, (int32)VTABLE_OFFSET(ACPP_FlyPawn, ICPP_PawnInterface), false },  // 3050825359
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_ACPP_FlyPawn_Statics::ClassParams = {
	&ACPP_FlyPawn::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ACPP_FlyPawn_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_FlyPawn_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009003A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_FlyPawn_Statics::Class_MetaDataParams), Z_Construct_UClass_ACPP_FlyPawn_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ACPP_FlyPawn()
{
	if (!Z_Registration_Info_UClass_ACPP_FlyPawn.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACPP_FlyPawn.OuterSingleton, Z_Construct_UClass_ACPP_FlyPawn_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ACPP_FlyPawn.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ACPP_FlyPawn);
ACPP_FlyPawn::~ACPP_FlyPawn() {}
// ********** End Class ACPP_FlyPawn ***************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_asasi_Documents_GitHub_Deneme_Plugins_Realtime822b12800f6dV3_Source_RAC_Lite_Public_Core_CPP_FlyPawn_h__Script_RAC_Lite_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACPP_FlyPawn, ACPP_FlyPawn::StaticClass, TEXT("ACPP_FlyPawn"), &Z_Registration_Info_UClass_ACPP_FlyPawn, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACPP_FlyPawn), 942709336U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_asasi_Documents_GitHub_Deneme_Plugins_Realtime822b12800f6dV3_Source_RAC_Lite_Public_Core_CPP_FlyPawn_h__Script_RAC_Lite_3225569633(TEXT("/Script/RAC_Lite"),
	Z_CompiledInDeferFile_FID_Users_asasi_Documents_GitHub_Deneme_Plugins_Realtime822b12800f6dV3_Source_RAC_Lite_Public_Core_CPP_FlyPawn_h__Script_RAC_Lite_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_asasi_Documents_GitHub_Deneme_Plugins_Realtime822b12800f6dV3_Source_RAC_Lite_Public_Core_CPP_FlyPawn_h__Script_RAC_Lite_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
