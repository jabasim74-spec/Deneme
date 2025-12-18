// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Core/CPP_ConfiguratorPlayerController.h"
#include "InputActionValue.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeCPP_ConfiguratorPlayerController() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_APlayerController();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UEnhancedInputComponent_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
ENHANCEDINPUT_API UScriptStruct* Z_Construct_UScriptStruct_FInputActionValue();
RAC_LITE_API UClass* Z_Construct_UClass_ACPP_ConfiguratorGameMode_NoRegister();
RAC_LITE_API UClass* Z_Construct_UClass_ACPP_ConfiguratorPlayerController();
RAC_LITE_API UClass* Z_Construct_UClass_ACPP_ConfiguratorPlayerController_NoRegister();
UPackage* Z_Construct_UPackage__Script_RAC_Lite();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ACPP_ConfiguratorPlayerController Function CameraRotationPressed *********
struct Z_Construct_UFunction_ACPP_ConfiguratorPlayerController_CameraRotationPressed_Statics
{
	struct CPP_ConfiguratorPlayerController_eventCameraRotationPressed_Parms
	{
		FInputActionValue _value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Core/CPP_ConfiguratorPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp__value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ACPP_ConfiguratorPlayerController_CameraRotationPressed_Statics::NewProp__value = { "_value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CPP_ConfiguratorPlayerController_eventCameraRotationPressed_Parms, _value), Z_Construct_UScriptStruct_FInputActionValue, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__value_MetaData), NewProp__value_MetaData) }; // 203218767
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACPP_ConfiguratorPlayerController_CameraRotationPressed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACPP_ConfiguratorPlayerController_CameraRotationPressed_Statics::NewProp__value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACPP_ConfiguratorPlayerController_CameraRotationPressed_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACPP_ConfiguratorPlayerController_CameraRotationPressed_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACPP_ConfiguratorPlayerController, nullptr, "CameraRotationPressed", Z_Construct_UFunction_ACPP_ConfiguratorPlayerController_CameraRotationPressed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACPP_ConfiguratorPlayerController_CameraRotationPressed_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACPP_ConfiguratorPlayerController_CameraRotationPressed_Statics::CPP_ConfiguratorPlayerController_eventCameraRotationPressed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACPP_ConfiguratorPlayerController_CameraRotationPressed_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACPP_ConfiguratorPlayerController_CameraRotationPressed_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ACPP_ConfiguratorPlayerController_CameraRotationPressed_Statics::CPP_ConfiguratorPlayerController_eventCameraRotationPressed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACPP_ConfiguratorPlayerController_CameraRotationPressed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACPP_ConfiguratorPlayerController_CameraRotationPressed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACPP_ConfiguratorPlayerController::execCameraRotationPressed)
{
	P_GET_STRUCT_REF(FInputActionValue,Z_Param_Out__value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CameraRotationPressed(Z_Param_Out__value);
	P_NATIVE_END;
}
// ********** End Class ACPP_ConfiguratorPlayerController Function CameraRotationPressed ***********

// ********** Begin Class ACPP_ConfiguratorPlayerController Function CameraRotationReleased ********
struct Z_Construct_UFunction_ACPP_ConfiguratorPlayerController_CameraRotationReleased_Statics
{
	struct CPP_ConfiguratorPlayerController_eventCameraRotationReleased_Parms
	{
		FInputActionValue _value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Core/CPP_ConfiguratorPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp__value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ACPP_ConfiguratorPlayerController_CameraRotationReleased_Statics::NewProp__value = { "_value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CPP_ConfiguratorPlayerController_eventCameraRotationReleased_Parms, _value), Z_Construct_UScriptStruct_FInputActionValue, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__value_MetaData), NewProp__value_MetaData) }; // 203218767
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACPP_ConfiguratorPlayerController_CameraRotationReleased_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACPP_ConfiguratorPlayerController_CameraRotationReleased_Statics::NewProp__value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACPP_ConfiguratorPlayerController_CameraRotationReleased_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACPP_ConfiguratorPlayerController_CameraRotationReleased_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACPP_ConfiguratorPlayerController, nullptr, "CameraRotationReleased", Z_Construct_UFunction_ACPP_ConfiguratorPlayerController_CameraRotationReleased_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACPP_ConfiguratorPlayerController_CameraRotationReleased_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACPP_ConfiguratorPlayerController_CameraRotationReleased_Statics::CPP_ConfiguratorPlayerController_eventCameraRotationReleased_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACPP_ConfiguratorPlayerController_CameraRotationReleased_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACPP_ConfiguratorPlayerController_CameraRotationReleased_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ACPP_ConfiguratorPlayerController_CameraRotationReleased_Statics::CPP_ConfiguratorPlayerController_eventCameraRotationReleased_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACPP_ConfiguratorPlayerController_CameraRotationReleased()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACPP_ConfiguratorPlayerController_CameraRotationReleased_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACPP_ConfiguratorPlayerController::execCameraRotationReleased)
{
	P_GET_STRUCT_REF(FInputActionValue,Z_Param_Out__value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CameraRotationReleased(Z_Param_Out__value);
	P_NATIVE_END;
}
// ********** End Class ACPP_ConfiguratorPlayerController Function CameraRotationReleased **********

// ********** Begin Class ACPP_ConfiguratorPlayerController Function FBMovement ********************
struct Z_Construct_UFunction_ACPP_ConfiguratorPlayerController_FBMovement_Statics
{
	struct CPP_ConfiguratorPlayerController_eventFBMovement_Parms
	{
		FInputActionValue _value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Core/CPP_ConfiguratorPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp__value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ACPP_ConfiguratorPlayerController_FBMovement_Statics::NewProp__value = { "_value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CPP_ConfiguratorPlayerController_eventFBMovement_Parms, _value), Z_Construct_UScriptStruct_FInputActionValue, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__value_MetaData), NewProp__value_MetaData) }; // 203218767
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACPP_ConfiguratorPlayerController_FBMovement_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACPP_ConfiguratorPlayerController_FBMovement_Statics::NewProp__value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACPP_ConfiguratorPlayerController_FBMovement_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACPP_ConfiguratorPlayerController_FBMovement_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACPP_ConfiguratorPlayerController, nullptr, "FBMovement", Z_Construct_UFunction_ACPP_ConfiguratorPlayerController_FBMovement_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACPP_ConfiguratorPlayerController_FBMovement_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACPP_ConfiguratorPlayerController_FBMovement_Statics::CPP_ConfiguratorPlayerController_eventFBMovement_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACPP_ConfiguratorPlayerController_FBMovement_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACPP_ConfiguratorPlayerController_FBMovement_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ACPP_ConfiguratorPlayerController_FBMovement_Statics::CPP_ConfiguratorPlayerController_eventFBMovement_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACPP_ConfiguratorPlayerController_FBMovement()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACPP_ConfiguratorPlayerController_FBMovement_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACPP_ConfiguratorPlayerController::execFBMovement)
{
	P_GET_STRUCT_REF(FInputActionValue,Z_Param_Out__value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->FBMovement(Z_Param_Out__value);
	P_NATIVE_END;
}
// ********** End Class ACPP_ConfiguratorPlayerController Function FBMovement **********************

// ********** Begin Class ACPP_ConfiguratorPlayerController Function LRLook ************************
struct Z_Construct_UFunction_ACPP_ConfiguratorPlayerController_LRLook_Statics
{
	struct CPP_ConfiguratorPlayerController_eventLRLook_Parms
	{
		FInputActionValue _value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Core/CPP_ConfiguratorPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp__value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ACPP_ConfiguratorPlayerController_LRLook_Statics::NewProp__value = { "_value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CPP_ConfiguratorPlayerController_eventLRLook_Parms, _value), Z_Construct_UScriptStruct_FInputActionValue, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__value_MetaData), NewProp__value_MetaData) }; // 203218767
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACPP_ConfiguratorPlayerController_LRLook_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACPP_ConfiguratorPlayerController_LRLook_Statics::NewProp__value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACPP_ConfiguratorPlayerController_LRLook_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACPP_ConfiguratorPlayerController_LRLook_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACPP_ConfiguratorPlayerController, nullptr, "LRLook", Z_Construct_UFunction_ACPP_ConfiguratorPlayerController_LRLook_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACPP_ConfiguratorPlayerController_LRLook_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACPP_ConfiguratorPlayerController_LRLook_Statics::CPP_ConfiguratorPlayerController_eventLRLook_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACPP_ConfiguratorPlayerController_LRLook_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACPP_ConfiguratorPlayerController_LRLook_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ACPP_ConfiguratorPlayerController_LRLook_Statics::CPP_ConfiguratorPlayerController_eventLRLook_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACPP_ConfiguratorPlayerController_LRLook()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACPP_ConfiguratorPlayerController_LRLook_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACPP_ConfiguratorPlayerController::execLRLook)
{
	P_GET_STRUCT_REF(FInputActionValue,Z_Param_Out__value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->LRLook(Z_Param_Out__value);
	P_NATIVE_END;
}
// ********** End Class ACPP_ConfiguratorPlayerController Function LRLook **************************

// ********** Begin Class ACPP_ConfiguratorPlayerController Function LRMovement ********************
struct Z_Construct_UFunction_ACPP_ConfiguratorPlayerController_LRMovement_Statics
{
	struct CPP_ConfiguratorPlayerController_eventLRMovement_Parms
	{
		FInputActionValue _value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Core/CPP_ConfiguratorPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp__value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ACPP_ConfiguratorPlayerController_LRMovement_Statics::NewProp__value = { "_value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CPP_ConfiguratorPlayerController_eventLRMovement_Parms, _value), Z_Construct_UScriptStruct_FInputActionValue, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__value_MetaData), NewProp__value_MetaData) }; // 203218767
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACPP_ConfiguratorPlayerController_LRMovement_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACPP_ConfiguratorPlayerController_LRMovement_Statics::NewProp__value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACPP_ConfiguratorPlayerController_LRMovement_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACPP_ConfiguratorPlayerController_LRMovement_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACPP_ConfiguratorPlayerController, nullptr, "LRMovement", Z_Construct_UFunction_ACPP_ConfiguratorPlayerController_LRMovement_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACPP_ConfiguratorPlayerController_LRMovement_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACPP_ConfiguratorPlayerController_LRMovement_Statics::CPP_ConfiguratorPlayerController_eventLRMovement_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACPP_ConfiguratorPlayerController_LRMovement_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACPP_ConfiguratorPlayerController_LRMovement_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ACPP_ConfiguratorPlayerController_LRMovement_Statics::CPP_ConfiguratorPlayerController_eventLRMovement_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACPP_ConfiguratorPlayerController_LRMovement()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACPP_ConfiguratorPlayerController_LRMovement_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACPP_ConfiguratorPlayerController::execLRMovement)
{
	P_GET_STRUCT_REF(FInputActionValue,Z_Param_Out__value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->LRMovement(Z_Param_Out__value);
	P_NATIVE_END;
}
// ********** End Class ACPP_ConfiguratorPlayerController Function LRMovement **********************

// ********** Begin Class ACPP_ConfiguratorPlayerController Function SelectionPressed **************
struct Z_Construct_UFunction_ACPP_ConfiguratorPlayerController_SelectionPressed_Statics
{
	struct CPP_ConfiguratorPlayerController_eventSelectionPressed_Parms
	{
		FInputActionValue _value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Core/CPP_ConfiguratorPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp__value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ACPP_ConfiguratorPlayerController_SelectionPressed_Statics::NewProp__value = { "_value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CPP_ConfiguratorPlayerController_eventSelectionPressed_Parms, _value), Z_Construct_UScriptStruct_FInputActionValue, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__value_MetaData), NewProp__value_MetaData) }; // 203218767
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACPP_ConfiguratorPlayerController_SelectionPressed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACPP_ConfiguratorPlayerController_SelectionPressed_Statics::NewProp__value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACPP_ConfiguratorPlayerController_SelectionPressed_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACPP_ConfiguratorPlayerController_SelectionPressed_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACPP_ConfiguratorPlayerController, nullptr, "SelectionPressed", Z_Construct_UFunction_ACPP_ConfiguratorPlayerController_SelectionPressed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACPP_ConfiguratorPlayerController_SelectionPressed_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACPP_ConfiguratorPlayerController_SelectionPressed_Statics::CPP_ConfiguratorPlayerController_eventSelectionPressed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACPP_ConfiguratorPlayerController_SelectionPressed_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACPP_ConfiguratorPlayerController_SelectionPressed_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ACPP_ConfiguratorPlayerController_SelectionPressed_Statics::CPP_ConfiguratorPlayerController_eventSelectionPressed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACPP_ConfiguratorPlayerController_SelectionPressed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACPP_ConfiguratorPlayerController_SelectionPressed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACPP_ConfiguratorPlayerController::execSelectionPressed)
{
	P_GET_STRUCT_REF(FInputActionValue,Z_Param_Out__value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SelectionPressed(Z_Param_Out__value);
	P_NATIVE_END;
}
// ********** End Class ACPP_ConfiguratorPlayerController Function SelectionPressed ****************

// ********** Begin Class ACPP_ConfiguratorPlayerController Function UDLook ************************
struct Z_Construct_UFunction_ACPP_ConfiguratorPlayerController_UDLook_Statics
{
	struct CPP_ConfiguratorPlayerController_eventUDLook_Parms
	{
		FInputActionValue _value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Core/CPP_ConfiguratorPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp__value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ACPP_ConfiguratorPlayerController_UDLook_Statics::NewProp__value = { "_value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CPP_ConfiguratorPlayerController_eventUDLook_Parms, _value), Z_Construct_UScriptStruct_FInputActionValue, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__value_MetaData), NewProp__value_MetaData) }; // 203218767
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACPP_ConfiguratorPlayerController_UDLook_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACPP_ConfiguratorPlayerController_UDLook_Statics::NewProp__value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACPP_ConfiguratorPlayerController_UDLook_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACPP_ConfiguratorPlayerController_UDLook_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACPP_ConfiguratorPlayerController, nullptr, "UDLook", Z_Construct_UFunction_ACPP_ConfiguratorPlayerController_UDLook_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACPP_ConfiguratorPlayerController_UDLook_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACPP_ConfiguratorPlayerController_UDLook_Statics::CPP_ConfiguratorPlayerController_eventUDLook_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACPP_ConfiguratorPlayerController_UDLook_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACPP_ConfiguratorPlayerController_UDLook_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ACPP_ConfiguratorPlayerController_UDLook_Statics::CPP_ConfiguratorPlayerController_eventUDLook_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACPP_ConfiguratorPlayerController_UDLook()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACPP_ConfiguratorPlayerController_UDLook_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACPP_ConfiguratorPlayerController::execUDLook)
{
	P_GET_STRUCT_REF(FInputActionValue,Z_Param_Out__value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UDLook(Z_Param_Out__value);
	P_NATIVE_END;
}
// ********** End Class ACPP_ConfiguratorPlayerController Function UDLook **************************

// ********** Begin Class ACPP_ConfiguratorPlayerController ****************************************
void ACPP_ConfiguratorPlayerController::StaticRegisterNativesACPP_ConfiguratorPlayerController()
{
	UClass* Class = ACPP_ConfiguratorPlayerController::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CameraRotationPressed", &ACPP_ConfiguratorPlayerController::execCameraRotationPressed },
		{ "CameraRotationReleased", &ACPP_ConfiguratorPlayerController::execCameraRotationReleased },
		{ "FBMovement", &ACPP_ConfiguratorPlayerController::execFBMovement },
		{ "LRLook", &ACPP_ConfiguratorPlayerController::execLRLook },
		{ "LRMovement", &ACPP_ConfiguratorPlayerController::execLRMovement },
		{ "SelectionPressed", &ACPP_ConfiguratorPlayerController::execSelectionPressed },
		{ "UDLook", &ACPP_ConfiguratorPlayerController::execUDLook },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_ACPP_ConfiguratorPlayerController;
UClass* ACPP_ConfiguratorPlayerController::GetPrivateStaticClass()
{
	using TClass = ACPP_ConfiguratorPlayerController;
	if (!Z_Registration_Info_UClass_ACPP_ConfiguratorPlayerController.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("CPP_ConfiguratorPlayerController"),
			Z_Registration_Info_UClass_ACPP_ConfiguratorPlayerController.InnerSingleton,
			StaticRegisterNativesACPP_ConfiguratorPlayerController,
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
	return Z_Registration_Info_UClass_ACPP_ConfiguratorPlayerController.InnerSingleton;
}
UClass* Z_Construct_UClass_ACPP_ConfiguratorPlayerController_NoRegister()
{
	return ACPP_ConfiguratorPlayerController::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ACPP_ConfiguratorPlayerController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "Core/CPP_ConfiguratorPlayerController.h" },
		{ "ModuleRelativePath", "Public/Core/CPP_ConfiguratorPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputMapping_MetaData[] = {
		{ "ModuleRelativePath", "Public/Core/CPP_ConfiguratorPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FBMovementAction_MetaData[] = {
		{ "ModuleRelativePath", "Public/Core/CPP_ConfiguratorPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LRMovementAction_MetaData[] = {
		{ "ModuleRelativePath", "Public/Core/CPP_ConfiguratorPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UDLookAction_MetaData[] = {
		{ "ModuleRelativePath", "Public/Core/CPP_ConfiguratorPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LRLookAction_MetaData[] = {
		{ "ModuleRelativePath", "Public/Core/CPP_ConfiguratorPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SelectionAction_MetaData[] = {
		{ "ModuleRelativePath", "Public/Core/CPP_ConfiguratorPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraRotationAction_MetaData[] = {
		{ "ModuleRelativePath", "Public/Core/CPP_ConfiguratorPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameMode_MetaData[] = {
		{ "ModuleRelativePath", "Public/Core/CPP_ConfiguratorPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnhancedInputComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Core/CPP_ConfiguratorPlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InputMapping;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FBMovementAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LRMovementAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_UDLookAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LRLookAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SelectionAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraRotationAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GameMode;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EnhancedInputComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ACPP_ConfiguratorPlayerController_CameraRotationPressed, "CameraRotationPressed" }, // 4151577513
		{ &Z_Construct_UFunction_ACPP_ConfiguratorPlayerController_CameraRotationReleased, "CameraRotationReleased" }, // 1113335277
		{ &Z_Construct_UFunction_ACPP_ConfiguratorPlayerController_FBMovement, "FBMovement" }, // 1639162335
		{ &Z_Construct_UFunction_ACPP_ConfiguratorPlayerController_LRLook, "LRLook" }, // 3256172298
		{ &Z_Construct_UFunction_ACPP_ConfiguratorPlayerController_LRMovement, "LRMovement" }, // 760838938
		{ &Z_Construct_UFunction_ACPP_ConfiguratorPlayerController_SelectionPressed, "SelectionPressed" }, // 2537182626
		{ &Z_Construct_UFunction_ACPP_ConfiguratorPlayerController_UDLook, "UDLook" }, // 4074906450
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACPP_ConfiguratorPlayerController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACPP_ConfiguratorPlayerController_Statics::NewProp_InputMapping = { "InputMapping", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACPP_ConfiguratorPlayerController, InputMapping), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputMapping_MetaData), NewProp_InputMapping_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACPP_ConfiguratorPlayerController_Statics::NewProp_FBMovementAction = { "FBMovementAction", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACPP_ConfiguratorPlayerController, FBMovementAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FBMovementAction_MetaData), NewProp_FBMovementAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACPP_ConfiguratorPlayerController_Statics::NewProp_LRMovementAction = { "LRMovementAction", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACPP_ConfiguratorPlayerController, LRMovementAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LRMovementAction_MetaData), NewProp_LRMovementAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACPP_ConfiguratorPlayerController_Statics::NewProp_UDLookAction = { "UDLookAction", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACPP_ConfiguratorPlayerController, UDLookAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UDLookAction_MetaData), NewProp_UDLookAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACPP_ConfiguratorPlayerController_Statics::NewProp_LRLookAction = { "LRLookAction", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACPP_ConfiguratorPlayerController, LRLookAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LRLookAction_MetaData), NewProp_LRLookAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACPP_ConfiguratorPlayerController_Statics::NewProp_SelectionAction = { "SelectionAction", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACPP_ConfiguratorPlayerController, SelectionAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelectionAction_MetaData), NewProp_SelectionAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACPP_ConfiguratorPlayerController_Statics::NewProp_CameraRotationAction = { "CameraRotationAction", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACPP_ConfiguratorPlayerController, CameraRotationAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraRotationAction_MetaData), NewProp_CameraRotationAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACPP_ConfiguratorPlayerController_Statics::NewProp_GameMode = { "GameMode", nullptr, (EPropertyFlags)0x0144000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACPP_ConfiguratorPlayerController, GameMode), Z_Construct_UClass_ACPP_ConfiguratorGameMode_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameMode_MetaData), NewProp_GameMode_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACPP_ConfiguratorPlayerController_Statics::NewProp_EnhancedInputComponent = { "EnhancedInputComponent", nullptr, (EPropertyFlags)0x0144000000082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACPP_ConfiguratorPlayerController, EnhancedInputComponent), Z_Construct_UClass_UEnhancedInputComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnhancedInputComponent_MetaData), NewProp_EnhancedInputComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACPP_ConfiguratorPlayerController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_ConfiguratorPlayerController_Statics::NewProp_InputMapping,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_ConfiguratorPlayerController_Statics::NewProp_FBMovementAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_ConfiguratorPlayerController_Statics::NewProp_LRMovementAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_ConfiguratorPlayerController_Statics::NewProp_UDLookAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_ConfiguratorPlayerController_Statics::NewProp_LRLookAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_ConfiguratorPlayerController_Statics::NewProp_SelectionAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_ConfiguratorPlayerController_Statics::NewProp_CameraRotationAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_ConfiguratorPlayerController_Statics::NewProp_GameMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_ConfiguratorPlayerController_Statics::NewProp_EnhancedInputComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_ConfiguratorPlayerController_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ACPP_ConfiguratorPlayerController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerController,
	(UObject* (*)())Z_Construct_UPackage__Script_RAC_Lite,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_ConfiguratorPlayerController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ACPP_ConfiguratorPlayerController_Statics::ClassParams = {
	&ACPP_ConfiguratorPlayerController::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ACPP_ConfiguratorPlayerController_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_ConfiguratorPlayerController_Statics::PropPointers),
	0,
	0x009003A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_ConfiguratorPlayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_ACPP_ConfiguratorPlayerController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ACPP_ConfiguratorPlayerController()
{
	if (!Z_Registration_Info_UClass_ACPP_ConfiguratorPlayerController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACPP_ConfiguratorPlayerController.OuterSingleton, Z_Construct_UClass_ACPP_ConfiguratorPlayerController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ACPP_ConfiguratorPlayerController.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ACPP_ConfiguratorPlayerController);
ACPP_ConfiguratorPlayerController::~ACPP_ConfiguratorPlayerController() {}
// ********** End Class ACPP_ConfiguratorPlayerController ******************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_asasi_Documents_GitHub_Deneme_Plugins_Realtime822b12800f6dV3_Source_RAC_Lite_Public_Core_CPP_ConfiguratorPlayerController_h__Script_RAC_Lite_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACPP_ConfiguratorPlayerController, ACPP_ConfiguratorPlayerController::StaticClass, TEXT("ACPP_ConfiguratorPlayerController"), &Z_Registration_Info_UClass_ACPP_ConfiguratorPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACPP_ConfiguratorPlayerController), 1385420505U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_asasi_Documents_GitHub_Deneme_Plugins_Realtime822b12800f6dV3_Source_RAC_Lite_Public_Core_CPP_ConfiguratorPlayerController_h__Script_RAC_Lite_2295680686(TEXT("/Script/RAC_Lite"),
	Z_CompiledInDeferFile_FID_Users_asasi_Documents_GitHub_Deneme_Plugins_Realtime822b12800f6dV3_Source_RAC_Lite_Public_Core_CPP_ConfiguratorPlayerController_h__Script_RAC_Lite_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_asasi_Documents_GitHub_Deneme_Plugins_Realtime822b12800f6dV3_Source_RAC_Lite_Public_Core_CPP_ConfiguratorPlayerController_h__Script_RAC_Lite_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
