// Copyright Stanislav Perekupenko 2024. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "CPP_Types.h"
#include "GameFramework/GameModeBase.h"
#include "CPP_ConfiguratorGameMode.generated.h"

class UUserWidget;
class ACPP_FlyPawn;
class UCPP_MainWidget;
class UWidgetComponent;
class ACPP_FPCharacter;
class UCPP_FurnitureList;
class ACPP_SelectableActor;

UCLASS(Abstract, HideCategories=("Tick","Classes","Game","GameMode","Physics","Events","Cooking","LevelInstance"))
class RAC_LITE_API ACPP_ConfiguratorGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	ACPP_ConfiguratorGameMode();

	FSelectableActorSignature OnSelectedActorChanged;

	void SetSelectedActor(ACPP_SelectableActor* _newSelectedActor, bool _hideGizmo = false);

	void SetIsUIHidden(bool _newIsHidden);

	ECameraViewMode GetCameraViewMode() const { return DefaultViewMode; }

	void SetCameraViewMode(ECameraViewMode _newCameraViewMode);

	const FText& GetAppName() const { return AppName; }

	const FFlyingSettings& GetFlyingSettings() const { return FlyingSettings; }

	const FFirstPersonSettings& GetFirstPersonSettings() const { return FirstPersonSettings; }

	const FSelectionOutlineSettings& GetSelectionOutlineSettings() const { return SelectionOutlineSettings; }

	UCPP_FurnitureList* GetFurnitureList() const { return FurnitureList; }

	ACPP_SelectableActor* GetSelectedActor() const { return SelectedActor; }

	void AddGizmoToSelectedActor();

	bool GetEnableAutoAttaching() const { return EnableAutoAttaching; }

	bool GetEnableAutoRotation() const { return EnableAutoRotation; }

	TSubclassOf<UUserWidget>GetInfoWidgetClass()const{return InfoWidgetClass;}

	bool GetShowInfoOnStartUp()const{return ShowInfoOnStartup;}

protected:
	virtual void BeginPlay() override;
	virtual UClass* GetDefaultPawnClassForController_Implementation(AController* InController) override;

private:
	UFUNCTION()
	void SelectedActor_OnDestrojed(AActor* _destrojedActor) { SetSelectedActor(nullptr); }

	UPROPERTY(EditDefaultsOnly, Category="Settings")
	TObjectPtr<UCPP_FurnitureList> FurnitureList;

	UPROPERTY(EditDefaultsOnly, Category="Settings")
	FText AppName = FText::FromString("You Name Here");

	UPROPERTY(EditDefaultsOnly, Category="Settings")
	ECameraViewMode DefaultViewMode = ECameraViewMode::Flying;

	UPROPERTY(EditDefaultsOnly, Category="Settings", meta=(UIMin=50, UIMax=500, ClampMin=50, ClampMax=500))
	float GizmoScale = 100;

	UPROPERTY(EditDefaultsOnly, Category="Settings")
	bool EnableAutoAttaching = true;

	UPROPERTY(EditDefaultsOnly, Category="Settings")
	bool EnableAutoRotation = true;

	UPROPERTY(EditDefaultsOnly, Category="Settings")
	FFlyingSettings FlyingSettings;

	UPROPERTY(EditDefaultsOnly, Category="Settings")
	FFirstPersonSettings FirstPersonSettings;

	UPROPERTY(EditDefaultsOnly, Category="Settings")
	FSelectionOutlineSettings SelectionOutlineSettings;

	UPROPERTY(EditDefaultsOnly, Category="Settings")
	TSubclassOf<UUserWidget> InfoWidgetClass;

	UPROPERTY(EditDefaultsOnly, Category="Settings", meta=(EditCondition="InfoWidgetClass!=nullptr",EditConditionHides))
	bool ShowInfoOnStartup = true;

	UPROPERTY(Transient)
	TObjectPtr<ACPP_SelectableActor> SelectedActor = nullptr;

	UPROPERTY()
	TSubclassOf<UCPP_MainWidget> MainWidgetClass;

	UPROPERTY()
	TSubclassOf<UCPP_MainWidget> GizmoWidgetClass;

	UPROPERTY(Transient)
	TObjectPtr<UCPP_MainWidget> MainWidget;

	UPROPERTY(Transient)
	TObjectPtr<ACPP_FlyPawn> FlyPawn;

	UPROPERTY(Transient)
	TObjectPtr<ACPP_FPCharacter> FPCharacter;

	UPROPERTY(Transient)
	TObjectPtr<UWidgetComponent> GizmoComponent;

	bool IsUIHidden = false;
};
