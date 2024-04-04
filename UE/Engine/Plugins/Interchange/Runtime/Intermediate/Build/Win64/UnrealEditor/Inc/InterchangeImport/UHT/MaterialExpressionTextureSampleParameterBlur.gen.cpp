// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MaterialX/MaterialExpressions/MaterialExpressionTextureSampleParameterBlur.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionTextureSampleParameterBlur() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionTextureSampleParameter2D();
	INTERCHANGEIMPORT_API UClass* Z_Construct_UClass_UMaterialExpressionMaterialXTextureSampleParameterBlur();
	INTERCHANGEIMPORT_API UClass* Z_Construct_UClass_UMaterialExpressionMaterialXTextureSampleParameterBlur_NoRegister();
	INTERCHANGEIMPORT_API UEnum* Z_Construct_UEnum_InterchangeImport_EMaterialXTextureSampleBlurFilter();
	INTERCHANGEIMPORT_API UEnum* Z_Construct_UEnum_InterchangeImport_EMAterialXTextureSampleBlurKernel();
	UPackage* Z_Construct_UPackage__Script_InterchangeImport();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMaterialXTextureSampleBlurFilter;
	static UEnum* EMaterialXTextureSampleBlurFilter_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EMaterialXTextureSampleBlurFilter.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EMaterialXTextureSampleBlurFilter.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_InterchangeImport_EMaterialXTextureSampleBlurFilter, (UObject*)Z_Construct_UPackage__Script_InterchangeImport(), TEXT("EMaterialXTextureSampleBlurFilter"));
		}
		return Z_Registration_Info_UEnum_EMaterialXTextureSampleBlurFilter.OuterSingleton;
	}
	template<> INTERCHANGEIMPORT_API UEnum* StaticEnum<EMaterialXTextureSampleBlurFilter>()
	{
		return EMaterialXTextureSampleBlurFilter_StaticEnum();
	}
	struct Z_Construct_UEnum_InterchangeImport_EMaterialXTextureSampleBlurFilter_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_InterchangeImport_EMaterialXTextureSampleBlurFilter_Statics::Enumerators[] = {
		{ "EMaterialXTextureSampleBlurFilter::Box", (int64)EMaterialXTextureSampleBlurFilter::Box },
		{ "EMaterialXTextureSampleBlurFilter::Gaussian", (int64)EMaterialXTextureSampleBlurFilter::Gaussian },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_InterchangeImport_EMaterialXTextureSampleBlurFilter_Statics::Enum_MetaDataParams[] = {
		{ "Box.Name", "EMaterialXTextureSampleBlurFilter::Box" },
		{ "Gaussian.Name", "EMaterialXTextureSampleBlurFilter::Gaussian" },
		{ "ModuleRelativePath", "Public/MaterialX/MaterialExpressions/MaterialExpressionTextureSampleParameterBlur.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_InterchangeImport_EMaterialXTextureSampleBlurFilter_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_InterchangeImport,
		nullptr,
		"EMaterialXTextureSampleBlurFilter",
		"EMaterialXTextureSampleBlurFilter",
		Z_Construct_UEnum_InterchangeImport_EMaterialXTextureSampleBlurFilter_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_InterchangeImport_EMaterialXTextureSampleBlurFilter_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_InterchangeImport_EMaterialXTextureSampleBlurFilter_Statics::Enum_MetaDataParams), Z_Construct_UEnum_InterchangeImport_EMaterialXTextureSampleBlurFilter_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_InterchangeImport_EMaterialXTextureSampleBlurFilter()
	{
		if (!Z_Registration_Info_UEnum_EMaterialXTextureSampleBlurFilter.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMaterialXTextureSampleBlurFilter.InnerSingleton, Z_Construct_UEnum_InterchangeImport_EMaterialXTextureSampleBlurFilter_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EMaterialXTextureSampleBlurFilter.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMAterialXTextureSampleBlurKernel;
	static UEnum* EMAterialXTextureSampleBlurKernel_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EMAterialXTextureSampleBlurKernel.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EMAterialXTextureSampleBlurKernel.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_InterchangeImport_EMAterialXTextureSampleBlurKernel, (UObject*)Z_Construct_UPackage__Script_InterchangeImport(), TEXT("EMAterialXTextureSampleBlurKernel"));
		}
		return Z_Registration_Info_UEnum_EMAterialXTextureSampleBlurKernel.OuterSingleton;
	}
	template<> INTERCHANGEIMPORT_API UEnum* StaticEnum<EMAterialXTextureSampleBlurKernel>()
	{
		return EMAterialXTextureSampleBlurKernel_StaticEnum();
	}
	struct Z_Construct_UEnum_InterchangeImport_EMAterialXTextureSampleBlurKernel_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_InterchangeImport_EMAterialXTextureSampleBlurKernel_Statics::Enumerators[] = {
		{ "EMAterialXTextureSampleBlurKernel::Kernel1", (int64)EMAterialXTextureSampleBlurKernel::Kernel1 },
		{ "EMAterialXTextureSampleBlurKernel::Kernel3", (int64)EMAterialXTextureSampleBlurKernel::Kernel3 },
		{ "EMAterialXTextureSampleBlurKernel::Kernel5", (int64)EMAterialXTextureSampleBlurKernel::Kernel5 },
		{ "EMAterialXTextureSampleBlurKernel::Kernel7", (int64)EMAterialXTextureSampleBlurKernel::Kernel7 },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_InterchangeImport_EMAterialXTextureSampleBlurKernel_Statics::Enum_MetaDataParams[] = {
		{ "Kernel1.DisplayName", "1x1" },
		{ "Kernel1.Name", "EMAterialXTextureSampleBlurKernel::Kernel1" },
		{ "Kernel1.ToolTip", "No Blur" },
		{ "Kernel3.DisplayName", "3x3" },
		{ "Kernel3.Name", "EMAterialXTextureSampleBlurKernel::Kernel3" },
		{ "Kernel5.DisplayName", "5x5" },
		{ "Kernel5.Name", "EMAterialXTextureSampleBlurKernel::Kernel5" },
		{ "Kernel7.DisplayName", "7x7" },
		{ "Kernel7.Name", "EMAterialXTextureSampleBlurKernel::Kernel7" },
		{ "ModuleRelativePath", "Public/MaterialX/MaterialExpressions/MaterialExpressionTextureSampleParameterBlur.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_InterchangeImport_EMAterialXTextureSampleBlurKernel_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_InterchangeImport,
		nullptr,
		"EMAterialXTextureSampleBlurKernel",
		"EMAterialXTextureSampleBlurKernel",
		Z_Construct_UEnum_InterchangeImport_EMAterialXTextureSampleBlurKernel_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_InterchangeImport_EMAterialXTextureSampleBlurKernel_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_InterchangeImport_EMAterialXTextureSampleBlurKernel_Statics::Enum_MetaDataParams), Z_Construct_UEnum_InterchangeImport_EMAterialXTextureSampleBlurKernel_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_InterchangeImport_EMAterialXTextureSampleBlurKernel()
	{
		if (!Z_Registration_Info_UEnum_EMAterialXTextureSampleBlurKernel.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMAterialXTextureSampleBlurKernel.InnerSingleton, Z_Construct_UEnum_InterchangeImport_EMAterialXTextureSampleBlurKernel_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EMAterialXTextureSampleBlurKernel.InnerSingleton;
	}
	void UMaterialExpressionMaterialXTextureSampleParameterBlur::StaticRegisterNativesUMaterialExpressionMaterialXTextureSampleParameterBlur()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionMaterialXTextureSampleParameterBlur);
	UClass* Z_Construct_UClass_UMaterialExpressionMaterialXTextureSampleParameterBlur_NoRegister()
	{
		return UMaterialExpressionMaterialXTextureSampleParameterBlur::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialExpressionMaterialXTextureSampleParameterBlur_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_KernelSize_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_KernelSize_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_KernelSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FilterSize_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FilterSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FilterOffset_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FilterOffset;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Filter_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Filter_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Filter;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialExpressionMaterialXTextureSampleParameterBlur_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMaterialExpressionTextureSampleParameter2D,
		(UObject* (*)())Z_Construct_UPackage__Script_InterchangeImport,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionMaterialXTextureSampleParameterBlur_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionMaterialXTextureSampleParameterBlur_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object Object Object Object Object" },
		{ "IncludePath", "MaterialX/MaterialExpressions/MaterialExpressionTextureSampleParameterBlur.h" },
		{ "ModuleRelativePath", "Public/MaterialX/MaterialExpressions/MaterialExpressionTextureSampleParameterBlur.h" },
		{ "Private", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMaterialExpressionMaterialXTextureSampleParameterBlur_Statics::NewProp_KernelSize_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionMaterialXTextureSampleParameterBlur_Statics::NewProp_KernelSize_MetaData[] = {
		{ "Category", "Filtering" },
		{ "Comment", "/** The size of the blur kernel, relative to 0-1 UV space. */" },
		{ "ModuleRelativePath", "Public/MaterialX/MaterialExpressions/MaterialExpressionTextureSampleParameterBlur.h" },
		{ "ShowAsInputPin", "Advanced" },
		{ "ToolTip", "The size of the blur kernel, relative to 0-1 UV space." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMaterialExpressionMaterialXTextureSampleParameterBlur_Statics::NewProp_KernelSize = { "KernelSize", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionMaterialXTextureSampleParameterBlur, KernelSize), Z_Construct_UEnum_InterchangeImport_EMAterialXTextureSampleBlurKernel, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionMaterialXTextureSampleParameterBlur_Statics::NewProp_KernelSize_MetaData), Z_Construct_UClass_UMaterialExpressionMaterialXTextureSampleParameterBlur_Statics::NewProp_KernelSize_MetaData) }; // 2345061845
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionMaterialXTextureSampleParameterBlur_Statics::NewProp_FilterSize_MetaData[] = {
		{ "Category", "Filtering" },
		{ "Comment", "/** Size of the filter when we sample a texture coordinate */" },
		{ "ModuleRelativePath", "Public/MaterialX/MaterialExpressions/MaterialExpressionTextureSampleParameterBlur.h" },
		{ "ShowAsInputPin", "Advanced" },
		{ "ToolTip", "Size of the filter when we sample a texture coordinate" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMaterialExpressionMaterialXTextureSampleParameterBlur_Statics::NewProp_FilterSize = { "FilterSize", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionMaterialXTextureSampleParameterBlur, FilterSize), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionMaterialXTextureSampleParameterBlur_Statics::NewProp_FilterSize_MetaData), Z_Construct_UClass_UMaterialExpressionMaterialXTextureSampleParameterBlur_Statics::NewProp_FilterSize_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionMaterialXTextureSampleParameterBlur_Statics::NewProp_FilterOffset_MetaData[] = {
		{ "Category", "Filtering" },
		{ "Comment", "/** Offset of the filter when we sample a texture coordinate */" },
		{ "ModuleRelativePath", "Public/MaterialX/MaterialExpressions/MaterialExpressionTextureSampleParameterBlur.h" },
		{ "ShowAsInputPin", "Advanced" },
		{ "ToolTip", "Offset of the filter when we sample a texture coordinate" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMaterialExpressionMaterialXTextureSampleParameterBlur_Statics::NewProp_FilterOffset = { "FilterOffset", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionMaterialXTextureSampleParameterBlur, FilterOffset), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionMaterialXTextureSampleParameterBlur_Statics::NewProp_FilterOffset_MetaData), Z_Construct_UClass_UMaterialExpressionMaterialXTextureSampleParameterBlur_Statics::NewProp_FilterOffset_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMaterialExpressionMaterialXTextureSampleParameterBlur_Statics::NewProp_Filter_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionMaterialXTextureSampleParameterBlur_Statics::NewProp_Filter_MetaData[] = {
		{ "Category", "Filtering" },
		{ "Comment", "/** Filter to use when we blur a Texture: Gaussian or Box Linear filter*/" },
		{ "ModuleRelativePath", "Public/MaterialX/MaterialExpressions/MaterialExpressionTextureSampleParameterBlur.h" },
		{ "ShowAsInputPin", "Advanced" },
		{ "ToolTip", "Filter to use when we blur a Texture: Gaussian or Box Linear filter" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMaterialExpressionMaterialXTextureSampleParameterBlur_Statics::NewProp_Filter = { "Filter", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionMaterialXTextureSampleParameterBlur, Filter), Z_Construct_UEnum_InterchangeImport_EMaterialXTextureSampleBlurFilter, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionMaterialXTextureSampleParameterBlur_Statics::NewProp_Filter_MetaData), Z_Construct_UClass_UMaterialExpressionMaterialXTextureSampleParameterBlur_Statics::NewProp_Filter_MetaData) }; // 2587416929
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionMaterialXTextureSampleParameterBlur_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionMaterialXTextureSampleParameterBlur_Statics::NewProp_KernelSize_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionMaterialXTextureSampleParameterBlur_Statics::NewProp_KernelSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionMaterialXTextureSampleParameterBlur_Statics::NewProp_FilterSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionMaterialXTextureSampleParameterBlur_Statics::NewProp_FilterOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionMaterialXTextureSampleParameterBlur_Statics::NewProp_Filter_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionMaterialXTextureSampleParameterBlur_Statics::NewProp_Filter,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialExpressionMaterialXTextureSampleParameterBlur_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionMaterialXTextureSampleParameterBlur>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionMaterialXTextureSampleParameterBlur_Statics::ClassParams = {
		&UMaterialExpressionMaterialXTextureSampleParameterBlur::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMaterialExpressionMaterialXTextureSampleParameterBlur_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionMaterialXTextureSampleParameterBlur_Statics::PropPointers),
		0,
		0x000820B0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionMaterialXTextureSampleParameterBlur_Statics::Class_MetaDataParams), Z_Construct_UClass_UMaterialExpressionMaterialXTextureSampleParameterBlur_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionMaterialXTextureSampleParameterBlur_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UMaterialExpressionMaterialXTextureSampleParameterBlur()
	{
		if (!Z_Registration_Info_UClass_UMaterialExpressionMaterialXTextureSampleParameterBlur.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionMaterialXTextureSampleParameterBlur.OuterSingleton, Z_Construct_UClass_UMaterialExpressionMaterialXTextureSampleParameterBlur_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMaterialExpressionMaterialXTextureSampleParameterBlur.OuterSingleton;
	}
	template<> INTERCHANGEIMPORT_API UClass* StaticClass<UMaterialExpressionMaterialXTextureSampleParameterBlur>()
	{
		return UMaterialExpressionMaterialXTextureSampleParameterBlur::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionMaterialXTextureSampleParameterBlur);
	UMaterialExpressionMaterialXTextureSampleParameterBlur::~UMaterialExpressionMaterialXTextureSampleParameterBlur() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_MaterialX_MaterialExpressions_MaterialExpressionTextureSampleParameterBlur_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_MaterialX_MaterialExpressions_MaterialExpressionTextureSampleParameterBlur_h_Statics::EnumInfo[] = {
		{ EMaterialXTextureSampleBlurFilter_StaticEnum, TEXT("EMaterialXTextureSampleBlurFilter"), &Z_Registration_Info_UEnum_EMaterialXTextureSampleBlurFilter, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2587416929U) },
		{ EMAterialXTextureSampleBlurKernel_StaticEnum, TEXT("EMAterialXTextureSampleBlurKernel"), &Z_Registration_Info_UEnum_EMAterialXTextureSampleBlurKernel, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2345061845U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_MaterialX_MaterialExpressions_MaterialExpressionTextureSampleParameterBlur_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExpressionMaterialXTextureSampleParameterBlur, UMaterialExpressionMaterialXTextureSampleParameterBlur::StaticClass, TEXT("UMaterialExpressionMaterialXTextureSampleParameterBlur"), &Z_Registration_Info_UClass_UMaterialExpressionMaterialXTextureSampleParameterBlur, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionMaterialXTextureSampleParameterBlur), 1347340392U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_MaterialX_MaterialExpressions_MaterialExpressionTextureSampleParameterBlur_h_2703947655(TEXT("/Script/InterchangeImport"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_MaterialX_MaterialExpressions_MaterialExpressionTextureSampleParameterBlur_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_MaterialX_MaterialExpressions_MaterialExpressionTextureSampleParameterBlur_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_MaterialX_MaterialExpressions_MaterialExpressionTextureSampleParameterBlur_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_MaterialX_MaterialExpressions_MaterialExpressionTextureSampleParameterBlur_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
