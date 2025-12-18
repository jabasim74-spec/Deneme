// Copyright Stanislav Perekupenko 2024. All Rights Reserved.


#include "Core/CPP_ConfiguratorGameMode.h"
#include "Core/CPP_FlyPawn.h"
#include "Core/CPP_FPCharacter.h"
#include "Actors/CPP_DynamicActor.h"
#include "Actors/CPP_SelectableActor.h"
#include "Components/WidgetComponent.h"
#include "UserInterface/CPP_MainWidget.h"
#include "UserInterface/CPP_GizmoWidget.h"
#include "Blueprint/WidgetBlueprintLibrary.h"
#include "Components/RetainerBox.h"
#include "Materials/MaterialInstanceDynamic.h"
#include "Core/CPP_ConfiguratorPlayerController.h"


ACPP_ConfiguratorGameMode::ACPP_ConfiguratorGameMode()
{
	GET_CLASS(UCPP_MainWidget, MainWidgetFinder, MAIN_WIDGET_PATH);
	if (MainWidgetFinder.Succeeded())MainWidgetClass = MainWidgetFinder.Class;

	GET_CLASS(UUserWidget, TutorialWidgetFinder, TUTORIAL_WIDGET_PATH);
	if (TutorialWidgetFinder.Succeeded())InfoWidgetClass = TutorialWidgetFinder.Class;

	GET_CLASS(UCPP_GizmoWidget, GizmoWidgetFinder, GIZMO_WIDGET_PATH);
	if (GizmoWidgetFinder.Succeeded())GizmoWidgetClass = GizmoWidgetFinder.Class;

	PlayerControllerClass = ACPP_ConfiguratorPlayerController::StaticClass();
}

void ACPP_ConfiguratorGameMode::SetSelectedActor(ACPP_SelectableActor* _newSelectedActor,bool _hideGizmo)
{
	if ((IsUIHidden && _newSelectedActor) || (_newSelectedActor && SelectedActor == _newSelectedActor))return;
	if (SelectedActor)
	{
		if (GizmoComponent)GizmoComponent->DestroyComponent();
		GizmoComponent=nullptr;
		SelectedActor->SetIsSelected(false);
		SelectedActor->OnDestroyed.RemoveDynamic(this, &ThisClass::SelectedActor_OnDestrojed);
	}
	SelectedActor = _newSelectedActor;
	if (SelectedActor)
	{
		SelectedActor->OnDestroyed.AddDynamic(this, &ThisClass::SelectedActor_OnDestrojed);
		if(!_hideGizmo)AddGizmoToSelectedActor();
		SelectedActor->SetIsSelected(true);
	}
	OnSelectedActorChanged.Broadcast(SelectedActor);
}

void ACPP_ConfiguratorGameMode::SetIsUIHidden(bool _newIsHidden)
{
	if (IsUIHidden == _newIsHidden)return;
	IsUIHidden = _newIsHidden;
	if (IsUIHidden)SetSelectedActor(nullptr);
}

void ACPP_ConfiguratorGameMode::SetCameraViewMode(ECameraViewMode _newCameraViewMode)
{
	if (DefaultViewMode == _newCameraViewMode)return;
	DefaultViewMode = _newCameraViewMode;
	if (DefaultViewMode == ECameraViewMode::Flying)
	{
		if (!FlyPawn)
		{
			AActor* playerStart = ChoosePlayerStart_Implementation(GetWorld()->GetFirstPlayerController());
			if (playerStart)FlyPawn = GetWorld()->SpawnActor<ACPP_FlyPawn>(ACPP_FlyPawn::StaticClass(), playerStart->GetTransform());
			else FlyPawn = GetWorld()->SpawnActor<ACPP_FlyPawn>(ACPP_FlyPawn::StaticClass(), FTransform::Identity);
		}
		GetWorld()->GetFirstPlayerController()->Possess(FlyPawn);
	}
	else
	{
		if (!FPCharacter)
		{
			AActor* playerStart = ChoosePlayerStart_Implementation(GetWorld()->GetFirstPlayerController());
			if (playerStart)FPCharacter = GetWorld()->SpawnActor<ACPP_FPCharacter>(ACPP_FPCharacter::StaticClass(), playerStart->GetTransform());
			else FPCharacter = GetWorld()->SpawnActor<ACPP_FPCharacter>(ACPP_FPCharacter::StaticClass(), FTransform::Identity);
		}
		GetWorld()->GetFirstPlayerController()->Possess(FPCharacter);
	}
}

void ACPP_ConfiguratorGameMode::AddGizmoToSelectedActor()
{
	if(GizmoComponent)return;
	if (ACPP_DynamicActor* da = Cast<ACPP_DynamicActor>(SelectedActor))
	{
		GizmoComponent = Cast<UWidgetComponent>(da->AddComponentByClass(UWidgetComponent::StaticClass()
																		, false, FTransform::Identity, false));
		GizmoComponent->SetDrawSize(FVector2d(GizmoScale));
		GizmoComponent->SetWidgetSpace(EWidgetSpace::Screen);
		UCPP_GizmoWidget* gizmoWidget = CreateWidget<UCPP_GizmoWidget>(GetWorld(), GizmoWidgetClass);
		gizmoWidget->SetControlledActor(da);
		GizmoComponent->SetWidget(gizmoWidget);
		GizmoComponent->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	}
}

void ACPP_ConfiguratorGameMode::BeginPlay()
{
	Super::BeginPlay();

	if (GetCameraViewMode() == ECameraViewMode::Flying)FlyPawn = GetWorld()->GetFirstPlayerController()->GetPawn<ACPP_FlyPawn>();
	else FPCharacter = GetWorld()->GetFirstPlayerController()->GetPawn<ACPP_FPCharacter>();

	if (MainWidgetClass)
	{
		MainWidget = Cast<UCPP_MainWidget>(CreateWidget(GetWorld(), MainWidgetClass));
		if (MainWidget)MainWidget->AddToViewport();
		UWidgetBlueprintLibrary::SetInputMode_GameAndUIEx(GetWorld()->GetFirstPlayerController(),
		                                                  MainWidget, EMouseLockMode::DoNotLock, false);
		UWidgetBlueprintLibrary::SetFocusToGameViewport();
	}
}

UClass* ACPP_ConfiguratorGameMode::GetDefaultPawnClassForController_Implementation(AController* InController)
{
	return GetCameraViewMode() == ECameraViewMode::Flying ? ACPP_FlyPawn::StaticClass() : ACPP_FPCharacter::StaticClass();
}
