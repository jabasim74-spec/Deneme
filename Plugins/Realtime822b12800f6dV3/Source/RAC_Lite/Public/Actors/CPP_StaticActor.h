// Copyright Stanislav Perekupenko 2024. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "CPP_SelectableActor.h"
#include "CPP_StaticActor.generated.h"

USTRUCT(BlueprintType)
struct FStaticActorMaterialCategory
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, Category="Settings", meta=(UIMin=0, ClampMin=0))
	int MaterialSlotIndex = 0;

	UPROPERTY(EditAnywhere, Category="Settings")
	FText MaterialSlotName = FText::GetEmpty();

	UPROPERTY(EditAnywhere, Category="Settings")
	TArray<FMaterialInfo> Materials = TArray<FMaterialInfo>();
};

UCLASS(ConversionRoot)
class RAC_LITE_API ACPP_StaticActor : public ACPP_SelectableActor
{
	GENERATED_BODY()

public:
	ACPP_StaticActor();
	UStaticMeshComponent* GetStaticMeshComponent() const { return StaticMeshComponent; }

protected:
	virtual void GetCollectedMaterials(TArray<FMaterialCategory>& _outCategories) override;

private:
	UPROPERTY(EditInstanceOnly, Category="Settings", meta=(ShowOnlyInnerProperties))
	TArray<FStaticActorMaterialCategory> MaterialChangeInfo;

	UPROPERTY(Category = "Components", VisibleAnywhere, meta = ( AllowPrivateAccess = "true"))
	TObjectPtr<UStaticMeshComponent> StaticMeshComponent;
};
