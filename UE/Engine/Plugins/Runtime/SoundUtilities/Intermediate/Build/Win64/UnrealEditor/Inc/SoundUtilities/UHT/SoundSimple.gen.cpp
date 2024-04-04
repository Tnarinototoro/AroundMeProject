// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SoundSimple.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSoundSimple() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase();
	ENGINE_API UClass* Z_Construct_UClass_USoundWave_NoRegister();
	SOUNDUTILITIES_API UClass* Z_Construct_UClass_USoundSimple();
	SOUNDUTILITIES_API UClass* Z_Construct_UClass_USoundSimple_NoRegister();
	SOUNDUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FSoundVariation();
	UPackage* Z_Construct_UPackage__Script_SoundUtilities();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SoundVariation;
class UScriptStruct* FSoundVariation::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SoundVariation.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SoundVariation.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSoundVariation, (UObject*)Z_Construct_UPackage__Script_SoundUtilities(), TEXT("SoundVariation"));
	}
	return Z_Registration_Info_UScriptStruct_SoundVariation.OuterSingleton;
}
template<> SOUNDUTILITIES_API UScriptStruct* StaticStruct<FSoundVariation>()
{
	return FSoundVariation::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSoundVariation_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SoundWave_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SoundWave;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProbabilityWeight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ProbabilityWeight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VolumeRange_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_VolumeRange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PitchRange_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PitchRange;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundVariation_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SoundSimple.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSoundVariation_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSoundVariation>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundVariation_Statics::NewProp_SoundWave_MetaData[] = {
		{ "Category", "SoundVariation" },
		{ "Comment", "// The sound wave asset to use for this variation\n" },
		{ "ModuleRelativePath", "Public/SoundSimple.h" },
		{ "ToolTip", "The sound wave asset to use for this variation" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FSoundVariation_Statics::NewProp_SoundWave = { "SoundWave", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSoundVariation, SoundWave), Z_Construct_UClass_USoundWave_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundVariation_Statics::NewProp_SoundWave_MetaData), Z_Construct_UScriptStruct_FSoundVariation_Statics::NewProp_SoundWave_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundVariation_Statics::NewProp_ProbabilityWeight_MetaData[] = {
		{ "Category", "Synth|Preset" },
		{ "Comment", "// The probability weight to use for this variation\n" },
		{ "ModuleRelativePath", "Public/SoundSimple.h" },
		{ "ToolTip", "The probability weight to use for this variation" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSoundVariation_Statics::NewProp_ProbabilityWeight = { "ProbabilityWeight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSoundVariation, ProbabilityWeight), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundVariation_Statics::NewProp_ProbabilityWeight_MetaData), Z_Construct_UScriptStruct_FSoundVariation_Statics::NewProp_ProbabilityWeight_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundVariation_Statics::NewProp_VolumeRange_MetaData[] = {
		{ "Category", "Synth|Preset" },
		{ "Comment", "// The volume range to use for this variation\n" },
		{ "ModuleRelativePath", "Public/SoundSimple.h" },
		{ "ToolTip", "The volume range to use for this variation" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSoundVariation_Statics::NewProp_VolumeRange = { "VolumeRange", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSoundVariation, VolumeRange), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundVariation_Statics::NewProp_VolumeRange_MetaData), Z_Construct_UScriptStruct_FSoundVariation_Statics::NewProp_VolumeRange_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundVariation_Statics::NewProp_PitchRange_MetaData[] = {
		{ "Category", "Synth|Preset" },
		{ "Comment", "// The pitch range to use for this variation\n" },
		{ "ModuleRelativePath", "Public/SoundSimple.h" },
		{ "ToolTip", "The pitch range to use for this variation" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSoundVariation_Statics::NewProp_PitchRange = { "PitchRange", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSoundVariation, PitchRange), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundVariation_Statics::NewProp_PitchRange_MetaData), Z_Construct_UScriptStruct_FSoundVariation_Statics::NewProp_PitchRange_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSoundVariation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundVariation_Statics::NewProp_SoundWave,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundVariation_Statics::NewProp_ProbabilityWeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundVariation_Statics::NewProp_VolumeRange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundVariation_Statics::NewProp_PitchRange,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSoundVariation_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SoundUtilities,
		nullptr,
		&NewStructOps,
		"SoundVariation",
		Z_Construct_UScriptStruct_FSoundVariation_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundVariation_Statics::PropPointers),
		sizeof(FSoundVariation),
		alignof(FSoundVariation),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundVariation_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSoundVariation_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundVariation_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FSoundVariation()
	{
		if (!Z_Registration_Info_UScriptStruct_SoundVariation.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SoundVariation.InnerSingleton, Z_Construct_UScriptStruct_FSoundVariation_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SoundVariation.InnerSingleton;
	}
	void USoundSimple::StaticRegisterNativesUSoundSimple()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USoundSimple);
	UClass* Z_Construct_UClass_USoundSimple_NoRegister()
	{
		return USoundSimple::StaticClass();
	}
	struct Z_Construct_UClass_USoundSimple_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Variations_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Variations_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Variations;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SoundWave_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SoundWave;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USoundSimple_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USoundBase,
		(UObject* (*)())Z_Construct_UPackage__Script_SoundUtilities,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USoundSimple_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundSimple_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Sound" },
		{ "Comment", "// Class which contains a simple list of sound wave variations\n" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "SoundSimple.h" },
		{ "ModuleRelativePath", "Public/SoundSimple.h" },
		{ "ToolTip", "Class which contains a simple list of sound wave variations" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USoundSimple_Statics::NewProp_Variations_Inner = { "Variations", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSoundVariation, METADATA_PARAMS(0, nullptr) }; // 3657728973
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundSimple_Statics::NewProp_Variations_MetaData[] = {
		{ "Category", "Variations" },
		{ "Comment", "// List of variations for the simple sound\n" },
		{ "ModuleRelativePath", "Public/SoundSimple.h" },
		{ "ToolTip", "List of variations for the simple sound" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USoundSimple_Statics::NewProp_Variations = { "Variations", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USoundSimple, Variations), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USoundSimple_Statics::NewProp_Variations_MetaData), Z_Construct_UClass_USoundSimple_Statics::NewProp_Variations_MetaData) }; // 3657728973
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundSimple_Statics::NewProp_SoundWave_MetaData[] = {
		{ "Comment", "// The current chosen sound wave\n" },
		{ "ModuleRelativePath", "Public/SoundSimple.h" },
		{ "ToolTip", "The current chosen sound wave" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_USoundSimple_Statics::NewProp_SoundWave = { "SoundWave", nullptr, (EPropertyFlags)0x0024080000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USoundSimple, SoundWave), Z_Construct_UClass_USoundWave_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USoundSimple_Statics::NewProp_SoundWave_MetaData), Z_Construct_UClass_USoundSimple_Statics::NewProp_SoundWave_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USoundSimple_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundSimple_Statics::NewProp_Variations_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundSimple_Statics::NewProp_Variations,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundSimple_Statics::NewProp_SoundWave,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USoundSimple_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USoundSimple>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USoundSimple_Statics::ClassParams = {
		&USoundSimple::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USoundSimple_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USoundSimple_Statics::PropPointers),
		0,
		0x009010A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USoundSimple_Statics::Class_MetaDataParams), Z_Construct_UClass_USoundSimple_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USoundSimple_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_USoundSimple()
	{
		if (!Z_Registration_Info_UClass_USoundSimple.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USoundSimple.OuterSingleton, Z_Construct_UClass_USoundSimple_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USoundSimple.OuterSingleton;
	}
	template<> SOUNDUTILITIES_API UClass* StaticClass<USoundSimple>()
	{
		return USoundSimple::StaticClass();
	}
	USoundSimple::USoundSimple(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USoundSimple);
	USoundSimple::~USoundSimple() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(USoundSimple)
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_SoundUtilities_Source_SoundUtilities_Public_SoundSimple_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_SoundUtilities_Source_SoundUtilities_Public_SoundSimple_h_Statics::ScriptStructInfo[] = {
		{ FSoundVariation::StaticStruct, Z_Construct_UScriptStruct_FSoundVariation_Statics::NewStructOps, TEXT("SoundVariation"), &Z_Registration_Info_UScriptStruct_SoundVariation, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSoundVariation), 3657728973U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_SoundUtilities_Source_SoundUtilities_Public_SoundSimple_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USoundSimple, USoundSimple::StaticClass, TEXT("USoundSimple"), &Z_Registration_Info_UClass_USoundSimple, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USoundSimple), 1584782332U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_SoundUtilities_Source_SoundUtilities_Public_SoundSimple_h_499978126(TEXT("/Script/SoundUtilities"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_SoundUtilities_Source_SoundUtilities_Public_SoundSimple_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_SoundUtilities_Source_SoundUtilities_Public_SoundSimple_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_SoundUtilities_Source_SoundUtilities_Public_SoundSimple_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_SoundUtilities_Source_SoundUtilities_Public_SoundSimple_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
