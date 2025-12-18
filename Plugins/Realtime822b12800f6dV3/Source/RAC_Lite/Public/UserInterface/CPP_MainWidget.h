// Copyright Stanislav Perekupenko 2024. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "CPP_Types.h"
#include "Blueprint/UserWidget.h"
#include "CPP_MainWidget.generated.h"

class UTextBlock;
class UVerticalBox;
class UWidgetSwitcher;
class UCPP_ShadowedButton;
class UCPP_SelectableButton;
class UCPP_ActorSpawningWidget;
class ACPP_ConfiguratorGameMode;
class UCPP_ActorConfigurationWidget;

UCLASS(Abstract)
class RAC_LITE_API UCPP_MainWidget : public UUserWidget
{
	GENERATED_BODY()

protected:
	virtual void NativeConstruct() override;

	virtual FReply NativeOnMouseButtonDown( const FGeometry& InGeometry, const FPointerEvent& InMouseEvent )override{return FReply::Handled();}
	virtual FReply NativeOnMouseButtonUp( const FGeometry& InGeometry, const FPointerEvent& InMouseEvent )override{return FReply::Handled();}
	virtual FReply NativeOnMouseButtonDoubleClick( const FGeometry& InGeometry, const FPointerEvent& InMouseEvent )override{return FReply::Handled();}
private:
	UPROPERTY(EditDefaultsOnly, Category="Components", meta=(BindWidget))
	TObjectPtr<UTextBlock> AppNameTextBlock;

	UPROPERTY(EditDefaultsOnly, Category="Components", meta=(BindWidget))
	TObjectPtr<UWidgetSwitcher> MainWidgetSwitcher;

	UPROPERTY(EditDefaultsOnly, Category="Components", meta=(BindWidget))
	TObjectPtr<UCPP_ActorConfigurationWidget> ActorConfigurationPanel;

	UPROPERTY(EditDefaultsOnly, Category="Components", meta=(BindWidget))
	TObjectPtr<UCPP_ActorSpawningWidget> ActorSpawningPanel;

	UPROPERTY(EditDefaultsOnly, Category="Components", meta=(BindWidget))
	TObjectPtr<UWidgetSwitcher> PanelsWidgetSwitcher;

	UPROPERTY(EditDefaultsOnly, Category="Components", meta=(BindWidget))
	TObjectPtr<UCPP_SelectableButton> ActorConfigurationButton;

	UFUNCTION()
	void ActorConfigurationButton_OnClicked(UCPP_ShadowedButton* _sender);

	UPROPERTY(EditDefaultsOnly, Category="Components", meta=(BindWidget))
	TObjectPtr<UCPP_SelectableButton> ActorSpawningButton;

	UFUNCTION()
	void ActorSpawningButton_OnClicked(UCPP_ShadowedButton* _sender);

	UPROPERTY(EditDefaultsOnly, Category="Components", meta=(BindWidget))
	TObjectPtr<UCPP_SelectableButton> FirstPersonModeButton;

	UFUNCTION()
	void FirstPersonModeButton_OnClicked(UCPP_ShadowedButton* _sender);

	UPROPERTY(EditDefaultsOnly, Category="Components", meta=(BindWidget))
	TObjectPtr<UCPP_SelectableButton> FlyingModeButton;

	UFUNCTION()
	void FlyingModeButton_OnClicked(UCPP_ShadowedButton* _sender);


	UPROPERTY(EditDefaultsOnly, Category="Components", meta=(BindWidget))
	TObjectPtr<UCPP_SelectableButton> HideUIButton;

	UFUNCTION()
	void HideUIButton_OnClicked(UCPP_ShadowedButton* _sender);

	UPROPERTY(EditDefaultsOnly, Category="Components", meta=(BindWidget))
	TObjectPtr<UCPP_SelectableButton> ShowUIButton;

	UFUNCTION()
	void ShowUIButton_OnClicked(UCPP_ShadowedButton* _sender);

	UPROPERTY(EditDefaultsOnly, Category="Components", meta=(BindWidget))
	TObjectPtr<UCPP_SelectableButton> TakeScreenshotButton;

	UFUNCTION()
	void TakeScreenshotButton_OnClicked(UCPP_ShadowedButton* _sender);


	UPROPERTY(EditDefaultsOnly, Category="Components", meta=(BindWidget))
	TObjectPtr<UCPP_SelectableButton> ExitButton;

	UFUNCTION()
	void ExitButton_OnClicked(UCPP_ShadowedButton* _sender);

	UPROPERTY(EditDefaultsOnly, Category="Components", meta=(BindWidget))
	TObjectPtr<UCPP_SelectableButton> CloseInfoButton;

	UFUNCTION()
	void CloseInfoButton_OnClicked(UCPP_ShadowedButton* _sender);
	
	UPROPERTY(EditDefaultsOnly, Category="Components", meta=(BindWidget))
	TObjectPtr<UCPP_SelectableButton> ShowInfoButton;

	UFUNCTION()
	void ShowInfoButton_OnClicked(UCPP_ShadowedButton* _sender);

	UPROPERTY(EditDefaultsOnly, Category="Components", meta=(BindWidget))
	TObjectPtr<UVerticalBox> InfoVerticalBox;

	UPROPERTY(Transient)
	TObjectPtr<ACPP_ConfiguratorGameMode> GameMode;

	EPanel ActivePanel = EPanel::None;

	void SetActivePanel(EPanel _newActivePanel);
};
