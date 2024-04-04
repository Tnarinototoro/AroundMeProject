// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EdGraph/NodeSpawners/RigVMEdGraphVariableNodeSpawner.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigVMEdGraphVariableNodeSpawner() {}
// Cross Module References
	RIGVMEDITOR_API UClass* Z_Construct_UClass_URigVMEdGraphNodeSpawner();
	RIGVMEDITOR_API UClass* Z_Construct_UClass_URigVMEdGraphVariableNodeSpawner();
	RIGVMEDITOR_API UClass* Z_Construct_UClass_URigVMEdGraphVariableNodeSpawner_NoRegister();
	UPackage* Z_Construct_UPackage__Script_RigVMEditor();
// End Cross Module References
	void URigVMEdGraphVariableNodeSpawner::StaticRegisterNativesURigVMEdGraphVariableNodeSpawner()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URigVMEdGraphVariableNodeSpawner);
	UClass* Z_Construct_UClass_URigVMEdGraphVariableNodeSpawner_NoRegister()
	{
		return URigVMEdGraphVariableNodeSpawner::StaticClass();
	}
	struct Z_Construct_UClass_URigVMEdGraphVariableNodeSpawner_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URigVMEdGraphVariableNodeSpawner_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_URigVMEdGraphNodeSpawner,
		(UObject* (*)())Z_Construct_UPackage__Script_RigVMEditor,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URigVMEdGraphVariableNodeSpawner_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URigVMEdGraphVariableNodeSpawner_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EdGraph/NodeSpawners/RigVMEdGraphVariableNodeSpawner.h" },
		{ "ModuleRelativePath", "Public/EdGraph/NodeSpawners/RigVMEdGraphVariableNodeSpawner.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_URigVMEdGraphVariableNodeSpawner_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URigVMEdGraphVariableNodeSpawner>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URigVMEdGraphVariableNodeSpawner_Statics::ClassParams = {
		&URigVMEdGraphVariableNodeSpawner::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URigVMEdGraphVariableNodeSpawner_Statics::Class_MetaDataParams), Z_Construct_UClass_URigVMEdGraphVariableNodeSpawner_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_URigVMEdGraphVariableNodeSpawner()
	{
		if (!Z_Registration_Info_UClass_URigVMEdGraphVariableNodeSpawner.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URigVMEdGraphVariableNodeSpawner.OuterSingleton, Z_Construct_UClass_URigVMEdGraphVariableNodeSpawner_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URigVMEdGraphVariableNodeSpawner.OuterSingleton;
	}
	template<> RIGVMEDITOR_API UClass* StaticClass<URigVMEdGraphVariableNodeSpawner>()
	{
		return URigVMEdGraphVariableNodeSpawner::StaticClass();
	}
	URigVMEdGraphVariableNodeSpawner::URigVMEdGraphVariableNodeSpawner(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URigVMEdGraphVariableNodeSpawner);
	URigVMEdGraphVariableNodeSpawner::~URigVMEdGraphVariableNodeSpawner() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVMEditor_Public_EdGraph_NodeSpawners_RigVMEdGraphVariableNodeSpawner_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVMEditor_Public_EdGraph_NodeSpawners_RigVMEdGraphVariableNodeSpawner_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_URigVMEdGraphVariableNodeSpawner, URigVMEdGraphVariableNodeSpawner::StaticClass, TEXT("URigVMEdGraphVariableNodeSpawner"), &Z_Registration_Info_UClass_URigVMEdGraphVariableNodeSpawner, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URigVMEdGraphVariableNodeSpawner), 3774175081U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVMEditor_Public_EdGraph_NodeSpawners_RigVMEdGraphVariableNodeSpawner_h_3642879782(TEXT("/Script/RigVMEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVMEditor_Public_EdGraph_NodeSpawners_RigVMEdGraphVariableNodeSpawner_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVMEditor_Public_EdGraph_NodeSpawners_RigVMEdGraphVariableNodeSpawner_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
