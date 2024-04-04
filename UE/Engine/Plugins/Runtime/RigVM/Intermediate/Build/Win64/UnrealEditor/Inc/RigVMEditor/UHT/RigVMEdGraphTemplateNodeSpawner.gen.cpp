// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EdGraph/NodeSpawners/RigVMEdGraphTemplateNodeSpawner.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigVMEdGraphTemplateNodeSpawner() {}
// Cross Module References
	RIGVMEDITOR_API UClass* Z_Construct_UClass_URigVMEdGraphNodeSpawner();
	RIGVMEDITOR_API UClass* Z_Construct_UClass_URigVMEdGraphTemplateNodeSpawner();
	RIGVMEDITOR_API UClass* Z_Construct_UClass_URigVMEdGraphTemplateNodeSpawner_NoRegister();
	UPackage* Z_Construct_UPackage__Script_RigVMEditor();
// End Cross Module References
	void URigVMEdGraphTemplateNodeSpawner::StaticRegisterNativesURigVMEdGraphTemplateNodeSpawner()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URigVMEdGraphTemplateNodeSpawner);
	UClass* Z_Construct_UClass_URigVMEdGraphTemplateNodeSpawner_NoRegister()
	{
		return URigVMEdGraphTemplateNodeSpawner::StaticClass();
	}
	struct Z_Construct_UClass_URigVMEdGraphTemplateNodeSpawner_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TemplateNotation_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_TemplateNotation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URigVMEdGraphTemplateNodeSpawner_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_URigVMEdGraphNodeSpawner,
		(UObject* (*)())Z_Construct_UPackage__Script_RigVMEditor,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URigVMEdGraphTemplateNodeSpawner_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URigVMEdGraphTemplateNodeSpawner_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EdGraph/NodeSpawners/RigVMEdGraphTemplateNodeSpawner.h" },
		{ "ModuleRelativePath", "Public/EdGraph/NodeSpawners/RigVMEdGraphTemplateNodeSpawner.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URigVMEdGraphTemplateNodeSpawner_Statics::NewProp_TemplateNotation_MetaData[] = {
		{ "Comment", "/** The unit type we will spawn */" },
		{ "ModuleRelativePath", "Public/EdGraph/NodeSpawners/RigVMEdGraphTemplateNodeSpawner.h" },
		{ "ToolTip", "The unit type we will spawn" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_URigVMEdGraphTemplateNodeSpawner_Statics::NewProp_TemplateNotation = { "TemplateNotation", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URigVMEdGraphTemplateNodeSpawner, TemplateNotation), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URigVMEdGraphTemplateNodeSpawner_Statics::NewProp_TemplateNotation_MetaData), Z_Construct_UClass_URigVMEdGraphTemplateNodeSpawner_Statics::NewProp_TemplateNotation_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URigVMEdGraphTemplateNodeSpawner_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URigVMEdGraphTemplateNodeSpawner_Statics::NewProp_TemplateNotation,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URigVMEdGraphTemplateNodeSpawner_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URigVMEdGraphTemplateNodeSpawner>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URigVMEdGraphTemplateNodeSpawner_Statics::ClassParams = {
		&URigVMEdGraphTemplateNodeSpawner::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_URigVMEdGraphTemplateNodeSpawner_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_URigVMEdGraphTemplateNodeSpawner_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URigVMEdGraphTemplateNodeSpawner_Statics::Class_MetaDataParams), Z_Construct_UClass_URigVMEdGraphTemplateNodeSpawner_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URigVMEdGraphTemplateNodeSpawner_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_URigVMEdGraphTemplateNodeSpawner()
	{
		if (!Z_Registration_Info_UClass_URigVMEdGraphTemplateNodeSpawner.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URigVMEdGraphTemplateNodeSpawner.OuterSingleton, Z_Construct_UClass_URigVMEdGraphTemplateNodeSpawner_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URigVMEdGraphTemplateNodeSpawner.OuterSingleton;
	}
	template<> RIGVMEDITOR_API UClass* StaticClass<URigVMEdGraphTemplateNodeSpawner>()
	{
		return URigVMEdGraphTemplateNodeSpawner::StaticClass();
	}
	URigVMEdGraphTemplateNodeSpawner::URigVMEdGraphTemplateNodeSpawner(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URigVMEdGraphTemplateNodeSpawner);
	URigVMEdGraphTemplateNodeSpawner::~URigVMEdGraphTemplateNodeSpawner() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVMEditor_Public_EdGraph_NodeSpawners_RigVMEdGraphTemplateNodeSpawner_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVMEditor_Public_EdGraph_NodeSpawners_RigVMEdGraphTemplateNodeSpawner_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_URigVMEdGraphTemplateNodeSpawner, URigVMEdGraphTemplateNodeSpawner::StaticClass, TEXT("URigVMEdGraphTemplateNodeSpawner"), &Z_Registration_Info_UClass_URigVMEdGraphTemplateNodeSpawner, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URigVMEdGraphTemplateNodeSpawner), 1911751918U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVMEditor_Public_EdGraph_NodeSpawners_RigVMEdGraphTemplateNodeSpawner_h_56284097(TEXT("/Script/RigVMEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVMEditor_Public_EdGraph_NodeSpawners_RigVMEdGraphTemplateNodeSpawner_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVMEditor_Public_EdGraph_NodeSpawners_RigVMEdGraphTemplateNodeSpawner_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
