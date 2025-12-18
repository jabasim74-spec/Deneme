// Copyright Stanislav Perekupenko 2024. All Rights Reserved.


#include "UserInterface/CPP_MaterialCategoryWidget.h"

#include "Components/TextBlock.h"
#include "Components/UniformGridSlot.h"
#include "Components/UniformGridPanel.h"
#include "UserInterface/CPP_MaterialButton.h"
#include "UserInterface/CPP_SelectableButton.h"


void UCPP_MaterialCategoryWidget::SetUp(const FMaterialCategory& _materialCategory)
{
	if (!MaterialButtonClass)return;

	CategoryNameTextBlock->SetText(_materialCategory.MaterialSlotName);
	ShowHideButton->OnClickedDelegate.AddUObject(this, &ThisClass::ShowHideButton_OnClicked);
	for (int i = 0; i < _materialCategory.Materials.Num(); i++)
	{
		UCPP_MaterialButton* newButton = CreateWidget<UCPP_MaterialButton>(this, MaterialButtonClass);
		newButton->SetUp(_materialCategory.Component, _materialCategory.MaterialSlotIndex, _materialCategory.Materials[i]);
		UUniformGridSlot* gridSlot = ContentUniformGridPanel->AddChildToUniformGrid(newButton);
		gridSlot->SetColumn(i % 4);
		gridSlot->SetRow(i / 4);
		gridSlot->SetHorizontalAlignment(HAlign_Center);
		gridSlot->SetVerticalAlignment(VAlign_Center);
	}
}

void UCPP_MaterialCategoryWidget::ShowHideButton_OnClicked(UCPP_ShadowedButton* _sender)
{
	ContentUniformGridPanel->SetVisibility(
		ContentUniformGridPanel->GetVisibility() == ESlateVisibility::Collapsed
			? ESlateVisibility::SelfHitTestInvisible
			: ESlateVisibility::Collapsed);
	ShowHideButton->SetIcon(ContentUniformGridPanel->GetVisibility() == ESlateVisibility::Collapsed ? ShowIcon : HideIcon);
	OnChildVisibilityChanged.Broadcast();
}
