// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Core/CPP_ClickInterface.h"
#include "Engine/HitResult.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeCPP_ClickInterface() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
RAC_LITE_API UClass* Z_Construct_UClass_UCPP_ClickInterface();
RAC_LITE_API UClass* Z_Construct_UClass_UCPP_ClickInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_RAC_Lite();
// ********** End Cross Module References **********************************************************

// ********** Begin Interface UCPP_ClickInterface Function Click ***********************************
struct CPP_ClickInterface_eventClick_Parms
{
	FHitResult HitResult;
};
void ICPP_ClickInterface::Click(FHitResult const& HitResult)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_Click instead.");
}
static FName NAME_UCPP_ClickInterface_Click = FName(TEXT("Click"));
void ICPP_ClickInterface::Execute_Click(UObject* O, FHitResult const& HitResult)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UCPP_ClickInterface::StaticClass()));
	CPP_ClickInterface_eventClick_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UCPP_ClickInterface_Click);
	if (Func)
	{
		Parms.HitResult=HitResult;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (ICPP_ClickInterface*)(O->GetNativeInterfaceAddress(UCPP_ClickInterface::StaticClass())))
	{
		I->Click_Implementation(HitResult);
	}
}
struct Z_Construct_UFunction_UCPP_ClickInterface_Click_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Click" },
		{ "ModuleRelativePath", "Public/Core/CPP_ClickInterface.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HitResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_HitResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCPP_ClickInterface_Click_Statics::NewProp_HitResult = { "HitResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CPP_ClickInterface_eventClick_Parms, HitResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HitResult_MetaData), NewProp_HitResult_MetaData) }; // 267591329
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCPP_ClickInterface_Click_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCPP_ClickInterface_Click_Statics::NewProp_HitResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCPP_ClickInterface_Click_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCPP_ClickInterface_Click_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCPP_ClickInterface, nullptr, "Click", Z_Construct_UFunction_UCPP_ClickInterface_Click_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCPP_ClickInterface_Click_Statics::PropPointers), sizeof(CPP_ClickInterface_eventClick_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCPP_ClickInterface_Click_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCPP_ClickInterface_Click_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(CPP_ClickInterface_eventClick_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCPP_ClickInterface_Click()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCPP_ClickInterface_Click_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ICPP_ClickInterface::execClick)
{
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_HitResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Click_Implementation(Z_Param_Out_HitResult);
	P_NATIVE_END;
}
// ********** End Interface UCPP_ClickInterface Function Click *************************************

// ********** Begin Interface UCPP_ClickInterface **************************************************
void UCPP_ClickInterface::StaticRegisterNativesUCPP_ClickInterface()
{
	UClass* Class = UCPP_ClickInterface::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Click", &ICPP_ClickInterface::execClick },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UCPP_ClickInterface;
UClass* UCPP_ClickInterface::GetPrivateStaticClass()
{
	using TClass = UCPP_ClickInterface;
	if (!Z_Registration_Info_UClass_UCPP_ClickInterface.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("CPP_ClickInterface"),
			Z_Registration_Info_UClass_UCPP_ClickInterface.InnerSingleton,
			StaticRegisterNativesUCPP_ClickInterface,
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
	return Z_Registration_Info_UClass_UCPP_ClickInterface.InnerSingleton;
}
UClass* Z_Construct_UClass_UCPP_ClickInterface_NoRegister()
{
	return UCPP_ClickInterface::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UCPP_ClickInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Core/CPP_ClickInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UCPP_ClickInterface_Click, "Click" }, // 2591085196
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ICPP_ClickInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UCPP_ClickInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_RAC_Lite,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCPP_ClickInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCPP_ClickInterface_Statics::ClassParams = {
	&UCPP_ClickInterface::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x000040A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCPP_ClickInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UCPP_ClickInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCPP_ClickInterface()
{
	if (!Z_Registration_Info_UClass_UCPP_ClickInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCPP_ClickInterface.OuterSingleton, Z_Construct_UClass_UCPP_ClickInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCPP_ClickInterface.OuterSingleton;
}
UCPP_ClickInterface::UCPP_ClickInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCPP_ClickInterface);
// ********** End Interface UCPP_ClickInterface ****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_asasi_Documents_GitHub_Deneme_Plugins_Realtime822b12800f6dV3_Source_RAC_Lite_Public_Core_CPP_ClickInterface_h__Script_RAC_Lite_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCPP_ClickInterface, UCPP_ClickInterface::StaticClass, TEXT("UCPP_ClickInterface"), &Z_Registration_Info_UClass_UCPP_ClickInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCPP_ClickInterface), 3341844387U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_asasi_Documents_GitHub_Deneme_Plugins_Realtime822b12800f6dV3_Source_RAC_Lite_Public_Core_CPP_ClickInterface_h__Script_RAC_Lite_1111613992(TEXT("/Script/RAC_Lite"),
	Z_CompiledInDeferFile_FID_Users_asasi_Documents_GitHub_Deneme_Plugins_Realtime822b12800f6dV3_Source_RAC_Lite_Public_Core_CPP_ClickInterface_h__Script_RAC_Lite_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_asasi_Documents_GitHub_Deneme_Plugins_Realtime822b12800f6dV3_Source_RAC_Lite_Public_Core_CPP_ClickInterface_h__Script_RAC_Lite_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
