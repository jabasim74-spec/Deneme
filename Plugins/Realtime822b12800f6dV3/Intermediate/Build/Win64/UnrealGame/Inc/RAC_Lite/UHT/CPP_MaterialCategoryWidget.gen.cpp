// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UserInterface/CPP_MaterialCategoryWidget.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeCPP_MaterialCategoryWidget() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
RAC_LITE_API UClass* Z_Construct_UClass_UCPP_MaterialButton_NoRegister();
RAC_LITE_API UClass* Z_Construct_UClass_UCPP_MaterialCategoryWidget();
RAC_LITE_API UClass* Z_Construct_UClass_UCPP_MaterialCategoryWidget_NoRegister();
RAC_LITE_API UClass* Z_Construct_UClass_UCPP_SelectableButton_NoRegister();
RAC_LITE_API UClass* Z_Construct_UClass_UCPP_ShadowedButton_NoRegister();
UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUniformGridPanel_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_RAC_Lite();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UCPP_MaterialCategoryWidget Function ShowHideButton_OnClicked ************
struct Z_Construct_UFunction_UCPP_MaterialCategoryWidget_ShowHideButton_OnClicked_Statics
{
	struct CPP_MaterialCategoryWidget_eventShowHideButton_OnClicked_Parms
	{
		UCPP_ShadowedButton* _sender;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UserInterface/CPP_MaterialCategoryWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__sender_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp__sender;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCPP_MaterialCategoryWidget_ShowHideButton_OnClicked_Statics::NewProp__sender = { "_sender", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CPP_MaterialCategoryWidget_eventShowHideButton_OnClicked_Parms, _sender), Z_Construct_UClass_UCPP_ShadowedButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__sender_MetaData), NewProp__sender_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCPP_MaterialCategoryWidget_ShowHideButton_OnClicked_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCPP_MaterialCategoryWidget_ShowHideButton_OnClicked_Statics::NewProp__sender,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCPP_MaterialCategoryWidget_ShowHideButton_OnClicked_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCPP_MaterialCategoryWidget_ShowHideButton_OnClicked_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCPP_MaterialCategoryWidget, nullptr, "ShowHideButton_OnClicked", Z_Construct_UFunction_UCPP_MaterialCategoryWidget_ShowHideButton_OnClicked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCPP_MaterialCategoryWidget_ShowHideButton_OnClicked_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCPP_MaterialCategoryWidget_ShowHideButton_OnClicked_Statics::CPP_MaterialCategoryWidget_eventShowHideButton_OnClicked_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCPP_MaterialCategoryWidget_ShowHideButton_OnClicked_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCPP_MaterialCategoryWidget_ShowHideButton_OnClicked_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCPP_MaterialCategoryWidget_ShowHideButton_OnClicked_Statics::CPP_MaterialCategoryWidget_eventShowHideButton_OnClicked_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCPP_MaterialCategoryWidget_ShowHideButton_OnClicked()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCPP_MaterialCategoryWidget_ShowHideButton_OnClicked_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCPP_MaterialCategoryWidget::execShowHideButton_OnClicked)
{
	P_GET_OBJECT(UCPP_ShadowedButton,Z_Param__sender);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ShowHideButton_OnClicked(Z_Param__sender);
	P_NATIVE_END;
}
// ********** End Class UCPP_MaterialCategoryWidget Function ShowHideButton_OnClicked **************

// ********** Begin Class UCPP_MaterialCategoryWidget **********************************************
void UCPP_MaterialCategoryWidget::StaticRegisterNativesUCPP_MaterialCategoryWidget()
{
	UClass* Class = UCPP_MaterialCategoryWidget::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ShowHideButton_OnClicked", &UCPP_MaterialCategoryWidget::execShowHideButton_OnClicked },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UCPP_MaterialCategoryWidget;
UClass* UCPP_MaterialCategoryWidget::GetPrivateStaticClass()
{
	using TClass = UCPP_MaterialCategoryWidget;
	if (!Z_Registration_Info_UClass_UCPP_MaterialCategoryWidget.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("CPP_MaterialCategoryWidget"),
			Z_Registration_Info_UClass_UCPP_MaterialCategoryWidget.InnerSingleton,
			StaticRegisterNativesUCPP_MaterialCategoryWidget,
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
	return Z_Registration_Info_UClass_UCPP_MaterialCategoryWidget.InnerSingleton;
}
UClass* Z_Construct_UClass_UCPP_MaterialCategoryWidget_NoRegister()
{
	return UCPP_MaterialCategoryWidget::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UCPP_MaterialCategoryWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "UserInterface/CPP_MaterialCategoryWidget.h" },
		{ "ModuleRelativePath", "Public/UserInterface/CPP_MaterialCategoryWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShowIcon_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/UserInterface/CPP_MaterialCategoryWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HideIcon_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/UserInterface/CPP_MaterialCategoryWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaterialButtonClass_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/UserInterface/CPP_MaterialCategoryWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CategoryNameTextBlock_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UserInterface/CPP_MaterialCategoryWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShowHideButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UserInterface/CPP_MaterialCategoryWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ContentUniformGridPanel_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UserInterface/CPP_MaterialCategoryWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ShowIcon;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HideIcon;
	static const UECodeGen_Private::FClassPropertyParams NewProp_MaterialButtonClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CategoryNameTextBlock;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ShowHideButton;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ContentUniformGridPanel;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UCPP_MaterialCategoryWidget_ShowHideButton_OnClicked, "ShowHideButton_OnClicked" }, // 4274187865
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCPP_MaterialCategoryWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCPP_MaterialCategoryWidget_Statics::NewProp_ShowIcon = { "ShowIcon", nullptr, (EPropertyFlags)0x0144000000010001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCPP_MaterialCategoryWidget, ShowIcon), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShowIcon_MetaData), NewProp_ShowIcon_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCPP_MaterialCategoryWidget_Statics::NewProp_HideIcon = { "HideIcon", nullptr, (EPropertyFlags)0x0144000000010001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCPP_MaterialCategoryWidget, HideIcon), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HideIcon_MetaData), NewProp_HideIcon_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UCPP_MaterialCategoryWidget_Statics::NewProp_MaterialButtonClass = { "MaterialButtonClass", nullptr, (EPropertyFlags)0x0044000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCPP_MaterialCategoryWidget, MaterialButtonClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UCPP_MaterialButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaterialButtonClass_MetaData), NewProp_MaterialButtonClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCPP_MaterialCategoryWidget_Statics::NewProp_CategoryNameTextBlock = { "CategoryNameTextBlock", nullptr, (EPropertyFlags)0x0144000000090009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCPP_MaterialCategoryWidget, CategoryNameTextBlock), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CategoryNameTextBlock_MetaData), NewProp_CategoryNameTextBlock_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCPP_MaterialCategoryWidget_Statics::NewProp_ShowHideButton = { "ShowHideButton", nullptr, (EPropertyFlags)0x0144000000090009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCPP_MaterialCategoryWidget, ShowHideButton), Z_Construct_UClass_UCPP_SelectableButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShowHideButton_MetaData), NewProp_ShowHideButton_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCPP_MaterialCategoryWidget_Statics::NewProp_ContentUniformGridPanel = { "ContentUniformGridPanel", nullptr, (EPropertyFlags)0x0144000000090009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCPP_MaterialCategoryWidget, ContentUniformGridPanel), Z_Construct_UClass_UUniformGridPanel_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ContentUniformGridPanel_MetaData), NewProp_ContentUniformGridPanel_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCPP_MaterialCategoryWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCPP_MaterialCategoryWidget_Statics::NewProp_ShowIcon,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCPP_MaterialCategoryWidget_Statics::NewProp_HideIcon,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCPP_MaterialCategoryWidget_Statics::NewProp_MaterialButtonClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCPP_MaterialCategoryWidget_Statics::NewProp_CategoryNameTextBlock,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCPP_MaterialCategoryWidget_Statics::NewProp_ShowHideButton,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCPP_MaterialCategoryWidget_Statics::NewProp_ContentUniformGridPanel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCPP_MaterialCategoryWidget_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UCPP_MaterialCategoryWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_RAC_Lite,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCPP_MaterialCategoryWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCPP_MaterialCategoryWidget_Statics::ClassParams = {
	&UCPP_MaterialCategoryWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UCPP_MaterialCategoryWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UCPP_MaterialCategoryWidget_Statics::PropPointers),
	0,
	0x00B010A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCPP_MaterialCategoryWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UCPP_MaterialCategoryWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCPP_MaterialCategoryWidget()
{
	if (!Z_Registration_Info_UClass_UCPP_MaterialCategoryWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCPP_MaterialCategoryWidget.OuterSingleton, Z_Construct_UClass_UCPP_MaterialCategoryWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCPP_MaterialCategoryWidget.OuterSingleton;
}
UCPP_MaterialCategoryWidget::UCPP_MaterialCategoryWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCPP_MaterialCategoryWidget);
UCPP_MaterialCategoryWidget::~UCPP_MaterialCategoryWidget() {}
// ********** End Class UCPP_MaterialCategoryWidget ************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RAC_Lite_Source_RAC_Lite_Public_UserInterface_CPP_MaterialCategoryWidget_h__Script_RAC_Lite_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCPP_MaterialCategoryWidget, UCPP_MaterialCategoryWidget::StaticClass, TEXT("UCPP_MaterialCategoryWidget"), &Z_Registration_Info_UClass_UCPP_MaterialCategoryWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCPP_MaterialCategoryWidget), 1881456046U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RAC_Lite_Source_RAC_Lite_Public_UserInterface_CPP_MaterialCategoryWidget_h__Script_RAC_Lite_1961605383(TEXT("/Script/RAC_Lite"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RAC_Lite_Source_RAC_Lite_Public_UserInterface_CPP_MaterialCategoryWidget_h__Script_RAC_Lite_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RAC_Lite_Source_RAC_Lite_Public_UserInterface_CPP_MaterialCategoryWidget_h__Script_RAC_Lite_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
