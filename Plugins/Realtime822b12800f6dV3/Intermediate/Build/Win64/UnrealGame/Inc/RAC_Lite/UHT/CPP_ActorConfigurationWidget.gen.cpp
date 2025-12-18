// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UserInterface/CPP_ActorConfigurationWidget.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeCPP_ActorConfigurationWidget() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
RAC_LITE_API UClass* Z_Construct_UClass_ACPP_ConfiguratorGameMode_NoRegister();
RAC_LITE_API UClass* Z_Construct_UClass_ACPP_SelectableActor_NoRegister();
RAC_LITE_API UClass* Z_Construct_UClass_UCPP_ActorConfigurationWidget();
RAC_LITE_API UClass* Z_Construct_UClass_UCPP_ActorConfigurationWidget_NoRegister();
RAC_LITE_API UClass* Z_Construct_UClass_UCPP_MaterialCategoryWidget_NoRegister();
RAC_LITE_API UClass* Z_Construct_UClass_UCPP_SelectableButton_NoRegister();
RAC_LITE_API UClass* Z_Construct_UClass_UCPP_ShadowedButton_NoRegister();
UMG_API UClass* Z_Construct_UClass_URetainerBox_NoRegister();
UMG_API UClass* Z_Construct_UClass_UScrollBox_NoRegister();
UMG_API UClass* Z_Construct_UClass_USpacer_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_RAC_Lite();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UCPP_ActorConfigurationWidget Function DeleteButton_OnClicked ************
struct Z_Construct_UFunction_UCPP_ActorConfigurationWidget_DeleteButton_OnClicked_Statics
{
	struct CPP_ActorConfigurationWidget_eventDeleteButton_OnClicked_Parms
	{
		UCPP_ShadowedButton* _sender;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UserInterface/CPP_ActorConfigurationWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__sender_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp__sender;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCPP_ActorConfigurationWidget_DeleteButton_OnClicked_Statics::NewProp__sender = { "_sender", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CPP_ActorConfigurationWidget_eventDeleteButton_OnClicked_Parms, _sender), Z_Construct_UClass_UCPP_ShadowedButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__sender_MetaData), NewProp__sender_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCPP_ActorConfigurationWidget_DeleteButton_OnClicked_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCPP_ActorConfigurationWidget_DeleteButton_OnClicked_Statics::NewProp__sender,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCPP_ActorConfigurationWidget_DeleteButton_OnClicked_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCPP_ActorConfigurationWidget_DeleteButton_OnClicked_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCPP_ActorConfigurationWidget, nullptr, "DeleteButton_OnClicked", Z_Construct_UFunction_UCPP_ActorConfigurationWidget_DeleteButton_OnClicked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCPP_ActorConfigurationWidget_DeleteButton_OnClicked_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCPP_ActorConfigurationWidget_DeleteButton_OnClicked_Statics::CPP_ActorConfigurationWidget_eventDeleteButton_OnClicked_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCPP_ActorConfigurationWidget_DeleteButton_OnClicked_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCPP_ActorConfigurationWidget_DeleteButton_OnClicked_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCPP_ActorConfigurationWidget_DeleteButton_OnClicked_Statics::CPP_ActorConfigurationWidget_eventDeleteButton_OnClicked_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCPP_ActorConfigurationWidget_DeleteButton_OnClicked()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCPP_ActorConfigurationWidget_DeleteButton_OnClicked_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCPP_ActorConfigurationWidget::execDeleteButton_OnClicked)
{
	P_GET_OBJECT(UCPP_ShadowedButton,Z_Param__sender);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DeleteButton_OnClicked(Z_Param__sender);
	P_NATIVE_END;
}
// ********** End Class UCPP_ActorConfigurationWidget Function DeleteButton_OnClicked **************

// ********** Begin Class UCPP_ActorConfigurationWidget Function GameMode_OnSelectedActorChanged ***
struct Z_Construct_UFunction_UCPP_ActorConfigurationWidget_GameMode_OnSelectedActorChanged_Statics
{
	struct CPP_ActorConfigurationWidget_eventGameMode_OnSelectedActorChanged_Parms
	{
		ACPP_SelectableActor* _newSelectedActor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UserInterface/CPP_ActorConfigurationWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp__newSelectedActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCPP_ActorConfigurationWidget_GameMode_OnSelectedActorChanged_Statics::NewProp__newSelectedActor = { "_newSelectedActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CPP_ActorConfigurationWidget_eventGameMode_OnSelectedActorChanged_Parms, _newSelectedActor), Z_Construct_UClass_ACPP_SelectableActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCPP_ActorConfigurationWidget_GameMode_OnSelectedActorChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCPP_ActorConfigurationWidget_GameMode_OnSelectedActorChanged_Statics::NewProp__newSelectedActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCPP_ActorConfigurationWidget_GameMode_OnSelectedActorChanged_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCPP_ActorConfigurationWidget_GameMode_OnSelectedActorChanged_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCPP_ActorConfigurationWidget, nullptr, "GameMode_OnSelectedActorChanged", Z_Construct_UFunction_UCPP_ActorConfigurationWidget_GameMode_OnSelectedActorChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCPP_ActorConfigurationWidget_GameMode_OnSelectedActorChanged_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCPP_ActorConfigurationWidget_GameMode_OnSelectedActorChanged_Statics::CPP_ActorConfigurationWidget_eventGameMode_OnSelectedActorChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCPP_ActorConfigurationWidget_GameMode_OnSelectedActorChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCPP_ActorConfigurationWidget_GameMode_OnSelectedActorChanged_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCPP_ActorConfigurationWidget_GameMode_OnSelectedActorChanged_Statics::CPP_ActorConfigurationWidget_eventGameMode_OnSelectedActorChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCPP_ActorConfigurationWidget_GameMode_OnSelectedActorChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCPP_ActorConfigurationWidget_GameMode_OnSelectedActorChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCPP_ActorConfigurationWidget::execGameMode_OnSelectedActorChanged)
{
	P_GET_OBJECT(ACPP_SelectableActor,Z_Param__newSelectedActor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GameMode_OnSelectedActorChanged(Z_Param__newSelectedActor);
	P_NATIVE_END;
}
// ********** End Class UCPP_ActorConfigurationWidget Function GameMode_OnSelectedActorChanged *****

// ********** Begin Class UCPP_ActorConfigurationWidget Function UpdateRetainerBox *****************
struct Z_Construct_UFunction_UCPP_ActorConfigurationWidget_UpdateRetainerBox_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UserInterface/CPP_ActorConfigurationWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCPP_ActorConfigurationWidget_UpdateRetainerBox_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCPP_ActorConfigurationWidget, nullptr, "UpdateRetainerBox", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCPP_ActorConfigurationWidget_UpdateRetainerBox_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCPP_ActorConfigurationWidget_UpdateRetainerBox_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UCPP_ActorConfigurationWidget_UpdateRetainerBox()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCPP_ActorConfigurationWidget_UpdateRetainerBox_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCPP_ActorConfigurationWidget::execUpdateRetainerBox)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateRetainerBox();
	P_NATIVE_END;
}
// ********** End Class UCPP_ActorConfigurationWidget Function UpdateRetainerBox *******************

// ********** Begin Class UCPP_ActorConfigurationWidget ********************************************
void UCPP_ActorConfigurationWidget::StaticRegisterNativesUCPP_ActorConfigurationWidget()
{
	UClass* Class = UCPP_ActorConfigurationWidget::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "DeleteButton_OnClicked", &UCPP_ActorConfigurationWidget::execDeleteButton_OnClicked },
		{ "GameMode_OnSelectedActorChanged", &UCPP_ActorConfigurationWidget::execGameMode_OnSelectedActorChanged },
		{ "UpdateRetainerBox", &UCPP_ActorConfigurationWidget::execUpdateRetainerBox },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UCPP_ActorConfigurationWidget;
UClass* UCPP_ActorConfigurationWidget::GetPrivateStaticClass()
{
	using TClass = UCPP_ActorConfigurationWidget;
	if (!Z_Registration_Info_UClass_UCPP_ActorConfigurationWidget.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("CPP_ActorConfigurationWidget"),
			Z_Registration_Info_UClass_UCPP_ActorConfigurationWidget.InnerSingleton,
			StaticRegisterNativesUCPP_ActorConfigurationWidget,
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
	return Z_Registration_Info_UClass_UCPP_ActorConfigurationWidget.InnerSingleton;
}
UClass* Z_Construct_UClass_UCPP_ActorConfigurationWidget_NoRegister()
{
	return UCPP_ActorConfigurationWidget::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UCPP_ActorConfigurationWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "UserInterface/CPP_ActorConfigurationWidget.h" },
		{ "ModuleRelativePath", "Public/UserInterface/CPP_ActorConfigurationWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameMode_MetaData[] = {
		{ "ModuleRelativePath", "Public/UserInterface/CPP_ActorConfigurationWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaterialCategoryWidgetClass_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/UserInterface/CPP_ActorConfigurationWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeleteButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UserInterface/CPP_ActorConfigurationWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FreeZoneSpacer_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UserInterface/CPP_ActorConfigurationWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ContentScrollBox_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UserInterface/CPP_ActorConfigurationWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaterialCategoriesWidgets_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UserInterface/CPP_ActorConfigurationWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MainRetainerBox_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UserInterface/CPP_ActorConfigurationWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GameMode;
	static const UECodeGen_Private::FClassPropertyParams NewProp_MaterialCategoryWidgetClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DeleteButton;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FreeZoneSpacer;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ContentScrollBox;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MaterialCategoriesWidgets_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_MaterialCategoriesWidgets;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MainRetainerBox;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UCPP_ActorConfigurationWidget_DeleteButton_OnClicked, "DeleteButton_OnClicked" }, // 3376690697
		{ &Z_Construct_UFunction_UCPP_ActorConfigurationWidget_GameMode_OnSelectedActorChanged, "GameMode_OnSelectedActorChanged" }, // 907484458
		{ &Z_Construct_UFunction_UCPP_ActorConfigurationWidget_UpdateRetainerBox, "UpdateRetainerBox" }, // 236954984
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCPP_ActorConfigurationWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCPP_ActorConfigurationWidget_Statics::NewProp_GameMode = { "GameMode", nullptr, (EPropertyFlags)0x0144000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCPP_ActorConfigurationWidget, GameMode), Z_Construct_UClass_ACPP_ConfiguratorGameMode_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameMode_MetaData), NewProp_GameMode_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UCPP_ActorConfigurationWidget_Statics::NewProp_MaterialCategoryWidgetClass = { "MaterialCategoryWidgetClass", nullptr, (EPropertyFlags)0x0044000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCPP_ActorConfigurationWidget, MaterialCategoryWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UCPP_MaterialCategoryWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaterialCategoryWidgetClass_MetaData), NewProp_MaterialCategoryWidgetClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCPP_ActorConfigurationWidget_Statics::NewProp_DeleteButton = { "DeleteButton", nullptr, (EPropertyFlags)0x0144000000090009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCPP_ActorConfigurationWidget, DeleteButton), Z_Construct_UClass_UCPP_SelectableButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeleteButton_MetaData), NewProp_DeleteButton_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCPP_ActorConfigurationWidget_Statics::NewProp_FreeZoneSpacer = { "FreeZoneSpacer", nullptr, (EPropertyFlags)0x0144000000090009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCPP_ActorConfigurationWidget, FreeZoneSpacer), Z_Construct_UClass_USpacer_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FreeZoneSpacer_MetaData), NewProp_FreeZoneSpacer_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCPP_ActorConfigurationWidget_Statics::NewProp_ContentScrollBox = { "ContentScrollBox", nullptr, (EPropertyFlags)0x0144000000090009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCPP_ActorConfigurationWidget, ContentScrollBox), Z_Construct_UClass_UScrollBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ContentScrollBox_MetaData), NewProp_ContentScrollBox_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCPP_ActorConfigurationWidget_Statics::NewProp_MaterialCategoriesWidgets_Inner = { "MaterialCategoriesWidgets", nullptr, (EPropertyFlags)0x0104000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCPP_ActorConfigurationWidget_Statics::NewProp_MaterialCategoriesWidgets = { "MaterialCategoriesWidgets", nullptr, (EPropertyFlags)0x0144008000002008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCPP_ActorConfigurationWidget, MaterialCategoriesWidgets), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaterialCategoriesWidgets_MetaData), NewProp_MaterialCategoriesWidgets_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCPP_ActorConfigurationWidget_Statics::NewProp_MainRetainerBox = { "MainRetainerBox", nullptr, (EPropertyFlags)0x0144000000090009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCPP_ActorConfigurationWidget, MainRetainerBox), Z_Construct_UClass_URetainerBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MainRetainerBox_MetaData), NewProp_MainRetainerBox_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCPP_ActorConfigurationWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCPP_ActorConfigurationWidget_Statics::NewProp_GameMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCPP_ActorConfigurationWidget_Statics::NewProp_MaterialCategoryWidgetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCPP_ActorConfigurationWidget_Statics::NewProp_DeleteButton,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCPP_ActorConfigurationWidget_Statics::NewProp_FreeZoneSpacer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCPP_ActorConfigurationWidget_Statics::NewProp_ContentScrollBox,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCPP_ActorConfigurationWidget_Statics::NewProp_MaterialCategoriesWidgets_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCPP_ActorConfigurationWidget_Statics::NewProp_MaterialCategoriesWidgets,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCPP_ActorConfigurationWidget_Statics::NewProp_MainRetainerBox,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCPP_ActorConfigurationWidget_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UCPP_ActorConfigurationWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_RAC_Lite,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCPP_ActorConfigurationWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCPP_ActorConfigurationWidget_Statics::ClassParams = {
	&UCPP_ActorConfigurationWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UCPP_ActorConfigurationWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UCPP_ActorConfigurationWidget_Statics::PropPointers),
	0,
	0x00B010A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCPP_ActorConfigurationWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UCPP_ActorConfigurationWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCPP_ActorConfigurationWidget()
{
	if (!Z_Registration_Info_UClass_UCPP_ActorConfigurationWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCPP_ActorConfigurationWidget.OuterSingleton, Z_Construct_UClass_UCPP_ActorConfigurationWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCPP_ActorConfigurationWidget.OuterSingleton;
}
UCPP_ActorConfigurationWidget::UCPP_ActorConfigurationWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCPP_ActorConfigurationWidget);
UCPP_ActorConfigurationWidget::~UCPP_ActorConfigurationWidget() {}
// ********** End Class UCPP_ActorConfigurationWidget **********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RAC_Lite_Source_RAC_Lite_Public_UserInterface_CPP_ActorConfigurationWidget_h__Script_RAC_Lite_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCPP_ActorConfigurationWidget, UCPP_ActorConfigurationWidget::StaticClass, TEXT("UCPP_ActorConfigurationWidget"), &Z_Registration_Info_UClass_UCPP_ActorConfigurationWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCPP_ActorConfigurationWidget), 686223380U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RAC_Lite_Source_RAC_Lite_Public_UserInterface_CPP_ActorConfigurationWidget_h__Script_RAC_Lite_2197920131(TEXT("/Script/RAC_Lite"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RAC_Lite_Source_RAC_Lite_Public_UserInterface_CPP_ActorConfigurationWidget_h__Script_RAC_Lite_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RAC_Lite_Source_RAC_Lite_Public_UserInterface_CPP_ActorConfigurationWidget_h__Script_RAC_Lite_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
