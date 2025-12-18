// Copyright Stanislav Perekupenko 2024. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "InputActionValue.h"
#include "Engine/HitResult.h"
#include "EnhancedInputComponent.h"
#include "GameFramework/PlayerController.h"
#include "CPP_ConfiguratorPlayerController.generated.h"

class UInputAction;
class ICPP_PawnInterface;
class UInputMappingContext;
class ACPP_ConfiguratorGameMode;

UCLASS()
class RAC_LITE_API ACPP_ConfiguratorPlayerController : public APlayerController
{
	GENERATED_BODY()

public:
	ACPP_ConfiguratorPlayerController();

protected:
	virtual void BeginPlay() override;
	
	virtual void SetupInputComponent() override;

private:
	UPROPERTY()
	TObjectPtr<UInputMappingContext> InputMapping;

	UPROPERTY()
	TObjectPtr<UInputAction> FBMovementAction;
	
	UPROPERTY()
	TObjectPtr<UInputAction> LRMovementAction;

	UPROPERTY()
	TObjectPtr<UInputAction> UDLookAction;
	
	UPROPERTY()
	TObjectPtr<UInputAction> LRLookAction;

	UPROPERTY()
	TObjectPtr<UInputAction> SelectionAction;

	UPROPERTY()
	TObjectPtr<UInputAction> CameraRotationAction;

	UFUNCTION()
	void LRMovement(const FInputActionValue& _value);

	UFUNCTION()
	void FBMovement(const FInputActionValue& _value);

	UFUNCTION()
	void UDLook(const FInputActionValue& _value);
	
	UFUNCTION()
	void LRLook(const FInputActionValue& _value);

	UFUNCTION()
	void SelectionPressed(const FInputActionValue& _value);

	UFUNCTION()
	void CameraRotationPressed(const FInputActionValue& _value);
	
	UFUNCTION()
	void CameraRotationReleased(const FInputActionValue& _value);

	UPROPERTY(Transient)
	TObjectPtr<ACPP_ConfiguratorGameMode> GameMode;

	UPROPERTY(Transient)
	TObjectPtr<UEnhancedInputComponent> EnhancedInputComponent;

	bool IsCameraRotationPressed = false;
	
	FEnhancedInputActionValueBinding* UDLookActionBinding;
	
	FEnhancedInputActionValueBinding* LRLookActionBinding;

	float MouseLocationX,MouseLocationY;
};
