// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Retargeter/IKRetargetProfile.h"
#include "Retargeter/IKRetargetSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIKRetargetProfile() {}
// Cross Module References
	IKRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRetargetGlobalSettings();
	IKRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRetargetProfile();
	IKRIG_API UScriptStruct* Z_Construct_UScriptStruct_FTargetChainSettings();
	IKRIG_API UScriptStruct* Z_Construct_UScriptStruct_FTargetRootSettings();
	UPackage* Z_Construct_UPackage__Script_IKRig();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RetargetProfile;
class UScriptStruct* FRetargetProfile::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RetargetProfile.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RetargetProfile.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRetargetProfile, (UObject*)Z_Construct_UPackage__Script_IKRig(), TEXT("RetargetProfile"));
	}
	return Z_Registration_Info_UScriptStruct_RetargetProfile.OuterSingleton;
}
template<> IKRIG_API UScriptStruct* StaticStruct<FRetargetProfile>()
{
	return FRetargetProfile::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRetargetProfile_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bApplyTargetRetargetPose_MetaData[];
#endif
		static void NewProp_bApplyTargetRetargetPose_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bApplyTargetRetargetPose;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetRetargetPoseName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_TargetRetargetPoseName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bApplySourceRetargetPose_MetaData[];
#endif
		static void NewProp_bApplySourceRetargetPose_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bApplySourceRetargetPose;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceRetargetPoseName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_SourceRetargetPoseName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bApplyChainSettings_MetaData[];
#endif
		static void NewProp_bApplyChainSettings_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bApplyChainSettings;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ChainSettings_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ChainSettings_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChainSettings_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_ChainSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bApplyRootSettings_MetaData[];
#endif
		static void NewProp_bApplyRootSettings_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bApplyRootSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RootSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RootSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bApplyGlobalSettings_MetaData[];
#endif
		static void NewProp_bApplyGlobalSettings_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bApplyGlobalSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GlobalSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GlobalSettings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRetargetProfile_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Retargeter/IKRetargetProfile.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRetargetProfile_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRetargetProfile>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRetargetProfile_Statics::NewProp_bApplyTargetRetargetPose_MetaData[] = {
		{ "Category", "RetargetPoses" },
		{ "Comment", "// If true, the TARGET Retarget Pose specified in this profile will be applied to the Retargeter (when plugged into the Retargeter).\n" },
		{ "ModuleRelativePath", "Public/Retargeter/IKRetargetProfile.h" },
		{ "ToolTip", "If true, the TARGET Retarget Pose specified in this profile will be applied to the Retargeter (when plugged into the Retargeter)." },
	};
#endif
	void Z_Construct_UScriptStruct_FRetargetProfile_Statics::NewProp_bApplyTargetRetargetPose_SetBit(void* Obj)
	{
		((FRetargetProfile*)Obj)->bApplyTargetRetargetPose = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRetargetProfile_Statics::NewProp_bApplyTargetRetargetPose = { "bApplyTargetRetargetPose", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRetargetProfile), &Z_Construct_UScriptStruct_FRetargetProfile_Statics::NewProp_bApplyTargetRetargetPose_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRetargetProfile_Statics::NewProp_bApplyTargetRetargetPose_MetaData), Z_Construct_UScriptStruct_FRetargetProfile_Statics::NewProp_bApplyTargetRetargetPose_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRetargetProfile_Statics::NewProp_TargetRetargetPoseName_MetaData[] = {
		{ "Category", "RetargetPoses" },
		{ "Comment", "// Override the TARGET Retarget Pose to use when this profile is active.\n// The pose must be present in the Retarget Asset and is not applied unless bApplyTargetRetargetPose is true.\n" },
		{ "EditCondition", "bApplyTargetRetargetPose" },
		{ "ModuleRelativePath", "Public/Retargeter/IKRetargetProfile.h" },
		{ "ToolTip", "Override the TARGET Retarget Pose to use when this profile is active.\nThe pose must be present in the Retarget Asset and is not applied unless bApplyTargetRetargetPose is true." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRetargetProfile_Statics::NewProp_TargetRetargetPoseName = { "TargetRetargetPoseName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRetargetProfile, TargetRetargetPoseName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRetargetProfile_Statics::NewProp_TargetRetargetPoseName_MetaData), Z_Construct_UScriptStruct_FRetargetProfile_Statics::NewProp_TargetRetargetPoseName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRetargetProfile_Statics::NewProp_bApplySourceRetargetPose_MetaData[] = {
		{ "Category", "RetargetPoses" },
		{ "Comment", "// If true, the Source Retarget Pose specified in this profile will be applied to the Retargeter (when plugged into the Retargeter).\n" },
		{ "ModuleRelativePath", "Public/Retargeter/IKRetargetProfile.h" },
		{ "ToolTip", "If true, the Source Retarget Pose specified in this profile will be applied to the Retargeter (when plugged into the Retargeter)." },
	};
#endif
	void Z_Construct_UScriptStruct_FRetargetProfile_Statics::NewProp_bApplySourceRetargetPose_SetBit(void* Obj)
	{
		((FRetargetProfile*)Obj)->bApplySourceRetargetPose = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRetargetProfile_Statics::NewProp_bApplySourceRetargetPose = { "bApplySourceRetargetPose", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRetargetProfile), &Z_Construct_UScriptStruct_FRetargetProfile_Statics::NewProp_bApplySourceRetargetPose_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRetargetProfile_Statics::NewProp_bApplySourceRetargetPose_MetaData), Z_Construct_UScriptStruct_FRetargetProfile_Statics::NewProp_bApplySourceRetargetPose_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRetargetProfile_Statics::NewProp_SourceRetargetPoseName_MetaData[] = {
		{ "Category", "RetargetPoses" },
		{ "Comment", "// Override the SOURCE Retarget Pose to use when this profile is active.\n// The pose must be present in the Retarget Asset and is not applied unless bApplySourceRetargetPose is true.\n" },
		{ "EditCondition", "bApplySourceRetargetPose" },
		{ "ModuleRelativePath", "Public/Retargeter/IKRetargetProfile.h" },
		{ "ToolTip", "Override the SOURCE Retarget Pose to use when this profile is active.\nThe pose must be present in the Retarget Asset and is not applied unless bApplySourceRetargetPose is true." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRetargetProfile_Statics::NewProp_SourceRetargetPoseName = { "SourceRetargetPoseName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRetargetProfile, SourceRetargetPoseName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRetargetProfile_Statics::NewProp_SourceRetargetPoseName_MetaData), Z_Construct_UScriptStruct_FRetargetProfile_Statics::NewProp_SourceRetargetPoseName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRetargetProfile_Statics::NewProp_bApplyChainSettings_MetaData[] = {
		{ "Category", "ChainSettings" },
		{ "Comment", "// If true, the Chain Settings stored in this profile will be applied to the Retargeter (when plugged into the Retargeter).\n" },
		{ "ModuleRelativePath", "Public/Retargeter/IKRetargetProfile.h" },
		{ "ToolTip", "If true, the Chain Settings stored in this profile will be applied to the Retargeter (when plugged into the Retargeter)." },
	};
#endif
	void Z_Construct_UScriptStruct_FRetargetProfile_Statics::NewProp_bApplyChainSettings_SetBit(void* Obj)
	{
		((FRetargetProfile*)Obj)->bApplyChainSettings = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRetargetProfile_Statics::NewProp_bApplyChainSettings = { "bApplyChainSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRetargetProfile), &Z_Construct_UScriptStruct_FRetargetProfile_Statics::NewProp_bApplyChainSettings_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRetargetProfile_Statics::NewProp_bApplyChainSettings_MetaData), Z_Construct_UScriptStruct_FRetargetProfile_Statics::NewProp_bApplyChainSettings_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRetargetProfile_Statics::NewProp_ChainSettings_ValueProp = { "ChainSettings", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FTargetChainSettings, METADATA_PARAMS(0, nullptr) }; // 4174709266
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRetargetProfile_Statics::NewProp_ChainSettings_Key_KeyProp = { "ChainSettings_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRetargetProfile_Statics::NewProp_ChainSettings_MetaData[] = {
		{ "Category", "ChainSettings" },
		{ "Comment", "// A (potentially sparse) set of setting overrides for the target chains (only applied when bApplyChainSettings is true).\n" },
		{ "EditCondition", "bApplyChainSettings" },
		{ "ModuleRelativePath", "Public/Retargeter/IKRetargetProfile.h" },
		{ "ToolTip", "A (potentially sparse) set of setting overrides for the target chains (only applied when bApplyChainSettings is true)." },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FRetargetProfile_Statics::NewProp_ChainSettings = { "ChainSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRetargetProfile, ChainSettings), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRetargetProfile_Statics::NewProp_ChainSettings_MetaData), Z_Construct_UScriptStruct_FRetargetProfile_Statics::NewProp_ChainSettings_MetaData) }; // 4174709266
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRetargetProfile_Statics::NewProp_bApplyRootSettings_MetaData[] = {
		{ "Category", "RootSettings" },
		{ "Comment", "// If true, the root settings stored in this profile will be applied to the Retargeter (when plugged into the Retargeter).\n" },
		{ "ModuleRelativePath", "Public/Retargeter/IKRetargetProfile.h" },
		{ "ToolTip", "If true, the root settings stored in this profile will be applied to the Retargeter (when plugged into the Retargeter)." },
	};
#endif
	void Z_Construct_UScriptStruct_FRetargetProfile_Statics::NewProp_bApplyRootSettings_SetBit(void* Obj)
	{
		((FRetargetProfile*)Obj)->bApplyRootSettings = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRetargetProfile_Statics::NewProp_bApplyRootSettings = { "bApplyRootSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRetargetProfile), &Z_Construct_UScriptStruct_FRetargetProfile_Statics::NewProp_bApplyRootSettings_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRetargetProfile_Statics::NewProp_bApplyRootSettings_MetaData), Z_Construct_UScriptStruct_FRetargetProfile_Statics::NewProp_bApplyRootSettings_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRetargetProfile_Statics::NewProp_RootSettings_MetaData[] = {
		{ "Category", "RootSettings" },
		{ "Comment", "// Retarget settings to control behavior of the retarget root motion (not applied unless bApplyRootSettings is true)\n" },
		{ "EditCondition", "bApplyRootSettings" },
		{ "ModuleRelativePath", "Public/Retargeter/IKRetargetProfile.h" },
		{ "ToolTip", "Retarget settings to control behavior of the retarget root motion (not applied unless bApplyRootSettings is true)" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRetargetProfile_Statics::NewProp_RootSettings = { "RootSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRetargetProfile, RootSettings), Z_Construct_UScriptStruct_FTargetRootSettings, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRetargetProfile_Statics::NewProp_RootSettings_MetaData), Z_Construct_UScriptStruct_FRetargetProfile_Statics::NewProp_RootSettings_MetaData) }; // 1033566283
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRetargetProfile_Statics::NewProp_bApplyGlobalSettings_MetaData[] = {
		{ "Category", "GlobalSettings" },
		{ "Comment", "// If true, the global settings stored in this profile will be applied to the Retargeter (when plugged into the Retargeter).\n" },
		{ "ModuleRelativePath", "Public/Retargeter/IKRetargetProfile.h" },
		{ "ToolTip", "If true, the global settings stored in this profile will be applied to the Retargeter (when plugged into the Retargeter)." },
	};
#endif
	void Z_Construct_UScriptStruct_FRetargetProfile_Statics::NewProp_bApplyGlobalSettings_SetBit(void* Obj)
	{
		((FRetargetProfile*)Obj)->bApplyGlobalSettings = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRetargetProfile_Statics::NewProp_bApplyGlobalSettings = { "bApplyGlobalSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRetargetProfile), &Z_Construct_UScriptStruct_FRetargetProfile_Statics::NewProp_bApplyGlobalSettings_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRetargetProfile_Statics::NewProp_bApplyGlobalSettings_MetaData), Z_Construct_UScriptStruct_FRetargetProfile_Statics::NewProp_bApplyGlobalSettings_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRetargetProfile_Statics::NewProp_GlobalSettings_MetaData[] = {
		{ "Category", "GlobalSettings" },
		{ "Comment", "// Retarget settings to control global behavior, like Stride Warping (not applied unless bApplyGlobalSettings is true)\n" },
		{ "EditCondition", "bApplyGlobalSettings" },
		{ "ModuleRelativePath", "Public/Retargeter/IKRetargetProfile.h" },
		{ "ToolTip", "Retarget settings to control global behavior, like Stride Warping (not applied unless bApplyGlobalSettings is true)" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRetargetProfile_Statics::NewProp_GlobalSettings = { "GlobalSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRetargetProfile, GlobalSettings), Z_Construct_UScriptStruct_FRetargetGlobalSettings, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRetargetProfile_Statics::NewProp_GlobalSettings_MetaData), Z_Construct_UScriptStruct_FRetargetProfile_Statics::NewProp_GlobalSettings_MetaData) }; // 2377161808
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRetargetProfile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRetargetProfile_Statics::NewProp_bApplyTargetRetargetPose,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRetargetProfile_Statics::NewProp_TargetRetargetPoseName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRetargetProfile_Statics::NewProp_bApplySourceRetargetPose,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRetargetProfile_Statics::NewProp_SourceRetargetPoseName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRetargetProfile_Statics::NewProp_bApplyChainSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRetargetProfile_Statics::NewProp_ChainSettings_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRetargetProfile_Statics::NewProp_ChainSettings_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRetargetProfile_Statics::NewProp_ChainSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRetargetProfile_Statics::NewProp_bApplyRootSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRetargetProfile_Statics::NewProp_RootSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRetargetProfile_Statics::NewProp_bApplyGlobalSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRetargetProfile_Statics::NewProp_GlobalSettings,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRetargetProfile_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_IKRig,
		nullptr,
		&NewStructOps,
		"RetargetProfile",
		Z_Construct_UScriptStruct_FRetargetProfile_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRetargetProfile_Statics::PropPointers),
		sizeof(FRetargetProfile),
		alignof(FRetargetProfile),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRetargetProfile_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRetargetProfile_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRetargetProfile_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FRetargetProfile()
	{
		if (!Z_Registration_Info_UScriptStruct_RetargetProfile.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RetargetProfile.InnerSingleton, Z_Construct_UScriptStruct_FRetargetProfile_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RetargetProfile.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_IKRetargetProfile_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_IKRetargetProfile_h_Statics::ScriptStructInfo[] = {
		{ FRetargetProfile::StaticStruct, Z_Construct_UScriptStruct_FRetargetProfile_Statics::NewStructOps, TEXT("RetargetProfile"), &Z_Registration_Info_UScriptStruct_RetargetProfile, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRetargetProfile), 2712446673U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_IKRetargetProfile_h_113198584(TEXT("/Script/IKRig"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_IKRetargetProfile_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_IKRetargetProfile_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
