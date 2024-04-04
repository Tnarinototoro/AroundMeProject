// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InterchangeMeshActorFactoryNode.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterchangeMeshActorFactoryNode() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	INTERCHANGEFACTORYNODES_API UClass* Z_Construct_UClass_UInterchangeActorFactoryNode();
	INTERCHANGEFACTORYNODES_API UClass* Z_Construct_UClass_UInterchangeMeshActorFactoryNode();
	INTERCHANGEFACTORYNODES_API UClass* Z_Construct_UClass_UInterchangeMeshActorFactoryNode_NoRegister();
	UPackage* Z_Construct_UPackage__Script_InterchangeFactoryNodes();
// End Cross Module References
	DEFINE_FUNCTION(UInterchangeMeshActorFactoryNode::execSetCustomGeometricTransform)
	{
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_AttributeValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetCustomGeometricTransform(Z_Param_Out_AttributeValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeMeshActorFactoryNode::execGetCustomGeometricTransform)
	{
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_AttributeValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetCustomGeometricTransform(Z_Param_Out_AttributeValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeMeshActorFactoryNode::execGetCustomAnimationAssetUidToPlay)
	{
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_AttributeValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetCustomAnimationAssetUidToPlay(Z_Param_Out_AttributeValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeMeshActorFactoryNode::execSetCustomAnimationAssetUidToPlay)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_AttributeValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetCustomAnimationAssetUidToPlay(Z_Param_AttributeValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeMeshActorFactoryNode::execRemoveSlotMaterialDependencyUid)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_SlotName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RemoveSlotMaterialDependencyUid(Z_Param_SlotName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeMeshActorFactoryNode::execSetSlotMaterialDependencyUid)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_SlotName);
		P_GET_PROPERTY(FStrProperty,Z_Param_MaterialDependencyUid);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetSlotMaterialDependencyUid(Z_Param_SlotName,Z_Param_MaterialDependencyUid);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeMeshActorFactoryNode::execGetSlotMaterialDependencyUid)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_SlotName);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_OutMaterialDependency);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetSlotMaterialDependencyUid(Z_Param_SlotName,Z_Param_Out_OutMaterialDependency);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeMeshActorFactoryNode::execGetSlotMaterialDependencies)
	{
		P_GET_TMAP_REF(FString,FString,Z_Param_Out_OutMaterialDependencies);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetSlotMaterialDependencies(Z_Param_Out_OutMaterialDependencies);
		P_NATIVE_END;
	}
	void UInterchangeMeshActorFactoryNode::StaticRegisterNativesUInterchangeMeshActorFactoryNode()
	{
		UClass* Class = UInterchangeMeshActorFactoryNode::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCustomAnimationAssetUidToPlay", &UInterchangeMeshActorFactoryNode::execGetCustomAnimationAssetUidToPlay },
			{ "GetCustomGeometricTransform", &UInterchangeMeshActorFactoryNode::execGetCustomGeometricTransform },
			{ "GetSlotMaterialDependencies", &UInterchangeMeshActorFactoryNode::execGetSlotMaterialDependencies },
			{ "GetSlotMaterialDependencyUid", &UInterchangeMeshActorFactoryNode::execGetSlotMaterialDependencyUid },
			{ "RemoveSlotMaterialDependencyUid", &UInterchangeMeshActorFactoryNode::execRemoveSlotMaterialDependencyUid },
			{ "SetCustomAnimationAssetUidToPlay", &UInterchangeMeshActorFactoryNode::execSetCustomAnimationAssetUidToPlay },
			{ "SetCustomGeometricTransform", &UInterchangeMeshActorFactoryNode::execSetCustomGeometricTransform },
			{ "SetSlotMaterialDependencyUid", &UInterchangeMeshActorFactoryNode::execSetSlotMaterialDependencyUid },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UInterchangeMeshActorFactoryNode_GetCustomAnimationAssetUidToPlay_Statics
	{
		struct InterchangeMeshActorFactoryNode_eventGetCustomAnimationAssetUidToPlay_Parms
		{
			FString AttributeValue;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_AttributeValue;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeMeshActorFactoryNode_GetCustomAnimationAssetUidToPlay_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeMeshActorFactoryNode_eventGetCustomAnimationAssetUidToPlay_Parms, AttributeValue), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UInterchangeMeshActorFactoryNode_GetCustomAnimationAssetUidToPlay_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeMeshActorFactoryNode_eventGetCustomAnimationAssetUidToPlay_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeMeshActorFactoryNode_GetCustomAnimationAssetUidToPlay_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeMeshActorFactoryNode_eventGetCustomAnimationAssetUidToPlay_Parms), &Z_Construct_UFunction_UInterchangeMeshActorFactoryNode_GetCustomAnimationAssetUidToPlay_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeMeshActorFactoryNode_GetCustomAnimationAssetUidToPlay_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMeshActorFactoryNode_GetCustomAnimationAssetUidToPlay_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMeshActorFactoryNode_GetCustomAnimationAssetUidToPlay_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeMeshActorFactoryNode_GetCustomAnimationAssetUidToPlay_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | SkeletalMesh" },
		{ "Comment", "/** Get the Animation Asset To Play by this Scene Node. */" },
		{ "ModuleRelativePath", "Public/InterchangeMeshActorFactoryNode.h" },
		{ "ToolTip", "Get the Animation Asset To Play by this Scene Node." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeMeshActorFactoryNode_GetCustomAnimationAssetUidToPlay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeMeshActorFactoryNode, nullptr, "GetCustomAnimationAssetUidToPlay", nullptr, nullptr, Z_Construct_UFunction_UInterchangeMeshActorFactoryNode_GetCustomAnimationAssetUidToPlay_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshActorFactoryNode_GetCustomAnimationAssetUidToPlay_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeMeshActorFactoryNode_GetCustomAnimationAssetUidToPlay_Statics::InterchangeMeshActorFactoryNode_eventGetCustomAnimationAssetUidToPlay_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshActorFactoryNode_GetCustomAnimationAssetUidToPlay_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeMeshActorFactoryNode_GetCustomAnimationAssetUidToPlay_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshActorFactoryNode_GetCustomAnimationAssetUidToPlay_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UInterchangeMeshActorFactoryNode_GetCustomAnimationAssetUidToPlay_Statics::InterchangeMeshActorFactoryNode_eventGetCustomAnimationAssetUidToPlay_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UInterchangeMeshActorFactoryNode_GetCustomAnimationAssetUidToPlay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeMeshActorFactoryNode_GetCustomAnimationAssetUidToPlay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeMeshActorFactoryNode_GetCustomGeometricTransform_Statics
	{
		struct InterchangeMeshActorFactoryNode_eventGetCustomGeometricTransform_Parms
		{
			FTransform AttributeValue;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_AttributeValue;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInterchangeMeshActorFactoryNode_GetCustomGeometricTransform_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeMeshActorFactoryNode_eventGetCustomGeometricTransform_Parms, AttributeValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UInterchangeMeshActorFactoryNode_GetCustomGeometricTransform_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeMeshActorFactoryNode_eventGetCustomGeometricTransform_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeMeshActorFactoryNode_GetCustomGeometricTransform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeMeshActorFactoryNode_eventGetCustomGeometricTransform_Parms), &Z_Construct_UFunction_UInterchangeMeshActorFactoryNode_GetCustomGeometricTransform_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeMeshActorFactoryNode_GetCustomGeometricTransform_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMeshActorFactoryNode_GetCustomGeometricTransform_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMeshActorFactoryNode_GetCustomGeometricTransform_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeMeshActorFactoryNode_GetCustomGeometricTransform_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | StaticMesh" },
		{ "Comment", "/** Get the geometric offset. Any mesh attach to this scene node will be offset using this transform. */" },
		{ "ModuleRelativePath", "Public/InterchangeMeshActorFactoryNode.h" },
		{ "ToolTip", "Get the geometric offset. Any mesh attach to this scene node will be offset using this transform." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeMeshActorFactoryNode_GetCustomGeometricTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeMeshActorFactoryNode, nullptr, "GetCustomGeometricTransform", nullptr, nullptr, Z_Construct_UFunction_UInterchangeMeshActorFactoryNode_GetCustomGeometricTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshActorFactoryNode_GetCustomGeometricTransform_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeMeshActorFactoryNode_GetCustomGeometricTransform_Statics::InterchangeMeshActorFactoryNode_eventGetCustomGeometricTransform_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshActorFactoryNode_GetCustomGeometricTransform_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeMeshActorFactoryNode_GetCustomGeometricTransform_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshActorFactoryNode_GetCustomGeometricTransform_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UInterchangeMeshActorFactoryNode_GetCustomGeometricTransform_Statics::InterchangeMeshActorFactoryNode_eventGetCustomGeometricTransform_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UInterchangeMeshActorFactoryNode_GetCustomGeometricTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeMeshActorFactoryNode_GetCustomGeometricTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeMeshActorFactoryNode_GetSlotMaterialDependencies_Statics
	{
		struct InterchangeMeshActorFactoryNode_eventGetSlotMaterialDependencies_Parms
		{
			TMap<FString,FString> OutMaterialDependencies;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_OutMaterialDependencies_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_OutMaterialDependencies_Key_KeyProp;
		static const UECodeGen_Private::FMapPropertyParams NewProp_OutMaterialDependencies;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeMeshActorFactoryNode_GetSlotMaterialDependencies_Statics::NewProp_OutMaterialDependencies_ValueProp = { "OutMaterialDependencies", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeMeshActorFactoryNode_GetSlotMaterialDependencies_Statics::NewProp_OutMaterialDependencies_Key_KeyProp = { "OutMaterialDependencies_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UInterchangeMeshActorFactoryNode_GetSlotMaterialDependencies_Statics::NewProp_OutMaterialDependencies = { "OutMaterialDependencies", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeMeshActorFactoryNode_eventGetSlotMaterialDependencies_Parms, OutMaterialDependencies), EMapPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeMeshActorFactoryNode_GetSlotMaterialDependencies_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMeshActorFactoryNode_GetSlotMaterialDependencies_Statics::NewProp_OutMaterialDependencies_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMeshActorFactoryNode_GetSlotMaterialDependencies_Statics::NewProp_OutMaterialDependencies_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMeshActorFactoryNode_GetSlotMaterialDependencies_Statics::NewProp_OutMaterialDependencies,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeMeshActorFactoryNode_GetSlotMaterialDependencies_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | StaticMesh" },
		{ "Comment", "/**\n\x09 * Allow to retrieve the correspondence table between slot names and assigned materials for this object.\n\x09 */" },
		{ "ModuleRelativePath", "Public/InterchangeMeshActorFactoryNode.h" },
		{ "ToolTip", "Allow to retrieve the correspondence table between slot names and assigned materials for this object." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeMeshActorFactoryNode_GetSlotMaterialDependencies_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeMeshActorFactoryNode, nullptr, "GetSlotMaterialDependencies", nullptr, nullptr, Z_Construct_UFunction_UInterchangeMeshActorFactoryNode_GetSlotMaterialDependencies_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshActorFactoryNode_GetSlotMaterialDependencies_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeMeshActorFactoryNode_GetSlotMaterialDependencies_Statics::InterchangeMeshActorFactoryNode_eventGetSlotMaterialDependencies_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshActorFactoryNode_GetSlotMaterialDependencies_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeMeshActorFactoryNode_GetSlotMaterialDependencies_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshActorFactoryNode_GetSlotMaterialDependencies_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UInterchangeMeshActorFactoryNode_GetSlotMaterialDependencies_Statics::InterchangeMeshActorFactoryNode_eventGetSlotMaterialDependencies_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UInterchangeMeshActorFactoryNode_GetSlotMaterialDependencies()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeMeshActorFactoryNode_GetSlotMaterialDependencies_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeMeshActorFactoryNode_GetSlotMaterialDependencyUid_Statics
	{
		struct InterchangeMeshActorFactoryNode_eventGetSlotMaterialDependencyUid_Parms
		{
			FString SlotName;
			FString OutMaterialDependency;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SlotName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SlotName;
		static const UECodeGen_Private::FStrPropertyParams NewProp_OutMaterialDependency;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeMeshActorFactoryNode_GetSlotMaterialDependencyUid_Statics::NewProp_SlotName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeMeshActorFactoryNode_GetSlotMaterialDependencyUid_Statics::NewProp_SlotName = { "SlotName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeMeshActorFactoryNode_eventGetSlotMaterialDependencyUid_Parms, SlotName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshActorFactoryNode_GetSlotMaterialDependencyUid_Statics::NewProp_SlotName_MetaData), Z_Construct_UFunction_UInterchangeMeshActorFactoryNode_GetSlotMaterialDependencyUid_Statics::NewProp_SlotName_MetaData) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeMeshActorFactoryNode_GetSlotMaterialDependencyUid_Statics::NewProp_OutMaterialDependency = { "OutMaterialDependency", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeMeshActorFactoryNode_eventGetSlotMaterialDependencyUid_Parms, OutMaterialDependency), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UInterchangeMeshActorFactoryNode_GetSlotMaterialDependencyUid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeMeshActorFactoryNode_eventGetSlotMaterialDependencyUid_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeMeshActorFactoryNode_GetSlotMaterialDependencyUid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeMeshActorFactoryNode_eventGetSlotMaterialDependencyUid_Parms), &Z_Construct_UFunction_UInterchangeMeshActorFactoryNode_GetSlotMaterialDependencyUid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeMeshActorFactoryNode_GetSlotMaterialDependencyUid_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMeshActorFactoryNode_GetSlotMaterialDependencyUid_Statics::NewProp_SlotName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMeshActorFactoryNode_GetSlotMaterialDependencyUid_Statics::NewProp_OutMaterialDependency,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMeshActorFactoryNode_GetSlotMaterialDependencyUid_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeMeshActorFactoryNode_GetSlotMaterialDependencyUid_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | StaticMesh" },
		{ "Comment", "/**\n\x09 * Allow to retrieve one Material dependency for a given slot of this object.\n\x09 */" },
		{ "ModuleRelativePath", "Public/InterchangeMeshActorFactoryNode.h" },
		{ "ToolTip", "Allow to retrieve one Material dependency for a given slot of this object." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeMeshActorFactoryNode_GetSlotMaterialDependencyUid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeMeshActorFactoryNode, nullptr, "GetSlotMaterialDependencyUid", nullptr, nullptr, Z_Construct_UFunction_UInterchangeMeshActorFactoryNode_GetSlotMaterialDependencyUid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshActorFactoryNode_GetSlotMaterialDependencyUid_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeMeshActorFactoryNode_GetSlotMaterialDependencyUid_Statics::InterchangeMeshActorFactoryNode_eventGetSlotMaterialDependencyUid_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshActorFactoryNode_GetSlotMaterialDependencyUid_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeMeshActorFactoryNode_GetSlotMaterialDependencyUid_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshActorFactoryNode_GetSlotMaterialDependencyUid_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UInterchangeMeshActorFactoryNode_GetSlotMaterialDependencyUid_Statics::InterchangeMeshActorFactoryNode_eventGetSlotMaterialDependencyUid_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UInterchangeMeshActorFactoryNode_GetSlotMaterialDependencyUid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeMeshActorFactoryNode_GetSlotMaterialDependencyUid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeMeshActorFactoryNode_RemoveSlotMaterialDependencyUid_Statics
	{
		struct InterchangeMeshActorFactoryNode_eventRemoveSlotMaterialDependencyUid_Parms
		{
			FString SlotName;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SlotName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SlotName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeMeshActorFactoryNode_RemoveSlotMaterialDependencyUid_Statics::NewProp_SlotName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeMeshActorFactoryNode_RemoveSlotMaterialDependencyUid_Statics::NewProp_SlotName = { "SlotName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeMeshActorFactoryNode_eventRemoveSlotMaterialDependencyUid_Parms, SlotName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshActorFactoryNode_RemoveSlotMaterialDependencyUid_Statics::NewProp_SlotName_MetaData), Z_Construct_UFunction_UInterchangeMeshActorFactoryNode_RemoveSlotMaterialDependencyUid_Statics::NewProp_SlotName_MetaData) };
	void Z_Construct_UFunction_UInterchangeMeshActorFactoryNode_RemoveSlotMaterialDependencyUid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeMeshActorFactoryNode_eventRemoveSlotMaterialDependencyUid_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeMeshActorFactoryNode_RemoveSlotMaterialDependencyUid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeMeshActorFactoryNode_eventRemoveSlotMaterialDependencyUid_Parms), &Z_Construct_UFunction_UInterchangeMeshActorFactoryNode_RemoveSlotMaterialDependencyUid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeMeshActorFactoryNode_RemoveSlotMaterialDependencyUid_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMeshActorFactoryNode_RemoveSlotMaterialDependencyUid_Statics::NewProp_SlotName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMeshActorFactoryNode_RemoveSlotMaterialDependencyUid_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeMeshActorFactoryNode_RemoveSlotMaterialDependencyUid_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | StaticMesh" },
		{ "Comment", "/**\n\x09 * Remove the Material dependency associated with the given slot name from this object.\n\x09 */" },
		{ "ModuleRelativePath", "Public/InterchangeMeshActorFactoryNode.h" },
		{ "ToolTip", "Remove the Material dependency associated with the given slot name from this object." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeMeshActorFactoryNode_RemoveSlotMaterialDependencyUid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeMeshActorFactoryNode, nullptr, "RemoveSlotMaterialDependencyUid", nullptr, nullptr, Z_Construct_UFunction_UInterchangeMeshActorFactoryNode_RemoveSlotMaterialDependencyUid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshActorFactoryNode_RemoveSlotMaterialDependencyUid_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeMeshActorFactoryNode_RemoveSlotMaterialDependencyUid_Statics::InterchangeMeshActorFactoryNode_eventRemoveSlotMaterialDependencyUid_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshActorFactoryNode_RemoveSlotMaterialDependencyUid_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeMeshActorFactoryNode_RemoveSlotMaterialDependencyUid_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshActorFactoryNode_RemoveSlotMaterialDependencyUid_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UInterchangeMeshActorFactoryNode_RemoveSlotMaterialDependencyUid_Statics::InterchangeMeshActorFactoryNode_eventRemoveSlotMaterialDependencyUid_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UInterchangeMeshActorFactoryNode_RemoveSlotMaterialDependencyUid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeMeshActorFactoryNode_RemoveSlotMaterialDependencyUid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeMeshActorFactoryNode_SetCustomAnimationAssetUidToPlay_Statics
	{
		struct InterchangeMeshActorFactoryNode_eventSetCustomAnimationAssetUidToPlay_Parms
		{
			FString AttributeValue;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeValue_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_AttributeValue;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeMeshActorFactoryNode_SetCustomAnimationAssetUidToPlay_Statics::NewProp_AttributeValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeMeshActorFactoryNode_SetCustomAnimationAssetUidToPlay_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeMeshActorFactoryNode_eventSetCustomAnimationAssetUidToPlay_Parms, AttributeValue), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshActorFactoryNode_SetCustomAnimationAssetUidToPlay_Statics::NewProp_AttributeValue_MetaData), Z_Construct_UFunction_UInterchangeMeshActorFactoryNode_SetCustomAnimationAssetUidToPlay_Statics::NewProp_AttributeValue_MetaData) };
	void Z_Construct_UFunction_UInterchangeMeshActorFactoryNode_SetCustomAnimationAssetUidToPlay_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeMeshActorFactoryNode_eventSetCustomAnimationAssetUidToPlay_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeMeshActorFactoryNode_SetCustomAnimationAssetUidToPlay_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeMeshActorFactoryNode_eventSetCustomAnimationAssetUidToPlay_Parms), &Z_Construct_UFunction_UInterchangeMeshActorFactoryNode_SetCustomAnimationAssetUidToPlay_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeMeshActorFactoryNode_SetCustomAnimationAssetUidToPlay_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMeshActorFactoryNode_SetCustomAnimationAssetUidToPlay_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMeshActorFactoryNode_SetCustomAnimationAssetUidToPlay_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeMeshActorFactoryNode_SetCustomAnimationAssetUidToPlay_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | SkeletalMesh" },
		{ "Comment", "/** Set the Animation Asset To Play by this Scene Node. (only relevant for SkeletalMeshActors (SceneNodes that are instantiating Skeletal Meshes)) */" },
		{ "ModuleRelativePath", "Public/InterchangeMeshActorFactoryNode.h" },
		{ "ToolTip", "Set the Animation Asset To Play by this Scene Node. (only relevant for SkeletalMeshActors (SceneNodes that are instantiating Skeletal Meshes))" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeMeshActorFactoryNode_SetCustomAnimationAssetUidToPlay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeMeshActorFactoryNode, nullptr, "SetCustomAnimationAssetUidToPlay", nullptr, nullptr, Z_Construct_UFunction_UInterchangeMeshActorFactoryNode_SetCustomAnimationAssetUidToPlay_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshActorFactoryNode_SetCustomAnimationAssetUidToPlay_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeMeshActorFactoryNode_SetCustomAnimationAssetUidToPlay_Statics::InterchangeMeshActorFactoryNode_eventSetCustomAnimationAssetUidToPlay_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshActorFactoryNode_SetCustomAnimationAssetUidToPlay_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeMeshActorFactoryNode_SetCustomAnimationAssetUidToPlay_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshActorFactoryNode_SetCustomAnimationAssetUidToPlay_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UInterchangeMeshActorFactoryNode_SetCustomAnimationAssetUidToPlay_Statics::InterchangeMeshActorFactoryNode_eventSetCustomAnimationAssetUidToPlay_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UInterchangeMeshActorFactoryNode_SetCustomAnimationAssetUidToPlay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeMeshActorFactoryNode_SetCustomAnimationAssetUidToPlay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeMeshActorFactoryNode_SetCustomGeometricTransform_Statics
	{
		struct InterchangeMeshActorFactoryNode_eventSetCustomGeometricTransform_Parms
		{
			FTransform AttributeValue;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AttributeValue;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeMeshActorFactoryNode_SetCustomGeometricTransform_Statics::NewProp_AttributeValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInterchangeMeshActorFactoryNode_SetCustomGeometricTransform_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeMeshActorFactoryNode_eventSetCustomGeometricTransform_Parms, AttributeValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshActorFactoryNode_SetCustomGeometricTransform_Statics::NewProp_AttributeValue_MetaData), Z_Construct_UFunction_UInterchangeMeshActorFactoryNode_SetCustomGeometricTransform_Statics::NewProp_AttributeValue_MetaData) };
	void Z_Construct_UFunction_UInterchangeMeshActorFactoryNode_SetCustomGeometricTransform_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeMeshActorFactoryNode_eventSetCustomGeometricTransform_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeMeshActorFactoryNode_SetCustomGeometricTransform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeMeshActorFactoryNode_eventSetCustomGeometricTransform_Parms), &Z_Construct_UFunction_UInterchangeMeshActorFactoryNode_SetCustomGeometricTransform_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeMeshActorFactoryNode_SetCustomGeometricTransform_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMeshActorFactoryNode_SetCustomGeometricTransform_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMeshActorFactoryNode_SetCustomGeometricTransform_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeMeshActorFactoryNode_SetCustomGeometricTransform_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | StaticMesh" },
		{ "Comment", "/** Set the geometric offset. Any mesh attach to this scene node will be offset using this transform. */" },
		{ "ModuleRelativePath", "Public/InterchangeMeshActorFactoryNode.h" },
		{ "ToolTip", "Set the geometric offset. Any mesh attach to this scene node will be offset using this transform." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeMeshActorFactoryNode_SetCustomGeometricTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeMeshActorFactoryNode, nullptr, "SetCustomGeometricTransform", nullptr, nullptr, Z_Construct_UFunction_UInterchangeMeshActorFactoryNode_SetCustomGeometricTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshActorFactoryNode_SetCustomGeometricTransform_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeMeshActorFactoryNode_SetCustomGeometricTransform_Statics::InterchangeMeshActorFactoryNode_eventSetCustomGeometricTransform_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshActorFactoryNode_SetCustomGeometricTransform_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeMeshActorFactoryNode_SetCustomGeometricTransform_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshActorFactoryNode_SetCustomGeometricTransform_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UInterchangeMeshActorFactoryNode_SetCustomGeometricTransform_Statics::InterchangeMeshActorFactoryNode_eventSetCustomGeometricTransform_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UInterchangeMeshActorFactoryNode_SetCustomGeometricTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeMeshActorFactoryNode_SetCustomGeometricTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeMeshActorFactoryNode_SetSlotMaterialDependencyUid_Statics
	{
		struct InterchangeMeshActorFactoryNode_eventSetSlotMaterialDependencyUid_Parms
		{
			FString SlotName;
			FString MaterialDependencyUid;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SlotName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SlotName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaterialDependencyUid_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_MaterialDependencyUid;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeMeshActorFactoryNode_SetSlotMaterialDependencyUid_Statics::NewProp_SlotName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeMeshActorFactoryNode_SetSlotMaterialDependencyUid_Statics::NewProp_SlotName = { "SlotName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeMeshActorFactoryNode_eventSetSlotMaterialDependencyUid_Parms, SlotName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshActorFactoryNode_SetSlotMaterialDependencyUid_Statics::NewProp_SlotName_MetaData), Z_Construct_UFunction_UInterchangeMeshActorFactoryNode_SetSlotMaterialDependencyUid_Statics::NewProp_SlotName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeMeshActorFactoryNode_SetSlotMaterialDependencyUid_Statics::NewProp_MaterialDependencyUid_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeMeshActorFactoryNode_SetSlotMaterialDependencyUid_Statics::NewProp_MaterialDependencyUid = { "MaterialDependencyUid", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeMeshActorFactoryNode_eventSetSlotMaterialDependencyUid_Parms, MaterialDependencyUid), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshActorFactoryNode_SetSlotMaterialDependencyUid_Statics::NewProp_MaterialDependencyUid_MetaData), Z_Construct_UFunction_UInterchangeMeshActorFactoryNode_SetSlotMaterialDependencyUid_Statics::NewProp_MaterialDependencyUid_MetaData) };
	void Z_Construct_UFunction_UInterchangeMeshActorFactoryNode_SetSlotMaterialDependencyUid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeMeshActorFactoryNode_eventSetSlotMaterialDependencyUid_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeMeshActorFactoryNode_SetSlotMaterialDependencyUid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeMeshActorFactoryNode_eventSetSlotMaterialDependencyUid_Parms), &Z_Construct_UFunction_UInterchangeMeshActorFactoryNode_SetSlotMaterialDependencyUid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeMeshActorFactoryNode_SetSlotMaterialDependencyUid_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMeshActorFactoryNode_SetSlotMaterialDependencyUid_Statics::NewProp_SlotName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMeshActorFactoryNode_SetSlotMaterialDependencyUid_Statics::NewProp_MaterialDependencyUid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMeshActorFactoryNode_SetSlotMaterialDependencyUid_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeMeshActorFactoryNode_SetSlotMaterialDependencyUid_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | StaticMesh" },
		{ "Comment", "/**\n\x09 * Add one Material dependency to a specific slot name of this object.\n\x09 */" },
		{ "ModuleRelativePath", "Public/InterchangeMeshActorFactoryNode.h" },
		{ "ToolTip", "Add one Material dependency to a specific slot name of this object." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeMeshActorFactoryNode_SetSlotMaterialDependencyUid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeMeshActorFactoryNode, nullptr, "SetSlotMaterialDependencyUid", nullptr, nullptr, Z_Construct_UFunction_UInterchangeMeshActorFactoryNode_SetSlotMaterialDependencyUid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshActorFactoryNode_SetSlotMaterialDependencyUid_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeMeshActorFactoryNode_SetSlotMaterialDependencyUid_Statics::InterchangeMeshActorFactoryNode_eventSetSlotMaterialDependencyUid_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshActorFactoryNode_SetSlotMaterialDependencyUid_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeMeshActorFactoryNode_SetSlotMaterialDependencyUid_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshActorFactoryNode_SetSlotMaterialDependencyUid_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UInterchangeMeshActorFactoryNode_SetSlotMaterialDependencyUid_Statics::InterchangeMeshActorFactoryNode_eventSetSlotMaterialDependencyUid_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UInterchangeMeshActorFactoryNode_SetSlotMaterialDependencyUid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeMeshActorFactoryNode_SetSlotMaterialDependencyUid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInterchangeMeshActorFactoryNode);
	UClass* Z_Construct_UClass_UInterchangeMeshActorFactoryNode_NoRegister()
	{
		return UInterchangeMeshActorFactoryNode::StaticClass();
	}
	struct Z_Construct_UClass_UInterchangeMeshActorFactoryNode_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInterchangeMeshActorFactoryNode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterchangeActorFactoryNode,
		(UObject* (*)())Z_Construct_UPackage__Script_InterchangeFactoryNodes,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeMeshActorFactoryNode_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UInterchangeMeshActorFactoryNode_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UInterchangeMeshActorFactoryNode_GetCustomAnimationAssetUidToPlay, "GetCustomAnimationAssetUidToPlay" }, // 3639235160
		{ &Z_Construct_UFunction_UInterchangeMeshActorFactoryNode_GetCustomGeometricTransform, "GetCustomGeometricTransform" }, // 4170658717
		{ &Z_Construct_UFunction_UInterchangeMeshActorFactoryNode_GetSlotMaterialDependencies, "GetSlotMaterialDependencies" }, // 868527277
		{ &Z_Construct_UFunction_UInterchangeMeshActorFactoryNode_GetSlotMaterialDependencyUid, "GetSlotMaterialDependencyUid" }, // 3029169906
		{ &Z_Construct_UFunction_UInterchangeMeshActorFactoryNode_RemoveSlotMaterialDependencyUid, "RemoveSlotMaterialDependencyUid" }, // 2135849287
		{ &Z_Construct_UFunction_UInterchangeMeshActorFactoryNode_SetCustomAnimationAssetUidToPlay, "SetCustomAnimationAssetUidToPlay" }, // 1766167637
		{ &Z_Construct_UFunction_UInterchangeMeshActorFactoryNode_SetCustomGeometricTransform, "SetCustomGeometricTransform" }, // 2466862293
		{ &Z_Construct_UFunction_UInterchangeMeshActorFactoryNode_SetSlotMaterialDependencyUid, "SetSlotMaterialDependencyUid" }, // 3914862429
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeMeshActorFactoryNode_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterchangeMeshActorFactoryNode_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DevelopmentStatus", "Experimental" },
		{ "IncludePath", "InterchangeMeshActorFactoryNode.h" },
		{ "ModuleRelativePath", "Public/InterchangeMeshActorFactoryNode.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInterchangeMeshActorFactoryNode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterchangeMeshActorFactoryNode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInterchangeMeshActorFactoryNode_Statics::ClassParams = {
		&UInterchangeMeshActorFactoryNode::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeMeshActorFactoryNode_Statics::Class_MetaDataParams), Z_Construct_UClass_UInterchangeMeshActorFactoryNode_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UInterchangeMeshActorFactoryNode()
	{
		if (!Z_Registration_Info_UClass_UInterchangeMeshActorFactoryNode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInterchangeMeshActorFactoryNode.OuterSingleton, Z_Construct_UClass_UInterchangeMeshActorFactoryNode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInterchangeMeshActorFactoryNode.OuterSingleton;
	}
	template<> INTERCHANGEFACTORYNODES_API UClass* StaticClass<UInterchangeMeshActorFactoryNode>()
	{
		return UInterchangeMeshActorFactoryNode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInterchangeMeshActorFactoryNode);
	UInterchangeMeshActorFactoryNode::~UInterchangeMeshActorFactoryNode() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UInterchangeMeshActorFactoryNode)
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeMeshActorFactoryNode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeMeshActorFactoryNode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UInterchangeMeshActorFactoryNode, UInterchangeMeshActorFactoryNode::StaticClass, TEXT("UInterchangeMeshActorFactoryNode"), &Z_Registration_Info_UClass_UInterchangeMeshActorFactoryNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInterchangeMeshActorFactoryNode), 2450652014U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeMeshActorFactoryNode_h_4066017862(TEXT("/Script/InterchangeFactoryNodes"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeMeshActorFactoryNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeMeshActorFactoryNode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
