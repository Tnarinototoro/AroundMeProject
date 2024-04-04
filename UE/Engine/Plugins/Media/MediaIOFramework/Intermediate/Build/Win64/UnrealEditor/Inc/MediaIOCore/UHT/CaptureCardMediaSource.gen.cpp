// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CaptureCardMediaSource.h"
#include "OpenColorIOColorSpace.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCaptureCardMediaSource() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ETextureColorSpace();
	MEDIAASSETS_API UClass* Z_Construct_UClass_UTimeSynchronizableMediaSource();
	MEDIAIOCORE_API UClass* Z_Construct_UClass_UCaptureCardMediaSource();
	MEDIAIOCORE_API UClass* Z_Construct_UClass_UCaptureCardMediaSource_NoRegister();
	MEDIAIOCORE_API UClass* Z_Construct_UClass_UVideoDeinterlacer_NoRegister();
	MEDIAIOCORE_API UEnum* Z_Construct_UEnum_MediaIOCore_EMediaIOCoreSourceEncoding();
	MEDIAIOCORE_API UEnum* Z_Construct_UEnum_MediaIOCore_EMediaIOInterlaceFieldOrder();
	MEDIAIOCORE_API UEnum* Z_Construct_UEnum_MediaIOCore_EMediaIOSampleEvaluationType();
	OPENCOLORIO_API UScriptStruct* Z_Construct_UScriptStruct_FOpenColorIOColorConversionSettings();
	UPackage* Z_Construct_UPackage__Script_MediaIOCore();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMediaIOCoreSourceEncoding;
	static UEnum* EMediaIOCoreSourceEncoding_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EMediaIOCoreSourceEncoding.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EMediaIOCoreSourceEncoding.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MediaIOCore_EMediaIOCoreSourceEncoding, (UObject*)Z_Construct_UPackage__Script_MediaIOCore(), TEXT("EMediaIOCoreSourceEncoding"));
		}
		return Z_Registration_Info_UEnum_EMediaIOCoreSourceEncoding.OuterSingleton;
	}
	template<> MEDIAIOCORE_API UEnum* StaticEnum<EMediaIOCoreSourceEncoding>()
	{
		return EMediaIOCoreSourceEncoding_StaticEnum();
	}
	struct Z_Construct_UEnum_MediaIOCore_EMediaIOCoreSourceEncoding_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_MediaIOCore_EMediaIOCoreSourceEncoding_Statics::Enumerators[] = {
		{ "EMediaIOCoreSourceEncoding::Linear", (int64)EMediaIOCoreSourceEncoding::Linear },
		{ "EMediaIOCoreSourceEncoding::sRGB", (int64)EMediaIOCoreSourceEncoding::sRGB },
		{ "EMediaIOCoreSourceEncoding::ST2084", (int64)EMediaIOCoreSourceEncoding::ST2084 },
		{ "EMediaIOCoreSourceEncoding::SLog3", (int64)EMediaIOCoreSourceEncoding::SLog3 },
		{ "EMediaIOCoreSourceEncoding::MAX", (int64)EMediaIOCoreSourceEncoding::MAX },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_MediaIOCore_EMediaIOCoreSourceEncoding_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/** List of texture source encodings that can be converted to linear. (Integer values match the ETextureSourceEncoding values in TextureDefines.h */" },
		{ "Linear.DisplayName", "Linear" },
		{ "Linear.Name", "EMediaIOCoreSourceEncoding::Linear" },
		{ "MAX.Name", "EMediaIOCoreSourceEncoding::MAX" },
		{ "ModuleRelativePath", "Public/CaptureCardMediaSource.h" },
		{ "SLog3.Comment", "//BT1886\x09\x09= 5 UMETA(DisplayName = \"BT1886/Gamma 2.4\"),\n" },
		{ "SLog3.DisplayName", "SLog3" },
		{ "SLog3.Name", "EMediaIOCoreSourceEncoding::SLog3" },
		{ "SLog3.ToolTip", "BT1886          = 5 UMETA(DisplayName = \"BT1886/Gamma 2.4\")," },
		{ "sRGB.DisplayName", "sRGB" },
		{ "sRGB.Name", "EMediaIOCoreSourceEncoding::sRGB" },
		{ "ST2084.DisplayName", "ST 2084/PQ" },
		{ "ST2084.Name", "EMediaIOCoreSourceEncoding::ST2084" },
		{ "ToolTip", "List of texture source encodings that can be converted to linear. (Integer values match the ETextureSourceEncoding values in TextureDefines.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MediaIOCore_EMediaIOCoreSourceEncoding_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_MediaIOCore,
		nullptr,
		"EMediaIOCoreSourceEncoding",
		"EMediaIOCoreSourceEncoding",
		Z_Construct_UEnum_MediaIOCore_EMediaIOCoreSourceEncoding_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_MediaIOCore_EMediaIOCoreSourceEncoding_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_MediaIOCore_EMediaIOCoreSourceEncoding_Statics::Enum_MetaDataParams), Z_Construct_UEnum_MediaIOCore_EMediaIOCoreSourceEncoding_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_MediaIOCore_EMediaIOCoreSourceEncoding()
	{
		if (!Z_Registration_Info_UEnum_EMediaIOCoreSourceEncoding.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMediaIOCoreSourceEncoding.InnerSingleton, Z_Construct_UEnum_MediaIOCore_EMediaIOCoreSourceEncoding_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EMediaIOCoreSourceEncoding.InnerSingleton;
	}
	void UCaptureCardMediaSource::StaticRegisterNativesUCaptureCardMediaSource()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCaptureCardMediaSource);
	UClass* Z_Construct_UClass_UCaptureCardMediaSource_NoRegister()
	{
		return UCaptureCardMediaSource::StaticClass();
	}
	struct Z_Construct_UClass_UCaptureCardMediaSource_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRenderJIT_MetaData[];
#endif
		static void NewProp_bRenderJIT_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRenderJIT;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bFramelock_MetaData[];
#endif
		static void NewProp_bFramelock_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFramelock;
		static const UECodeGen_Private::FBytePropertyParams NewProp_EvaluationType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EvaluationType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_EvaluationType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Deinterlacer_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Deinterlacer;
		static const UECodeGen_Private::FBytePropertyParams NewProp_InterlaceFieldOrder_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InterlaceFieldOrder_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_InterlaceFieldOrder;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideSourceEncoding_MetaData[];
#endif
		static void NewProp_bOverrideSourceEncoding_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideSourceEncoding;
		static const UECodeGen_Private::FBytePropertyParams NewProp_OverrideSourceEncoding_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverrideSourceEncoding_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_OverrideSourceEncoding;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideSourceColorSpace_MetaData[];
#endif
		static void NewProp_bOverrideSourceColorSpace_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideSourceColorSpace;
		static const UECodeGen_Private::FBytePropertyParams NewProp_OverrideSourceColorSpace_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverrideSourceColorSpace_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_OverrideSourceColorSpace;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ColorConversionSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ColorConversionSettings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCaptureCardMediaSource_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTimeSynchronizableMediaSource,
		(UObject* (*)())Z_Construct_UPackage__Script_MediaIOCore,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCaptureCardMediaSource_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCaptureCardMediaSource_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Base class for media sources that are coming from a capture card.\n */" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "CaptureCardMediaSource.h" },
		{ "ModuleRelativePath", "Public/CaptureCardMediaSource.h" },
		{ "ToolTip", "Base class for media sources that are coming from a capture card." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCaptureCardMediaSource_Statics::NewProp_bRenderJIT_MetaData[] = {
		{ "Category", "Synchronization" },
		{ "Comment", "/** Should use JITR technique? It enables late sample picking for render. */" },
		{ "DisplayName", "Just-In-Time Rendering" },
		{ "ModuleRelativePath", "Public/CaptureCardMediaSource.h" },
		{ "ToolTip", "Should use JITR technique? It enables late sample picking for render." },
	};
#endif
	void Z_Construct_UClass_UCaptureCardMediaSource_Statics::NewProp_bRenderJIT_SetBit(void* Obj)
	{
		((UCaptureCardMediaSource*)Obj)->bRenderJIT = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCaptureCardMediaSource_Statics::NewProp_bRenderJIT = { "bRenderJIT", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCaptureCardMediaSource), &Z_Construct_UClass_UCaptureCardMediaSource_Statics::NewProp_bRenderJIT_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCaptureCardMediaSource_Statics::NewProp_bRenderJIT_MetaData), Z_Construct_UClass_UCaptureCardMediaSource_Statics::NewProp_bRenderJIT_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCaptureCardMediaSource_Statics::NewProp_bFramelock_MetaData[] = {
		{ "Category", "Synchronization" },
		{ "Comment", "/** Should wait for some time until requested frame arrives? Requires JIT rendering. */" },
		{ "DisplayName", "Framelock" },
		{ "ModuleRelativePath", "Public/CaptureCardMediaSource.h" },
		{ "ToolTip", "Should wait for some time until requested frame arrives? Requires JIT rendering." },
	};
#endif
	void Z_Construct_UClass_UCaptureCardMediaSource_Statics::NewProp_bFramelock_SetBit(void* Obj)
	{
		((UCaptureCardMediaSource*)Obj)->bFramelock = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCaptureCardMediaSource_Statics::NewProp_bFramelock = { "bFramelock", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCaptureCardMediaSource), &Z_Construct_UClass_UCaptureCardMediaSource_Statics::NewProp_bFramelock_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCaptureCardMediaSource_Statics::NewProp_bFramelock_MetaData), Z_Construct_UClass_UCaptureCardMediaSource_Statics::NewProp_bFramelock_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCaptureCardMediaSource_Statics::NewProp_EvaluationType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCaptureCardMediaSource_Statics::NewProp_EvaluationType_MetaData[] = {
		{ "Category", "Synchronization" },
		{ "Comment", "/** Sample evaluation type. */" },
		{ "DisplayName", "Sample Evaluation Type" },
		{ "ModuleRelativePath", "Public/CaptureCardMediaSource.h" },
		{ "ToolTip", "Sample evaluation type." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UCaptureCardMediaSource_Statics::NewProp_EvaluationType = { "EvaluationType", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCaptureCardMediaSource, EvaluationType), Z_Construct_UEnum_MediaIOCore_EMediaIOSampleEvaluationType, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCaptureCardMediaSource_Statics::NewProp_EvaluationType_MetaData), Z_Construct_UClass_UCaptureCardMediaSource_Statics::NewProp_EvaluationType_MetaData) }; // 67963019
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCaptureCardMediaSource_Statics::NewProp_Deinterlacer_MetaData[] = {
		{ "Category", "Video" },
		{ "Comment", "/**\n\x09 * How interlaced video should be treated.\n\x09 */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CaptureCardMediaSource.h" },
		{ "ToolTip", "How interlaced video should be treated." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UCaptureCardMediaSource_Statics::NewProp_Deinterlacer = { "Deinterlacer", nullptr, (EPropertyFlags)0x001600000008001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCaptureCardMediaSource, Deinterlacer), Z_Construct_UClass_UVideoDeinterlacer_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCaptureCardMediaSource_Statics::NewProp_Deinterlacer_MetaData), Z_Construct_UClass_UCaptureCardMediaSource_Statics::NewProp_Deinterlacer_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCaptureCardMediaSource_Statics::NewProp_InterlaceFieldOrder_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCaptureCardMediaSource_Statics::NewProp_InterlaceFieldOrder_MetaData[] = {
		{ "Category", "Video" },
		{ "Comment", "/**\n\x09 * The order in which interlace fields should be copied.\n\x09 */" },
		{ "ModuleRelativePath", "Public/CaptureCardMediaSource.h" },
		{ "ToolTip", "The order in which interlace fields should be copied." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UCaptureCardMediaSource_Statics::NewProp_InterlaceFieldOrder = { "InterlaceFieldOrder", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCaptureCardMediaSource, InterlaceFieldOrder), Z_Construct_UEnum_MediaIOCore_EMediaIOInterlaceFieldOrder, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCaptureCardMediaSource_Statics::NewProp_InterlaceFieldOrder_MetaData), Z_Construct_UClass_UCaptureCardMediaSource_Statics::NewProp_InterlaceFieldOrder_MetaData) }; // 307156117
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCaptureCardMediaSource_Statics::NewProp_bOverrideSourceEncoding_MetaData[] = {
		{ "Category", "Video" },
		{ "Comment", "/** Whether to override the source encoding or to use the metadata embedded in the ancillary data of the signal. */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/CaptureCardMediaSource.h" },
		{ "ToolTip", "Whether to override the source encoding or to use the metadata embedded in the ancillary data of the signal." },
	};
#endif
	void Z_Construct_UClass_UCaptureCardMediaSource_Statics::NewProp_bOverrideSourceEncoding_SetBit(void* Obj)
	{
		((UCaptureCardMediaSource*)Obj)->bOverrideSourceEncoding = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCaptureCardMediaSource_Statics::NewProp_bOverrideSourceEncoding = { "bOverrideSourceEncoding", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCaptureCardMediaSource), &Z_Construct_UClass_UCaptureCardMediaSource_Statics::NewProp_bOverrideSourceEncoding_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCaptureCardMediaSource_Statics::NewProp_bOverrideSourceEncoding_MetaData), Z_Construct_UClass_UCaptureCardMediaSource_Statics::NewProp_bOverrideSourceEncoding_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCaptureCardMediaSource_Statics::NewProp_OverrideSourceEncoding_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCaptureCardMediaSource_Statics::NewProp_OverrideSourceEncoding_MetaData[] = {
		{ "Category", "Video" },
		{ "Comment", "/** Encoding of the source texture. */" },
		{ "EditCondition", "bOverrideSourceEncoding" },
		{ "ModuleRelativePath", "Public/CaptureCardMediaSource.h" },
		{ "ToolTip", "Encoding of the source texture." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UCaptureCardMediaSource_Statics::NewProp_OverrideSourceEncoding = { "OverrideSourceEncoding", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCaptureCardMediaSource, OverrideSourceEncoding), Z_Construct_UEnum_MediaIOCore_EMediaIOCoreSourceEncoding, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCaptureCardMediaSource_Statics::NewProp_OverrideSourceEncoding_MetaData), Z_Construct_UClass_UCaptureCardMediaSource_Statics::NewProp_OverrideSourceEncoding_MetaData) }; // 3205859829
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCaptureCardMediaSource_Statics::NewProp_bOverrideSourceColorSpace_MetaData[] = {
		{ "Category", "Video" },
		{ "Comment", "/** Whether to override the source color space or to use the metadata embedded in the ancillary data of the signal. */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/CaptureCardMediaSource.h" },
		{ "ToolTip", "Whether to override the source color space or to use the metadata embedded in the ancillary data of the signal." },
	};
#endif
	void Z_Construct_UClass_UCaptureCardMediaSource_Statics::NewProp_bOverrideSourceColorSpace_SetBit(void* Obj)
	{
		((UCaptureCardMediaSource*)Obj)->bOverrideSourceColorSpace = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCaptureCardMediaSource_Statics::NewProp_bOverrideSourceColorSpace = { "bOverrideSourceColorSpace", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCaptureCardMediaSource), &Z_Construct_UClass_UCaptureCardMediaSource_Statics::NewProp_bOverrideSourceColorSpace_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCaptureCardMediaSource_Statics::NewProp_bOverrideSourceColorSpace_MetaData), Z_Construct_UClass_UCaptureCardMediaSource_Statics::NewProp_bOverrideSourceColorSpace_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCaptureCardMediaSource_Statics::NewProp_OverrideSourceColorSpace_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCaptureCardMediaSource_Statics::NewProp_OverrideSourceColorSpace_MetaData[] = {
		{ "Category", "Video" },
		{ "Comment", "/** Color space of the source texture. */" },
		{ "EditCondition", "bOverrideSourceColorSpace" },
		{ "ModuleRelativePath", "Public/CaptureCardMediaSource.h" },
		{ "ToolTip", "Color space of the source texture." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UCaptureCardMediaSource_Statics::NewProp_OverrideSourceColorSpace = { "OverrideSourceColorSpace", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCaptureCardMediaSource, OverrideSourceColorSpace), Z_Construct_UEnum_Engine_ETextureColorSpace, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCaptureCardMediaSource_Statics::NewProp_OverrideSourceColorSpace_MetaData), Z_Construct_UClass_UCaptureCardMediaSource_Statics::NewProp_OverrideSourceColorSpace_MetaData) }; // 4187111965
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCaptureCardMediaSource_Statics::NewProp_ColorConversionSettings_MetaData[] = {
		{ "Category", "Video" },
		{ "Comment", "/**\n\x09 * OCIO Settings used for applying a color conversion to the incoming source.\n\x09 */" },
		{ "ModuleRelativePath", "Public/CaptureCardMediaSource.h" },
		{ "ToolTip", "OCIO Settings used for applying a color conversion to the incoming source." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCaptureCardMediaSource_Statics::NewProp_ColorConversionSettings = { "ColorConversionSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCaptureCardMediaSource, ColorConversionSettings), Z_Construct_UScriptStruct_FOpenColorIOColorConversionSettings, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCaptureCardMediaSource_Statics::NewProp_ColorConversionSettings_MetaData), Z_Construct_UClass_UCaptureCardMediaSource_Statics::NewProp_ColorConversionSettings_MetaData) }; // 1425686863
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCaptureCardMediaSource_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCaptureCardMediaSource_Statics::NewProp_bRenderJIT,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCaptureCardMediaSource_Statics::NewProp_bFramelock,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCaptureCardMediaSource_Statics::NewProp_EvaluationType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCaptureCardMediaSource_Statics::NewProp_EvaluationType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCaptureCardMediaSource_Statics::NewProp_Deinterlacer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCaptureCardMediaSource_Statics::NewProp_InterlaceFieldOrder_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCaptureCardMediaSource_Statics::NewProp_InterlaceFieldOrder,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCaptureCardMediaSource_Statics::NewProp_bOverrideSourceEncoding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCaptureCardMediaSource_Statics::NewProp_OverrideSourceEncoding_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCaptureCardMediaSource_Statics::NewProp_OverrideSourceEncoding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCaptureCardMediaSource_Statics::NewProp_bOverrideSourceColorSpace,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCaptureCardMediaSource_Statics::NewProp_OverrideSourceColorSpace_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCaptureCardMediaSource_Statics::NewProp_OverrideSourceColorSpace,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCaptureCardMediaSource_Statics::NewProp_ColorConversionSettings,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCaptureCardMediaSource_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCaptureCardMediaSource>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCaptureCardMediaSource_Statics::ClassParams = {
		&UCaptureCardMediaSource::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCaptureCardMediaSource_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCaptureCardMediaSource_Statics::PropPointers),
		0,
		0x009010A1u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCaptureCardMediaSource_Statics::Class_MetaDataParams), Z_Construct_UClass_UCaptureCardMediaSource_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCaptureCardMediaSource_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UCaptureCardMediaSource()
	{
		if (!Z_Registration_Info_UClass_UCaptureCardMediaSource.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCaptureCardMediaSource.OuterSingleton, Z_Construct_UClass_UCaptureCardMediaSource_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCaptureCardMediaSource.OuterSingleton;
	}
	template<> MEDIAIOCORE_API UClass* StaticClass<UCaptureCardMediaSource>()
	{
		return UCaptureCardMediaSource::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCaptureCardMediaSource);
	UCaptureCardMediaSource::~UCaptureCardMediaSource() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaIOFramework_Source_MediaIOCore_Public_CaptureCardMediaSource_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaIOFramework_Source_MediaIOCore_Public_CaptureCardMediaSource_h_Statics::EnumInfo[] = {
		{ EMediaIOCoreSourceEncoding_StaticEnum, TEXT("EMediaIOCoreSourceEncoding"), &Z_Registration_Info_UEnum_EMediaIOCoreSourceEncoding, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3205859829U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaIOFramework_Source_MediaIOCore_Public_CaptureCardMediaSource_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCaptureCardMediaSource, UCaptureCardMediaSource::StaticClass, TEXT("UCaptureCardMediaSource"), &Z_Registration_Info_UClass_UCaptureCardMediaSource, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCaptureCardMediaSource), 274540865U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaIOFramework_Source_MediaIOCore_Public_CaptureCardMediaSource_h_3449692231(TEXT("/Script/MediaIOCore"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaIOFramework_Source_MediaIOCore_Public_CaptureCardMediaSource_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaIOFramework_Source_MediaIOCore_Public_CaptureCardMediaSource_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaIOFramework_Source_MediaIOCore_Public_CaptureCardMediaSource_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaIOFramework_Source_MediaIOCore_Public_CaptureCardMediaSource_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
