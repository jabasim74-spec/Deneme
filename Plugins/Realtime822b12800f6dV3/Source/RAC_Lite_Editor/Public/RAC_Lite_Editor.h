// Copyright Stanislav Perekupenko 2024. All Rights Reserved.
#pragma once

#include "CoreMinimal.h"
#include "Modules/ModuleManager.h"

class FUICommandList;

class FRAC_Lite_EditorModule : public IModuleInterface
{
public:
	virtual void StartupModule() override;

	virtual void ShutdownModule() override;

	void PluginButtonClicked();

private:
	void RegisterMenus();
	
	TSharedPtr<FUICommandList> PluginCommands;
};
