// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Actors/CPP_SelectableActor.h"

#ifdef RAC_LITE_CPP_SelectableActor_generated_h
#error "CPP_SelectableActor.generated.h already included, missing '#pragma once' in CPP_SelectableActor.h"
#endif
#define RAC_LITE_CPP_SelectableActor_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

struct FHitResult;

// ********** Begin Class ACPP_SelectableActor *****************************************************
#define FID_Users_asasi_Documents_GitHub_Deneme_Plugins_Realtime822b12800f6dV3_Source_RAC_Lite_Public_Actors_CPP_SelectableActor_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execClick_Implementation);


RAC_LITE_API UClass* Z_Construct_UClass_ACPP_SelectableActor_NoRegister();

#define FID_Users_asasi_Documents_GitHub_Deneme_Plugins_Realtime822b12800f6dV3_Source_RAC_Lite_Public_Actors_CPP_SelectableActor_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACPP_SelectableActor(); \
	friend struct Z_Construct_UClass_ACPP_SelectableActor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend RAC_LITE_API UClass* Z_Construct_UClass_ACPP_SelectableActor_NoRegister(); \
public: \
	DECLARE_CLASS2(ACPP_SelectableActor, AActor, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/RAC_Lite"), Z_Construct_UClass_ACPP_SelectableActor_NoRegister) \
	DECLARE_SERIALIZER(ACPP_SelectableActor) \
	virtual UObject* _getUObject() const override { return const_cast<ACPP_SelectableActor*>(this); }


#define FID_Users_asasi_Documents_GitHub_Deneme_Plugins_Realtime822b12800f6dV3_Source_RAC_Lite_Public_Actors_CPP_SelectableActor_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACPP_SelectableActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ACPP_SelectableActor(ACPP_SelectableActor&&) = delete; \
	ACPP_SelectableActor(const ACPP_SelectableActor&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACPP_SelectableActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACPP_SelectableActor); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACPP_SelectableActor) \
	NO_API virtual ~ACPP_SelectableActor();


#define FID_Users_asasi_Documents_GitHub_Deneme_Plugins_Realtime822b12800f6dV3_Source_RAC_Lite_Public_Actors_CPP_SelectableActor_h_14_PROLOG
#define FID_Users_asasi_Documents_GitHub_Deneme_Plugins_Realtime822b12800f6dV3_Source_RAC_Lite_Public_Actors_CPP_SelectableActor_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_asasi_Documents_GitHub_Deneme_Plugins_Realtime822b12800f6dV3_Source_RAC_Lite_Public_Actors_CPP_SelectableActor_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_asasi_Documents_GitHub_Deneme_Plugins_Realtime822b12800f6dV3_Source_RAC_Lite_Public_Actors_CPP_SelectableActor_h_17_INCLASS_NO_PURE_DECLS \
	FID_Users_asasi_Documents_GitHub_Deneme_Plugins_Realtime822b12800f6dV3_Source_RAC_Lite_Public_Actors_CPP_SelectableActor_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ACPP_SelectableActor;

// ********** End Class ACPP_SelectableActor *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_asasi_Documents_GitHub_Deneme_Plugins_Realtime822b12800f6dV3_Source_RAC_Lite_Public_Actors_CPP_SelectableActor_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
