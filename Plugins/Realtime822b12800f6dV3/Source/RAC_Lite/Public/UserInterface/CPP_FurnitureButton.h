// Copyright Stanislav Perekupenko 2024. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "CPP_Types.h"
#include "CPP_ShadowedButton.h"
#include "CPP_FurnitureButton.generated.h"

class UImage;
class UButton;
class UTextBlock;
class ACPP_DynamicActor;
class ACPP_ConfiguratorGameMode;

UCLASS(Abstract)
class RAC_LITE_API UCPP_FurnitureButton : public UCPP_ShadowedButton
{
	GENERATED_BODY()

public:
	void SetUp(const TSubclassOf<ACPP_DynamicActor>& _furniture);

protected:
	virtual void NativeTick(const FGeometry& _myGeometry, float _inDeltaTime) override;

private:
	void UpdateSpawnedActorLocationAndRotation();

	virtual void OnHovered() override;
	
	virtual void OnUnhovered() override;
	
	virtual void OnPressed() override { IsPressed = true; }
	
	virtual void OnReleased() override;


	UPROPERTY(Transient)
	TSubclassOf<ACPP_DynamicActor> FurnitureClass = nullptr;

	UPROPERTY(EditDefaultsOnly, Category="Components", meta=(BindWidget))
	TObjectPtr<UTextBlock> NameTextBlock;

	UPROPERTY(EditDefaultsOnly, Category="Components", meta=(BindWidget))
	TObjectPtr<UTextBlock> DescriptionTextBlock;

	UPROPERTY(EditDefaultsOnly, Category="Components", meta=(BindWidget))
	TObjectPtr<UImage> IconImage;

	bool IsInitialized = false;
	
	bool IsPressed = false;

	UPROPERTY(Transient)
	TObjectPtr<ACPP_DynamicActor> SpawnedActor;

	UPROPERTY(Transient)
	TObjectPtr<APlayerController> PlayerController;

	UPROPERTY(Transient)
	TObjectPtr<ACPP_ConfiguratorGameMode> GameMode;
};
