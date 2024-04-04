// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EdGraph/NodeSpawners/RigVMEdGraphFunctionRefNodeSpawner.h"
#include "RigVMCore/RigVMGraphFunctionDefinition.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigVMEdGraphFunctionRefNodeSpawner() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMGraphFunctionHeader();
	RIGVMEDITOR_API UClass* Z_Construct_UClass_URigVMEdGraphFunctionRefNodeSpawner();
	RIGVMEDITOR_API UClass* Z_Construct_UClass_URigVMEdGraphFunctionRefNodeSpawner_NoRegister();
	RIGVMEDITOR_API UClass* Z_Construct_UClass_URigVMEdGraphNodeSpawner();
	UPackage* Z_Construct_UPackage__Script_RigVMEditor();
// End Cross Module References
	void URigVMEdGraphFunctionRefNodeSpawner::StaticRegisterNativesURigVMEdGraphFunctionRefNodeSpawner()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URigVMEdGraphFunctionRefNodeSpawner);
	UClass* Z_Construct_UClass_URigVMEdGraphFunctionRefNodeSpawner_NoRegister()
	{
		return URigVMEdGraphFunctionRefNodeSpawner::StaticClass();
	}
	struct Z_Construct_UClass_URigVMEdGraphFunctionRefNodeSpawner_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReferencedPublicFunctionHeader_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReferencedPublicFunctionHeader;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsLocalFunction_MetaData[];
#endif
		static void NewProp_bIsLocalFunction_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsLocalFunction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AssetPath_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AssetPath;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URigVMEdGraphFunctionRefNodeSpawner_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_URigVMEdGraphNodeSpawner,
		(UObject* (*)())Z_Construct_UPackage__Script_RigVMEditor,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URigVMEdGraphFunctionRefNodeSpawner_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URigVMEdGraphFunctionRefNodeSpawner_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EdGraph/NodeSpawners/RigVMEdGraphFunctionRefNodeSpawner.h" },
		{ "ModuleRelativePath", "Public/EdGraph/NodeSpawners/RigVMEdGraphFunctionRefNodeSpawner.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URigVMEdGraphFunctionRefNodeSpawner_Statics::NewProp_ReferencedPublicFunctionHeader_MetaData[] = {
		{ "Comment", "/** The public function definition we will spawn from [optional] */" },
		{ "ModuleRelativePath", "Public/EdGraph/NodeSpawners/RigVMEdGraphFunctionRefNodeSpawner.h" },
		{ "ToolTip", "The public function definition we will spawn from [optional]" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URigVMEdGraphFunctionRefNodeSpawner_Statics::NewProp_ReferencedPublicFunctionHeader = { "ReferencedPublicFunctionHeader", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URigVMEdGraphFunctionRefNodeSpawner, ReferencedPublicFunctionHeader), Z_Construct_UScriptStruct_FRigVMGraphFunctionHeader, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URigVMEdGraphFunctionRefNodeSpawner_Statics::NewProp_ReferencedPublicFunctionHeader_MetaData), Z_Construct_UClass_URigVMEdGraphFunctionRefNodeSpawner_Statics::NewProp_ReferencedPublicFunctionHeader_MetaData) }; // 1196129345
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URigVMEdGraphFunctionRefNodeSpawner_Statics::NewProp_bIsLocalFunction_MetaData[] = {
		{ "Comment", "/** Marked as true for local function definitions */" },
		{ "ModuleRelativePath", "Public/EdGraph/NodeSpawners/RigVMEdGraphFunctionRefNodeSpawner.h" },
		{ "ToolTip", "Marked as true for local function definitions" },
	};
#endif
	void Z_Construct_UClass_URigVMEdGraphFunctionRefNodeSpawner_Statics::NewProp_bIsLocalFunction_SetBit(void* Obj)
	{
		((URigVMEdGraphFunctionRefNodeSpawner*)Obj)->bIsLocalFunction = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URigVMEdGraphFunctionRefNodeSpawner_Statics::NewProp_bIsLocalFunction = { "bIsLocalFunction", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(URigVMEdGraphFunctionRefNodeSpawner), &Z_Construct_UClass_URigVMEdGraphFunctionRefNodeSpawner_Statics::NewProp_bIsLocalFunction_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URigVMEdGraphFunctionRefNodeSpawner_Statics::NewProp_bIsLocalFunction_MetaData), Z_Construct_UClass_URigVMEdGraphFunctionRefNodeSpawner_Statics::NewProp_bIsLocalFunction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URigVMEdGraphFunctionRefNodeSpawner_Statics::NewProp_AssetPath_MetaData[] = {
		{ "ModuleRelativePath", "Public/EdGraph/NodeSpawners/RigVMEdGraphFunctionRefNodeSpawner.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URigVMEdGraphFunctionRefNodeSpawner_Statics::NewProp_AssetPath = { "AssetPath", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URigVMEdGraphFunctionRefNodeSpawner, AssetPath), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URigVMEdGraphFunctionRefNodeSpawner_Statics::NewProp_AssetPath_MetaData), Z_Construct_UClass_URigVMEdGraphFunctionRefNodeSpawner_Statics::NewProp_AssetPath_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URigVMEdGraphFunctionRefNodeSpawner_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URigVMEdGraphFunctionRefNodeSpawner_Statics::NewProp_ReferencedPublicFunctionHeader,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URigVMEdGraphFunctionRefNodeSpawner_Statics::NewProp_bIsLocalFunction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URigVMEdGraphFunctionRefNodeSpawner_Statics::NewProp_AssetPath,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URigVMEdGraphFunctionRefNodeSpawner_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URigVMEdGraphFunctionRefNodeSpawner>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URigVMEdGraphFunctionRefNodeSpawner_Statics::ClassParams = {
		&URigVMEdGraphFunctionRefNodeSpawner::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_URigVMEdGraphFunctionRefNodeSpawner_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_URigVMEdGraphFunctionRefNodeSpawner_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URigVMEdGraphFunctionRefNodeSpawner_Statics::Class_MetaDataParams), Z_Construct_UClass_URigVMEdGraphFunctionRefNodeSpawner_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URigVMEdGraphFunctionRefNodeSpawner_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_URigVMEdGraphFunctionRefNodeSpawner()
	{
		if (!Z_Registration_Info_UClass_URigVMEdGraphFunctionRefNodeSpawner.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URigVMEdGraphFunctionRefNodeSpawner.OuterSingleton, Z_Construct_UClass_URigVMEdGraphFunctionRefNodeSpawner_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URigVMEdGraphFunctionRefNodeSpawner.OuterSingleton;
	}
	template<> RIGVMEDITOR_API UClass* StaticClass<URigVMEdGraphFunctionRefNodeSpawner>()
	{
		return URigVMEdGraphFunctionRefNodeSpawner::StaticClass();
	}
	URigVMEdGraphFunctionRefNodeSpawner::URigVMEdGraphFunctionRefNodeSpawner(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URigVMEdGraphFunctionRefNodeSpawner);
	URigVMEdGraphFunctionRefNodeSpawner::~URigVMEdGraphFunctionRefNodeSpawner() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVMEditor_Public_EdGraph_NodeSpawners_RigVMEdGraphFunctionRefNodeSpawner_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVMEditor_Public_EdGraph_NodeSpawners_RigVMEdGraphFunctionRefNodeSpawner_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_URigVMEdGraphFunctionRefNodeSpawner, URigVMEdGraphFunctionRefNodeSpawner::StaticClass, TEXT("URigVMEdGraphFunctionRefNodeSpawner"), &Z_Registration_Info_UClass_URigVMEdGraphFunctionRefNodeSpawner, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URigVMEdGraphFunctionRefNodeSpawner), 2204088669U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVMEditor_Public_EdGraph_NodeSpawners_RigVMEdGraphFunctionRefNodeSpawner_h_296046944(TEXT("/Script/RigVMEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVMEditor_Public_EdGraph_NodeSpawners_RigVMEdGraphFunctionRefNodeSpawner_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVMEditor_Public_EdGraph_NodeSpawners_RigVMEdGraphFunctionRefNodeSpawner_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
