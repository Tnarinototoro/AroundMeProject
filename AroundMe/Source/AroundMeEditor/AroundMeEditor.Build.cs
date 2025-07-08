using UnrealBuildTool;

public class AroundMeEditor : ModuleRules
{
    public AroundMeEditor(ReadOnlyTargetRules Target) : base(Target)
    {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

        PublicDependencyModuleNames.AddRange(new string[] {
            "Core",
            "CoreUObject",
            "Engine",
            "UnrealEd",
            "Slate",
            "SlateCore",
            "EditorStyle",
            "LevelEditor",
            "AroundMe",
            "AIModule"
        });

        PrivateDependencyModuleNames.AddRange(new string[] { });
    }
}
