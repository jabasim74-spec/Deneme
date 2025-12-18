// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UserInterface/CPP_ActorSpawningWidget.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeCPP_ActorSpawningWidget() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
RAC_LITE_API UClass* Z_Construct_UClass_UCPP_ActorSpawningWidget();
RAC_LITE_API UClass* Z_Construct_UClass_UCPP_ActorSpawningWidget_NoRegister();
RAC_LITE_API UClass* Z_Construct_UClass_UCPP_FurnitureCategoryWidget_NoRegister();
UMG_API UClass* Z_Construct_UClass_URetainerBox_NoRegister();
UMG_API UClass* Z_Construct_UClass_UScrollBox_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_RAC_Lite();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UCPP_ActorSpawningWidget Function UpdateRetainerBox **********************
struct Z_Construct_UFunction_UCPP_ActorSpawningWidget_UpdateRetainerBox_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UserInterface/CPP_ActorSpawningWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCPP_ActorSpawningWidget_UpdateRetainerBox_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCPP_ActorSpawningWidget, nullptr, "UpdateRetainerBox", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCPP_ActorSpawningWidget_UpdateRetainerBox_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCPP_ActorSpawningWidget_UpdateRetainerBox_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UCPP_ActorSpawningWidget_UpdateRetainerBox()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCPP_ActorSpawningWidget_UpdateRetainerBox_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCPP_ActorSpawningWidget::execUpdateRetainerBox)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateRetainerBox();
	P_NATIVE_END;
}
// ********** End Class UCPP_ActorSpawningWidget Function UpdateRetainerBox ************************

// ********** Begin Class UCPP_ActorSpawningWidget *************************************************
void UCPP_ActorSpawningWidget::StaticRegisterNativesUCPP_ActorSpawningWidget()
{
	UClass* Class = UCPP_ActorSpawningWidget::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "UpdateRetainerBox", &UCPP_ActorSpawningWidget::execUpdateRetainerBox },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UCPP_ActorSpawningWidget;
UClass* UCPP_ActorSpawningWidget::GetPrivateStaticClass()
{
	using TClass = UCPP_ActorSpawningWidget;
	if (!Z_Registration_Info_UClass_UCPP_ActorSpawningWidget.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("CPP_ActorSpawningWidget"),
			Z_Registration_Info_UClass_UCPP_ActorSpawningWidget.InnerSingleton,
			StaticRegisterNativesUCPP_ActorSpawningWidget,
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
	return Z_Registration_Info_UClass_UCPP_ActorSpawningWidget.InnerSingleton;
}
UClass* Z_Construct_UClass_UCPP_ActorSpawningWidget_NoRegister()
{
	return UCPP_ActorSpawningWidget::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UCPP_ActorSpawningWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "UserInterface/CPP_ActorSpawningWidget.h" },
		{ "ModuleRelativePath", "Public/UserInterface/CPP_ActorSpawningWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FurnitureCategoryWidgetClass_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/UserInterface/CPP_ActorSpawningWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ContentScrollBox_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UserInterface/CPP_ActorSpawningWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MainRetainerBox_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UserInterface/CPP_ActorSpawningWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_FurnitureCategoryWidgetClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ContentScrollBox;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MainRetainerBox;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UCPP_ActorSpawningWidget_UpdateRetainerBox, "UpdateRetainerBox" }, // 340291556
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCPP_ActorSpawningWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UCPP_ActorSpawningWidget_Statics::NewProp_FurnitureCategoryWidgetClass = { "FurnitureCategoryWidgetClass", nullptr, (EPropertyFlags)0x0044000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCPP_ActorSpawningWidget, FurnitureCategoryWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UCPP_FurnitureCategoryWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FurnitureCategoryWidgetClass_MetaData), NewProp_FurnitureCategoryWidgetClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCPP_ActorSpawningWidget_Statics::NewProp_ContentScrollBox = { "ContentScrollBox", nullptr, (EPropertyFlags)0x0144000000090009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCPP_ActorSpawningWidget, ContentScrollBox), Z_Construct_UClass_UScrollBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ContentScrollBox_MetaData), NewProp_ContentScrollBox_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCPP_ActorSpawningWidget_Statics::NewProp_MainRetainerBox = { "MainRetainerBox", nullptr, (EPropertyFlags)0x0144000000090009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCPP_ActorSpawningWidget, MainRetainerBox), Z_Construct_UClass_URetainerBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MainRetainerBox_MetaData), NewProp_MainRetainerBox_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCPP_ActorSpawningWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCPP_ActorSpawningWidget_Statics::NewProp_FurnitureCategoryWidgetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCPP_ActorSpawningWidget_Statics::NewProp_ContentScrollBox,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCPP_ActorSpawningWidget_Statics::NewProp_MainRetainerBox,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCPP_ActorSpawningWidget_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UCPP_ActorSpawningWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_RAC_Lite,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCPP_ActorSpawningWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCPP_ActorSpawningWidget_Statics::ClassParams = {
	&UCPP_ActorSpawningWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UCPP_ActorSpawningWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UCPP_ActorSpawningWidget_Statics::PropPointers),
	0,
	0x00B010A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCPP_ActorSpawningWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UCPP_ActorSpawningWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCPP_ActorSpawningWidget()
{
	if (!Z_Registration_Info_UClass_UCPP_ActorSpawningWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCPP_ActorSpawningWidget.OuterSingleton, Z_Construct_UClass_UCPP_ActorSpawningWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCPP_ActorSpawningWidget.OuterSingleton;
}
UCPP_ActorSpawningWidget::UCPP_ActorSpawningWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCPP_ActorSpawningWidget);
UCPP_ActorSpawningWidget::~UCPP_ActorSpawningWidget() {}
// ********** End Class UCPP_ActorSpawningWidget ***************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RAC_Lite_Source_RAC_Lite_Public_UserInterface_CPP_ActorSpawningWidget_h__Script_RAC_Lite_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCPP_ActorSpawningWidget, UCPP_ActorSpawningWidget::StaticClass, TEXT("UCPP_ActorSpawningWidget"), &Z_Registration_Info_UClass_UCPP_ActorSpawningWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCPP_ActorSpawningWidget), 199299511U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RAC_Lite_Source_RAC_Lite_Public_UserInterface_CPP_ActorSpawningWidget_h__Script_RAC_Lite_120003974(TEXT("/Script/RAC_Lite"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RAC_Lite_Source_RAC_Lite_Public_UserInterface_CPP_ActorSpawningWidget_h__Script_RAC_Lite_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RAC_Lite_Source_RAC_Lite_Public_UserInterface_CPP_ActorSpawningWidget_h__Script_RAC_Lite_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
