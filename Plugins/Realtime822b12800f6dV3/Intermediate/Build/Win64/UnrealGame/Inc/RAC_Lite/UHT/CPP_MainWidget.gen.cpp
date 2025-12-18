// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UserInterface/CPP_MainWidget.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeCPP_MainWidget() {}

// ********** Begin Cross Module References ********************************************************
RAC_LITE_API UClass* Z_Construct_UClass_ACPP_ConfiguratorGameMode_NoRegister();
RAC_LITE_API UClass* Z_Construct_UClass_UCPP_ActorConfigurationWidget_NoRegister();
RAC_LITE_API UClass* Z_Construct_UClass_UCPP_ActorSpawningWidget_NoRegister();
RAC_LITE_API UClass* Z_Construct_UClass_UCPP_MainWidget();
RAC_LITE_API UClass* Z_Construct_UClass_UCPP_MainWidget_NoRegister();
RAC_LITE_API UClass* Z_Construct_UClass_UCPP_SelectableButton_NoRegister();
RAC_LITE_API UClass* Z_Construct_UClass_UCPP_ShadowedButton_NoRegister();
UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UMG_API UClass* Z_Construct_UClass_UVerticalBox_NoRegister();
UMG_API UClass* Z_Construct_UClass_UWidgetSwitcher_NoRegister();
UPackage* Z_Construct_UPackage__Script_RAC_Lite();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UCPP_MainWidget Function ActorConfigurationButton_OnClicked **************
struct Z_Construct_UFunction_UCPP_MainWidget_ActorConfigurationButton_OnClicked_Statics
{
	struct CPP_MainWidget_eventActorConfigurationButton_OnClicked_Parms
	{
		UCPP_ShadowedButton* _sender;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UserInterface/CPP_MainWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__sender_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp__sender;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCPP_MainWidget_ActorConfigurationButton_OnClicked_Statics::NewProp__sender = { "_sender", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CPP_MainWidget_eventActorConfigurationButton_OnClicked_Parms, _sender), Z_Construct_UClass_UCPP_ShadowedButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__sender_MetaData), NewProp__sender_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCPP_MainWidget_ActorConfigurationButton_OnClicked_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCPP_MainWidget_ActorConfigurationButton_OnClicked_Statics::NewProp__sender,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCPP_MainWidget_ActorConfigurationButton_OnClicked_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCPP_MainWidget_ActorConfigurationButton_OnClicked_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCPP_MainWidget, nullptr, "ActorConfigurationButton_OnClicked", Z_Construct_UFunction_UCPP_MainWidget_ActorConfigurationButton_OnClicked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCPP_MainWidget_ActorConfigurationButton_OnClicked_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCPP_MainWidget_ActorConfigurationButton_OnClicked_Statics::CPP_MainWidget_eventActorConfigurationButton_OnClicked_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCPP_MainWidget_ActorConfigurationButton_OnClicked_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCPP_MainWidget_ActorConfigurationButton_OnClicked_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCPP_MainWidget_ActorConfigurationButton_OnClicked_Statics::CPP_MainWidget_eventActorConfigurationButton_OnClicked_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCPP_MainWidget_ActorConfigurationButton_OnClicked()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCPP_MainWidget_ActorConfigurationButton_OnClicked_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCPP_MainWidget::execActorConfigurationButton_OnClicked)
{
	P_GET_OBJECT(UCPP_ShadowedButton,Z_Param__sender);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ActorConfigurationButton_OnClicked(Z_Param__sender);
	P_NATIVE_END;
}
// ********** End Class UCPP_MainWidget Function ActorConfigurationButton_OnClicked ****************

// ********** Begin Class UCPP_MainWidget Function ActorSpawningButton_OnClicked *******************
struct Z_Construct_UFunction_UCPP_MainWidget_ActorSpawningButton_OnClicked_Statics
{
	struct CPP_MainWidget_eventActorSpawningButton_OnClicked_Parms
	{
		UCPP_ShadowedButton* _sender;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UserInterface/CPP_MainWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__sender_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp__sender;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCPP_MainWidget_ActorSpawningButton_OnClicked_Statics::NewProp__sender = { "_sender", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CPP_MainWidget_eventActorSpawningButton_OnClicked_Parms, _sender), Z_Construct_UClass_UCPP_ShadowedButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__sender_MetaData), NewProp__sender_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCPP_MainWidget_ActorSpawningButton_OnClicked_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCPP_MainWidget_ActorSpawningButton_OnClicked_Statics::NewProp__sender,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCPP_MainWidget_ActorSpawningButton_OnClicked_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCPP_MainWidget_ActorSpawningButton_OnClicked_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCPP_MainWidget, nullptr, "ActorSpawningButton_OnClicked", Z_Construct_UFunction_UCPP_MainWidget_ActorSpawningButton_OnClicked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCPP_MainWidget_ActorSpawningButton_OnClicked_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCPP_MainWidget_ActorSpawningButton_OnClicked_Statics::CPP_MainWidget_eventActorSpawningButton_OnClicked_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCPP_MainWidget_ActorSpawningButton_OnClicked_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCPP_MainWidget_ActorSpawningButton_OnClicked_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCPP_MainWidget_ActorSpawningButton_OnClicked_Statics::CPP_MainWidget_eventActorSpawningButton_OnClicked_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCPP_MainWidget_ActorSpawningButton_OnClicked()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCPP_MainWidget_ActorSpawningButton_OnClicked_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCPP_MainWidget::execActorSpawningButton_OnClicked)
{
	P_GET_OBJECT(UCPP_ShadowedButton,Z_Param__sender);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ActorSpawningButton_OnClicked(Z_Param__sender);
	P_NATIVE_END;
}
// ********** End Class UCPP_MainWidget Function ActorSpawningButton_OnClicked *********************

// ********** Begin Class UCPP_MainWidget Function CloseInfoButton_OnClicked ***********************
struct Z_Construct_UFunction_UCPP_MainWidget_CloseInfoButton_OnClicked_Statics
{
	struct CPP_MainWidget_eventCloseInfoButton_OnClicked_Parms
	{
		UCPP_ShadowedButton* _sender;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UserInterface/CPP_MainWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__sender_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp__sender;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCPP_MainWidget_CloseInfoButton_OnClicked_Statics::NewProp__sender = { "_sender", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CPP_MainWidget_eventCloseInfoButton_OnClicked_Parms, _sender), Z_Construct_UClass_UCPP_ShadowedButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__sender_MetaData), NewProp__sender_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCPP_MainWidget_CloseInfoButton_OnClicked_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCPP_MainWidget_CloseInfoButton_OnClicked_Statics::NewProp__sender,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCPP_MainWidget_CloseInfoButton_OnClicked_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCPP_MainWidget_CloseInfoButton_OnClicked_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCPP_MainWidget, nullptr, "CloseInfoButton_OnClicked", Z_Construct_UFunction_UCPP_MainWidget_CloseInfoButton_OnClicked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCPP_MainWidget_CloseInfoButton_OnClicked_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCPP_MainWidget_CloseInfoButton_OnClicked_Statics::CPP_MainWidget_eventCloseInfoButton_OnClicked_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCPP_MainWidget_CloseInfoButton_OnClicked_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCPP_MainWidget_CloseInfoButton_OnClicked_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCPP_MainWidget_CloseInfoButton_OnClicked_Statics::CPP_MainWidget_eventCloseInfoButton_OnClicked_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCPP_MainWidget_CloseInfoButton_OnClicked()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCPP_MainWidget_CloseInfoButton_OnClicked_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCPP_MainWidget::execCloseInfoButton_OnClicked)
{
	P_GET_OBJECT(UCPP_ShadowedButton,Z_Param__sender);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CloseInfoButton_OnClicked(Z_Param__sender);
	P_NATIVE_END;
}
// ********** End Class UCPP_MainWidget Function CloseInfoButton_OnClicked *************************

// ********** Begin Class UCPP_MainWidget Function ExitButton_OnClicked ****************************
struct Z_Construct_UFunction_UCPP_MainWidget_ExitButton_OnClicked_Statics
{
	struct CPP_MainWidget_eventExitButton_OnClicked_Parms
	{
		UCPP_ShadowedButton* _sender;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UserInterface/CPP_MainWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__sender_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp__sender;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCPP_MainWidget_ExitButton_OnClicked_Statics::NewProp__sender = { "_sender", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CPP_MainWidget_eventExitButton_OnClicked_Parms, _sender), Z_Construct_UClass_UCPP_ShadowedButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__sender_MetaData), NewProp__sender_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCPP_MainWidget_ExitButton_OnClicked_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCPP_MainWidget_ExitButton_OnClicked_Statics::NewProp__sender,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCPP_MainWidget_ExitButton_OnClicked_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCPP_MainWidget_ExitButton_OnClicked_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCPP_MainWidget, nullptr, "ExitButton_OnClicked", Z_Construct_UFunction_UCPP_MainWidget_ExitButton_OnClicked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCPP_MainWidget_ExitButton_OnClicked_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCPP_MainWidget_ExitButton_OnClicked_Statics::CPP_MainWidget_eventExitButton_OnClicked_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCPP_MainWidget_ExitButton_OnClicked_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCPP_MainWidget_ExitButton_OnClicked_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCPP_MainWidget_ExitButton_OnClicked_Statics::CPP_MainWidget_eventExitButton_OnClicked_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCPP_MainWidget_ExitButton_OnClicked()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCPP_MainWidget_ExitButton_OnClicked_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCPP_MainWidget::execExitButton_OnClicked)
{
	P_GET_OBJECT(UCPP_ShadowedButton,Z_Param__sender);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ExitButton_OnClicked(Z_Param__sender);
	P_NATIVE_END;
}
// ********** End Class UCPP_MainWidget Function ExitButton_OnClicked ******************************

// ********** Begin Class UCPP_MainWidget Function FirstPersonModeButton_OnClicked *****************
struct Z_Construct_UFunction_UCPP_MainWidget_FirstPersonModeButton_OnClicked_Statics
{
	struct CPP_MainWidget_eventFirstPersonModeButton_OnClicked_Parms
	{
		UCPP_ShadowedButton* _sender;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UserInterface/CPP_MainWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__sender_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp__sender;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCPP_MainWidget_FirstPersonModeButton_OnClicked_Statics::NewProp__sender = { "_sender", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CPP_MainWidget_eventFirstPersonModeButton_OnClicked_Parms, _sender), Z_Construct_UClass_UCPP_ShadowedButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__sender_MetaData), NewProp__sender_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCPP_MainWidget_FirstPersonModeButton_OnClicked_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCPP_MainWidget_FirstPersonModeButton_OnClicked_Statics::NewProp__sender,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCPP_MainWidget_FirstPersonModeButton_OnClicked_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCPP_MainWidget_FirstPersonModeButton_OnClicked_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCPP_MainWidget, nullptr, "FirstPersonModeButton_OnClicked", Z_Construct_UFunction_UCPP_MainWidget_FirstPersonModeButton_OnClicked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCPP_MainWidget_FirstPersonModeButton_OnClicked_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCPP_MainWidget_FirstPersonModeButton_OnClicked_Statics::CPP_MainWidget_eventFirstPersonModeButton_OnClicked_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCPP_MainWidget_FirstPersonModeButton_OnClicked_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCPP_MainWidget_FirstPersonModeButton_OnClicked_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCPP_MainWidget_FirstPersonModeButton_OnClicked_Statics::CPP_MainWidget_eventFirstPersonModeButton_OnClicked_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCPP_MainWidget_FirstPersonModeButton_OnClicked()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCPP_MainWidget_FirstPersonModeButton_OnClicked_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCPP_MainWidget::execFirstPersonModeButton_OnClicked)
{
	P_GET_OBJECT(UCPP_ShadowedButton,Z_Param__sender);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->FirstPersonModeButton_OnClicked(Z_Param__sender);
	P_NATIVE_END;
}
// ********** End Class UCPP_MainWidget Function FirstPersonModeButton_OnClicked *******************

// ********** Begin Class UCPP_MainWidget Function FlyingModeButton_OnClicked **********************
struct Z_Construct_UFunction_UCPP_MainWidget_FlyingModeButton_OnClicked_Statics
{
	struct CPP_MainWidget_eventFlyingModeButton_OnClicked_Parms
	{
		UCPP_ShadowedButton* _sender;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UserInterface/CPP_MainWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__sender_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp__sender;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCPP_MainWidget_FlyingModeButton_OnClicked_Statics::NewProp__sender = { "_sender", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CPP_MainWidget_eventFlyingModeButton_OnClicked_Parms, _sender), Z_Construct_UClass_UCPP_ShadowedButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__sender_MetaData), NewProp__sender_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCPP_MainWidget_FlyingModeButton_OnClicked_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCPP_MainWidget_FlyingModeButton_OnClicked_Statics::NewProp__sender,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCPP_MainWidget_FlyingModeButton_OnClicked_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCPP_MainWidget_FlyingModeButton_OnClicked_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCPP_MainWidget, nullptr, "FlyingModeButton_OnClicked", Z_Construct_UFunction_UCPP_MainWidget_FlyingModeButton_OnClicked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCPP_MainWidget_FlyingModeButton_OnClicked_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCPP_MainWidget_FlyingModeButton_OnClicked_Statics::CPP_MainWidget_eventFlyingModeButton_OnClicked_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCPP_MainWidget_FlyingModeButton_OnClicked_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCPP_MainWidget_FlyingModeButton_OnClicked_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCPP_MainWidget_FlyingModeButton_OnClicked_Statics::CPP_MainWidget_eventFlyingModeButton_OnClicked_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCPP_MainWidget_FlyingModeButton_OnClicked()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCPP_MainWidget_FlyingModeButton_OnClicked_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCPP_MainWidget::execFlyingModeButton_OnClicked)
{
	P_GET_OBJECT(UCPP_ShadowedButton,Z_Param__sender);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->FlyingModeButton_OnClicked(Z_Param__sender);
	P_NATIVE_END;
}
// ********** End Class UCPP_MainWidget Function FlyingModeButton_OnClicked ************************

// ********** Begin Class UCPP_MainWidget Function HideUIButton_OnClicked **************************
struct Z_Construct_UFunction_UCPP_MainWidget_HideUIButton_OnClicked_Statics
{
	struct CPP_MainWidget_eventHideUIButton_OnClicked_Parms
	{
		UCPP_ShadowedButton* _sender;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UserInterface/CPP_MainWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__sender_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp__sender;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCPP_MainWidget_HideUIButton_OnClicked_Statics::NewProp__sender = { "_sender", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CPP_MainWidget_eventHideUIButton_OnClicked_Parms, _sender), Z_Construct_UClass_UCPP_ShadowedButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__sender_MetaData), NewProp__sender_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCPP_MainWidget_HideUIButton_OnClicked_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCPP_MainWidget_HideUIButton_OnClicked_Statics::NewProp__sender,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCPP_MainWidget_HideUIButton_OnClicked_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCPP_MainWidget_HideUIButton_OnClicked_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCPP_MainWidget, nullptr, "HideUIButton_OnClicked", Z_Construct_UFunction_UCPP_MainWidget_HideUIButton_OnClicked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCPP_MainWidget_HideUIButton_OnClicked_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCPP_MainWidget_HideUIButton_OnClicked_Statics::CPP_MainWidget_eventHideUIButton_OnClicked_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCPP_MainWidget_HideUIButton_OnClicked_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCPP_MainWidget_HideUIButton_OnClicked_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCPP_MainWidget_HideUIButton_OnClicked_Statics::CPP_MainWidget_eventHideUIButton_OnClicked_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCPP_MainWidget_HideUIButton_OnClicked()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCPP_MainWidget_HideUIButton_OnClicked_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCPP_MainWidget::execHideUIButton_OnClicked)
{
	P_GET_OBJECT(UCPP_ShadowedButton,Z_Param__sender);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HideUIButton_OnClicked(Z_Param__sender);
	P_NATIVE_END;
}
// ********** End Class UCPP_MainWidget Function HideUIButton_OnClicked ****************************

// ********** Begin Class UCPP_MainWidget Function ShowInfoButton_OnClicked ************************
struct Z_Construct_UFunction_UCPP_MainWidget_ShowInfoButton_OnClicked_Statics
{
	struct CPP_MainWidget_eventShowInfoButton_OnClicked_Parms
	{
		UCPP_ShadowedButton* _sender;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UserInterface/CPP_MainWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__sender_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp__sender;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCPP_MainWidget_ShowInfoButton_OnClicked_Statics::NewProp__sender = { "_sender", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CPP_MainWidget_eventShowInfoButton_OnClicked_Parms, _sender), Z_Construct_UClass_UCPP_ShadowedButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__sender_MetaData), NewProp__sender_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCPP_MainWidget_ShowInfoButton_OnClicked_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCPP_MainWidget_ShowInfoButton_OnClicked_Statics::NewProp__sender,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCPP_MainWidget_ShowInfoButton_OnClicked_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCPP_MainWidget_ShowInfoButton_OnClicked_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCPP_MainWidget, nullptr, "ShowInfoButton_OnClicked", Z_Construct_UFunction_UCPP_MainWidget_ShowInfoButton_OnClicked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCPP_MainWidget_ShowInfoButton_OnClicked_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCPP_MainWidget_ShowInfoButton_OnClicked_Statics::CPP_MainWidget_eventShowInfoButton_OnClicked_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCPP_MainWidget_ShowInfoButton_OnClicked_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCPP_MainWidget_ShowInfoButton_OnClicked_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCPP_MainWidget_ShowInfoButton_OnClicked_Statics::CPP_MainWidget_eventShowInfoButton_OnClicked_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCPP_MainWidget_ShowInfoButton_OnClicked()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCPP_MainWidget_ShowInfoButton_OnClicked_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCPP_MainWidget::execShowInfoButton_OnClicked)
{
	P_GET_OBJECT(UCPP_ShadowedButton,Z_Param__sender);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ShowInfoButton_OnClicked(Z_Param__sender);
	P_NATIVE_END;
}
// ********** End Class UCPP_MainWidget Function ShowInfoButton_OnClicked **************************

// ********** Begin Class UCPP_MainWidget Function ShowUIButton_OnClicked **************************
struct Z_Construct_UFunction_UCPP_MainWidget_ShowUIButton_OnClicked_Statics
{
	struct CPP_MainWidget_eventShowUIButton_OnClicked_Parms
	{
		UCPP_ShadowedButton* _sender;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UserInterface/CPP_MainWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__sender_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp__sender;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCPP_MainWidget_ShowUIButton_OnClicked_Statics::NewProp__sender = { "_sender", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CPP_MainWidget_eventShowUIButton_OnClicked_Parms, _sender), Z_Construct_UClass_UCPP_ShadowedButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__sender_MetaData), NewProp__sender_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCPP_MainWidget_ShowUIButton_OnClicked_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCPP_MainWidget_ShowUIButton_OnClicked_Statics::NewProp__sender,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCPP_MainWidget_ShowUIButton_OnClicked_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCPP_MainWidget_ShowUIButton_OnClicked_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCPP_MainWidget, nullptr, "ShowUIButton_OnClicked", Z_Construct_UFunction_UCPP_MainWidget_ShowUIButton_OnClicked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCPP_MainWidget_ShowUIButton_OnClicked_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCPP_MainWidget_ShowUIButton_OnClicked_Statics::CPP_MainWidget_eventShowUIButton_OnClicked_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCPP_MainWidget_ShowUIButton_OnClicked_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCPP_MainWidget_ShowUIButton_OnClicked_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCPP_MainWidget_ShowUIButton_OnClicked_Statics::CPP_MainWidget_eventShowUIButton_OnClicked_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCPP_MainWidget_ShowUIButton_OnClicked()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCPP_MainWidget_ShowUIButton_OnClicked_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCPP_MainWidget::execShowUIButton_OnClicked)
{
	P_GET_OBJECT(UCPP_ShadowedButton,Z_Param__sender);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ShowUIButton_OnClicked(Z_Param__sender);
	P_NATIVE_END;
}
// ********** End Class UCPP_MainWidget Function ShowUIButton_OnClicked ****************************

// ********** Begin Class UCPP_MainWidget Function TakeScreenshotButton_OnClicked ******************
struct Z_Construct_UFunction_UCPP_MainWidget_TakeScreenshotButton_OnClicked_Statics
{
	struct CPP_MainWidget_eventTakeScreenshotButton_OnClicked_Parms
	{
		UCPP_ShadowedButton* _sender;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UserInterface/CPP_MainWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__sender_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp__sender;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCPP_MainWidget_TakeScreenshotButton_OnClicked_Statics::NewProp__sender = { "_sender", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CPP_MainWidget_eventTakeScreenshotButton_OnClicked_Parms, _sender), Z_Construct_UClass_UCPP_ShadowedButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__sender_MetaData), NewProp__sender_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCPP_MainWidget_TakeScreenshotButton_OnClicked_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCPP_MainWidget_TakeScreenshotButton_OnClicked_Statics::NewProp__sender,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCPP_MainWidget_TakeScreenshotButton_OnClicked_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCPP_MainWidget_TakeScreenshotButton_OnClicked_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCPP_MainWidget, nullptr, "TakeScreenshotButton_OnClicked", Z_Construct_UFunction_UCPP_MainWidget_TakeScreenshotButton_OnClicked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCPP_MainWidget_TakeScreenshotButton_OnClicked_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCPP_MainWidget_TakeScreenshotButton_OnClicked_Statics::CPP_MainWidget_eventTakeScreenshotButton_OnClicked_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCPP_MainWidget_TakeScreenshotButton_OnClicked_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCPP_MainWidget_TakeScreenshotButton_OnClicked_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCPP_MainWidget_TakeScreenshotButton_OnClicked_Statics::CPP_MainWidget_eventTakeScreenshotButton_OnClicked_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCPP_MainWidget_TakeScreenshotButton_OnClicked()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCPP_MainWidget_TakeScreenshotButton_OnClicked_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCPP_MainWidget::execTakeScreenshotButton_OnClicked)
{
	P_GET_OBJECT(UCPP_ShadowedButton,Z_Param__sender);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->TakeScreenshotButton_OnClicked(Z_Param__sender);
	P_NATIVE_END;
}
// ********** End Class UCPP_MainWidget Function TakeScreenshotButton_OnClicked ********************

// ********** Begin Class UCPP_MainWidget **********************************************************
void UCPP_MainWidget::StaticRegisterNativesUCPP_MainWidget()
{
	UClass* Class = UCPP_MainWidget::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ActorConfigurationButton_OnClicked", &UCPP_MainWidget::execActorConfigurationButton_OnClicked },
		{ "ActorSpawningButton_OnClicked", &UCPP_MainWidget::execActorSpawningButton_OnClicked },
		{ "CloseInfoButton_OnClicked", &UCPP_MainWidget::execCloseInfoButton_OnClicked },
		{ "ExitButton_OnClicked", &UCPP_MainWidget::execExitButton_OnClicked },
		{ "FirstPersonModeButton_OnClicked", &UCPP_MainWidget::execFirstPersonModeButton_OnClicked },
		{ "FlyingModeButton_OnClicked", &UCPP_MainWidget::execFlyingModeButton_OnClicked },
		{ "HideUIButton_OnClicked", &UCPP_MainWidget::execHideUIButton_OnClicked },
		{ "ShowInfoButton_OnClicked", &UCPP_MainWidget::execShowInfoButton_OnClicked },
		{ "ShowUIButton_OnClicked", &UCPP_MainWidget::execShowUIButton_OnClicked },
		{ "TakeScreenshotButton_OnClicked", &UCPP_MainWidget::execTakeScreenshotButton_OnClicked },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UCPP_MainWidget;
UClass* UCPP_MainWidget::GetPrivateStaticClass()
{
	using TClass = UCPP_MainWidget;
	if (!Z_Registration_Info_UClass_UCPP_MainWidget.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("CPP_MainWidget"),
			Z_Registration_Info_UClass_UCPP_MainWidget.InnerSingleton,
			StaticRegisterNativesUCPP_MainWidget,
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
	return Z_Registration_Info_UClass_UCPP_MainWidget.InnerSingleton;
}
UClass* Z_Construct_UClass_UCPP_MainWidget_NoRegister()
{
	return UCPP_MainWidget::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UCPP_MainWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "UserInterface/CPP_MainWidget.h" },
		{ "ModuleRelativePath", "Public/UserInterface/CPP_MainWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AppNameTextBlock_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UserInterface/CPP_MainWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MainWidgetSwitcher_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UserInterface/CPP_MainWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActorConfigurationPanel_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UserInterface/CPP_MainWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActorSpawningPanel_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UserInterface/CPP_MainWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PanelsWidgetSwitcher_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UserInterface/CPP_MainWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActorConfigurationButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UserInterface/CPP_MainWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActorSpawningButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UserInterface/CPP_MainWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FirstPersonModeButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UserInterface/CPP_MainWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FlyingModeButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UserInterface/CPP_MainWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HideUIButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UserInterface/CPP_MainWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShowUIButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UserInterface/CPP_MainWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TakeScreenshotButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UserInterface/CPP_MainWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExitButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UserInterface/CPP_MainWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CloseInfoButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UserInterface/CPP_MainWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShowInfoButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UserInterface/CPP_MainWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InfoVerticalBox_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UserInterface/CPP_MainWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameMode_MetaData[] = {
		{ "ModuleRelativePath", "Public/UserInterface/CPP_MainWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AppNameTextBlock;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MainWidgetSwitcher;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ActorConfigurationPanel;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ActorSpawningPanel;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PanelsWidgetSwitcher;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ActorConfigurationButton;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ActorSpawningButton;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FirstPersonModeButton;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FlyingModeButton;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HideUIButton;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ShowUIButton;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TakeScreenshotButton;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ExitButton;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CloseInfoButton;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ShowInfoButton;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InfoVerticalBox;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GameMode;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UCPP_MainWidget_ActorConfigurationButton_OnClicked, "ActorConfigurationButton_OnClicked" }, // 1778685197
		{ &Z_Construct_UFunction_UCPP_MainWidget_ActorSpawningButton_OnClicked, "ActorSpawningButton_OnClicked" }, // 2368108052
		{ &Z_Construct_UFunction_UCPP_MainWidget_CloseInfoButton_OnClicked, "CloseInfoButton_OnClicked" }, // 2898774746
		{ &Z_Construct_UFunction_UCPP_MainWidget_ExitButton_OnClicked, "ExitButton_OnClicked" }, // 749322301
		{ &Z_Construct_UFunction_UCPP_MainWidget_FirstPersonModeButton_OnClicked, "FirstPersonModeButton_OnClicked" }, // 1810389156
		{ &Z_Construct_UFunction_UCPP_MainWidget_FlyingModeButton_OnClicked, "FlyingModeButton_OnClicked" }, // 777284370
		{ &Z_Construct_UFunction_UCPP_MainWidget_HideUIButton_OnClicked, "HideUIButton_OnClicked" }, // 2669794350
		{ &Z_Construct_UFunction_UCPP_MainWidget_ShowInfoButton_OnClicked, "ShowInfoButton_OnClicked" }, // 1283482518
		{ &Z_Construct_UFunction_UCPP_MainWidget_ShowUIButton_OnClicked, "ShowUIButton_OnClicked" }, // 2072528787
		{ &Z_Construct_UFunction_UCPP_MainWidget_TakeScreenshotButton_OnClicked, "TakeScreenshotButton_OnClicked" }, // 3245633159
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCPP_MainWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCPP_MainWidget_Statics::NewProp_AppNameTextBlock = { "AppNameTextBlock", nullptr, (EPropertyFlags)0x0144000000090009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCPP_MainWidget, AppNameTextBlock), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AppNameTextBlock_MetaData), NewProp_AppNameTextBlock_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCPP_MainWidget_Statics::NewProp_MainWidgetSwitcher = { "MainWidgetSwitcher", nullptr, (EPropertyFlags)0x0144000000090009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCPP_MainWidget, MainWidgetSwitcher), Z_Construct_UClass_UWidgetSwitcher_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MainWidgetSwitcher_MetaData), NewProp_MainWidgetSwitcher_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCPP_MainWidget_Statics::NewProp_ActorConfigurationPanel = { "ActorConfigurationPanel", nullptr, (EPropertyFlags)0x0144000000090009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCPP_MainWidget, ActorConfigurationPanel), Z_Construct_UClass_UCPP_ActorConfigurationWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActorConfigurationPanel_MetaData), NewProp_ActorConfigurationPanel_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCPP_MainWidget_Statics::NewProp_ActorSpawningPanel = { "ActorSpawningPanel", nullptr, (EPropertyFlags)0x0144000000090009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCPP_MainWidget, ActorSpawningPanel), Z_Construct_UClass_UCPP_ActorSpawningWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActorSpawningPanel_MetaData), NewProp_ActorSpawningPanel_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCPP_MainWidget_Statics::NewProp_PanelsWidgetSwitcher = { "PanelsWidgetSwitcher", nullptr, (EPropertyFlags)0x0144000000090009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCPP_MainWidget, PanelsWidgetSwitcher), Z_Construct_UClass_UWidgetSwitcher_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PanelsWidgetSwitcher_MetaData), NewProp_PanelsWidgetSwitcher_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCPP_MainWidget_Statics::NewProp_ActorConfigurationButton = { "ActorConfigurationButton", nullptr, (EPropertyFlags)0x0144000000090009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCPP_MainWidget, ActorConfigurationButton), Z_Construct_UClass_UCPP_SelectableButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActorConfigurationButton_MetaData), NewProp_ActorConfigurationButton_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCPP_MainWidget_Statics::NewProp_ActorSpawningButton = { "ActorSpawningButton", nullptr, (EPropertyFlags)0x0144000000090009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCPP_MainWidget, ActorSpawningButton), Z_Construct_UClass_UCPP_SelectableButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActorSpawningButton_MetaData), NewProp_ActorSpawningButton_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCPP_MainWidget_Statics::NewProp_FirstPersonModeButton = { "FirstPersonModeButton", nullptr, (EPropertyFlags)0x0144000000090009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCPP_MainWidget, FirstPersonModeButton), Z_Construct_UClass_UCPP_SelectableButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FirstPersonModeButton_MetaData), NewProp_FirstPersonModeButton_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCPP_MainWidget_Statics::NewProp_FlyingModeButton = { "FlyingModeButton", nullptr, (EPropertyFlags)0x0144000000090009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCPP_MainWidget, FlyingModeButton), Z_Construct_UClass_UCPP_SelectableButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FlyingModeButton_MetaData), NewProp_FlyingModeButton_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCPP_MainWidget_Statics::NewProp_HideUIButton = { "HideUIButton", nullptr, (EPropertyFlags)0x0144000000090009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCPP_MainWidget, HideUIButton), Z_Construct_UClass_UCPP_SelectableButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HideUIButton_MetaData), NewProp_HideUIButton_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCPP_MainWidget_Statics::NewProp_ShowUIButton = { "ShowUIButton", nullptr, (EPropertyFlags)0x0144000000090009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCPP_MainWidget, ShowUIButton), Z_Construct_UClass_UCPP_SelectableButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShowUIButton_MetaData), NewProp_ShowUIButton_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCPP_MainWidget_Statics::NewProp_TakeScreenshotButton = { "TakeScreenshotButton", nullptr, (EPropertyFlags)0x0144000000090009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCPP_MainWidget, TakeScreenshotButton), Z_Construct_UClass_UCPP_SelectableButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TakeScreenshotButton_MetaData), NewProp_TakeScreenshotButton_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCPP_MainWidget_Statics::NewProp_ExitButton = { "ExitButton", nullptr, (EPropertyFlags)0x0144000000090009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCPP_MainWidget, ExitButton), Z_Construct_UClass_UCPP_SelectableButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExitButton_MetaData), NewProp_ExitButton_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCPP_MainWidget_Statics::NewProp_CloseInfoButton = { "CloseInfoButton", nullptr, (EPropertyFlags)0x0144000000090009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCPP_MainWidget, CloseInfoButton), Z_Construct_UClass_UCPP_SelectableButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CloseInfoButton_MetaData), NewProp_CloseInfoButton_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCPP_MainWidget_Statics::NewProp_ShowInfoButton = { "ShowInfoButton", nullptr, (EPropertyFlags)0x0144000000090009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCPP_MainWidget, ShowInfoButton), Z_Construct_UClass_UCPP_SelectableButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShowInfoButton_MetaData), NewProp_ShowInfoButton_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCPP_MainWidget_Statics::NewProp_InfoVerticalBox = { "InfoVerticalBox", nullptr, (EPropertyFlags)0x0144000000090009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCPP_MainWidget, InfoVerticalBox), Z_Construct_UClass_UVerticalBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InfoVerticalBox_MetaData), NewProp_InfoVerticalBox_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCPP_MainWidget_Statics::NewProp_GameMode = { "GameMode", nullptr, (EPropertyFlags)0x0144000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCPP_MainWidget, GameMode), Z_Construct_UClass_ACPP_ConfiguratorGameMode_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameMode_MetaData), NewProp_GameMode_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCPP_MainWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCPP_MainWidget_Statics::NewProp_AppNameTextBlock,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCPP_MainWidget_Statics::NewProp_MainWidgetSwitcher,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCPP_MainWidget_Statics::NewProp_ActorConfigurationPanel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCPP_MainWidget_Statics::NewProp_ActorSpawningPanel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCPP_MainWidget_Statics::NewProp_PanelsWidgetSwitcher,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCPP_MainWidget_Statics::NewProp_ActorConfigurationButton,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCPP_MainWidget_Statics::NewProp_ActorSpawningButton,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCPP_MainWidget_Statics::NewProp_FirstPersonModeButton,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCPP_MainWidget_Statics::NewProp_FlyingModeButton,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCPP_MainWidget_Statics::NewProp_HideUIButton,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCPP_MainWidget_Statics::NewProp_ShowUIButton,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCPP_MainWidget_Statics::NewProp_TakeScreenshotButton,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCPP_MainWidget_Statics::NewProp_ExitButton,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCPP_MainWidget_Statics::NewProp_CloseInfoButton,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCPP_MainWidget_Statics::NewProp_ShowInfoButton,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCPP_MainWidget_Statics::NewProp_InfoVerticalBox,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCPP_MainWidget_Statics::NewProp_GameMode,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCPP_MainWidget_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UCPP_MainWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_RAC_Lite,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCPP_MainWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCPP_MainWidget_Statics::ClassParams = {
	&UCPP_MainWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UCPP_MainWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UCPP_MainWidget_Statics::PropPointers),
	0,
	0x00B010A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCPP_MainWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UCPP_MainWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCPP_MainWidget()
{
	if (!Z_Registration_Info_UClass_UCPP_MainWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCPP_MainWidget.OuterSingleton, Z_Construct_UClass_UCPP_MainWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCPP_MainWidget.OuterSingleton;
}
UCPP_MainWidget::UCPP_MainWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCPP_MainWidget);
UCPP_MainWidget::~UCPP_MainWidget() {}
// ********** End Class UCPP_MainWidget ************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RAC_Lite_Source_RAC_Lite_Public_UserInterface_CPP_MainWidget_h__Script_RAC_Lite_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCPP_MainWidget, UCPP_MainWidget::StaticClass, TEXT("UCPP_MainWidget"), &Z_Registration_Info_UClass_UCPP_MainWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCPP_MainWidget), 3354666386U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RAC_Lite_Source_RAC_Lite_Public_UserInterface_CPP_MainWidget_h__Script_RAC_Lite_3928629663(TEXT("/Script/RAC_Lite"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RAC_Lite_Source_RAC_Lite_Public_UserInterface_CPP_MainWidget_h__Script_RAC_Lite_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RAC_Lite_Source_RAC_Lite_Public_UserInterface_CPP_MainWidget_h__Script_RAC_Lite_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
