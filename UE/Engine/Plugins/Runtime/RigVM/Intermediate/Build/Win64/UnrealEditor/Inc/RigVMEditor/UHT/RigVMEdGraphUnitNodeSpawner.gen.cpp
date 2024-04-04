// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EdGraph/NodeSpawners/RigVMEdGraphUnitNodeSpawner.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigVMEdGraphUnitNodeSpawner() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UScriptStruct();
	RIGVMEDITOR_API UClass* Z_Construct_UClass_URigVMEdGraphNodeSpawner();
	RIGVMEDITOR_API UClass* Z_Construct_UClass_URigVMEdGraphUnitNodeSpawner();
	RIGVMEDITOR_API UClass* Z_Construct_UClass_URigVMEdGraphUnitNodeSpawner_NoRegister();
	UPackage* Z_Construct_UPackage__Script_RigVMEditor();
// End Cross Module References
	void URigVMEdGraphUnitNodeSpawner::StaticRegisterNativesURigVMEdGraphUnitNodeSpawner()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URigVMEdGraphUnitNodeSpawner);
	UClass* Z_Construct_UClass_URigVMEdGraphUnitNodeSpawner_NoRegister()
	{
		return URigVMEdGraphUnitNodeSpawner::StaticClass();
	}
	struct Z_Construct_UClass_URigVMEdGraphUnitNodeSpawner_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StructTemplate_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_StructTemplate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MethodName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_MethodName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URigVMEdGraphUnitNodeSpawner_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_URigVMEdGraphNodeSpawner,
		(UObject* (*)())Z_Construct_UPackage__Script_RigVMEditor,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URigVMEdGraphUnitNodeSpawner_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URigVMEdGraphUnitNodeSpawner_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EdGraph/NodeSpawners/RigVMEdGraphUnitNodeSpawner.h" },
		{ "ModuleRelativePath", "Public/EdGraph/NodeSpawners/RigVMEdGraphUnitNodeSpawner.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URigVMEdGraphUnitNodeSpawner_Statics::NewProp_StructTemplate_MetaData[] = {
		{ "Comment", "/** The unit type we will spawn */" },
		{ "ModuleRelativePath", "Public/EdGraph/NodeSpawners/RigVMEdGraphUnitNodeSpawner.h" },
		{ "ToolTip", "The unit type we will spawn" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_URigVMEdGraphUnitNodeSpawner_Statics::NewProp_StructTemplate = { "StructTemplate", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URigVMEdGraphUnitNodeSpawner, StructTemplate), Z_Construct_UClass_UScriptStruct, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URigVMEdGraphUnitNodeSpawner_Statics::NewProp_StructTemplate_MetaData), Z_Construct_UClass_URigVMEdGraphUnitNodeSpawner_Statics::NewProp_StructTemplate_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URigVMEdGraphUnitNodeSpawner_Statics::NewProp_MethodName_MetaData[] = {
		{ "ModuleRelativePath", "Public/EdGraph/NodeSpawners/RigVMEdGraphUnitNodeSpawner.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_URigVMEdGraphUnitNodeSpawner_Statics::NewProp_MethodName = { "MethodName", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URigVMEdGraphUnitNodeSpawner, MethodName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URigVMEdGraphUnitNodeSpawner_Statics::NewProp_MethodName_MetaData), Z_Construct_UClass_URigVMEdGraphUnitNodeSpawner_Statics::NewProp_MethodName_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URigVMEdGraphUnitNodeSpawner_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URigVMEdGraphUnitNodeSpawner_Statics::NewProp_StructTemplate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URigVMEdGraphUnitNodeSpawner_Statics::NewProp_MethodName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URigVMEdGraphUnitNodeSpawner_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URigVMEdGraphUnitNodeSpawner>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URigVMEdGraphUnitNodeSpawner_Statics::ClassParams = {
		&URigVMEdGraphUnitNodeSpawner::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_URigVMEdGraphUnitNodeSpawner_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_URigVMEdGraphUnitNodeSpawner_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URigVMEdGraphUnitNodeSpawner_Statics::Class_MetaDataParams), Z_Construct_UClass_URigVMEdGraphUnitNodeSpawner_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URigVMEdGraphUnitNodeSpawner_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_URigVMEdGraphUnitNodeSpawner()
	{
		if (!Z_Registration_Info_UClass_URigVMEdGraphUnitNodeSpawner.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URigVMEdGraphUnitNodeSpawner.OuterSingleton, Z_Construct_UClass_URigVMEdGraphUnitNodeSpawner_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URigVMEdGraphUnitNodeSpawner.OuterSingleton;
	}
	template<> RIGVMEDITOR_API UClass* StaticClass<URigVMEdGraphUnitNodeSpawner>()
	{
		return URigVMEdGraphUnitNodeSpawner::StaticClass();
	}
	URigVMEdGraphUnitNodeSpawner::URigVMEdGraphUnitNodeSpawner(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URigVMEdGraphUnitNodeSpawner);
	URigVMEdGraphUnitNodeSpawner::~URigVMEdGraphUnitNodeSpawner() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVMEditor_Public_EdGraph_NodeSpawners_RigVMEdGraphUnitNodeSpawner_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVMEditor_Public_EdGraph_NodeSpawners_RigVMEdGraphUnitNodeSpawner_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_URigVMEdGraphUnitNodeSpawner, URigVMEdGraphUnitNodeSpawner::StaticClass, TEXT("URigVMEdGraphUnitNodeSpawner"), &Z_Registration_Info_UClass_URigVMEdGraphUnitNodeSpawner, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URigVMEdGraphUnitNodeSpawner), 2592691432U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVMEditor_Public_EdGraph_NodeSpawners_RigVMEdGraphUnitNodeSpawner_h_419175480(TEXT("/Script/RigVMEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVMEditor_Public_EdGraph_NodeSpawners_RigVMEdGraphUnitNodeSpawner_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVMEditor_Public_EdGraph_NodeSpawners_RigVMEdGraphUnitNodeSpawner_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
