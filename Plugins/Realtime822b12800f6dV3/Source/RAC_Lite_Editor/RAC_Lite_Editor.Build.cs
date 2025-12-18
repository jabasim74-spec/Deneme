// Copyright Stanislav Perekupenko 2024. All Rights Reserved.
using UnrealBuildTool;

public class RAC_Lite_Editor : ModuleRules
{
    public RAC_Lite_Editor(ReadOnlyTargetRules Target) : base(Target)
    {
        PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;

        PublicDependencyModuleNames.AddRange(
            new string[]
            {
                "Core",
                "ToolMenus",
                "Projects"
            }
        );

        PrivateDependencyModuleNames.AddRange(
            new string[]
            {
                "CoreUObject",
                "Engine",
                "Slate",
                "SlateCore", 
                "RAC_Lite",
                "UnrealEd"
            }
        );
    }
}