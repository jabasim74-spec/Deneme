// Copyright Stanislav Perekupenko 2024. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "CPP_ShadowedButton.h"
#include "CPP_SelectableButton.generated.h"

class UImage;
class UBorder;
class UButton;

UCLASS(Abstract)
class RAC_LITE_API UCPP_SelectableButton : public UCPP_ShadowedButton
{
	GENERATED_BODY()

public:
	bool GetIsSelected() const { return IsSelected; }
	
	void SetIsSelected(bool _newIsSelected);
	
	void SetIcon(UTexture2D* _icon);

protected:
	virtual void NativePreConstruct() override;

private:
	UPROPERTY(EditAnywhere, Category="Settings")
	TObjectPtr<UTexture2D> Icon;

	UPROPERTY(EditAnywhere, Category="Settings")
	bool IsSelected = false;

	UPROPERTY(EditAnywhere, Category="Settings")
	bool DisableWhenSelected = false;

	UPROPERTY(EditDefaultsOnly, Category="Components", meta=(BindWidget))
	TObjectPtr<UImage> IconImage;

	bool IsInitialized = false;
};
