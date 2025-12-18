// Copyright Stanislav Perekupenko 2024. All Rights Reserved.

#include "RAC_Lite_EditorCommands.h"

#define LOCTEXT_NAMESPACE "FRAC_Lite_EditorModule"

void FRAC_Lite_EditorCommands::RegisterCommands()
{
	UI_COMMAND(PluginAction, "RAC_Lite_Editor", "Execute RAC_Lite_Editor action", EUserInterfaceActionType::Button, FInputChord());
}

#undef LOCTEXT_NAMESPACE
