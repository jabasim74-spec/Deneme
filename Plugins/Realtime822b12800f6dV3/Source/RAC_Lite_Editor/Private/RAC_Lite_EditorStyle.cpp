// Copyright Stanislav Perekupenko 2024. All Rights Reserved.

#include "RAC_Lite_EditorStyle.h"
#include "Styling/SlateStyleMacros.h"
#include "Interfaces/IPluginManager.h"
#include "Styling/SlateStyleRegistry.h"
#include "Framework/Application/SlateApplication.h"

#define RootToContentDir Style->RootToContentDir

TSharedPtr<FSlateStyleSet> FRAC_Lite_EditorStyle::StyleInstance = nullptr;

void FRAC_Lite_EditorStyle::Initialize()
{
	if (!StyleInstance.IsValid())
	{
		StyleInstance = Create();
		FSlateStyleRegistry::RegisterSlateStyle(*StyleInstance);
	}
}

void FRAC_Lite_EditorStyle::Shutdown()
{
	FSlateStyleRegistry::UnRegisterSlateStyle(*StyleInstance);
	ensure(StyleInstance.IsUnique());
	StyleInstance.Reset();
}

FName FRAC_Lite_EditorStyle::GetStyleSetName()
{
	static FName StyleSetName(TEXT("RAC_Lite_EditorStyle"));
	return StyleSetName;
}

const FVector2D Icon20x20(20.0f, 20.0f);

TSharedRef<FSlateStyleSet> FRAC_Lite_EditorStyle::Create()
{
	TSharedRef<FSlateStyleSet> Style = MakeShareable(new FSlateStyleSet("RAC_Lite_EditorStyle"));
	Style->SetContentRoot(IPluginManager::Get().FindPlugin("RAC_Lite")->GetBaseDir() / TEXT("Resources"));

	Style->Set("RAC_Lite_Editor.PluginAction", new IMAGE_BRUSH_SVG(TEXT("T_ConvertIcon"), Icon20x20));
	return Style;
}

void FRAC_Lite_EditorStyle::ReloadTextures()
{
	if (FSlateApplication::IsInitialized())
	{
		FSlateApplication::Get().GetRenderer()->ReloadTextureResources();
	}
}

const ISlateStyle& FRAC_Lite_EditorStyle::Get()
{
	return *StyleInstance;
}
