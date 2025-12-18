// Copyright Stanislav Perekupenko 2024. All Rights Reserved.

#include "UserInterface/CPP_MainWidget.h"
#include "Components/TextBlock.h"
#include "Components/VerticalBox.h"
#include "Components/VerticalBoxSlot.h"
#include "Components/WidgetSwitcher.h"
#include "Kismet/KismetSystemLibrary.h"
#include "Core/CPP_ConfiguratorGameMode.h"
#include "UserInterface/CPP_SelectableButton.h"
#include "UserInterface/CPP_ActorSpawningWidget.h"


void UCPP_MainWidget::NativeConstruct()
{
	Super::NativeConstruct();

	if (GameMode)return;
	GameMode = GetWorld()->GetAuthGameMode<ACPP_ConfiguratorGameMode>();
	if (!GameMode)return;

	ShowInfoButton->SetVisibility(GameMode->GetInfoWidgetClass()?ESlateVisibility::Visible:ESlateVisibility::Collapsed);
	AppNameTextBlock->SetText(GameMode->GetAppName());
	FirstPersonModeButton->SetIsSelected(GameMode->GetCameraViewMode() == ECameraViewMode::FirstPerson);
	FlyingModeButton->SetIsSelected(GameMode->GetCameraViewMode() == ECameraViewMode::Flying);

	ExitButton->OnClickedDelegate.AddUObject(this, &ThisClass::ExitButton_OnClicked);
	TakeScreenshotButton->OnClickedDelegate.AddUObject(this, &ThisClass::TakeScreenshotButton_OnClicked);
	HideUIButton->OnClickedDelegate.AddUObject(this, &ThisClass::HideUIButton_OnClicked);
	ShowUIButton->OnClickedDelegate.AddUObject(this, &ThisClass::ShowUIButton_OnClicked);
	FirstPersonModeButton->OnClickedDelegate.AddUObject(this, &ThisClass::FirstPersonModeButton_OnClicked);
	FlyingModeButton->OnClickedDelegate.AddUObject(this, &ThisClass::FlyingModeButton_OnClicked);
	ActorConfigurationButton->OnClickedDelegate.AddUObject(this, &ThisClass::ActorConfigurationButton_OnClicked);
	ActorSpawningButton->OnClickedDelegate.AddUObject(this, &ThisClass::ActorSpawningButton_OnClicked);
	ShowInfoButton->OnClickedDelegate.AddUObject(this, &ThisClass::ShowInfoButton_OnClicked);
	CloseInfoButton->OnClickedDelegate.AddUObject(this, &ThisClass::CloseInfoButton_OnClicked);

	if(GameMode->GetInfoWidgetClass())
	{
		UUserWidget*infoWidget=CreateWidget(this,GameMode->GetInfoWidgetClass());
		UVerticalBoxSlot* vbs= InfoVerticalBox->AddChildToVerticalBox(infoWidget);
		vbs->SetHorizontalAlignment(HAlign_Fill);
		vbs->SetVerticalAlignment(VAlign_Fill);
		vbs->SetPadding(20);
		if(GameMode->GetShowInfoOnStartUp())MainWidgetSwitcher->SetActiveWidgetIndex(2);
	}

	ActorSpawningPanel->SetUp(GameMode->GetFurnitureList());
}

void UCPP_MainWidget::ActorConfigurationButton_OnClicked(UCPP_ShadowedButton* _sender)
{
	SetActivePanel(ActivePanel == EPanel::ActorConfiguration ? EPanel::None : EPanel::ActorConfiguration);
}

void UCPP_MainWidget::ActorSpawningButton_OnClicked(UCPP_ShadowedButton* _sender)
{
	SetActivePanel(ActivePanel == EPanel::ActorSpawning ? EPanel::None : EPanel::ActorSpawning);
}

void UCPP_MainWidget::SetActivePanel(EPanel _newActivePanel)
{
	if (ActivePanel == _newActivePanel)return;
	ActivePanel = _newActivePanel;
	PanelsWidgetSwitcher->SetVisibility(ActivePanel == EPanel::None ? ESlateVisibility::Collapsed : ESlateVisibility::SelfHitTestInvisible);
	ActorSpawningButton->SetIsSelected(ActivePanel == EPanel::ActorSpawning);
	ActorConfigurationButton->SetIsSelected(ActivePanel == EPanel::ActorConfiguration);
	PanelsWidgetSwitcher->SetActiveWidgetIndex(ActivePanel == EPanel::ActorSpawning ? 0 : 1);
}

void UCPP_MainWidget::FirstPersonModeButton_OnClicked(UCPP_ShadowedButton* _sender)
{
	GameMode->SetCameraViewMode(ECameraViewMode::FirstPerson);
	FirstPersonModeButton->SetIsSelected(true);
	FlyingModeButton->SetIsSelected(false);
}

void UCPP_MainWidget::FlyingModeButton_OnClicked(UCPP_ShadowedButton* _sender)
{
	GameMode->SetCameraViewMode(ECameraViewMode::Flying);
	FirstPersonModeButton->SetIsSelected(false);
	FlyingModeButton->SetIsSelected(true);
}

void UCPP_MainWidget::HideUIButton_OnClicked(UCPP_ShadowedButton* _sender)
{
	GameMode->SetIsUIHidden(true);
	MainWidgetSwitcher->SetActiveWidgetIndex(1);
}

void UCPP_MainWidget::ShowUIButton_OnClicked(UCPP_ShadowedButton* _sender)
{
	GameMode->SetIsUIHidden(false);
	MainWidgetSwitcher->SetActiveWidgetIndex(0);
}

void UCPP_MainWidget::ExitButton_OnClicked(UCPP_ShadowedButton* _sender)
{
	UKismetSystemLibrary::QuitGame(GetWorld(), GetWorld()->GetFirstPlayerController(), EQuitPreference::Quit, true);
}

void UCPP_MainWidget::CloseInfoButton_OnClicked(UCPP_ShadowedButton* _sender)
{
	MainWidgetSwitcher->SetActiveWidgetIndex(0);
}

void UCPP_MainWidget::ShowInfoButton_OnClicked(UCPP_ShadowedButton* _sender)
{
	MainWidgetSwitcher->SetActiveWidgetIndex(2);
}

void UCPP_MainWidget::TakeScreenshotButton_OnClicked(UCPP_ShadowedButton* _sender)
{
	UKismetSystemLibrary::ExecuteConsoleCommand(GetWorld(), "HighResShot 2");
}
