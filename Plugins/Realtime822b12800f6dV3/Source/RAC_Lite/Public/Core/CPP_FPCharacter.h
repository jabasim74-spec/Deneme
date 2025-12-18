// Copyright Stanislav Perekupenko 2024. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "CPP_PawnInterface.h"
#include "GameFramework/Character.h"
#include "CPP_FPCharacter.generated.h"

class UMaterial;
class UPostProcessComponent;
class ACPP_ConfiguratorGameMode;

UCLASS(NotPlaceable)
class RAC_LITE_API ACPP_FPCharacter : public ACharacter, public ICPP_PawnInterface
{
	GENERATED_BODY()

public:
	ACPP_FPCharacter();

protected:
	virtual void BeginPlay() override;
	
	virtual void FBMovement(float _value) override;
	
	virtual void LRMovement(float _value) override;
	
	virtual void RecalculateBaseEyeHeight() override;

private:
	UPROPERTY(Transient)
	TObjectPtr<ACPP_ConfiguratorGameMode> GameMode;

	UPROPERTY()
	TObjectPtr<UPostProcessComponent> PostProcessComponent;

	UPROPERTY()
	TObjectPtr<UMaterial> PostProcessMaterial;
};
