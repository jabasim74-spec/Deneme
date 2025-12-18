// Copyright Stanislav Perekupenko 2024. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "CPP_GizmoWidget.generated.h"


class ACPP_ConfiguratorGameMode;
class UImage;
class UBorder;
class UButton;
class UBackgroundBlur;
class ACPP_DynamicActor;

UENUM()
enum class EGizmoStatus : uint8
{
	None,
	Move,
	Rotation
};

UCLASS(Abstract)
class RAC_LITE_API UCPP_GizmoWidget : public UUserWidget
{
	GENERATED_BODY()

public:
	void SetControlledActor(ACPP_DynamicActor* _newControlledActor) { ControlledActor = _newControlledActor; }

protected:
	virtual void NativeConstruct() override;
	
	virtual void NativeTick(const FGeometry& _myGeometry, float _inDeltaTime) override;

private:
	EGizmoStatus GetHoverStatus(const FGeometry& _myGeometry) const;

	UFUNCTION()
	void MainButton_OnPressed();
	
	UFUNCTION()
	void MainButton_OnReleased();

	UPROPERTY(EditDefaultsOnly, Category="Components", meta=(BindWidget))
	TObjectPtr<UImage> MainImage;
	
	UPROPERTY(EditDefaultsOnly, Category="Components", meta=(BindWidget))
	TObjectPtr<UButton> MainButton;
	
	UPROPERTY(EditDefaultsOnly, Category="Components", meta=(BindWidget))
	TObjectPtr<UBorder> ShadowBorder;
	
	UPROPERTY(EditDefaultsOnly, Category="Components", meta=(BindWidget))
	TObjectPtr<UBorder> BackgroundBorder;
	
	UPROPERTY(EditDefaultsOnly, Category="Components", meta=(BindWidget))
	TObjectPtr<UBackgroundBlur> BackgroundBlur;

	EGizmoStatus GizmoStatus = EGizmoStatus::None;

	UPROPERTY(Transient)
	TObjectPtr<ACPP_DynamicActor> ControlledActor;

	UPROPERTY(Transient)
	TObjectPtr<UMaterialInstanceDynamic> MaterialInstance;

	UPROPERTY(Transient)
	TObjectPtr<APlayerController> PlayerController;

	UPROPERTY(Transient)
	TObjectPtr<ACPP_ConfiguratorGameMode> GameMode;

	float InitialRotation;
	
	float InitialRotationOffset;
};
