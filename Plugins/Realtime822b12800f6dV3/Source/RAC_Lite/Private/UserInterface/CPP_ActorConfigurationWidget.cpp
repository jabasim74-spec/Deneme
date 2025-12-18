// Copyright Stanislav Perekupenko 2024. All Rights Reserved.


#include "UserInterface/CPP_ActorConfigurationWidget.h"
#include "Engine/Engine.h"
#include "Components/ScrollBox.h"
#include "Actors/CPP_DynamicActor.h"
#include "Components/RetainerBox.h"
#include "Engine/GameViewportClient.h"
#include "Core/CPP_ConfiguratorGameMode.h"
#include "Materials/MaterialInstanceDynamic.h"
#include "UserInterface/CPP_SelectableButton.h"
#include "UserInterface/CPP_MaterialCategoryWidget.h"

void UCPP_ActorConfigurationWidget::NativeConstruct()
{
	Super::NativeConstruct();
	if(GameMode)return;
	GameMode = GetWorld()->GetAuthGameMode<ACPP_ConfiguratorGameMode>();
	GameMode->OnSelectedActorChanged.AddUObject(this, &ThisClass::GameMode_OnSelectedActorChanged);
	GEngine->GameViewport->Viewport->ViewportResizedEvent.AddUObject(this,&UCPP_ActorConfigurationWidget::ViewportResized);
	if (!DeleteButton->OnClickedDelegate.IsBound()) DeleteButton->OnClickedDelegate.AddUObject(this, &ThisClass::DeleteButton_OnClicked);
}

void UCPP_ActorConfigurationWidget::NativeTick(const FGeometry& MyGeometry, float InDeltaTime)
{
	Super::NativeTick(MyGeometry, InDeltaTime);
	if(UMaterialInstanceDynamic* mid= MainRetainerBox->GetEffectMaterial())
		mid->SetScalarParameterValue("LocalSizeX",500/MyGeometry.GetLocalSize().X);
}

void UCPP_ActorConfigurationWidget::UpdateRetainerBox()
{
	MainRetainerBox->SetRetainRendering(false);
	MainRetainerBox->SetRetainRendering(true);
}

void UCPP_ActorConfigurationWidget::GameMode_OnSelectedActorChanged(ACPP_SelectableActor* _newSelectedActor)
{
	if (!_newSelectedActor)SetVisibility(ESlateVisibility::Collapsed);
	else
	{
		const bool deleteButtonVisibility = Cast<ACPP_DynamicActor>(GameMode->GetSelectedActor()) != nullptr;
		DeleteButton->SetVisibility(deleteButtonVisibility ? ESlateVisibility::Visible : ESlateVisibility::Collapsed);

		TArray<FMaterialCategory> materialCategories;
		_newSelectedActor->GetCollectedMaterials(materialCategories);

		SetVisibility(materialCategories.Num() > 0 || deleteButtonVisibility ? ESlateVisibility::Visible : ESlateVisibility::Collapsed);

		for (int i = 0; i < MaterialCategoriesWidgets.Num(); i++)MaterialCategoriesWidgets[i]->RemoveFromParent();
		MaterialCategoriesWidgets.Empty();

		for (int i = 0; i < materialCategories.Num(); i++)
		{
			UCPP_MaterialCategoryWidget* newWidget = CreateWidget<UCPP_MaterialCategoryWidget>(this, MaterialCategoryWidgetClass);
			newWidget->SetUp(materialCategories[i]);
			newWidget->OnChildVisibilityChanged.AddUObject(this,&UCPP_ActorConfigurationWidget::UpdateRetainerBox);
			ContentScrollBox->AddChild(newWidget);
			MaterialCategoriesWidgets.Add(newWidget);
		}
	}
}

void UCPP_ActorConfigurationWidget::DeleteButton_OnClicked(UCPP_ShadowedButton* _sender)
{
	if (!GameMode)return;
	
	if (ACPP_DynamicActor* da = Cast<ACPP_DynamicActor>(GameMode->GetSelectedActor()))
	{
		TArray<AActor*>attachedActors;
		da->GetAttachedActors(attachedActors,true,true);
		for(uint16 i=0;i<attachedActors.Num();i++)attachedActors[i]->Destroy();
		
		da->Destroy();
	}
}
