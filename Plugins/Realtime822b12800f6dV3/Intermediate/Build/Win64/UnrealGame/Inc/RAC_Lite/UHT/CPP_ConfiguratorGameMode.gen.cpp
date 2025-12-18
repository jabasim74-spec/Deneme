// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Core/CPP_ConfiguratorGameMode.h"
#include "CPP_Types.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeCPP_ConfiguratorGameMode() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
RAC_LITE_API UClass* Z_Construct_UClass_ACPP_ConfiguratorGameMode();
RAC_LITE_API UClass* Z_Construct_UClass_ACPP_ConfiguratorGameMode_NoRegister();
RAC_LITE_API UClass* Z_Construct_UClass_ACPP_FlyPawn_NoRegister();
RAC_LITE_API UClass* Z_Construct_UClass_ACPP_FPCharacter_NoRegister();
RAC_LITE_API UClass* Z_Construct_UClass_ACPP_SelectableActor_NoRegister();
RAC_LITE_API UClass* Z_Construct_UClass_UCPP_FurnitureList_NoRegister();
RAC_LITE_API UClass* Z_Construct_UClass_UCPP_MainWidget_NoRegister();
RAC_LITE_API UEnum* Z_Construct_UEnum_RAC_Lite_ECameraViewMode();
RAC_LITE_API UScriptStruct* Z_Construct_UScriptStruct_FFirstPersonSettings();
RAC_LITE_API UScriptStruct* Z_Construct_UScriptStruct_FFlyingSettings();
RAC_LITE_API UScriptStruct* Z_Construct_UScriptStruct_FSelectionOutlineSettings();
UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
UMG_API UClass* Z_Construct_UClass_UWidgetComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_RAC_Lite();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ACPP_ConfiguratorGameMode Function SelectedActor_OnDestrojed *************
struct Z_Construct_UFunction_ACPP_ConfiguratorGameMode_SelectedActor_OnDestrojed_Statics
{
	struct CPP_ConfiguratorGameMode_eventSelectedActor_OnDestrojed_Parms
	{
		AActor* _destrojedActor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Core/CPP_ConfiguratorGameMode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp__destrojedActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACPP_ConfiguratorGameMode_SelectedActor_OnDestrojed_Statics::NewProp__destrojedActor = { "_destrojedActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CPP_ConfiguratorGameMode_eventSelectedActor_OnDestrojed_Parms, _destrojedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACPP_ConfiguratorGameMode_SelectedActor_OnDestrojed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACPP_ConfiguratorGameMode_SelectedActor_OnDestrojed_Statics::NewProp__destrojedActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACPP_ConfiguratorGameMode_SelectedActor_OnDestrojed_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACPP_ConfiguratorGameMode_SelectedActor_OnDestrojed_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACPP_ConfiguratorGameMode, nullptr, "SelectedActor_OnDestrojed", Z_Construct_UFunction_ACPP_ConfiguratorGameMode_SelectedActor_OnDestrojed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACPP_ConfiguratorGameMode_SelectedActor_OnDestrojed_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACPP_ConfiguratorGameMode_SelectedActor_OnDestrojed_Statics::CPP_ConfiguratorGameMode_eventSelectedActor_OnDestrojed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACPP_ConfiguratorGameMode_SelectedActor_OnDestrojed_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACPP_ConfiguratorGameMode_SelectedActor_OnDestrojed_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ACPP_ConfiguratorGameMode_SelectedActor_OnDestrojed_Statics::CPP_ConfiguratorGameMode_eventSelectedActor_OnDestrojed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACPP_ConfiguratorGameMode_SelectedActor_OnDestrojed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACPP_ConfiguratorGameMode_SelectedActor_OnDestrojed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACPP_ConfiguratorGameMode::execSelectedActor_OnDestrojed)
{
	P_GET_OBJECT(AActor,Z_Param__destrojedActor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SelectedActor_OnDestrojed(Z_Param__destrojedActor);
	P_NATIVE_END;
}
// ********** End Class ACPP_ConfiguratorGameMode Function SelectedActor_OnDestrojed ***************

// ********** Begin Class ACPP_ConfiguratorGameMode ************************************************
void ACPP_ConfiguratorGameMode::StaticRegisterNativesACPP_ConfiguratorGameMode()
{
	UClass* Class = ACPP_ConfiguratorGameMode::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SelectedActor_OnDestrojed", &ACPP_ConfiguratorGameMode::execSelectedActor_OnDestrojed },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_ACPP_ConfiguratorGameMode;
UClass* ACPP_ConfiguratorGameMode::GetPrivateStaticClass()
{
	using TClass = ACPP_ConfiguratorGameMode;
	if (!Z_Registration_Info_UClass_ACPP_ConfiguratorGameMode.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("CPP_ConfiguratorGameMode"),
			Z_Registration_Info_UClass_ACPP_ConfiguratorGameMode.InnerSingleton,
			StaticRegisterNativesACPP_ConfiguratorGameMode,
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
	return Z_Registration_Info_UClass_ACPP_ConfiguratorGameMode.InnerSingleton;
}
UClass* Z_Construct_UClass_ACPP_ConfiguratorGameMode_NoRegister()
{
	return ACPP_ConfiguratorGameMode::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ACPP_ConfiguratorGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Tick Classes Game GameMode Physics Events Cooking LevelInstance Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Core/CPP_ConfiguratorGameMode.h" },
		{ "ModuleRelativePath", "Public/Core/CPP_ConfiguratorGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FurnitureList_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Core/CPP_ConfiguratorGameMode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AppName_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Core/CPP_ConfiguratorGameMode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultViewMode_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Core/CPP_ConfiguratorGameMode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GizmoScale_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMax", "500" },
		{ "ClampMin", "50" },
		{ "ModuleRelativePath", "Public/Core/CPP_ConfiguratorGameMode.h" },
		{ "UIMax", "500" },
		{ "UIMin", "50" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnableAutoAttaching_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Core/CPP_ConfiguratorGameMode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnableAutoRotation_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Core/CPP_ConfiguratorGameMode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FlyingSettings_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Core/CPP_ConfiguratorGameMode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FirstPersonSettings_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Core/CPP_ConfiguratorGameMode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SelectionOutlineSettings_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Core/CPP_ConfiguratorGameMode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InfoWidgetClass_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Core/CPP_ConfiguratorGameMode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShowInfoOnStartup_MetaData[] = {
		{ "Category", "Settings" },
		{ "EditCondition", "InfoWidgetClass!=nullptr" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Core/CPP_ConfiguratorGameMode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SelectedActor_MetaData[] = {
		{ "ModuleRelativePath", "Public/Core/CPP_ConfiguratorGameMode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MainWidgetClass_MetaData[] = {
		{ "ModuleRelativePath", "Public/Core/CPP_ConfiguratorGameMode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GizmoWidgetClass_MetaData[] = {
		{ "ModuleRelativePath", "Public/Core/CPP_ConfiguratorGameMode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MainWidget_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Core/CPP_ConfiguratorGameMode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FlyPawn_MetaData[] = {
		{ "ModuleRelativePath", "Public/Core/CPP_ConfiguratorGameMode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FPCharacter_MetaData[] = {
		{ "ModuleRelativePath", "Public/Core/CPP_ConfiguratorGameMode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GizmoComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Core/CPP_ConfiguratorGameMode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FurnitureList;
	static const UECodeGen_Private::FTextPropertyParams NewProp_AppName;
	static const UECodeGen_Private::FBytePropertyParams NewProp_DefaultViewMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_DefaultViewMode;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_GizmoScale;
	static void NewProp_EnableAutoAttaching_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_EnableAutoAttaching;
	static void NewProp_EnableAutoRotation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_EnableAutoRotation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FlyingSettings;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FirstPersonSettings;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SelectionOutlineSettings;
	static const UECodeGen_Private::FClassPropertyParams NewProp_InfoWidgetClass;
	static void NewProp_ShowInfoOnStartup_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ShowInfoOnStartup;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SelectedActor;
	static const UECodeGen_Private::FClassPropertyParams NewProp_MainWidgetClass;
	static const UECodeGen_Private::FClassPropertyParams NewProp_GizmoWidgetClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MainWidget;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FlyPawn;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FPCharacter;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GizmoComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ACPP_ConfiguratorGameMode_SelectedActor_OnDestrojed, "SelectedActor_OnDestrojed" }, // 2791532103
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACPP_ConfiguratorGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACPP_ConfiguratorGameMode_Statics::NewProp_FurnitureList = { "FurnitureList", nullptr, (EPropertyFlags)0x0144000000010001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACPP_ConfiguratorGameMode, FurnitureList), Z_Construct_UClass_UCPP_FurnitureList_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FurnitureList_MetaData), NewProp_FurnitureList_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_ACPP_ConfiguratorGameMode_Statics::NewProp_AppName = { "AppName", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACPP_ConfiguratorGameMode, AppName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AppName_MetaData), NewProp_AppName_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ACPP_ConfiguratorGameMode_Statics::NewProp_DefaultViewMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ACPP_ConfiguratorGameMode_Statics::NewProp_DefaultViewMode = { "DefaultViewMode", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACPP_ConfiguratorGameMode, DefaultViewMode), Z_Construct_UEnum_RAC_Lite_ECameraViewMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultViewMode_MetaData), NewProp_DefaultViewMode_MetaData) }; // 3105129429
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACPP_ConfiguratorGameMode_Statics::NewProp_GizmoScale = { "GizmoScale", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACPP_ConfiguratorGameMode, GizmoScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GizmoScale_MetaData), NewProp_GizmoScale_MetaData) };
void Z_Construct_UClass_ACPP_ConfiguratorGameMode_Statics::NewProp_EnableAutoAttaching_SetBit(void* Obj)
{
	((ACPP_ConfiguratorGameMode*)Obj)->EnableAutoAttaching = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACPP_ConfiguratorGameMode_Statics::NewProp_EnableAutoAttaching = { "EnableAutoAttaching", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACPP_ConfiguratorGameMode), &Z_Construct_UClass_ACPP_ConfiguratorGameMode_Statics::NewProp_EnableAutoAttaching_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnableAutoAttaching_MetaData), NewProp_EnableAutoAttaching_MetaData) };
void Z_Construct_UClass_ACPP_ConfiguratorGameMode_Statics::NewProp_EnableAutoRotation_SetBit(void* Obj)
{
	((ACPP_ConfiguratorGameMode*)Obj)->EnableAutoRotation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACPP_ConfiguratorGameMode_Statics::NewProp_EnableAutoRotation = { "EnableAutoRotation", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACPP_ConfiguratorGameMode), &Z_Construct_UClass_ACPP_ConfiguratorGameMode_Statics::NewProp_EnableAutoRotation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnableAutoRotation_MetaData), NewProp_EnableAutoRotation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ACPP_ConfiguratorGameMode_Statics::NewProp_FlyingSettings = { "FlyingSettings", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACPP_ConfiguratorGameMode, FlyingSettings), Z_Construct_UScriptStruct_FFlyingSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FlyingSettings_MetaData), NewProp_FlyingSettings_MetaData) }; // 675698276
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ACPP_ConfiguratorGameMode_Statics::NewProp_FirstPersonSettings = { "FirstPersonSettings", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACPP_ConfiguratorGameMode, FirstPersonSettings), Z_Construct_UScriptStruct_FFirstPersonSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FirstPersonSettings_MetaData), NewProp_FirstPersonSettings_MetaData) }; // 2549841227
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ACPP_ConfiguratorGameMode_Statics::NewProp_SelectionOutlineSettings = { "SelectionOutlineSettings", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACPP_ConfiguratorGameMode, SelectionOutlineSettings), Z_Construct_UScriptStruct_FSelectionOutlineSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelectionOutlineSettings_MetaData), NewProp_SelectionOutlineSettings_MetaData) }; // 3796216693
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ACPP_ConfiguratorGameMode_Statics::NewProp_InfoWidgetClass = { "InfoWidgetClass", nullptr, (EPropertyFlags)0x0044000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACPP_ConfiguratorGameMode, InfoWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InfoWidgetClass_MetaData), NewProp_InfoWidgetClass_MetaData) };
void Z_Construct_UClass_ACPP_ConfiguratorGameMode_Statics::NewProp_ShowInfoOnStartup_SetBit(void* Obj)
{
	((ACPP_ConfiguratorGameMode*)Obj)->ShowInfoOnStartup = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACPP_ConfiguratorGameMode_Statics::NewProp_ShowInfoOnStartup = { "ShowInfoOnStartup", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACPP_ConfiguratorGameMode), &Z_Construct_UClass_ACPP_ConfiguratorGameMode_Statics::NewProp_ShowInfoOnStartup_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShowInfoOnStartup_MetaData), NewProp_ShowInfoOnStartup_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACPP_ConfiguratorGameMode_Statics::NewProp_SelectedActor = { "SelectedActor", nullptr, (EPropertyFlags)0x0144000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACPP_ConfiguratorGameMode, SelectedActor), Z_Construct_UClass_ACPP_SelectableActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelectedActor_MetaData), NewProp_SelectedActor_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ACPP_ConfiguratorGameMode_Statics::NewProp_MainWidgetClass = { "MainWidgetClass", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACPP_ConfiguratorGameMode, MainWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UCPP_MainWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MainWidgetClass_MetaData), NewProp_MainWidgetClass_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ACPP_ConfiguratorGameMode_Statics::NewProp_GizmoWidgetClass = { "GizmoWidgetClass", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACPP_ConfiguratorGameMode, GizmoWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UCPP_MainWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GizmoWidgetClass_MetaData), NewProp_GizmoWidgetClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACPP_ConfiguratorGameMode_Statics::NewProp_MainWidget = { "MainWidget", nullptr, (EPropertyFlags)0x0144000000082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACPP_ConfiguratorGameMode, MainWidget), Z_Construct_UClass_UCPP_MainWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MainWidget_MetaData), NewProp_MainWidget_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACPP_ConfiguratorGameMode_Statics::NewProp_FlyPawn = { "FlyPawn", nullptr, (EPropertyFlags)0x0144000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACPP_ConfiguratorGameMode, FlyPawn), Z_Construct_UClass_ACPP_FlyPawn_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FlyPawn_MetaData), NewProp_FlyPawn_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACPP_ConfiguratorGameMode_Statics::NewProp_FPCharacter = { "FPCharacter", nullptr, (EPropertyFlags)0x0144000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACPP_ConfiguratorGameMode, FPCharacter), Z_Construct_UClass_ACPP_FPCharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FPCharacter_MetaData), NewProp_FPCharacter_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACPP_ConfiguratorGameMode_Statics::NewProp_GizmoComponent = { "GizmoComponent", nullptr, (EPropertyFlags)0x0144000000082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACPP_ConfiguratorGameMode, GizmoComponent), Z_Construct_UClass_UWidgetComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GizmoComponent_MetaData), NewProp_GizmoComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACPP_ConfiguratorGameMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_ConfiguratorGameMode_Statics::NewProp_FurnitureList,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_ConfiguratorGameMode_Statics::NewProp_AppName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_ConfiguratorGameMode_Statics::NewProp_DefaultViewMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_ConfiguratorGameMode_Statics::NewProp_DefaultViewMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_ConfiguratorGameMode_Statics::NewProp_GizmoScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_ConfiguratorGameMode_Statics::NewProp_EnableAutoAttaching,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_ConfiguratorGameMode_Statics::NewProp_EnableAutoRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_ConfiguratorGameMode_Statics::NewProp_FlyingSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_ConfiguratorGameMode_Statics::NewProp_FirstPersonSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_ConfiguratorGameMode_Statics::NewProp_SelectionOutlineSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_ConfiguratorGameMode_Statics::NewProp_InfoWidgetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_ConfiguratorGameMode_Statics::NewProp_ShowInfoOnStartup,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_ConfiguratorGameMode_Statics::NewProp_SelectedActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_ConfiguratorGameMode_Statics::NewProp_MainWidgetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_ConfiguratorGameMode_Statics::NewProp_GizmoWidgetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_ConfiguratorGameMode_Statics::NewProp_MainWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_ConfiguratorGameMode_Statics::NewProp_FlyPawn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_ConfiguratorGameMode_Statics::NewProp_FPCharacter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_ConfiguratorGameMode_Statics::NewProp_GizmoComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_ConfiguratorGameMode_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ACPP_ConfiguratorGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_RAC_Lite,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_ConfiguratorGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ACPP_ConfiguratorGameMode_Statics::ClassParams = {
	&ACPP_ConfiguratorGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ACPP_ConfiguratorGameMode_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_ConfiguratorGameMode_Statics::PropPointers),
	0,
	0x009003ADu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_ConfiguratorGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ACPP_ConfiguratorGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ACPP_ConfiguratorGameMode()
{
	if (!Z_Registration_Info_UClass_ACPP_ConfiguratorGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACPP_ConfiguratorGameMode.OuterSingleton, Z_Construct_UClass_ACPP_ConfiguratorGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ACPP_ConfiguratorGameMode.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ACPP_ConfiguratorGameMode);
ACPP_ConfiguratorGameMode::~ACPP_ConfiguratorGameMode() {}
// ********** End Class ACPP_ConfiguratorGameMode **************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RAC_Lite_Source_RAC_Lite_Public_Core_CPP_ConfiguratorGameMode_h__Script_RAC_Lite_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACPP_ConfiguratorGameMode, ACPP_ConfiguratorGameMode::StaticClass, TEXT("ACPP_ConfiguratorGameMode"), &Z_Registration_Info_UClass_ACPP_ConfiguratorGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACPP_ConfiguratorGameMode), 3625125920U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RAC_Lite_Source_RAC_Lite_Public_Core_CPP_ConfiguratorGameMode_h__Script_RAC_Lite_2808682771(TEXT("/Script/RAC_Lite"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RAC_Lite_Source_RAC_Lite_Public_Core_CPP_ConfiguratorGameMode_h__Script_RAC_Lite_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RAC_Lite_Source_RAC_Lite_Public_Core_CPP_ConfiguratorGameMode_h__Script_RAC_Lite_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
