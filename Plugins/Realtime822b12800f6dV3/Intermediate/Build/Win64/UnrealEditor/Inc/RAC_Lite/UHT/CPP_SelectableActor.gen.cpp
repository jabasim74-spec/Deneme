// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Actors/CPP_SelectableActor.h"
#include "Engine/HitResult.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeCPP_SelectableActor() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
RAC_LITE_API UClass* Z_Construct_UClass_ACPP_ConfiguratorGameMode_NoRegister();
RAC_LITE_API UClass* Z_Construct_UClass_ACPP_SelectableActor();
RAC_LITE_API UClass* Z_Construct_UClass_ACPP_SelectableActor_NoRegister();
RAC_LITE_API UClass* Z_Construct_UClass_UCPP_ClickInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_RAC_Lite();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ACPP_SelectableActor Function Click_Implementation ***********************
struct Z_Construct_UFunction_ACPP_SelectableActor_Click_Implementation_Statics
{
	struct CPP_SelectableActor_eventClick_Implementation_Parms
	{
		FHitResult _hitResult;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Actors/CPP_SelectableActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__hitResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp__hitResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ACPP_SelectableActor_Click_Implementation_Statics::NewProp__hitResult = { "_hitResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CPP_SelectableActor_eventClick_Implementation_Parms, _hitResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__hitResult_MetaData), NewProp__hitResult_MetaData) }; // 267591329
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACPP_SelectableActor_Click_Implementation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACPP_SelectableActor_Click_Implementation_Statics::NewProp__hitResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACPP_SelectableActor_Click_Implementation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACPP_SelectableActor_Click_Implementation_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACPP_SelectableActor, nullptr, "Click_Implementation", Z_Construct_UFunction_ACPP_SelectableActor_Click_Implementation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACPP_SelectableActor_Click_Implementation_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACPP_SelectableActor_Click_Implementation_Statics::CPP_SelectableActor_eventClick_Implementation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACPP_SelectableActor_Click_Implementation_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACPP_SelectableActor_Click_Implementation_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ACPP_SelectableActor_Click_Implementation_Statics::CPP_SelectableActor_eventClick_Implementation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACPP_SelectableActor_Click_Implementation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACPP_SelectableActor_Click_Implementation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACPP_SelectableActor::execClick_Implementation)
{
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out__hitResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Click_Implementation(Z_Param_Out__hitResult);
	P_NATIVE_END;
}
// ********** End Class ACPP_SelectableActor Function Click_Implementation *************************

// ********** Begin Class ACPP_SelectableActor *****************************************************
void ACPP_SelectableActor::StaticRegisterNativesACPP_SelectableActor()
{
	UClass* Class = ACPP_SelectableActor::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Click_Implementation", &ACPP_SelectableActor::execClick_Implementation },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_ACPP_SelectableActor;
UClass* ACPP_SelectableActor::GetPrivateStaticClass()
{
	using TClass = ACPP_SelectableActor;
	if (!Z_Registration_Info_UClass_ACPP_SelectableActor.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("CPP_SelectableActor"),
			Z_Registration_Info_UClass_ACPP_SelectableActor.InnerSingleton,
			StaticRegisterNativesACPP_SelectableActor,
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
	return Z_Registration_Info_UClass_ACPP_SelectableActor.InnerSingleton;
}
UClass* Z_Construct_UClass_ACPP_SelectableActor_NoRegister()
{
	return ACPP_SelectableActor::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ACPP_SelectableActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Replication Collision Actor Input HLOD Physics LevelInstance Cooking WorldPartition DataLayers Rendering Tick Events Networking" },
		{ "IncludePath", "Actors/CPP_SelectableActor.h" },
		{ "ModuleRelativePath", "Public/Actors/CPP_SelectableActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ComponentsToOutline_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Actors/CPP_SelectableActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameMode_MetaData[] = {
		{ "ModuleRelativePath", "Public/Actors/CPP_SelectableActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ComponentsToOutline_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ComponentsToOutline;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GameMode;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ACPP_SelectableActor_Click_Implementation, "Click_Implementation" }, // 3839649834
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACPP_SelectableActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACPP_SelectableActor_Statics::NewProp_ComponentsToOutline_Inner = { "ComponentsToOutline", nullptr, (EPropertyFlags)0x0104000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ACPP_SelectableActor_Statics::NewProp_ComponentsToOutline = { "ComponentsToOutline", nullptr, (EPropertyFlags)0x0144008000002008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACPP_SelectableActor, ComponentsToOutline), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ComponentsToOutline_MetaData), NewProp_ComponentsToOutline_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACPP_SelectableActor_Statics::NewProp_GameMode = { "GameMode", nullptr, (EPropertyFlags)0x0144000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACPP_SelectableActor, GameMode), Z_Construct_UClass_ACPP_ConfiguratorGameMode_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameMode_MetaData), NewProp_GameMode_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACPP_SelectableActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_SelectableActor_Statics::NewProp_ComponentsToOutline_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_SelectableActor_Statics::NewProp_ComponentsToOutline,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_SelectableActor_Statics::NewProp_GameMode,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_SelectableActor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ACPP_SelectableActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_RAC_Lite,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_SelectableActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ACPP_SelectableActor_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UCPP_ClickInterface_NoRegister, (int32)VTABLE_OFFSET(ACPP_SelectableActor, ICPP_ClickInterface), false },  // 3341844387
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_ACPP_SelectableActor_Statics::ClassParams = {
	&ACPP_SelectableActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ACPP_SelectableActor_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_SelectableActor_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009001A5u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_SelectableActor_Statics::Class_MetaDataParams), Z_Construct_UClass_ACPP_SelectableActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ACPP_SelectableActor()
{
	if (!Z_Registration_Info_UClass_ACPP_SelectableActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACPP_SelectableActor.OuterSingleton, Z_Construct_UClass_ACPP_SelectableActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ACPP_SelectableActor.OuterSingleton;
}
ACPP_SelectableActor::ACPP_SelectableActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ACPP_SelectableActor);
ACPP_SelectableActor::~ACPP_SelectableActor() {}
// ********** End Class ACPP_SelectableActor *******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_asasi_Documents_GitHub_Deneme_Plugins_Realtime822b12800f6dV3_Source_RAC_Lite_Public_Actors_CPP_SelectableActor_h__Script_RAC_Lite_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACPP_SelectableActor, ACPP_SelectableActor::StaticClass, TEXT("ACPP_SelectableActor"), &Z_Registration_Info_UClass_ACPP_SelectableActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACPP_SelectableActor), 653313741U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_asasi_Documents_GitHub_Deneme_Plugins_Realtime822b12800f6dV3_Source_RAC_Lite_Public_Actors_CPP_SelectableActor_h__Script_RAC_Lite_4178514693(TEXT("/Script/RAC_Lite"),
	Z_CompiledInDeferFile_FID_Users_asasi_Documents_GitHub_Deneme_Plugins_Realtime822b12800f6dV3_Source_RAC_Lite_Public_Actors_CPP_SelectableActor_h__Script_RAC_Lite_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_asasi_Documents_GitHub_Deneme_Plugins_Realtime822b12800f6dV3_Source_RAC_Lite_Public_Actors_CPP_SelectableActor_h__Script_RAC_Lite_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
