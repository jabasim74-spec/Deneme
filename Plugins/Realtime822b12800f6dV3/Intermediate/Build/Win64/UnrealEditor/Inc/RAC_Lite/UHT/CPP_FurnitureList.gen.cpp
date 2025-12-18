// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Core/CPP_FurnitureList.h"
#include "CPP_Types.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeCPP_FurnitureList() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UPrimaryDataAsset();
RAC_LITE_API UClass* Z_Construct_UClass_UCPP_FurnitureList();
RAC_LITE_API UClass* Z_Construct_UClass_UCPP_FurnitureList_NoRegister();
RAC_LITE_API UScriptStruct* Z_Construct_UScriptStruct_FFurnitureArray();
UPackage* Z_Construct_UPackage__Script_RAC_Lite();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UCPP_FurnitureList *******************************************************
void UCPP_FurnitureList::StaticRegisterNativesUCPP_FurnitureList()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UCPP_FurnitureList;
UClass* UCPP_FurnitureList::GetPrivateStaticClass()
{
	using TClass = UCPP_FurnitureList;
	if (!Z_Registration_Info_UClass_UCPP_FurnitureList.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("CPP_FurnitureList"),
			Z_Registration_Info_UClass_UCPP_FurnitureList.InnerSingleton,
			StaticRegisterNativesUCPP_FurnitureList,
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
	return Z_Registration_Info_UClass_UCPP_FurnitureList.InnerSingleton;
}
UClass* Z_Construct_UClass_UCPP_FurnitureList_NoRegister()
{
	return UCPP_FurnitureList::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UCPP_FurnitureList_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Core/CPP_FurnitureList.h" },
		{ "ModuleRelativePath", "Public/Core/CPP_FurnitureList.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Furniture_MetaData[] = {
		{ "Category", "Furniture" },
		{ "ModuleRelativePath", "Public/Core/CPP_FurnitureList.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Furniture_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Furniture_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_Furniture;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCPP_FurnitureList>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCPP_FurnitureList_Statics::NewProp_Furniture_ValueProp = { "Furniture", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FFurnitureArray, METADATA_PARAMS(0, nullptr) }; // 349289832
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UCPP_FurnitureList_Statics::NewProp_Furniture_Key_KeyProp = { "Furniture_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UCPP_FurnitureList_Statics::NewProp_Furniture = { "Furniture", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCPP_FurnitureList, Furniture), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Furniture_MetaData), NewProp_Furniture_MetaData) }; // 349289832
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCPP_FurnitureList_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCPP_FurnitureList_Statics::NewProp_Furniture_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCPP_FurnitureList_Statics::NewProp_Furniture_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCPP_FurnitureList_Statics::NewProp_Furniture,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCPP_FurnitureList_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UCPP_FurnitureList_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPrimaryDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_RAC_Lite,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCPP_FurnitureList_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCPP_FurnitureList_Statics::ClassParams = {
	&UCPP_FurnitureList::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UCPP_FurnitureList_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UCPP_FurnitureList_Statics::PropPointers),
	0,
	0x001020A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCPP_FurnitureList_Statics::Class_MetaDataParams), Z_Construct_UClass_UCPP_FurnitureList_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCPP_FurnitureList()
{
	if (!Z_Registration_Info_UClass_UCPP_FurnitureList.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCPP_FurnitureList.OuterSingleton, Z_Construct_UClass_UCPP_FurnitureList_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCPP_FurnitureList.OuterSingleton;
}
UCPP_FurnitureList::UCPP_FurnitureList(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCPP_FurnitureList);
UCPP_FurnitureList::~UCPP_FurnitureList() {}
// ********** End Class UCPP_FurnitureList *********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_asasi_Documents_GitHub_Deneme_Plugins_Realtime822b12800f6dV3_Source_RAC_Lite_Public_Core_CPP_FurnitureList_h__Script_RAC_Lite_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCPP_FurnitureList, UCPP_FurnitureList::StaticClass, TEXT("UCPP_FurnitureList"), &Z_Registration_Info_UClass_UCPP_FurnitureList, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCPP_FurnitureList), 1257756680U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_asasi_Documents_GitHub_Deneme_Plugins_Realtime822b12800f6dV3_Source_RAC_Lite_Public_Core_CPP_FurnitureList_h__Script_RAC_Lite_518938619(TEXT("/Script/RAC_Lite"),
	Z_CompiledInDeferFile_FID_Users_asasi_Documents_GitHub_Deneme_Plugins_Realtime822b12800f6dV3_Source_RAC_Lite_Public_Core_CPP_FurnitureList_h__Script_RAC_Lite_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_asasi_Documents_GitHub_Deneme_Plugins_Realtime822b12800f6dV3_Source_RAC_Lite_Public_Core_CPP_FurnitureList_h__Script_RAC_Lite_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
