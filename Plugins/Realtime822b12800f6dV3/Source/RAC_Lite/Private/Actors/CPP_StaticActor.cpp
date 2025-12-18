// Copyright Stanislav Perekupenko 2024. All Rights Reserved.


#include "Actors/CPP_StaticActor.h"
#include "Engine/CollisionProfile.h"
#include "Components/StaticMeshComponent.h"


ACPP_StaticActor::ACPP_StaticActor()
{
	StaticMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>("Root");
	StaticMeshComponent->SetCollisionProfileName(UCollisionProfile::BlockAll_ProfileName);
	StaticMeshComponent->Mobility = EComponentMobility::Static;
	RootComponent = StaticMeshComponent;
}

void ACPP_StaticActor::GetCollectedMaterials(TArray<FMaterialCategory>& _outCategories)
{
	for (uint8 i = 0; i < MaterialChangeInfo.Num(); i++)
	{
		TArray<FMaterialInfo> materialInfos;
		for (uint8 j = 0; j < MaterialChangeInfo[i].Materials.Num(); j++)
		{
			if (MaterialChangeInfo[i].Materials[j].Material)materialInfos.Add(MaterialChangeInfo[i].Materials[j]);
		}
		if (materialInfos.Num() > 1)
		{
			_outCategories.Add(FMaterialCategory{
				StaticMeshComponent, MaterialChangeInfo[i].MaterialSlotIndex,
				MaterialChangeInfo[i].MaterialSlotName, materialInfos
			});
		}
	}
}
