// Copyright Stanislav Perekupenko 2024. All Rights Reserved.


#include "Actors/CPP_SelectableActor.h"
#include "CPP_Types.h"
#include "Engine/World.h"
#include "Components/PrimitiveComponent.h"
#include "Core/CPP_ConfiguratorGameMode.h"

void ACPP_SelectableActor::SetIsSelected(bool _isSelected)
{
	if (IsSelected == _isSelected)return;
	IsSelected = _isSelected;
	UpdateSelection();
}

void ACPP_SelectableActor::SetSelectionOutlineType(ESelectionOutlineType _newType)
{
	for (uint16 i = 0; i < ComponentsToOutline.Num(); i++)
	{
		ComponentsToOutline[i]->SetRenderCustomDepth(_newType!=ESelectionOutlineType::None);
		ComponentsToOutline[i]->SetCustomDepthStencilValue(static_cast<int32>(_newType));
	}
}

void ACPP_SelectableActor::UpdateSelection()
{
	SetSelectionOutlineType(IsSelected?ESelectionOutlineType::Current:ESelectionOutlineType::None);
}

void ACPP_SelectableActor::BeginPlay()
{
	Super::BeginPlay();
	GameMode = GetWorld()->GetAuthGameMode<ACPP_ConfiguratorGameMode>();
	TArray<USceneComponent*> components;
	GetRootComponent()->GetChildrenComponents(true, components);
	components.Add(RootComponent);
	for (uint16 i = 0; i < components.Num(); i++)
	{
		if (UPrimitiveComponent* pc = Cast<UPrimitiveComponent>(components[i]))
		{
			if(pc->GetOwner()==this)ComponentsToOutline.Add(pc);
		}
	}
}

void ACPP_SelectableActor::Click_Implementation(const FHitResult& _hitResult)
{
	if (!GameMode)return;
	if (IsSelected)GameMode->SetSelectedActor(nullptr);
	else GameMode->SetSelectedActor(this);
}
