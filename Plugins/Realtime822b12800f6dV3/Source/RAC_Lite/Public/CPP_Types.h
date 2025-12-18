// Copyright Stanislav Perekupenko 2024. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/ConstructorHelpers.h"
#include "CPP_Types.generated.h"

class UTexture2D;
class ACPP_DynamicActor;
class UMaterialInterface;
class ACPP_SelectableActor;


#pragma region Macro
#define GET_CLASS(Type,VarName,Path)static ConstructorHelpers::FClassFinder<Type> VarName(Path)
#define GET_OBJECT(Type,VarName,Path)static ConstructorHelpers::FObjectFinder<Type> VarName(Path)
#pragma endregion

#pragma region Paths
#define MAIN_WIDGET_PATH TEXT("/RAC_Lite/Blueprints/UserInterface/WBP_Main")
#define TUTORIAL_WIDGET_PATH TEXT("/RAC_Lite/Blueprints/UserInterface/WBP_Tutorial")
#define GIZMO_WIDGET_PATH TEXT("/RAC_Lite/Blueprints/UserInterface/WBP_Gizmo")
#define IMC_RAC_PATH TEXT("/RAC_Lite/Blueprints/Inputs/IMC_RAC")
#define IA_FBMOVEMENT_PATH TEXT("/RAC_Lite/Blueprints/Inputs/IA_FBMovement")
#define IA_LRMOVEMENT_PATH TEXT("/RAC_Lite/Blueprints/Inputs/IA_LRMovement")
#define IA_UDLOOK_PATH TEXT("/RAC_Lite/Blueprints/Inputs/IA_UDLook")
#define IA_LRLOOK_PATH TEXT("/RAC_Lite/Blueprints/Inputs/IA_LRLook")
#define IA_SELECTION_PATH TEXT("/RAC_Lite/Blueprints/Inputs/IA_Selection")
#define IA_CAMERAROTATION_PATH TEXT("/RAC_Lite/Blueprints/Inputs/IA_CameraRotation")
#define OUTLINE_POSTPROCESS_PATH TEXT("/RAC_Lite/Materials/M_OutlinePostProcess")
#pragma endregion

#pragma region Delegates
DECLARE_MULTICAST_DELEGATE(FNoParamSignature)
DECLARE_MULTICAST_DELEGATE_OneParam(FSelectableActorSignature, ACPP_SelectableActor*)
#pragma endregion

#pragma region Consts
const FLinearColor COLOR_BACKGROUND = FColor::FromHex("D8E2DC");
const FLinearColor COLOR_BACKGROUND_INTERACTIVE = FColor::FromHex("EAEAEA");
const FLinearColor COLOR_PRIMARY = FColor::FromHex("0A122A");
const FLinearColor COLOR_PRIMARY_SELECTED = FColor::FromHex("556F44");
const FLinearColor COLOR_SECONDARY = FColor::FromHex("283F3B");
const FLinearColor COLOR_SHADOW = (FLinearColor(0, 0, 0, 0.3));


#pragma endregion

#pragma region Enums

UENUM()
enum class ESelectionOutlineType : uint8
{
	None,
	Parent,
	Current,
	Child,
};

UENUM()
enum class ECameraViewMode : uint8
{
	Flying,
	FirstPerson,
};

UENUM()
enum class EPanel : uint8
{
	None,
	ActorSpawning,
	ActorConfiguration,
};
#pragma endregion

#pragma region Structs
USTRUCT(BlueprintType)
struct FFlyingSettings
{
	GENERATED_BODY()

public:
	UPROPERTY(EditDefaultsOnly, Category="RAC", meta=(UIMin=0, UIMax=10, ClampMin=0, ClampMax=10))
	float SpeedMultiplier = 1;

	UPROPERTY(EditDefaultsOnly, Category="RAC", meta=(UIMin=-10, UIMax=10, ClampMin=-10, ClampMax=10))
	float MouseSensitivityMultiplier = 1;
};

USTRUCT(BlueprintType)
struct FSelectionOutlineSettings
{
	GENERATED_BODY()

public:
	UPROPERTY(EditDefaultsOnly, Category="Settings")
	FLinearColor Color = FLinearColor::White;
	
	UPROPERTY(EditDefaultsOnly, Category="Settings", meta=(UIMin=0, UIMax=3, ClampMin=0, ClampMax=3))
	float Thickness = 1;
};

USTRUCT(BlueprintType)
struct FFirstPersonSettings
{
	GENERATED_BODY()

public:
	UPROPERTY(EditDefaultsOnly, Category="RAC", meta=(UIMin=0, UIMax=10, ClampMin=0, ClampMax=10))
	float SpeedMultiplier = 1;

	UPROPERTY(EditDefaultsOnly, Category="RAC", meta=(UIMin=-10, UIMax=10, ClampMin=-10, ClampMax=10))
	float MouseSensitivityMultiplier = 1;

	UPROPERTY(EditDefaultsOnly, Category="RAC", meta=(UIMin=0, UIMax=300, ClampMin=0, ClampMax=300))
	float EyeHeight = 160;
};

USTRUCT(BlueprintType)
struct FFurnitureInfo
{
	GENERATED_BODY()

public:
	UPROPERTY(EditDefaultsOnly, Category="Settings")
	TObjectPtr<UTexture2D> Icon = nullptr;
	
	UPROPERTY(EditDefaultsOnly, Category="Settings")
	FText Name = FText::GetEmpty();
	
	UPROPERTY(EditDefaultsOnly, Category="Settings",meta=(MultiLine))
	FText Description = FText::GetEmpty();
};

USTRUCT(BlueprintType)
struct FFurnitureArray
{
	GENERATED_BODY()

public:
	UPROPERTY(EditDefaultsOnly, Category="RAC")
	TArray<TSubclassOf<ACPP_DynamicActor>> Furniture = TArray<TSubclassOf<ACPP_DynamicActor>>();
};

USTRUCT(BlueprintType)
struct FMaterialInfo
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, Category="RAC")
	TObjectPtr<UMaterialInterface> Material = nullptr;
	UPROPERTY(EditAnywhere, Category="RAC")
	TObjectPtr<UTexture2D> Icon = nullptr;
};

USTRUCT(BlueprintType)
struct FMaterialChangeInfo
{
	GENERATED_BODY()

public:
	UPROPERTY(EditDefaultsOnly, Category="RAC")
	FName ComponentName = NAME_None;

	UPROPERTY(EditDefaultsOnly, Category="RAC")
	int MaterialSlotIndex = 0;

	UPROPERTY(EditDefaultsOnly, Category="RAC")
	FText MaterialSlotName = FText::GetEmpty();

	UPROPERTY(EditDefaultsOnly, Category="RAC", meta=(ShowOnlyInnerProperties))
	TArray<FMaterialInfo> Materials = TArray<FMaterialInfo>();
};

USTRUCT()
struct FMaterialCategory
{
	GENERATED_BODY()

public:
	UPROPERTY(Transient)
	TObjectPtr<UPrimitiveComponent> Component = nullptr;

	int MaterialSlotIndex = 0;
	
	FText MaterialSlotName = FText::GetEmpty();

	UPROPERTY(Transient)
	TArray<FMaterialInfo> Materials = TArray<FMaterialInfo>();
};
#pragma endregion


UCLASS()
class RAC_LITE_API UCPP_Types : public UObject
{
	GENERATED_BODY()
};
