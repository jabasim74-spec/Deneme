// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UserInterface/CPP_GizmoWidget.h"

#ifdef RAC_LITE_CPP_GizmoWidget_generated_h
#error "CPP_GizmoWidget.generated.h already included, missing '#pragma once' in CPP_GizmoWidget.h"
#endif
#define RAC_LITE_CPP_GizmoWidget_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UCPP_GizmoWidget *********************************************************
#define FID_Users_asasi_Documents_GitHub_Deneme_Plugins_Realtime822b12800f6dV3_Source_RAC_Lite_Public_UserInterface_CPP_GizmoWidget_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execMainButton_OnReleased); \
	DECLARE_FUNCTION(execMainButton_OnPressed);


RAC_LITE_API UClass* Z_Construct_UClass_UCPP_GizmoWidget_NoRegister();

#define FID_Users_asasi_Documents_GitHub_Deneme_Plugins_Realtime822b12800f6dV3_Source_RAC_Lite_Public_UserInterface_CPP_GizmoWidget_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCPP_GizmoWidget(); \
	friend struct Z_Construct_UClass_UCPP_GizmoWidget_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend RAC_LITE_API UClass* Z_Construct_UClass_UCPP_GizmoWidget_NoRegister(); \
public: \
	DECLARE_CLASS2(UCPP_GizmoWidget, UUserWidget, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/RAC_Lite"), Z_Construct_UClass_UCPP_GizmoWidget_NoRegister) \
	DECLARE_SERIALIZER(UCPP_GizmoWidget)


#define FID_Users_asasi_Documents_GitHub_Deneme_Plugins_Realtime822b12800f6dV3_Source_RAC_Lite_Public_UserInterface_CPP_GizmoWidget_h_28_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCPP_GizmoWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCPP_GizmoWidget(UCPP_GizmoWidget&&) = delete; \
	UCPP_GizmoWidget(const UCPP_GizmoWidget&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCPP_GizmoWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCPP_GizmoWidget); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCPP_GizmoWidget) \
	NO_API virtual ~UCPP_GizmoWidget();


#define FID_Users_asasi_Documents_GitHub_Deneme_Plugins_Realtime822b12800f6dV3_Source_RAC_Lite_Public_UserInterface_CPP_GizmoWidget_h_25_PROLOG
#define FID_Users_asasi_Documents_GitHub_Deneme_Plugins_Realtime822b12800f6dV3_Source_RAC_Lite_Public_UserInterface_CPP_GizmoWidget_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_asasi_Documents_GitHub_Deneme_Plugins_Realtime822b12800f6dV3_Source_RAC_Lite_Public_UserInterface_CPP_GizmoWidget_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_asasi_Documents_GitHub_Deneme_Plugins_Realtime822b12800f6dV3_Source_RAC_Lite_Public_UserInterface_CPP_GizmoWidget_h_28_INCLASS_NO_PURE_DECLS \
	FID_Users_asasi_Documents_GitHub_Deneme_Plugins_Realtime822b12800f6dV3_Source_RAC_Lite_Public_UserInterface_CPP_GizmoWidget_h_28_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCPP_GizmoWidget;

// ********** End Class UCPP_GizmoWidget ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_asasi_Documents_GitHub_Deneme_Plugins_Realtime822b12800f6dV3_Source_RAC_Lite_Public_UserInterface_CPP_GizmoWidget_h

// ********** Begin Enum EGizmoStatus **************************************************************
#define FOREACH_ENUM_EGIZMOSTATUS(op) \
	op(EGizmoStatus::None) \
	op(EGizmoStatus::Move) \
	op(EGizmoStatus::Rotation) 

enum class EGizmoStatus : uint8;
template<> struct TIsUEnumClass<EGizmoStatus> { enum { Value = true }; };
template<> RAC_LITE_API UEnum* StaticEnum<EGizmoStatus>();
// ********** End Enum EGizmoStatus ****************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
