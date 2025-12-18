// Copyright Stanislav Perekupenko 2024. All Rights Reserved.


#include "UserInterface/CPP_ActorSpawningWidget.h"
#include "Engine/Engine.h"
#include "Components/ScrollBox.h"
#include "Core/CPP_FurnitureList.h"
#include "Components/RetainerBox.h"
#include "Actors/CPP_DynamicActor.h"
#include "Engine/GameViewportClient.h"
#include "Materials/MaterialInstanceDynamic.h"
#include "UserInterface/CPP_FurnitureCategoryWidget.h"

void UCPP_ActorSpawningWidget::SetUp(UCPP_FurnitureList* _furnitureList)
{
	if(IsInitialized||!_furnitureList||!FurnitureCategoryWidgetClass)return;;
	IsInitialized=true;
	GEngine->GameViewport->Viewport->ViewportResizedEvent.AddUObject(this,&UCPP_ActorSpawningWidget::ViewportResized);
	
	for (const TPair<FString, FFurnitureArray >& pair : _furnitureList->Furniture)
	{
		TArray<TSubclassOf<ACPP_DynamicActor>>furniture;
		for(int i=0;i<pair.Value.Furniture.Num();i++)
		{
			if(pair.Value.Furniture[i])furniture.Add(pair.Value.Furniture[i]);
		}
		if(furniture.Num()>0)
		{
			UCPP_FurnitureCategoryWidget*fcw=CreateWidget<UCPP_FurnitureCategoryWidget>(this,FurnitureCategoryWidgetClass);
			ContentScrollBox->AddChild(fcw);
			fcw->OnChildVisibilityChanged.AddUObject(this,&UCPP_ActorSpawningWidget::UpdateRetainerBox);
			fcw->SetUp(FText::FromString(pair.Key),furniture);
		}
	}
}

void UCPP_ActorSpawningWidget::NativeTick(const FGeometry& MyGeometry, float InDeltaTime)
{
	Super::NativeTick(MyGeometry, InDeltaTime);
	if(UMaterialInstanceDynamic* mid= MainRetainerBox->GetEffectMaterial())
		mid->SetScalarParameterValue("LocalSizeX",500/MyGeometry.GetLocalSize().X);
}

void UCPP_ActorSpawningWidget::UpdateRetainerBox()
{
	MainRetainerBox->SetRetainRendering(false);
	MainRetainerBox->SetRetainRendering(true);
}
