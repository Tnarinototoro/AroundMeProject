// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Elements/PCGInnerIntersectionElement.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePCGInnerIntersectionElement() {}
// Cross Module References
	PCG_API UClass* Z_Construct_UClass_UPCGInnerIntersectionSettings();
	PCG_API UClass* Z_Construct_UClass_UPCGInnerIntersectionSettings_NoRegister();
	PCG_API UClass* Z_Construct_UClass_UPCGSettings();
	PCG_API UEnum* Z_Construct_UEnum_PCG_EPCGIntersectionDensityFunction();
	UPackage* Z_Construct_UPackage__Script_PCG();
// End Cross Module References
	void UPCGInnerIntersectionSettings::StaticRegisterNativesUPCGInnerIntersectionSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPCGInnerIntersectionSettings);
	UClass* Z_Construct_UClass_UPCGInnerIntersectionSettings_NoRegister()
	{
		return UPCGInnerIntersectionSettings::StaticClass();
	}
	struct Z_Construct_UClass_UPCGInnerIntersectionSettings_Statics
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
	UObject* (*const Z_Construct_UClass_UPCGInnerIntersectionSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPCGSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_PCG,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGInnerIntersectionSettings_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGInnerIntersectionSettings_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Procedural" },
		{ "IncludePath", "Elements/PCGInnerIntersectionElement.h" },
		{ "ModuleRelativePath", "Public/Elements/PCGInnerIntersectionElement.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGInnerIntersectionSettings_Statics::NewProp_DensityFunction_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGInnerIntersectionSettings_Statics::NewProp_DensityFunction_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Elements/PCGInnerIntersectionElement.h" },
		{ "PCG_Overridable", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGInnerIntersectionSettings_Statics::NewProp_DensityFunction = { "DensityFunction", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGInnerIntersectionSettings, DensityFunction), Z_Construct_UEnum_PCG_EPCGIntersectionDensityFunction, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGInnerIntersectionSettings_Statics::NewProp_DensityFunction_MetaData), Z_Construct_UClass_UPCGInnerIntersectionSettings_Statics::NewProp_DensityFunction_MetaData) }; // 3197797060
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGInnerIntersectionSettings_Statics::NewProp_bKeepZeroDensityPoints_MetaData[] = {
		{ "Category", "Settings|Debug" },
		{ "Comment", "/** [EDITOR ONLY] If enabled, output points with a density value of 0 will NOT be automatically filtered out. */" },
		{ "ModuleRelativePath", "Public/Elements/PCGInnerIntersectionElement.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "[EDITOR ONLY] If enabled, output points with a density value of 0 will NOT be automatically filtered out." },
	};
#endif
	void Z_Construct_UClass_UPCGInnerIntersectionSettings_Statics::NewProp_bKeepZeroDensityPoints_SetBit(void* Obj)
	{
		((UPCGInnerIntersectionSettings*)Obj)->bKeepZeroDensityPoints = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGInnerIntersectionSettings_Statics::NewProp_bKeepZeroDensityPoints = { "bKeepZeroDensityPoints", nullptr, (EPropertyFlags)0x0010000800002005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGInnerIntersectionSettings), &Z_Construct_UClass_UPCGInnerIntersectionSettings_Statics::NewProp_bKeepZeroDensityPoints_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGInnerIntersectionSettings_Statics::NewProp_bKeepZeroDensityPoints_MetaData), Z_Construct_UClass_UPCGInnerIntersectionSettings_Statics::NewProp_bKeepZeroDensityPoints_MetaData) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGInnerIntersectionSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGInnerIntersectionSettings_Statics::NewProp_DensityFunction_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGInnerIntersectionSettings_Statics::NewProp_DensityFunction,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGInnerIntersectionSettings_Statics::NewProp_bKeepZeroDensityPoints,
#endif // WITH_EDITORONLY_DATA
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPCGInnerIntersectionSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGInnerIntersectionSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGInnerIntersectionSettings_Statics::ClassParams = {
		&UPCGInnerIntersectionSettings::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPCGInnerIntersectionSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPCGInnerIntersectionSettings_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGInnerIntersectionSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGInnerIntersectionSettings_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGInnerIntersectionSettings_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UPCGInnerIntersectionSettings()
	{
		if (!Z_Registration_Info_UClass_UPCGInnerIntersectionSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGInnerIntersectionSettings.OuterSingleton, Z_Construct_UClass_UPCGInnerIntersectionSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPCGInnerIntersectionSettings.OuterSingleton;
	}
	template<> PCG_API UClass* StaticClass<UPCGInnerIntersectionSettings>()
	{
		return UPCGInnerIntersectionSettings::StaticClass();
	}
	UPCGInnerIntersectionSettings::UPCGInnerIntersectionSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPCGInnerIntersectionSettings);
	UPCGInnerIntersectionSettings::~UPCGInnerIntersectionSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Elements_PCGInnerIntersectionElement_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Elements_PCGInnerIntersectionElement_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPCGInnerIntersectionSettings, UPCGInnerIntersectionSettings::StaticClass, TEXT("UPCGInnerIntersectionSettings"), &Z_Registration_Info_UClass_UPCGInnerIntersectionSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGInnerIntersectionSettings), 3116749104U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Elements_PCGInnerIntersectionElement_h_1229663702(TEXT("/Script/PCG"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Elements_PCGInnerIntersectionElement_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Elements_PCGInnerIntersectionElement_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
