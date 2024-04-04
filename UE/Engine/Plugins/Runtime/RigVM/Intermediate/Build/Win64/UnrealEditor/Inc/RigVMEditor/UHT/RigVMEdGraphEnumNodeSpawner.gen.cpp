// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EdGraph/NodeSpawners/RigVMEdGraphEnumNodeSpawner.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigVMEdGraphEnumNodeSpawner() {}
// Cross Module References
	RIGVMEDITOR_API UClass* Z_Construct_UClass_URigVMEdGraphEnumNodeSpawner();
	RIGVMEDITOR_API UClass* Z_Construct_UClass_URigVMEdGraphEnumNodeSpawner_NoRegister();
	RIGVMEDITOR_API UClass* Z_Construct_UClass_URigVMEdGraphNodeSpawner();
	UPackage* Z_Construct_UPackage__Script_RigVMEditor();
// End Cross Module References
	void URigVMEdGraphEnumNodeSpawner::StaticRegisterNativesURigVMEdGraphEnumNodeSpawner()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URigVMEdGraphEnumNodeSpawner);
	UClass* Z_Construct_UClass_URigVMEdGraphEnumNodeSpawner_NoRegister()
	{
		return URigVMEdGraphEnumNodeSpawner::StaticClass();
	}
	struct Z_Construct_UClass_URigVMEdGraphEnumNodeSpawner_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URigVMEdGraphEnumNodeSpawner_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_URigVMEdGraphNodeSpawner,
		(UObject* (*)())Z_Construct_UPackage__Script_RigVMEditor,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URigVMEdGraphEnumNodeSpawner_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URigVMEdGraphEnumNodeSpawner_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EdGraph/NodeSpawners/RigVMEdGraphEnumNodeSpawner.h" },
		{ "ModuleRelativePath", "Public/EdGraph/NodeSpawners/RigVMEdGraphEnumNodeSpawner.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_URigVMEdGraphEnumNodeSpawner_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URigVMEdGraphEnumNodeSpawner>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URigVMEdGraphEnumNodeSpawner_Statics::ClassParams = {
		&URigVMEdGraphEnumNodeSpawner::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URigVMEdGraphEnumNodeSpawner_Statics::Class_MetaDataParams), Z_Construct_UClass_URigVMEdGraphEnumNodeSpawner_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_URigVMEdGraphEnumNodeSpawner()
	{
		if (!Z_Registration_Info_UClass_URigVMEdGraphEnumNodeSpawner.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URigVMEdGraphEnumNodeSpawner.OuterSingleton, Z_Construct_UClass_URigVMEdGraphEnumNodeSpawner_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URigVMEdGraphEnumNodeSpawner.OuterSingleton;
	}
	template<> RIGVMEDITOR_API UClass* StaticClass<URigVMEdGraphEnumNodeSpawner>()
	{
		return URigVMEdGraphEnumNodeSpawner::StaticClass();
	}
	URigVMEdGraphEnumNodeSpawner::URigVMEdGraphEnumNodeSpawner(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URigVMEdGraphEnumNodeSpawner);
	URigVMEdGraphEnumNodeSpawner::~URigVMEdGraphEnumNodeSpawner() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVMEditor_Public_EdGraph_NodeSpawners_RigVMEdGraphEnumNodeSpawner_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVMEditor_Public_EdGraph_NodeSpawners_RigVMEdGraphEnumNodeSpawner_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_URigVMEdGraphEnumNodeSpawner, URigVMEdGraphEnumNodeSpawner::StaticClass, TEXT("URigVMEdGraphEnumNodeSpawner"), &Z_Registration_Info_UClass_URigVMEdGraphEnumNodeSpawner, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URigVMEdGraphEnumNodeSpawner), 357832155U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVMEditor_Public_EdGraph_NodeSpawners_RigVMEdGraphEnumNodeSpawner_h_3551049435(TEXT("/Script/RigVMEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVMEditor_Public_EdGraph_NodeSpawners_RigVMEdGraphEnumNodeSpawner_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVMEditor_Public_EdGraph_NodeSpawners_RigVMEdGraphEnumNodeSpawner_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
