// Copyright Stanislav Perekupenko 2024. All Rights Reserved.

#include "UserInterface/CPP_ShadowedButton.h"
#include "CPP_Types.h"
#include "Components/Border.h"
#include "Components/Button.h"

void UCPP_ShadowedButton::NativePreConstruct()
{
	Super::NativePreConstruct();
	if (IsInitialized || !MainButton || !ShadowBorder)return;
	IsInitialized = true;
	FButtonStyle style = MainButton->GetStyle();
	style.Normal.OutlineSettings.CornerRadii = FVector4(CornerRadius, CornerRadius, CornerRadius, CornerRadius);
	style.Hovered.OutlineSettings.CornerRadii = FVector4(CornerRadius, CornerRadius, CornerRadius, CornerRadius);
	style.Pressed.OutlineSettings.CornerRadii = FVector4(CornerRadius, CornerRadius, CornerRadius, CornerRadius);
	style.Disabled.OutlineSettings.CornerRadii = FVector4(CornerRadius, CornerRadius, CornerRadius, CornerRadius);
	MainButton->SetStyle(style);
	ShadowBorder->Background.OutlineSettings.CornerRadii = FVector4(CornerRadius, CornerRadius, CornerRadius, CornerRadius);
	ShadowBorder->Background.TintColor = FSlateColor(COLOR_SHADOW);
}

void UCPP_ShadowedButton::NativeConstruct()
{
	Super::NativeConstruct();
	if (!MainButton->OnClicked.IsBound()) MainButton->OnClicked.AddUniqueDynamic(this, &ThisClass::MainButton_OnClicked);
	if (!MainButton->OnHovered.IsBound())MainButton->OnHovered.AddUniqueDynamic(this, &ThisClass::MainButton_OnHovered);
	if (!MainButton->OnUnhovered.IsBound())MainButton->OnUnhovered.AddUniqueDynamic(this, &ThisClass::MainButton_OnUnhovered);
	if (!MainButton->OnPressed.IsBound())MainButton->OnPressed.AddUniqueDynamic(this, &ThisClass::MainButton_OnPressed);
	if (!MainButton->OnReleased.IsBound())MainButton->OnReleased.AddUniqueDynamic(this, &ThisClass::MainButton_OnReleased);
}

void UCPP_ShadowedButton::SetShadowVisible(bool _newVisible)
{
	if (IsShadowVisible == _newVisible)return;
	IsShadowVisible = _newVisible;
	UpdateShadow();
}

void UCPP_ShadowedButton::MainButton_OnClicked()
{
	OnClicked();
	OnClickedDelegate.Broadcast(this);
}

void UCPP_ShadowedButton::MainButton_OnHovered()
{
	IsHovered = true;
	UpdateShadow();
	OnHovered();
}

void UCPP_ShadowedButton::MainButton_OnUnhovered()
{
	IsHovered = false;
	UpdateShadow();
	OnUnhovered();
}

void UCPP_ShadowedButton::UpdateShadow()
{
	ShadowBorder->SetVisibility((!IsHovered && IsShadowVisible) ? ESlateVisibility::SelfHitTestInvisible : ESlateVisibility::Collapsed);
}
