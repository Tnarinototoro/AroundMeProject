// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EdGraph/NodeSpawners/RigVMEdGraphNodeSpawner.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigVMEdGraphNodeSpawner() {}
// Cross Module References
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UBlueprintNodeSpawner();
	RIGVMEDITOR_API UClass* Z_Construct_UClass_URigVMEdGraphNodeSpawner();
	RIGVMEDITOR_API UClass* Z_Construct_UClass_URigVMEdGraphNodeSpawner_NoRegister();
	UPackage* Z_Construct_UPackage__Script_RigVMEditor();
// End Cross Module References
	void URigVMEdGraphNodeSpawner::StaticRegisterNativesURigVMEdGraphNodeSpawner()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URigVMEdGraphNodeSpawner);
	UClass* Z_Construct_UClass_URigVMEdGraphNodeSpawner_NoRegister()
	{
		return URigVMEdGraphNodeSpawner::StaticClass();
	}
	struct Z_Construct_UClass_URigVMEdGraphNodeSpawner_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URigVMEdGraphNodeSpawner_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintNodeSpawner,
		(UObject* (*)())Z_Construct_UPackage__Script_RigVMEditor,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URigVMEdGraphNodeSpawner_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URigVMEdGraphNodeSpawner_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EdGraph/NodeSpawners/RigVMEdGraphNodeSpawner.h" },
		{ "ModuleRelativePath", "Public/EdGraph/NodeSpawners/RigVMEdGraphNodeSpawner.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_URigVMEdGraphNodeSpawner_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URigVMEdGraphNodeSpawner>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URigVMEdGraphNodeSpawner_Statics::ClassParams = {
		&URigVMEdGraphNodeSpawner::StaticClass,
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
		0x001000A8u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URigVMEdGraphNodeSpawner_Statics::Class_MetaDataParams), Z_Construct_UClass_URigVMEdGraphNodeSpawner_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_URigVMEdGraphNodeSpawner()
	{
		if (!Z_Registration_Info_UClass_URigVMEdGraphNodeSpawner.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URigVMEdGraphNodeSpawner.OuterSingleton, Z_Construct_UClass_URigVMEdGraphNodeSpawner_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URigVMEdGraphNodeSpawner.OuterSingleton;
	}
	template<> RIGVMEDITOR_API UClass* StaticClass<URigVMEdGraphNodeSpawner>()
	{
		return URigVMEdGraphNodeSpawner::StaticClass();
	}
	URigVMEdGraphNodeSpawner::URigVMEdGraphNodeSpawner(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URigVMEdGraphNodeSpawner);
	URigVMEdGraphNodeSpawner::~URigVMEdGraphNodeSpawner() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVMEditor_Public_EdGraph_NodeSpawners_RigVMEdGraphNodeSpawner_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVMEditor_Public_EdGraph_NodeSpawners_RigVMEdGraphNodeSpawner_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_URigVMEdGraphNodeSpawner, URigVMEdGraphNodeSpawner::StaticClass, TEXT("URigVMEdGraphNodeSpawner"), &Z_Registration_Info_UClass_URigVMEdGraphNodeSpawner, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URigVMEdGraphNodeSpawner), 2211269046U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVMEditor_Public_EdGraph_NodeSpawners_RigVMEdGraphNodeSpawner_h_580612919(TEXT("/Script/RigVMEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVMEditor_Public_EdGraph_NodeSpawners_RigVMEdGraphNodeSpawner_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVMEditor_Public_EdGraph_NodeSpawners_RigVMEdGraphNodeSpawner_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
