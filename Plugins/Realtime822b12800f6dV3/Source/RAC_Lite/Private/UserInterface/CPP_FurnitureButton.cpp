// Copyright Stanislav Perekupenko 2024. All Rights Reserved.

#include "UserInterface/CPP_FurnitureButton.h"
#include "Engine/World.h"
#include "Components/Image.h"
#include "Engine/Texture2D.h"
#include "Engine/HitResult.h"
#include "Components/TextBlock.h"
#include "Actors/CPP_DynamicActor.h"
#include "Core/CPP_ConfiguratorGameMode.h"
#include "Blueprint/WidgetLayoutLibrary.h"
#include "Blueprint/SlateBlueprintLibrary.h"
#include "Materials/MaterialInstanceDynamic.h"

void UCPP_FurnitureButton::SetUp(const TSubclassOf<ACPP_DynamicActor>& _furniture)
{
	if (IsInitialized)return;
	IsInitialized = true;
	GameMode=GetWorld()->GetAuthGameMode<ACPP_ConfiguratorGameMode>();
	FurnitureClass = _furniture;
	ACPP_DynamicActor* defObj = _furniture->GetDefaultObject<ACPP_DynamicActor>();
	if (!defObj)return;
	if (defObj->GetFurnitureInfo().Icon)
	{
		UMaterialInstanceDynamic* mid= IconImage->GetDynamicMaterial();
		if(mid)mid->SetTextureParameterValue("Texture",defObj->GetFurnitureInfo().Icon);
	}
	NameTextBlock->SetText(defObj->GetFurnitureInfo().Name);
	DescriptionTextBlock->SetText(defObj->GetFurnitureInfo().Description);
	PlayerController = GetWorld()->GetFirstPlayerController();
}

void UCPP_FurnitureButton::NativeTick(const FGeometry& _myGeometry, float _inDeltaTime)
{
	Super::NativeTick(_myGeometry, _inDeltaTime);
	UpdateSpawnedActorLocationAndRotation();
}

void UCPP_FurnitureButton::UpdateSpawnedActorLocationAndRotation()
{
	if (!SpawnedActor || !PlayerController)return;
	FVector2d PixelPosition, ViewportPosition;
	USlateBlueprintLibrary::AbsoluteToViewport(GetWorld(),
	                                           UWidgetLayoutLibrary::GetMousePositionOnPlatform(), PixelPosition, ViewportPosition);

	FVector WorldLocation, WorldDirection;
	PlayerController->DeprojectScreenPositionToWorld(PixelPosition.X, PixelPosition.Y, WorldLocation, WorldDirection);
	FHitResult outHit;
	FCollisionQueryParams params;
	params.bTraceComplex = true;
	if (!GetWorld()->LineTraceSingleByChannel(outHit, WorldLocation, WorldLocation + WorldDirection * 10000, ECC_Visibility, params))
	{
		outHit.Normal = FVector(0, 0, 1);
		outHit.Location = outHit.TraceEnd;
	}
	if(GameMode->GetEnableAutoAttaching()) SpawnedActor->AttachTo(Cast<ACPP_DynamicActor>(outHit.GetActor()));

	SpawnedActor->SetActorLocation(outHit.Location);
	if (GameMode->GetEnableAutoRotation() && outHit.Normal.Dot(FVector(0, 0, 1)) < 0.7f)
		SpawnedActor->SetActorRotation(FRotator(0, outHit.Normal.Rotation().Yaw, 0));
}

void UCPP_FurnitureButton::OnHovered()
{
	if (SpawnedActor)SpawnedActor->Destroy();
	SpawnedActor = nullptr;
}

void UCPP_FurnitureButton::OnUnhovered()
{
	if (SpawnedActor || !IsPressed)return;
	SpawnedActor = GetWorld()->SpawnActor<ACPP_DynamicActor>(FurnitureClass);
	GameMode->SetSelectedActor(SpawnedActor,true);
	SpawnedActor->SetActorEnableCollision(false);
	UpdateSpawnedActorLocationAndRotation();
}


void UCPP_FurnitureButton::OnReleased()
{
	IsPressed = false;
	if (!SpawnedActor)return;
	SpawnedActor->SetActorEnableCollision(true);
	GameMode->AddGizmoToSelectedActor();
	SpawnedActor = nullptr;
}
