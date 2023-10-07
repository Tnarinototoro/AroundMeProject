// Some copyright should be here...

using UnrealBuildTool;
using System.IO;
public class DIYAndroidServiceLib : ModuleRules
{
	public DIYAndroidServiceLib(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;
		
		PublicIncludePaths.AddRange(
			new string[] {
				// ... add public include paths required here ...
			}
			);
				
		
		PrivateIncludePaths.AddRange(
			new string[] {
				// ... add other private include paths required here ...
			}
			);
			
		
		PublicDependencyModuleNames.AddRange(
			new string[]
			{
				"Core",
				// ... add other public dependencies that you statically link with here ...
			}
			);
			
		
		PrivateDependencyModuleNames.AddRange(
			new string[]
			{
				"CoreUObject",
				"Engine",
				"Slate",
				"SlateCore",
				// ... add private dependencies that you statically link with here ...	
			}
			);
		
		
		DynamicallyLoadedModuleNames.AddRange(
			new string[]
			{
				// ... add any modules that your module loads dynamically here ...
			}
			);

        if (Target.Platform == UnrealTargetPlatform.Android)
        {
			PrivateDependencyModuleNames.AddRange(new string[] { "Launch" });
			PrivateDependencyModuleNames.AddRange(new string[] { "AndroidPermission" }); //����AndroidPermissionģ��
                                                                                         // ��������Ҫ���ӵ�Gradle������
           
            string PluginPath = Utils.MakePathRelativeTo(ModuleDirectory, Target.RelativeEnginePath);
            AdditionalPropertiesForReceipt.Add("AndroidPlugin", System.IO.Path.Combine(PluginPath, "DIYAndroidServiceLib_APL.xml"));
            //AdditionalPropertiesForReceipt.Add(new ReceiptProperty("AndroidPlugin", Path.Combine(ProjectPath, "/DIYAndroidServiceLib_APL.xml")));
            ////��������Android������������
            //AdditionalPropertiesForReceipt.Add(new ReceiptProperty("AndroidPlugin", ModuleDirectory + "/DIYAndroidServiceLib_APL.xml"));
            //AdditionalPropertiesForReceipt.Add(new ReceiptProperty("AndroidArchitectures", "armv7, arm64, x86, x64"));
            //AdditionalPropertiesForReceipt.Add(new ReceiptProperty("AndroidExtraLibraries", "../../../Source/ThirdParty/DIYAndroidServiceLibLibrary/libs/${ANDROID_ABI}/libDIYAndroidServiceLib.so"));
        }

    }
}
