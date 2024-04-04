// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/TakeRecorderMicrophoneAudioManager.h"
#include "TakeRecorderSourceProperty.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTakeRecorderMicrophoneAudioManager() {}
// Cross Module References
	TAKERECORDERSOURCES_API UClass* Z_Construct_UClass_UTakeRecorderMicrophoneAudioManager();
	TAKERECORDERSOURCES_API UClass* Z_Construct_UClass_UTakeRecorderMicrophoneAudioManager_NoRegister();
	TAKESCORE_API UClass* Z_Construct_UClass_UTakeRecorderAudioInputSettings();
	TAKESCORE_API UScriptStruct* Z_Construct_UScriptStruct_FAudioInputDeviceProperty();
	UPackage* Z_Construct_UPackage__Script_TakeRecorderSources();
// End Cross Module References
	void UTakeRecorderMicrophoneAudioManager::StaticRegisterNativesUTakeRecorderMicrophoneAudioManager()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTakeRecorderMicrophoneAudioManager);
	UClass* Z_Construct_UClass_UTakeRecorderMicrophoneAudioManager_NoRegister()
	{
		return UTakeRecorderMicrophoneAudioManager::StaticClass();
	}
	struct Z_Construct_UClass_UTakeRecorderMicrophoneAudioManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AudioInputDevice_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AudioInputDevice;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTakeRecorderMicrophoneAudioManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTakeRecorderAudioInputSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_TakeRecorderSources,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTakeRecorderMicrophoneAudioManager_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTakeRecorderMicrophoneAudioManager_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** This class exposes the audio input device list via the project settings details. It does this in \n*   conjunction with FAudioInputDevicePropertyCustomization. It also manages the IAudioCaptureEditor \n*   object which handles the low level audio device recording.\n*/" },
		{ "DisplayName", "Audio Input Device" },
		{ "IncludePath", "TakeRecorderMicrophoneAudioManager.h" },
		{ "ModuleRelativePath", "Private/TakeRecorderMicrophoneAudioManager.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "This class exposes the audio input device list via the project settings details. It does this in\n conjunction with FAudioInputDevicePropertyCustomization. It also manages the IAudioCaptureEditor\n object which handles the low level audio device recording." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTakeRecorderMicrophoneAudioManager_Statics::NewProp_AudioInputDevice_MetaData[] = {
		{ "Category", "Source" },
		{ "Comment", "/** The audio device to use for this microphone source */" },
		{ "ModuleRelativePath", "Private/TakeRecorderMicrophoneAudioManager.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "The audio device to use for this microphone source" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTakeRecorderMicrophoneAudioManager_Statics::NewProp_AudioInputDevice = { "AudioInputDevice", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTakeRecorderMicrophoneAudioManager, AudioInputDevice), Z_Construct_UScriptStruct_FAudioInputDeviceProperty, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTakeRecorderMicrophoneAudioManager_Statics::NewProp_AudioInputDevice_MetaData), Z_Construct_UClass_UTakeRecorderMicrophoneAudioManager_Statics::NewProp_AudioInputDevice_MetaData) }; // 952255520
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTakeRecorderMicrophoneAudioManager_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTakeRecorderMicrophoneAudioManager_Statics::NewProp_AudioInputDevice,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTakeRecorderMicrophoneAudioManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTakeRecorderMicrophoneAudioManager>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTakeRecorderMicrophoneAudioManager_Statics::ClassParams = {
		&UTakeRecorderMicrophoneAudioManager::StaticClass,
		"EditorPerProjectUserSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UTakeRecorderMicrophoneAudioManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UTakeRecorderMicrophoneAudioManager_Statics::PropPointers),
		0,
		0x001004A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTakeRecorderMicrophoneAudioManager_Statics::Class_MetaDataParams), Z_Construct_UClass_UTakeRecorderMicrophoneAudioManager_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTakeRecorderMicrophoneAudioManager_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UTakeRecorderMicrophoneAudioManager()
	{
		if (!Z_Registration_Info_UClass_UTakeRecorderMicrophoneAudioManager.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTakeRecorderMicrophoneAudioManager.OuterSingleton, Z_Construct_UClass_UTakeRecorderMicrophoneAudioManager_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTakeRecorderMicrophoneAudioManager.OuterSingleton;
	}
	template<> TAKERECORDERSOURCES_API UClass* StaticClass<UTakeRecorderMicrophoneAudioManager>()
	{
		return UTakeRecorderMicrophoneAudioManager::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTakeRecorderMicrophoneAudioManager);
	UTakeRecorderMicrophoneAudioManager::~UTakeRecorderMicrophoneAudioManager() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeRecorderSources_Private_TakeRecorderMicrophoneAudioManager_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeRecorderSources_Private_TakeRecorderMicrophoneAudioManager_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTakeRecorderMicrophoneAudioManager, UTakeRecorderMicrophoneAudioManager::StaticClass, TEXT("UTakeRecorderMicrophoneAudioManager"), &Z_Registration_Info_UClass_UTakeRecorderMicrophoneAudioManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTakeRecorderMicrophoneAudioManager), 1664928032U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeRecorderSources_Private_TakeRecorderMicrophoneAudioManager_h_433442415(TEXT("/Script/TakeRecorderSources"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeRecorderSources_Private_TakeRecorderMicrophoneAudioManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeRecorderSources_Private_TakeRecorderMicrophoneAudioManager_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
