// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SourceEffects/SourceEffectWaveShaper.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSourceEffectWaveShaper() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_USoundEffectSourcePreset();
	SYNTHESIS_API UClass* Z_Construct_UClass_USourceEffectWaveShaperPreset();
	SYNTHESIS_API UClass* Z_Construct_UClass_USourceEffectWaveShaperPreset_NoRegister();
	SYNTHESIS_API UScriptStruct* Z_Construct_UScriptStruct_FSourceEffectWaveShaperSettings();
	UPackage* Z_Construct_UPackage__Script_Synthesis();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SourceEffectWaveShaperSettings;
class UScriptStruct* FSourceEffectWaveShaperSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SourceEffectWaveShaperSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SourceEffectWaveShaperSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSourceEffectWaveShaperSettings, (UObject*)Z_Construct_UPackage__Script_Synthesis(), TEXT("SourceEffectWaveShaperSettings"));
	}
	return Z_Registration_Info_UScriptStruct_SourceEffectWaveShaperSettings.OuterSingleton;
}
template<> SYNTHESIS_API UScriptStruct* StaticStruct<FSourceEffectWaveShaperSettings>()
{
	return FSourceEffectWaveShaperSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSourceEffectWaveShaperSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Amount_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Amount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OutputGainDb_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OutputGainDb;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSourceEffectWaveShaperSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectWaveShaper.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSourceEffectWaveShaperSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSourceEffectWaveShaperSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSourceEffectWaveShaperSettings_Statics::NewProp_Amount_MetaData[] = {
		{ "Category", "SourceEffect|Preset" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// The amount of wave shaping. 0.0 = no wave shaping.\n" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectWaveShaper.h" },
		{ "ToolTip", "The amount of wave shaping. 0.0 = no wave shaping." },
		{ "UIMax", "500.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSourceEffectWaveShaperSettings_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSourceEffectWaveShaperSettings, Amount), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSourceEffectWaveShaperSettings_Statics::NewProp_Amount_MetaData), Z_Construct_UScriptStruct_FSourceEffectWaveShaperSettings_Statics::NewProp_Amount_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSourceEffectWaveShaperSettings_Statics::NewProp_OutputGainDb_MetaData[] = {
		{ "Category", "SourceEffect|Preset" },
		{ "ClampMax", "20.0" },
		{ "ClampMin", "-60.0" },
		{ "Comment", "// The amount of wave shaping. 0.0 = no wave shaping.\n" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectWaveShaper.h" },
		{ "ToolTip", "The amount of wave shaping. 0.0 = no wave shaping." },
		{ "UIMax", "20.0" },
		{ "UIMin", "-60.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSourceEffectWaveShaperSettings_Statics::NewProp_OutputGainDb = { "OutputGainDb", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSourceEffectWaveShaperSettings, OutputGainDb), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSourceEffectWaveShaperSettings_Statics::NewProp_OutputGainDb_MetaData), Z_Construct_UScriptStruct_FSourceEffectWaveShaperSettings_Statics::NewProp_OutputGainDb_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSourceEffectWaveShaperSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceEffectWaveShaperSettings_Statics::NewProp_Amount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceEffectWaveShaperSettings_Statics::NewProp_OutputGainDb,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSourceEffectWaveShaperSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Synthesis,
		nullptr,
		&NewStructOps,
		"SourceEffectWaveShaperSettings",
		Z_Construct_UScriptStruct_FSourceEffectWaveShaperSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSourceEffectWaveShaperSettings_Statics::PropPointers),
		sizeof(FSourceEffectWaveShaperSettings),
		alignof(FSourceEffectWaveShaperSettings),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSourceEffectWaveShaperSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSourceEffectWaveShaperSettings_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSourceEffectWaveShaperSettings_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FSourceEffectWaveShaperSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_SourceEffectWaveShaperSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SourceEffectWaveShaperSettings.InnerSingleton, Z_Construct_UScriptStruct_FSourceEffectWaveShaperSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SourceEffectWaveShaperSettings.InnerSingleton;
	}
	DEFINE_FUNCTION(USourceEffectWaveShaperPreset::execSetSettings)
	{
		P_GET_STRUCT_REF(FSourceEffectWaveShaperSettings,Z_Param_Out_InSettings);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSettings(Z_Param_Out_InSettings);
		P_NATIVE_END;
	}
	void USourceEffectWaveShaperPreset::StaticRegisterNativesUSourceEffectWaveShaperPreset()
	{
		UClass* Class = USourceEffectWaveShaperPreset::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetSettings", &USourceEffectWaveShaperPreset::execSetSettings },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USourceEffectWaveShaperPreset_SetSettings_Statics
	{
		struct SourceEffectWaveShaperPreset_eventSetSettings_Parms
		{
			FSourceEffectWaveShaperSettings InSettings;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InSettings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USourceEffectWaveShaperPreset_SetSettings_Statics::NewProp_InSettings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USourceEffectWaveShaperPreset_SetSettings_Statics::NewProp_InSettings = { "InSettings", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SourceEffectWaveShaperPreset_eventSetSettings_Parms, InSettings), Z_Construct_UScriptStruct_FSourceEffectWaveShaperSettings, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USourceEffectWaveShaperPreset_SetSettings_Statics::NewProp_InSettings_MetaData), Z_Construct_UFunction_USourceEffectWaveShaperPreset_SetSettings_Statics::NewProp_InSettings_MetaData) }; // 896934763
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USourceEffectWaveShaperPreset_SetSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USourceEffectWaveShaperPreset_SetSettings_Statics::NewProp_InSettings,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USourceEffectWaveShaperPreset_SetSettings_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|Effects" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectWaveShaper.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USourceEffectWaveShaperPreset_SetSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USourceEffectWaveShaperPreset, nullptr, "SetSettings", nullptr, nullptr, Z_Construct_UFunction_USourceEffectWaveShaperPreset_SetSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USourceEffectWaveShaperPreset_SetSettings_Statics::PropPointers), sizeof(Z_Construct_UFunction_USourceEffectWaveShaperPreset_SetSettings_Statics::SourceEffectWaveShaperPreset_eventSetSettings_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USourceEffectWaveShaperPreset_SetSettings_Statics::Function_MetaDataParams), Z_Construct_UFunction_USourceEffectWaveShaperPreset_SetSettings_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USourceEffectWaveShaperPreset_SetSettings_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USourceEffectWaveShaperPreset_SetSettings_Statics::SourceEffectWaveShaperPreset_eventSetSettings_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USourceEffectWaveShaperPreset_SetSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USourceEffectWaveShaperPreset_SetSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USourceEffectWaveShaperPreset);
	UClass* Z_Construct_UClass_USourceEffectWaveShaperPreset_NoRegister()
	{
		return USourceEffectWaveShaperPreset::StaticClass();
	}
	struct Z_Construct_UClass_USourceEffectWaveShaperPreset_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Settings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Settings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USourceEffectWaveShaperPreset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USoundEffectSourcePreset,
		(UObject* (*)())Z_Construct_UPackage__Script_Synthesis,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USourceEffectWaveShaperPreset_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_USourceEffectWaveShaperPreset_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USourceEffectWaveShaperPreset_SetSettings, "SetSettings" }, // 4205048102
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USourceEffectWaveShaperPreset_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USourceEffectWaveShaperPreset_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "AudioSourceEffect" },
		{ "IncludePath", "SourceEffects/SourceEffectWaveShaper.h" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectWaveShaper.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USourceEffectWaveShaperPreset_Statics::NewProp_Settings_MetaData[] = {
		{ "Category", "Audio|Effects" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectWaveShaper.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USourceEffectWaveShaperPreset_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USourceEffectWaveShaperPreset, Settings), Z_Construct_UScriptStruct_FSourceEffectWaveShaperSettings, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USourceEffectWaveShaperPreset_Statics::NewProp_Settings_MetaData), Z_Construct_UClass_USourceEffectWaveShaperPreset_Statics::NewProp_Settings_MetaData) }; // 896934763
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USourceEffectWaveShaperPreset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USourceEffectWaveShaperPreset_Statics::NewProp_Settings,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USourceEffectWaveShaperPreset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USourceEffectWaveShaperPreset>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USourceEffectWaveShaperPreset_Statics::ClassParams = {
		&USourceEffectWaveShaperPreset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USourceEffectWaveShaperPreset_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USourceEffectWaveShaperPreset_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USourceEffectWaveShaperPreset_Statics::Class_MetaDataParams), Z_Construct_UClass_USourceEffectWaveShaperPreset_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USourceEffectWaveShaperPreset_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_USourceEffectWaveShaperPreset()
	{
		if (!Z_Registration_Info_UClass_USourceEffectWaveShaperPreset.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USourceEffectWaveShaperPreset.OuterSingleton, Z_Construct_UClass_USourceEffectWaveShaperPreset_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USourceEffectWaveShaperPreset.OuterSingleton;
	}
	template<> SYNTHESIS_API UClass* StaticClass<USourceEffectWaveShaperPreset>()
	{
		return USourceEffectWaveShaperPreset::StaticClass();
	}
	USourceEffectWaveShaperPreset::USourceEffectWaveShaperPreset(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USourceEffectWaveShaperPreset);
	USourceEffectWaveShaperPreset::~USourceEffectWaveShaperPreset() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectWaveShaper_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectWaveShaper_h_Statics::ScriptStructInfo[] = {
		{ FSourceEffectWaveShaperSettings::StaticStruct, Z_Construct_UScriptStruct_FSourceEffectWaveShaperSettings_Statics::NewStructOps, TEXT("SourceEffectWaveShaperSettings"), &Z_Registration_Info_UScriptStruct_SourceEffectWaveShaperSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSourceEffectWaveShaperSettings), 896934763U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectWaveShaper_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USourceEffectWaveShaperPreset, USourceEffectWaveShaperPreset::StaticClass, TEXT("USourceEffectWaveShaperPreset"), &Z_Registration_Info_UClass_USourceEffectWaveShaperPreset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USourceEffectWaveShaperPreset), 2244677007U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectWaveShaper_h_3673018444(TEXT("/Script/Synthesis"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectWaveShaper_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectWaveShaper_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectWaveShaper_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectWaveShaper_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
