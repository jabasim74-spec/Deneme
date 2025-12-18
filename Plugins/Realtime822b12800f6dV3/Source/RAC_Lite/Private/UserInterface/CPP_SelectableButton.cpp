// Copyright Stanislav Perekupenko 2024. All Rights Reserved.


#include "UserInterface/CPP_SelectableButton.h"
#include "CPP_Types.h"
#include "Components/Image.h"
#include "Components/Button.h"


void UCPP_SelectableButton::SetIsSelected(bool _newIsSelected)
{
	if (IsSelected == _newIsSelected)return;
	IsSelected = _newIsSelected;
	IconImage->SetColorAndOpacity(IsSelected ? COLOR_PRIMARY_SELECTED : COLOR_PRIMARY);
	MainButton->SetIsEnabled(!IsSelected || !DisableWhenSelected);
	SetShadowVisible(!IsSelected || !DisableWhenSelected);
}

void UCPP_SelectableButton::SetIcon(UTexture2D* _icon)
{
	if (_icon)IconImage->SetBrushFromTexture(_icon);
}

void UCPP_SelectableButton::NativePreConstruct()
{
	Super::NativePreConstruct();
	if (IsInitialized || !MainButton || !IconImage)return;
	IsInitialized = true;
	if (Icon)IconImage->SetBrushFromTexture(Icon);
	IconImage->SetColorAndOpacity(IsSelected ? COLOR_PRIMARY_SELECTED : COLOR_PRIMARY);
	MainButton->SetIsEnabled(!IsSelected || !DisableWhenSelected);
	SetShadowVisible(!IsSelected || !DisableWhenSelected);
}
