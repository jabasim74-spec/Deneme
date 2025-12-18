// Copyright Stanislav Perekupenko 2024. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "CPP_SelectableActor.h"
#include "CPP_DynamicActor.generated.h"

USTRUCT(BlueprintType)
struct FDynamicActorMaterialCategory
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, Category="Settings")
	FName ComponentName = "";

	UPROPERTY(EditAnywhere, Category="Settings", meta=(UIMin=0, ClampMin=0))
	int MaterialSlotIndex = 0;

	UPROPERTY(EditAnywhere, Category="Settings")
	FText MaterialSlotName = FText::GetEmpty();

	UPROPERTY(EditAnywhere, Category="Settings")
	TArray<FMaterialInfo> Materials = TArray<FMaterialInfo>();
};

UCLASS(Abstract, Blueprintable)
class RAC_LITE_API ACPP_DynamicActor : public ACPP_SelectableActor
{
	GENERATED_BODY()

public:
	ACPP_DynamicActor();
	const FFurnitureInfo& GetFurnitureInfo() const { return FurnitureInfo; }
	void AttachTo(ACPP_DynamicActor* _attachTo);
protected:
	virtual void BeginPlay() override;
	virtual void UpdateSelection() override;
	virtual void GetCollectedMaterials(TArray<FMaterialCategory>& _outCategories) override;
private:
	UPROPERTY(Transient)
	TObjectPtr<ACPP_DynamicActor>AttachedTo;
	
	UPROPERTY(EditDefaultsOnly, Category="Settings", meta=(ShowOnlyInnerProperties))
	FFurnitureInfo FurnitureInfo;

	UPROPERTY(EditDefaultsOnly, Category="Settings", meta=(ShowOnlyInnerProperties))
	TArray<FDynamicActorMaterialCategory> MaterialChangeInfo;
};
