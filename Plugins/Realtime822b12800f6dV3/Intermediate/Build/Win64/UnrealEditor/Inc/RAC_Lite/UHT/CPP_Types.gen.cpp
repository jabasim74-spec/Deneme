// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CPP_Types.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeCPP_Types() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
RAC_LITE_API UClass* Z_Construct_UClass_ACPP_DynamicActor_NoRegister();
RAC_LITE_API UClass* Z_Construct_UClass_UCPP_Types();
RAC_LITE_API UClass* Z_Construct_UClass_UCPP_Types_NoRegister();
RAC_LITE_API UEnum* Z_Construct_UEnum_RAC_Lite_ECameraViewMode();
RAC_LITE_API UEnum* Z_Construct_UEnum_RAC_Lite_EPanel();
RAC_LITE_API UEnum* Z_Construct_UEnum_RAC_Lite_ESelectionOutlineType();
RAC_LITE_API UScriptStruct* Z_Construct_UScriptStruct_FFirstPersonSettings();
RAC_LITE_API UScriptStruct* Z_Construct_UScriptStruct_FFlyingSettings();
RAC_LITE_API UScriptStruct* Z_Construct_UScriptStruct_FFurnitureArray();
RAC_LITE_API UScriptStruct* Z_Construct_UScriptStruct_FFurnitureInfo();
RAC_LITE_API UScriptStruct* Z_Construct_UScriptStruct_FMaterialCategory();
RAC_LITE_API UScriptStruct* Z_Construct_UScriptStruct_FMaterialChangeInfo();
RAC_LITE_API UScriptStruct* Z_Construct_UScriptStruct_FMaterialInfo();
RAC_LITE_API UScriptStruct* Z_Construct_UScriptStruct_FSelectionOutlineSettings();
UPackage* Z_Construct_UPackage__Script_RAC_Lite();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum ESelectionOutlineType *****************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESelectionOutlineType;
static UEnum* ESelectionOutlineType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESelectionOutlineType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESelectionOutlineType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_RAC_Lite_ESelectionOutlineType, (UObject*)Z_Construct_UPackage__Script_RAC_Lite(), TEXT("ESelectionOutlineType"));
	}
	return Z_Registration_Info_UEnum_ESelectionOutlineType.OuterSingleton;
}
template<> RAC_LITE_API UEnum* StaticEnum<ESelectionOutlineType>()
{
	return ESelectionOutlineType_StaticEnum();
}
struct Z_Construct_UEnum_RAC_Lite_ESelectionOutlineType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Child.Name", "ESelectionOutlineType::Child" },
		{ "Current.Name", "ESelectionOutlineType::Current" },
		{ "ModuleRelativePath", "Public/CPP_Types.h" },
		{ "None.Name", "ESelectionOutlineType::None" },
		{ "Parent.Name", "ESelectionOutlineType::Parent" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ESelectionOutlineType::None", (int64)ESelectionOutlineType::None },
		{ "ESelectionOutlineType::Parent", (int64)ESelectionOutlineType::Parent },
		{ "ESelectionOutlineType::Current", (int64)ESelectionOutlineType::Current },
		{ "ESelectionOutlineType::Child", (int64)ESelectionOutlineType::Child },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_RAC_Lite_ESelectionOutlineType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_RAC_Lite,
	nullptr,
	"ESelectionOutlineType",
	"ESelectionOutlineType",
	Z_Construct_UEnum_RAC_Lite_ESelectionOutlineType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_RAC_Lite_ESelectionOutlineType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_RAC_Lite_ESelectionOutlineType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_RAC_Lite_ESelectionOutlineType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_RAC_Lite_ESelectionOutlineType()
{
	if (!Z_Registration_Info_UEnum_ESelectionOutlineType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESelectionOutlineType.InnerSingleton, Z_Construct_UEnum_RAC_Lite_ESelectionOutlineType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESelectionOutlineType.InnerSingleton;
}
// ********** End Enum ESelectionOutlineType *******************************************************

// ********** Begin Enum ECameraViewMode ***********************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECameraViewMode;
static UEnum* ECameraViewMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ECameraViewMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ECameraViewMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_RAC_Lite_ECameraViewMode, (UObject*)Z_Construct_UPackage__Script_RAC_Lite(), TEXT("ECameraViewMode"));
	}
	return Z_Registration_Info_UEnum_ECameraViewMode.OuterSingleton;
}
template<> RAC_LITE_API UEnum* StaticEnum<ECameraViewMode>()
{
	return ECameraViewMode_StaticEnum();
}
struct Z_Construct_UEnum_RAC_Lite_ECameraViewMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "FirstPerson.Name", "ECameraViewMode::FirstPerson" },
		{ "Flying.Name", "ECameraViewMode::Flying" },
		{ "ModuleRelativePath", "Public/CPP_Types.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ECameraViewMode::Flying", (int64)ECameraViewMode::Flying },
		{ "ECameraViewMode::FirstPerson", (int64)ECameraViewMode::FirstPerson },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_RAC_Lite_ECameraViewMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_RAC_Lite,
	nullptr,
	"ECameraViewMode",
	"ECameraViewMode",
	Z_Construct_UEnum_RAC_Lite_ECameraViewMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_RAC_Lite_ECameraViewMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_RAC_Lite_ECameraViewMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_RAC_Lite_ECameraViewMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_RAC_Lite_ECameraViewMode()
{
	if (!Z_Registration_Info_UEnum_ECameraViewMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECameraViewMode.InnerSingleton, Z_Construct_UEnum_RAC_Lite_ECameraViewMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ECameraViewMode.InnerSingleton;
}
// ********** End Enum ECameraViewMode *************************************************************

// ********** Begin Enum EPanel ********************************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPanel;
static UEnum* EPanel_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPanel.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPanel.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_RAC_Lite_EPanel, (UObject*)Z_Construct_UPackage__Script_RAC_Lite(), TEXT("EPanel"));
	}
	return Z_Registration_Info_UEnum_EPanel.OuterSingleton;
}
template<> RAC_LITE_API UEnum* StaticEnum<EPanel>()
{
	return EPanel_StaticEnum();
}
struct Z_Construct_UEnum_RAC_Lite_EPanel_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "ActorConfiguration.Name", "EPanel::ActorConfiguration" },
		{ "ActorSpawning.Name", "EPanel::ActorSpawning" },
		{ "ModuleRelativePath", "Public/CPP_Types.h" },
		{ "None.Name", "EPanel::None" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPanel::None", (int64)EPanel::None },
		{ "EPanel::ActorSpawning", (int64)EPanel::ActorSpawning },
		{ "EPanel::ActorConfiguration", (int64)EPanel::ActorConfiguration },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_RAC_Lite_EPanel_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_RAC_Lite,
	nullptr,
	"EPanel",
	"EPanel",
	Z_Construct_UEnum_RAC_Lite_EPanel_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_RAC_Lite_EPanel_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_RAC_Lite_EPanel_Statics::Enum_MetaDataParams), Z_Construct_UEnum_RAC_Lite_EPanel_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_RAC_Lite_EPanel()
{
	if (!Z_Registration_Info_UEnum_EPanel.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPanel.InnerSingleton, Z_Construct_UEnum_RAC_Lite_EPanel_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPanel.InnerSingleton;
}
// ********** End Enum EPanel **********************************************************************

// ********** Begin ScriptStruct FFlyingSettings ***************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FFlyingSettings;
class UScriptStruct* FFlyingSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FFlyingSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FFlyingSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFlyingSettings, (UObject*)Z_Construct_UPackage__Script_RAC_Lite(), TEXT("FlyingSettings"));
	}
	return Z_Registration_Info_UScriptStruct_FFlyingSettings.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FFlyingSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/CPP_Types.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpeedMultiplier_MetaData[] = {
		{ "Category", "RAC" },
		{ "ClampMax", "10" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/CPP_Types.h" },
		{ "UIMax", "10" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MouseSensitivityMultiplier_MetaData[] = {
		{ "Category", "RAC" },
		{ "ClampMax", "10" },
		{ "ClampMin", "-10" },
		{ "ModuleRelativePath", "Public/CPP_Types.h" },
		{ "UIMax", "10" },
		{ "UIMin", "-10" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SpeedMultiplier;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MouseSensitivityMultiplier;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFlyingSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFlyingSettings_Statics::NewProp_SpeedMultiplier = { "SpeedMultiplier", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFlyingSettings, SpeedMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpeedMultiplier_MetaData), NewProp_SpeedMultiplier_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFlyingSettings_Statics::NewProp_MouseSensitivityMultiplier = { "MouseSensitivityMultiplier", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFlyingSettings, MouseSensitivityMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MouseSensitivityMultiplier_MetaData), NewProp_MouseSensitivityMultiplier_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFlyingSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFlyingSettings_Statics::NewProp_SpeedMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFlyingSettings_Statics::NewProp_MouseSensitivityMultiplier,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFlyingSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFlyingSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_RAC_Lite,
	nullptr,
	&NewStructOps,
	"FlyingSettings",
	Z_Construct_UScriptStruct_FFlyingSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFlyingSettings_Statics::PropPointers),
	sizeof(FFlyingSettings),
	alignof(FFlyingSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFlyingSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FFlyingSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FFlyingSettings()
{
	if (!Z_Registration_Info_UScriptStruct_FFlyingSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FFlyingSettings.InnerSingleton, Z_Construct_UScriptStruct_FFlyingSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FFlyingSettings.InnerSingleton;
}
// ********** End ScriptStruct FFlyingSettings *****************************************************

// ********** Begin ScriptStruct FSelectionOutlineSettings *****************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FSelectionOutlineSettings;
class UScriptStruct* FSelectionOutlineSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FSelectionOutlineSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FSelectionOutlineSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSelectionOutlineSettings, (UObject*)Z_Construct_UPackage__Script_RAC_Lite(), TEXT("SelectionOutlineSettings"));
	}
	return Z_Registration_Info_UScriptStruct_FSelectionOutlineSettings.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FSelectionOutlineSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/CPP_Types.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/CPP_Types.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Thickness_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMax", "3" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/CPP_Types.h" },
		{ "UIMax", "3" },
		{ "UIMin", "0" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Thickness;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSelectionOutlineSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSelectionOutlineSettings_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSelectionOutlineSettings, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Color_MetaData), NewProp_Color_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSelectionOutlineSettings_Statics::NewProp_Thickness = { "Thickness", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSelectionOutlineSettings, Thickness), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Thickness_MetaData), NewProp_Thickness_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSelectionOutlineSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSelectionOutlineSettings_Statics::NewProp_Color,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSelectionOutlineSettings_Statics::NewProp_Thickness,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSelectionOutlineSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSelectionOutlineSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_RAC_Lite,
	nullptr,
	&NewStructOps,
	"SelectionOutlineSettings",
	Z_Construct_UScriptStruct_FSelectionOutlineSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSelectionOutlineSettings_Statics::PropPointers),
	sizeof(FSelectionOutlineSettings),
	alignof(FSelectionOutlineSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSelectionOutlineSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSelectionOutlineSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSelectionOutlineSettings()
{
	if (!Z_Registration_Info_UScriptStruct_FSelectionOutlineSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FSelectionOutlineSettings.InnerSingleton, Z_Construct_UScriptStruct_FSelectionOutlineSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FSelectionOutlineSettings.InnerSingleton;
}
// ********** End ScriptStruct FSelectionOutlineSettings *******************************************

// ********** Begin ScriptStruct FFirstPersonSettings **********************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FFirstPersonSettings;
class UScriptStruct* FFirstPersonSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FFirstPersonSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FFirstPersonSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFirstPersonSettings, (UObject*)Z_Construct_UPackage__Script_RAC_Lite(), TEXT("FirstPersonSettings"));
	}
	return Z_Registration_Info_UScriptStruct_FFirstPersonSettings.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FFirstPersonSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/CPP_Types.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpeedMultiplier_MetaData[] = {
		{ "Category", "RAC" },
		{ "ClampMax", "10" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/CPP_Types.h" },
		{ "UIMax", "10" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MouseSensitivityMultiplier_MetaData[] = {
		{ "Category", "RAC" },
		{ "ClampMax", "10" },
		{ "ClampMin", "-10" },
		{ "ModuleRelativePath", "Public/CPP_Types.h" },
		{ "UIMax", "10" },
		{ "UIMin", "-10" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EyeHeight_MetaData[] = {
		{ "Category", "RAC" },
		{ "ClampMax", "300" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/CPP_Types.h" },
		{ "UIMax", "300" },
		{ "UIMin", "0" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SpeedMultiplier;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MouseSensitivityMultiplier;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_EyeHeight;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFirstPersonSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFirstPersonSettings_Statics::NewProp_SpeedMultiplier = { "SpeedMultiplier", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFirstPersonSettings, SpeedMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpeedMultiplier_MetaData), NewProp_SpeedMultiplier_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFirstPersonSettings_Statics::NewProp_MouseSensitivityMultiplier = { "MouseSensitivityMultiplier", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFirstPersonSettings, MouseSensitivityMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MouseSensitivityMultiplier_MetaData), NewProp_MouseSensitivityMultiplier_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFirstPersonSettings_Statics::NewProp_EyeHeight = { "EyeHeight", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFirstPersonSettings, EyeHeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EyeHeight_MetaData), NewProp_EyeHeight_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFirstPersonSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFirstPersonSettings_Statics::NewProp_SpeedMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFirstPersonSettings_Statics::NewProp_MouseSensitivityMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFirstPersonSettings_Statics::NewProp_EyeHeight,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFirstPersonSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFirstPersonSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_RAC_Lite,
	nullptr,
	&NewStructOps,
	"FirstPersonSettings",
	Z_Construct_UScriptStruct_FFirstPersonSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFirstPersonSettings_Statics::PropPointers),
	sizeof(FFirstPersonSettings),
	alignof(FFirstPersonSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFirstPersonSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FFirstPersonSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FFirstPersonSettings()
{
	if (!Z_Registration_Info_UScriptStruct_FFirstPersonSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FFirstPersonSettings.InnerSingleton, Z_Construct_UScriptStruct_FFirstPersonSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FFirstPersonSettings.InnerSingleton;
}
// ********** End ScriptStruct FFirstPersonSettings ************************************************

// ********** Begin ScriptStruct FFurnitureInfo ****************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FFurnitureInfo;
class UScriptStruct* FFurnitureInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FFurnitureInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FFurnitureInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFurnitureInfo, (UObject*)Z_Construct_UPackage__Script_RAC_Lite(), TEXT("FurnitureInfo"));
	}
	return Z_Registration_Info_UScriptStruct_FFurnitureInfo.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FFurnitureInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/CPP_Types.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Icon_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/CPP_Types.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/CPP_Types.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/CPP_Types.h" },
		{ "MultiLine", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Icon;
	static const UECodeGen_Private::FTextPropertyParams NewProp_Name;
	static const UECodeGen_Private::FTextPropertyParams NewProp_Description;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFurnitureInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FFurnitureInfo_Statics::NewProp_Icon = { "Icon", nullptr, (EPropertyFlags)0x0114000000010001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFurnitureInfo, Icon), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Icon_MetaData), NewProp_Icon_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FFurnitureInfo_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFurnitureInfo, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FFurnitureInfo_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFurnitureInfo, Description), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Description_MetaData), NewProp_Description_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFurnitureInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFurnitureInfo_Statics::NewProp_Icon,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFurnitureInfo_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFurnitureInfo_Statics::NewProp_Description,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFurnitureInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFurnitureInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_RAC_Lite,
	nullptr,
	&NewStructOps,
	"FurnitureInfo",
	Z_Construct_UScriptStruct_FFurnitureInfo_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFurnitureInfo_Statics::PropPointers),
	sizeof(FFurnitureInfo),
	alignof(FFurnitureInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFurnitureInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FFurnitureInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FFurnitureInfo()
{
	if (!Z_Registration_Info_UScriptStruct_FFurnitureInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FFurnitureInfo.InnerSingleton, Z_Construct_UScriptStruct_FFurnitureInfo_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FFurnitureInfo.InnerSingleton;
}
// ********** End ScriptStruct FFurnitureInfo ******************************************************

// ********** Begin ScriptStruct FFurnitureArray ***************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FFurnitureArray;
class UScriptStruct* FFurnitureArray::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FFurnitureArray.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FFurnitureArray.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFurnitureArray, (UObject*)Z_Construct_UPackage__Script_RAC_Lite(), TEXT("FurnitureArray"));
	}
	return Z_Registration_Info_UScriptStruct_FFurnitureArray.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FFurnitureArray_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/CPP_Types.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Furniture_MetaData[] = {
		{ "Category", "RAC" },
		{ "ModuleRelativePath", "Public/CPP_Types.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_Furniture_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Furniture;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFurnitureArray>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FFurnitureArray_Statics::NewProp_Furniture_Inner = { "Furniture", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_ACPP_DynamicActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FFurnitureArray_Statics::NewProp_Furniture = { "Furniture", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFurnitureArray, Furniture), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Furniture_MetaData), NewProp_Furniture_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFurnitureArray_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFurnitureArray_Statics::NewProp_Furniture_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFurnitureArray_Statics::NewProp_Furniture,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFurnitureArray_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFurnitureArray_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_RAC_Lite,
	nullptr,
	&NewStructOps,
	"FurnitureArray",
	Z_Construct_UScriptStruct_FFurnitureArray_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFurnitureArray_Statics::PropPointers),
	sizeof(FFurnitureArray),
	alignof(FFurnitureArray),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFurnitureArray_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FFurnitureArray_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FFurnitureArray()
{
	if (!Z_Registration_Info_UScriptStruct_FFurnitureArray.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FFurnitureArray.InnerSingleton, Z_Construct_UScriptStruct_FFurnitureArray_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FFurnitureArray.InnerSingleton;
}
// ********** End ScriptStruct FFurnitureArray *****************************************************

// ********** Begin ScriptStruct FMaterialInfo *****************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FMaterialInfo;
class UScriptStruct* FMaterialInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FMaterialInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FMaterialInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMaterialInfo, (UObject*)Z_Construct_UPackage__Script_RAC_Lite(), TEXT("MaterialInfo"));
	}
	return Z_Registration_Info_UScriptStruct_FMaterialInfo.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FMaterialInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/CPP_Types.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Material_MetaData[] = {
		{ "Category", "RAC" },
		{ "ModuleRelativePath", "Public/CPP_Types.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Icon_MetaData[] = {
		{ "Category", "RAC" },
		{ "ModuleRelativePath", "Public/CPP_Types.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Material;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Icon;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMaterialInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMaterialInfo_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMaterialInfo, Material), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Material_MetaData), NewProp_Material_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMaterialInfo_Statics::NewProp_Icon = { "Icon", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMaterialInfo, Icon), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Icon_MetaData), NewProp_Icon_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMaterialInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialInfo_Statics::NewProp_Material,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialInfo_Statics::NewProp_Icon,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMaterialInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_RAC_Lite,
	nullptr,
	&NewStructOps,
	"MaterialInfo",
	Z_Construct_UScriptStruct_FMaterialInfo_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialInfo_Statics::PropPointers),
	sizeof(FMaterialInfo),
	alignof(FMaterialInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMaterialInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMaterialInfo()
{
	if (!Z_Registration_Info_UScriptStruct_FMaterialInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FMaterialInfo.InnerSingleton, Z_Construct_UScriptStruct_FMaterialInfo_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FMaterialInfo.InnerSingleton;
}
// ********** End ScriptStruct FMaterialInfo *******************************************************

// ********** Begin ScriptStruct FMaterialChangeInfo ***********************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FMaterialChangeInfo;
class UScriptStruct* FMaterialChangeInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FMaterialChangeInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FMaterialChangeInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMaterialChangeInfo, (UObject*)Z_Construct_UPackage__Script_RAC_Lite(), TEXT("MaterialChangeInfo"));
	}
	return Z_Registration_Info_UScriptStruct_FMaterialChangeInfo.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FMaterialChangeInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/CPP_Types.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ComponentName_MetaData[] = {
		{ "Category", "RAC" },
		{ "ModuleRelativePath", "Public/CPP_Types.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaterialSlotIndex_MetaData[] = {
		{ "Category", "RAC" },
		{ "ModuleRelativePath", "Public/CPP_Types.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaterialSlotName_MetaData[] = {
		{ "Category", "RAC" },
		{ "ModuleRelativePath", "Public/CPP_Types.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Materials_MetaData[] = {
		{ "Category", "RAC" },
		{ "ModuleRelativePath", "Public/CPP_Types.h" },
		{ "ShowOnlyInnerProperties", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_ComponentName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaterialSlotIndex;
	static const UECodeGen_Private::FTextPropertyParams NewProp_MaterialSlotName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Materials_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Materials;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMaterialChangeInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FMaterialChangeInfo_Statics::NewProp_ComponentName = { "ComponentName", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMaterialChangeInfo, ComponentName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ComponentName_MetaData), NewProp_ComponentName_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMaterialChangeInfo_Statics::NewProp_MaterialSlotIndex = { "MaterialSlotIndex", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMaterialChangeInfo, MaterialSlotIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaterialSlotIndex_MetaData), NewProp_MaterialSlotIndex_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FMaterialChangeInfo_Statics::NewProp_MaterialSlotName = { "MaterialSlotName", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMaterialChangeInfo, MaterialSlotName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaterialSlotName_MetaData), NewProp_MaterialSlotName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMaterialChangeInfo_Statics::NewProp_Materials_Inner = { "Materials", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FMaterialInfo, METADATA_PARAMS(0, nullptr) }; // 1822697517
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMaterialChangeInfo_Statics::NewProp_Materials = { "Materials", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMaterialChangeInfo, Materials), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Materials_MetaData), NewProp_Materials_MetaData) }; // 1822697517
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMaterialChangeInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialChangeInfo_Statics::NewProp_ComponentName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialChangeInfo_Statics::NewProp_MaterialSlotIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialChangeInfo_Statics::NewProp_MaterialSlotName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialChangeInfo_Statics::NewProp_Materials_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialChangeInfo_Statics::NewProp_Materials,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialChangeInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMaterialChangeInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_RAC_Lite,
	nullptr,
	&NewStructOps,
	"MaterialChangeInfo",
	Z_Construct_UScriptStruct_FMaterialChangeInfo_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialChangeInfo_Statics::PropPointers),
	sizeof(FMaterialChangeInfo),
	alignof(FMaterialChangeInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialChangeInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMaterialChangeInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMaterialChangeInfo()
{
	if (!Z_Registration_Info_UScriptStruct_FMaterialChangeInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FMaterialChangeInfo.InnerSingleton, Z_Construct_UScriptStruct_FMaterialChangeInfo_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FMaterialChangeInfo.InnerSingleton;
}
// ********** End ScriptStruct FMaterialChangeInfo *************************************************

// ********** Begin ScriptStruct FMaterialCategory *************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FMaterialCategory;
class UScriptStruct* FMaterialCategory::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FMaterialCategory.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FMaterialCategory.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMaterialCategory, (UObject*)Z_Construct_UPackage__Script_RAC_Lite(), TEXT("MaterialCategory"));
	}
	return Z_Registration_Info_UScriptStruct_FMaterialCategory.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FMaterialCategory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CPP_Types.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Component_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CPP_Types.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Materials_MetaData[] = {
		{ "ModuleRelativePath", "Public/CPP_Types.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Component;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Materials_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Materials;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMaterialCategory>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMaterialCategory_Statics::NewProp_Component = { "Component", nullptr, (EPropertyFlags)0x0114000000082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMaterialCategory, Component), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Component_MetaData), NewProp_Component_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMaterialCategory_Statics::NewProp_Materials_Inner = { "Materials", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FMaterialInfo, METADATA_PARAMS(0, nullptr) }; // 1822697517
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMaterialCategory_Statics::NewProp_Materials = { "Materials", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMaterialCategory, Materials), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Materials_MetaData), NewProp_Materials_MetaData) }; // 1822697517
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMaterialCategory_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialCategory_Statics::NewProp_Component,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialCategory_Statics::NewProp_Materials_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialCategory_Statics::NewProp_Materials,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialCategory_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMaterialCategory_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_RAC_Lite,
	nullptr,
	&NewStructOps,
	"MaterialCategory",
	Z_Construct_UScriptStruct_FMaterialCategory_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialCategory_Statics::PropPointers),
	sizeof(FMaterialCategory),
	alignof(FMaterialCategory),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000005),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialCategory_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMaterialCategory_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMaterialCategory()
{
	if (!Z_Registration_Info_UScriptStruct_FMaterialCategory.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FMaterialCategory.InnerSingleton, Z_Construct_UScriptStruct_FMaterialCategory_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FMaterialCategory.InnerSingleton;
}
// ********** End ScriptStruct FMaterialCategory ***************************************************

// ********** Begin Class UCPP_Types ***************************************************************
void UCPP_Types::StaticRegisterNativesUCPP_Types()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UCPP_Types;
UClass* UCPP_Types::GetPrivateStaticClass()
{
	using TClass = UCPP_Types;
	if (!Z_Registration_Info_UClass_UCPP_Types.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("CPP_Types"),
			Z_Registration_Info_UClass_UCPP_Types.InnerSingleton,
			StaticRegisterNativesUCPP_Types,
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
	return Z_Registration_Info_UClass_UCPP_Types.InnerSingleton;
}
UClass* Z_Construct_UClass_UCPP_Types_NoRegister()
{
	return UCPP_Types::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UCPP_Types_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "CPP_Types.h" },
		{ "ModuleRelativePath", "Public/CPP_Types.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCPP_Types>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UCPP_Types_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_RAC_Lite,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCPP_Types_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCPP_Types_Statics::ClassParams = {
	&UCPP_Types::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCPP_Types_Statics::Class_MetaDataParams), Z_Construct_UClass_UCPP_Types_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCPP_Types()
{
	if (!Z_Registration_Info_UClass_UCPP_Types.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCPP_Types.OuterSingleton, Z_Construct_UClass_UCPP_Types_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCPP_Types.OuterSingleton;
}
UCPP_Types::UCPP_Types(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCPP_Types);
UCPP_Types::~UCPP_Types() {}
// ********** End Class UCPP_Types *****************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_asasi_Documents_GitHub_Deneme_Plugins_Realtime822b12800f6dV3_Source_RAC_Lite_Public_CPP_Types_h__Script_RAC_Lite_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ESelectionOutlineType_StaticEnum, TEXT("ESelectionOutlineType"), &Z_Registration_Info_UEnum_ESelectionOutlineType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2869660721U) },
		{ ECameraViewMode_StaticEnum, TEXT("ECameraViewMode"), &Z_Registration_Info_UEnum_ECameraViewMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3105129429U) },
		{ EPanel_StaticEnum, TEXT("EPanel"), &Z_Registration_Info_UEnum_EPanel, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1105189777U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FFlyingSettings::StaticStruct, Z_Construct_UScriptStruct_FFlyingSettings_Statics::NewStructOps, TEXT("FlyingSettings"), &Z_Registration_Info_UScriptStruct_FFlyingSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFlyingSettings), 675698276U) },
		{ FSelectionOutlineSettings::StaticStruct, Z_Construct_UScriptStruct_FSelectionOutlineSettings_Statics::NewStructOps, TEXT("SelectionOutlineSettings"), &Z_Registration_Info_UScriptStruct_FSelectionOutlineSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSelectionOutlineSettings), 3796216693U) },
		{ FFirstPersonSettings::StaticStruct, Z_Construct_UScriptStruct_FFirstPersonSettings_Statics::NewStructOps, TEXT("FirstPersonSettings"), &Z_Registration_Info_UScriptStruct_FFirstPersonSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFirstPersonSettings), 2549841227U) },
		{ FFurnitureInfo::StaticStruct, Z_Construct_UScriptStruct_FFurnitureInfo_Statics::NewStructOps, TEXT("FurnitureInfo"), &Z_Registration_Info_UScriptStruct_FFurnitureInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFurnitureInfo), 3544296143U) },
		{ FFurnitureArray::StaticStruct, Z_Construct_UScriptStruct_FFurnitureArray_Statics::NewStructOps, TEXT("FurnitureArray"), &Z_Registration_Info_UScriptStruct_FFurnitureArray, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFurnitureArray), 349289832U) },
		{ FMaterialInfo::StaticStruct, Z_Construct_UScriptStruct_FMaterialInfo_Statics::NewStructOps, TEXT("MaterialInfo"), &Z_Registration_Info_UScriptStruct_FMaterialInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMaterialInfo), 1822697517U) },
		{ FMaterialChangeInfo::StaticStruct, Z_Construct_UScriptStruct_FMaterialChangeInfo_Statics::NewStructOps, TEXT("MaterialChangeInfo"), &Z_Registration_Info_UScriptStruct_FMaterialChangeInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMaterialChangeInfo), 3794768742U) },
		{ FMaterialCategory::StaticStruct, Z_Construct_UScriptStruct_FMaterialCategory_Statics::NewStructOps, TEXT("MaterialCategory"), &Z_Registration_Info_UScriptStruct_FMaterialCategory, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMaterialCategory), 117124191U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCPP_Types, UCPP_Types::StaticClass, TEXT("UCPP_Types"), &Z_Registration_Info_UClass_UCPP_Types, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCPP_Types), 1061297821U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_asasi_Documents_GitHub_Deneme_Plugins_Realtime822b12800f6dV3_Source_RAC_Lite_Public_CPP_Types_h__Script_RAC_Lite_3324687319(TEXT("/Script/RAC_Lite"),
	Z_CompiledInDeferFile_FID_Users_asasi_Documents_GitHub_Deneme_Plugins_Realtime822b12800f6dV3_Source_RAC_Lite_Public_CPP_Types_h__Script_RAC_Lite_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_asasi_Documents_GitHub_Deneme_Plugins_Realtime822b12800f6dV3_Source_RAC_Lite_Public_CPP_Types_h__Script_RAC_Lite_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Users_asasi_Documents_GitHub_Deneme_Plugins_Realtime822b12800f6dV3_Source_RAC_Lite_Public_CPP_Types_h__Script_RAC_Lite_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_asasi_Documents_GitHub_Deneme_Plugins_Realtime822b12800f6dV3_Source_RAC_Lite_Public_CPP_Types_h__Script_RAC_Lite_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Users_asasi_Documents_GitHub_Deneme_Plugins_Realtime822b12800f6dV3_Source_RAC_Lite_Public_CPP_Types_h__Script_RAC_Lite_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_asasi_Documents_GitHub_Deneme_Plugins_Realtime822b12800f6dV3_Source_RAC_Lite_Public_CPP_Types_h__Script_RAC_Lite_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
