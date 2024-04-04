// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DisplayClusterConfigurationTypes_Media.h"
#include "DisplayClusterConfigurationTypes_Base.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDisplayClusterConfigurationTypes_Media() {}
// Cross Module References
	DISPLAYCLUSTERCONFIGURATION_API UClass* Z_Construct_UClass_UDisplayClusterMediaOutputSynchronizationPolicy_NoRegister();
	DISPLAYCLUSTERCONFIGURATION_API UScriptStruct* Z_Construct_UScriptStruct_FDisplayClusterConfigurationClusterItemReferenceList();
	DISPLAYCLUSTERCONFIGURATION_API UScriptStruct* Z_Construct_UScriptStruct_FDisplayClusterConfigurationGlobalMediaSettings();
	DISPLAYCLUSTERCONFIGURATION_API UScriptStruct* Z_Construct_UScriptStruct_FDisplayClusterConfigurationMedia();
	DISPLAYCLUSTERCONFIGURATION_API UScriptStruct* Z_Construct_UScriptStruct_FDisplayClusterConfigurationMediaICVFX();
	DISPLAYCLUSTERCONFIGURATION_API UScriptStruct* Z_Construct_UScriptStruct_FDisplayClusterConfigurationMediaInput();
	DISPLAYCLUSTERCONFIGURATION_API UScriptStruct* Z_Construct_UScriptStruct_FDisplayClusterConfigurationMediaInputGroup();
	DISPLAYCLUSTERCONFIGURATION_API UScriptStruct* Z_Construct_UScriptStruct_FDisplayClusterConfigurationMediaOutput();
	DISPLAYCLUSTERCONFIGURATION_API UScriptStruct* Z_Construct_UScriptStruct_FDisplayClusterConfigurationMediaOutputGroup();
	MEDIAASSETS_API UClass* Z_Construct_UClass_UMediaSource_NoRegister();
	MEDIAIOCORE_API UClass* Z_Construct_UClass_UMediaOutput_NoRegister();
	UPackage* Z_Construct_UPackage__Script_DisplayClusterConfiguration();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationMediaInput;
class UScriptStruct* FDisplayClusterConfigurationMediaInput::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationMediaInput.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationMediaInput.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDisplayClusterConfigurationMediaInput, (UObject*)Z_Construct_UPackage__Script_DisplayClusterConfiguration(), TEXT("DisplayClusterConfigurationMediaInput"));
	}
	return Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationMediaInput.OuterSingleton;
}
template<> DISPLAYCLUSTERCONFIGURATION_API UScriptStruct* StaticStruct<FDisplayClusterConfigurationMediaInput>()
{
	return FDisplayClusterConfigurationMediaInput::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDisplayClusterConfigurationMediaInput_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MediaSource_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_MediaSource;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationMediaInput_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/*\n * Media input item\n */" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/DisplayClusterConfigurationTypes_Media.h" },
		{ "ToolTip", "* Media input item" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDisplayClusterConfigurationMediaInput_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDisplayClusterConfigurationMediaInput>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationMediaInput_Statics::NewProp_MediaSource_MetaData[] = {
		{ "Category", "Media" },
		{ "Comment", "/** Media source to use */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DisplayClusterConfigurationTypes_Media.h" },
		{ "ToolTip", "Media source to use" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationMediaInput_Statics::NewProp_MediaSource = { "MediaSource", nullptr, (EPropertyFlags)0x001600000008000d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDisplayClusterConfigurationMediaInput, MediaSource), Z_Construct_UClass_UMediaSource_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationMediaInput_Statics::NewProp_MediaSource_MetaData), Z_Construct_UScriptStruct_FDisplayClusterConfigurationMediaInput_Statics::NewProp_MediaSource_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDisplayClusterConfigurationMediaInput_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationMediaInput_Statics::NewProp_MediaSource,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationMediaInput_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DisplayClusterConfiguration,
		nullptr,
		&NewStructOps,
		"DisplayClusterConfigurationMediaInput",
		Z_Construct_UScriptStruct_FDisplayClusterConfigurationMediaInput_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationMediaInput_Statics::PropPointers),
		sizeof(FDisplayClusterConfigurationMediaInput),
		alignof(FDisplayClusterConfigurationMediaInput),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000205),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationMediaInput_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDisplayClusterConfigurationMediaInput_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationMediaInput_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FDisplayClusterConfigurationMediaInput()
	{
		if (!Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationMediaInput.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationMediaInput.InnerSingleton, Z_Construct_UScriptStruct_FDisplayClusterConfigurationMediaInput_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationMediaInput.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationMediaOutput;
class UScriptStruct* FDisplayClusterConfigurationMediaOutput::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationMediaOutput.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationMediaOutput.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDisplayClusterConfigurationMediaOutput, (UObject*)Z_Construct_UPackage__Script_DisplayClusterConfiguration(), TEXT("DisplayClusterConfigurationMediaOutput"));
	}
	return Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationMediaOutput.OuterSingleton;
}
template<> DISPLAYCLUSTERCONFIGURATION_API UScriptStruct* StaticStruct<FDisplayClusterConfigurationMediaOutput>()
{
	return FDisplayClusterConfigurationMediaOutput::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDisplayClusterConfigurationMediaOutput_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MediaOutput_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_MediaOutput;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OutputSyncPolicy_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_OutputSyncPolicy;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationMediaOutput_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/*\n * Media output item\n */" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/DisplayClusterConfigurationTypes_Media.h" },
		{ "ToolTip", "* Media output item" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDisplayClusterConfigurationMediaOutput_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDisplayClusterConfigurationMediaOutput>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationMediaOutput_Statics::NewProp_MediaOutput_MetaData[] = {
		{ "Category", "Media" },
		{ "Comment", "/** Media output to use */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DisplayClusterConfigurationTypes_Media.h" },
		{ "ToolTip", "Media output to use" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationMediaOutput_Statics::NewProp_MediaOutput = { "MediaOutput", nullptr, (EPropertyFlags)0x001600000008000d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDisplayClusterConfigurationMediaOutput, MediaOutput), Z_Construct_UClass_UMediaOutput_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationMediaOutput_Statics::NewProp_MediaOutput_MetaData), Z_Construct_UScriptStruct_FDisplayClusterConfigurationMediaOutput_Statics::NewProp_MediaOutput_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationMediaOutput_Statics::NewProp_OutputSyncPolicy_MetaData[] = {
		{ "Category", "Media" },
		{ "Comment", "/** Media output synchronization policy */" },
		{ "DisplayName", "Capture Synchronization" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DisplayClusterConfigurationTypes_Media.h" },
		{ "ToolTip", "Media output synchronization policy" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationMediaOutput_Statics::NewProp_OutputSyncPolicy = { "OutputSyncPolicy", nullptr, (EPropertyFlags)0x001600000008000d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDisplayClusterConfigurationMediaOutput, OutputSyncPolicy), Z_Construct_UClass_UDisplayClusterMediaOutputSynchronizationPolicy_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationMediaOutput_Statics::NewProp_OutputSyncPolicy_MetaData), Z_Construct_UScriptStruct_FDisplayClusterConfigurationMediaOutput_Statics::NewProp_OutputSyncPolicy_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDisplayClusterConfigurationMediaOutput_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationMediaOutput_Statics::NewProp_MediaOutput,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationMediaOutput_Statics::NewProp_OutputSyncPolicy,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationMediaOutput_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DisplayClusterConfiguration,
		nullptr,
		&NewStructOps,
		"DisplayClusterConfigurationMediaOutput",
		Z_Construct_UScriptStruct_FDisplayClusterConfigurationMediaOutput_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationMediaOutput_Statics::PropPointers),
		sizeof(FDisplayClusterConfigurationMediaOutput),
		alignof(FDisplayClusterConfigurationMediaOutput),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000205),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationMediaOutput_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDisplayClusterConfigurationMediaOutput_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationMediaOutput_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FDisplayClusterConfigurationMediaOutput()
	{
		if (!Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationMediaOutput.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationMediaOutput.InnerSingleton, Z_Construct_UScriptStruct_FDisplayClusterConfigurationMediaOutput_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationMediaOutput.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationMedia;
class UScriptStruct* FDisplayClusterConfigurationMedia::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationMedia.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationMedia.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDisplayClusterConfigurationMedia, (UObject*)Z_Construct_UPackage__Script_DisplayClusterConfiguration(), TEXT("DisplayClusterConfigurationMedia"));
	}
	return Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationMedia.OuterSingleton;
}
template<> DISPLAYCLUSTERCONFIGURATION_API UScriptStruct* StaticStruct<FDisplayClusterConfigurationMedia>()
{
	return FDisplayClusterConfigurationMedia::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDisplayClusterConfigurationMedia_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnable_MetaData[];
#endif
		static void NewProp_bEnable_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnable;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MediaInput_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MediaInput;
		static const UECodeGen_Private::FStructPropertyParams NewProp_MediaOutputs_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MediaOutputs_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_MediaOutputs;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MediaSharingNode_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_MediaSharingNode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MediaSource_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_MediaSource;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MediaOutput_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_MediaOutput;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OutputSyncPolicy_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_OutputSyncPolicy;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationMedia_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/*\n * Media settings for viewports and backbuffer\n */" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/DisplayClusterConfigurationTypes_Media.h" },
		{ "ToolTip", "* Media settings for viewports and backbuffer" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDisplayClusterConfigurationMedia_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDisplayClusterConfigurationMedia>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationMedia_Statics::NewProp_bEnable_MetaData[] = {
		{ "Category", "Media" },
		{ "Comment", "/** Enable/disable media */" },
		{ "ModuleRelativePath", "Public/DisplayClusterConfigurationTypes_Media.h" },
		{ "ToolTip", "Enable/disable media" },
	};
#endif
	void Z_Construct_UScriptStruct_FDisplayClusterConfigurationMedia_Statics::NewProp_bEnable_SetBit(void* Obj)
	{
		((FDisplayClusterConfigurationMedia*)Obj)->bEnable = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationMedia_Statics::NewProp_bEnable = { "bEnable", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FDisplayClusterConfigurationMedia), &Z_Construct_UScriptStruct_FDisplayClusterConfigurationMedia_Statics::NewProp_bEnable_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationMedia_Statics::NewProp_bEnable_MetaData), Z_Construct_UScriptStruct_FDisplayClusterConfigurationMedia_Statics::NewProp_bEnable_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationMedia_Statics::NewProp_MediaInput_MetaData[] = {
		{ "Category", "Media" },
		{ "Comment", "/** Media source to use */" },
		{ "ModuleRelativePath", "Public/DisplayClusterConfigurationTypes_Media.h" },
		{ "ToolTip", "Media source to use" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationMedia_Statics::NewProp_MediaInput = { "MediaInput", nullptr, (EPropertyFlags)0x0010008000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDisplayClusterConfigurationMedia, MediaInput), Z_Construct_UScriptStruct_FDisplayClusterConfigurationMediaInput, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationMedia_Statics::NewProp_MediaInput_MetaData), Z_Construct_UScriptStruct_FDisplayClusterConfigurationMedia_Statics::NewProp_MediaInput_MetaData) }; // 1351355281
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationMedia_Statics::NewProp_MediaOutputs_Inner = { "MediaOutputs", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FDisplayClusterConfigurationMediaOutput, METADATA_PARAMS(0, nullptr) }; // 1788580936
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationMedia_Statics::NewProp_MediaOutputs_MetaData[] = {
		{ "Category", "Media" },
		{ "Comment", "/** Media outputs to use */" },
		{ "ModuleRelativePath", "Public/DisplayClusterConfigurationTypes_Media.h" },
		{ "ToolTip", "Media outputs to use" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationMedia_Statics::NewProp_MediaOutputs = { "MediaOutputs", nullptr, (EPropertyFlags)0x0010008000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDisplayClusterConfigurationMedia, MediaOutputs), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationMedia_Statics::NewProp_MediaOutputs_MetaData), Z_Construct_UScriptStruct_FDisplayClusterConfigurationMedia_Statics::NewProp_MediaOutputs_MetaData) }; // 1788580936
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationMedia_Statics::NewProp_MediaSharingNode_MetaData[] = {
		{ "DeprecatedProperty", "" },
		{ "DeprecationMessage", "This property has been deprecated" },
		{ "ModuleRelativePath", "Public/DisplayClusterConfigurationTypes_Media.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationMedia_Statics::NewProp_MediaSharingNode = { "MediaSharingNode", nullptr, (EPropertyFlags)0x0020080820000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDisplayClusterConfigurationMedia, MediaSharingNode_DEPRECATED), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationMedia_Statics::NewProp_MediaSharingNode_MetaData), Z_Construct_UScriptStruct_FDisplayClusterConfigurationMedia_Statics::NewProp_MediaSharingNode_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationMedia_Statics::NewProp_MediaSource_MetaData[] = {
		{ "DeprecatedProperty", "" },
		{ "DeprecationMessage", "This property has been deprecated. Please refer new MediaInput property." },
		{ "ModuleRelativePath", "Public/DisplayClusterConfigurationTypes_Media.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationMedia_Statics::NewProp_MediaSource = { "MediaSource", nullptr, (EPropertyFlags)0x0014000800000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDisplayClusterConfigurationMedia, MediaSource), Z_Construct_UClass_UMediaSource_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationMedia_Statics::NewProp_MediaSource_MetaData), Z_Construct_UScriptStruct_FDisplayClusterConfigurationMedia_Statics::NewProp_MediaSource_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationMedia_Statics::NewProp_MediaOutput_MetaData[] = {
		{ "DeprecatedProperty", "" },
		{ "DeprecationMessage", "This property has been deprecated. Please refer new MediaOutputs property." },
		{ "ModuleRelativePath", "Public/DisplayClusterConfigurationTypes_Media.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationMedia_Statics::NewProp_MediaOutput = { "MediaOutput", nullptr, (EPropertyFlags)0x0014000800000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDisplayClusterConfigurationMedia, MediaOutput), Z_Construct_UClass_UMediaOutput_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationMedia_Statics::NewProp_MediaOutput_MetaData), Z_Construct_UScriptStruct_FDisplayClusterConfigurationMedia_Statics::NewProp_MediaOutput_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationMedia_Statics::NewProp_OutputSyncPolicy_MetaData[] = {
		{ "DeprecatedProperty", "" },
		{ "DeprecationMessage", "This property has been deprecated." },
		{ "ModuleRelativePath", "Public/DisplayClusterConfigurationTypes_Media.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationMedia_Statics::NewProp_OutputSyncPolicy = { "OutputSyncPolicy", nullptr, (EPropertyFlags)0x0014000800000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDisplayClusterConfigurationMedia, OutputSyncPolicy), Z_Construct_UClass_UDisplayClusterMediaOutputSynchronizationPolicy_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationMedia_Statics::NewProp_OutputSyncPolicy_MetaData), Z_Construct_UScriptStruct_FDisplayClusterConfigurationMedia_Statics::NewProp_OutputSyncPolicy_MetaData) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDisplayClusterConfigurationMedia_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationMedia_Statics::NewProp_bEnable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationMedia_Statics::NewProp_MediaInput,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationMedia_Statics::NewProp_MediaOutputs_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationMedia_Statics::NewProp_MediaOutputs,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationMedia_Statics::NewProp_MediaSharingNode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationMedia_Statics::NewProp_MediaSource,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationMedia_Statics::NewProp_MediaOutput,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationMedia_Statics::NewProp_OutputSyncPolicy,
#endif // WITH_EDITORONLY_DATA
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationMedia_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DisplayClusterConfiguration,
		nullptr,
		&NewStructOps,
		"DisplayClusterConfigurationMedia",
		Z_Construct_UScriptStruct_FDisplayClusterConfigurationMedia_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationMedia_Statics::PropPointers),
		sizeof(FDisplayClusterConfigurationMedia),
		alignof(FDisplayClusterConfigurationMedia),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000205),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationMedia_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDisplayClusterConfigurationMedia_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationMedia_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FDisplayClusterConfigurationMedia()
	{
		if (!Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationMedia.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationMedia.InnerSingleton, Z_Construct_UScriptStruct_FDisplayClusterConfigurationMedia_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationMedia.InnerSingleton;
	}

static_assert(std::is_polymorphic<FDisplayClusterConfigurationMediaInputGroup>() == std::is_polymorphic<FDisplayClusterConfigurationMediaInput>(), "USTRUCT FDisplayClusterConfigurationMediaInputGroup cannot be polymorphic unless super FDisplayClusterConfigurationMediaInput is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationMediaInputGroup;
class UScriptStruct* FDisplayClusterConfigurationMediaInputGroup::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationMediaInputGroup.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationMediaInputGroup.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDisplayClusterConfigurationMediaInputGroup, (UObject*)Z_Construct_UPackage__Script_DisplayClusterConfiguration(), TEXT("DisplayClusterConfigurationMediaInputGroup"));
	}
	return Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationMediaInputGroup.OuterSingleton;
}
template<> DISPLAYCLUSTERCONFIGURATION_API UScriptStruct* StaticStruct<FDisplayClusterConfigurationMediaInputGroup>()
{
	return FDisplayClusterConfigurationMediaInputGroup::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDisplayClusterConfigurationMediaInputGroup_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClusterNodes_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ClusterNodes;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationMediaInputGroup_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/*\n * Media input group (ICVFX)\n */" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/DisplayClusterConfigurationTypes_Media.h" },
		{ "ToolTip", "* Media input group (ICVFX)" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDisplayClusterConfigurationMediaInputGroup_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDisplayClusterConfigurationMediaInputGroup>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationMediaInputGroup_Statics::NewProp_ClusterNodes_MetaData[] = {
		{ "Category", "Media" },
		{ "ClusterItemType", "ClusterNodes" },
		{ "Comment", "/** Cluster nodes that use media source below */" },
		{ "ModuleRelativePath", "Public/DisplayClusterConfigurationTypes_Media.h" },
		{ "ToolTip", "Cluster nodes that use media source below" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationMediaInputGroup_Statics::NewProp_ClusterNodes = { "ClusterNodes", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDisplayClusterConfigurationMediaInputGroup, ClusterNodes), Z_Construct_UScriptStruct_FDisplayClusterConfigurationClusterItemReferenceList, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationMediaInputGroup_Statics::NewProp_ClusterNodes_MetaData), Z_Construct_UScriptStruct_FDisplayClusterConfigurationMediaInputGroup_Statics::NewProp_ClusterNodes_MetaData) }; // 2884719261
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDisplayClusterConfigurationMediaInputGroup_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationMediaInputGroup_Statics::NewProp_ClusterNodes,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationMediaInputGroup_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DisplayClusterConfiguration,
		Z_Construct_UScriptStruct_FDisplayClusterConfigurationMediaInput,
		&NewStructOps,
		"DisplayClusterConfigurationMediaInputGroup",
		Z_Construct_UScriptStruct_FDisplayClusterConfigurationMediaInputGroup_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationMediaInputGroup_Statics::PropPointers),
		sizeof(FDisplayClusterConfigurationMediaInputGroup),
		alignof(FDisplayClusterConfigurationMediaInputGroup),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000205),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationMediaInputGroup_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDisplayClusterConfigurationMediaInputGroup_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationMediaInputGroup_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FDisplayClusterConfigurationMediaInputGroup()
	{
		if (!Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationMediaInputGroup.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationMediaInputGroup.InnerSingleton, Z_Construct_UScriptStruct_FDisplayClusterConfigurationMediaInputGroup_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationMediaInputGroup.InnerSingleton;
	}

static_assert(std::is_polymorphic<FDisplayClusterConfigurationMediaOutputGroup>() == std::is_polymorphic<FDisplayClusterConfigurationMediaOutput>(), "USTRUCT FDisplayClusterConfigurationMediaOutputGroup cannot be polymorphic unless super FDisplayClusterConfigurationMediaOutput is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationMediaOutputGroup;
class UScriptStruct* FDisplayClusterConfigurationMediaOutputGroup::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationMediaOutputGroup.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationMediaOutputGroup.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDisplayClusterConfigurationMediaOutputGroup, (UObject*)Z_Construct_UPackage__Script_DisplayClusterConfiguration(), TEXT("DisplayClusterConfigurationMediaOutputGroup"));
	}
	return Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationMediaOutputGroup.OuterSingleton;
}
template<> DISPLAYCLUSTERCONFIGURATION_API UScriptStruct* StaticStruct<FDisplayClusterConfigurationMediaOutputGroup>()
{
	return FDisplayClusterConfigurationMediaOutputGroup::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDisplayClusterConfigurationMediaOutputGroup_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClusterNodes_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ClusterNodes;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationMediaOutputGroup_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/*\n * Media output group (ICVFX)\n */" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/DisplayClusterConfigurationTypes_Media.h" },
		{ "ToolTip", "* Media output group (ICVFX)" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDisplayClusterConfigurationMediaOutputGroup_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDisplayClusterConfigurationMediaOutputGroup>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationMediaOutputGroup_Statics::NewProp_ClusterNodes_MetaData[] = {
		{ "Category", "Media" },
		{ "ClusterItemType", "ClusterNodes" },
		{ "Comment", "/** Cluster nodes that export media via MediaOutput below */" },
		{ "ModuleRelativePath", "Public/DisplayClusterConfigurationTypes_Media.h" },
		{ "ToolTip", "Cluster nodes that export media via MediaOutput below" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationMediaOutputGroup_Statics::NewProp_ClusterNodes = { "ClusterNodes", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDisplayClusterConfigurationMediaOutputGroup, ClusterNodes), Z_Construct_UScriptStruct_FDisplayClusterConfigurationClusterItemReferenceList, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationMediaOutputGroup_Statics::NewProp_ClusterNodes_MetaData), Z_Construct_UScriptStruct_FDisplayClusterConfigurationMediaOutputGroup_Statics::NewProp_ClusterNodes_MetaData) }; // 2884719261
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDisplayClusterConfigurationMediaOutputGroup_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationMediaOutputGroup_Statics::NewProp_ClusterNodes,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationMediaOutputGroup_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DisplayClusterConfiguration,
		Z_Construct_UScriptStruct_FDisplayClusterConfigurationMediaOutput,
		&NewStructOps,
		"DisplayClusterConfigurationMediaOutputGroup",
		Z_Construct_UScriptStruct_FDisplayClusterConfigurationMediaOutputGroup_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationMediaOutputGroup_Statics::PropPointers),
		sizeof(FDisplayClusterConfigurationMediaOutputGroup),
		alignof(FDisplayClusterConfigurationMediaOutputGroup),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000205),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationMediaOutputGroup_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDisplayClusterConfigurationMediaOutputGroup_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationMediaOutputGroup_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FDisplayClusterConfigurationMediaOutputGroup()
	{
		if (!Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationMediaOutputGroup.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationMediaOutputGroup.InnerSingleton, Z_Construct_UScriptStruct_FDisplayClusterConfigurationMediaOutputGroup_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationMediaOutputGroup.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationMediaICVFX;
class UScriptStruct* FDisplayClusterConfigurationMediaICVFX::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationMediaICVFX.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationMediaICVFX.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDisplayClusterConfigurationMediaICVFX, (UObject*)Z_Construct_UPackage__Script_DisplayClusterConfiguration(), TEXT("DisplayClusterConfigurationMediaICVFX"));
	}
	return Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationMediaICVFX.OuterSingleton;
}
template<> DISPLAYCLUSTERCONFIGURATION_API UScriptStruct* StaticStruct<FDisplayClusterConfigurationMediaICVFX>()
{
	return FDisplayClusterConfigurationMediaICVFX::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDisplayClusterConfigurationMediaICVFX_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnable_MetaData[];
#endif
		static void NewProp_bEnable_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnable;
		static const UECodeGen_Private::FStructPropertyParams NewProp_MediaInputGroups_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MediaInputGroups_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_MediaInputGroups;
		static const UECodeGen_Private::FStructPropertyParams NewProp_MediaOutputGroups_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MediaOutputGroups_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_MediaOutputGroups;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationMediaICVFX_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/*\n * Media settings for ICVFX cameras\n */" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/DisplayClusterConfigurationTypes_Media.h" },
		{ "ToolTip", "* Media settings for ICVFX cameras" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDisplayClusterConfigurationMediaICVFX_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDisplayClusterConfigurationMediaICVFX>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationMediaICVFX_Statics::NewProp_bEnable_MetaData[] = {
		{ "Category", "Media" },
		{ "Comment", "/** Enable/disable media */" },
		{ "ModuleRelativePath", "Public/DisplayClusterConfigurationTypes_Media.h" },
		{ "ToolTip", "Enable/disable media" },
	};
#endif
	void Z_Construct_UScriptStruct_FDisplayClusterConfigurationMediaICVFX_Statics::NewProp_bEnable_SetBit(void* Obj)
	{
		((FDisplayClusterConfigurationMediaICVFX*)Obj)->bEnable = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationMediaICVFX_Statics::NewProp_bEnable = { "bEnable", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FDisplayClusterConfigurationMediaICVFX), &Z_Construct_UScriptStruct_FDisplayClusterConfigurationMediaICVFX_Statics::NewProp_bEnable_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationMediaICVFX_Statics::NewProp_bEnable_MetaData), Z_Construct_UScriptStruct_FDisplayClusterConfigurationMediaICVFX_Statics::NewProp_bEnable_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationMediaICVFX_Statics::NewProp_MediaInputGroups_Inner = { "MediaInputGroups", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FDisplayClusterConfigurationMediaInputGroup, METADATA_PARAMS(0, nullptr) }; // 2071201952
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationMediaICVFX_Statics::NewProp_MediaInputGroups_MetaData[] = {
		{ "Category", "Media" },
		{ "Comment", "/** Media input mapping */" },
		{ "ModuleRelativePath", "Public/DisplayClusterConfigurationTypes_Media.h" },
		{ "ToolTip", "Media input mapping" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationMediaICVFX_Statics::NewProp_MediaInputGroups = { "MediaInputGroups", nullptr, (EPropertyFlags)0x0010008000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDisplayClusterConfigurationMediaICVFX, MediaInputGroups), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationMediaICVFX_Statics::NewProp_MediaInputGroups_MetaData), Z_Construct_UScriptStruct_FDisplayClusterConfigurationMediaICVFX_Statics::NewProp_MediaInputGroups_MetaData) }; // 2071201952
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationMediaICVFX_Statics::NewProp_MediaOutputGroups_Inner = { "MediaOutputGroups", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FDisplayClusterConfigurationMediaOutputGroup, METADATA_PARAMS(0, nullptr) }; // 2454523174
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationMediaICVFX_Statics::NewProp_MediaOutputGroups_MetaData[] = {
		{ "Category", "Media" },
		{ "Comment", "/** Media output mapping */" },
		{ "ModuleRelativePath", "Public/DisplayClusterConfigurationTypes_Media.h" },
		{ "ToolTip", "Media output mapping" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationMediaICVFX_Statics::NewProp_MediaOutputGroups = { "MediaOutputGroups", nullptr, (EPropertyFlags)0x0010008000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDisplayClusterConfigurationMediaICVFX, MediaOutputGroups), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationMediaICVFX_Statics::NewProp_MediaOutputGroups_MetaData), Z_Construct_UScriptStruct_FDisplayClusterConfigurationMediaICVFX_Statics::NewProp_MediaOutputGroups_MetaData) }; // 2454523174
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDisplayClusterConfigurationMediaICVFX_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationMediaICVFX_Statics::NewProp_bEnable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationMediaICVFX_Statics::NewProp_MediaInputGroups_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationMediaICVFX_Statics::NewProp_MediaInputGroups,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationMediaICVFX_Statics::NewProp_MediaOutputGroups_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationMediaICVFX_Statics::NewProp_MediaOutputGroups,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationMediaICVFX_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DisplayClusterConfiguration,
		nullptr,
		&NewStructOps,
		"DisplayClusterConfigurationMediaICVFX",
		Z_Construct_UScriptStruct_FDisplayClusterConfigurationMediaICVFX_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationMediaICVFX_Statics::PropPointers),
		sizeof(FDisplayClusterConfigurationMediaICVFX),
		alignof(FDisplayClusterConfigurationMediaICVFX),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000205),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationMediaICVFX_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDisplayClusterConfigurationMediaICVFX_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationMediaICVFX_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FDisplayClusterConfigurationMediaICVFX()
	{
		if (!Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationMediaICVFX.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationMediaICVFX.InnerSingleton, Z_Construct_UScriptStruct_FDisplayClusterConfigurationMediaICVFX_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationMediaICVFX.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationGlobalMediaSettings;
class UScriptStruct* FDisplayClusterConfigurationGlobalMediaSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationGlobalMediaSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationGlobalMediaSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDisplayClusterConfigurationGlobalMediaSettings, (UObject*)Z_Construct_UPackage__Script_DisplayClusterConfiguration(), TEXT("DisplayClusterConfigurationGlobalMediaSettings"));
	}
	return Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationGlobalMediaSettings.OuterSingleton;
}
template<> DISPLAYCLUSTERCONFIGURATION_API UScriptStruct* StaticStruct<FDisplayClusterConfigurationGlobalMediaSettings>()
{
	return FDisplayClusterConfigurationGlobalMediaSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDisplayClusterConfigurationGlobalMediaSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Latency_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Latency;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationGlobalMediaSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/*\n * Global media settings\n */" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/DisplayClusterConfigurationTypes_Media.h" },
		{ "ToolTip", "* Global media settings" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDisplayClusterConfigurationGlobalMediaSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDisplayClusterConfigurationGlobalMediaSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationGlobalMediaSettings_Statics::NewProp_Latency_MetaData[] = {
		{ "Category", "Media" },
		{ "ClampMax", "9" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Media latency */" },
		{ "ModuleRelativePath", "Public/DisplayClusterConfigurationTypes_Media.h" },
		{ "ToolTip", "Media latency" },
		{ "UIMax", "9" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationGlobalMediaSettings_Statics::NewProp_Latency = { "Latency", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDisplayClusterConfigurationGlobalMediaSettings, Latency), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationGlobalMediaSettings_Statics::NewProp_Latency_MetaData), Z_Construct_UScriptStruct_FDisplayClusterConfigurationGlobalMediaSettings_Statics::NewProp_Latency_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDisplayClusterConfigurationGlobalMediaSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationGlobalMediaSettings_Statics::NewProp_Latency,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationGlobalMediaSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DisplayClusterConfiguration,
		nullptr,
		&NewStructOps,
		"DisplayClusterConfigurationGlobalMediaSettings",
		Z_Construct_UScriptStruct_FDisplayClusterConfigurationGlobalMediaSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationGlobalMediaSettings_Statics::PropPointers),
		sizeof(FDisplayClusterConfigurationGlobalMediaSettings),
		alignof(FDisplayClusterConfigurationGlobalMediaSettings),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationGlobalMediaSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDisplayClusterConfigurationGlobalMediaSettings_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationGlobalMediaSettings_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FDisplayClusterConfigurationGlobalMediaSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationGlobalMediaSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationGlobalMediaSettings.InnerSingleton, Z_Construct_UScriptStruct_FDisplayClusterConfigurationGlobalMediaSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationGlobalMediaSettings.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterConfiguration_Public_DisplayClusterConfigurationTypes_Media_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterConfiguration_Public_DisplayClusterConfigurationTypes_Media_h_Statics::ScriptStructInfo[] = {
		{ FDisplayClusterConfigurationMediaInput::StaticStruct, Z_Construct_UScriptStruct_FDisplayClusterConfigurationMediaInput_Statics::NewStructOps, TEXT("DisplayClusterConfigurationMediaInput"), &Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationMediaInput, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDisplayClusterConfigurationMediaInput), 1351355281U) },
		{ FDisplayClusterConfigurationMediaOutput::StaticStruct, Z_Construct_UScriptStruct_FDisplayClusterConfigurationMediaOutput_Statics::NewStructOps, TEXT("DisplayClusterConfigurationMediaOutput"), &Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationMediaOutput, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDisplayClusterConfigurationMediaOutput), 1788580936U) },
		{ FDisplayClusterConfigurationMedia::StaticStruct, Z_Construct_UScriptStruct_FDisplayClusterConfigurationMedia_Statics::NewStructOps, TEXT("DisplayClusterConfigurationMedia"), &Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationMedia, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDisplayClusterConfigurationMedia), 2017981403U) },
		{ FDisplayClusterConfigurationMediaInputGroup::StaticStruct, Z_Construct_UScriptStruct_FDisplayClusterConfigurationMediaInputGroup_Statics::NewStructOps, TEXT("DisplayClusterConfigurationMediaInputGroup"), &Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationMediaInputGroup, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDisplayClusterConfigurationMediaInputGroup), 2071201952U) },
		{ FDisplayClusterConfigurationMediaOutputGroup::StaticStruct, Z_Construct_UScriptStruct_FDisplayClusterConfigurationMediaOutputGroup_Statics::NewStructOps, TEXT("DisplayClusterConfigurationMediaOutputGroup"), &Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationMediaOutputGroup, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDisplayClusterConfigurationMediaOutputGroup), 2454523174U) },
		{ FDisplayClusterConfigurationMediaICVFX::StaticStruct, Z_Construct_UScriptStruct_FDisplayClusterConfigurationMediaICVFX_Statics::NewStructOps, TEXT("DisplayClusterConfigurationMediaICVFX"), &Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationMediaICVFX, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDisplayClusterConfigurationMediaICVFX), 2439597032U) },
		{ FDisplayClusterConfigurationGlobalMediaSettings::StaticStruct, Z_Construct_UScriptStruct_FDisplayClusterConfigurationGlobalMediaSettings_Statics::NewStructOps, TEXT("DisplayClusterConfigurationGlobalMediaSettings"), &Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationGlobalMediaSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDisplayClusterConfigurationGlobalMediaSettings), 3288346611U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterConfiguration_Public_DisplayClusterConfigurationTypes_Media_h_2621032191(TEXT("/Script/DisplayClusterConfiguration"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterConfiguration_Public_DisplayClusterConfigurationTypes_Media_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterConfiguration_Public_DisplayClusterConfigurationTypes_Media_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
