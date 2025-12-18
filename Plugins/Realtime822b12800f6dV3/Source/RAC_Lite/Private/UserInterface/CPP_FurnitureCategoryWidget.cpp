// Copyright Stanislav Perekupenko 2024. All Rights Reserved.


#include "UserInterface/CPP_FurnitureCategoryWidget.h"

#include "Components/TextBlock.h"
#include "Components/VerticalBox.h"
#include "UserInterface/CPP_FurnitureButton.h"
#include "UserInterface/CPP_SelectableButton.h"

void UCPP_FurnitureCategoryWidget::SetUp(const FText& _categoryName, const TArray<TSubclassOf<ACPP_DynamicActor>>& _furniture)
{
	if (IsInitialized||!FurnitureButtonClass)return;
	IsInitialized = true;
	CategoryNameTextBlock->SetText(_categoryName);
	ShowHideButton->OnClickedDelegate.AddUObject(this, &ThisClass::ShowHideButton_OnClicked);
	for(int i=0;i<_furniture.Num();i++)
	{
		UCPP_FurnitureButton*newButton= CreateWidget<UCPP_FurnitureButton>(this,FurnitureButtonClass);
		newButton->SetUp(_furniture[i]);
		ContentVerticalBox->AddChild(newButton);
	}
}


void UCPP_FurnitureCategoryWidget::ShowHideButton_OnClicked(UCPP_ShadowedButton* _sender)
{
	ContentVerticalBox->SetVisibility(
		ContentVerticalBox->GetVisibility() == ESlateVisibility::Collapsed ? ESlateVisibility::SelfHitTestInvisible : ESlateVisibility::Collapsed);
	ShowHideButton->SetIcon(ContentVerticalBox->GetVisibility() == ESlateVisibility::Collapsed ? ShowIcon : HideIcon);
	OnChildVisibilityChanged.Broadcast();
}
