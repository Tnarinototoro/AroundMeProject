// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BuiltinProviders/VCamPixelStreamingSession.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVCamPixelStreamingSession() {}
// Cross Module References
	DECOUPLEDOUTPUTPROVIDER_API UClass* Z_Construct_UClass_UDecoupledOutputProvider();
	DECOUPLEDOUTPUTPROVIDER_API UClass* Z_Construct_UClass_UVCamPixelStreamingSession();
	DECOUPLEDOUTPUTPROVIDER_API UClass* Z_Construct_UClass_UVCamPixelStreamingSession_NoRegister();
	UPackage* Z_Construct_UPackage__Script_DecoupledOutputProvider();
// End Cross Module References
	void UVCamPixelStreamingSession::StaticRegisterNativesUVCamPixelStreamingSession()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVCamPixelStreamingSession);
	UClass* Z_Construct_UClass_UVCamPixelStreamingSession_NoRegister()
	{
		return UVCamPixelStreamingSession::StaticClass();
	}
	struct Z_Construct_UClass_UVCamPixelStreamingSession_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FromComposureOutputProviderIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_FromComposureOutputProviderIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bMatchRemoteResolution_MetaData[];
#endif
		static void NewProp_bMatchRemoteResolution_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bMatchRemoteResolution;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EnableARKitTracking_MetaData[];
#endif
		static void NewProp_EnableARKitTracking_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_EnableARKitTracking;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreventEditorIdle_MetaData[];
#endif
		static void NewProp_PreventEditorIdle_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_PreventEditorIdle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAutoSetLiveLinkSubject_MetaData[];
#endif
		static void NewProp_bAutoSetLiveLinkSubject_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoSetLiveLinkSubject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StreamerId_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_StreamerId;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVCamPixelStreamingSession_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDecoupledOutputProvider,
		(UObject* (*)())Z_Construct_UPackage__Script_DecoupledOutputProvider,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVCamPixelStreamingSession_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVCamPixelStreamingSession_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Pixel Streaming Provider" },
		{ "IncludePath", "BuiltinProviders/VCamPixelStreamingSession.h" },
		{ "ModuleRelativePath", "Public/BuiltinProviders/VCamPixelStreamingSession.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVCamPixelStreamingSession_Statics::NewProp_FromComposureOutputProviderIndex_MetaData[] = {
		{ "Category", "Output" },
		{ "Comment", "/** If using the output from a Composure Output Provider, specify it here */" },
		{ "DisplayPriority", "10" },
		{ "ModuleRelativePath", "Public/BuiltinProviders/VCamPixelStreamingSession.h" },
		{ "ToolTip", "If using the output from a Composure Output Provider, specify it here" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UVCamPixelStreamingSession_Statics::NewProp_FromComposureOutputProviderIndex = { "FromComposureOutputProviderIndex", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVCamPixelStreamingSession, FromComposureOutputProviderIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVCamPixelStreamingSession_Statics::NewProp_FromComposureOutputProviderIndex_MetaData), Z_Construct_UClass_UVCamPixelStreamingSession_Statics::NewProp_FromComposureOutputProviderIndex_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVCamPixelStreamingSession_Statics::NewProp_bMatchRemoteResolution_MetaData[] = {
		{ "Category", "Output" },
		{ "Comment", "/** If true the streamed UE viewport will match the resolution of the remote device. */" },
		{ "DisplayPriority", "11" },
		{ "ModuleRelativePath", "Public/BuiltinProviders/VCamPixelStreamingSession.h" },
		{ "ToolTip", "If true the streamed UE viewport will match the resolution of the remote device." },
	};
#endif
	void Z_Construct_UClass_UVCamPixelStreamingSession_Statics::NewProp_bMatchRemoteResolution_SetBit(void* Obj)
	{
		((UVCamPixelStreamingSession*)Obj)->bMatchRemoteResolution = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVCamPixelStreamingSession_Statics::NewProp_bMatchRemoteResolution = { "bMatchRemoteResolution", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UVCamPixelStreamingSession), &Z_Construct_UClass_UVCamPixelStreamingSession_Statics::NewProp_bMatchRemoteResolution_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVCamPixelStreamingSession_Statics::NewProp_bMatchRemoteResolution_MetaData), Z_Construct_UClass_UVCamPixelStreamingSession_Statics::NewProp_bMatchRemoteResolution_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVCamPixelStreamingSession_Statics::NewProp_EnableARKitTracking_MetaData[] = {
		{ "Category", "Output" },
		{ "Comment", "/** Check this if you wish to control the corresponding CineCamera with transform data received from the LiveLink app */" },
		{ "DisplayPriority", "12" },
		{ "ModuleRelativePath", "Public/BuiltinProviders/VCamPixelStreamingSession.h" },
		{ "ToolTip", "Check this if you wish to control the corresponding CineCamera with transform data received from the LiveLink app" },
	};
#endif
	void Z_Construct_UClass_UVCamPixelStreamingSession_Statics::NewProp_EnableARKitTracking_SetBit(void* Obj)
	{
		((UVCamPixelStreamingSession*)Obj)->EnableARKitTracking = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVCamPixelStreamingSession_Statics::NewProp_EnableARKitTracking = { "EnableARKitTracking", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UVCamPixelStreamingSession), &Z_Construct_UClass_UVCamPixelStreamingSession_Statics::NewProp_EnableARKitTracking_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVCamPixelStreamingSession_Statics::NewProp_EnableARKitTracking_MetaData), Z_Construct_UClass_UVCamPixelStreamingSession_Statics::NewProp_EnableARKitTracking_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVCamPixelStreamingSession_Statics::NewProp_PreventEditorIdle_MetaData[] = {
		{ "Category", "Output" },
		{ "Comment", "/** If not selected, when the editor is not the foreground application, input through the vcam session may seem sluggish or unresponsive. */" },
		{ "DisplayPriority", "13" },
		{ "ModuleRelativePath", "Public/BuiltinProviders/VCamPixelStreamingSession.h" },
		{ "ToolTip", "If not selected, when the editor is not the foreground application, input through the vcam session may seem sluggish or unresponsive." },
	};
#endif
	void Z_Construct_UClass_UVCamPixelStreamingSession_Statics::NewProp_PreventEditorIdle_SetBit(void* Obj)
	{
		((UVCamPixelStreamingSession*)Obj)->PreventEditorIdle = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVCamPixelStreamingSession_Statics::NewProp_PreventEditorIdle = { "PreventEditorIdle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UVCamPixelStreamingSession), &Z_Construct_UClass_UVCamPixelStreamingSession_Statics::NewProp_PreventEditorIdle_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVCamPixelStreamingSession_Statics::NewProp_PreventEditorIdle_MetaData), Z_Construct_UClass_UVCamPixelStreamingSession_Statics::NewProp_PreventEditorIdle_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVCamPixelStreamingSession_Statics::NewProp_bAutoSetLiveLinkSubject_MetaData[] = {
		{ "Category", "Output" },
		{ "Comment", "/** If true then the Live Link Subject of the owning VCam Component will be set to the subject created by this Output Provider when the Provider is enabled */" },
		{ "DisplayPriority", "14" },
		{ "ModuleRelativePath", "Public/BuiltinProviders/VCamPixelStreamingSession.h" },
		{ "ToolTip", "If true then the Live Link Subject of the owning VCam Component will be set to the subject created by this Output Provider when the Provider is enabled" },
	};
#endif
	void Z_Construct_UClass_UVCamPixelStreamingSession_Statics::NewProp_bAutoSetLiveLinkSubject_SetBit(void* Obj)
	{
		((UVCamPixelStreamingSession*)Obj)->bAutoSetLiveLinkSubject = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVCamPixelStreamingSession_Statics::NewProp_bAutoSetLiveLinkSubject = { "bAutoSetLiveLinkSubject", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UVCamPixelStreamingSession), &Z_Construct_UClass_UVCamPixelStreamingSession_Statics::NewProp_bAutoSetLiveLinkSubject_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVCamPixelStreamingSession_Statics::NewProp_bAutoSetLiveLinkSubject_MetaData), Z_Construct_UClass_UVCamPixelStreamingSession_Statics::NewProp_bAutoSetLiveLinkSubject_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVCamPixelStreamingSession_Statics::NewProp_StreamerId_MetaData[] = {
		{ "Category", "Output" },
		{ "Comment", "/** Set the name of this stream to be reported to the signalling server. If none is supplied a default will be used. If ids are not unique issues can occur. */" },
		{ "DisplayPriority", "15" },
		{ "ModuleRelativePath", "Public/BuiltinProviders/VCamPixelStreamingSession.h" },
		{ "ToolTip", "Set the name of this stream to be reported to the signalling server. If none is supplied a default will be used. If ids are not unique issues can occur." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UVCamPixelStreamingSession_Statics::NewProp_StreamerId = { "StreamerId", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVCamPixelStreamingSession, StreamerId), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVCamPixelStreamingSession_Statics::NewProp_StreamerId_MetaData), Z_Construct_UClass_UVCamPixelStreamingSession_Statics::NewProp_StreamerId_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVCamPixelStreamingSession_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVCamPixelStreamingSession_Statics::NewProp_FromComposureOutputProviderIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVCamPixelStreamingSession_Statics::NewProp_bMatchRemoteResolution,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVCamPixelStreamingSession_Statics::NewProp_EnableARKitTracking,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVCamPixelStreamingSession_Statics::NewProp_PreventEditorIdle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVCamPixelStreamingSession_Statics::NewProp_bAutoSetLiveLinkSubject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVCamPixelStreamingSession_Statics::NewProp_StreamerId,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVCamPixelStreamingSession_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVCamPixelStreamingSession>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVCamPixelStreamingSession_Statics::ClassParams = {
		&UVCamPixelStreamingSession::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVCamPixelStreamingSession_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UVCamPixelStreamingSession_Statics::PropPointers),
		0,
		0x009010A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVCamPixelStreamingSession_Statics::Class_MetaDataParams), Z_Construct_UClass_UVCamPixelStreamingSession_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVCamPixelStreamingSession_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UVCamPixelStreamingSession()
	{
		if (!Z_Registration_Info_UClass_UVCamPixelStreamingSession.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVCamPixelStreamingSession.OuterSingleton, Z_Construct_UClass_UVCamPixelStreamingSession_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVCamPixelStreamingSession.OuterSingleton;
	}
	template<> DECOUPLEDOUTPUTPROVIDER_API UClass* StaticClass<UVCamPixelStreamingSession>()
	{
		return UVCamPixelStreamingSession::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVCamPixelStreamingSession);
	UVCamPixelStreamingSession::~UVCamPixelStreamingSession() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_DecoupledOutputProvider_Public_BuiltinProviders_VCamPixelStreamingSession_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_DecoupledOutputProvider_Public_BuiltinProviders_VCamPixelStreamingSession_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVCamPixelStreamingSession, UVCamPixelStreamingSession::StaticClass, TEXT("UVCamPixelStreamingSession"), &Z_Registration_Info_UClass_UVCamPixelStreamingSession, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVCamPixelStreamingSession), 1076761565U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_DecoupledOutputProvider_Public_BuiltinProviders_VCamPixelStreamingSession_h_1295427157(TEXT("/Script/DecoupledOutputProvider"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_DecoupledOutputProvider_Public_BuiltinProviders_VCamPixelStreamingSession_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_DecoupledOutputProvider_Public_BuiltinProviders_VCamPixelStreamingSession_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
