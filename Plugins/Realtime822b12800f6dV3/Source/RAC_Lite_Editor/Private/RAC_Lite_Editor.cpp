// Copyright Stanislav Perekupenko 2024. All Rights Reserved.
#include "RAC_Lite_Editor.h"
#include "Selection.h"
#include "RAC_Lite_EditorStyle.h"
#include "Actors/CPP_StaticActor.h"
#include "Engine/StaticMeshActor.h"
#include "RAC_Lite_EditorCommands.h"

#define LOCTEXT_NAMESPACE "FRAC_Lite_EditorModule"

void FRAC_Lite_EditorModule::StartupModule()
{
	FRAC_Lite_EditorStyle::Initialize();
	FRAC_Lite_EditorStyle::ReloadTextures();
	FRAC_Lite_EditorCommands::Register();

	PluginCommands = MakeShareable(new FUICommandList);
	PluginCommands->MapAction(
		FRAC_Lite_EditorCommands::Get().PluginAction,
		FExecuteAction::CreateRaw(this, &FRAC_Lite_EditorModule::PluginButtonClicked),
		FCanExecuteAction());

	UToolMenus::RegisterStartupCallback(FSimpleMulticastDelegate::FDelegate::CreateRaw(this, &FRAC_Lite_EditorModule::RegisterMenus));
}

void FRAC_Lite_EditorModule::ShutdownModule()
{
	UToolMenus::UnRegisterStartupCallback(this);
	UToolMenus::UnregisterOwner(this);
	FRAC_Lite_EditorStyle::Shutdown();
	FRAC_Lite_EditorCommands::Unregister();
}

void FRAC_Lite_EditorModule::PluginButtonClicked()
{
	USelection* selection = GEditor->GetSelectedActors();
	if (!selection)return;
	for (uint16 i = 0; i < selection->Num(); i++)
	{
		if (AStaticMeshActor* sma = Cast<AStaticMeshActor>(selection->GetSelectedObject(i)))
		{
			ACPP_StaticActor* sa = sma->GetWorld()->SpawnActor<ACPP_StaticActor>(ACPP_StaticActor::StaticClass(), sma->GetActorTransform());
			sa->GetStaticMeshComponent()->SetStaticMesh(sma->GetStaticMeshComponent()->GetStaticMesh());
			for (uint16 j = 0; j < sma->GetStaticMeshComponent()->GetNumMaterials(); j++)
			{
				sa->GetStaticMeshComponent()->SetMaterial(j, sma->GetStaticMeshComponent()->GetMaterial(j));
			}
			sma->Destroy();
		}
	}
}

void FRAC_Lite_EditorModule::RegisterMenus()
{
	UToolMenu* ToolbarMenu = UToolMenus::Get()->ExtendMenu("LevelEditor.LevelEditorToolBar.PlayToolBar");
	{
		FToolMenuSection& Section = ToolbarMenu->FindOrAddSection("PluginTools");
		{
			FToolMenuEntry& Entry = Section.AddEntry(FToolMenuEntry::InitToolBarButton(FRAC_Lite_EditorCommands::Get().PluginAction));
			Entry.SetCommandList(PluginCommands);
		}
	}
}

#undef LOCTEXT_NAMESPACE

IMPLEMENT_MODULE(FRAC_Lite_EditorModule, RAC_Lite_Editor)
