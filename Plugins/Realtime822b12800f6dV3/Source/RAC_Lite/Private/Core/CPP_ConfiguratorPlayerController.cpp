// Copyright Stanislav Perekupenko 2024. All Rights Reserved.


#include "Core/CPP_ConfiguratorPlayerController.h"
#include "Engine/World.h"
#include "Engine/LocalPlayer.h"
#include "InputMappingContext.h"
#include "EnhancedInputComponent.h"
#include "Core/CPP_PawnInterface.h"
#include "EnhancedInputSubsystems.h"
#include "Blueprint/WidgetBlueprintLibrary.h"
#include "Core/CPP_ClickInterface.h"
#include "Core/CPP_ConfiguratorGameMode.h"
#include "Kismet/GameplayStatics.h"

ACPP_ConfiguratorPlayerController::ACPP_ConfiguratorPlayerController()
{
	bShowMouseCursor = true;

	GET_OBJECT(UInputAction, FBMovementAction_OF, IA_FBMOVEMENT_PATH);
	FBMovementAction = FBMovementAction_OF.Object;

	GET_OBJECT(UInputAction, LRMovementAction_OF, IA_LRMOVEMENT_PATH);
	LRMovementAction = LRMovementAction_OF.Object;

	GET_OBJECT(UInputAction, LRLookAction_OF, IA_LRLOOK_PATH);
	LRLookAction = LRLookAction_OF.Object;

	GET_OBJECT(UInputAction, UDLookAction_OF, IA_UDLOOK_PATH);
	UDLookAction = UDLookAction_OF.Object;

	GET_OBJECT(UInputAction, SelectionAction_OF, IA_SELECTION_PATH);
	SelectionAction = SelectionAction_OF.Object;

	GET_OBJECT(UInputAction, CameraRotationAction_OF, IA_CAMERAROTATION_PATH);
	CameraRotationAction = CameraRotationAction_OF.Object;

	GET_OBJECT(UInputMappingContext, InputMapping_OF, IMC_RAC_PATH);
	InputMapping = InputMapping_OF.Object;
}

void ACPP_ConfiguratorPlayerController::BeginPlay()
{
	Super::BeginPlay();
	GameMode = GetWorld()->GetAuthGameMode<ACPP_ConfiguratorGameMode>();
	UWidgetBlueprintLibrary::SetInputMode_GameAndUIEx(this,nullptr,EMouseLockMode::LockAlways,false);
	UGameplayStatics::SetViewportMouseCaptureMode(GetWorld(),EMouseCaptureMode::CapturePermanently_IncludingInitialMouseDown);
	UWidgetBlueprintLibrary::SetFocusToGameViewport();
}

void ACPP_ConfiguratorPlayerController::SetupInputComponent()
{
	Super::SetupInputComponent();

	UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(GetLocalPlayer());

	Subsystem->ClearAllMappings();
	Subsystem->AddMappingContext(InputMapping, 0);

	EnhancedInputComponent = Cast<UEnhancedInputComponent>(InputComponent);
	if (!EnhancedInputComponent)return;
	EnhancedInputComponent->BindAction(UDLookAction, ETriggerEvent::Triggered, this, &ACPP_ConfiguratorPlayerController::UDLook);
	EnhancedInputComponent->BindAction(LRLookAction, ETriggerEvent::Triggered, this, &ACPP_ConfiguratorPlayerController::LRLook);
	EnhancedInputComponent->BindAction(LRMovementAction, ETriggerEvent::Triggered, this, &ACPP_ConfiguratorPlayerController::LRMovement);
	EnhancedInputComponent->BindAction(FBMovementAction, ETriggerEvent::Triggered, this, &ACPP_ConfiguratorPlayerController::FBMovement);
	EnhancedInputComponent->BindAction(SelectionAction, ETriggerEvent::Started, this, &ACPP_ConfiguratorPlayerController::SelectionPressed);
	EnhancedInputComponent->BindAction(CameraRotationAction, ETriggerEvent::Started, this, &ACPP_ConfiguratorPlayerController::CameraRotationPressed);
	EnhancedInputComponent->BindAction(CameraRotationAction, ETriggerEvent::Completed, this, &ACPP_ConfiguratorPlayerController::CameraRotationReleased);
	UDLookActionBinding = &EnhancedInputComponent->BindActionValue(UDLookAction);
	LRLookActionBinding = &EnhancedInputComponent->BindActionValue(LRLookAction);
}

void ACPP_ConfiguratorPlayerController::LRMovement(const FInputActionValue& _value)
{
	if (ICPP_PawnInterface* pi = Cast<ICPP_PawnInterface>(GetPawn()))
		pi->LRMovement(_value.Get<float>());
}

void ACPP_ConfiguratorPlayerController::FBMovement(const FInputActionValue& _value)
{
	if (ICPP_PawnInterface* pi = Cast<ICPP_PawnInterface>(GetPawn()))
		pi->FBMovement(_value.Get<float>());
}

void ACPP_ConfiguratorPlayerController::UDLook(const FInputActionValue& _value)
{
	if (!GameMode || !IsCameraRotationPressed)return;
	AddPitchInput(_value.Get<float>() * (GameMode->GetCameraViewMode() == ECameraViewMode::Flying
		                                     ? GameMode->GetFlyingSettings().MouseSensitivityMultiplier
		                                     : GameMode->GetFirstPersonSettings().MouseSensitivityMultiplier));
}

void ACPP_ConfiguratorPlayerController::LRLook(const FInputActionValue& _value)
{
	if (!GameMode || !IsCameraRotationPressed)return;
	AddYawInput(_value.Get<float>() * (GameMode->GetCameraViewMode() == ECameraViewMode::Flying
		                                   ? GameMode->GetFlyingSettings().MouseSensitivityMultiplier
		                                   : GameMode->GetFirstPersonSettings().MouseSensitivityMultiplier));
}

void ACPP_ConfiguratorPlayerController::SelectionPressed(const FInputActionValue& _value)
{
	FHitResult hitResult;
	GetHitResultUnderCursorByChannel(UEngineTypes::ConvertToTraceType(ECC_Visibility), true, hitResult);
	if (ICPP_ClickInterface* interfaceActor = Cast<ICPP_ClickInterface>(hitResult.GetActor()))interfaceActor->Execute_Click(hitResult.GetActor(),hitResult);
	else GameMode->SetSelectedActor(nullptr);
}

void ACPP_ConfiguratorPlayerController::CameraRotationPressed(const FInputActionValue& _value)
{
	IsCameraRotationPressed = true;
	GetMousePosition(MouseLocationX,MouseLocationY);
	SetShowMouseCursor(false);
	UWidgetBlueprintLibrary::SetInputMode_GameOnly(this);
	UGameplayStatics::SetViewportMouseCaptureMode(GetWorld(),EMouseCaptureMode::CaptureDuringRightMouseDown);
}

void ACPP_ConfiguratorPlayerController::CameraRotationReleased(const FInputActionValue& _value)
{
	SetMouseLocation(MouseLocationX,MouseLocationY);
	SetShowMouseCursor(true);
	IsCameraRotationPressed = false;
	UWidgetBlueprintLibrary::SetInputMode_GameAndUIEx(this,nullptr,EMouseLockMode::LockAlways,false);
	UGameplayStatics::SetViewportMouseCaptureMode(GetWorld(),EMouseCaptureMode::CapturePermanently_IncludingInitialMouseDown);
	
}
