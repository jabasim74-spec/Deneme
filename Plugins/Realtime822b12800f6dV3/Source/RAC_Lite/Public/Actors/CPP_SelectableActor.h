// Copyright Stanislav Perekupenko 2024. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "CPP_Types.h"
#include "GameFramework/Actor.h"
#include "Core/CPP_ClickInterface.h"
#include "CPP_SelectableActor.generated.h"

class ACPP_ConfiguratorGameMode;

UCLASS(Abstract, HideCategories=("Replication","Collision","Actor","Input","HLOD",
	"Physics","LevelInstance","Cooking","WorldPartition","DataLayers","Rendering","Tick","Events","Networking"))
class RAC_LITE_API ACPP_SelectableActor : public AActor, public ICPP_ClickInterface
{
	GENERATED_BODY()

public:
	FNoParamSignature OnMaterialChanged;

	virtual void SetIsSelected(bool _isSelected);

	bool GetIsSelected() const { return IsSelected; }

	ACPP_ConfiguratorGameMode* GetGameMode() const { return GameMode; }

	virtual void GetCollectedMaterials(TArray<FMaterialCategory>& _outCategories) { ; }

	void SetSelectionOutlineType(ESelectionOutlineType _newType);
	virtual void UpdateSelection();

	UFUNCTION(BlueprintCallable)
	virtual void Click_Implementation(const FHitResult& _hitResult) override;
protected:
	virtual void BeginPlay() override;

	

private:
	bool IsSelected = false;

	UPROPERTY(Transient)
	TArray<TObjectPtr<UPrimitiveComponent>> ComponentsToOutline;

	UPROPERTY(Transient)
	TObjectPtr<ACPP_ConfiguratorGameMode> GameMode;
};
