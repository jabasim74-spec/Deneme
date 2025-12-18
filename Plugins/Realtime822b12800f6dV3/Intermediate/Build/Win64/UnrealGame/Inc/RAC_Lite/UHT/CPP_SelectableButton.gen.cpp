// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UserInterface/CPP_SelectableButton.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeCPP_SelectableButton() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
RAC_LITE_API UClass* Z_Construct_UClass_UCPP_SelectableButton();
RAC_LITE_API UClass* Z_Construct_UClass_UCPP_SelectableButton_NoRegister();
RAC_LITE_API UClass* Z_Construct_UClass_UCPP_ShadowedButton();
UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
UPackage* Z_Construct_UPackage__Script_RAC_Lite();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UCPP_SelectableButton ****************************************************
void UCPP_SelectableButton::StaticRegisterNativesUCPP_SelectableButton()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UCPP_SelectableButton;
UClass* UCPP_SelectableButton::GetPrivateStaticClass()
{
	using TClass = UCPP_SelectableButton;
	if (!Z_Registration_Info_UClass_UCPP_SelectableButton.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("CPP_SelectableButton"),
			Z_Registration_Info_UClass_UCPP_SelectableButton.InnerSingleton,
			StaticRegisterNativesUCPP_SelectableButton,
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
	return Z_Registration_Info_UClass_UCPP_SelectableButton.InnerSingleton;
}
UClass* Z_Construct_UClass_UCPP_SelectableButton_NoRegister()
{
	return UCPP_SelectableButton::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UCPP_SelectableButton_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "UserInterface/CPP_SelectableButton.h" },
		{ "ModuleRelativePath", "Public/UserInterface/CPP_SelectableButton.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Icon_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/UserInterface/CPP_SelectableButton.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IsSelected_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/UserInterface/CPP_SelectableButton.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DisableWhenSelected_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/UserInterface/CPP_SelectableButton.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IconImage_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UserInterface/CPP_SelectableButton.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Icon;
	static void NewProp_IsSelected_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsSelected;
	static void NewProp_DisableWhenSelected_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_DisableWhenSelected;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_IconImage;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCPP_SelectableButton>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCPP_SelectableButton_Statics::NewProp_Icon = { "Icon", nullptr, (EPropertyFlags)0x0144000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCPP_SelectableButton, Icon), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Icon_MetaData), NewProp_Icon_MetaData) };
void Z_Construct_UClass_UCPP_SelectableButton_Statics::NewProp_IsSelected_SetBit(void* Obj)
{
	((UCPP_SelectableButton*)Obj)->IsSelected = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCPP_SelectableButton_Statics::NewProp_IsSelected = { "IsSelected", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCPP_SelectableButton), &Z_Construct_UClass_UCPP_SelectableButton_Statics::NewProp_IsSelected_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsSelected_MetaData), NewProp_IsSelected_MetaData) };
void Z_Construct_UClass_UCPP_SelectableButton_Statics::NewProp_DisableWhenSelected_SetBit(void* Obj)
{
	((UCPP_SelectableButton*)Obj)->DisableWhenSelected = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCPP_SelectableButton_Statics::NewProp_DisableWhenSelected = { "DisableWhenSelected", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCPP_SelectableButton), &Z_Construct_UClass_UCPP_SelectableButton_Statics::NewProp_DisableWhenSelected_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DisableWhenSelected_MetaData), NewProp_DisableWhenSelected_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCPP_SelectableButton_Statics::NewProp_IconImage = { "IconImage", nullptr, (EPropertyFlags)0x0144000000090009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCPP_SelectableButton, IconImage), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IconImage_MetaData), NewProp_IconImage_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCPP_SelectableButton_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCPP_SelectableButton_Statics::NewProp_Icon,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCPP_SelectableButton_Statics::NewProp_IsSelected,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCPP_SelectableButton_Statics::NewProp_DisableWhenSelected,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCPP_SelectableButton_Statics::NewProp_IconImage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCPP_SelectableButton_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UCPP_SelectableButton_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCPP_ShadowedButton,
	(UObject* (*)())Z_Construct_UPackage__Script_RAC_Lite,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCPP_SelectableButton_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCPP_SelectableButton_Statics::ClassParams = {
	&UCPP_SelectableButton::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UCPP_SelectableButton_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UCPP_SelectableButton_Statics::PropPointers),
	0,
	0x00B010A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCPP_SelectableButton_Statics::Class_MetaDataParams), Z_Construct_UClass_UCPP_SelectableButton_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCPP_SelectableButton()
{
	if (!Z_Registration_Info_UClass_UCPP_SelectableButton.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCPP_SelectableButton.OuterSingleton, Z_Construct_UClass_UCPP_SelectableButton_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCPP_SelectableButton.OuterSingleton;
}
UCPP_SelectableButton::UCPP_SelectableButton(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCPP_SelectableButton);
UCPP_SelectableButton::~UCPP_SelectableButton() {}
// ********** End Class UCPP_SelectableButton ******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RAC_Lite_Source_RAC_Lite_Public_UserInterface_CPP_SelectableButton_h__Script_RAC_Lite_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCPP_SelectableButton, UCPP_SelectableButton::StaticClass, TEXT("UCPP_SelectableButton"), &Z_Registration_Info_UClass_UCPP_SelectableButton, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCPP_SelectableButton), 3593315567U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RAC_Lite_Source_RAC_Lite_Public_UserInterface_CPP_SelectableButton_h__Script_RAC_Lite_1604304977(TEXT("/Script/RAC_Lite"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RAC_Lite_Source_RAC_Lite_Public_UserInterface_CPP_SelectableButton_h__Script_RAC_Lite_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RAC_Lite_Source_RAC_Lite_Public_UserInterface_CPP_SelectableButton_h__Script_RAC_Lite_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
