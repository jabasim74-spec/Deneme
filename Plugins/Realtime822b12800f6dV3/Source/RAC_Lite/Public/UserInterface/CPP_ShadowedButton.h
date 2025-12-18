// Copyright Stanislav Perekupenko 2024. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "CPP_ShadowedButton.generated.h"

class UBorder;
class UButton;
class UCPP_ShadowedButton;

DECLARE_MULTICAST_DELEGATE_OneParam(FShadowedButtonSignature, UCPP_ShadowedButton*)

UCLASS(Abstract)
class RAC_LITE_API UCPP_ShadowedButton : public UUserWidget
{
	GENERATED_BODY()

public:
	FShadowedButtonSignature OnClickedDelegate;

protected:
	virtual void NativePreConstruct() override;

	virtual void NativeConstruct() override;

	void SetShadowVisible(bool _newVisible);

	UFUNCTION()
	void MainButton_OnClicked();

	UFUNCTION()
	void MainButton_OnPressed() { OnPressed(); }

	UFUNCTION()
	void MainButton_OnReleased() { OnReleased(); }

	UFUNCTION()
	void MainButton_OnHovered();
	
	UFUNCTION()
	void MainButton_OnUnhovered();

	UPROPERTY(EditDefaultsOnly, Category="Components", meta=(BindWidget))
	TObjectPtr<UButton> MainButton;

	virtual void OnClicked() { ; }
	
	virtual void OnPressed() { ; }
	
	virtual void OnReleased() { ; }
	
	virtual void OnHovered() { ; }
	
	virtual void OnUnhovered() { ; }

private:
	void UpdateShadow();

	UPROPERTY(EditAnywhere, Category="Settings")
	float CornerRadius = 25;
	
	UPROPERTY(EditDefaultsOnly, Category="Components", meta=(BindWidget))
	TObjectPtr<UBorder> ShadowBorder;

	bool IsInitialized = false;
	
	bool IsHovered = false;

	bool IsShadowVisible = true;
};
