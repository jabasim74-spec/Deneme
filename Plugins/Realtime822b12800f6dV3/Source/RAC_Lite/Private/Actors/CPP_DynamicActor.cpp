// Copyright Stanislav Perekupenko 2024. All Rights Reserved.


#include "Actors/CPP_DynamicActor.h"
#include "Components/PrimitiveComponent.h"

ACPP_DynamicActor::ACPP_DynamicActor()
{
	RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
}

void ACPP_DynamicActor::AttachTo(ACPP_DynamicActor* _attachTo)
{
	if (_attachTo == AttachedTo)return;
	if (AttachedTo)AttachedTo->SetSelectionOutlineType(ESelectionOutlineType::None);
	AttachedTo = _attachTo;
	if (AttachedTo)AttachToActor(_attachTo,FAttachmentTransformRules::KeepWorldTransform);
	else DetachFromActor(FDetachmentTransformRules::KeepWorldTransform);
	UpdateSelection();
}

void ACPP_DynamicActor::BeginPlay()
{
	Super::BeginPlay();
	AttachedTo=Cast<ACPP_DynamicActor>(GetAttachParentActor());
}

void ACPP_DynamicActor::UpdateSelection()
{
	Super::UpdateSelection();
	if(AttachedTo)AttachedTo->SetSelectionOutlineType(GetIsSelected()? ESelectionOutlineType::Parent:ESelectionOutlineType::None);

	TArray<AActor*>attachedActors;
	GetAttachedActors(attachedActors,true,true);
	for(uint16 i=0;i<attachedActors.Num();i++)
	{
		if(ACPP_DynamicActor*attachedActor=Cast<ACPP_DynamicActor>(attachedActors[i]))
			attachedActor->SetSelectionOutlineType(GetIsSelected()? ESelectionOutlineType::Child:ESelectionOutlineType::None);
	}
}

void ACPP_DynamicActor::GetCollectedMaterials(TArray<FMaterialCategory>& _outCategories)
{
	for (uint8 i = 0; i < MaterialChangeInfo.Num(); i++)
	{
		if (UPrimitiveComponent* pc = Cast<UPrimitiveComponent>(GetDefaultSubobjectByName(MaterialChangeInfo[i].ComponentName)))
		{
			TArray<FMaterialInfo> materialInfos;
			for (uint8 j = 0; j < MaterialChangeInfo[i].Materials.Num(); j++)
			{
				if (MaterialChangeInfo[i].Materials[j].Material)materialInfos.Add(MaterialChangeInfo[i].Materials[j]);
			}
			if (materialInfos.Num() > 1)
			{
				_outCategories.Add(FMaterialCategory{
					pc, MaterialChangeInfo[i].MaterialSlotIndex,
					MaterialChangeInfo[i].MaterialSlotName, materialInfos
				});
			}
		}
	}
}
