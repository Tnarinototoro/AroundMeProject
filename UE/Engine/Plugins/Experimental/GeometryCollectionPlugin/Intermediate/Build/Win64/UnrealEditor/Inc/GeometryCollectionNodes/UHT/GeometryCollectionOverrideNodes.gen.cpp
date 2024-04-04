// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Dataflow/GeometryCollectionOverrideNodes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGeometryCollectionOverrideNodes() {}
// Cross Module References
	DATAFLOWCORE_API UScriptStruct* Z_Construct_UScriptStruct_FDataflowOverrideNode();
	GEOMETRYCOLLECTIONNODES_API UScriptStruct* Z_Construct_UScriptStruct_FGetBoolOverrideFromAssetDataflowNode();
	GEOMETRYCOLLECTIONNODES_API UScriptStruct* Z_Construct_UScriptStruct_FGetFloatOverrideFromAssetDataflowNode();
	GEOMETRYCOLLECTIONNODES_API UScriptStruct* Z_Construct_UScriptStruct_FGetIntOverrideFromAssetDataflowNode();
	GEOMETRYCOLLECTIONNODES_API UScriptStruct* Z_Construct_UScriptStruct_FGetStringOverrideFromAssetDataflowNode();
	UPackage* Z_Construct_UPackage__Script_GeometryCollectionNodes();
// End Cross Module References

static_assert(std::is_polymorphic<FGetFloatOverrideFromAssetDataflowNode>() == std::is_polymorphic<FDataflowOverrideNode>(), "USTRUCT FGetFloatOverrideFromAssetDataflowNode cannot be polymorphic unless super FDataflowOverrideNode is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GetFloatOverrideFromAssetDataflowNode;
class UScriptStruct* FGetFloatOverrideFromAssetDataflowNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GetFloatOverrideFromAssetDataflowNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GetFloatOverrideFromAssetDataflowNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGetFloatOverrideFromAssetDataflowNode, (UObject*)Z_Construct_UPackage__Script_GeometryCollectionNodes(), TEXT("GetFloatOverrideFromAssetDataflowNode"));
	}
	return Z_Registration_Info_UScriptStruct_GetFloatOverrideFromAssetDataflowNode.OuterSingleton;
}
template<> GEOMETRYCOLLECTIONNODES_API UScriptStruct* StaticStruct<FGetFloatOverrideFromAssetDataflowNode>()
{
	return FGetFloatOverrideFromAssetDataflowNode::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGetFloatOverrideFromAssetDataflowNode_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Float_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Float;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FloatDefault_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FloatDefault;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGetFloatOverrideFromAssetDataflowNode_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n *\n * \n *\n */" },
		{ "DataflowGeometryCollection", "" },
		{ "DataflowOverride", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionOverrideNodes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGetFloatOverrideFromAssetDataflowNode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGetFloatOverrideFromAssetDataflowNode>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGetFloatOverrideFromAssetDataflowNode_Statics::NewProp_Float_MetaData[] = {
		{ "DataflowOutput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionOverrideNodes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGetFloatOverrideFromAssetDataflowNode_Statics::NewProp_Float = { "Float", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGetFloatOverrideFromAssetDataflowNode, Float), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGetFloatOverrideFromAssetDataflowNode_Statics::NewProp_Float_MetaData), Z_Construct_UScriptStruct_FGetFloatOverrideFromAssetDataflowNode_Statics::NewProp_Float_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGetFloatOverrideFromAssetDataflowNode_Statics::NewProp_FloatDefault_MetaData[] = {
		{ "DataflowOutput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionOverrideNodes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGetFloatOverrideFromAssetDataflowNode_Statics::NewProp_FloatDefault = { "FloatDefault", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGetFloatOverrideFromAssetDataflowNode, FloatDefault), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGetFloatOverrideFromAssetDataflowNode_Statics::NewProp_FloatDefault_MetaData), Z_Construct_UScriptStruct_FGetFloatOverrideFromAssetDataflowNode_Statics::NewProp_FloatDefault_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGetFloatOverrideFromAssetDataflowNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGetFloatOverrideFromAssetDataflowNode_Statics::NewProp_Float,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGetFloatOverrideFromAssetDataflowNode_Statics::NewProp_FloatDefault,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGetFloatOverrideFromAssetDataflowNode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryCollectionNodes,
		Z_Construct_UScriptStruct_FDataflowOverrideNode,
		&NewStructOps,
		"GetFloatOverrideFromAssetDataflowNode",
		Z_Construct_UScriptStruct_FGetFloatOverrideFromAssetDataflowNode_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGetFloatOverrideFromAssetDataflowNode_Statics::PropPointers),
		sizeof(FGetFloatOverrideFromAssetDataflowNode),
		alignof(FGetFloatOverrideFromAssetDataflowNode),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGetFloatOverrideFromAssetDataflowNode_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGetFloatOverrideFromAssetDataflowNode_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGetFloatOverrideFromAssetDataflowNode_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FGetFloatOverrideFromAssetDataflowNode()
	{
		if (!Z_Registration_Info_UScriptStruct_GetFloatOverrideFromAssetDataflowNode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GetFloatOverrideFromAssetDataflowNode.InnerSingleton, Z_Construct_UScriptStruct_FGetFloatOverrideFromAssetDataflowNode_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GetFloatOverrideFromAssetDataflowNode.InnerSingleton;
	}

static_assert(std::is_polymorphic<FGetIntOverrideFromAssetDataflowNode>() == std::is_polymorphic<FDataflowOverrideNode>(), "USTRUCT FGetIntOverrideFromAssetDataflowNode cannot be polymorphic unless super FDataflowOverrideNode is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GetIntOverrideFromAssetDataflowNode;
class UScriptStruct* FGetIntOverrideFromAssetDataflowNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GetIntOverrideFromAssetDataflowNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GetIntOverrideFromAssetDataflowNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGetIntOverrideFromAssetDataflowNode, (UObject*)Z_Construct_UPackage__Script_GeometryCollectionNodes(), TEXT("GetIntOverrideFromAssetDataflowNode"));
	}
	return Z_Registration_Info_UScriptStruct_GetIntOverrideFromAssetDataflowNode.OuterSingleton;
}
template<> GEOMETRYCOLLECTIONNODES_API UScriptStruct* StaticStruct<FGetIntOverrideFromAssetDataflowNode>()
{
	return FGetIntOverrideFromAssetDataflowNode::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGetIntOverrideFromAssetDataflowNode_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Int_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Int;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IntDefault_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_IntDefault;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGetIntOverrideFromAssetDataflowNode_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n *\n *\n *\n */" },
		{ "DataflowGeometryCollection", "" },
		{ "DataflowOverride", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionOverrideNodes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGetIntOverrideFromAssetDataflowNode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGetIntOverrideFromAssetDataflowNode>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGetIntOverrideFromAssetDataflowNode_Statics::NewProp_Int_MetaData[] = {
		{ "DataflowOutput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionOverrideNodes.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGetIntOverrideFromAssetDataflowNode_Statics::NewProp_Int = { "Int", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGetIntOverrideFromAssetDataflowNode, Int), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGetIntOverrideFromAssetDataflowNode_Statics::NewProp_Int_MetaData), Z_Construct_UScriptStruct_FGetIntOverrideFromAssetDataflowNode_Statics::NewProp_Int_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGetIntOverrideFromAssetDataflowNode_Statics::NewProp_IntDefault_MetaData[] = {
		{ "DataflowOutput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionOverrideNodes.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGetIntOverrideFromAssetDataflowNode_Statics::NewProp_IntDefault = { "IntDefault", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGetIntOverrideFromAssetDataflowNode, IntDefault), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGetIntOverrideFromAssetDataflowNode_Statics::NewProp_IntDefault_MetaData), Z_Construct_UScriptStruct_FGetIntOverrideFromAssetDataflowNode_Statics::NewProp_IntDefault_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGetIntOverrideFromAssetDataflowNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGetIntOverrideFromAssetDataflowNode_Statics::NewProp_Int,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGetIntOverrideFromAssetDataflowNode_Statics::NewProp_IntDefault,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGetIntOverrideFromAssetDataflowNode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryCollectionNodes,
		Z_Construct_UScriptStruct_FDataflowOverrideNode,
		&NewStructOps,
		"GetIntOverrideFromAssetDataflowNode",
		Z_Construct_UScriptStruct_FGetIntOverrideFromAssetDataflowNode_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGetIntOverrideFromAssetDataflowNode_Statics::PropPointers),
		sizeof(FGetIntOverrideFromAssetDataflowNode),
		alignof(FGetIntOverrideFromAssetDataflowNode),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGetIntOverrideFromAssetDataflowNode_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGetIntOverrideFromAssetDataflowNode_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGetIntOverrideFromAssetDataflowNode_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FGetIntOverrideFromAssetDataflowNode()
	{
		if (!Z_Registration_Info_UScriptStruct_GetIntOverrideFromAssetDataflowNode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GetIntOverrideFromAssetDataflowNode.InnerSingleton, Z_Construct_UScriptStruct_FGetIntOverrideFromAssetDataflowNode_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GetIntOverrideFromAssetDataflowNode.InnerSingleton;
	}

static_assert(std::is_polymorphic<FGetBoolOverrideFromAssetDataflowNode>() == std::is_polymorphic<FDataflowOverrideNode>(), "USTRUCT FGetBoolOverrideFromAssetDataflowNode cannot be polymorphic unless super FDataflowOverrideNode is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GetBoolOverrideFromAssetDataflowNode;
class UScriptStruct* FGetBoolOverrideFromAssetDataflowNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GetBoolOverrideFromAssetDataflowNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GetBoolOverrideFromAssetDataflowNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGetBoolOverrideFromAssetDataflowNode, (UObject*)Z_Construct_UPackage__Script_GeometryCollectionNodes(), TEXT("GetBoolOverrideFromAssetDataflowNode"));
	}
	return Z_Registration_Info_UScriptStruct_GetBoolOverrideFromAssetDataflowNode.OuterSingleton;
}
template<> GEOMETRYCOLLECTIONNODES_API UScriptStruct* StaticStruct<FGetBoolOverrideFromAssetDataflowNode>()
{
	return FGetBoolOverrideFromAssetDataflowNode::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGetBoolOverrideFromAssetDataflowNode_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Bool_MetaData[];
#endif
		static void NewProp_Bool_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Bool;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoolDefault_MetaData[];
#endif
		static void NewProp_BoolDefault_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_BoolDefault;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGetBoolOverrideFromAssetDataflowNode_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n *\n *\n *\n */" },
		{ "DataflowGeometryCollection", "" },
		{ "DataflowOverride", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionOverrideNodes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGetBoolOverrideFromAssetDataflowNode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGetBoolOverrideFromAssetDataflowNode>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGetBoolOverrideFromAssetDataflowNode_Statics::NewProp_Bool_MetaData[] = {
		{ "DataflowOutput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionOverrideNodes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FGetBoolOverrideFromAssetDataflowNode_Statics::NewProp_Bool_SetBit(void* Obj)
	{
		((FGetBoolOverrideFromAssetDataflowNode*)Obj)->Bool = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGetBoolOverrideFromAssetDataflowNode_Statics::NewProp_Bool = { "Bool", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FGetBoolOverrideFromAssetDataflowNode), &Z_Construct_UScriptStruct_FGetBoolOverrideFromAssetDataflowNode_Statics::NewProp_Bool_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGetBoolOverrideFromAssetDataflowNode_Statics::NewProp_Bool_MetaData), Z_Construct_UScriptStruct_FGetBoolOverrideFromAssetDataflowNode_Statics::NewProp_Bool_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGetBoolOverrideFromAssetDataflowNode_Statics::NewProp_BoolDefault_MetaData[] = {
		{ "DataflowOutput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionOverrideNodes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FGetBoolOverrideFromAssetDataflowNode_Statics::NewProp_BoolDefault_SetBit(void* Obj)
	{
		((FGetBoolOverrideFromAssetDataflowNode*)Obj)->BoolDefault = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGetBoolOverrideFromAssetDataflowNode_Statics::NewProp_BoolDefault = { "BoolDefault", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FGetBoolOverrideFromAssetDataflowNode), &Z_Construct_UScriptStruct_FGetBoolOverrideFromAssetDataflowNode_Statics::NewProp_BoolDefault_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGetBoolOverrideFromAssetDataflowNode_Statics::NewProp_BoolDefault_MetaData), Z_Construct_UScriptStruct_FGetBoolOverrideFromAssetDataflowNode_Statics::NewProp_BoolDefault_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGetBoolOverrideFromAssetDataflowNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGetBoolOverrideFromAssetDataflowNode_Statics::NewProp_Bool,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGetBoolOverrideFromAssetDataflowNode_Statics::NewProp_BoolDefault,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGetBoolOverrideFromAssetDataflowNode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryCollectionNodes,
		Z_Construct_UScriptStruct_FDataflowOverrideNode,
		&NewStructOps,
		"GetBoolOverrideFromAssetDataflowNode",
		Z_Construct_UScriptStruct_FGetBoolOverrideFromAssetDataflowNode_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGetBoolOverrideFromAssetDataflowNode_Statics::PropPointers),
		sizeof(FGetBoolOverrideFromAssetDataflowNode),
		alignof(FGetBoolOverrideFromAssetDataflowNode),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGetBoolOverrideFromAssetDataflowNode_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGetBoolOverrideFromAssetDataflowNode_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGetBoolOverrideFromAssetDataflowNode_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FGetBoolOverrideFromAssetDataflowNode()
	{
		if (!Z_Registration_Info_UScriptStruct_GetBoolOverrideFromAssetDataflowNode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GetBoolOverrideFromAssetDataflowNode.InnerSingleton, Z_Construct_UScriptStruct_FGetBoolOverrideFromAssetDataflowNode_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GetBoolOverrideFromAssetDataflowNode.InnerSingleton;
	}

static_assert(std::is_polymorphic<FGetStringOverrideFromAssetDataflowNode>() == std::is_polymorphic<FDataflowOverrideNode>(), "USTRUCT FGetStringOverrideFromAssetDataflowNode cannot be polymorphic unless super FDataflowOverrideNode is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GetStringOverrideFromAssetDataflowNode;
class UScriptStruct* FGetStringOverrideFromAssetDataflowNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GetStringOverrideFromAssetDataflowNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GetStringOverrideFromAssetDataflowNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGetStringOverrideFromAssetDataflowNode, (UObject*)Z_Construct_UPackage__Script_GeometryCollectionNodes(), TEXT("GetStringOverrideFromAssetDataflowNode"));
	}
	return Z_Registration_Info_UScriptStruct_GetStringOverrideFromAssetDataflowNode.OuterSingleton;
}
template<> GEOMETRYCOLLECTIONNODES_API UScriptStruct* StaticStruct<FGetStringOverrideFromAssetDataflowNode>()
{
	return FGetStringOverrideFromAssetDataflowNode::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGetStringOverrideFromAssetDataflowNode_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_String_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_String;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StringDefault_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_StringDefault;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGetStringOverrideFromAssetDataflowNode_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n *\n *\n *\n */" },
		{ "DataflowGeometryCollection", "" },
		{ "DataflowOverride", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionOverrideNodes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGetStringOverrideFromAssetDataflowNode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGetStringOverrideFromAssetDataflowNode>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGetStringOverrideFromAssetDataflowNode_Statics::NewProp_String_MetaData[] = {
		{ "DataflowOutput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionOverrideNodes.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGetStringOverrideFromAssetDataflowNode_Statics::NewProp_String = { "String", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGetStringOverrideFromAssetDataflowNode, String), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGetStringOverrideFromAssetDataflowNode_Statics::NewProp_String_MetaData), Z_Construct_UScriptStruct_FGetStringOverrideFromAssetDataflowNode_Statics::NewProp_String_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGetStringOverrideFromAssetDataflowNode_Statics::NewProp_StringDefault_MetaData[] = {
		{ "DataflowOutput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionOverrideNodes.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGetStringOverrideFromAssetDataflowNode_Statics::NewProp_StringDefault = { "StringDefault", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGetStringOverrideFromAssetDataflowNode, StringDefault), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGetStringOverrideFromAssetDataflowNode_Statics::NewProp_StringDefault_MetaData), Z_Construct_UScriptStruct_FGetStringOverrideFromAssetDataflowNode_Statics::NewProp_StringDefault_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGetStringOverrideFromAssetDataflowNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGetStringOverrideFromAssetDataflowNode_Statics::NewProp_String,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGetStringOverrideFromAssetDataflowNode_Statics::NewProp_StringDefault,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGetStringOverrideFromAssetDataflowNode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryCollectionNodes,
		Z_Construct_UScriptStruct_FDataflowOverrideNode,
		&NewStructOps,
		"GetStringOverrideFromAssetDataflowNode",
		Z_Construct_UScriptStruct_FGetStringOverrideFromAssetDataflowNode_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGetStringOverrideFromAssetDataflowNode_Statics::PropPointers),
		sizeof(FGetStringOverrideFromAssetDataflowNode),
		alignof(FGetStringOverrideFromAssetDataflowNode),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGetStringOverrideFromAssetDataflowNode_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGetStringOverrideFromAssetDataflowNode_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGetStringOverrideFromAssetDataflowNode_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FGetStringOverrideFromAssetDataflowNode()
	{
		if (!Z_Registration_Info_UScriptStruct_GetStringOverrideFromAssetDataflowNode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GetStringOverrideFromAssetDataflowNode.InnerSingleton, Z_Construct_UScriptStruct_FGetStringOverrideFromAssetDataflowNode_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GetStringOverrideFromAssetDataflowNode.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionNodes_Public_Dataflow_GeometryCollectionOverrideNodes_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionNodes_Public_Dataflow_GeometryCollectionOverrideNodes_h_Statics::ScriptStructInfo[] = {
		{ FGetFloatOverrideFromAssetDataflowNode::StaticStruct, Z_Construct_UScriptStruct_FGetFloatOverrideFromAssetDataflowNode_Statics::NewStructOps, TEXT("GetFloatOverrideFromAssetDataflowNode"), &Z_Registration_Info_UScriptStruct_GetFloatOverrideFromAssetDataflowNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGetFloatOverrideFromAssetDataflowNode), 2864002373U) },
		{ FGetIntOverrideFromAssetDataflowNode::StaticStruct, Z_Construct_UScriptStruct_FGetIntOverrideFromAssetDataflowNode_Statics::NewStructOps, TEXT("GetIntOverrideFromAssetDataflowNode"), &Z_Registration_Info_UScriptStruct_GetIntOverrideFromAssetDataflowNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGetIntOverrideFromAssetDataflowNode), 177248639U) },
		{ FGetBoolOverrideFromAssetDataflowNode::StaticStruct, Z_Construct_UScriptStruct_FGetBoolOverrideFromAssetDataflowNode_Statics::NewStructOps, TEXT("GetBoolOverrideFromAssetDataflowNode"), &Z_Registration_Info_UScriptStruct_GetBoolOverrideFromAssetDataflowNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGetBoolOverrideFromAssetDataflowNode), 2934481882U) },
		{ FGetStringOverrideFromAssetDataflowNode::StaticStruct, Z_Construct_UScriptStruct_FGetStringOverrideFromAssetDataflowNode_Statics::NewStructOps, TEXT("GetStringOverrideFromAssetDataflowNode"), &Z_Registration_Info_UScriptStruct_GetStringOverrideFromAssetDataflowNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGetStringOverrideFromAssetDataflowNode), 4229876880U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionNodes_Public_Dataflow_GeometryCollectionOverrideNodes_h_3885055241(TEXT("/Script/GeometryCollectionNodes"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionNodes_Public_Dataflow_GeometryCollectionOverrideNodes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionNodes_Public_Dataflow_GeometryCollectionOverrideNodes_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
