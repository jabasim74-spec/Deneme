// Copyright Stanislav Perekupenko 2024. All Rights Reserved.

#include "UserInterface/CPP_MaterialButton.h"
#include "Components/Image.h"
#include "Engine/Texture2D.h"
#include "Components/Button.h"
#include "Actors/CPP_SelectableActor.h"
#include "Components/PrimitiveComponent.h"
#include "Materials/MaterialInstanceDynamic.h"

void UCPP_MaterialButton::SetUp(UPrimitiveComponent* _componentToChange, int _materialSlotIndex, const FMaterialInfo& _materialInfo)
{
	ComponentToChange = _componentToChange;
	MaterialSlotIndex = _materialSlotIndex;
	Material = _materialInfo.Material;
	if (_materialInfo.Icon)
	{
		UMaterialInstanceDynamic* mid= IconImage->GetDynamicMaterial();
		if(mid)mid->SetTextureParameterValue("Texture",_materialInfo.Icon);
	}
	SelectableActor = Cast<ACPP_SelectableActor>(ComponentToChange->GetOwner());
	SelectableActor->OnMaterialChanged.AddUObject(this, &ThisClass::SelectableActor_OnMaterialChanged);
	SelectableActor_OnMaterialChanged();
}

void UCPP_MaterialButton::OnClicked()
{
	if (ComponentToChange)
	{
		ComponentToChange->SetMaterial(MaterialSlotIndex, Material);
		SelectableActor->OnMaterialChanged.Broadcast();
	}
}

void UCPP_MaterialButton::SelectableActor_OnMaterialChanged()
{
	if (!ComponentToChange)return;
	MainButton->SetIsEnabled(ComponentToChange->GetMaterial(MaterialSlotIndex) != Material);
	SetShadowVisible(ComponentToChange->GetMaterial(MaterialSlotIndex) != Material);
}
