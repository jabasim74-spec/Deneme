// Copyright Stanislav Perekupenko 2024. All Rights Reserved.

using UnrealBuildTool;

public class RAC_Lite : ModuleRules
{
	public RAC_Lite(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;
		
		
		PublicDependencyModuleNames.AddRange(
			new string[]
			{
				"EnhancedInput",
				"InputCore",
				"Core",
				"CoreUObject",
				"Engine",
				"Slate",
				"SlateCore",
				"UMG",
				
			}
			);
	}
}
