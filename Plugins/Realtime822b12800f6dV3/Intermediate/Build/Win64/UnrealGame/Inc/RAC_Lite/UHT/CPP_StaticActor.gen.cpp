// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Actors/CPP_StaticActor.h"
#include "CPP_Types.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeCPP_StaticActor() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
RAC_LITE_API UClass* Z_Construct_UClass_ACPP_SelectableActor();
RAC_LITE_API UClass* Z_Construct_UClass_ACPP_StaticActor();
RAC_LITE_API UClass* Z_Construct_UClass_ACPP_StaticActor_NoRegister();
RAC_LITE_API UScriptStruct* Z_Construct_UScriptStruct_FMaterialInfo();
RAC_LITE_API UScriptStruct* Z_Construct_UScriptStruct_FStaticActorMaterialCategory();
UPackage* Z_Construct_UPackage__Script_RAC_Lite();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FStaticActorMaterialCategory **************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FStaticActorMaterialCategory;
class UScriptStruct* FStaticActorMaterialCategory::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FStaticActorMaterialCategory.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FStaticActorMaterialCategory.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStaticActorMaterialCategory, (UObject*)Z_Construct_UPackage__Script_RAC_Lite(), TEXT("StaticActorMaterialCategory"));
	}
	return Z_Registration_Info_UScriptStruct_FStaticActorMaterialCategory.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FStaticActorMaterialCategory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Actors/CPP_StaticActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaterialSlotIndex_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/Actors/CPP_StaticActor.h" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaterialSlotName_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Actors/CPP_StaticActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Materials_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Actors/CPP_StaticActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaterialSlotIndex;
	static const UECodeGen_Private::FTextPropertyParams NewProp_MaterialSlotName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Materials_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Materials;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStaticActorMaterialCategory>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FStaticActorMaterialCategory_Statics::NewProp_MaterialSlotIndex = { "MaterialSlotIndex", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStaticActorMaterialCategory, MaterialSlotIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaterialSlotIndex_MetaData), NewProp_MaterialSlotIndex_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FStaticActorMaterialCategory_Statics::NewProp_MaterialSlotName = { "MaterialSlotName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStaticActorMaterialCategory, MaterialSlotName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaterialSlotName_MetaData), NewProp_MaterialSlotName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStaticActorMaterialCategory_Statics::NewProp_Materials_Inner = { "Materials", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FMaterialInfo, METADATA_PARAMS(0, nullptr) }; // 1822697517
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FStaticActorMaterialCategory_Statics::NewProp_Materials = { "Materials", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStaticActorMaterialCategory, Materials), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Materials_MetaData), NewProp_Materials_MetaData) }; // 1822697517
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStaticActorMaterialCategory_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStaticActorMaterialCategory_Statics::NewProp_MaterialSlotIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStaticActorMaterialCategory_Statics::NewProp_MaterialSlotName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStaticActorMaterialCategory_Statics::NewProp_Materials_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStaticActorMaterialCategory_Statics::NewProp_Materials,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStaticActorMaterialCategory_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStaticActorMaterialCategory_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_RAC_Lite,
	nullptr,
	&NewStructOps,
	"StaticActorMaterialCategory",
	Z_Construct_UScriptStruct_FStaticActorMaterialCategory_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStaticActorMaterialCategory_Statics::PropPointers),
	sizeof(FStaticActorMaterialCategory),
	alignof(FStaticActorMaterialCategory),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStaticActorMaterialCategory_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FStaticActorMaterialCategory_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FStaticActorMaterialCategory()
{
	if (!Z_Registration_Info_UScriptStruct_FStaticActorMaterialCategory.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FStaticActorMaterialCategory.InnerSingleton, Z_Construct_UScriptStruct_FStaticActorMaterialCategory_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FStaticActorMaterialCategory.InnerSingleton;
}
// ********** End ScriptStruct FStaticActorMaterialCategory ****************************************

// ********** Begin Class ACPP_StaticActor *********************************************************
void ACPP_StaticActor::StaticRegisterNativesACPP_StaticActor()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_ACPP_StaticActor;
UClass* ACPP_StaticActor::GetPrivateStaticClass()
{
	using TClass = ACPP_StaticActor;
	if (!Z_Registration_Info_UClass_ACPP_StaticActor.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("CPP_StaticActor"),
			Z_Registration_Info_UClass_ACPP_StaticActor.InnerSingleton,
			StaticRegisterNativesACPP_StaticActor,
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
	return Z_Registration_Info_UClass_ACPP_StaticActor.InnerSingleton;
}
UClass* Z_Construct_UClass_ACPP_StaticActor_NoRegister()
{
	return ACPP_StaticActor::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ACPP_StaticActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Replication Collision Actor Input HLOD Physics LevelInstance Cooking WorldPartition DataLayers Rendering Tick Events Networking" },
		{ "IncludePath", "Actors/CPP_StaticActor.h" },
		{ "IsConversionRoot", "true" },
		{ "ModuleRelativePath", "Public/Actors/CPP_StaticActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaterialChangeInfo_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Actors/CPP_StaticActor.h" },
		{ "ShowOnlyInnerProperties", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StaticMeshComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Actors/CPP_StaticActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_MaterialChangeInfo_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_MaterialChangeInfo;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMeshComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACPP_StaticActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ACPP_StaticActor_Statics::NewProp_MaterialChangeInfo_Inner = { "MaterialChangeInfo", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FStaticActorMaterialCategory, METADATA_PARAMS(0, nullptr) }; // 1353512957
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ACPP_StaticActor_Statics::NewProp_MaterialChangeInfo = { "MaterialChangeInfo", nullptr, (EPropertyFlags)0x0040000000000801, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACPP_StaticActor, MaterialChangeInfo), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaterialChangeInfo_MetaData), NewProp_MaterialChangeInfo_MetaData) }; // 1353512957
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACPP_StaticActor_Statics::NewProp_StaticMeshComponent = { "StaticMeshComponent", nullptr, (EPropertyFlags)0x01440000000a0009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACPP_StaticActor, StaticMeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StaticMeshComponent_MetaData), NewProp_StaticMeshComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACPP_StaticActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_StaticActor_Statics::NewProp_MaterialChangeInfo_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_StaticActor_Statics::NewProp_MaterialChangeInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_StaticActor_Statics::NewProp_StaticMeshComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_StaticActor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ACPP_StaticActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACPP_SelectableActor,
	(UObject* (*)())Z_Construct_UPackage__Script_RAC_Lite,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_StaticActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ACPP_StaticActor_Statics::ClassParams = {
	&ACPP_StaticActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ACPP_StaticActor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_StaticActor_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_StaticActor_Statics::Class_MetaDataParams), Z_Construct_UClass_ACPP_StaticActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ACPP_StaticActor()
{
	if (!Z_Registration_Info_UClass_ACPP_StaticActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACPP_StaticActor.OuterSingleton, Z_Construct_UClass_ACPP_StaticActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ACPP_StaticActor.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ACPP_StaticActor);
ACPP_StaticActor::~ACPP_StaticActor() {}
// ********** End Class ACPP_StaticActor ***********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RAC_Lite_Source_RAC_Lite_Public_Actors_CPP_StaticActor_h__Script_RAC_Lite_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FStaticActorMaterialCategory::StaticStruct, Z_Construct_UScriptStruct_FStaticActorMaterialCategory_Statics::NewStructOps, TEXT("StaticActorMaterialCategory"), &Z_Registration_Info_UScriptStruct_FStaticActorMaterialCategory, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStaticActorMaterialCategory), 1353512957U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACPP_StaticActor, ACPP_StaticActor::StaticClass, TEXT("ACPP_StaticActor"), &Z_Registration_Info_UClass_ACPP_StaticActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACPP_StaticActor), 3406727430U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RAC_Lite_Source_RAC_Lite_Public_Actors_CPP_StaticActor_h__Script_RAC_Lite_2322994894(TEXT("/Script/RAC_Lite"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RAC_Lite_Source_RAC_Lite_Public_Actors_CPP_StaticActor_h__Script_RAC_Lite_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RAC_Lite_Source_RAC_Lite_Public_Actors_CPP_StaticActor_h__Script_RAC_Lite_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RAC_Lite_Source_RAC_Lite_Public_Actors_CPP_StaticActor_h__Script_RAC_Lite_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RAC_Lite_Source_RAC_Lite_Public_Actors_CPP_StaticActor_h__Script_RAC_Lite_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
