// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Generators/SoundModulationADEnvelope.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSoundModulationADEnvelope() {}
// Cross Module References
	AUDIOMODULATION_API UClass* Z_Construct_UClass_USoundModulationGenerator();
	AUDIOMODULATION_API UClass* Z_Construct_UClass_USoundModulationGeneratorADEnvelope();
	AUDIOMODULATION_API UClass* Z_Construct_UClass_USoundModulationGeneratorADEnvelope_NoRegister();
	AUDIOMODULATION_API UScriptStruct* Z_Construct_UScriptStruct_FSoundModulationADEnvelopeParams();
	UPackage* Z_Construct_UPackage__Script_AudioModulation();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SoundModulationADEnvelopeParams;
class UScriptStruct* FSoundModulationADEnvelopeParams::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SoundModulationADEnvelopeParams.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SoundModulationADEnvelopeParams.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSoundModulationADEnvelopeParams, (UObject*)Z_Construct_UPackage__Script_AudioModulation(), TEXT("SoundModulationADEnvelopeParams"));
	}
	return Z_Registration_Info_UScriptStruct_SoundModulationADEnvelopeParams.OuterSingleton;
}
template<> AUDIOMODULATION_API UScriptStruct* StaticStruct<FSoundModulationADEnvelopeParams>()
{
	return FSoundModulationADEnvelopeParams::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSoundModulationADEnvelopeParams_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttackTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AttackTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DecayTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DecayTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttackCurve_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AttackCurve;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DecayCurve_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DecayCurve;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bLooping_MetaData[];
#endif
		static void NewProp_bLooping_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLooping;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bBypass_MetaData[];
#endif
		static void NewProp_bBypass_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bBypass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundModulationADEnvelopeParams_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Generators/SoundModulationADEnvelope.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSoundModulationADEnvelopeParams_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSoundModulationADEnvelopeParams>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundModulationADEnvelopeParams_Statics::NewProp_AttackTime_MetaData[] = {
		{ "Category", "Modulation" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Attack time of the envelope (seconds). */" },
		{ "DisplayPriority", "20" },
		{ "EditCondition", "!bBypass" },
		{ "ModuleRelativePath", "Public/Generators/SoundModulationADEnvelope.h" },
		{ "ToolTip", "Attack time of the envelope (seconds)." },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSoundModulationADEnvelopeParams_Statics::NewProp_AttackTime = { "AttackTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSoundModulationADEnvelopeParams, AttackTime), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundModulationADEnvelopeParams_Statics::NewProp_AttackTime_MetaData), Z_Construct_UScriptStruct_FSoundModulationADEnvelopeParams_Statics::NewProp_AttackTime_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundModulationADEnvelopeParams_Statics::NewProp_DecayTime_MetaData[] = {
		{ "Category", "Modulation" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Decay time of the envelope (seconds). */" },
		{ "DisplayPriority", "30" },
		{ "EditCondition", "!bBypass" },
		{ "ModuleRelativePath", "Public/Generators/SoundModulationADEnvelope.h" },
		{ "ToolTip", "Decay time of the envelope (seconds)." },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSoundModulationADEnvelopeParams_Statics::NewProp_DecayTime = { "DecayTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSoundModulationADEnvelopeParams, DecayTime), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundModulationADEnvelopeParams_Statics::NewProp_DecayTime_MetaData), Z_Construct_UScriptStruct_FSoundModulationADEnvelopeParams_Statics::NewProp_DecayTime_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundModulationADEnvelopeParams_Statics::NewProp_AttackCurve_MetaData[] = {
		{ "Category", "Modulation" },
		{ "ClampMin", "0" },
		{ "Comment", "/** The exponential curve factor of the attack. 1.0 = linear growth, < 1.0 logorithmic growth, > 1.0 exponential growth. */" },
		{ "DisplayPriority", "40" },
		{ "EditCondition", "!bBypass" },
		{ "ModuleRelativePath", "Public/Generators/SoundModulationADEnvelope.h" },
		{ "ToolTip", "The exponential curve factor of the attack. 1.0 = linear growth, < 1.0 logorithmic growth, > 1.0 exponential growth." },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSoundModulationADEnvelopeParams_Statics::NewProp_AttackCurve = { "AttackCurve", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSoundModulationADEnvelopeParams, AttackCurve), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundModulationADEnvelopeParams_Statics::NewProp_AttackCurve_MetaData), Z_Construct_UScriptStruct_FSoundModulationADEnvelopeParams_Statics::NewProp_AttackCurve_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundModulationADEnvelopeParams_Statics::NewProp_DecayCurve_MetaData[] = {
		{ "Category", "Modulation" },
		{ "ClampMin", "0" },
		{ "Comment", "/** The exponential curve factor of the decay. 1.0 = linear decay, < 1.0 exponential decay, > 1.0 logarithmic decay. */" },
		{ "DisplayPriority", "50" },
		{ "EditCondition", "!bBypass" },
		{ "ModuleRelativePath", "Public/Generators/SoundModulationADEnvelope.h" },
		{ "ToolTip", "The exponential curve factor of the decay. 1.0 = linear decay, < 1.0 exponential decay, > 1.0 logarithmic decay." },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSoundModulationADEnvelopeParams_Statics::NewProp_DecayCurve = { "DecayCurve", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSoundModulationADEnvelopeParams, DecayCurve), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundModulationADEnvelopeParams_Statics::NewProp_DecayCurve_MetaData), Z_Construct_UScriptStruct_FSoundModulationADEnvelopeParams_Statics::NewProp_DecayCurve_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundModulationADEnvelopeParams_Statics::NewProp_bLooping_MetaData[] = {
		{ "Category", "Modulation" },
		{ "Comment", "/** Whether or not to loop the envelope. */" },
		{ "DisplayPriority", "60" },
		{ "EditCondition", "!bBypass" },
		{ "ModuleRelativePath", "Public/Generators/SoundModulationADEnvelope.h" },
		{ "ToolTip", "Whether or not to loop the envelope." },
	};
#endif
	void Z_Construct_UScriptStruct_FSoundModulationADEnvelopeParams_Statics::NewProp_bLooping_SetBit(void* Obj)
	{
		((FSoundModulationADEnvelopeParams*)Obj)->bLooping = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSoundModulationADEnvelopeParams_Statics::NewProp_bLooping = { "bLooping", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSoundModulationADEnvelopeParams), &Z_Construct_UScriptStruct_FSoundModulationADEnvelopeParams_Statics::NewProp_bLooping_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundModulationADEnvelopeParams_Statics::NewProp_bLooping_MetaData), Z_Construct_UScriptStruct_FSoundModulationADEnvelopeParams_Statics::NewProp_bLooping_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundModulationADEnvelopeParams_Statics::NewProp_bBypass_MetaData[] = {
		{ "Category", "Modulation" },
		{ "Comment", "/** If true, bypasses envelope bus from being modulated by parameters, patches, or mixed (Envelope remains active and computed). */" },
		{ "DisplayPriority", "10" },
		{ "ModuleRelativePath", "Public/Generators/SoundModulationADEnvelope.h" },
		{ "ToolTip", "If true, bypasses envelope bus from being modulated by parameters, patches, or mixed (Envelope remains active and computed)." },
	};
#endif
	void Z_Construct_UScriptStruct_FSoundModulationADEnvelopeParams_Statics::NewProp_bBypass_SetBit(void* Obj)
	{
		((FSoundModulationADEnvelopeParams*)Obj)->bBypass = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSoundModulationADEnvelopeParams_Statics::NewProp_bBypass = { "bBypass", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSoundModulationADEnvelopeParams), &Z_Construct_UScriptStruct_FSoundModulationADEnvelopeParams_Statics::NewProp_bBypass_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundModulationADEnvelopeParams_Statics::NewProp_bBypass_MetaData), Z_Construct_UScriptStruct_FSoundModulationADEnvelopeParams_Statics::NewProp_bBypass_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSoundModulationADEnvelopeParams_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundModulationADEnvelopeParams_Statics::NewProp_AttackTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundModulationADEnvelopeParams_Statics::NewProp_DecayTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundModulationADEnvelopeParams_Statics::NewProp_AttackCurve,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundModulationADEnvelopeParams_Statics::NewProp_DecayCurve,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundModulationADEnvelopeParams_Statics::NewProp_bLooping,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundModulationADEnvelopeParams_Statics::NewProp_bBypass,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSoundModulationADEnvelopeParams_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AudioModulation,
		nullptr,
		&NewStructOps,
		"SoundModulationADEnvelopeParams",
		Z_Construct_UScriptStruct_FSoundModulationADEnvelopeParams_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundModulationADEnvelopeParams_Statics::PropPointers),
		sizeof(FSoundModulationADEnvelopeParams),
		alignof(FSoundModulationADEnvelopeParams),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundModulationADEnvelopeParams_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSoundModulationADEnvelopeParams_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundModulationADEnvelopeParams_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FSoundModulationADEnvelopeParams()
	{
		if (!Z_Registration_Info_UScriptStruct_SoundModulationADEnvelopeParams.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SoundModulationADEnvelopeParams.InnerSingleton, Z_Construct_UScriptStruct_FSoundModulationADEnvelopeParams_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SoundModulationADEnvelopeParams.InnerSingleton;
	}
	void USoundModulationGeneratorADEnvelope::StaticRegisterNativesUSoundModulationGeneratorADEnvelope()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USoundModulationGeneratorADEnvelope);
	UClass* Z_Construct_UClass_USoundModulationGeneratorADEnvelope_NoRegister()
	{
		return USoundModulationGeneratorADEnvelope::StaticClass();
	}
	struct Z_Construct_UClass_USoundModulationGeneratorADEnvelope_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Params_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Params;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USoundModulationGeneratorADEnvelope_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USoundModulationGenerator,
		(UObject* (*)())Z_Construct_UPackage__Script_AudioModulation,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USoundModulationGeneratorADEnvelope_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundModulationGeneratorADEnvelope_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Generators/SoundModulationADEnvelope.h" },
		{ "ModuleRelativePath", "Public/Generators/SoundModulationADEnvelope.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundModulationGeneratorADEnvelope_Statics::NewProp_Params_MetaData[] = {
		{ "Category", "Modulation" },
		{ "ModuleRelativePath", "Public/Generators/SoundModulationADEnvelope.h" },
		{ "ShowOnlyInnerProperties", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USoundModulationGeneratorADEnvelope_Statics::NewProp_Params = { "Params", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USoundModulationGeneratorADEnvelope, Params), Z_Construct_UScriptStruct_FSoundModulationADEnvelopeParams, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USoundModulationGeneratorADEnvelope_Statics::NewProp_Params_MetaData), Z_Construct_UClass_USoundModulationGeneratorADEnvelope_Statics::NewProp_Params_MetaData) }; // 372913912
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USoundModulationGeneratorADEnvelope_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundModulationGeneratorADEnvelope_Statics::NewProp_Params,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USoundModulationGeneratorADEnvelope_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USoundModulationGeneratorADEnvelope>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USoundModulationGeneratorADEnvelope_Statics::ClassParams = {
		&USoundModulationGeneratorADEnvelope::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USoundModulationGeneratorADEnvelope_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USoundModulationGeneratorADEnvelope_Statics::PropPointers),
		0,
		0x000810A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USoundModulationGeneratorADEnvelope_Statics::Class_MetaDataParams), Z_Construct_UClass_USoundModulationGeneratorADEnvelope_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USoundModulationGeneratorADEnvelope_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_USoundModulationGeneratorADEnvelope()
	{
		if (!Z_Registration_Info_UClass_USoundModulationGeneratorADEnvelope.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USoundModulationGeneratorADEnvelope.OuterSingleton, Z_Construct_UClass_USoundModulationGeneratorADEnvelope_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USoundModulationGeneratorADEnvelope.OuterSingleton;
	}
	template<> AUDIOMODULATION_API UClass* StaticClass<USoundModulationGeneratorADEnvelope>()
	{
		return USoundModulationGeneratorADEnvelope::StaticClass();
	}
	USoundModulationGeneratorADEnvelope::USoundModulationGeneratorADEnvelope(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USoundModulationGeneratorADEnvelope);
	USoundModulationGeneratorADEnvelope::~USoundModulationGeneratorADEnvelope() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulation_Public_Generators_SoundModulationADEnvelope_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulation_Public_Generators_SoundModulationADEnvelope_h_Statics::ScriptStructInfo[] = {
		{ FSoundModulationADEnvelopeParams::StaticStruct, Z_Construct_UScriptStruct_FSoundModulationADEnvelopeParams_Statics::NewStructOps, TEXT("SoundModulationADEnvelopeParams"), &Z_Registration_Info_UScriptStruct_SoundModulationADEnvelopeParams, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSoundModulationADEnvelopeParams), 372913912U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulation_Public_Generators_SoundModulationADEnvelope_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USoundModulationGeneratorADEnvelope, USoundModulationGeneratorADEnvelope::StaticClass, TEXT("USoundModulationGeneratorADEnvelope"), &Z_Registration_Info_UClass_USoundModulationGeneratorADEnvelope, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USoundModulationGeneratorADEnvelope), 2983334834U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulation_Public_Generators_SoundModulationADEnvelope_h_3678696003(TEXT("/Script/AudioModulation"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulation_Public_Generators_SoundModulationADEnvelope_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulation_Public_Generators_SoundModulationADEnvelope_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulation_Public_Generators_SoundModulationADEnvelope_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulation_Public_Generators_SoundModulationADEnvelope_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
