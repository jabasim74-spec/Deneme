// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UserInterface/CPP_MaterialButton.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeCPP_MaterialButton() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
RAC_LITE_API UClass* Z_Construct_UClass_ACPP_SelectableActor_NoRegister();
RAC_LITE_API UClass* Z_Construct_UClass_UCPP_MaterialButton();
RAC_LITE_API UClass* Z_Construct_UClass_UCPP_MaterialButton_NoRegister();
RAC_LITE_API UClass* Z_Construct_UClass_UCPP_ShadowedButton();
UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
UPackage* Z_Construct_UPackage__Script_RAC_Lite();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UCPP_MaterialButton Function SelectableActor_OnMaterialChanged ***********
struct Z_Construct_UFunction_UCPP_MaterialButton_SelectableActor_OnMaterialChanged_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UserInterface/CPP_MaterialButton.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCPP_MaterialButton_SelectableActor_OnMaterialChanged_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCPP_MaterialButton, nullptr, "SelectableActor_OnMaterialChanged", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCPP_MaterialButton_SelectableActor_OnMaterialChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCPP_MaterialButton_SelectableActor_OnMaterialChanged_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UCPP_MaterialButton_SelectableActor_OnMaterialChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCPP_MaterialButton_SelectableActor_OnMaterialChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCPP_MaterialButton::execSelectableActor_OnMaterialChanged)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SelectableActor_OnMaterialChanged();
	P_NATIVE_END;
}
// ********** End Class UCPP_MaterialButton Function SelectableActor_OnMaterialChanged *************

// ********** Begin Class UCPP_MaterialButton ******************************************************
void UCPP_MaterialButton::StaticRegisterNativesUCPP_MaterialButton()
{
	UClass* Class = UCPP_MaterialButton::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SelectableActor_OnMaterialChanged", &UCPP_MaterialButton::execSelectableActor_OnMaterialChanged },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UCPP_MaterialButton;
UClass* UCPP_MaterialButton::GetPrivateStaticClass()
{
	using TClass = UCPP_MaterialButton;
	if (!Z_Registration_Info_UClass_UCPP_MaterialButton.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("CPP_MaterialButton"),
			Z_Registration_Info_UClass_UCPP_MaterialButton.InnerSingleton,
			StaticRegisterNativesUCPP_MaterialButton,
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
	return Z_Registration_Info_UClass_UCPP_MaterialButton.InnerSingleton;
}
UClass* Z_Construct_UClass_UCPP_MaterialButton_NoRegister()
{
	return UCPP_MaterialButton::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UCPP_MaterialButton_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "UserInterface/CPP_MaterialButton.h" },
		{ "ModuleRelativePath", "Public/UserInterface/CPP_MaterialButton.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IconImage_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UserInterface/CPP_MaterialButton.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ComponentToChange_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UserInterface/CPP_MaterialButton.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Material_MetaData[] = {
		{ "ModuleRelativePath", "Public/UserInterface/CPP_MaterialButton.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SelectableActor_MetaData[] = {
		{ "ModuleRelativePath", "Public/UserInterface/CPP_MaterialButton.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_IconImage;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ComponentToChange;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Material;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SelectableActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UCPP_MaterialButton_SelectableActor_OnMaterialChanged, "SelectableActor_OnMaterialChanged" }, // 3052350951
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCPP_MaterialButton>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCPP_MaterialButton_Statics::NewProp_IconImage = { "IconImage", nullptr, (EPropertyFlags)0x0144000000090009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCPP_MaterialButton, IconImage), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IconImage_MetaData), NewProp_IconImage_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCPP_MaterialButton_Statics::NewProp_ComponentToChange = { "ComponentToChange", nullptr, (EPropertyFlags)0x0144000000082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCPP_MaterialButton, ComponentToChange), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ComponentToChange_MetaData), NewProp_ComponentToChange_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCPP_MaterialButton_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0144000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCPP_MaterialButton, Material), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Material_MetaData), NewProp_Material_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCPP_MaterialButton_Statics::NewProp_SelectableActor = { "SelectableActor", nullptr, (EPropertyFlags)0x0144000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCPP_MaterialButton, SelectableActor), Z_Construct_UClass_ACPP_SelectableActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelectableActor_MetaData), NewProp_SelectableActor_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCPP_MaterialButton_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCPP_MaterialButton_Statics::NewProp_IconImage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCPP_MaterialButton_Statics::NewProp_ComponentToChange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCPP_MaterialButton_Statics::NewProp_Material,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCPP_MaterialButton_Statics::NewProp_SelectableActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCPP_MaterialButton_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UCPP_MaterialButton_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCPP_ShadowedButton,
	(UObject* (*)())Z_Construct_UPackage__Script_RAC_Lite,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCPP_MaterialButton_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCPP_MaterialButton_Statics::ClassParams = {
	&UCPP_MaterialButton::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UCPP_MaterialButton_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UCPP_MaterialButton_Statics::PropPointers),
	0,
	0x00B010A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCPP_MaterialButton_Statics::Class_MetaDataParams), Z_Construct_UClass_UCPP_MaterialButton_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCPP_MaterialButton()
{
	if (!Z_Registration_Info_UClass_UCPP_MaterialButton.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCPP_MaterialButton.OuterSingleton, Z_Construct_UClass_UCPP_MaterialButton_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCPP_MaterialButton.OuterSingleton;
}
UCPP_MaterialButton::UCPP_MaterialButton(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCPP_MaterialButton);
UCPP_MaterialButton::~UCPP_MaterialButton() {}
// ********** End Class UCPP_MaterialButton ********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_asasi_Documents_GitHub_Deneme_Plugins_Realtime822b12800f6dV3_Source_RAC_Lite_Public_UserInterface_CPP_MaterialButton_h__Script_RAC_Lite_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCPP_MaterialButton, UCPP_MaterialButton::StaticClass, TEXT("UCPP_MaterialButton"), &Z_Registration_Info_UClass_UCPP_MaterialButton, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCPP_MaterialButton), 3239192871U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_asasi_Documents_GitHub_Deneme_Plugins_Realtime822b12800f6dV3_Source_RAC_Lite_Public_UserInterface_CPP_MaterialButton_h__Script_RAC_Lite_2080185310(TEXT("/Script/RAC_Lite"),
	Z_CompiledInDeferFile_FID_Users_asasi_Documents_GitHub_Deneme_Plugins_Realtime822b12800f6dV3_Source_RAC_Lite_Public_UserInterface_CPP_MaterialButton_h__Script_RAC_Lite_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_asasi_Documents_GitHub_Deneme_Plugins_Realtime822b12800f6dV3_Source_RAC_Lite_Public_UserInterface_CPP_MaterialButton_h__Script_RAC_Lite_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
