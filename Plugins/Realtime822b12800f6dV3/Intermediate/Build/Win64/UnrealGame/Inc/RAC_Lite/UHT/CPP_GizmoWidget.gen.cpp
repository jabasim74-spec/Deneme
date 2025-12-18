// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UserInterface/CPP_GizmoWidget.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeCPP_GizmoWidget() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
RAC_LITE_API UClass* Z_Construct_UClass_ACPP_ConfiguratorGameMode_NoRegister();
RAC_LITE_API UClass* Z_Construct_UClass_ACPP_DynamicActor_NoRegister();
RAC_LITE_API UClass* Z_Construct_UClass_UCPP_GizmoWidget();
RAC_LITE_API UClass* Z_Construct_UClass_UCPP_GizmoWidget_NoRegister();
RAC_LITE_API UEnum* Z_Construct_UEnum_RAC_Lite_EGizmoStatus();
UMG_API UClass* Z_Construct_UClass_UBackgroundBlur_NoRegister();
UMG_API UClass* Z_Construct_UClass_UBorder_NoRegister();
UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_RAC_Lite();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EGizmoStatus **************************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGizmoStatus;
static UEnum* EGizmoStatus_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EGizmoStatus.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EGizmoStatus.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_RAC_Lite_EGizmoStatus, (UObject*)Z_Construct_UPackage__Script_RAC_Lite(), TEXT("EGizmoStatus"));
	}
	return Z_Registration_Info_UEnum_EGizmoStatus.OuterSingleton;
}
template<> RAC_LITE_API UEnum* StaticEnum<EGizmoStatus>()
{
	return EGizmoStatus_StaticEnum();
}
struct Z_Construct_UEnum_RAC_Lite_EGizmoStatus_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UserInterface/CPP_GizmoWidget.h" },
		{ "Move.Name", "EGizmoStatus::Move" },
		{ "None.Name", "EGizmoStatus::None" },
		{ "Rotation.Name", "EGizmoStatus::Rotation" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EGizmoStatus::None", (int64)EGizmoStatus::None },
		{ "EGizmoStatus::Move", (int64)EGizmoStatus::Move },
		{ "EGizmoStatus::Rotation", (int64)EGizmoStatus::Rotation },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_RAC_Lite_EGizmoStatus_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_RAC_Lite,
	nullptr,
	"EGizmoStatus",
	"EGizmoStatus",
	Z_Construct_UEnum_RAC_Lite_EGizmoStatus_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_RAC_Lite_EGizmoStatus_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_RAC_Lite_EGizmoStatus_Statics::Enum_MetaDataParams), Z_Construct_UEnum_RAC_Lite_EGizmoStatus_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_RAC_Lite_EGizmoStatus()
{
	if (!Z_Registration_Info_UEnum_EGizmoStatus.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGizmoStatus.InnerSingleton, Z_Construct_UEnum_RAC_Lite_EGizmoStatus_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EGizmoStatus.InnerSingleton;
}
// ********** End Enum EGizmoStatus ****************************************************************

// ********** Begin Class UCPP_GizmoWidget Function MainButton_OnPressed ***************************
struct Z_Construct_UFunction_UCPP_GizmoWidget_MainButton_OnPressed_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UserInterface/CPP_GizmoWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCPP_GizmoWidget_MainButton_OnPressed_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCPP_GizmoWidget, nullptr, "MainButton_OnPressed", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCPP_GizmoWidget_MainButton_OnPressed_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCPP_GizmoWidget_MainButton_OnPressed_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UCPP_GizmoWidget_MainButton_OnPressed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCPP_GizmoWidget_MainButton_OnPressed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCPP_GizmoWidget::execMainButton_OnPressed)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->MainButton_OnPressed();
	P_NATIVE_END;
}
// ********** End Class UCPP_GizmoWidget Function MainButton_OnPressed *****************************

// ********** Begin Class UCPP_GizmoWidget Function MainButton_OnReleased **************************
struct Z_Construct_UFunction_UCPP_GizmoWidget_MainButton_OnReleased_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UserInterface/CPP_GizmoWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCPP_GizmoWidget_MainButton_OnReleased_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCPP_GizmoWidget, nullptr, "MainButton_OnReleased", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCPP_GizmoWidget_MainButton_OnReleased_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCPP_GizmoWidget_MainButton_OnReleased_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UCPP_GizmoWidget_MainButton_OnReleased()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCPP_GizmoWidget_MainButton_OnReleased_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCPP_GizmoWidget::execMainButton_OnReleased)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->MainButton_OnReleased();
	P_NATIVE_END;
}
// ********** End Class UCPP_GizmoWidget Function MainButton_OnReleased ****************************

// ********** Begin Class UCPP_GizmoWidget *********************************************************
void UCPP_GizmoWidget::StaticRegisterNativesUCPP_GizmoWidget()
{
	UClass* Class = UCPP_GizmoWidget::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "MainButton_OnPressed", &UCPP_GizmoWidget::execMainButton_OnPressed },
		{ "MainButton_OnReleased", &UCPP_GizmoWidget::execMainButton_OnReleased },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UCPP_GizmoWidget;
UClass* UCPP_GizmoWidget::GetPrivateStaticClass()
{
	using TClass = UCPP_GizmoWidget;
	if (!Z_Registration_Info_UClass_UCPP_GizmoWidget.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("CPP_GizmoWidget"),
			Z_Registration_Info_UClass_UCPP_GizmoWidget.InnerSingleton,
			StaticRegisterNativesUCPP_GizmoWidget,
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
	return Z_Registration_Info_UClass_UCPP_GizmoWidget.InnerSingleton;
}
UClass* Z_Construct_UClass_UCPP_GizmoWidget_NoRegister()
{
	return UCPP_GizmoWidget::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UCPP_GizmoWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "UserInterface/CPP_GizmoWidget.h" },
		{ "ModuleRelativePath", "Public/UserInterface/CPP_GizmoWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MainImage_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UserInterface/CPP_GizmoWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MainButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UserInterface/CPP_GizmoWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShadowBorder_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UserInterface/CPP_GizmoWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BackgroundBorder_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UserInterface/CPP_GizmoWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BackgroundBlur_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UserInterface/CPP_GizmoWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ControlledActor_MetaData[] = {
		{ "ModuleRelativePath", "Public/UserInterface/CPP_GizmoWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaterialInstance_MetaData[] = {
		{ "ModuleRelativePath", "Public/UserInterface/CPP_GizmoWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerController_MetaData[] = {
		{ "ModuleRelativePath", "Public/UserInterface/CPP_GizmoWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameMode_MetaData[] = {
		{ "ModuleRelativePath", "Public/UserInterface/CPP_GizmoWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MainImage;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MainButton;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ShadowBorder;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BackgroundBorder;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BackgroundBlur;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ControlledActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MaterialInstance;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerController;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GameMode;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UCPP_GizmoWidget_MainButton_OnPressed, "MainButton_OnPressed" }, // 1479670516
		{ &Z_Construct_UFunction_UCPP_GizmoWidget_MainButton_OnReleased, "MainButton_OnReleased" }, // 3285502488
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCPP_GizmoWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCPP_GizmoWidget_Statics::NewProp_MainImage = { "MainImage", nullptr, (EPropertyFlags)0x0144000000090009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCPP_GizmoWidget, MainImage), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MainImage_MetaData), NewProp_MainImage_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCPP_GizmoWidget_Statics::NewProp_MainButton = { "MainButton", nullptr, (EPropertyFlags)0x0144000000090009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCPP_GizmoWidget, MainButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MainButton_MetaData), NewProp_MainButton_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCPP_GizmoWidget_Statics::NewProp_ShadowBorder = { "ShadowBorder", nullptr, (EPropertyFlags)0x0144000000090009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCPP_GizmoWidget, ShadowBorder), Z_Construct_UClass_UBorder_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShadowBorder_MetaData), NewProp_ShadowBorder_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCPP_GizmoWidget_Statics::NewProp_BackgroundBorder = { "BackgroundBorder", nullptr, (EPropertyFlags)0x0144000000090009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCPP_GizmoWidget, BackgroundBorder), Z_Construct_UClass_UBorder_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BackgroundBorder_MetaData), NewProp_BackgroundBorder_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCPP_GizmoWidget_Statics::NewProp_BackgroundBlur = { "BackgroundBlur", nullptr, (EPropertyFlags)0x0144000000090009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCPP_GizmoWidget, BackgroundBlur), Z_Construct_UClass_UBackgroundBlur_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BackgroundBlur_MetaData), NewProp_BackgroundBlur_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCPP_GizmoWidget_Statics::NewProp_ControlledActor = { "ControlledActor", nullptr, (EPropertyFlags)0x0144000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCPP_GizmoWidget, ControlledActor), Z_Construct_UClass_ACPP_DynamicActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ControlledActor_MetaData), NewProp_ControlledActor_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCPP_GizmoWidget_Statics::NewProp_MaterialInstance = { "MaterialInstance", nullptr, (EPropertyFlags)0x0144000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCPP_GizmoWidget, MaterialInstance), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaterialInstance_MetaData), NewProp_MaterialInstance_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCPP_GizmoWidget_Statics::NewProp_PlayerController = { "PlayerController", nullptr, (EPropertyFlags)0x0144000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCPP_GizmoWidget, PlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerController_MetaData), NewProp_PlayerController_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCPP_GizmoWidget_Statics::NewProp_GameMode = { "GameMode", nullptr, (EPropertyFlags)0x0144000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCPP_GizmoWidget, GameMode), Z_Construct_UClass_ACPP_ConfiguratorGameMode_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameMode_MetaData), NewProp_GameMode_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCPP_GizmoWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCPP_GizmoWidget_Statics::NewProp_MainImage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCPP_GizmoWidget_Statics::NewProp_MainButton,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCPP_GizmoWidget_Statics::NewProp_ShadowBorder,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCPP_GizmoWidget_Statics::NewProp_BackgroundBorder,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCPP_GizmoWidget_Statics::NewProp_BackgroundBlur,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCPP_GizmoWidget_Statics::NewProp_ControlledActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCPP_GizmoWidget_Statics::NewProp_MaterialInstance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCPP_GizmoWidget_Statics::NewProp_PlayerController,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCPP_GizmoWidget_Statics::NewProp_GameMode,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCPP_GizmoWidget_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UCPP_GizmoWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_RAC_Lite,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCPP_GizmoWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCPP_GizmoWidget_Statics::ClassParams = {
	&UCPP_GizmoWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UCPP_GizmoWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UCPP_GizmoWidget_Statics::PropPointers),
	0,
	0x00B010A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCPP_GizmoWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UCPP_GizmoWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCPP_GizmoWidget()
{
	if (!Z_Registration_Info_UClass_UCPP_GizmoWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCPP_GizmoWidget.OuterSingleton, Z_Construct_UClass_UCPP_GizmoWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCPP_GizmoWidget.OuterSingleton;
}
UCPP_GizmoWidget::UCPP_GizmoWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCPP_GizmoWidget);
UCPP_GizmoWidget::~UCPP_GizmoWidget() {}
// ********** End Class UCPP_GizmoWidget ***********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RAC_Lite_Source_RAC_Lite_Public_UserInterface_CPP_GizmoWidget_h__Script_RAC_Lite_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EGizmoStatus_StaticEnum, TEXT("EGizmoStatus"), &Z_Registration_Info_UEnum_EGizmoStatus, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2808141267U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCPP_GizmoWidget, UCPP_GizmoWidget::StaticClass, TEXT("UCPP_GizmoWidget"), &Z_Registration_Info_UClass_UCPP_GizmoWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCPP_GizmoWidget), 3280299215U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RAC_Lite_Source_RAC_Lite_Public_UserInterface_CPP_GizmoWidget_h__Script_RAC_Lite_4274381459(TEXT("/Script/RAC_Lite"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RAC_Lite_Source_RAC_Lite_Public_UserInterface_CPP_GizmoWidget_h__Script_RAC_Lite_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RAC_Lite_Source_RAC_Lite_Public_UserInterface_CPP_GizmoWidget_h__Script_RAC_Lite_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RAC_Lite_Source_RAC_Lite_Public_UserInterface_CPP_GizmoWidget_h__Script_RAC_Lite_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RAC_Lite_Source_RAC_Lite_Public_UserInterface_CPP_GizmoWidget_h__Script_RAC_Lite_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
