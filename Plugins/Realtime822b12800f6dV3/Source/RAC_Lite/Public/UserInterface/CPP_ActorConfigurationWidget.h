// Copyright Stanislav Perekupenko 2024. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "UnrealClient.h"
#include "Blueprint/UserWidget.h"
#include "Actors/CPP_SelectableActor.h"
#include "CPP_ActorConfigurationWidget.generated.h"

class URetainerBox;
class USpacer;
class UScrollBox;
class UCPP_ShadowedButton;
class UCPP_SelectableButton;
class ACPP_ConfiguratorGameMode;
class UCPP_MaterialCategoryWidget;

UCLASS(Abstract)
class RAC_LITE_API UCPP_ActorConfigurationWidget : public UUserWidget
{
	GENERATED_BODY()

protected:
	virtual void NativeConstruct() override;
	virtual void NativeTick(const FGeometry& MyGeometry, float InDeltaTime) override;

private:
	void ViewportResized(FViewport* _viewport, unsigned _i) { UpdateRetainerBox(); }

	UFUNCTION()
	void UpdateRetainerBox();
	
	UFUNCTION()
	void GameMode_OnSelectedActorChanged(ACPP_SelectableActor* _newSelectedActor);

	UPROPERTY(Transient)
	TObjectPtr<ACPP_ConfiguratorGameMode> GameMode;

	UPROPERTY(EditDefaultsOnly, Category="Settings")
	TSubclassOf<UCPP_MaterialCategoryWidget> MaterialCategoryWidgetClass;

	UPROPERTY(EditDefaultsOnly, Category="Components", meta=(BindWidget))
	TObjectPtr<UCPP_SelectableButton> DeleteButton;

	UPROPERTY(EditDefaultsOnly, Category="Components", meta=(BindWidget))
	TObjectPtr<USpacer> FreeZoneSpacer;

	UPROPERTY(EditDefaultsOnly, Category="Components", meta=(BindWidget))
	TObjectPtr<UScrollBox> ContentScrollBox;

	UFUNCTION()
	void DeleteButton_OnClicked(UCPP_ShadowedButton* _sender);

	UPROPERTY(Transient)
	TArray<TObjectPtr<UUserWidget>> MaterialCategoriesWidgets;

	UPROPERTY(EditDefaultsOnly, Category="Components", meta=(BindWidget))
	TObjectPtr<URetainerBox> MainRetainerBox;
};
