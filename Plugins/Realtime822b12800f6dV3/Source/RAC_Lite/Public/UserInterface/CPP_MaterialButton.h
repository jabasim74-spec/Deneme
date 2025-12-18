// Copyright Stanislav Perekupenko 2024. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "CPP_Types.h"
#include "CPP_ShadowedButton.h"
#include "CPP_MaterialButton.generated.h"

class UImage;

UCLASS(Abstract)
class RAC_LITE_API UCPP_MaterialButton : public UCPP_ShadowedButton
{
	GENERATED_BODY()

public:
	void SetUp(UPrimitiveComponent* _componentToChange, int _materialSlotIndex, const FMaterialInfo& _materialInfo);

protected:
	virtual void OnClicked() override;

private:
	UFUNCTION()
	void SelectableActor_OnMaterialChanged();

	UPROPERTY(EditDefaultsOnly, Category="Components", meta=(BindWidget))
	TObjectPtr<UImage> IconImage;

	UPROPERTY(Transient)
	TObjectPtr<UPrimitiveComponent> ComponentToChange;

	UPROPERTY(Transient)
	TObjectPtr<UMaterialInterface> Material;

	int MaterialSlotIndex;

	UPROPERTY(Transient)
	TObjectPtr<ACPP_SelectableActor> SelectableActor;
};
