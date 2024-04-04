// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EdGraph/RigVMEdGraphNode.h"
#include "../../Source/Runtime/Engine/Classes/EdGraph/EdGraphPin.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigVMEdGraphNode() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UEdGraphNode();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FEdGraphPinType();
	RIGVMDEVELOPER_API UClass* Z_Construct_UClass_URigVMEdGraphNode();
	RIGVMDEVELOPER_API UClass* Z_Construct_UClass_URigVMEdGraphNode_NoRegister();
	RIGVMDEVELOPER_API UClass* Z_Construct_UClass_URigVMNode_NoRegister();
	RIGVMDEVELOPER_API UClass* Z_Construct_UClass_URigVMPin_NoRegister();
	UPackage* Z_Construct_UPackage__Script_RigVMDeveloper();
// End Cross Module References
	void URigVMEdGraphNode::StaticRegisterNativesURigVMEdGraphNode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URigVMEdGraphNode);
	UClass* Z_Construct_UClass_URigVMEdGraphNode_NoRegister()
	{
		return URigVMEdGraphNode::StaticClass();
	}
	struct Z_Construct_UClass_URigVMEdGraphNode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ModelNodePath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ModelNodePath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CachedModelNode_MetaData[];
#endif
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_CachedModelNode;
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_PinPathToModelPin_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_PinPathToModelPin_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PinPathToModelPin_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_PinPathToModelPin;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PropertyName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_PropertyName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StructPath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_StructPath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PinType_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PinType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParameterType_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ParameterType;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ExpandedPins_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExpandedPins_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ExpandedPins;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URigVMEdGraphNode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEdGraphNode,
		(UObject* (*)())Z_Construct_UPackage__Script_RigVMDeveloper,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URigVMEdGraphNode_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URigVMEdGraphNode_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Base class for RigVM editor side nodes */" },
		{ "IncludePath", "EdGraph/RigVMEdGraphNode.h" },
		{ "ModuleRelativePath", "Public/EdGraph/RigVMEdGraphNode.h" },
		{ "ToolTip", "Base class for RigVM editor side nodes" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URigVMEdGraphNode_Statics::NewProp_ModelNodePath_MetaData[] = {
		{ "ModuleRelativePath", "Public/EdGraph/RigVMEdGraphNode.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_URigVMEdGraphNode_Statics::NewProp_ModelNodePath = { "ModelNodePath", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URigVMEdGraphNode, ModelNodePath), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URigVMEdGraphNode_Statics::NewProp_ModelNodePath_MetaData), Z_Construct_UClass_URigVMEdGraphNode_Statics::NewProp_ModelNodePath_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URigVMEdGraphNode_Statics::NewProp_CachedModelNode_MetaData[] = {
		{ "ModuleRelativePath", "Public/EdGraph/RigVMEdGraphNode.h" },
	};
#endif
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_URigVMEdGraphNode_Statics::NewProp_CachedModelNode = { "CachedModelNode", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URigVMEdGraphNode, CachedModelNode), Z_Construct_UClass_URigVMNode_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URigVMEdGraphNode_Statics::NewProp_CachedModelNode_MetaData), Z_Construct_UClass_URigVMEdGraphNode_Statics::NewProp_CachedModelNode_MetaData) };
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_URigVMEdGraphNode_Statics::NewProp_PinPathToModelPin_ValueProp = { "PinPathToModelPin", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_URigVMPin_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_URigVMEdGraphNode_Statics::NewProp_PinPathToModelPin_Key_KeyProp = { "PinPathToModelPin_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URigVMEdGraphNode_Statics::NewProp_PinPathToModelPin_MetaData[] = {
		{ "ModuleRelativePath", "Public/EdGraph/RigVMEdGraphNode.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_URigVMEdGraphNode_Statics::NewProp_PinPathToModelPin = { "PinPathToModelPin", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URigVMEdGraphNode, PinPathToModelPin), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URigVMEdGraphNode_Statics::NewProp_PinPathToModelPin_MetaData), Z_Construct_UClass_URigVMEdGraphNode_Statics::NewProp_PinPathToModelPin_MetaData) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URigVMEdGraphNode_Statics::NewProp_PropertyName_MetaData[] = {
		{ "Comment", "/** The property we represent. For template nodes this represents the struct/property type name. */" },
		{ "ModuleRelativePath", "Public/EdGraph/RigVMEdGraphNode.h" },
		{ "ToolTip", "The property we represent. For template nodes this represents the struct/property type name." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_URigVMEdGraphNode_Statics::NewProp_PropertyName = { "PropertyName", nullptr, (EPropertyFlags)0x0040000820000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URigVMEdGraphNode, PropertyName_DEPRECATED), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URigVMEdGraphNode_Statics::NewProp_PropertyName_MetaData), Z_Construct_UClass_URigVMEdGraphNode_Statics::NewProp_PropertyName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URigVMEdGraphNode_Statics::NewProp_StructPath_MetaData[] = {
		{ "ModuleRelativePath", "Public/EdGraph/RigVMEdGraphNode.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_URigVMEdGraphNode_Statics::NewProp_StructPath = { "StructPath", nullptr, (EPropertyFlags)0x0040000820000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URigVMEdGraphNode, StructPath_DEPRECATED), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URigVMEdGraphNode_Statics::NewProp_StructPath_MetaData), Z_Construct_UClass_URigVMEdGraphNode_Statics::NewProp_StructPath_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URigVMEdGraphNode_Statics::NewProp_PinType_MetaData[] = {
		{ "Comment", "/** Pin Type for property */" },
		{ "ModuleRelativePath", "Public/EdGraph/RigVMEdGraphNode.h" },
		{ "ToolTip", "Pin Type for property" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URigVMEdGraphNode_Statics::NewProp_PinType = { "PinType", nullptr, (EPropertyFlags)0x0040000820000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URigVMEdGraphNode, PinType_DEPRECATED), Z_Construct_UScriptStruct_FEdGraphPinType, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URigVMEdGraphNode_Statics::NewProp_PinType_MetaData), Z_Construct_UClass_URigVMEdGraphNode_Statics::NewProp_PinType_MetaData) }; // 1759667379
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URigVMEdGraphNode_Statics::NewProp_ParameterType_MetaData[] = {
		{ "Comment", "/** The type of parameter */" },
		{ "ModuleRelativePath", "Public/EdGraph/RigVMEdGraphNode.h" },
		{ "ToolTip", "The type of parameter" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_URigVMEdGraphNode_Statics::NewProp_ParameterType = { "ParameterType", nullptr, (EPropertyFlags)0x0040000820000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URigVMEdGraphNode, ParameterType_DEPRECATED), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URigVMEdGraphNode_Statics::NewProp_ParameterType_MetaData), Z_Construct_UClass_URigVMEdGraphNode_Statics::NewProp_ParameterType_MetaData) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_URigVMEdGraphNode_Statics::NewProp_ExpandedPins_Inner = { "ExpandedPins", nullptr, (EPropertyFlags)0x0000000820000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URigVMEdGraphNode_Statics::NewProp_ExpandedPins_MetaData[] = {
		{ "Comment", "/** Expanded pins */" },
		{ "ModuleRelativePath", "Public/EdGraph/RigVMEdGraphNode.h" },
		{ "ToolTip", "Expanded pins" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_URigVMEdGraphNode_Statics::NewProp_ExpandedPins = { "ExpandedPins", nullptr, (EPropertyFlags)0x0040000820000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URigVMEdGraphNode, ExpandedPins_DEPRECATED), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URigVMEdGraphNode_Statics::NewProp_ExpandedPins_MetaData), Z_Construct_UClass_URigVMEdGraphNode_Statics::NewProp_ExpandedPins_MetaData) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URigVMEdGraphNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URigVMEdGraphNode_Statics::NewProp_ModelNodePath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URigVMEdGraphNode_Statics::NewProp_CachedModelNode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URigVMEdGraphNode_Statics::NewProp_PinPathToModelPin_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URigVMEdGraphNode_Statics::NewProp_PinPathToModelPin_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URigVMEdGraphNode_Statics::NewProp_PinPathToModelPin,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URigVMEdGraphNode_Statics::NewProp_PropertyName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URigVMEdGraphNode_Statics::NewProp_StructPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URigVMEdGraphNode_Statics::NewProp_PinType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URigVMEdGraphNode_Statics::NewProp_ParameterType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URigVMEdGraphNode_Statics::NewProp_ExpandedPins_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URigVMEdGraphNode_Statics::NewProp_ExpandedPins,
#endif // WITH_EDITORONLY_DATA
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URigVMEdGraphNode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URigVMEdGraphNode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URigVMEdGraphNode_Statics::ClassParams = {
		&URigVMEdGraphNode::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_URigVMEdGraphNode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_URigVMEdGraphNode_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URigVMEdGraphNode_Statics::Class_MetaDataParams), Z_Construct_UClass_URigVMEdGraphNode_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URigVMEdGraphNode_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_URigVMEdGraphNode()
	{
		if (!Z_Registration_Info_UClass_URigVMEdGraphNode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URigVMEdGraphNode.OuterSingleton, Z_Construct_UClass_URigVMEdGraphNode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URigVMEdGraphNode.OuterSingleton;
	}
	template<> RIGVMDEVELOPER_API UClass* StaticClass<URigVMEdGraphNode>()
	{
		return URigVMEdGraphNode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URigVMEdGraphNode);
	URigVMEdGraphNode::~URigVMEdGraphNode() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_EdGraph_RigVMEdGraphNode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_EdGraph_RigVMEdGraphNode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_URigVMEdGraphNode, URigVMEdGraphNode::StaticClass, TEXT("URigVMEdGraphNode"), &Z_Registration_Info_UClass_URigVMEdGraphNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URigVMEdGraphNode), 2275153769U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_EdGraph_RigVMEdGraphNode_h_3263832787(TEXT("/Script/RigVMDeveloper"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_EdGraph_RigVMEdGraphNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_EdGraph_RigVMEdGraphNode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
