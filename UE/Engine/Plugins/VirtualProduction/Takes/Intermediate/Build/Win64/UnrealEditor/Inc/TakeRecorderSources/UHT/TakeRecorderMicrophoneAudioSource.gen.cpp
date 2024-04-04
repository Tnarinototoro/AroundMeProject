// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/TakeRecorderMicrophoneAudioSource.h"
#include "TakeRecorderSourceProperty.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTakeRecorderMicrophoneAudioSource() {}
// Cross Module References
	TAKERECORDERSOURCES_API UClass* Z_Construct_UClass_UTakeRecorderMicrophoneAudioSource();
	TAKERECORDERSOURCES_API UClass* Z_Construct_UClass_UTakeRecorderMicrophoneAudioSource_NoRegister();
	TAKERECORDERSOURCES_API UClass* Z_Construct_UClass_UTakeRecorderMicrophoneAudioSourceSettings();
	TAKERECORDERSOURCES_API UClass* Z_Construct_UClass_UTakeRecorderMicrophoneAudioSourceSettings_NoRegister();
	TAKESCORE_API UClass* Z_Construct_UClass_UTakeRecorderSource();
	TAKESCORE_API UScriptStruct* Z_Construct_UScriptStruct_FAudioInputDeviceChannelProperty();
	UPackage* Z_Construct_UPackage__Script_TakeRecorderSources();
// End Cross Module References
	void UTakeRecorderMicrophoneAudioSourceSettings::StaticRegisterNativesUTakeRecorderMicrophoneAudioSourceSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTakeRecorderMicrophoneAudioSourceSettings);
	UClass* Z_Construct_UClass_UTakeRecorderMicrophoneAudioSourceSettings_NoRegister()
	{
		return UTakeRecorderMicrophoneAudioSourceSettings::StaticClass();
	}
	struct Z_Construct_UClass_UTakeRecorderMicrophoneAudioSourceSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AudioSourceName_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_AudioSourceName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AudioTrackName_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_AudioTrackName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AudioAssetName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_AudioAssetName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AudioSubDirectory_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_AudioSubDirectory;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTakeRecorderMicrophoneAudioSourceSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTakeRecorderSource,
		(UObject* (*)())Z_Construct_UPackage__Script_TakeRecorderSources,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTakeRecorderMicrophoneAudioSourceSettings_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTakeRecorderMicrophoneAudioSourceSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** A recording source that records microphone audio */" },
		{ "DisplayName", "Microphone Audio Recorder" },
		{ "IncludePath", "TakeRecorderMicrophoneAudioSource.h" },
		{ "ModuleRelativePath", "Private/TakeRecorderMicrophoneAudioSource.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "A recording source that records microphone audio" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTakeRecorderMicrophoneAudioSourceSettings_Statics::NewProp_AudioSourceName_MetaData[] = {
		{ "Category", "Source" },
		{ "Comment", "/** Name of the audio source */" },
		{ "ModuleRelativePath", "Private/TakeRecorderMicrophoneAudioSource.h" },
		{ "ToolTip", "Name of the audio source" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UTakeRecorderMicrophoneAudioSourceSettings_Statics::NewProp_AudioSourceName = { "AudioSourceName", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTakeRecorderMicrophoneAudioSourceSettings, AudioSourceName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTakeRecorderMicrophoneAudioSourceSettings_Statics::NewProp_AudioSourceName_MetaData), Z_Construct_UClass_UTakeRecorderMicrophoneAudioSourceSettings_Statics::NewProp_AudioSourceName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTakeRecorderMicrophoneAudioSourceSettings_Statics::NewProp_AudioTrackName_MetaData[] = {
		{ "Category", "Source" },
		{ "Comment", "/** Name of the recorded audio track */" },
		{ "ModuleRelativePath", "Private/TakeRecorderMicrophoneAudioSource.h" },
		{ "ToolTip", "Name of the recorded audio track" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UTakeRecorderMicrophoneAudioSourceSettings_Statics::NewProp_AudioTrackName = { "AudioTrackName", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTakeRecorderMicrophoneAudioSourceSettings, AudioTrackName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTakeRecorderMicrophoneAudioSourceSettings_Statics::NewProp_AudioTrackName_MetaData), Z_Construct_UClass_UTakeRecorderMicrophoneAudioSourceSettings_Statics::NewProp_AudioTrackName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTakeRecorderMicrophoneAudioSourceSettings_Statics::NewProp_AudioAssetName_MetaData[] = {
		{ "Category", "Source" },
		{ "Comment", "/** The name of the audio asset.\n\x09 * Supports any of the following format specifiers that will be substituted when a take is recorded :\n\x09 * {day} - The day of the timestamp for the start of the recording.\n\x09 * {month} - The month of the timestamp for the start of the recording.\n\x09 * {year} - The year of the timestamp for the start of the recording.\n\x09 * {hour} - The hour of the timestamp for the start of the recording.\n\x09 * {minute} - The minute of the timestamp for the start of the recording.\n\x09 * {second} - The second of the timestamp for the start of the recording.\n\x09 * {take} - The take number.\n\x09 * {slate} - The slate string.\n\x09 */" },
		{ "ModuleRelativePath", "Private/TakeRecorderMicrophoneAudioSource.h" },
		{ "ToolTip", "The name of the audio asset.\nSupports any of the following format specifiers that will be substituted when a take is recorded :\n{day} - The day of the timestamp for the start of the recording.\n{month} - The month of the timestamp for the start of the recording.\n{year} - The year of the timestamp for the start of the recording.\n{hour} - The hour of the timestamp for the start of the recording.\n{minute} - The minute of the timestamp for the start of the recording.\n{second} - The second of the timestamp for the start of the recording.\n{take} - The take number.\n{slate} - The slate string." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UTakeRecorderMicrophoneAudioSourceSettings_Statics::NewProp_AudioAssetName = { "AudioAssetName", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTakeRecorderMicrophoneAudioSourceSettings, AudioAssetName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTakeRecorderMicrophoneAudioSourceSettings_Statics::NewProp_AudioAssetName_MetaData), Z_Construct_UClass_UTakeRecorderMicrophoneAudioSourceSettings_Statics::NewProp_AudioAssetName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTakeRecorderMicrophoneAudioSourceSettings_Statics::NewProp_AudioSubDirectory_MetaData[] = {
		{ "Category", "Source" },
		{ "Comment", "/** The name of the subdirectory audio will be placed in. Leave this empty to place into the same directory as the sequence base path \n\x09 * Supports any of the following format specifiers that will be substituted when a take is recorded :\n\x09 * {day} - The day of the timestamp for the start of the recording.\n\x09 * {month} - The month of the timestamp for the start of the recording.\n\x09 * {year} - The year of the timestamp for the start of the recording.\n\x09 * {hour} - The hour of the timestamp for the start of the recording.\n\x09 * {minute} - The minute of the timestamp for the start of the recording.\n\x09 * {second} - The second of the timestamp for the start of the recording.\n\x09 * {take} - The take number.\n\x09 * {slate} - The slate string.\n\x09 */" },
		{ "ModuleRelativePath", "Private/TakeRecorderMicrophoneAudioSource.h" },
		{ "ToolTip", "The name of the subdirectory audio will be placed in. Leave this empty to place into the same directory as the sequence base path\nSupports any of the following format specifiers that will be substituted when a take is recorded :\n{day} - The day of the timestamp for the start of the recording.\n{month} - The month of the timestamp for the start of the recording.\n{year} - The year of the timestamp for the start of the recording.\n{hour} - The hour of the timestamp for the start of the recording.\n{minute} - The minute of the timestamp for the start of the recording.\n{second} - The second of the timestamp for the start of the recording.\n{take} - The take number.\n{slate} - The slate string." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UTakeRecorderMicrophoneAudioSourceSettings_Statics::NewProp_AudioSubDirectory = { "AudioSubDirectory", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTakeRecorderMicrophoneAudioSourceSettings, AudioSubDirectory), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTakeRecorderMicrophoneAudioSourceSettings_Statics::NewProp_AudioSubDirectory_MetaData), Z_Construct_UClass_UTakeRecorderMicrophoneAudioSourceSettings_Statics::NewProp_AudioSubDirectory_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTakeRecorderMicrophoneAudioSourceSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTakeRecorderMicrophoneAudioSourceSettings_Statics::NewProp_AudioSourceName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTakeRecorderMicrophoneAudioSourceSettings_Statics::NewProp_AudioTrackName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTakeRecorderMicrophoneAudioSourceSettings_Statics::NewProp_AudioAssetName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTakeRecorderMicrophoneAudioSourceSettings_Statics::NewProp_AudioSubDirectory,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTakeRecorderMicrophoneAudioSourceSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTakeRecorderMicrophoneAudioSourceSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTakeRecorderMicrophoneAudioSourceSettings_Statics::ClassParams = {
		&UTakeRecorderMicrophoneAudioSourceSettings::StaticClass,
		"EditorSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UTakeRecorderMicrophoneAudioSourceSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UTakeRecorderMicrophoneAudioSourceSettings_Statics::PropPointers),
		0,
		0x001000A5u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTakeRecorderMicrophoneAudioSourceSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UTakeRecorderMicrophoneAudioSourceSettings_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTakeRecorderMicrophoneAudioSourceSettings_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UTakeRecorderMicrophoneAudioSourceSettings()
	{
		if (!Z_Registration_Info_UClass_UTakeRecorderMicrophoneAudioSourceSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTakeRecorderMicrophoneAudioSourceSettings.OuterSingleton, Z_Construct_UClass_UTakeRecorderMicrophoneAudioSourceSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTakeRecorderMicrophoneAudioSourceSettings.OuterSingleton;
	}
	template<> TAKERECORDERSOURCES_API UClass* StaticClass<UTakeRecorderMicrophoneAudioSourceSettings>()
	{
		return UTakeRecorderMicrophoneAudioSourceSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTakeRecorderMicrophoneAudioSourceSettings);
	UTakeRecorderMicrophoneAudioSourceSettings::~UTakeRecorderMicrophoneAudioSourceSettings() {}
	void UTakeRecorderMicrophoneAudioSource::StaticRegisterNativesUTakeRecorderMicrophoneAudioSource()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTakeRecorderMicrophoneAudioSource);
	UClass* Z_Construct_UClass_UTakeRecorderMicrophoneAudioSource_NoRegister()
	{
		return UTakeRecorderMicrophoneAudioSource::StaticClass();
	}
	struct Z_Construct_UClass_UTakeRecorderMicrophoneAudioSource_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AudioGain_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AudioGain;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSplitAudioChannelsIntoSeparateTracks_MetaData[];
#endif
		static void NewProp_bSplitAudioChannelsIntoSeparateTracks_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSplitAudioChannelsIntoSeparateTracks;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bReplaceRecordedAudio_MetaData[];
#endif
		static void NewProp_bReplaceRecordedAudio_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bReplaceRecordedAudio;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AudioChannel_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AudioChannel;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTakeRecorderMicrophoneAudioSource_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTakeRecorderMicrophoneAudioSourceSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_TakeRecorderSources,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTakeRecorderMicrophoneAudioSource_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTakeRecorderMicrophoneAudioSource_Statics::Class_MetaDataParams[] = {
		{ "Category", "Audio" },
		{ "Comment", "/** A recording source that records microphone audio */" },
		{ "IncludePath", "TakeRecorderMicrophoneAudioSource.h" },
		{ "ModuleRelativePath", "Private/TakeRecorderMicrophoneAudioSource.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "TakeRecorderDisplayName", "Microphone Audio" },
		{ "ToolTip", "A recording source that records microphone audio" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTakeRecorderMicrophoneAudioSource_Statics::NewProp_AudioGain_MetaData[] = {
		{ "Category", "Source" },
		{ "ClampMax", "40.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Gain in decibels to apply to recorded audio */" },
		{ "ModuleRelativePath", "Private/TakeRecorderMicrophoneAudioSource.h" },
		{ "ToolTip", "Gain in decibels to apply to recorded audio" },
		{ "UIMax", "20.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTakeRecorderMicrophoneAudioSource_Statics::NewProp_AudioGain = { "AudioGain", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTakeRecorderMicrophoneAudioSource, AudioGain), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTakeRecorderMicrophoneAudioSource_Statics::NewProp_AudioGain_MetaData), Z_Construct_UClass_UTakeRecorderMicrophoneAudioSource_Statics::NewProp_AudioGain_MetaData) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTakeRecorderMicrophoneAudioSource_Statics::NewProp_bSplitAudioChannelsIntoSeparateTracks_MetaData[] = {
		{ "DeprecatedProperty", "" },
		{ "DeprecationMessage", "SplitAudioChannelsIntoSeparateTracks is deprecated." },
		{ "ModuleRelativePath", "Private/TakeRecorderMicrophoneAudioSource.h" },
	};
#endif
	void Z_Construct_UClass_UTakeRecorderMicrophoneAudioSource_Statics::NewProp_bSplitAudioChannelsIntoSeparateTracks_SetBit(void* Obj)
	{
		((UTakeRecorderMicrophoneAudioSource*)Obj)->bSplitAudioChannelsIntoSeparateTracks_DEPRECATED = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTakeRecorderMicrophoneAudioSource_Statics::NewProp_bSplitAudioChannelsIntoSeparateTracks = { "bSplitAudioChannelsIntoSeparateTracks", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UTakeRecorderMicrophoneAudioSource), &Z_Construct_UClass_UTakeRecorderMicrophoneAudioSource_Statics::NewProp_bSplitAudioChannelsIntoSeparateTracks_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTakeRecorderMicrophoneAudioSource_Statics::NewProp_bSplitAudioChannelsIntoSeparateTracks_MetaData), Z_Construct_UClass_UTakeRecorderMicrophoneAudioSource_Statics::NewProp_bSplitAudioChannelsIntoSeparateTracks_MetaData) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTakeRecorderMicrophoneAudioSource_Statics::NewProp_bReplaceRecordedAudio_MetaData[] = {
		{ "Category", "Source" },
		{ "Comment", "/** Replace existing recorded audio with any newly recorded audio */" },
		{ "ModuleRelativePath", "Private/TakeRecorderMicrophoneAudioSource.h" },
		{ "ToolTip", "Replace existing recorded audio with any newly recorded audio" },
	};
#endif
	void Z_Construct_UClass_UTakeRecorderMicrophoneAudioSource_Statics::NewProp_bReplaceRecordedAudio_SetBit(void* Obj)
	{
		((UTakeRecorderMicrophoneAudioSource*)Obj)->bReplaceRecordedAudio = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTakeRecorderMicrophoneAudioSource_Statics::NewProp_bReplaceRecordedAudio = { "bReplaceRecordedAudio", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UTakeRecorderMicrophoneAudioSource), &Z_Construct_UClass_UTakeRecorderMicrophoneAudioSource_Statics::NewProp_bReplaceRecordedAudio_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTakeRecorderMicrophoneAudioSource_Statics::NewProp_bReplaceRecordedAudio_MetaData), Z_Construct_UClass_UTakeRecorderMicrophoneAudioSource_Statics::NewProp_bReplaceRecordedAudio_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTakeRecorderMicrophoneAudioSource_Statics::NewProp_AudioChannel_MetaData[] = {
		{ "Category", "Source" },
		{ "Comment", "/** The audio device to use for this microphone source */" },
		{ "ModuleRelativePath", "Private/TakeRecorderMicrophoneAudioSource.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "The audio device to use for this microphone source" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTakeRecorderMicrophoneAudioSource_Statics::NewProp_AudioChannel = { "AudioChannel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTakeRecorderMicrophoneAudioSource, AudioChannel), Z_Construct_UScriptStruct_FAudioInputDeviceChannelProperty, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTakeRecorderMicrophoneAudioSource_Statics::NewProp_AudioChannel_MetaData), Z_Construct_UClass_UTakeRecorderMicrophoneAudioSource_Statics::NewProp_AudioChannel_MetaData) }; // 1811717343
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTakeRecorderMicrophoneAudioSource_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTakeRecorderMicrophoneAudioSource_Statics::NewProp_AudioGain,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTakeRecorderMicrophoneAudioSource_Statics::NewProp_bSplitAudioChannelsIntoSeparateTracks,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTakeRecorderMicrophoneAudioSource_Statics::NewProp_bReplaceRecordedAudio,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTakeRecorderMicrophoneAudioSource_Statics::NewProp_AudioChannel,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTakeRecorderMicrophoneAudioSource_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTakeRecorderMicrophoneAudioSource>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTakeRecorderMicrophoneAudioSource_Statics::ClassParams = {
		&UTakeRecorderMicrophoneAudioSource::StaticClass,
		"EditorSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UTakeRecorderMicrophoneAudioSource_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UTakeRecorderMicrophoneAudioSource_Statics::PropPointers),
		0,
		0x001000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTakeRecorderMicrophoneAudioSource_Statics::Class_MetaDataParams), Z_Construct_UClass_UTakeRecorderMicrophoneAudioSource_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTakeRecorderMicrophoneAudioSource_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UTakeRecorderMicrophoneAudioSource()
	{
		if (!Z_Registration_Info_UClass_UTakeRecorderMicrophoneAudioSource.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTakeRecorderMicrophoneAudioSource.OuterSingleton, Z_Construct_UClass_UTakeRecorderMicrophoneAudioSource_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTakeRecorderMicrophoneAudioSource.OuterSingleton;
	}
	template<> TAKERECORDERSOURCES_API UClass* StaticClass<UTakeRecorderMicrophoneAudioSource>()
	{
		return UTakeRecorderMicrophoneAudioSource::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTakeRecorderMicrophoneAudioSource);
	UTakeRecorderMicrophoneAudioSource::~UTakeRecorderMicrophoneAudioSource() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeRecorderSources_Private_TakeRecorderMicrophoneAudioSource_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeRecorderSources_Private_TakeRecorderMicrophoneAudioSource_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTakeRecorderMicrophoneAudioSourceSettings, UTakeRecorderMicrophoneAudioSourceSettings::StaticClass, TEXT("UTakeRecorderMicrophoneAudioSourceSettings"), &Z_Registration_Info_UClass_UTakeRecorderMicrophoneAudioSourceSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTakeRecorderMicrophoneAudioSourceSettings), 810491561U) },
		{ Z_Construct_UClass_UTakeRecorderMicrophoneAudioSource, UTakeRecorderMicrophoneAudioSource::StaticClass, TEXT("UTakeRecorderMicrophoneAudioSource"), &Z_Registration_Info_UClass_UTakeRecorderMicrophoneAudioSource, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTakeRecorderMicrophoneAudioSource), 1351328982U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeRecorderSources_Private_TakeRecorderMicrophoneAudioSource_h_786818959(TEXT("/Script/TakeRecorderSources"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeRecorderSources_Private_TakeRecorderMicrophoneAudioSource_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeRecorderSources_Private_TakeRecorderMicrophoneAudioSource_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
