// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class DIYPaper2DEditor : ModuleRules
{
	public DIYPaper2DEditor(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PrivateDependencyModuleNames.AddRange(new string[]
		{
			"Core",
			"CoreUObject",
			"Engine",
			"UnrealEd",
			"AssetTools",
			"AssetRegistry",
			"EditorFramework",
			"Projects",
			"Paper2D",
			"DIYPaper2D",
			"RenderCore",
			"ImageCore"
		});
	}
}
