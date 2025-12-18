// Copyright Stanislav Perekupenko 2024. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "CPP_Types.h"
#include "Blueprint/UserWidget.h"
#include "CPP_FurnitureCategoryWidget.generated.h"

class UTextBlock;
class UVerticalBox;
class UCPP_ShadowedButton;
class UCPP_FurnitureButton;
class UCPP_SelectableButton;

UCLASS(Abstract)
class RAC_LITE_API UCPP_FurnitureCategoryWidget : public UUserWidget
{
	GENERATED_BODY()

public:
	FNoParamSignature OnChildVisibilityChanged;
	
	void SetUp(const FText& _categoryName, const TArray<TSubclassOf<ACPP_DynamicActor>>& _furniture);

private:
	
	UFUNCTION()
	void ShowHideButton_OnClicked(UCPP_ShadowedButton* _sender);

	UPROPERTY(EditDefaultsOnly, Category="Settings")
	TObjectPtr<UTexture2D> ShowIcon;

	UPROPERTY(EditDefaultsOnly, Category="Settings")
	TObjectPtr<UTexture2D> HideIcon;

	UPROPERTY(EditDefaultsOnly, Category="Settings")
	TSubclassOf<UCPP_FurnitureButton> FurnitureButtonClass;

	UPROPERTY(EditDefaultsOnly, Category="Components", meta=(BindWidget))
	TObjectPtr<UTextBlock> CategoryNameTextBlock;

	UPROPERTY(EditDefaultsOnly, Category="Components", meta=(BindWidget))
	TObjectPtr<UCPP_SelectableButton> ShowHideButton;

	UPROPERTY(EditDefaultsOnly, Category="Components", meta=(BindWidget))
	TObjectPtr<UVerticalBox> ContentVerticalBox;

	bool IsInitialized = false;
};
