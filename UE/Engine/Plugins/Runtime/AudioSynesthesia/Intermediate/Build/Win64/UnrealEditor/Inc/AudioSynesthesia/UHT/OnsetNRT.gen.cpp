// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnsetNRT.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOnsetNRT() {}
// Cross Module References
	AUDIOSYNESTHESIA_API UClass* Z_Construct_UClass_UAudioSynesthesiaNRT();
	AUDIOSYNESTHESIA_API UClass* Z_Construct_UClass_UAudioSynesthesiaNRTSettings();
	AUDIOSYNESTHESIA_API UClass* Z_Construct_UClass_UOnsetNRT();
	AUDIOSYNESTHESIA_API UClass* Z_Construct_UClass_UOnsetNRT_NoRegister();
	AUDIOSYNESTHESIA_API UClass* Z_Construct_UClass_UOnsetNRTSettings();
	AUDIOSYNESTHESIA_API UClass* Z_Construct_UClass_UOnsetNRTSettings_NoRegister();
	UPackage* Z_Construct_UPackage__Script_AudioSynesthesia();
// End Cross Module References
	void UOnsetNRTSettings::StaticRegisterNativesUOnsetNRTSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOnsetNRTSettings);
	UClass* Z_Construct_UClass_UOnsetNRTSettings_NoRegister()
	{
		return UOnsetNRTSettings::StaticClass();
	}
	struct Z_Construct_UClass_UOnsetNRTSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDownmixToMono_MetaData[];
#endif
		static void NewProp_bDownmixToMono_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDownmixToMono;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GranularityInSeconds_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_GranularityInSeconds;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Sensitivity_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Sensitivity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinimumFrequency_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinimumFrequency;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaximumFrequency_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaximumFrequency;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOnsetNRTSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAudioSynesthesiaNRTSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_AudioSynesthesia,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOnsetNRTSettings_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnsetNRTSettings_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** UOnsetNRTSettings\n *\n * Settings for a UOnsetNRT analyzer.\n */" },
		{ "IncludePath", "OnsetNRT.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/OnsetNRT.h" },
		{ "ToolTip", "UOnsetNRTSettings\n\nSettings for a UOnsetNRT analyzer." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnsetNRTSettings_Statics::NewProp_bDownmixToMono_MetaData[] = {
		{ "Category", "AudioAnalyzer" },
		{ "Comment", "/** If true, multichannel audio is downmixed to mono with equal amplitude scaling. If false, each channel gets it's own onset result. */" },
		{ "ModuleRelativePath", "Classes/OnsetNRT.h" },
		{ "ToolTip", "If true, multichannel audio is downmixed to mono with equal amplitude scaling. If false, each channel gets it's own onset result." },
	};
#endif
	void Z_Construct_UClass_UOnsetNRTSettings_Statics::NewProp_bDownmixToMono_SetBit(void* Obj)
	{
		((UOnsetNRTSettings*)Obj)->bDownmixToMono = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOnsetNRTSettings_Statics::NewProp_bDownmixToMono = { "bDownmixToMono", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOnsetNRTSettings), &Z_Construct_UClass_UOnsetNRTSettings_Statics::NewProp_bDownmixToMono_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOnsetNRTSettings_Statics::NewProp_bDownmixToMono_MetaData), Z_Construct_UClass_UOnsetNRTSettings_Statics::NewProp_bDownmixToMono_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnsetNRTSettings_Statics::NewProp_GranularityInSeconds_MetaData[] = {
		{ "Category", "AudioAnalyzer" },
		{ "ClampMax", "0.25" },
		{ "ClampMin", "0.005" },
		{ "Comment", "/** Onset timestamp granularity onsets. Lower granularity takes longer to compute. */" },
		{ "ModuleRelativePath", "Classes/OnsetNRT.h" },
		{ "ToolTip", "Onset timestamp granularity onsets. Lower granularity takes longer to compute." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UOnsetNRTSettings_Statics::NewProp_GranularityInSeconds = { "GranularityInSeconds", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOnsetNRTSettings, GranularityInSeconds), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOnsetNRTSettings_Statics::NewProp_GranularityInSeconds_MetaData), Z_Construct_UClass_UOnsetNRTSettings_Statics::NewProp_GranularityInSeconds_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnsetNRTSettings_Statics::NewProp_Sensitivity_MetaData[] = {
		{ "Category", "AudioAnalyzer" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Sensitivity of onset detector. Higher sensitivity will find more onsets. */" },
		{ "ModuleRelativePath", "Classes/OnsetNRT.h" },
		{ "ToolTip", "Sensitivity of onset detector. Higher sensitivity will find more onsets." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UOnsetNRTSettings_Statics::NewProp_Sensitivity = { "Sensitivity", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOnsetNRTSettings, Sensitivity), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOnsetNRTSettings_Statics::NewProp_Sensitivity_MetaData), Z_Construct_UClass_UOnsetNRTSettings_Statics::NewProp_Sensitivity_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnsetNRTSettings_Statics::NewProp_MinimumFrequency_MetaData[] = {
		{ "Category", "AudioAnalyzer" },
		{ "ClampMax", "20000" },
		{ "ClampMin", "20.0" },
		{ "Comment", "/** Starting frequency for onset anlaysis. */" },
		{ "ModuleRelativePath", "Classes/OnsetNRT.h" },
		{ "ToolTip", "Starting frequency for onset anlaysis." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UOnsetNRTSettings_Statics::NewProp_MinimumFrequency = { "MinimumFrequency", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOnsetNRTSettings, MinimumFrequency), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOnsetNRTSettings_Statics::NewProp_MinimumFrequency_MetaData), Z_Construct_UClass_UOnsetNRTSettings_Statics::NewProp_MinimumFrequency_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnsetNRTSettings_Statics::NewProp_MaximumFrequency_MetaData[] = {
		{ "Category", "AudioAnalyzer" },
		{ "ClampMax", "20000" },
		{ "ClampMin", "20.0" },
		{ "Comment", "/** Starting frequency for onset anlaysis. */" },
		{ "ModuleRelativePath", "Classes/OnsetNRT.h" },
		{ "ToolTip", "Starting frequency for onset anlaysis." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UOnsetNRTSettings_Statics::NewProp_MaximumFrequency = { "MaximumFrequency", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOnsetNRTSettings, MaximumFrequency), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOnsetNRTSettings_Statics::NewProp_MaximumFrequency_MetaData), Z_Construct_UClass_UOnsetNRTSettings_Statics::NewProp_MaximumFrequency_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOnsetNRTSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnsetNRTSettings_Statics::NewProp_bDownmixToMono,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnsetNRTSettings_Statics::NewProp_GranularityInSeconds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnsetNRTSettings_Statics::NewProp_Sensitivity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnsetNRTSettings_Statics::NewProp_MinimumFrequency,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnsetNRTSettings_Statics::NewProp_MaximumFrequency,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOnsetNRTSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOnsetNRTSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOnsetNRTSettings_Statics::ClassParams = {
		&UOnsetNRTSettings::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UOnsetNRTSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UOnsetNRTSettings_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOnsetNRTSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UOnsetNRTSettings_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOnsetNRTSettings_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UOnsetNRTSettings()
	{
		if (!Z_Registration_Info_UClass_UOnsetNRTSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOnsetNRTSettings.OuterSingleton, Z_Construct_UClass_UOnsetNRTSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOnsetNRTSettings.OuterSingleton;
	}
	template<> AUDIOSYNESTHESIA_API UClass* StaticClass<UOnsetNRTSettings>()
	{
		return UOnsetNRTSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOnsetNRTSettings);
	UOnsetNRTSettings::~UOnsetNRTSettings() {}
	DEFINE_FUNCTION(UOnsetNRT::execGetNormalizedChannelOnsetsBetweenTimes)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InStartSeconds);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InEndSeconds);
		P_GET_PROPERTY(FIntProperty,Z_Param_InChannel);
		P_GET_TARRAY_REF(float,Z_Param_Out_OutOnsetTimestamps);
		P_GET_TARRAY_REF(float,Z_Param_Out_OutOnsetStrengths);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetNormalizedChannelOnsetsBetweenTimes(Z_Param_InStartSeconds,Z_Param_InEndSeconds,Z_Param_InChannel,Z_Param_Out_OutOnsetTimestamps,Z_Param_Out_OutOnsetStrengths);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnsetNRT::execGetChannelOnsetsBetweenTimes)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InStartSeconds);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InEndSeconds);
		P_GET_PROPERTY(FIntProperty,Z_Param_InChannel);
		P_GET_TARRAY_REF(float,Z_Param_Out_OutOnsetTimestamps);
		P_GET_TARRAY_REF(float,Z_Param_Out_OutOnsetStrengths);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetChannelOnsetsBetweenTimes(Z_Param_InStartSeconds,Z_Param_InEndSeconds,Z_Param_InChannel,Z_Param_Out_OutOnsetTimestamps,Z_Param_Out_OutOnsetStrengths);
		P_NATIVE_END;
	}
	void UOnsetNRT::StaticRegisterNativesUOnsetNRT()
	{
		UClass* Class = UOnsetNRT::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetChannelOnsetsBetweenTimes", &UOnsetNRT::execGetChannelOnsetsBetweenTimes },
			{ "GetNormalizedChannelOnsetsBetweenTimes", &UOnsetNRT::execGetNormalizedChannelOnsetsBetweenTimes },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UOnsetNRT_GetChannelOnsetsBetweenTimes_Statics
	{
		struct OnsetNRT_eventGetChannelOnsetsBetweenTimes_Parms
		{
			float InStartSeconds;
			float InEndSeconds;
			int32 InChannel;
			TArray<float> OutOnsetTimestamps;
			TArray<float> OutOnsetStrengths;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InStartSeconds_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InStartSeconds;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InEndSeconds_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InEndSeconds;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InChannel_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_InChannel;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OutOnsetTimestamps_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutOnsetTimestamps;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OutOnsetStrengths_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutOnsetStrengths;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnsetNRT_GetChannelOnsetsBetweenTimes_Statics::NewProp_InStartSeconds_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOnsetNRT_GetChannelOnsetsBetweenTimes_Statics::NewProp_InStartSeconds = { "InStartSeconds", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OnsetNRT_eventGetChannelOnsetsBetweenTimes_Parms, InStartSeconds), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOnsetNRT_GetChannelOnsetsBetweenTimes_Statics::NewProp_InStartSeconds_MetaData), Z_Construct_UFunction_UOnsetNRT_GetChannelOnsetsBetweenTimes_Statics::NewProp_InStartSeconds_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnsetNRT_GetChannelOnsetsBetweenTimes_Statics::NewProp_InEndSeconds_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOnsetNRT_GetChannelOnsetsBetweenTimes_Statics::NewProp_InEndSeconds = { "InEndSeconds", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OnsetNRT_eventGetChannelOnsetsBetweenTimes_Parms, InEndSeconds), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOnsetNRT_GetChannelOnsetsBetweenTimes_Statics::NewProp_InEndSeconds_MetaData), Z_Construct_UFunction_UOnsetNRT_GetChannelOnsetsBetweenTimes_Statics::NewProp_InEndSeconds_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnsetNRT_GetChannelOnsetsBetweenTimes_Statics::NewProp_InChannel_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOnsetNRT_GetChannelOnsetsBetweenTimes_Statics::NewProp_InChannel = { "InChannel", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OnsetNRT_eventGetChannelOnsetsBetweenTimes_Parms, InChannel), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOnsetNRT_GetChannelOnsetsBetweenTimes_Statics::NewProp_InChannel_MetaData), Z_Construct_UFunction_UOnsetNRT_GetChannelOnsetsBetweenTimes_Statics::NewProp_InChannel_MetaData) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOnsetNRT_GetChannelOnsetsBetweenTimes_Statics::NewProp_OutOnsetTimestamps_Inner = { "OutOnsetTimestamps", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOnsetNRT_GetChannelOnsetsBetweenTimes_Statics::NewProp_OutOnsetTimestamps = { "OutOnsetTimestamps", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OnsetNRT_eventGetChannelOnsetsBetweenTimes_Parms, OutOnsetTimestamps), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOnsetNRT_GetChannelOnsetsBetweenTimes_Statics::NewProp_OutOnsetStrengths_Inner = { "OutOnsetStrengths", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOnsetNRT_GetChannelOnsetsBetweenTimes_Statics::NewProp_OutOnsetStrengths = { "OutOnsetStrengths", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OnsetNRT_eventGetChannelOnsetsBetweenTimes_Parms, OutOnsetStrengths), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnsetNRT_GetChannelOnsetsBetweenTimes_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnsetNRT_GetChannelOnsetsBetweenTimes_Statics::NewProp_InStartSeconds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnsetNRT_GetChannelOnsetsBetweenTimes_Statics::NewProp_InEndSeconds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnsetNRT_GetChannelOnsetsBetweenTimes_Statics::NewProp_InChannel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnsetNRT_GetChannelOnsetsBetweenTimes_Statics::NewProp_OutOnsetTimestamps_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnsetNRT_GetChannelOnsetsBetweenTimes_Statics::NewProp_OutOnsetTimestamps,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnsetNRT_GetChannelOnsetsBetweenTimes_Statics::NewProp_OutOnsetStrengths_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnsetNRT_GetChannelOnsetsBetweenTimes_Statics::NewProp_OutOnsetStrengths,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnsetNRT_GetChannelOnsetsBetweenTimes_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio Analyzer" },
		{ "Comment", "/** Returns onsets which occured between start and end timestamps. */" },
		{ "ModuleRelativePath", "Classes/OnsetNRT.h" },
		{ "ToolTip", "Returns onsets which occured between start and end timestamps." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnsetNRT_GetChannelOnsetsBetweenTimes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnsetNRT, nullptr, "GetChannelOnsetsBetweenTimes", nullptr, nullptr, Z_Construct_UFunction_UOnsetNRT_GetChannelOnsetsBetweenTimes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnsetNRT_GetChannelOnsetsBetweenTimes_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOnsetNRT_GetChannelOnsetsBetweenTimes_Statics::OnsetNRT_eventGetChannelOnsetsBetweenTimes_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOnsetNRT_GetChannelOnsetsBetweenTimes_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOnsetNRT_GetChannelOnsetsBetweenTimes_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOnsetNRT_GetChannelOnsetsBetweenTimes_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UOnsetNRT_GetChannelOnsetsBetweenTimes_Statics::OnsetNRT_eventGetChannelOnsetsBetweenTimes_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UOnsetNRT_GetChannelOnsetsBetweenTimes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnsetNRT_GetChannelOnsetsBetweenTimes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnsetNRT_GetNormalizedChannelOnsetsBetweenTimes_Statics
	{
		struct OnsetNRT_eventGetNormalizedChannelOnsetsBetweenTimes_Parms
		{
			float InStartSeconds;
			float InEndSeconds;
			int32 InChannel;
			TArray<float> OutOnsetTimestamps;
			TArray<float> OutOnsetStrengths;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InStartSeconds_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InStartSeconds;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InEndSeconds_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InEndSeconds;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InChannel_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_InChannel;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OutOnsetTimestamps_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutOnsetTimestamps;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OutOnsetStrengths_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutOnsetStrengths;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnsetNRT_GetNormalizedChannelOnsetsBetweenTimes_Statics::NewProp_InStartSeconds_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOnsetNRT_GetNormalizedChannelOnsetsBetweenTimes_Statics::NewProp_InStartSeconds = { "InStartSeconds", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OnsetNRT_eventGetNormalizedChannelOnsetsBetweenTimes_Parms, InStartSeconds), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOnsetNRT_GetNormalizedChannelOnsetsBetweenTimes_Statics::NewProp_InStartSeconds_MetaData), Z_Construct_UFunction_UOnsetNRT_GetNormalizedChannelOnsetsBetweenTimes_Statics::NewProp_InStartSeconds_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnsetNRT_GetNormalizedChannelOnsetsBetweenTimes_Statics::NewProp_InEndSeconds_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOnsetNRT_GetNormalizedChannelOnsetsBetweenTimes_Statics::NewProp_InEndSeconds = { "InEndSeconds", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OnsetNRT_eventGetNormalizedChannelOnsetsBetweenTimes_Parms, InEndSeconds), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOnsetNRT_GetNormalizedChannelOnsetsBetweenTimes_Statics::NewProp_InEndSeconds_MetaData), Z_Construct_UFunction_UOnsetNRT_GetNormalizedChannelOnsetsBetweenTimes_Statics::NewProp_InEndSeconds_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnsetNRT_GetNormalizedChannelOnsetsBetweenTimes_Statics::NewProp_InChannel_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOnsetNRT_GetNormalizedChannelOnsetsBetweenTimes_Statics::NewProp_InChannel = { "InChannel", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OnsetNRT_eventGetNormalizedChannelOnsetsBetweenTimes_Parms, InChannel), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOnsetNRT_GetNormalizedChannelOnsetsBetweenTimes_Statics::NewProp_InChannel_MetaData), Z_Construct_UFunction_UOnsetNRT_GetNormalizedChannelOnsetsBetweenTimes_Statics::NewProp_InChannel_MetaData) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOnsetNRT_GetNormalizedChannelOnsetsBetweenTimes_Statics::NewProp_OutOnsetTimestamps_Inner = { "OutOnsetTimestamps", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOnsetNRT_GetNormalizedChannelOnsetsBetweenTimes_Statics::NewProp_OutOnsetTimestamps = { "OutOnsetTimestamps", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OnsetNRT_eventGetNormalizedChannelOnsetsBetweenTimes_Parms, OutOnsetTimestamps), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOnsetNRT_GetNormalizedChannelOnsetsBetweenTimes_Statics::NewProp_OutOnsetStrengths_Inner = { "OutOnsetStrengths", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOnsetNRT_GetNormalizedChannelOnsetsBetweenTimes_Statics::NewProp_OutOnsetStrengths = { "OutOnsetStrengths", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OnsetNRT_eventGetNormalizedChannelOnsetsBetweenTimes_Parms, OutOnsetStrengths), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnsetNRT_GetNormalizedChannelOnsetsBetweenTimes_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnsetNRT_GetNormalizedChannelOnsetsBetweenTimes_Statics::NewProp_InStartSeconds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnsetNRT_GetNormalizedChannelOnsetsBetweenTimes_Statics::NewProp_InEndSeconds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnsetNRT_GetNormalizedChannelOnsetsBetweenTimes_Statics::NewProp_InChannel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnsetNRT_GetNormalizedChannelOnsetsBetweenTimes_Statics::NewProp_OutOnsetTimestamps_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnsetNRT_GetNormalizedChannelOnsetsBetweenTimes_Statics::NewProp_OutOnsetTimestamps,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnsetNRT_GetNormalizedChannelOnsetsBetweenTimes_Statics::NewProp_OutOnsetStrengths_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnsetNRT_GetNormalizedChannelOnsetsBetweenTimes_Statics::NewProp_OutOnsetStrengths,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnsetNRT_GetNormalizedChannelOnsetsBetweenTimes_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio Analyzer" },
		{ "Comment", "/** Get a specific channel cqt of the analyzed sound at a given time. */" },
		{ "ModuleRelativePath", "Classes/OnsetNRT.h" },
		{ "ToolTip", "Get a specific channel cqt of the analyzed sound at a given time." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnsetNRT_GetNormalizedChannelOnsetsBetweenTimes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnsetNRT, nullptr, "GetNormalizedChannelOnsetsBetweenTimes", nullptr, nullptr, Z_Construct_UFunction_UOnsetNRT_GetNormalizedChannelOnsetsBetweenTimes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnsetNRT_GetNormalizedChannelOnsetsBetweenTimes_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOnsetNRT_GetNormalizedChannelOnsetsBetweenTimes_Statics::OnsetNRT_eventGetNormalizedChannelOnsetsBetweenTimes_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOnsetNRT_GetNormalizedChannelOnsetsBetweenTimes_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOnsetNRT_GetNormalizedChannelOnsetsBetweenTimes_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOnsetNRT_GetNormalizedChannelOnsetsBetweenTimes_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UOnsetNRT_GetNormalizedChannelOnsetsBetweenTimes_Statics::OnsetNRT_eventGetNormalizedChannelOnsetsBetweenTimes_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UOnsetNRT_GetNormalizedChannelOnsetsBetweenTimes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnsetNRT_GetNormalizedChannelOnsetsBetweenTimes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOnsetNRT);
	UClass* Z_Construct_UClass_UOnsetNRT_NoRegister()
	{
		return UOnsetNRT::StaticClass();
	}
	struct Z_Construct_UClass_UOnsetNRT_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Settings_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Settings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOnsetNRT_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAudioSynesthesiaNRT,
		(UObject* (*)())Z_Construct_UPackage__Script_AudioSynesthesia,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOnsetNRT_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UOnsetNRT_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOnsetNRT_GetChannelOnsetsBetweenTimes, "GetChannelOnsetsBetweenTimes" }, // 1913818753
		{ &Z_Construct_UFunction_UOnsetNRT_GetNormalizedChannelOnsetsBetweenTimes, "GetNormalizedChannelOnsetsBetweenTimes" }, // 915356744
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOnsetNRT_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnsetNRT_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** UOnsetNRT\n *\n * UOnsetNRT calculates the temporal evolution of constant q transform for a given \n * sound. Onset is available for individual channels or the overall sound asset.\n */" },
		{ "IncludePath", "OnsetNRT.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/OnsetNRT.h" },
		{ "ToolTip", "UOnsetNRT\n\nUOnsetNRT calculates the temporal evolution of constant q transform for a given\nsound. Onset is available for individual channels or the overall sound asset." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnsetNRT_Statics::NewProp_Settings_MetaData[] = {
		{ "Category", "AudioAnalyzer" },
		{ "Comment", "/** The settings for the audio analyzer.  */" },
		{ "ModuleRelativePath", "Classes/OnsetNRT.h" },
		{ "ToolTip", "The settings for the audio analyzer." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UOnsetNRT_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOnsetNRT, Settings), Z_Construct_UClass_UOnsetNRTSettings_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOnsetNRT_Statics::NewProp_Settings_MetaData), Z_Construct_UClass_UOnsetNRT_Statics::NewProp_Settings_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOnsetNRT_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnsetNRT_Statics::NewProp_Settings,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOnsetNRT_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOnsetNRT>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOnsetNRT_Statics::ClassParams = {
		&UOnsetNRT::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UOnsetNRT_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UOnsetNRT_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOnsetNRT_Statics::Class_MetaDataParams), Z_Construct_UClass_UOnsetNRT_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOnsetNRT_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UOnsetNRT()
	{
		if (!Z_Registration_Info_UClass_UOnsetNRT.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOnsetNRT.OuterSingleton, Z_Construct_UClass_UOnsetNRT_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOnsetNRT.OuterSingleton;
	}
	template<> AUDIOSYNESTHESIA_API UClass* StaticClass<UOnsetNRT>()
	{
		return UOnsetNRT::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOnsetNRT);
	UOnsetNRT::~UOnsetNRT() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_OnsetNRT_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_OnsetNRT_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UOnsetNRTSettings, UOnsetNRTSettings::StaticClass, TEXT("UOnsetNRTSettings"), &Z_Registration_Info_UClass_UOnsetNRTSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOnsetNRTSettings), 1578115721U) },
		{ Z_Construct_UClass_UOnsetNRT, UOnsetNRT::StaticClass, TEXT("UOnsetNRT"), &Z_Registration_Info_UClass_UOnsetNRT, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOnsetNRT), 1209731171U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_OnsetNRT_h_2189893678(TEXT("/Script/AudioSynesthesia"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_OnsetNRT_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_OnsetNRT_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
