// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class AroundMe : ModuleRules
{
    public AroundMe(ReadOnlyTargetRules Target) : base(Target)
    {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

        PublicDependencyModuleNames.AddRange(new string[] {
            "Core",
            "UMG",
            "Niagara",
            "CoreUObject",
            "PhysicsCore",
            "Engine",
            "InputCore",
            "EnhancedInput",
            "DIYPlatformService",
            "AssetRegistry",
            "DeveloperSettings",
            "AIModule",
            "RuntimeVertexPainter",
            "GameplayTags",
            "ImGui",
            "Json"
        });



        // Uncomment if you are using Slate UI
        PrivateDependencyModuleNames.AddRange(new string[] {
            "Slate",
            "SlateCore",
            "RenderCore"
             });

        // Uncomment if you are using online features
        // PrivateDependencyModuleNames.Add("OnlineSubsystem");

        // To include OnlineSubsystemSteam, add it to the plugins section in your uproject file with the Enabled attribute set to true
    }
}
