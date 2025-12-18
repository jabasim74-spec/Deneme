// Copyright Stanislav Perekupenko 2024. All Rights Reserved.

#include "Core/CPP_FPCharacter.h"
#include "Engine/World.h"
#include "Materials/Material.h"
#include "Kismet/KismetMathLibrary.h"
#include "Materials/MaterialInterface.h"
#include "Components/CapsuleComponent.h"
#include "Core/CPP_ConfiguratorGameMode.h"
#include "Components/PostProcessComponent.h"
#include "Materials/MaterialInstanceDynamic.h"
#include "GameFramework/CharacterMovementComponent.h"

ACPP_FPCharacter::ACPP_FPCharacter()
{
	GET_OBJECT(UMaterial, PostProcessMaterial_OF, OUTLINE_POSTPROCESS_PATH);
	PostProcessMaterial = PostProcessMaterial_OF.Object;
	PostProcessComponent = CreateDefaultSubobject<UPostProcessComponent>("PostProcessComponent");

	GetCapsuleComponent()->SetCollisionResponseToChannel(ECC_Pawn, ECR_Ignore);
	GetCapsuleComponent()->SetCapsuleRadius(30);
}

void ACPP_FPCharacter::BeginPlay()
{
	Super::BeginPlay();
	GameMode = GetWorld()->GetAuthGameMode<ACPP_ConfiguratorGameMode>();
	if (!GameMode)return;
	GetCharacterMovement()->MaxWalkSpeed = 600 * GameMode->GetFirstPersonSettings().SpeedMultiplier;
	BaseEyeHeight = GameMode->GetFirstPersonSettings().EyeHeight - GetCapsuleComponent()->GetScaledCapsuleHalfHeight();

	if (PostProcessMaterial)
	{
		UMaterialInstanceDynamic* mi = UMaterialInstanceDynamic::Create(PostProcessMaterial, this);
		mi->SetVectorParameterValue("Color", GameMode->GetSelectionOutlineSettings().Color);
		mi->SetScalarParameterValue("Thickness", GameMode->GetSelectionOutlineSettings().Thickness);
		PostProcessComponent->Settings.AddBlendable(mi, 1);
	}
}

void ACPP_FPCharacter::FBMovement(float _value)
{
	AddMovementInput(FRotator(0, GetActorRotation().Yaw, 0).Vector(), _value);
}

void ACPP_FPCharacter::LRMovement(float _value)
{
	AddMovementInput(UKismetMathLibrary::GetRightVector(FRotator(0, GetActorRotation().Yaw, 0)), _value);
}

void ACPP_FPCharacter::RecalculateBaseEyeHeight()
{
	if (!GameMode)Super::RecalculateBaseEyeHeight();
	else { BaseEyeHeight = GameMode->GetFirstPersonSettings().EyeHeight - GetCapsuleComponent()->GetScaledCapsuleHalfHeight(); }
}
