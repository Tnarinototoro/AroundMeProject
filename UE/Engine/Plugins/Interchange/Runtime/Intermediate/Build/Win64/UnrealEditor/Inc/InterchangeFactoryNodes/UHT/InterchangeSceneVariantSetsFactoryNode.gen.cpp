// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InterchangeSceneVariantSetsFactoryNode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterchangeSceneVariantSetsFactoryNode() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	INTERCHANGECORE_API UClass* Z_Construct_UClass_UInterchangeFactoryBaseNode();
	INTERCHANGEFACTORYNODES_API UClass* Z_Construct_UClass_UInterchangeSceneVariantSetsFactoryNode();
	INTERCHANGEFACTORYNODES_API UClass* Z_Construct_UClass_UInterchangeSceneVariantSetsFactoryNode_NoRegister();
	UPackage* Z_Construct_UPackage__Script_InterchangeFactoryNodes();
// End Cross Module References
	DEFINE_FUNCTION(UInterchangeSceneVariantSetsFactoryNode::execRemoveCustomVariantSetUid)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_VariantUid);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RemoveCustomVariantSetUid(Z_Param_VariantUid);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeSceneVariantSetsFactoryNode::execAddCustomVariantSetUid)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_VariantUid);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->AddCustomVariantSetUid(Z_Param_VariantUid);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeSceneVariantSetsFactoryNode::execGetCustomVariantSetUid)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_OutVariantUid);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetCustomVariantSetUid(Z_Param_Index,Z_Param_Out_OutVariantUid);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeSceneVariantSetsFactoryNode::execGetCustomVariantSetUids)
	{
		P_GET_TARRAY_REF(FString,Z_Param_Out_OutVariantUids);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetCustomVariantSetUids(Z_Param_Out_OutVariantUids);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeSceneVariantSetsFactoryNode::execGetCustomVariantSetUidCount)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetCustomVariantSetUidCount();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeSceneVariantSetsFactoryNode::execGetObjectClass)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UClass**)Z_Param__Result=P_THIS->GetObjectClass();
		P_NATIVE_END;
	}
	void UInterchangeSceneVariantSetsFactoryNode::StaticRegisterNativesUInterchangeSceneVariantSetsFactoryNode()
	{
		UClass* Class = UInterchangeSceneVariantSetsFactoryNode::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddCustomVariantSetUid", &UInterchangeSceneVariantSetsFactoryNode::execAddCustomVariantSetUid },
			{ "GetCustomVariantSetUid", &UInterchangeSceneVariantSetsFactoryNode::execGetCustomVariantSetUid },
			{ "GetCustomVariantSetUidCount", &UInterchangeSceneVariantSetsFactoryNode::execGetCustomVariantSetUidCount },
			{ "GetCustomVariantSetUids", &UInterchangeSceneVariantSetsFactoryNode::execGetCustomVariantSetUids },
			{ "GetObjectClass", &UInterchangeSceneVariantSetsFactoryNode::execGetObjectClass },
			{ "RemoveCustomVariantSetUid", &UInterchangeSceneVariantSetsFactoryNode::execRemoveCustomVariantSetUid },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UInterchangeSceneVariantSetsFactoryNode_AddCustomVariantSetUid_Statics
	{
		struct InterchangeSceneVariantSetsFactoryNode_eventAddCustomVariantSetUid_Parms
		{
			FString VariantUid;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VariantUid_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_VariantUid;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeSceneVariantSetsFactoryNode_AddCustomVariantSetUid_Statics::NewProp_VariantUid_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeSceneVariantSetsFactoryNode_AddCustomVariantSetUid_Statics::NewProp_VariantUid = { "VariantUid", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeSceneVariantSetsFactoryNode_eventAddCustomVariantSetUid_Parms, VariantUid), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSceneVariantSetsFactoryNode_AddCustomVariantSetUid_Statics::NewProp_VariantUid_MetaData), Z_Construct_UFunction_UInterchangeSceneVariantSetsFactoryNode_AddCustomVariantSetUid_Statics::NewProp_VariantUid_MetaData) };
	void Z_Construct_UFunction_UInterchangeSceneVariantSetsFactoryNode_AddCustomVariantSetUid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeSceneVariantSetsFactoryNode_eventAddCustomVariantSetUid_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeSceneVariantSetsFactoryNode_AddCustomVariantSetUid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeSceneVariantSetsFactoryNode_eventAddCustomVariantSetUid_Parms), &Z_Construct_UFunction_UInterchangeSceneVariantSetsFactoryNode_AddCustomVariantSetUid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeSceneVariantSetsFactoryNode_AddCustomVariantSetUid_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSceneVariantSetsFactoryNode_AddCustomVariantSetUid_Statics::NewProp_VariantUid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSceneVariantSetsFactoryNode_AddCustomVariantSetUid_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeSceneVariantSetsFactoryNode_AddCustomVariantSetUid_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | SceneVariantSetFactory" },
		{ "Comment", "/**\n\x09 * Add one translated VariantSet's unique id to this object.\n\x09 */" },
		{ "ModuleRelativePath", "Public/InterchangeSceneVariantSetsFactoryNode.h" },
		{ "ToolTip", "Add one translated VariantSet's unique id to this object." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeSceneVariantSetsFactoryNode_AddCustomVariantSetUid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeSceneVariantSetsFactoryNode, nullptr, "AddCustomVariantSetUid", nullptr, nullptr, Z_Construct_UFunction_UInterchangeSceneVariantSetsFactoryNode_AddCustomVariantSetUid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSceneVariantSetsFactoryNode_AddCustomVariantSetUid_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeSceneVariantSetsFactoryNode_AddCustomVariantSetUid_Statics::InterchangeSceneVariantSetsFactoryNode_eventAddCustomVariantSetUid_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSceneVariantSetsFactoryNode_AddCustomVariantSetUid_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeSceneVariantSetsFactoryNode_AddCustomVariantSetUid_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSceneVariantSetsFactoryNode_AddCustomVariantSetUid_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UInterchangeSceneVariantSetsFactoryNode_AddCustomVariantSetUid_Statics::InterchangeSceneVariantSetsFactoryNode_eventAddCustomVariantSetUid_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UInterchangeSceneVariantSetsFactoryNode_AddCustomVariantSetUid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeSceneVariantSetsFactoryNode_AddCustomVariantSetUid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeSceneVariantSetsFactoryNode_GetCustomVariantSetUid_Statics
	{
		struct InterchangeSceneVariantSetsFactoryNode_eventGetCustomVariantSetUid_Parms
		{
			int32 Index;
			FString OutVariantUid;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Index_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UECodeGen_Private::FStrPropertyParams NewProp_OutVariantUid;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeSceneVariantSetsFactoryNode_GetCustomVariantSetUid_Statics::NewProp_Index_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInterchangeSceneVariantSetsFactoryNode_GetCustomVariantSetUid_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeSceneVariantSetsFactoryNode_eventGetCustomVariantSetUid_Parms, Index), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSceneVariantSetsFactoryNode_GetCustomVariantSetUid_Statics::NewProp_Index_MetaData), Z_Construct_UFunction_UInterchangeSceneVariantSetsFactoryNode_GetCustomVariantSetUid_Statics::NewProp_Index_MetaData) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeSceneVariantSetsFactoryNode_GetCustomVariantSetUid_Statics::NewProp_OutVariantUid = { "OutVariantUid", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeSceneVariantSetsFactoryNode_eventGetCustomVariantSetUid_Parms, OutVariantUid), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeSceneVariantSetsFactoryNode_GetCustomVariantSetUid_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSceneVariantSetsFactoryNode_GetCustomVariantSetUid_Statics::NewProp_Index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSceneVariantSetsFactoryNode_GetCustomVariantSetUid_Statics::NewProp_OutVariantUid,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeSceneVariantSetsFactoryNode_GetCustomVariantSetUid_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | SceneVariantSetFactory" },
		{ "Comment", "/**\n\x09 * This function allow to retrieve one translated VariantSet's unique id for this object.\n\x09 */" },
		{ "ModuleRelativePath", "Public/InterchangeSceneVariantSetsFactoryNode.h" },
		{ "ToolTip", "This function allow to retrieve one translated VariantSet's unique id for this object." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeSceneVariantSetsFactoryNode_GetCustomVariantSetUid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeSceneVariantSetsFactoryNode, nullptr, "GetCustomVariantSetUid", nullptr, nullptr, Z_Construct_UFunction_UInterchangeSceneVariantSetsFactoryNode_GetCustomVariantSetUid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSceneVariantSetsFactoryNode_GetCustomVariantSetUid_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeSceneVariantSetsFactoryNode_GetCustomVariantSetUid_Statics::InterchangeSceneVariantSetsFactoryNode_eventGetCustomVariantSetUid_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSceneVariantSetsFactoryNode_GetCustomVariantSetUid_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeSceneVariantSetsFactoryNode_GetCustomVariantSetUid_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSceneVariantSetsFactoryNode_GetCustomVariantSetUid_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UInterchangeSceneVariantSetsFactoryNode_GetCustomVariantSetUid_Statics::InterchangeSceneVariantSetsFactoryNode_eventGetCustomVariantSetUid_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UInterchangeSceneVariantSetsFactoryNode_GetCustomVariantSetUid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeSceneVariantSetsFactoryNode_GetCustomVariantSetUid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeSceneVariantSetsFactoryNode_GetCustomVariantSetUidCount_Statics
	{
		struct InterchangeSceneVariantSetsFactoryNode_eventGetCustomVariantSetUidCount_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInterchangeSceneVariantSetsFactoryNode_GetCustomVariantSetUidCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeSceneVariantSetsFactoryNode_eventGetCustomVariantSetUidCount_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeSceneVariantSetsFactoryNode_GetCustomVariantSetUidCount_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSceneVariantSetsFactoryNode_GetCustomVariantSetUidCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeSceneVariantSetsFactoryNode_GetCustomVariantSetUidCount_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | SceneVariantSetFactory" },
		{ "Comment", "/**\n\x09 * This function allow to retrieve the number of translated VariantSets' unique ids for this object.\n\x09 */" },
		{ "ModuleRelativePath", "Public/InterchangeSceneVariantSetsFactoryNode.h" },
		{ "ToolTip", "This function allow to retrieve the number of translated VariantSets' unique ids for this object." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeSceneVariantSetsFactoryNode_GetCustomVariantSetUidCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeSceneVariantSetsFactoryNode, nullptr, "GetCustomVariantSetUidCount", nullptr, nullptr, Z_Construct_UFunction_UInterchangeSceneVariantSetsFactoryNode_GetCustomVariantSetUidCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSceneVariantSetsFactoryNode_GetCustomVariantSetUidCount_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeSceneVariantSetsFactoryNode_GetCustomVariantSetUidCount_Statics::InterchangeSceneVariantSetsFactoryNode_eventGetCustomVariantSetUidCount_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSceneVariantSetsFactoryNode_GetCustomVariantSetUidCount_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeSceneVariantSetsFactoryNode_GetCustomVariantSetUidCount_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSceneVariantSetsFactoryNode_GetCustomVariantSetUidCount_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UInterchangeSceneVariantSetsFactoryNode_GetCustomVariantSetUidCount_Statics::InterchangeSceneVariantSetsFactoryNode_eventGetCustomVariantSetUidCount_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UInterchangeSceneVariantSetsFactoryNode_GetCustomVariantSetUidCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeSceneVariantSetsFactoryNode_GetCustomVariantSetUidCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeSceneVariantSetsFactoryNode_GetCustomVariantSetUids_Statics
	{
		struct InterchangeSceneVariantSetsFactoryNode_eventGetCustomVariantSetUids_Parms
		{
			TArray<FString> OutVariantUids;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_OutVariantUids_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutVariantUids;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeSceneVariantSetsFactoryNode_GetCustomVariantSetUids_Statics::NewProp_OutVariantUids_Inner = { "OutVariantUids", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInterchangeSceneVariantSetsFactoryNode_GetCustomVariantSetUids_Statics::NewProp_OutVariantUids = { "OutVariantUids", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeSceneVariantSetsFactoryNode_eventGetCustomVariantSetUids_Parms, OutVariantUids), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeSceneVariantSetsFactoryNode_GetCustomVariantSetUids_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSceneVariantSetsFactoryNode_GetCustomVariantSetUids_Statics::NewProp_OutVariantUids_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSceneVariantSetsFactoryNode_GetCustomVariantSetUids_Statics::NewProp_OutVariantUids,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeSceneVariantSetsFactoryNode_GetCustomVariantSetUids_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | SceneVariantSetFactory" },
		{ "Comment", "/**\n\x09 * This function allow to retrieve all the translated VariantSets' unique ids for this object.\n\x09 */" },
		{ "ModuleRelativePath", "Public/InterchangeSceneVariantSetsFactoryNode.h" },
		{ "ToolTip", "This function allow to retrieve all the translated VariantSets' unique ids for this object." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeSceneVariantSetsFactoryNode_GetCustomVariantSetUids_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeSceneVariantSetsFactoryNode, nullptr, "GetCustomVariantSetUids", nullptr, nullptr, Z_Construct_UFunction_UInterchangeSceneVariantSetsFactoryNode_GetCustomVariantSetUids_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSceneVariantSetsFactoryNode_GetCustomVariantSetUids_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeSceneVariantSetsFactoryNode_GetCustomVariantSetUids_Statics::InterchangeSceneVariantSetsFactoryNode_eventGetCustomVariantSetUids_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSceneVariantSetsFactoryNode_GetCustomVariantSetUids_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeSceneVariantSetsFactoryNode_GetCustomVariantSetUids_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSceneVariantSetsFactoryNode_GetCustomVariantSetUids_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UInterchangeSceneVariantSetsFactoryNode_GetCustomVariantSetUids_Statics::InterchangeSceneVariantSetsFactoryNode_eventGetCustomVariantSetUids_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UInterchangeSceneVariantSetsFactoryNode_GetCustomVariantSetUids()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeSceneVariantSetsFactoryNode_GetCustomVariantSetUids_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeSceneVariantSetsFactoryNode_GetObjectClass_Statics
	{
		struct InterchangeSceneVariantSetsFactoryNode_eventGetObjectClass_Parms
		{
			UClass* ReturnValue;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UInterchangeSceneVariantSetsFactoryNode_GetObjectClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeSceneVariantSetsFactoryNode_eventGetObjectClass_Parms, ReturnValue), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeSceneVariantSetsFactoryNode_GetObjectClass_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSceneVariantSetsFactoryNode_GetObjectClass_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeSceneVariantSetsFactoryNode_GetObjectClass_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | SceneVariantSetFactory" },
		{ "Comment", "/** Get the class this node want to create */" },
		{ "ModuleRelativePath", "Public/InterchangeSceneVariantSetsFactoryNode.h" },
		{ "ToolTip", "Get the class this node want to create" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeSceneVariantSetsFactoryNode_GetObjectClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeSceneVariantSetsFactoryNode, nullptr, "GetObjectClass", nullptr, nullptr, Z_Construct_UFunction_UInterchangeSceneVariantSetsFactoryNode_GetObjectClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSceneVariantSetsFactoryNode_GetObjectClass_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeSceneVariantSetsFactoryNode_GetObjectClass_Statics::InterchangeSceneVariantSetsFactoryNode_eventGetObjectClass_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSceneVariantSetsFactoryNode_GetObjectClass_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeSceneVariantSetsFactoryNode_GetObjectClass_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSceneVariantSetsFactoryNode_GetObjectClass_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UInterchangeSceneVariantSetsFactoryNode_GetObjectClass_Statics::InterchangeSceneVariantSetsFactoryNode_eventGetObjectClass_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UInterchangeSceneVariantSetsFactoryNode_GetObjectClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeSceneVariantSetsFactoryNode_GetObjectClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeSceneVariantSetsFactoryNode_RemoveCustomVariantSetUid_Statics
	{
		struct InterchangeSceneVariantSetsFactoryNode_eventRemoveCustomVariantSetUid_Parms
		{
			FString VariantUid;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VariantUid_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_VariantUid;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeSceneVariantSetsFactoryNode_RemoveCustomVariantSetUid_Statics::NewProp_VariantUid_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeSceneVariantSetsFactoryNode_RemoveCustomVariantSetUid_Statics::NewProp_VariantUid = { "VariantUid", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeSceneVariantSetsFactoryNode_eventRemoveCustomVariantSetUid_Parms, VariantUid), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSceneVariantSetsFactoryNode_RemoveCustomVariantSetUid_Statics::NewProp_VariantUid_MetaData), Z_Construct_UFunction_UInterchangeSceneVariantSetsFactoryNode_RemoveCustomVariantSetUid_Statics::NewProp_VariantUid_MetaData) };
	void Z_Construct_UFunction_UInterchangeSceneVariantSetsFactoryNode_RemoveCustomVariantSetUid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeSceneVariantSetsFactoryNode_eventRemoveCustomVariantSetUid_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeSceneVariantSetsFactoryNode_RemoveCustomVariantSetUid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeSceneVariantSetsFactoryNode_eventRemoveCustomVariantSetUid_Parms), &Z_Construct_UFunction_UInterchangeSceneVariantSetsFactoryNode_RemoveCustomVariantSetUid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeSceneVariantSetsFactoryNode_RemoveCustomVariantSetUid_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSceneVariantSetsFactoryNode_RemoveCustomVariantSetUid_Statics::NewProp_VariantUid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSceneVariantSetsFactoryNode_RemoveCustomVariantSetUid_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeSceneVariantSetsFactoryNode_RemoveCustomVariantSetUid_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | SceneVariantSetFactory" },
		{ "Comment", "/**\n\x09 * Remove one translated VariantSet's unique id from this object.\n\x09 */" },
		{ "ModuleRelativePath", "Public/InterchangeSceneVariantSetsFactoryNode.h" },
		{ "ToolTip", "Remove one translated VariantSet's unique id from this object." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeSceneVariantSetsFactoryNode_RemoveCustomVariantSetUid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeSceneVariantSetsFactoryNode, nullptr, "RemoveCustomVariantSetUid", nullptr, nullptr, Z_Construct_UFunction_UInterchangeSceneVariantSetsFactoryNode_RemoveCustomVariantSetUid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSceneVariantSetsFactoryNode_RemoveCustomVariantSetUid_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeSceneVariantSetsFactoryNode_RemoveCustomVariantSetUid_Statics::InterchangeSceneVariantSetsFactoryNode_eventRemoveCustomVariantSetUid_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSceneVariantSetsFactoryNode_RemoveCustomVariantSetUid_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeSceneVariantSetsFactoryNode_RemoveCustomVariantSetUid_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSceneVariantSetsFactoryNode_RemoveCustomVariantSetUid_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UInterchangeSceneVariantSetsFactoryNode_RemoveCustomVariantSetUid_Statics::InterchangeSceneVariantSetsFactoryNode_eventRemoveCustomVariantSetUid_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UInterchangeSceneVariantSetsFactoryNode_RemoveCustomVariantSetUid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeSceneVariantSetsFactoryNode_RemoveCustomVariantSetUid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInterchangeSceneVariantSetsFactoryNode);
	UClass* Z_Construct_UClass_UInterchangeSceneVariantSetsFactoryNode_NoRegister()
	{
		return UInterchangeSceneVariantSetsFactoryNode::StaticClass();
	}
	struct Z_Construct_UClass_UInterchangeSceneVariantSetsFactoryNode_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInterchangeSceneVariantSetsFactoryNode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterchangeFactoryBaseNode,
		(UObject* (*)())Z_Construct_UPackage__Script_InterchangeFactoryNodes,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeSceneVariantSetsFactoryNode_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UInterchangeSceneVariantSetsFactoryNode_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UInterchangeSceneVariantSetsFactoryNode_AddCustomVariantSetUid, "AddCustomVariantSetUid" }, // 2387000730
		{ &Z_Construct_UFunction_UInterchangeSceneVariantSetsFactoryNode_GetCustomVariantSetUid, "GetCustomVariantSetUid" }, // 3783841859
		{ &Z_Construct_UFunction_UInterchangeSceneVariantSetsFactoryNode_GetCustomVariantSetUidCount, "GetCustomVariantSetUidCount" }, // 983058627
		{ &Z_Construct_UFunction_UInterchangeSceneVariantSetsFactoryNode_GetCustomVariantSetUids, "GetCustomVariantSetUids" }, // 3319114035
		{ &Z_Construct_UFunction_UInterchangeSceneVariantSetsFactoryNode_GetObjectClass, "GetObjectClass" }, // 938959802
		{ &Z_Construct_UFunction_UInterchangeSceneVariantSetsFactoryNode_RemoveCustomVariantSetUid, "RemoveCustomVariantSetUid" }, // 1903587164
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeSceneVariantSetsFactoryNode_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterchangeSceneVariantSetsFactoryNode_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DevelopmentStatus", "Experimental" },
		{ "IncludePath", "InterchangeSceneVariantSetsFactoryNode.h" },
		{ "ModuleRelativePath", "Public/InterchangeSceneVariantSetsFactoryNode.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInterchangeSceneVariantSetsFactoryNode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterchangeSceneVariantSetsFactoryNode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInterchangeSceneVariantSetsFactoryNode_Statics::ClassParams = {
		&UInterchangeSceneVariantSetsFactoryNode::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeSceneVariantSetsFactoryNode_Statics::Class_MetaDataParams), Z_Construct_UClass_UInterchangeSceneVariantSetsFactoryNode_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UInterchangeSceneVariantSetsFactoryNode()
	{
		if (!Z_Registration_Info_UClass_UInterchangeSceneVariantSetsFactoryNode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInterchangeSceneVariantSetsFactoryNode.OuterSingleton, Z_Construct_UClass_UInterchangeSceneVariantSetsFactoryNode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInterchangeSceneVariantSetsFactoryNode.OuterSingleton;
	}
	template<> INTERCHANGEFACTORYNODES_API UClass* StaticClass<UInterchangeSceneVariantSetsFactoryNode>()
	{
		return UInterchangeSceneVariantSetsFactoryNode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInterchangeSceneVariantSetsFactoryNode);
	UInterchangeSceneVariantSetsFactoryNode::~UInterchangeSceneVariantSetsFactoryNode() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeSceneVariantSetsFactoryNode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeSceneVariantSetsFactoryNode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UInterchangeSceneVariantSetsFactoryNode, UInterchangeSceneVariantSetsFactoryNode::StaticClass, TEXT("UInterchangeSceneVariantSetsFactoryNode"), &Z_Registration_Info_UClass_UInterchangeSceneVariantSetsFactoryNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInterchangeSceneVariantSetsFactoryNode), 1353956739U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeSceneVariantSetsFactoryNode_h_2031255761(TEXT("/Script/InterchangeFactoryNodes"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeSceneVariantSetsFactoryNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeSceneVariantSetsFactoryNode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
