// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RigVMModel/RigVMBuildData.h"
#include "RigVMCore/RigVMGraphFunctionDefinition.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigVMBuildData() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMGraphFunctionHeader();
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMGraphFunctionIdentifier();
	RIGVMDEVELOPER_API UClass* Z_Construct_UClass_URigVMBuildData();
	RIGVMDEVELOPER_API UClass* Z_Construct_UClass_URigVMBuildData_NoRegister();
	RIGVMDEVELOPER_API UClass* Z_Construct_UClass_URigVMFunctionReferenceNode_NoRegister();
	RIGVMDEVELOPER_API UClass* Z_Construct_UClass_URigVMLibraryNode_NoRegister();
	RIGVMDEVELOPER_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunctionReferenceArray();
	RIGVMDEVELOPER_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMReferenceNodeData();
	UPackage* Z_Construct_UPackage__Script_RigVMDeveloper();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMFunctionReferenceArray;
class UScriptStruct* FRigVMFunctionReferenceArray::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunctionReferenceArray.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMFunctionReferenceArray.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunctionReferenceArray, (UObject*)Z_Construct_UPackage__Script_RigVMDeveloper(), TEXT("RigVMFunctionReferenceArray"));
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunctionReferenceArray.OuterSingleton;
}
template<> RIGVMDEVELOPER_API UScriptStruct* StaticStruct<FRigVMFunctionReferenceArray>()
{
	return FRigVMFunctionReferenceArray::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigVMFunctionReferenceArray_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_FunctionReferences_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FunctionReferences_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_FunctionReferences;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunctionReferenceArray_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/RigVMModel/RigVMBuildData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigVMFunctionReferenceArray_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMFunctionReferenceArray>();
	}
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FRigVMFunctionReferenceArray_Statics::NewProp_FunctionReferences_Inner = { "FunctionReferences", nullptr, (EPropertyFlags)0x0004000000020000, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_URigVMFunctionReferenceNode_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunctionReferenceArray_Statics::NewProp_FunctionReferences_MetaData[] = {
		{ "Category", "BuildData" },
		{ "ModuleRelativePath", "Public/RigVMModel/RigVMBuildData.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigVMFunctionReferenceArray_Statics::NewProp_FunctionReferences = { "FunctionReferences", nullptr, (EPropertyFlags)0x0014000000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunctionReferenceArray, FunctionReferences), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunctionReferenceArray_Statics::NewProp_FunctionReferences_MetaData), Z_Construct_UScriptStruct_FRigVMFunctionReferenceArray_Statics::NewProp_FunctionReferences_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigVMFunctionReferenceArray_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunctionReferenceArray_Statics::NewProp_FunctionReferences_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunctionReferenceArray_Statics::NewProp_FunctionReferences,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMFunctionReferenceArray_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RigVMDeveloper,
		nullptr,
		&NewStructOps,
		"RigVMFunctionReferenceArray",
		Z_Construct_UScriptStruct_FRigVMFunctionReferenceArray_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunctionReferenceArray_Statics::PropPointers),
		sizeof(FRigVMFunctionReferenceArray),
		alignof(FRigVMFunctionReferenceArray),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunctionReferenceArray_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigVMFunctionReferenceArray_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunctionReferenceArray_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunctionReferenceArray()
	{
		if (!Z_Registration_Info_UScriptStruct_RigVMFunctionReferenceArray.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMFunctionReferenceArray.InnerSingleton, Z_Construct_UScriptStruct_FRigVMFunctionReferenceArray_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigVMFunctionReferenceArray.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMReferenceNodeData;
class UScriptStruct* FRigVMReferenceNodeData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMReferenceNodeData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMReferenceNodeData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMReferenceNodeData, (UObject*)Z_Construct_UPackage__Script_RigVMDeveloper(), TEXT("RigVMReferenceNodeData"));
	}
	return Z_Registration_Info_UScriptStruct_RigVMReferenceNodeData.OuterSingleton;
}
template<> RIGVMDEVELOPER_API UScriptStruct* StaticStruct<FRigVMReferenceNodeData>()
{
	return FRigVMReferenceNodeData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigVMReferenceNodeData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReferenceNodePath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReferenceNodePath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReferencedFunctionPath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReferencedFunctionPath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReferencedHeader_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReferencedHeader;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReferencedFunctionIdentifier_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReferencedFunctionIdentifier;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMReferenceNodeData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RigVMModel/RigVMBuildData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigVMReferenceNodeData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMReferenceNodeData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMReferenceNodeData_Statics::NewProp_ReferenceNodePath_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigVMModel/RigVMBuildData.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRigVMReferenceNodeData_Statics::NewProp_ReferenceNodePath = { "ReferenceNodePath", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMReferenceNodeData, ReferenceNodePath), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMReferenceNodeData_Statics::NewProp_ReferenceNodePath_MetaData), Z_Construct_UScriptStruct_FRigVMReferenceNodeData_Statics::NewProp_ReferenceNodePath_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMReferenceNodeData_Statics::NewProp_ReferencedFunctionPath_MetaData[] = {
		{ "DeprecatedProperty", "" },
		{ "ModuleRelativePath", "Public/RigVMModel/RigVMBuildData.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRigVMReferenceNodeData_Statics::NewProp_ReferencedFunctionPath = { "ReferencedFunctionPath", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMReferenceNodeData, ReferencedFunctionPath_DEPRECATED), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMReferenceNodeData_Statics::NewProp_ReferencedFunctionPath_MetaData), Z_Construct_UScriptStruct_FRigVMReferenceNodeData_Statics::NewProp_ReferencedFunctionPath_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMReferenceNodeData_Statics::NewProp_ReferencedHeader_MetaData[] = {
		{ "DeprecatedProperty", "" },
		{ "ModuleRelativePath", "Public/RigVMModel/RigVMBuildData.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMReferenceNodeData_Statics::NewProp_ReferencedHeader = { "ReferencedHeader", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMReferenceNodeData, ReferencedHeader_DEPRECATED), Z_Construct_UScriptStruct_FRigVMGraphFunctionHeader, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMReferenceNodeData_Statics::NewProp_ReferencedHeader_MetaData), Z_Construct_UScriptStruct_FRigVMReferenceNodeData_Statics::NewProp_ReferencedHeader_MetaData) }; // 1196129345
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMReferenceNodeData_Statics::NewProp_ReferencedFunctionIdentifier_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigVMModel/RigVMBuildData.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMReferenceNodeData_Statics::NewProp_ReferencedFunctionIdentifier = { "ReferencedFunctionIdentifier", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMReferenceNodeData, ReferencedFunctionIdentifier), Z_Construct_UScriptStruct_FRigVMGraphFunctionIdentifier, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMReferenceNodeData_Statics::NewProp_ReferencedFunctionIdentifier_MetaData), Z_Construct_UScriptStruct_FRigVMReferenceNodeData_Statics::NewProp_ReferencedFunctionIdentifier_MetaData) }; // 3973412725
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigVMReferenceNodeData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMReferenceNodeData_Statics::NewProp_ReferenceNodePath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMReferenceNodeData_Statics::NewProp_ReferencedFunctionPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMReferenceNodeData_Statics::NewProp_ReferencedHeader,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMReferenceNodeData_Statics::NewProp_ReferencedFunctionIdentifier,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMReferenceNodeData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RigVMDeveloper,
		nullptr,
		&NewStructOps,
		"RigVMReferenceNodeData",
		Z_Construct_UScriptStruct_FRigVMReferenceNodeData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMReferenceNodeData_Statics::PropPointers),
		sizeof(FRigVMReferenceNodeData),
		alignof(FRigVMReferenceNodeData),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMReferenceNodeData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigVMReferenceNodeData_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMReferenceNodeData_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FRigVMReferenceNodeData()
	{
		if (!Z_Registration_Info_UScriptStruct_RigVMReferenceNodeData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMReferenceNodeData.InnerSingleton, Z_Construct_UScriptStruct_FRigVMReferenceNodeData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigVMReferenceNodeData.InnerSingleton;
	}
	void URigVMBuildData::StaticRegisterNativesURigVMBuildData()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URigVMBuildData);
	UClass* Z_Construct_UClass_URigVMBuildData_NoRegister()
	{
		return URigVMBuildData::StaticClass();
	}
	struct Z_Construct_UClass_URigVMBuildData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FunctionReferences_ValueProp;
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_FunctionReferences_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FunctionReferences_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_FunctionReferences;
		static const UECodeGen_Private::FStructPropertyParams NewProp_GraphFunctionReferences_ValueProp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_GraphFunctionReferences_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GraphFunctionReferences_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_GraphFunctionReferences;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URigVMBuildData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_RigVMDeveloper,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URigVMBuildData_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URigVMBuildData_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * The Build Data is used to store transient / intermediate build information\n * for the RigVM graph to improve the user experience.\n * This object is never serialized.\n */" },
		{ "IncludePath", "RigVMModel/RigVMBuildData.h" },
		{ "ModuleRelativePath", "Public/RigVMModel/RigVMBuildData.h" },
		{ "ToolTip", "The Build Data is used to store transient / intermediate build information\nfor the RigVM graph to improve the user experience.\nThis object is never serialized." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URigVMBuildData_Statics::NewProp_FunctionReferences_ValueProp = { "FunctionReferences", nullptr, (EPropertyFlags)0x0000000020000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FRigVMFunctionReferenceArray, METADATA_PARAMS(0, nullptr) }; // 1184030234
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_URigVMBuildData_Statics::NewProp_FunctionReferences_Key_KeyProp = { "FunctionReferences_Key", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_URigVMLibraryNode_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URigVMBuildData_Statics::NewProp_FunctionReferences_MetaData[] = {
		{ "DeprecatedProperty", "" },
		{ "ModuleRelativePath", "Public/RigVMModel/RigVMBuildData.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_URigVMBuildData_Statics::NewProp_FunctionReferences = { "FunctionReferences", nullptr, (EPropertyFlags)0x0040000020000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URigVMBuildData, FunctionReferences_DEPRECATED), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URigVMBuildData_Statics::NewProp_FunctionReferences_MetaData), Z_Construct_UClass_URigVMBuildData_Statics::NewProp_FunctionReferences_MetaData) }; // 1184030234
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URigVMBuildData_Statics::NewProp_GraphFunctionReferences_ValueProp = { "GraphFunctionReferences", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FRigVMFunctionReferenceArray, METADATA_PARAMS(0, nullptr) }; // 1184030234
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URigVMBuildData_Statics::NewProp_GraphFunctionReferences_Key_KeyProp = { "GraphFunctionReferences_Key", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FRigVMGraphFunctionIdentifier, METADATA_PARAMS(0, nullptr) }; // 3973412725
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URigVMBuildData_Statics::NewProp_GraphFunctionReferences_MetaData[] = {
		{ "Category", "BuildData" },
		{ "ModuleRelativePath", "Public/RigVMModel/RigVMBuildData.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_URigVMBuildData_Statics::NewProp_GraphFunctionReferences = { "GraphFunctionReferences", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URigVMBuildData, GraphFunctionReferences), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URigVMBuildData_Statics::NewProp_GraphFunctionReferences_MetaData), Z_Construct_UClass_URigVMBuildData_Statics::NewProp_GraphFunctionReferences_MetaData) }; // 3973412725 1184030234
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URigVMBuildData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URigVMBuildData_Statics::NewProp_FunctionReferences_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URigVMBuildData_Statics::NewProp_FunctionReferences_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URigVMBuildData_Statics::NewProp_FunctionReferences,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URigVMBuildData_Statics::NewProp_GraphFunctionReferences_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URigVMBuildData_Statics::NewProp_GraphFunctionReferences_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URigVMBuildData_Statics::NewProp_GraphFunctionReferences,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URigVMBuildData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URigVMBuildData>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URigVMBuildData_Statics::ClassParams = {
		&URigVMBuildData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_URigVMBuildData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_URigVMBuildData_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URigVMBuildData_Statics::Class_MetaDataParams), Z_Construct_UClass_URigVMBuildData_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URigVMBuildData_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_URigVMBuildData()
	{
		if (!Z_Registration_Info_UClass_URigVMBuildData.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URigVMBuildData.OuterSingleton, Z_Construct_UClass_URigVMBuildData_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URigVMBuildData.OuterSingleton;
	}
	template<> RIGVMDEVELOPER_API UClass* StaticClass<URigVMBuildData>()
	{
		return URigVMBuildData::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URigVMBuildData);
	URigVMBuildData::~URigVMBuildData() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMModel_RigVMBuildData_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMModel_RigVMBuildData_h_Statics::ScriptStructInfo[] = {
		{ FRigVMFunctionReferenceArray::StaticStruct, Z_Construct_UScriptStruct_FRigVMFunctionReferenceArray_Statics::NewStructOps, TEXT("RigVMFunctionReferenceArray"), &Z_Registration_Info_UScriptStruct_RigVMFunctionReferenceArray, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMFunctionReferenceArray), 1184030234U) },
		{ FRigVMReferenceNodeData::StaticStruct, Z_Construct_UScriptStruct_FRigVMReferenceNodeData_Statics::NewStructOps, TEXT("RigVMReferenceNodeData"), &Z_Registration_Info_UScriptStruct_RigVMReferenceNodeData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMReferenceNodeData), 2160289158U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMModel_RigVMBuildData_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_URigVMBuildData, URigVMBuildData::StaticClass, TEXT("URigVMBuildData"), &Z_Registration_Info_UClass_URigVMBuildData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URigVMBuildData), 459386164U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMModel_RigVMBuildData_h_3082886775(TEXT("/Script/RigVMDeveloper"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMModel_RigVMBuildData_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMModel_RigVMBuildData_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMModel_RigVMBuildData_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMModel_RigVMBuildData_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
