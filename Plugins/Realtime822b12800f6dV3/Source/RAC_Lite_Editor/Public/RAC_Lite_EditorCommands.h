// Copyright Stanislav Perekupenko 2024. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Framework/Commands/Commands.h"
#include "RAC_Lite_EditorStyle.h"

class FRAC_Lite_EditorCommands : public TCommands<FRAC_Lite_EditorCommands>
{
public:
	FRAC_Lite_EditorCommands()
		: TCommands<FRAC_Lite_EditorCommands>(TEXT("RAC_Lite_Editor"), NSLOCTEXT("Contexts", "RAC_Lite_Editor", "RAC_Lite_Editor Plugin"), NAME_None,
		                                      FRAC_Lite_EditorStyle::GetStyleSetName()) { ; }

	virtual void RegisterCommands() override;
	TSharedPtr<FUICommandInfo> PluginAction;
};
