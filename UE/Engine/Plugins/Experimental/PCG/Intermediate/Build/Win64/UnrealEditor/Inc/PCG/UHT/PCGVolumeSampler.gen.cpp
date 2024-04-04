// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Elements/PCGVolumeSampler.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePCGVolumeSampler() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	PCG_API UClass* Z_Construct_UClass_UPCGSettings();
	PCG_API UClass* Z_Construct_UClass_UPCGVolumeSamplerSettings();
	PCG_API UClass* Z_Construct_UClass_UPCGVolumeSamplerSettings_NoRegister();
	UPackage* Z_Construct_UPackage__Script_PCG();
// End Cross Module References
	void UPCGVolumeSamplerSettings::StaticRegisterNativesUPCGVolumeSamplerSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPCGVolumeSamplerSettings);
	UClass* Z_Construct_UClass_UPCGVolumeSamplerSettings_NoRegister()
	{
		return UPCGVolumeSamplerSettings::StaticClass();
	}
	struct Z_Construct_UClass_UPCGVolumeSamplerSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VoxelSize_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_VoxelSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUnbounded_MetaData[];
#endif
		static void NewProp_bUnbounded_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUnbounded;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PointSteepness_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PointSteepness;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPCGVolumeSamplerSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPCGSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_PCG,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGVolumeSamplerSettings_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGVolumeSamplerSettings_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Procedural" },
		{ "IncludePath", "Elements/PCGVolumeSampler.h" },
		{ "ModuleRelativePath", "Public/Elements/PCGVolumeSampler.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGVolumeSamplerSettings_Statics::NewProp_VoxelSize_MetaData[] = {
		{ "Category", "Data" },
		{ "ModuleRelativePath", "Public/Elements/PCGVolumeSampler.h" },
		{ "PCG_Overridable", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGVolumeSamplerSettings_Statics::NewProp_VoxelSize = { "VoxelSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGVolumeSamplerSettings, VoxelSize), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGVolumeSamplerSettings_Statics::NewProp_VoxelSize_MetaData), Z_Construct_UClass_UPCGVolumeSamplerSettings_Statics::NewProp_VoxelSize_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGVolumeSamplerSettings_Statics::NewProp_bUnbounded_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** If no Bounding Shape input is provided, the actor bounds are used to limit the sample generation domain.\n\x09* This option allows ignoring the actor bounds and generating over the entire volume. Use with caution as this\n\x09* may generate a lot of points.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Elements/PCGVolumeSampler.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "If no Bounding Shape input is provided, the actor bounds are used to limit the sample generation domain.\nThis option allows ignoring the actor bounds and generating over the entire volume. Use with caution as this\nmay generate a lot of points." },
	};
#endif
	void Z_Construct_UClass_UPCGVolumeSamplerSettings_Statics::NewProp_bUnbounded_SetBit(void* Obj)
	{
		((UPCGVolumeSamplerSettings*)Obj)->bUnbounded = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGVolumeSamplerSettings_Statics::NewProp_bUnbounded = { "bUnbounded", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGVolumeSamplerSettings), &Z_Construct_UClass_UPCGVolumeSamplerSettings_Statics::NewProp_bUnbounded_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGVolumeSamplerSettings_Statics::NewProp_bUnbounded_MetaData), Z_Construct_UClass_UPCGVolumeSamplerSettings_Statics::NewProp_bUnbounded_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGVolumeSamplerSettings_Statics::NewProp_PointSteepness_MetaData[] = {
		{ "Category", "Settings|Points" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Each PCG point represents a discretized, volumetric region of world space. The points' Steepness value [0.0 to\n\x09 * 1.0] establishes how \"hard\" or \"soft\" that volume will be represented. From 0, it will ramp up linearly\n\x09 * increasing its influence over the density from the point's center to up to two times the bounds. At 1, it will\n\x09 * represent a binary box function with the size of the point's bounds.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Elements/PCGVolumeSampler.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Each PCG point represents a discretized, volumetric region of world space. The points' Steepness value [0.0 to\n1.0] establishes how \"hard\" or \"soft\" that volume will be represented. From 0, it will ramp up linearly\nincreasing its influence over the density from the point's center to up to two times the bounds. At 1, it will\nrepresent a binary box function with the size of the point's bounds." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPCGVolumeSamplerSettings_Statics::NewProp_PointSteepness = { "PointSteepness", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGVolumeSamplerSettings, PointSteepness), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGVolumeSamplerSettings_Statics::NewProp_PointSteepness_MetaData), Z_Construct_UClass_UPCGVolumeSamplerSettings_Statics::NewProp_PointSteepness_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGVolumeSamplerSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGVolumeSamplerSettings_Statics::NewProp_VoxelSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGVolumeSamplerSettings_Statics::NewProp_bUnbounded,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGVolumeSamplerSettings_Statics::NewProp_PointSteepness,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPCGVolumeSamplerSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGVolumeSamplerSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGVolumeSamplerSettings_Statics::ClassParams = {
		&UPCGVolumeSamplerSettings::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPCGVolumeSamplerSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPCGVolumeSamplerSettings_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGVolumeSamplerSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGVolumeSamplerSettings_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGVolumeSamplerSettings_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UPCGVolumeSamplerSettings()
	{
		if (!Z_Registration_Info_UClass_UPCGVolumeSamplerSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGVolumeSamplerSettings.OuterSingleton, Z_Construct_UClass_UPCGVolumeSamplerSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPCGVolumeSamplerSettings.OuterSingleton;
	}
	template<> PCG_API UClass* StaticClass<UPCGVolumeSamplerSettings>()
	{
		return UPCGVolumeSamplerSettings::StaticClass();
	}
	UPCGVolumeSamplerSettings::UPCGVolumeSamplerSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPCGVolumeSamplerSettings);
	UPCGVolumeSamplerSettings::~UPCGVolumeSamplerSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Elements_PCGVolumeSampler_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Elements_PCGVolumeSampler_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPCGVolumeSamplerSettings, UPCGVolumeSamplerSettings::StaticClass, TEXT("UPCGVolumeSamplerSettings"), &Z_Registration_Info_UClass_UPCGVolumeSamplerSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGVolumeSamplerSettings), 3722264465U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Elements_PCGVolumeSampler_h_2380843593(TEXT("/Script/PCG"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Elements_PCGVolumeSampler_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Elements_PCGVolumeSampler_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
