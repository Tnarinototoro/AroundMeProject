// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InterchangeSceneImportAssetFactoryNode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterchangeSceneImportAssetFactoryNode() {}
// Cross Module References
	INTERCHANGECORE_API UClass* Z_Construct_UClass_UInterchangeFactoryBaseNode();
	INTERCHANGEFACTORYNODES_API UClass* Z_Construct_UClass_UInterchangeSceneImportAssetFactoryNode();
	INTERCHANGEFACTORYNODES_API UClass* Z_Construct_UClass_UInterchangeSceneImportAssetFactoryNode_NoRegister();
	UPackage* Z_Construct_UPackage__Script_InterchangeFactoryNodes();
// End Cross Module References
	void UInterchangeSceneImportAssetFactoryNode::StaticRegisterNativesUInterchangeSceneImportAssetFactoryNode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInterchangeSceneImportAssetFactoryNode);
	UClass* Z_Construct_UClass_UInterchangeSceneImportAssetFactoryNode_NoRegister()
	{
		return UInterchangeSceneImportAssetFactoryNode::StaticClass();
	}
	struct Z_Construct_UClass_UInterchangeSceneImportAssetFactoryNode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInterchangeSceneImportAssetFactoryNode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterchangeFactoryBaseNode,
		(UObject* (*)())Z_Construct_UPackage__Script_InterchangeFactoryNodes,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeSceneImportAssetFactoryNode_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterchangeSceneImportAssetFactoryNode_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "InterchangeSceneImportAssetFactoryNode.h" },
		{ "ModuleRelativePath", "Public/InterchangeSceneImportAssetFactoryNode.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInterchangeSceneImportAssetFactoryNode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterchangeSceneImportAssetFactoryNode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInterchangeSceneImportAssetFactoryNode_Statics::ClassParams = {
		&UInterchangeSceneImportAssetFactoryNode::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeSceneImportAssetFactoryNode_Statics::Class_MetaDataParams), Z_Construct_UClass_UInterchangeSceneImportAssetFactoryNode_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UInterchangeSceneImportAssetFactoryNode()
	{
		if (!Z_Registration_Info_UClass_UInterchangeSceneImportAssetFactoryNode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInterchangeSceneImportAssetFactoryNode.OuterSingleton, Z_Construct_UClass_UInterchangeSceneImportAssetFactoryNode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInterchangeSceneImportAssetFactoryNode.OuterSingleton;
	}
	template<> INTERCHANGEFACTORYNODES_API UClass* StaticClass<UInterchangeSceneImportAssetFactoryNode>()
	{
		return UInterchangeSceneImportAssetFactoryNode::StaticClass();
	}
	UInterchangeSceneImportAssetFactoryNode::UInterchangeSceneImportAssetFactoryNode() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInterchangeSceneImportAssetFactoryNode);
	UInterchangeSceneImportAssetFactoryNode::~UInterchangeSceneImportAssetFactoryNode() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeSceneImportAssetFactoryNode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeSceneImportAssetFactoryNode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UInterchangeSceneImportAssetFactoryNode, UInterchangeSceneImportAssetFactoryNode::StaticClass, TEXT("UInterchangeSceneImportAssetFactoryNode"), &Z_Registration_Info_UClass_UInterchangeSceneImportAssetFactoryNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInterchangeSceneImportAssetFactoryNode), 2742451599U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeSceneImportAssetFactoryNode_h_2061896535(TEXT("/Script/InterchangeFactoryNodes"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeSceneImportAssetFactoryNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeSceneImportAssetFactoryNode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
