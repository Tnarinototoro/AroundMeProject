// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class DIYPaper2D : ModuleRules
{
	public DIYPaper2D(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[]
		{
			"Core",
			"CoreUObject",
			"Engine",
			"InputCore",
			"EnhancedInput",
			"Paper2D",
			"PaperZD"
		});

		PrivateDependencyModuleNames.AddRange(new string[]
		{
			"RenderCore"
		});
	}
}
