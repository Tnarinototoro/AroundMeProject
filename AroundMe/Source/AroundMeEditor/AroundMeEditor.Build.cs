using UnrealBuildTool;

public class AroundMeEditor : ModuleRules
{
    public AroundMeEditor(ReadOnlyTargetRules Target) : base(Target)
    {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

        PublicDependencyModuleNames.AddRange(new string[]
        {
            "Core",
            "CoreUObject",
            "Engine",
            "UnrealEd",
            "Slate",
            "SlateCore",
            "EditorStyle",
            "LevelEditor",
            "InputCore",
            "AroundMe",
            "AIModule"
        });

        PrivateDependencyModuleNames.AddRange(new string[]
        {
            "Slate",
            "SlateCore",
            "EditorStyle",     // UE5 可用 AppStyle，但老的也行
            "UnrealEd",
            "LevelEditor",
        });
    }
}
