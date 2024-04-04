// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "USDAssetUserData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUSDAssetUserData() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	ENGINE_API UClass* Z_Construct_UClass_UAssetUserData();
	UPackage* Z_Construct_UPackage__Script_USDClasses();
	USDCLASSES_API UClass* Z_Construct_UClass_UUsdAnimSequenceAssetUserData();
	USDCLASSES_API UClass* Z_Construct_UClass_UUsdAnimSequenceAssetUserData_NoRegister();
	USDCLASSES_API UClass* Z_Construct_UClass_UUsdAssetUserData();
	USDCLASSES_API UClass* Z_Construct_UClass_UUsdAssetUserData_NoRegister();
	USDCLASSES_API UClass* Z_Construct_UClass_UUsdLevelSequenceAssetUserData();
	USDCLASSES_API UClass* Z_Construct_UClass_UUsdLevelSequenceAssetUserData_NoRegister();
	USDCLASSES_API UClass* Z_Construct_UClass_UUsdMaterialAssetUserData();
	USDCLASSES_API UClass* Z_Construct_UClass_UUsdMaterialAssetUserData_NoRegister();
	USDCLASSES_API UClass* Z_Construct_UClass_UUsdMeshAssetUserData();
	USDCLASSES_API UClass* Z_Construct_UClass_UUsdMeshAssetUserData_NoRegister();
	USDCLASSES_API UScriptStruct* Z_Construct_UScriptStruct_FUsdPrimPathList();
// End Cross Module References
	void UUsdAssetUserData::StaticRegisterNativesUUsdAssetUserData()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUsdAssetUserData);
	UClass* Z_Construct_UClass_UUsdAssetUserData_NoRegister()
	{
		return UUsdAssetUserData::StaticClass();
	}
	struct Z_Construct_UClass_UUsdAssetUserData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_PrimPaths_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PrimPaths_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PrimPaths;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUsdAssetUserData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAssetUserData,
		(UObject* (*)())Z_Construct_UPackage__Script_USDClasses,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUsdAssetUserData_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUsdAssetUserData_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "USDAssetUserData.h" },
		{ "ModuleRelativePath", "Public/USDAssetUserData.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UUsdAssetUserData_Statics::NewProp_PrimPaths_Inner = { "PrimPaths", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUsdAssetUserData_Statics::NewProp_PrimPaths_MetaData[] = {
		{ "ModuleRelativePath", "Public/USDAssetUserData.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UUsdAssetUserData_Statics::NewProp_PrimPaths = { "PrimPaths", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUsdAssetUserData, PrimPaths), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUsdAssetUserData_Statics::NewProp_PrimPaths_MetaData), Z_Construct_UClass_UUsdAssetUserData_Statics::NewProp_PrimPaths_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUsdAssetUserData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUsdAssetUserData_Statics::NewProp_PrimPaths_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUsdAssetUserData_Statics::NewProp_PrimPaths,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUsdAssetUserData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUsdAssetUserData>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UUsdAssetUserData_Statics::ClassParams = {
		&UUsdAssetUserData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UUsdAssetUserData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UUsdAssetUserData_Statics::PropPointers),
		0,
		0x003010A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUsdAssetUserData_Statics::Class_MetaDataParams), Z_Construct_UClass_UUsdAssetUserData_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUsdAssetUserData_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UUsdAssetUserData()
	{
		if (!Z_Registration_Info_UClass_UUsdAssetUserData.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUsdAssetUserData.OuterSingleton, Z_Construct_UClass_UUsdAssetUserData_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UUsdAssetUserData.OuterSingleton;
	}
	template<> USDCLASSES_API UClass* StaticClass<UUsdAssetUserData>()
	{
		return UUsdAssetUserData::StaticClass();
	}
	UUsdAssetUserData::UUsdAssetUserData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUsdAssetUserData);
	UUsdAssetUserData::~UUsdAssetUserData() {}
	void UUsdAnimSequenceAssetUserData::StaticRegisterNativesUUsdAnimSequenceAssetUserData()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUsdAnimSequenceAssetUserData);
	UClass* Z_Construct_UClass_UUsdAnimSequenceAssetUserData_NoRegister()
	{
		return UUsdAnimSequenceAssetUserData::StaticClass();
	}
	struct Z_Construct_UClass_UUsdAnimSequenceAssetUserData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LayerStartOffsetSeconds_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LayerStartOffsetSeconds;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUsdAnimSequenceAssetUserData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUsdAssetUserData,
		(UObject* (*)())Z_Construct_UPackage__Script_USDClasses,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUsdAnimSequenceAssetUserData_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUsdAnimSequenceAssetUserData_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "USDAssetUserData.h" },
		{ "ModuleRelativePath", "Public/USDAssetUserData.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUsdAnimSequenceAssetUserData_Statics::NewProp_LayerStartOffsetSeconds_MetaData[] = {
		{ "Comment", "// Offset into the stage in seconds to when this AnimSequence should start playing to match the\n// skeletal animation in that stage. This is required because UAnimSequences just range from the\n// first skeletal timeSample to the last, and the first sample is not necessarily the startTimeCode\n// for the stage. Note that this is wrt. the startTimeCode of the *layer*, and not the composed stage.\n// This is only used for animating USkeletalMeshComponents via the AUsdStageActor, and it is in\n// seconds since it will need to drive the UAnimSequence with a time value in the [0, LenghtSeconds] range.\n// This should be applied *after* any offset/scale conversions on the time coordinate.\n" },
		{ "ModuleRelativePath", "Public/USDAssetUserData.h" },
		{ "ToolTip", "Offset into the stage in seconds to when this AnimSequence should start playing to match the\nskeletal animation in that stage. This is required because UAnimSequences just range from the\nfirst skeletal timeSample to the last, and the first sample is not necessarily the startTimeCode\nfor the stage. Note that this is wrt. the startTimeCode of the *layer*, and not the composed stage.\nThis is only used for animating USkeletalMeshComponents via the AUsdStageActor, and it is in\nseconds since it will need to drive the UAnimSequence with a time value in the [0, LenghtSeconds] range.\nThis should be applied *after* any offset/scale conversions on the time coordinate." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UUsdAnimSequenceAssetUserData_Statics::NewProp_LayerStartOffsetSeconds = { "LayerStartOffsetSeconds", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUsdAnimSequenceAssetUserData, LayerStartOffsetSeconds), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUsdAnimSequenceAssetUserData_Statics::NewProp_LayerStartOffsetSeconds_MetaData), Z_Construct_UClass_UUsdAnimSequenceAssetUserData_Statics::NewProp_LayerStartOffsetSeconds_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUsdAnimSequenceAssetUserData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUsdAnimSequenceAssetUserData_Statics::NewProp_LayerStartOffsetSeconds,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUsdAnimSequenceAssetUserData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUsdAnimSequenceAssetUserData>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UUsdAnimSequenceAssetUserData_Statics::ClassParams = {
		&UUsdAnimSequenceAssetUserData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UUsdAnimSequenceAssetUserData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UUsdAnimSequenceAssetUserData_Statics::PropPointers),
		0,
		0x003010A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUsdAnimSequenceAssetUserData_Statics::Class_MetaDataParams), Z_Construct_UClass_UUsdAnimSequenceAssetUserData_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUsdAnimSequenceAssetUserData_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UUsdAnimSequenceAssetUserData()
	{
		if (!Z_Registration_Info_UClass_UUsdAnimSequenceAssetUserData.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUsdAnimSequenceAssetUserData.OuterSingleton, Z_Construct_UClass_UUsdAnimSequenceAssetUserData_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UUsdAnimSequenceAssetUserData.OuterSingleton;
	}
	template<> USDCLASSES_API UClass* StaticClass<UUsdAnimSequenceAssetUserData>()
	{
		return UUsdAnimSequenceAssetUserData::StaticClass();
	}
	UUsdAnimSequenceAssetUserData::UUsdAnimSequenceAssetUserData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUsdAnimSequenceAssetUserData);
	UUsdAnimSequenceAssetUserData::~UUsdAnimSequenceAssetUserData() {}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_UsdPrimPathList;
class UScriptStruct* FUsdPrimPathList::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_UsdPrimPathList.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_UsdPrimPathList.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FUsdPrimPathList, (UObject*)Z_Construct_UPackage__Script_USDClasses(), TEXT("UsdPrimPathList"));
	}
	return Z_Registration_Info_UScriptStruct_UsdPrimPathList.OuterSingleton;
}
template<> USDCLASSES_API UScriptStruct* StaticStruct<FUsdPrimPathList>()
{
	return FUsdPrimPathList::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FUsdPrimPathList_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStrPropertyParams NewProp_PrimPaths_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PrimPaths_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PrimPaths;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUsdPrimPathList_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Simple wrapper because we're not allowed to have TMap properties with TArray<FString> as values */" },
		{ "ModuleRelativePath", "Public/USDAssetUserData.h" },
		{ "ToolTip", "Simple wrapper because we're not allowed to have TMap properties with TArray<FString> as values" },
	};
#endif
	void* Z_Construct_UScriptStruct_FUsdPrimPathList_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FUsdPrimPathList>();
	}
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FUsdPrimPathList_Statics::NewProp_PrimPaths_Inner = { "PrimPaths", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUsdPrimPathList_Statics::NewProp_PrimPaths_MetaData[] = {
		{ "ModuleRelativePath", "Public/USDAssetUserData.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FUsdPrimPathList_Statics::NewProp_PrimPaths = { "PrimPaths", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUsdPrimPathList, PrimPaths), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUsdPrimPathList_Statics::NewProp_PrimPaths_MetaData), Z_Construct_UScriptStruct_FUsdPrimPathList_Statics::NewProp_PrimPaths_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FUsdPrimPathList_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUsdPrimPathList_Statics::NewProp_PrimPaths_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUsdPrimPathList_Statics::NewProp_PrimPaths,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FUsdPrimPathList_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_USDClasses,
		nullptr,
		&NewStructOps,
		"UsdPrimPathList",
		Z_Construct_UScriptStruct_FUsdPrimPathList_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUsdPrimPathList_Statics::PropPointers),
		sizeof(FUsdPrimPathList),
		alignof(FUsdPrimPathList),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUsdPrimPathList_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FUsdPrimPathList_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUsdPrimPathList_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FUsdPrimPathList()
	{
		if (!Z_Registration_Info_UScriptStruct_UsdPrimPathList.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_UsdPrimPathList.InnerSingleton, Z_Construct_UScriptStruct_FUsdPrimPathList_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_UsdPrimPathList.InnerSingleton;
	}
	void UUsdMaterialAssetUserData::StaticRegisterNativesUUsdMaterialAssetUserData()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUsdMaterialAssetUserData);
	UClass* Z_Construct_UClass_UUsdMaterialAssetUserData_NoRegister()
	{
		return UUsdMaterialAssetUserData::StaticClass();
	}
	struct Z_Construct_UClass_UUsdMaterialAssetUserData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ParameterToPrimvar_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ParameterToPrimvar_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParameterToPrimvar_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_ParameterToPrimvar;
		static const UECodeGen_Private::FIntPropertyParams NewProp_PrimvarToUVIndex_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_PrimvarToUVIndex_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PrimvarToUVIndex_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_PrimvarToUVIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUsdMaterialAssetUserData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUsdAssetUserData,
		(UObject* (*)())Z_Construct_UPackage__Script_USDClasses,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUsdMaterialAssetUserData_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUsdMaterialAssetUserData_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** AssetImportData assigned to Unreal materials that are generated when parsing USD Material prims */" },
		{ "IncludePath", "USDAssetUserData.h" },
		{ "ModuleRelativePath", "Public/USDAssetUserData.h" },
		{ "ToolTip", "AssetImportData assigned to Unreal materials that are generated when parsing USD Material prims" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UUsdMaterialAssetUserData_Statics::NewProp_ParameterToPrimvar_ValueProp = { "ParameterToPrimvar", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UUsdMaterialAssetUserData_Statics::NewProp_ParameterToPrimvar_Key_KeyProp = { "ParameterToPrimvar_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUsdMaterialAssetUserData_Statics::NewProp_ParameterToPrimvar_MetaData[] = {
		{ "Comment", "/**\n\x09 * In the context of our reference materials that just read a single texture for each material parameter, this\n\x09 * describes the primvar that the USD material is sampling for each texture.\n\x09 * e.g. {'BaseColor': 'st0', 'Metallic': 'st1'}\n\x09 */" },
		{ "ModuleRelativePath", "Public/USDAssetUserData.h" },
		{ "ToolTip", "In the context of our reference materials that just read a single texture for each material parameter, this\ndescribes the primvar that the USD material is sampling for each texture.\ne.g. {'BaseColor': 'st0', 'Metallic': 'st1'}" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UUsdMaterialAssetUserData_Statics::NewProp_ParameterToPrimvar = { "ParameterToPrimvar", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUsdMaterialAssetUserData, ParameterToPrimvar), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUsdMaterialAssetUserData_Statics::NewProp_ParameterToPrimvar_MetaData), Z_Construct_UClass_UUsdMaterialAssetUserData_Statics::NewProp_ParameterToPrimvar_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UUsdMaterialAssetUserData_Statics::NewProp_PrimvarToUVIndex_ValueProp = { "PrimvarToUVIndex", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UUsdMaterialAssetUserData_Statics::NewProp_PrimvarToUVIndex_Key_KeyProp = { "PrimvarToUVIndex_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUsdMaterialAssetUserData_Statics::NewProp_PrimvarToUVIndex_MetaData[] = {
		{ "Comment", "/**\n\x09 * In the context of our reference materials that just read a single texture for each material parameter, this\n\x09 * describes the Unreal UV index that will be used for sampling by each USD primvar. The idea is to use this in\n\x09 * combination with ParameterToPrimvar, in order to describe which UV index the material has currently assigned to\n\x09 * each parameter. When assigning the material to meshes later, we'll compare this member with the\n\x09 * UUsdMeshAssetImportData's own PrimvarToUVIndex to see if they are compatible or not, and if not spawn a new\n\x09 * material instance that is.\n\x09 * e.g. {'firstPrimvar': 0, 'st': 1, 'st1': 2}\n\x09 */" },
		{ "ModuleRelativePath", "Public/USDAssetUserData.h" },
		{ "ToolTip", "In the context of our reference materials that just read a single texture for each material parameter, this\ndescribes the Unreal UV index that will be used for sampling by each USD primvar. The idea is to use this in\ncombination with ParameterToPrimvar, in order to describe which UV index the material has currently assigned to\neach parameter. When assigning the material to meshes later, we'll compare this member with the\nUUsdMeshAssetImportData's own PrimvarToUVIndex to see if they are compatible or not, and if not spawn a new\nmaterial instance that is.\ne.g. {'firstPrimvar': 0, 'st': 1, 'st1': 2}" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UUsdMaterialAssetUserData_Statics::NewProp_PrimvarToUVIndex = { "PrimvarToUVIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUsdMaterialAssetUserData, PrimvarToUVIndex), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUsdMaterialAssetUserData_Statics::NewProp_PrimvarToUVIndex_MetaData), Z_Construct_UClass_UUsdMaterialAssetUserData_Statics::NewProp_PrimvarToUVIndex_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUsdMaterialAssetUserData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUsdMaterialAssetUserData_Statics::NewProp_ParameterToPrimvar_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUsdMaterialAssetUserData_Statics::NewProp_ParameterToPrimvar_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUsdMaterialAssetUserData_Statics::NewProp_ParameterToPrimvar,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUsdMaterialAssetUserData_Statics::NewProp_PrimvarToUVIndex_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUsdMaterialAssetUserData_Statics::NewProp_PrimvarToUVIndex_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUsdMaterialAssetUserData_Statics::NewProp_PrimvarToUVIndex,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUsdMaterialAssetUserData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUsdMaterialAssetUserData>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UUsdMaterialAssetUserData_Statics::ClassParams = {
		&UUsdMaterialAssetUserData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UUsdMaterialAssetUserData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UUsdMaterialAssetUserData_Statics::PropPointers),
		0,
		0x003010A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUsdMaterialAssetUserData_Statics::Class_MetaDataParams), Z_Construct_UClass_UUsdMaterialAssetUserData_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUsdMaterialAssetUserData_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UUsdMaterialAssetUserData()
	{
		if (!Z_Registration_Info_UClass_UUsdMaterialAssetUserData.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUsdMaterialAssetUserData.OuterSingleton, Z_Construct_UClass_UUsdMaterialAssetUserData_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UUsdMaterialAssetUserData.OuterSingleton;
	}
	template<> USDCLASSES_API UClass* StaticClass<UUsdMaterialAssetUserData>()
	{
		return UUsdMaterialAssetUserData::StaticClass();
	}
	UUsdMaterialAssetUserData::UUsdMaterialAssetUserData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUsdMaterialAssetUserData);
	UUsdMaterialAssetUserData::~UUsdMaterialAssetUserData() {}
	void UUsdMeshAssetUserData::StaticRegisterNativesUUsdMeshAssetUserData()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUsdMeshAssetUserData);
	UClass* Z_Construct_UClass_UUsdMeshAssetUserData_NoRegister()
	{
		return UUsdMeshAssetUserData::StaticClass();
	}
	struct Z_Construct_UClass_UUsdMeshAssetUserData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MaterialSlotToPrimPaths_ValueProp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaterialSlotToPrimPaths_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaterialSlotToPrimPaths_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_MaterialSlotToPrimPaths;
		static const UECodeGen_Private::FIntPropertyParams NewProp_PrimvarToUVIndex_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_PrimvarToUVIndex_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PrimvarToUVIndex_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_PrimvarToUVIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUsdMeshAssetUserData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUsdAssetUserData,
		(UObject* (*)())Z_Construct_UPackage__Script_USDClasses,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUsdMeshAssetUserData_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUsdMeshAssetUserData_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** We assign these to UStaticMeshes or USkeletalMeshes generated from USD */" },
		{ "IncludePath", "USDAssetUserData.h" },
		{ "ModuleRelativePath", "Public/USDAssetUserData.h" },
		{ "ToolTip", "We assign these to UStaticMeshes or USkeletalMeshes generated from USD" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUsdMeshAssetUserData_Statics::NewProp_MaterialSlotToPrimPaths_ValueProp = { "MaterialSlotToPrimPaths", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FUsdPrimPathList, METADATA_PARAMS(0, nullptr) }; // 3374368167
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UUsdMeshAssetUserData_Statics::NewProp_MaterialSlotToPrimPaths_Key_KeyProp = { "MaterialSlotToPrimPaths_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUsdMeshAssetUserData_Statics::NewProp_MaterialSlotToPrimPaths_MetaData[] = {
		{ "Comment", "/**\n\x09 * Maps from a material slot index of an UStaticMesh or USkeletalMesh to a list of source prims that contain this\n\x09 * assignment. It can contain multiple prims in case we combine material slots and/or collapse prims\n\x09 * (e.g. {0: ['/Root/mesh', '/Root/othermesh/geomsubset0', '/Root/othermesh/geomsubset1'] }).\n\x09 */" },
		{ "ModuleRelativePath", "Public/USDAssetUserData.h" },
		{ "ToolTip", "Maps from a material slot index of an UStaticMesh or USkeletalMesh to a list of source prims that contain this\nassignment. It can contain multiple prims in case we combine material slots and/or collapse prims\n(e.g. {0: ['/Root/mesh', '/Root/othermesh/geomsubset0', '/Root/othermesh/geomsubset1'] })." },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UUsdMeshAssetUserData_Statics::NewProp_MaterialSlotToPrimPaths = { "MaterialSlotToPrimPaths", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUsdMeshAssetUserData, MaterialSlotToPrimPaths), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUsdMeshAssetUserData_Statics::NewProp_MaterialSlotToPrimPaths_MetaData), Z_Construct_UClass_UUsdMeshAssetUserData_Statics::NewProp_MaterialSlotToPrimPaths_MetaData) }; // 3374368167
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UUsdMeshAssetUserData_Statics::NewProp_PrimvarToUVIndex_ValueProp = { "PrimvarToUVIndex", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UUsdMeshAssetUserData_Statics::NewProp_PrimvarToUVIndex_Key_KeyProp = { "PrimvarToUVIndex_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUsdMeshAssetUserData_Statics::NewProp_PrimvarToUVIndex_MetaData[] = {
		{ "Comment", "/** Describes which primvars should be assigned to each UV index. */" },
		{ "ModuleRelativePath", "Public/USDAssetUserData.h" },
		{ "ToolTip", "Describes which primvars should be assigned to each UV index." },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UUsdMeshAssetUserData_Statics::NewProp_PrimvarToUVIndex = { "PrimvarToUVIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUsdMeshAssetUserData, PrimvarToUVIndex), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUsdMeshAssetUserData_Statics::NewProp_PrimvarToUVIndex_MetaData), Z_Construct_UClass_UUsdMeshAssetUserData_Statics::NewProp_PrimvarToUVIndex_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUsdMeshAssetUserData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUsdMeshAssetUserData_Statics::NewProp_MaterialSlotToPrimPaths_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUsdMeshAssetUserData_Statics::NewProp_MaterialSlotToPrimPaths_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUsdMeshAssetUserData_Statics::NewProp_MaterialSlotToPrimPaths,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUsdMeshAssetUserData_Statics::NewProp_PrimvarToUVIndex_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUsdMeshAssetUserData_Statics::NewProp_PrimvarToUVIndex_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUsdMeshAssetUserData_Statics::NewProp_PrimvarToUVIndex,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUsdMeshAssetUserData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUsdMeshAssetUserData>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UUsdMeshAssetUserData_Statics::ClassParams = {
		&UUsdMeshAssetUserData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UUsdMeshAssetUserData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UUsdMeshAssetUserData_Statics::PropPointers),
		0,
		0x003010A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUsdMeshAssetUserData_Statics::Class_MetaDataParams), Z_Construct_UClass_UUsdMeshAssetUserData_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUsdMeshAssetUserData_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UUsdMeshAssetUserData()
	{
		if (!Z_Registration_Info_UClass_UUsdMeshAssetUserData.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUsdMeshAssetUserData.OuterSingleton, Z_Construct_UClass_UUsdMeshAssetUserData_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UUsdMeshAssetUserData.OuterSingleton;
	}
	template<> USDCLASSES_API UClass* StaticClass<UUsdMeshAssetUserData>()
	{
		return UUsdMeshAssetUserData::StaticClass();
	}
	UUsdMeshAssetUserData::UUsdMeshAssetUserData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUsdMeshAssetUserData);
	UUsdMeshAssetUserData::~UUsdMeshAssetUserData() {}
	void UUsdLevelSequenceAssetUserData::StaticRegisterNativesUUsdLevelSequenceAssetUserData()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUsdLevelSequenceAssetUserData);
	UClass* Z_Construct_UClass_UUsdLevelSequenceAssetUserData_NoRegister()
	{
		return UUsdLevelSequenceAssetUserData::StaticClass();
	}
	struct Z_Construct_UClass_UUsdLevelSequenceAssetUserData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LastCheckedSignature_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LastCheckedSignature;
		static const UECodeGen_Private::FStructPropertyParams NewProp_HandledBindingGuids_ElementProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HandledBindingGuids_MetaData[];
#endif
		static const UECodeGen_Private::FSetPropertyParams NewProp_HandledBindingGuids;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUsdLevelSequenceAssetUserData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAssetUserData,
		(UObject* (*)())Z_Construct_UPackage__Script_USDClasses,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUsdLevelSequenceAssetUserData_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUsdLevelSequenceAssetUserData_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * We assign these to persistent LevelSequences that bind to one of the actors/components that the stage actor spawns.\n * We need this as part of a mechanism to automatically repair those bindings when they break if we close/reload the stage.\n */" },
		{ "IncludePath", "USDAssetUserData.h" },
		{ "ModuleRelativePath", "Public/USDAssetUserData.h" },
		{ "ToolTip", "We assign these to persistent LevelSequences that bind to one of the actors/components that the stage actor spawns.\nWe need this as part of a mechanism to automatically repair those bindings when they break if we close/reload the stage." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUsdLevelSequenceAssetUserData_Statics::NewProp_LastCheckedSignature_MetaData[] = {
		{ "Comment", "/**\n\x09 * The LevelSequence has a Guid that is changed every time its state is modified.\n\x09 * We pay attention to that so that we can avoid reprocessing a LevelSequence that hasn't changed\n\x09 */" },
		{ "ModuleRelativePath", "Public/USDAssetUserData.h" },
		{ "ToolTip", "The LevelSequence has a Guid that is changed every time its state is modified.\nWe pay attention to that so that we can avoid reprocessing a LevelSequence that hasn't changed" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUsdLevelSequenceAssetUserData_Statics::NewProp_LastCheckedSignature = { "LastCheckedSignature", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUsdLevelSequenceAssetUserData, LastCheckedSignature), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUsdLevelSequenceAssetUserData_Statics::NewProp_LastCheckedSignature_MetaData), Z_Construct_UClass_UUsdLevelSequenceAssetUserData_Statics::NewProp_LastCheckedSignature_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUsdLevelSequenceAssetUserData_Statics::NewProp_HandledBindingGuids_ElementProp = { "HandledBindingGuids", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUsdLevelSequenceAssetUserData_Statics::NewProp_HandledBindingGuids_MetaData[] = {
		{ "Comment", "/**\n\x09 * Set of binding GUIDs that we already handled in the past.\n\x09 * We use this so that we won't try and overwrite the changes in case the user manually clears/modifies a binding we previously setup.\n\x09 */" },
		{ "ModuleRelativePath", "Public/USDAssetUserData.h" },
		{ "ToolTip", "Set of binding GUIDs that we already handled in the past.\nWe use this so that we won't try and overwrite the changes in case the user manually clears/modifies a binding we previously setup." },
	};
#endif
	static_assert(TModels_V<CGetTypeHashable, FGuid>, "The structure 'FGuid' is used in a TSet but does not have a GetValueTypeHash defined");
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_UUsdLevelSequenceAssetUserData_Statics::NewProp_HandledBindingGuids = { "HandledBindingGuids", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUsdLevelSequenceAssetUserData, HandledBindingGuids), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUsdLevelSequenceAssetUserData_Statics::NewProp_HandledBindingGuids_MetaData), Z_Construct_UClass_UUsdLevelSequenceAssetUserData_Statics::NewProp_HandledBindingGuids_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUsdLevelSequenceAssetUserData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUsdLevelSequenceAssetUserData_Statics::NewProp_LastCheckedSignature,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUsdLevelSequenceAssetUserData_Statics::NewProp_HandledBindingGuids_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUsdLevelSequenceAssetUserData_Statics::NewProp_HandledBindingGuids,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUsdLevelSequenceAssetUserData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUsdLevelSequenceAssetUserData>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UUsdLevelSequenceAssetUserData_Statics::ClassParams = {
		&UUsdLevelSequenceAssetUserData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UUsdLevelSequenceAssetUserData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UUsdLevelSequenceAssetUserData_Statics::PropPointers),
		0,
		0x003010A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUsdLevelSequenceAssetUserData_Statics::Class_MetaDataParams), Z_Construct_UClass_UUsdLevelSequenceAssetUserData_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUsdLevelSequenceAssetUserData_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UUsdLevelSequenceAssetUserData()
	{
		if (!Z_Registration_Info_UClass_UUsdLevelSequenceAssetUserData.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUsdLevelSequenceAssetUserData.OuterSingleton, Z_Construct_UClass_UUsdLevelSequenceAssetUserData_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UUsdLevelSequenceAssetUserData.OuterSingleton;
	}
	template<> USDCLASSES_API UClass* StaticClass<UUsdLevelSequenceAssetUserData>()
	{
		return UUsdLevelSequenceAssetUserData::StaticClass();
	}
	UUsdLevelSequenceAssetUserData::UUsdLevelSequenceAssetUserData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUsdLevelSequenceAssetUserData);
	UUsdLevelSequenceAssetUserData::~UUsdLevelSequenceAssetUserData() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Importers_USDImporter_Source_USDClasses_Public_USDAssetUserData_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Importers_USDImporter_Source_USDClasses_Public_USDAssetUserData_h_Statics::ScriptStructInfo[] = {
		{ FUsdPrimPathList::StaticStruct, Z_Construct_UScriptStruct_FUsdPrimPathList_Statics::NewStructOps, TEXT("UsdPrimPathList"), &Z_Registration_Info_UScriptStruct_UsdPrimPathList, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FUsdPrimPathList), 3374368167U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Importers_USDImporter_Source_USDClasses_Public_USDAssetUserData_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UUsdAssetUserData, UUsdAssetUserData::StaticClass, TEXT("UUsdAssetUserData"), &Z_Registration_Info_UClass_UUsdAssetUserData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUsdAssetUserData), 8891212U) },
		{ Z_Construct_UClass_UUsdAnimSequenceAssetUserData, UUsdAnimSequenceAssetUserData::StaticClass, TEXT("UUsdAnimSequenceAssetUserData"), &Z_Registration_Info_UClass_UUsdAnimSequenceAssetUserData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUsdAnimSequenceAssetUserData), 2472662144U) },
		{ Z_Construct_UClass_UUsdMaterialAssetUserData, UUsdMaterialAssetUserData::StaticClass, TEXT("UUsdMaterialAssetUserData"), &Z_Registration_Info_UClass_UUsdMaterialAssetUserData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUsdMaterialAssetUserData), 2601968479U) },
		{ Z_Construct_UClass_UUsdMeshAssetUserData, UUsdMeshAssetUserData::StaticClass, TEXT("UUsdMeshAssetUserData"), &Z_Registration_Info_UClass_UUsdMeshAssetUserData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUsdMeshAssetUserData), 4138471579U) },
		{ Z_Construct_UClass_UUsdLevelSequenceAssetUserData, UUsdLevelSequenceAssetUserData::StaticClass, TEXT("UUsdLevelSequenceAssetUserData"), &Z_Registration_Info_UClass_UUsdLevelSequenceAssetUserData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUsdLevelSequenceAssetUserData), 1465071421U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Importers_USDImporter_Source_USDClasses_Public_USDAssetUserData_h_2991224909(TEXT("/Script/USDClasses"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Importers_USDImporter_Source_USDClasses_Public_USDAssetUserData_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Importers_USDImporter_Source_USDClasses_Public_USDAssetUserData_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Importers_USDImporter_Source_USDClasses_Public_USDAssetUserData_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Importers_USDImporter_Source_USDClasses_Public_USDAssetUserData_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
