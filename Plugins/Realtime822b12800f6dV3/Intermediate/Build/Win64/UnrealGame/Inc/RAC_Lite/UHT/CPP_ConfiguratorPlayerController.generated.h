// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Core/CPP_ConfiguratorPlayerController.h"

#ifdef RAC_LITE_CPP_ConfiguratorPlayerController_generated_h
#error "CPP_ConfiguratorPlayerController.generated.h already included, missing '#pragma once' in CPP_ConfiguratorPlayerController.h"
#endif
#define RAC_LITE_CPP_ConfiguratorPlayerController_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

struct FInputActionValue;

// ********** Begin Class ACPP_ConfiguratorPlayerController ****************************************
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RAC_Lite_Source_RAC_Lite_Public_Core_CPP_ConfiguratorPlayerController_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execCameraRotationReleased); \
	DECLARE_FUNCTION(execCameraRotationPressed); \
	DECLARE_FUNCTION(execSelectionPressed); \
	DECLARE_FUNCTION(execLRLook); \
	DECLARE_FUNCTION(execUDLook); \
	DECLARE_FUNCTION(execFBMovement); \
	DECLARE_FUNCTION(execLRMovement);


RAC_LITE_API UClass* Z_Construct_UClass_ACPP_ConfiguratorPlayerController_NoRegister();

#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RAC_Lite_Source_RAC_Lite_Public_Core_CPP_ConfiguratorPlayerController_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACPP_ConfiguratorPlayerController(); \
	friend struct Z_Construct_UClass_ACPP_ConfiguratorPlayerController_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend RAC_LITE_API UClass* Z_Construct_UClass_ACPP_ConfiguratorPlayerController_NoRegister(); \
public: \
	DECLARE_CLASS2(ACPP_ConfiguratorPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RAC_Lite"), Z_Construct_UClass_ACPP_ConfiguratorPlayerController_NoRegister) \
	DECLARE_SERIALIZER(ACPP_ConfiguratorPlayerController)


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RAC_Lite_Source_RAC_Lite_Public_Core_CPP_ConfiguratorPlayerController_h_20_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ACPP_ConfiguratorPlayerController(ACPP_ConfiguratorPlayerController&&) = delete; \
	ACPP_ConfiguratorPlayerController(const ACPP_ConfiguratorPlayerController&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACPP_ConfiguratorPlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACPP_ConfiguratorPlayerController); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACPP_ConfiguratorPlayerController) \
	NO_API virtual ~ACPP_ConfiguratorPlayerController();


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RAC_Lite_Source_RAC_Lite_Public_Core_CPP_ConfiguratorPlayerController_h_17_PROLOG
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RAC_Lite_Source_RAC_Lite_Public_Core_CPP_ConfiguratorPlayerController_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RAC_Lite_Source_RAC_Lite_Public_Core_CPP_ConfiguratorPlayerController_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RAC_Lite_Source_RAC_Lite_Public_Core_CPP_ConfiguratorPlayerController_h_20_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RAC_Lite_Source_RAC_Lite_Public_Core_CPP_ConfiguratorPlayerController_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ACPP_ConfiguratorPlayerController;

// ********** End Class ACPP_ConfiguratorPlayerController ******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RAC_Lite_Source_RAC_Lite_Public_Core_CPP_ConfiguratorPlayerController_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
