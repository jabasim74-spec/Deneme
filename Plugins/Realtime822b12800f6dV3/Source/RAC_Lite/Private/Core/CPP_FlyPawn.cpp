// Copyright Stanislav Perekupenko 2024. All Rights Reserved.

#include "Core/CPP_FlyPawn.h"

#include "Engine/World.h"
#include "Materials/Material.h"
#include "Materials/MaterialInterface.h"
#include "Core/CPP_ConfiguratorGameMode.h"
#include "Components/StaticMeshComponent.h"
#include "Components/PostProcessComponent.h"
#include "Materials/MaterialInstanceDynamic.h"
#include "GameFramework/FloatingPawnMovement.h"


ACPP_FlyPawn::ACPP_FlyPawn()
{
	GET_OBJECT(UMaterial, PostProcessMaterial_OF, OUTLINE_POSTPROCESS_PATH);
	PostProcessMaterial = PostProcessMaterial_OF.Object;
	PostProcessComponent = CreateDefaultSubobject<UPostProcessComponent>("PostProcessComponent");

	bAddDefaultMovementBindings = false;
	bUseControllerRotationYaw = true;
	bUseControllerRotationPitch = true;
	GetMeshComponent()->SetVisibility(false);
}

void ACPP_FlyPawn::BeginPlay()
{
	Super::BeginPlay();
	GameMode = GetWorld()->GetAuthGameMode<ACPP_ConfiguratorGameMode>();
	if (!GameMode)return;
	if (UFloatingPawnMovement* fpmc = Cast<UFloatingPawnMovement>(GetMovementComponent()))
		fpmc->MaxSpeed = 600 * GameMode->GetFlyingSettings().SpeedMultiplier;

	if (PostProcessMaterial)
	{
		UMaterialInstanceDynamic* mi = UMaterialInstanceDynamic::Create(PostProcessMaterial, this);
		mi->SetVectorParameterValue("Color", GameMode->GetSelectionOutlineSettings().Color);
		mi->SetScalarParameterValue("Thickness", GameMode->GetSelectionOutlineSettings().Thickness);
		PostProcessComponent->Settings.AddBlendable(mi, 1);
	}
}


void ACPP_FlyPawn::FBMovement(float _value)
{
	AddMovementInput(GetActorForwardVector(), _value);
}

void ACPP_FlyPawn::LRMovement(float _value)
{
	AddMovementInput(GetActorRightVector(), _value);
}
