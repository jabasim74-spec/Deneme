// Copyright Stanislav Perekupenko 2024. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "CPP_Types.h"
#include "Blueprint/UserWidget.h"
#include "CPP_MaterialCategoryWidget.generated.h"

class UScrollBox;
class UTextBlock;
class UVerticalBox;
class UUniformGridPanel;
class UCPP_MaterialButton;
class UCPP_ShadowedButton;
class UCPP_SelectableButton;

UCLASS(Abstract)
class RAC_LITE_API UCPP_MaterialCategoryWidget : public UUserWidget
{
	GENERATED_BODY()

public:
	FNoParamSignature OnChildVisibilityChanged;
	
	void SetUp(const FMaterialCategory& _materialCategory);

private:
	UFUNCTION()
	void ShowHideButton_OnClicked(UCPP_ShadowedButton* _sender);

	UPROPERTY(EditDefaultsOnly, Category="Settings")
	TObjectPtr<UTexture2D> ShowIcon;

	UPROPERTY(EditDefaultsOnly, Category="Settings")
	TObjectPtr<UTexture2D> HideIcon;

	UPROPERTY(EditDefaultsOnly, Category="Settings")
	TSubclassOf<UCPP_MaterialButton> MaterialButtonClass;

	UPROPERTY(EditDefaultsOnly, Category="Components", meta=(BindWidget))
	TObjectPtr<UTextBlock> CategoryNameTextBlock;

	UPROPERTY(EditDefaultsOnly, Category="Components", meta=(BindWidget))
	TObjectPtr<UCPP_SelectableButton> ShowHideButton;

	UPROPERTY(EditDefaultsOnly, Category="Components", meta=(BindWidget))
	TObjectPtr<UUniformGridPanel> ContentUniformGridPanel;
};
