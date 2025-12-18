// Copyright Stanislav Perekupenko 2024. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "CPP_Types.h"
#include "Engine/DataAsset.h"
#include "CPP_FurnitureList.generated.h"


UCLASS(CollapseCategories)
class RAC_LITE_API UCPP_FurnitureList : public UPrimaryDataAsset
{
	GENERATED_BODY()
public:
	UPROPERTY(EditDefaultsOnly,Category="Furniture")
	TMap<FString,FFurnitureArray>Furniture;
};
