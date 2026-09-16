using UnrealBuildTool;

public class PropHunt : ModuleRules
{
    public PropHunt(ReadOnlyTargetRules Target) : base(Target)
    {
        PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;

        PublicDependencyModuleNames.AddRange(
            new string[]
            {
                "Core",
                "CoreUObject",
                "Engine",
                "InputCore",
                "EnhancedInput",
                "UMG",
                "Slate",
                "SlateCore",
                "CommonUI",
                "CommonInput",
                "GameplayTags",
                "OnlineSubsystem",
                "OnlineSubsystemUtils",
                "DIYCore"
            }
        );
    }
}
