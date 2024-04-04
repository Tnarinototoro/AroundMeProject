// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Elements/PCGOuterIntersectionElement.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePCGOuterIntersectionElement() {}
// Cross Module References
	PCG_API UClass* Z_Construct_UClass_UPCGOuterIntersectionSettings();
	PCG_API UClass* Z_Construct_UClass_UPCGOuterIntersectionSettings_NoRegister();
	PCG_API UClass* Z_Construct_UClass_UPCGSettingsWithDynamicInputs();
	PCG_API UEnum* Z_Construct_UEnum_PCG_EPCGIntersectionDensityFunction();
	UPackage* Z_Construct_UPackage__Script_PCG();
// End Cross Module References
	void UPCGOuterIntersectionSettings::StaticRegisterNativesUPCGOuterIntersectionSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPCGOuterIntersectionSettings);
	UClass* Z_Construct_UClass_UPCGOuterIntersectionSettings_NoRegister()
	{
		return UPCGOuterIntersectionSettings::StaticClass();
	}
	struct Z_Construct_UClass_UPCGOuterIntersectionSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_DensityFunction_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DensityFunction_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_DensityFunction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIgnorePinsWithNoInput_MetaData[];
#endif
		static void NewProp_bIgnorePinsWithNoInput_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIgnorePinsWithNoInput;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bKeepZeroDensityPoints_MetaData[];
#endif
		static void NewProp_bKeepZeroDensityPoints_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bKeepZeroDensityPoints;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPCGOuterIntersectionSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPCGSettingsWithDynamicInputs,
		(UObject* (*)())Z_Construct_UPackage__Script_PCG,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGOuterIntersectionSettings_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGOuterIntersectionSettings_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Procedural" },
		{ "IncludePath", "Elements/PCGOuterIntersectionElement.h" },
		{ "ModuleRelativePath", "Public/Elements/PCGOuterIntersectionElement.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGOuterIntersectionSettings_Statics::NewProp_DensityFunction_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGOuterIntersectionSettings_Statics::NewProp_DensityFunction_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Elements/PCGOuterIntersectionElement.h" },
		{ "PCG_Overridable", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGOuterIntersectionSettings_Statics::NewProp_DensityFunction = { "DensityFunction", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGOuterIntersectionSettings, DensityFunction), Z_Construct_UEnum_PCG_EPCGIntersectionDensityFunction, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGOuterIntersectionSettings_Statics::NewProp_DensityFunction_MetaData), Z_Construct_UClass_UPCGOuterIntersectionSettings_Statics::NewProp_DensityFunction_MetaData) }; // 3197797060
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGOuterIntersectionSettings_Statics::NewProp_bIgnorePinsWithNoInput_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** If enabled, dynamic input pins that have no incoming data will be bypassed during the intersection operation\n\x09 *  calculation, which would otherwise result in an empty result. */" },
		{ "ModuleRelativePath", "Public/Elements/PCGOuterIntersectionElement.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "If enabled, dynamic input pins that have no incoming data will be bypassed during the intersection operation\ncalculation, which would otherwise result in an empty result." },
	};
#endif
	void Z_Construct_UClass_UPCGOuterIntersectionSettings_Statics::NewProp_bIgnorePinsWithNoInput_SetBit(void* Obj)
	{
		((UPCGOuterIntersectionSettings*)Obj)->bIgnorePinsWithNoInput = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGOuterIntersectionSettings_Statics::NewProp_bIgnorePinsWithNoInput = { "bIgnorePinsWithNoInput", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGOuterIntersectionSettings), &Z_Construct_UClass_UPCGOuterIntersectionSettings_Statics::NewProp_bIgnorePinsWithNoInput_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGOuterIntersectionSettings_Statics::NewProp_bIgnorePinsWithNoInput_MetaData), Z_Construct_UClass_UPCGOuterIntersectionSettings_Statics::NewProp_bIgnorePinsWithNoInput_MetaData) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGOuterIntersectionSettings_Statics::NewProp_bKeepZeroDensityPoints_MetaData[] = {
		{ "Category", "Settings|Debug" },
		{ "Comment", "/** [EDITOR ONLY] If enabled, output points with a density value of 0 will NOT be automatically filtered out. */" },
		{ "ModuleRelativePath", "Public/Elements/PCGOuterIntersectionElement.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "[EDITOR ONLY] If enabled, output points with a density value of 0 will NOT be automatically filtered out." },
	};
#endif
	void Z_Construct_UClass_UPCGOuterIntersectionSettings_Statics::NewProp_bKeepZeroDensityPoints_SetBit(void* Obj)
	{
		((UPCGOuterIntersectionSettings*)Obj)->bKeepZeroDensityPoints = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGOuterIntersectionSettings_Statics::NewProp_bKeepZeroDensityPoints = { "bKeepZeroDensityPoints", nullptr, (EPropertyFlags)0x0010000800002005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGOuterIntersectionSettings), &Z_Construct_UClass_UPCGOuterIntersectionSettings_Statics::NewProp_bKeepZeroDensityPoints_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGOuterIntersectionSettings_Statics::NewProp_bKeepZeroDensityPoints_MetaData), Z_Construct_UClass_UPCGOuterIntersectionSettings_Statics::NewProp_bKeepZeroDensityPoints_MetaData) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGOuterIntersectionSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGOuterIntersectionSettings_Statics::NewProp_DensityFunction_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGOuterIntersectionSettings_Statics::NewProp_DensityFunction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGOuterIntersectionSettings_Statics::NewProp_bIgnorePinsWithNoInput,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGOuterIntersectionSettings_Statics::NewProp_bKeepZeroDensityPoints,
#endif // WITH_EDITORONLY_DATA
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPCGOuterIntersectionSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGOuterIntersectionSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGOuterIntersectionSettings_Statics::ClassParams = {
		&UPCGOuterIntersectionSettings::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPCGOuterIntersectionSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPCGOuterIntersectionSettings_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGOuterIntersectionSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGOuterIntersectionSettings_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGOuterIntersectionSettings_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UPCGOuterIntersectionSettings()
	{
		if (!Z_Registration_Info_UClass_UPCGOuterIntersectionSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGOuterIntersectionSettings.OuterSingleton, Z_Construct_UClass_UPCGOuterIntersectionSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPCGOuterIntersectionSettings.OuterSingleton;
	}
	template<> PCG_API UClass* StaticClass<UPCGOuterIntersectionSettings>()
	{
		return UPCGOuterIntersectionSettings::StaticClass();
	}
	UPCGOuterIntersectionSettings::UPCGOuterIntersectionSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPCGOuterIntersectionSettings);
	UPCGOuterIntersectionSettings::~UPCGOuterIntersectionSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Elements_PCGOuterIntersectionElement_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Elements_PCGOuterIntersectionElement_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPCGOuterIntersectionSettings, UPCGOuterIntersectionSettings::StaticClass, TEXT("UPCGOuterIntersectionSettings"), &Z_Registration_Info_UClass_UPCGOuterIntersectionSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGOuterIntersectionSettings), 3963823997U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Elements_PCGOuterIntersectionElement_h_1731505123(TEXT("/Script/PCG"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Elements_PCGOuterIntersectionElement_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Elements_PCGOuterIntersectionElement_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
