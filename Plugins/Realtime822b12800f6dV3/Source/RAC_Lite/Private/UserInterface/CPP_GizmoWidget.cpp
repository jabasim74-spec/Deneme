// Copyright Stanislav Perekupenko 2024. All Rights Reserved.

#include "UserInterface/CPP_GizmoWidget.h"
#include "Engine/World.h"
#include "Components/Image.h"
#include "Components/Border.h"
#include "Components/Button.h"
#include "Actors/CPP_DynamicActor.h"
#include "Kismet/KismetMathLibrary.h"
#include "Components/BackgroundBlur.h"
#include "Blueprint/WidgetLayoutLibrary.h"
#include "Core/CPP_ConfiguratorGameMode.h"
#include "Blueprint/SlateBlueprintLibrary.h"
#include "Materials/MaterialInstanceDynamic.h"

void UCPP_GizmoWidget::NativeConstruct()
{
	Super::NativeConstruct();
	GameMode = GetWorld()->GetAuthGameMode<ACPP_ConfiguratorGameMode>();
	MaterialInstance = MainImage->GetDynamicMaterial();
	PlayerController = GetWorld()->GetFirstPlayerController();
	if (!MainButton->OnPressed.IsBound())MainButton->OnPressed.AddDynamic(this, &ThisClass::MainButton_OnPressed);
	if (!MainButton->OnReleased.IsBound())MainButton->OnReleased.AddDynamic(this, &ThisClass::MainButton_OnReleased);
}

void UCPP_GizmoWidget::NativeTick(const FGeometry& _myGeometry, float _inDeltaTime)
{
	Super::NativeTick(_myGeometry, _inDeltaTime);
	if (!MaterialInstance || !ControlledActor || !PlayerController)return;
	const float cornerRadius = _myGeometry.GetLocalSize().X * UWidgetLayoutLibrary::GetViewportScale(ControlledActor) * 0.5f;

	BackgroundBlur->SetCornerRadius(FVector4(cornerRadius, cornerRadius, cornerRadius, cornerRadius));
	MaterialInstance->SetScalarParameterValue("Rotation", FMath::GetMappedRangeValueUnclamped(FVector2d(-180, 180),
	                                                                                          FVector2d(1, 0),
	                                                                                          UKismetMathLibrary::NormalizeAxis(
		                                                                                          ControlledActor->GetActorRotation().Yaw)));

	if (GizmoStatus == EGizmoStatus::None)
	{
		const EGizmoStatus hoverStatus = GetHoverStatus(_myGeometry);
		if (hoverStatus == EGizmoStatus::Move)MaterialInstance->SetScalarParameterValue("Status", 0);
		else if (hoverStatus == EGizmoStatus::Rotation)MaterialInstance->SetScalarParameterValue("Status", 1);
		else MaterialInstance->SetScalarParameterValue("Status", 2);
	}
	else if (GizmoStatus == EGizmoStatus::Rotation)
	{
		MaterialInstance->SetScalarParameterValue("Status", 1);
		ControlledActor->SetActorRotation(FRotator(0, UKismetMathLibrary::FindLookAtRotation(
			                                           FVector(_myGeometry.GetLocalSize() / 2, 0), FVector(_myGeometry.AbsoluteToLocal(
					                                           UWidgetLayoutLibrary::GetMousePositionOnPlatform())
				                                           , 0)).Yaw + InitialRotation - InitialRotationOffset, 0));
	}
	else
	{
		MaterialInstance->SetScalarParameterValue("Status", 0);

		FVector2d PixelPosition, ViewportPosition;
		USlateBlueprintLibrary::AbsoluteToViewport(GetWorld(),
		                                           UWidgetLayoutLibrary::GetMousePositionOnPlatform(), PixelPosition, ViewportPosition);

		FVector WorldLocation, WorldDirection;
		PlayerController->DeprojectScreenPositionToWorld(PixelPosition.X, PixelPosition.Y, WorldLocation, WorldDirection);
		FHitResult outHit;
		FCollisionQueryParams queryParams;
		queryParams.AddIgnoredActor(ControlledActor);
		TArray<AActor*> attachedActors;
		ControlledActor->GetAttachedActors(attachedActors, true, true);
		queryParams.AddIgnoredActors(attachedActors);
		queryParams.bTraceComplex = true;
		if (!GetWorld()->LineTraceSingleByChannel(outHit, WorldLocation, WorldLocation + WorldDirection * 10000, ECC_Visibility, queryParams))
		{
			outHit.Normal = FVector(0, 0, 1);
			outHit.Location = outHit.TraceEnd;
		}
		if (GameMode->GetEnableAutoAttaching())ControlledActor->AttachTo(Cast<ACPP_DynamicActor>(outHit.GetActor()));

		ControlledActor->SetActorLocation(outHit.Location);
		if (GameMode->GetEnableAutoRotation() && outHit.Normal.Dot(FVector(0, 0, 1)) < 0.7f)
			ControlledActor->SetActorRotation(FRotator(0, outHit.Normal.Rotation().Yaw, 0));
	}
}

EGizmoStatus UCPP_GizmoWidget::GetHoverStatus(const FGeometry& _myGeometry) const
{
	const float distanceToCenter = FVector2d::Distance(_myGeometry.AbsoluteToLocal(UWidgetLayoutLibrary::GetMousePositionOnPlatform()),
	                                                   _myGeometry.GetLocalSize() / 2) / _myGeometry.GetLocalSize().X * 2;
	if (distanceToCenter < 0.37)return EGizmoStatus::Move;
	if (distanceToCenter < 1)return EGizmoStatus::Rotation;
	return EGizmoStatus::None;
}

void UCPP_GizmoWidget::MainButton_OnPressed()
{
	const EGizmoStatus hoverStatus = GetHoverStatus(GetCachedGeometry());
	if (hoverStatus == EGizmoStatus::Move)
	{
		GizmoStatus = hoverStatus;
		ShadowBorder->SetBrushColor(FLinearColor::Transparent);
		BackgroundBorder->SetBrushColor(FLinearColor::Transparent);
		MainImage->SetColorAndOpacity(COLOR_PRIMARY_SELECTED);
	}
	else if (hoverStatus == EGizmoStatus::Rotation)
	{
		GizmoStatus = hoverStatus;
		InitialRotation = ControlledActor->GetActorRotation().Yaw;
		InitialRotationOffset = UKismetMathLibrary::FindLookAtRotation(
			FVector(GetCachedGeometry().GetLocalSize() / 2, 0), FVector(
				GetCachedGeometry().AbsoluteToLocal(
					UWidgetLayoutLibrary::GetMousePositionOnPlatform())
				, 0)).Yaw;
		ShadowBorder->SetBrushColor(FLinearColor::Transparent);
		BackgroundBorder->SetBrushColor(FLinearColor::Transparent);
		MainImage->SetColorAndOpacity(COLOR_PRIMARY_SELECTED);
	}
}

void UCPP_GizmoWidget::MainButton_OnReleased()
{
	GizmoStatus = EGizmoStatus::None;
	BackgroundBorder->SetBrushColor(FLinearColor::White);
	ShadowBorder->SetBrushColor(COLOR_SHADOW);
	MainImage->SetColorAndOpacity(COLOR_PRIMARY);
}
