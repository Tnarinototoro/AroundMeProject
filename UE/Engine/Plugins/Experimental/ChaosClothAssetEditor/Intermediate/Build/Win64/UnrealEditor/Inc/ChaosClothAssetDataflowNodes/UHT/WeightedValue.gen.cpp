// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ChaosClothAsset/WeightedValue.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWeightedValue() {}
// Cross Module References
	CHAOSCLOTHASSETDATAFLOWNODES_API UScriptStruct* Z_Construct_UScriptStruct_FChaosClothAssetWeightedValue();
	CHAOSCLOTHASSETDATAFLOWNODES_API UScriptStruct* Z_Construct_UScriptStruct_FChaosClothAssetWeightedValueNonAnimatable();
	CHAOSCLOTHASSETDATAFLOWNODES_API UScriptStruct* Z_Construct_UScriptStruct_FChaosClothAssetWeightedValueNonAnimatableNoLowHighRange();
	UPackage* Z_Construct_UPackage__Script_ChaosClothAssetDataflowNodes();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ChaosClothAssetWeightedValue;
class UScriptStruct* FChaosClothAssetWeightedValue::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ChaosClothAssetWeightedValue.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ChaosClothAssetWeightedValue.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FChaosClothAssetWeightedValue, (UObject*)Z_Construct_UPackage__Script_ChaosClothAssetDataflowNodes(), TEXT("ChaosClothAssetWeightedValue"));
	}
	return Z_Registration_Info_UScriptStruct_ChaosClothAssetWeightedValue.OuterSingleton;
}
template<> CHAOSCLOTHASSETDATAFLOWNODES_API UScriptStruct* StaticStruct<FChaosClothAssetWeightedValue>()
{
	return FChaosClothAssetWeightedValue::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FChaosClothAssetWeightedValue_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsAnimatable_MetaData[];
#endif
		static void NewProp_bIsAnimatable_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsAnimatable;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Low_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Low;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_High_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_High;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WeightMap_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_WeightMap;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WeightMap_Override_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_WeightMap_Override;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosClothAssetWeightedValue_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ChaosClothAsset/WeightedValue.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FChaosClothAssetWeightedValue_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FChaosClothAssetWeightedValue>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosClothAssetWeightedValue_Statics::NewProp_bIsAnimatable_MetaData[] = {
		{ "Category", "Weighted Value" },
		{ "Comment", "/**\n\x09 * Whether the property can ever be updated/animated in real time.\n\x09 * This could make the simulation takes more CPU time, even more so if the weight maps needs updating.\n\x09 */" },
		{ "ModuleRelativePath", "Public/ChaosClothAsset/WeightedValue.h" },
		{ "ToolTip", "Whether the property can ever be updated/animated in real time.\nThis could make the simulation takes more CPU time, even more so if the weight maps needs updating." },
	};
#endif
	void Z_Construct_UScriptStruct_FChaosClothAssetWeightedValue_Statics::NewProp_bIsAnimatable_SetBit(void* Obj)
	{
		((FChaosClothAssetWeightedValue*)Obj)->bIsAnimatable = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FChaosClothAssetWeightedValue_Statics::NewProp_bIsAnimatable = { "bIsAnimatable", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FChaosClothAssetWeightedValue), &Z_Construct_UScriptStruct_FChaosClothAssetWeightedValue_Statics::NewProp_bIsAnimatable_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosClothAssetWeightedValue_Statics::NewProp_bIsAnimatable_MetaData), Z_Construct_UScriptStruct_FChaosClothAssetWeightedValue_Statics::NewProp_bIsAnimatable_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosClothAssetWeightedValue_Statics::NewProp_Low_MetaData[] = {
		{ "Category", "Weighted Value" },
		{ "ChaosClothAssetShortName", "Lo" },
		{ "Comment", "/**\n\x09 * Property value corresponding to the lower bound of the Weight Map.\n\x09 * A Weight Map stores a series of Weight values assigned to each point, all between 0 and 1.\n\x09 * The weights are used to interpolate the individual values from Low to High assigned to each different point.\n\x09 * A Weight of 0 always corresponds to the Low parameter value, and a Weight of 1 to the High parameter value.\n\x09 * The value for Low can be set to be bigger than for High in order to reverse the effect of the Weight Map.\n\x09 */" },
		{ "DisplayName", "Low Weight" },
		{ "ModuleRelativePath", "Public/ChaosClothAsset/WeightedValue.h" },
		{ "ToolTip", "Property value corresponding to the lower bound of the Weight Map.\nA Weight Map stores a series of Weight values assigned to each point, all between 0 and 1.\nThe weights are used to interpolate the individual values from Low to High assigned to each different point.\nA Weight of 0 always corresponds to the Low parameter value, and a Weight of 1 to the High parameter value.\nThe value for Low can be set to be bigger than for High in order to reverse the effect of the Weight Map." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FChaosClothAssetWeightedValue_Statics::NewProp_Low = { "Low", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosClothAssetWeightedValue, Low), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosClothAssetWeightedValue_Statics::NewProp_Low_MetaData), Z_Construct_UScriptStruct_FChaosClothAssetWeightedValue_Statics::NewProp_Low_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosClothAssetWeightedValue_Statics::NewProp_High_MetaData[] = {
		{ "Category", "Weighted Value" },
		{ "ChaosClothAssetShortName", "Hi" },
		{ "Comment", "/**\n\x09 * Property value corresponding to the upper bound of the Weight Map.\n\x09 * A Weight Map stores a series of Weight values assigned to each point, all between 0 and 1.\n\x09 * The weights are used to interpolate the individual values from Low to High assigned to each different point.\n\x09 * A Weight of 0 always corresponds to the Low parameter value, and a Weight of 1 to the High parameter value.\n\x09 * The value for Low can be set to be bigger than for High in order to reverse the effect of the Weight Map.\n\x09 */" },
		{ "DisplayName", "High Weight" },
		{ "ModuleRelativePath", "Public/ChaosClothAsset/WeightedValue.h" },
		{ "ToolTip", "Property value corresponding to the upper bound of the Weight Map.\nA Weight Map stores a series of Weight values assigned to each point, all between 0 and 1.\nThe weights are used to interpolate the individual values from Low to High assigned to each different point.\nA Weight of 0 always corresponds to the Low parameter value, and a Weight of 1 to the High parameter value.\nThe value for Low can be set to be bigger than for High in order to reverse the effect of the Weight Map." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FChaosClothAssetWeightedValue_Statics::NewProp_High = { "High", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosClothAssetWeightedValue, High), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosClothAssetWeightedValue_Statics::NewProp_High_MetaData), Z_Construct_UScriptStruct_FChaosClothAssetWeightedValue_Statics::NewProp_High_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosClothAssetWeightedValue_Statics::NewProp_WeightMap_MetaData[] = {
		{ "Category", "Weighted Value" },
		{ "Comment", "/** The name of the weight map for this property. */" },
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/ChaosClothAsset/WeightedValue.h" },
		{ "ToolTip", "The name of the weight map for this property." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FChaosClothAssetWeightedValue_Statics::NewProp_WeightMap = { "WeightMap", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosClothAssetWeightedValue, WeightMap), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosClothAssetWeightedValue_Statics::NewProp_WeightMap_MetaData), Z_Construct_UScriptStruct_FChaosClothAssetWeightedValue_Statics::NewProp_WeightMap_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosClothAssetWeightedValue_Statics::NewProp_WeightMap_Override_MetaData[] = {
		{ "Category", "Weighted Value" },
		{ "Comment", "/** The weight map override value for when the WeightMap has a connection that replaces the provided weight map value. */" },
		{ "ModuleRelativePath", "Public/ChaosClothAsset/WeightedValue.h" },
		{ "ToolTip", "The weight map override value for when the WeightMap has a connection that replaces the provided weight map value." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FChaosClothAssetWeightedValue_Statics::NewProp_WeightMap_Override = { "WeightMap_Override", nullptr, (EPropertyFlags)0x0010000000022001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosClothAssetWeightedValue, WeightMap_Override), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosClothAssetWeightedValue_Statics::NewProp_WeightMap_Override_MetaData), Z_Construct_UScriptStruct_FChaosClothAssetWeightedValue_Statics::NewProp_WeightMap_Override_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FChaosClothAssetWeightedValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosClothAssetWeightedValue_Statics::NewProp_bIsAnimatable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosClothAssetWeightedValue_Statics::NewProp_Low,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosClothAssetWeightedValue_Statics::NewProp_High,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosClothAssetWeightedValue_Statics::NewProp_WeightMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosClothAssetWeightedValue_Statics::NewProp_WeightMap_Override,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FChaosClothAssetWeightedValue_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ChaosClothAssetDataflowNodes,
		nullptr,
		&NewStructOps,
		"ChaosClothAssetWeightedValue",
		Z_Construct_UScriptStruct_FChaosClothAssetWeightedValue_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosClothAssetWeightedValue_Statics::PropPointers),
		sizeof(FChaosClothAssetWeightedValue),
		alignof(FChaosClothAssetWeightedValue),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosClothAssetWeightedValue_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FChaosClothAssetWeightedValue_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosClothAssetWeightedValue_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FChaosClothAssetWeightedValue()
	{
		if (!Z_Registration_Info_UScriptStruct_ChaosClothAssetWeightedValue.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ChaosClothAssetWeightedValue.InnerSingleton, Z_Construct_UScriptStruct_FChaosClothAssetWeightedValue_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ChaosClothAssetWeightedValue.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ChaosClothAssetWeightedValueNonAnimatable;
class UScriptStruct* FChaosClothAssetWeightedValueNonAnimatable::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ChaosClothAssetWeightedValueNonAnimatable.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ChaosClothAssetWeightedValueNonAnimatable.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FChaosClothAssetWeightedValueNonAnimatable, (UObject*)Z_Construct_UPackage__Script_ChaosClothAssetDataflowNodes(), TEXT("ChaosClothAssetWeightedValueNonAnimatable"));
	}
	return Z_Registration_Info_UScriptStruct_ChaosClothAssetWeightedValueNonAnimatable.OuterSingleton;
}
template<> CHAOSCLOTHASSETDATAFLOWNODES_API UScriptStruct* StaticStruct<FChaosClothAssetWeightedValueNonAnimatable>()
{
	return FChaosClothAssetWeightedValueNonAnimatable::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FChaosClothAssetWeightedValueNonAnimatable_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Low_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Low;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_High_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_High;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WeightMap_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_WeightMap;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WeightMap_Override_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_WeightMap_Override;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosClothAssetWeightedValueNonAnimatable_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ChaosClothAsset/WeightedValue.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FChaosClothAssetWeightedValueNonAnimatable_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FChaosClothAssetWeightedValueNonAnimatable>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosClothAssetWeightedValueNonAnimatable_Statics::NewProp_Low_MetaData[] = {
		{ "Category", "Weighted Value" },
		{ "ChaosClothAssetShortName", "Lo" },
		{ "Comment", "/**\n\x09 * Property value corresponding to the lower bound of the Weight Map.\n\x09 * A Weight Map stores a series of Weight values assigned to each point, all between 0 and 1.\n\x09 * The weights are used to interpolate the individual values from Low to High assigned to each different point.\n\x09 * A Weight of 0 always corresponds to the Low parameter value, and a Weight of 1 to the High parameter value.\n\x09 * The value for Low can be set to be bigger than for High in order to reverse the effect of the Weight Map.\n\x09 */" },
		{ "DisplayName", "Low Weight" },
		{ "ModuleRelativePath", "Public/ChaosClothAsset/WeightedValue.h" },
		{ "ToolTip", "Property value corresponding to the lower bound of the Weight Map.\nA Weight Map stores a series of Weight values assigned to each point, all between 0 and 1.\nThe weights are used to interpolate the individual values from Low to High assigned to each different point.\nA Weight of 0 always corresponds to the Low parameter value, and a Weight of 1 to the High parameter value.\nThe value for Low can be set to be bigger than for High in order to reverse the effect of the Weight Map." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FChaosClothAssetWeightedValueNonAnimatable_Statics::NewProp_Low = { "Low", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosClothAssetWeightedValueNonAnimatable, Low), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosClothAssetWeightedValueNonAnimatable_Statics::NewProp_Low_MetaData), Z_Construct_UScriptStruct_FChaosClothAssetWeightedValueNonAnimatable_Statics::NewProp_Low_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosClothAssetWeightedValueNonAnimatable_Statics::NewProp_High_MetaData[] = {
		{ "Category", "Weighted Value" },
		{ "ChaosClothAssetShortName", "Hi" },
		{ "Comment", "/**\n\x09 * Property value corresponding to the upper bound of the Weight Map.\n\x09 * A Weight Map stores a series of Weight values assigned to each point, all between 0 and 1.\n\x09 * The weights are used to interpolate the individual values from Low to High assigned to each different point.\n\x09 * A Weight of 0 always corresponds to the Low parameter value, and a Weight of 1 to the High parameter value.\n\x09 * The value for Low can be set to be bigger than for High in order to reverse the effect of the Weight Map.\n\x09 */" },
		{ "DisplayName", "High Weight" },
		{ "ModuleRelativePath", "Public/ChaosClothAsset/WeightedValue.h" },
		{ "ToolTip", "Property value corresponding to the upper bound of the Weight Map.\nA Weight Map stores a series of Weight values assigned to each point, all between 0 and 1.\nThe weights are used to interpolate the individual values from Low to High assigned to each different point.\nA Weight of 0 always corresponds to the Low parameter value, and a Weight of 1 to the High parameter value.\nThe value for Low can be set to be bigger than for High in order to reverse the effect of the Weight Map." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FChaosClothAssetWeightedValueNonAnimatable_Statics::NewProp_High = { "High", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosClothAssetWeightedValueNonAnimatable, High), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosClothAssetWeightedValueNonAnimatable_Statics::NewProp_High_MetaData), Z_Construct_UScriptStruct_FChaosClothAssetWeightedValueNonAnimatable_Statics::NewProp_High_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosClothAssetWeightedValueNonAnimatable_Statics::NewProp_WeightMap_MetaData[] = {
		{ "Category", "Weighted Value" },
		{ "Comment", "/** The name of the weight map for this property. */" },
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/ChaosClothAsset/WeightedValue.h" },
		{ "ToolTip", "The name of the weight map for this property." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FChaosClothAssetWeightedValueNonAnimatable_Statics::NewProp_WeightMap = { "WeightMap", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosClothAssetWeightedValueNonAnimatable, WeightMap), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosClothAssetWeightedValueNonAnimatable_Statics::NewProp_WeightMap_MetaData), Z_Construct_UScriptStruct_FChaosClothAssetWeightedValueNonAnimatable_Statics::NewProp_WeightMap_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosClothAssetWeightedValueNonAnimatable_Statics::NewProp_WeightMap_Override_MetaData[] = {
		{ "Category", "Weighted Value" },
		{ "Comment", "/** The weight map override value for when the WeightMap has a connection that replaces the provided weight map value. */" },
		{ "ModuleRelativePath", "Public/ChaosClothAsset/WeightedValue.h" },
		{ "ToolTip", "The weight map override value for when the WeightMap has a connection that replaces the provided weight map value." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FChaosClothAssetWeightedValueNonAnimatable_Statics::NewProp_WeightMap_Override = { "WeightMap_Override", nullptr, (EPropertyFlags)0x0010000000022001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosClothAssetWeightedValueNonAnimatable, WeightMap_Override), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosClothAssetWeightedValueNonAnimatable_Statics::NewProp_WeightMap_Override_MetaData), Z_Construct_UScriptStruct_FChaosClothAssetWeightedValueNonAnimatable_Statics::NewProp_WeightMap_Override_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FChaosClothAssetWeightedValueNonAnimatable_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosClothAssetWeightedValueNonAnimatable_Statics::NewProp_Low,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosClothAssetWeightedValueNonAnimatable_Statics::NewProp_High,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosClothAssetWeightedValueNonAnimatable_Statics::NewProp_WeightMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosClothAssetWeightedValueNonAnimatable_Statics::NewProp_WeightMap_Override,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FChaosClothAssetWeightedValueNonAnimatable_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ChaosClothAssetDataflowNodes,
		nullptr,
		&NewStructOps,
		"ChaosClothAssetWeightedValueNonAnimatable",
		Z_Construct_UScriptStruct_FChaosClothAssetWeightedValueNonAnimatable_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosClothAssetWeightedValueNonAnimatable_Statics::PropPointers),
		sizeof(FChaosClothAssetWeightedValueNonAnimatable),
		alignof(FChaosClothAssetWeightedValueNonAnimatable),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosClothAssetWeightedValueNonAnimatable_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FChaosClothAssetWeightedValueNonAnimatable_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosClothAssetWeightedValueNonAnimatable_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FChaosClothAssetWeightedValueNonAnimatable()
	{
		if (!Z_Registration_Info_UScriptStruct_ChaosClothAssetWeightedValueNonAnimatable.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ChaosClothAssetWeightedValueNonAnimatable.InnerSingleton, Z_Construct_UScriptStruct_FChaosClothAssetWeightedValueNonAnimatable_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ChaosClothAssetWeightedValueNonAnimatable.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ChaosClothAssetWeightedValueNonAnimatableNoLowHighRange;
class UScriptStruct* FChaosClothAssetWeightedValueNonAnimatableNoLowHighRange::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ChaosClothAssetWeightedValueNonAnimatableNoLowHighRange.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ChaosClothAssetWeightedValueNonAnimatableNoLowHighRange.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FChaosClothAssetWeightedValueNonAnimatableNoLowHighRange, (UObject*)Z_Construct_UPackage__Script_ChaosClothAssetDataflowNodes(), TEXT("ChaosClothAssetWeightedValueNonAnimatableNoLowHighRange"));
	}
	return Z_Registration_Info_UScriptStruct_ChaosClothAssetWeightedValueNonAnimatableNoLowHighRange.OuterSingleton;
}
template<> CHAOSCLOTHASSETDATAFLOWNODES_API UScriptStruct* StaticStruct<FChaosClothAssetWeightedValueNonAnimatableNoLowHighRange>()
{
	return FChaosClothAssetWeightedValueNonAnimatableNoLowHighRange::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FChaosClothAssetWeightedValueNonAnimatableNoLowHighRange_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WeightMap_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_WeightMap;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WeightMap_Override_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_WeightMap_Override;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosClothAssetWeightedValueNonAnimatableNoLowHighRange_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ChaosClothAsset/WeightedValue.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FChaosClothAssetWeightedValueNonAnimatableNoLowHighRange_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FChaosClothAssetWeightedValueNonAnimatableNoLowHighRange>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosClothAssetWeightedValueNonAnimatableNoLowHighRange_Statics::NewProp_WeightMap_MetaData[] = {
		{ "Category", "Weighted Value" },
		{ "Comment", "/** The name of the weight map for this property. */" },
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/ChaosClothAsset/WeightedValue.h" },
		{ "ToolTip", "The name of the weight map for this property." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FChaosClothAssetWeightedValueNonAnimatableNoLowHighRange_Statics::NewProp_WeightMap = { "WeightMap", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosClothAssetWeightedValueNonAnimatableNoLowHighRange, WeightMap), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosClothAssetWeightedValueNonAnimatableNoLowHighRange_Statics::NewProp_WeightMap_MetaData), Z_Construct_UScriptStruct_FChaosClothAssetWeightedValueNonAnimatableNoLowHighRange_Statics::NewProp_WeightMap_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosClothAssetWeightedValueNonAnimatableNoLowHighRange_Statics::NewProp_WeightMap_Override_MetaData[] = {
		{ "Category", "Weighted Value" },
		{ "Comment", "/** The weight map override value for when the WeightMap has a connection that replaces the provided weight map value. */" },
		{ "ModuleRelativePath", "Public/ChaosClothAsset/WeightedValue.h" },
		{ "ToolTip", "The weight map override value for when the WeightMap has a connection that replaces the provided weight map value." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FChaosClothAssetWeightedValueNonAnimatableNoLowHighRange_Statics::NewProp_WeightMap_Override = { "WeightMap_Override", nullptr, (EPropertyFlags)0x0010000000022001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosClothAssetWeightedValueNonAnimatableNoLowHighRange, WeightMap_Override), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosClothAssetWeightedValueNonAnimatableNoLowHighRange_Statics::NewProp_WeightMap_Override_MetaData), Z_Construct_UScriptStruct_FChaosClothAssetWeightedValueNonAnimatableNoLowHighRange_Statics::NewProp_WeightMap_Override_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FChaosClothAssetWeightedValueNonAnimatableNoLowHighRange_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosClothAssetWeightedValueNonAnimatableNoLowHighRange_Statics::NewProp_WeightMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosClothAssetWeightedValueNonAnimatableNoLowHighRange_Statics::NewProp_WeightMap_Override,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FChaosClothAssetWeightedValueNonAnimatableNoLowHighRange_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ChaosClothAssetDataflowNodes,
		nullptr,
		&NewStructOps,
		"ChaosClothAssetWeightedValueNonAnimatableNoLowHighRange",
		Z_Construct_UScriptStruct_FChaosClothAssetWeightedValueNonAnimatableNoLowHighRange_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosClothAssetWeightedValueNonAnimatableNoLowHighRange_Statics::PropPointers),
		sizeof(FChaosClothAssetWeightedValueNonAnimatableNoLowHighRange),
		alignof(FChaosClothAssetWeightedValueNonAnimatableNoLowHighRange),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosClothAssetWeightedValueNonAnimatableNoLowHighRange_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FChaosClothAssetWeightedValueNonAnimatableNoLowHighRange_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosClothAssetWeightedValueNonAnimatableNoLowHighRange_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FChaosClothAssetWeightedValueNonAnimatableNoLowHighRange()
	{
		if (!Z_Registration_Info_UScriptStruct_ChaosClothAssetWeightedValueNonAnimatableNoLowHighRange.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ChaosClothAssetWeightedValueNonAnimatableNoLowHighRange.InnerSingleton, Z_Construct_UScriptStruct_FChaosClothAssetWeightedValueNonAnimatableNoLowHighRange_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ChaosClothAssetWeightedValueNonAnimatableNoLowHighRange.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosClothAssetEditor_Source_ChaosClothAssetDataflowNodes_Public_ChaosClothAsset_WeightedValue_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosClothAssetEditor_Source_ChaosClothAssetDataflowNodes_Public_ChaosClothAsset_WeightedValue_h_Statics::ScriptStructInfo[] = {
		{ FChaosClothAssetWeightedValue::StaticStruct, Z_Construct_UScriptStruct_FChaosClothAssetWeightedValue_Statics::NewStructOps, TEXT("ChaosClothAssetWeightedValue"), &Z_Registration_Info_UScriptStruct_ChaosClothAssetWeightedValue, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FChaosClothAssetWeightedValue), 2136180627U) },
		{ FChaosClothAssetWeightedValueNonAnimatable::StaticStruct, Z_Construct_UScriptStruct_FChaosClothAssetWeightedValueNonAnimatable_Statics::NewStructOps, TEXT("ChaosClothAssetWeightedValueNonAnimatable"), &Z_Registration_Info_UScriptStruct_ChaosClothAssetWeightedValueNonAnimatable, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FChaosClothAssetWeightedValueNonAnimatable), 572609115U) },
		{ FChaosClothAssetWeightedValueNonAnimatableNoLowHighRange::StaticStruct, Z_Construct_UScriptStruct_FChaosClothAssetWeightedValueNonAnimatableNoLowHighRange_Statics::NewStructOps, TEXT("ChaosClothAssetWeightedValueNonAnimatableNoLowHighRange"), &Z_Registration_Info_UScriptStruct_ChaosClothAssetWeightedValueNonAnimatableNoLowHighRange, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FChaosClothAssetWeightedValueNonAnimatableNoLowHighRange), 886386078U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosClothAssetEditor_Source_ChaosClothAssetDataflowNodes_Public_ChaosClothAsset_WeightedValue_h_3984461479(TEXT("/Script/ChaosClothAssetDataflowNodes"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosClothAssetEditor_Source_ChaosClothAssetDataflowNodes_Public_ChaosClothAsset_WeightedValue_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosClothAssetEditor_Source_ChaosClothAssetDataflowNodes_Public_ChaosClothAsset_WeightedValue_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
