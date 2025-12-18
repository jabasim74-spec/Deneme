// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UserInterface/CPP_FurnitureButton.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeCPP_FurnitureButton() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
RAC_LITE_API UClass* Z_Construct_UClass_ACPP_ConfiguratorGameMode_NoRegister();
RAC_LITE_API UClass* Z_Construct_UClass_ACPP_DynamicActor_NoRegister();
RAC_LITE_API UClass* Z_Construct_UClass_UCPP_FurnitureButton();
RAC_LITE_API UClass* Z_Construct_UClass_UCPP_FurnitureButton_NoRegister();
RAC_LITE_API UClass* Z_Construct_UClass_UCPP_ShadowedButton();
UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
UPackage* Z_Construct_UPackage__Script_RAC_Lite();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UCPP_FurnitureButton *****************************************************
void UCPP_FurnitureButton::StaticRegisterNativesUCPP_FurnitureButton()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UCPP_FurnitureButton;
UClass* UCPP_FurnitureButton::GetPrivateStaticClass()
{
	using TClass = UCPP_FurnitureButton;
	if (!Z_Registration_Info_UClass_UCPP_FurnitureButton.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("CPP_FurnitureButton"),
			Z_Registration_Info_UClass_UCPP_FurnitureButton.InnerSingleton,
			StaticRegisterNativesUCPP_FurnitureButton,
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
	return Z_Registration_Info_UClass_UCPP_FurnitureButton.InnerSingleton;
}
UClass* Z_Construct_UClass_UCPP_FurnitureButton_NoRegister()
{
	return UCPP_FurnitureButton::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UCPP_FurnitureButton_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "UserInterface/CPP_FurnitureButton.h" },
		{ "ModuleRelativePath", "Public/UserInterface/CPP_FurnitureButton.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FurnitureClass_MetaData[] = {
		{ "ModuleRelativePath", "Public/UserInterface/CPP_FurnitureButton.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NameTextBlock_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UserInterface/CPP_FurnitureButton.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DescriptionTextBlock_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UserInterface/CPP_FurnitureButton.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IconImage_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UserInterface/CPP_FurnitureButton.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnedActor_MetaData[] = {
		{ "ModuleRelativePath", "Public/UserInterface/CPP_FurnitureButton.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerController_MetaData[] = {
		{ "ModuleRelativePath", "Public/UserInterface/CPP_FurnitureButton.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameMode_MetaData[] = {
		{ "ModuleRelativePath", "Public/UserInterface/CPP_FurnitureButton.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_FurnitureClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NameTextBlock;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DescriptionTextBlock;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_IconImage;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpawnedActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerController;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GameMode;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCPP_FurnitureButton>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UCPP_FurnitureButton_Statics::NewProp_FurnitureClass = { "FurnitureClass", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCPP_FurnitureButton, FurnitureClass), Z_Construct_UClass_UClass, Z_Construct_UClass_ACPP_DynamicActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FurnitureClass_MetaData), NewProp_FurnitureClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCPP_FurnitureButton_Statics::NewProp_NameTextBlock = { "NameTextBlock", nullptr, (EPropertyFlags)0x0144000000090009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCPP_FurnitureButton, NameTextBlock), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NameTextBlock_MetaData), NewProp_NameTextBlock_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCPP_FurnitureButton_Statics::NewProp_DescriptionTextBlock = { "DescriptionTextBlock", nullptr, (EPropertyFlags)0x0144000000090009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCPP_FurnitureButton, DescriptionTextBlock), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DescriptionTextBlock_MetaData), NewProp_DescriptionTextBlock_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCPP_FurnitureButton_Statics::NewProp_IconImage = { "IconImage", nullptr, (EPropertyFlags)0x0144000000090009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCPP_FurnitureButton, IconImage), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IconImage_MetaData), NewProp_IconImage_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCPP_FurnitureButton_Statics::NewProp_SpawnedActor = { "SpawnedActor", nullptr, (EPropertyFlags)0x0144000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCPP_FurnitureButton, SpawnedActor), Z_Construct_UClass_ACPP_DynamicActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnedActor_MetaData), NewProp_SpawnedActor_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCPP_FurnitureButton_Statics::NewProp_PlayerController = { "PlayerController", nullptr, (EPropertyFlags)0x0144000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCPP_FurnitureButton, PlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerController_MetaData), NewProp_PlayerController_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCPP_FurnitureButton_Statics::NewProp_GameMode = { "GameMode", nullptr, (EPropertyFlags)0x0144000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCPP_FurnitureButton, GameMode), Z_Construct_UClass_ACPP_ConfiguratorGameMode_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameMode_MetaData), NewProp_GameMode_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCPP_FurnitureButton_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCPP_FurnitureButton_Statics::NewProp_FurnitureClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCPP_FurnitureButton_Statics::NewProp_NameTextBlock,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCPP_FurnitureButton_Statics::NewProp_DescriptionTextBlock,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCPP_FurnitureButton_Statics::NewProp_IconImage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCPP_FurnitureButton_Statics::NewProp_SpawnedActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCPP_FurnitureButton_Statics::NewProp_PlayerController,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCPP_FurnitureButton_Statics::NewProp_GameMode,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCPP_FurnitureButton_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UCPP_FurnitureButton_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCPP_ShadowedButton,
	(UObject* (*)())Z_Construct_UPackage__Script_RAC_Lite,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCPP_FurnitureButton_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCPP_FurnitureButton_Statics::ClassParams = {
	&UCPP_FurnitureButton::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UCPP_FurnitureButton_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UCPP_FurnitureButton_Statics::PropPointers),
	0,
	0x00B010A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCPP_FurnitureButton_Statics::Class_MetaDataParams), Z_Construct_UClass_UCPP_FurnitureButton_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCPP_FurnitureButton()
{
	if (!Z_Registration_Info_UClass_UCPP_FurnitureButton.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCPP_FurnitureButton.OuterSingleton, Z_Construct_UClass_UCPP_FurnitureButton_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCPP_FurnitureButton.OuterSingleton;
}
UCPP_FurnitureButton::UCPP_FurnitureButton(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCPP_FurnitureButton);
UCPP_FurnitureButton::~UCPP_FurnitureButton() {}
// ********** End Class UCPP_FurnitureButton *******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_asasi_Documents_GitHub_Deneme_Plugins_Realtime822b12800f6dV3_Source_RAC_Lite_Public_UserInterface_CPP_FurnitureButton_h__Script_RAC_Lite_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCPP_FurnitureButton, UCPP_FurnitureButton::StaticClass, TEXT("UCPP_FurnitureButton"), &Z_Registration_Info_UClass_UCPP_FurnitureButton, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCPP_FurnitureButton), 84537171U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_asasi_Documents_GitHub_Deneme_Plugins_Realtime822b12800f6dV3_Source_RAC_Lite_Public_UserInterface_CPP_FurnitureButton_h__Script_RAC_Lite_88424755(TEXT("/Script/RAC_Lite"),
	Z_CompiledInDeferFile_FID_Users_asasi_Documents_GitHub_Deneme_Plugins_Realtime822b12800f6dV3_Source_RAC_Lite_Public_UserInterface_CPP_FurnitureButton_h__Script_RAC_Lite_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_asasi_Documents_GitHub_Deneme_Plugins_Realtime822b12800f6dV3_Source_RAC_Lite_Public_UserInterface_CPP_FurnitureButton_h__Script_RAC_Lite_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
