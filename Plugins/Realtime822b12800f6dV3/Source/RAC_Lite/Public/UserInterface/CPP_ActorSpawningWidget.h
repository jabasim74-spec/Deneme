// Copyright Stanislav Perekupenko 2024. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "UnrealClient.h"
#include "Blueprint/UserWidget.h"
#include "CPP_ActorSpawningWidget.generated.h"

class URetainerBox;
class UScrollBox;
class UCPP_FurnitureList;
class UCPP_FurnitureCategoryWidget;

UCLASS(Abstract)
class RAC_LITE_API UCPP_ActorSpawningWidget : public UUserWidget
{
	GENERATED_BODY()

public:
	void SetUp(UCPP_FurnitureList* _furnitureList);

protected:
	virtual void NativeTick(const FGeometry& MyGeometry, float InDeltaTime) override;

private:
	void ViewportResized(FViewport* _viewport, unsigned _i) { UpdateRetainerBox(); }

	UFUNCTION()
	void UpdateRetainerBox();

	bool IsInitialized;


	UPROPERTY(EditDefaultsOnly, Category="Settings")
	TSubclassOf<UCPP_FurnitureCategoryWidget> FurnitureCategoryWidgetClass;

	UPROPERTY(EditDefaultsOnly, Category="Components", meta=(BindWidget))
	TObjectPtr<UScrollBox> ContentScrollBox;

	UPROPERTY(EditDefaultsOnly, Category="Components", meta=(BindWidget))
	TObjectPtr<URetainerBox> MainRetainerBox;
};
