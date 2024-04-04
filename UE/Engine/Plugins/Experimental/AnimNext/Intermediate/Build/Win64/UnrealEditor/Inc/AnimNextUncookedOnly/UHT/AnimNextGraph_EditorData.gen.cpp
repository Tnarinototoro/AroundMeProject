// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Internal/Graph/AnimNextGraph_EditorData.h"
#include "RigVMBlueprint.h"
#include "RigVMCompiler/RigVMCompiler.h"
#include "RigVMCore/RigVMExecuteContext.h"
#include "RigVMCore/RigVMGraphFunctionHost.h"
#include "RigVMCore/RigVMMemoryCommon.h"
#include "RigVMModel/RigVMClient.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNextGraph_EditorData() {}
// Cross Module References
	ANIMNEXTUNCOOKEDONLY_API UClass* Z_Construct_UClass_UAnimNextGraph_EdGraph_NoRegister();
	ANIMNEXTUNCOOKEDONLY_API UClass* Z_Construct_UClass_UAnimNextGraph_EditorData();
	ANIMNEXTUNCOOKEDONLY_API UClass* Z_Construct_UClass_UAnimNextGraph_EditorData_NoRegister();
	ANIMNEXTUNCOOKEDONLY_API UClass* Z_Construct_UClass_UAnimNextGraph_Schema();
	ANIMNEXTUNCOOKEDONLY_API UClass* Z_Construct_UClass_UAnimNextGraph_Schema_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	RIGVM_API UClass* Z_Construct_UClass_URigVMGraphFunctionHost_NoRegister();
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMGraphFunctionStore();
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMOperand();
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMRuntimeSettings();
	RIGVMDEVELOPER_API UClass* Z_Construct_UClass_URigVMClientHost_NoRegister();
	RIGVMDEVELOPER_API UClass* Z_Construct_UClass_URigVMController_NoRegister();
	RIGVMDEVELOPER_API UClass* Z_Construct_UClass_URigVMGraph_NoRegister();
	RIGVMDEVELOPER_API UClass* Z_Construct_UClass_URigVMLibraryNode_NoRegister();
	RIGVMDEVELOPER_API UClass* Z_Construct_UClass_URigVMSchema();
	RIGVMDEVELOPER_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMClient();
	RIGVMDEVELOPER_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMCompileSettings();
	RIGVMDEVELOPER_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMEdGraphDisplaySettings();
	UPackage* Z_Construct_UPackage__Script_AnimNextUncookedOnly();
// End Cross Module References
	void UAnimNextGraph_Schema::StaticRegisterNativesUAnimNextGraph_Schema()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimNextGraph_Schema);
	UClass* Z_Construct_UClass_UAnimNextGraph_Schema_NoRegister()
	{
		return UAnimNextGraph_Schema::StaticClass();
	}
	struct Z_Construct_UClass_UAnimNextGraph_Schema_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimNextGraph_Schema_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_URigVMSchema,
		(UObject* (*)())Z_Construct_UPackage__Script_AnimNextUncookedOnly,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNextGraph_Schema_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimNextGraph_Schema_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Graph/AnimNextGraph_EditorData.h" },
		{ "ModuleRelativePath", "Internal/Graph/AnimNextGraph_EditorData.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimNextGraph_Schema_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimNextGraph_Schema>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimNextGraph_Schema_Statics::ClassParams = {
		&UAnimNextGraph_Schema::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNextGraph_Schema_Statics::Class_MetaDataParams), Z_Construct_UClass_UAnimNextGraph_Schema_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UAnimNextGraph_Schema()
	{
		if (!Z_Registration_Info_UClass_UAnimNextGraph_Schema.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimNextGraph_Schema.OuterSingleton, Z_Construct_UClass_UAnimNextGraph_Schema_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAnimNextGraph_Schema.OuterSingleton;
	}
	template<> ANIMNEXTUNCOOKEDONLY_API UClass* StaticClass<UAnimNextGraph_Schema>()
	{
		return UAnimNextGraph_Schema::StaticClass();
	}
	UAnimNextGraph_Schema::UAnimNextGraph_Schema() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimNextGraph_Schema);
	UAnimNextGraph_Schema::~UAnimNextGraph_Schema() {}
	void UAnimNextGraph_EditorData::StaticRegisterNativesUAnimNextGraph_EditorData()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimNextGraph_EditorData);
	UClass* Z_Construct_UClass_UAnimNextGraph_EditorData_NoRegister()
	{
		return UAnimNextGraph_EditorData::StaticClass();
	}
	struct Z_Construct_UClass_UAnimNextGraph_EditorData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RootGraph_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_RootGraph;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EntryPointGraph_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_EntryPointGraph;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FunctionLibraryEdGraph_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_FunctionLibraryEdGraph;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RigVMClient_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RigVMClient;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GraphFunctionStore_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GraphFunctionStore;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EntryPoint_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_EntryPoint;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Controllers_ValueProp;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Controllers_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Controllers_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_Controllers;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RigGraphDisplaySettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RigGraphDisplaySettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VMRuntimeSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_VMRuntimeSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VMCompileSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_VMCompileSettings;
		static const UECodeGen_Private::FStructPropertyParams NewProp_PinToOperandMap_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_PinToOperandMap_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PinToOperandMap_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_PinToOperandMap;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bVMRecompilationRequired_MetaData[];
#endif
		static void NewProp_bVMRecompilationRequired_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bVMRecompilationRequired;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsCompiling_MetaData[];
#endif
		static void NewProp_bIsCompiling_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsCompiling;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimNextGraph_EditorData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AnimNextUncookedOnly,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNextGraph_EditorData_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimNextGraph_EditorData_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Graph/AnimNextGraph_EditorData.h" },
		{ "ModuleRelativePath", "Internal/Graph/AnimNextGraph_EditorData.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimNextGraph_EditorData_Statics::NewProp_RootGraph_MetaData[] = {
		{ "ModuleRelativePath", "Internal/Graph/AnimNextGraph_EditorData.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UAnimNextGraph_EditorData_Statics::NewProp_RootGraph = { "RootGraph", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimNextGraph_EditorData, RootGraph), Z_Construct_UClass_UAnimNextGraph_EdGraph_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNextGraph_EditorData_Statics::NewProp_RootGraph_MetaData), Z_Construct_UClass_UAnimNextGraph_EditorData_Statics::NewProp_RootGraph_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimNextGraph_EditorData_Statics::NewProp_EntryPointGraph_MetaData[] = {
		{ "ModuleRelativePath", "Internal/Graph/AnimNextGraph_EditorData.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UAnimNextGraph_EditorData_Statics::NewProp_EntryPointGraph = { "EntryPointGraph", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimNextGraph_EditorData, EntryPointGraph), Z_Construct_UClass_UAnimNextGraph_EdGraph_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNextGraph_EditorData_Statics::NewProp_EntryPointGraph_MetaData), Z_Construct_UClass_UAnimNextGraph_EditorData_Statics::NewProp_EntryPointGraph_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimNextGraph_EditorData_Statics::NewProp_FunctionLibraryEdGraph_MetaData[] = {
		{ "ModuleRelativePath", "Internal/Graph/AnimNextGraph_EditorData.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UAnimNextGraph_EditorData_Statics::NewProp_FunctionLibraryEdGraph = { "FunctionLibraryEdGraph", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimNextGraph_EditorData, FunctionLibraryEdGraph), Z_Construct_UClass_UAnimNextGraph_EdGraph_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNextGraph_EditorData_Statics::NewProp_FunctionLibraryEdGraph_MetaData), Z_Construct_UClass_UAnimNextGraph_EditorData_Statics::NewProp_FunctionLibraryEdGraph_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimNextGraph_EditorData_Statics::NewProp_RigVMClient_MetaData[] = {
		{ "ModuleRelativePath", "Internal/Graph/AnimNextGraph_EditorData.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimNextGraph_EditorData_Statics::NewProp_RigVMClient = { "RigVMClient", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimNextGraph_EditorData, RigVMClient), Z_Construct_UScriptStruct_FRigVMClient, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNextGraph_EditorData_Statics::NewProp_RigVMClient_MetaData), Z_Construct_UClass_UAnimNextGraph_EditorData_Statics::NewProp_RigVMClient_MetaData) }; // 2430807336
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimNextGraph_EditorData_Statics::NewProp_GraphFunctionStore_MetaData[] = {
		{ "ModuleRelativePath", "Internal/Graph/AnimNextGraph_EditorData.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimNextGraph_EditorData_Statics::NewProp_GraphFunctionStore = { "GraphFunctionStore", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimNextGraph_EditorData, GraphFunctionStore), Z_Construct_UScriptStruct_FRigVMGraphFunctionStore, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNextGraph_EditorData_Statics::NewProp_GraphFunctionStore_MetaData), Z_Construct_UClass_UAnimNextGraph_EditorData_Statics::NewProp_GraphFunctionStore_MetaData) }; // 3413187905
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimNextGraph_EditorData_Statics::NewProp_EntryPoint_MetaData[] = {
		{ "ModuleRelativePath", "Internal/Graph/AnimNextGraph_EditorData.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UAnimNextGraph_EditorData_Statics::NewProp_EntryPoint = { "EntryPoint", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimNextGraph_EditorData, EntryPoint), Z_Construct_UClass_URigVMLibraryNode_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNextGraph_EditorData_Statics::NewProp_EntryPoint_MetaData), Z_Construct_UClass_UAnimNextGraph_EditorData_Statics::NewProp_EntryPoint_MetaData) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UAnimNextGraph_EditorData_Statics::NewProp_Controllers_ValueProp = { "Controllers", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_URigVMController_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UAnimNextGraph_EditorData_Statics::NewProp_Controllers_Key_KeyProp = { "Controllers_Key", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_URigVMGraph_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimNextGraph_EditorData_Statics::NewProp_Controllers_MetaData[] = {
		{ "ModuleRelativePath", "Internal/Graph/AnimNextGraph_EditorData.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UAnimNextGraph_EditorData_Statics::NewProp_Controllers = { "Controllers", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimNextGraph_EditorData, Controllers), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNextGraph_EditorData_Statics::NewProp_Controllers_MetaData), Z_Construct_UClass_UAnimNextGraph_EditorData_Statics::NewProp_Controllers_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimNextGraph_EditorData_Statics::NewProp_RigGraphDisplaySettings_MetaData[] = {
		{ "Category", "User Interface" },
		{ "ModuleRelativePath", "Internal/Graph/AnimNextGraph_EditorData.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimNextGraph_EditorData_Statics::NewProp_RigGraphDisplaySettings = { "RigGraphDisplaySettings", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimNextGraph_EditorData, RigGraphDisplaySettings), Z_Construct_UScriptStruct_FRigVMEdGraphDisplaySettings, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNextGraph_EditorData_Statics::NewProp_RigGraphDisplaySettings_MetaData), Z_Construct_UClass_UAnimNextGraph_EditorData_Statics::NewProp_RigGraphDisplaySettings_MetaData) }; // 258900512
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimNextGraph_EditorData_Statics::NewProp_VMRuntimeSettings_MetaData[] = {
		{ "Category", "VM" },
		{ "ModuleRelativePath", "Internal/Graph/AnimNextGraph_EditorData.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimNextGraph_EditorData_Statics::NewProp_VMRuntimeSettings = { "VMRuntimeSettings", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimNextGraph_EditorData, VMRuntimeSettings), Z_Construct_UScriptStruct_FRigVMRuntimeSettings, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNextGraph_EditorData_Statics::NewProp_VMRuntimeSettings_MetaData), Z_Construct_UClass_UAnimNextGraph_EditorData_Statics::NewProp_VMRuntimeSettings_MetaData) }; // 2055583755
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimNextGraph_EditorData_Statics::NewProp_VMCompileSettings_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "VM" },
		{ "ModuleRelativePath", "Internal/Graph/AnimNextGraph_EditorData.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimNextGraph_EditorData_Statics::NewProp_VMCompileSettings = { "VMCompileSettings", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimNextGraph_EditorData, VMCompileSettings), Z_Construct_UScriptStruct_FRigVMCompileSettings, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNextGraph_EditorData_Statics::NewProp_VMCompileSettings_MetaData), Z_Construct_UClass_UAnimNextGraph_EditorData_Statics::NewProp_VMCompileSettings_MetaData) }; // 1268903359
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimNextGraph_EditorData_Statics::NewProp_PinToOperandMap_ValueProp = { "PinToOperandMap", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FRigVMOperand, METADATA_PARAMS(0, nullptr) }; // 3848891530
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAnimNextGraph_EditorData_Statics::NewProp_PinToOperandMap_Key_KeyProp = { "PinToOperandMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimNextGraph_EditorData_Statics::NewProp_PinToOperandMap_MetaData[] = {
		{ "ModuleRelativePath", "Internal/Graph/AnimNextGraph_EditorData.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UAnimNextGraph_EditorData_Statics::NewProp_PinToOperandMap = { "PinToOperandMap", nullptr, (EPropertyFlags)0x0040000000202000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimNextGraph_EditorData, PinToOperandMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNextGraph_EditorData_Statics::NewProp_PinToOperandMap_MetaData), Z_Construct_UClass_UAnimNextGraph_EditorData_Statics::NewProp_PinToOperandMap_MetaData) }; // 3848891530
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimNextGraph_EditorData_Statics::NewProp_bVMRecompilationRequired_MetaData[] = {
		{ "ModuleRelativePath", "Internal/Graph/AnimNextGraph_EditorData.h" },
	};
#endif
	void Z_Construct_UClass_UAnimNextGraph_EditorData_Statics::NewProp_bVMRecompilationRequired_SetBit(void* Obj)
	{
		((UAnimNextGraph_EditorData*)Obj)->bVMRecompilationRequired = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimNextGraph_EditorData_Statics::NewProp_bVMRecompilationRequired = { "bVMRecompilationRequired", nullptr, (EPropertyFlags)0x0040000000202000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAnimNextGraph_EditorData), &Z_Construct_UClass_UAnimNextGraph_EditorData_Statics::NewProp_bVMRecompilationRequired_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNextGraph_EditorData_Statics::NewProp_bVMRecompilationRequired_MetaData), Z_Construct_UClass_UAnimNextGraph_EditorData_Statics::NewProp_bVMRecompilationRequired_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimNextGraph_EditorData_Statics::NewProp_bIsCompiling_MetaData[] = {
		{ "ModuleRelativePath", "Internal/Graph/AnimNextGraph_EditorData.h" },
	};
#endif
	void Z_Construct_UClass_UAnimNextGraph_EditorData_Statics::NewProp_bIsCompiling_SetBit(void* Obj)
	{
		((UAnimNextGraph_EditorData*)Obj)->bIsCompiling = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimNextGraph_EditorData_Statics::NewProp_bIsCompiling = { "bIsCompiling", nullptr, (EPropertyFlags)0x0040000000202000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAnimNextGraph_EditorData), &Z_Construct_UClass_UAnimNextGraph_EditorData_Statics::NewProp_bIsCompiling_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNextGraph_EditorData_Statics::NewProp_bIsCompiling_MetaData), Z_Construct_UClass_UAnimNextGraph_EditorData_Statics::NewProp_bIsCompiling_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimNextGraph_EditorData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNextGraph_EditorData_Statics::NewProp_RootGraph,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNextGraph_EditorData_Statics::NewProp_EntryPointGraph,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNextGraph_EditorData_Statics::NewProp_FunctionLibraryEdGraph,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNextGraph_EditorData_Statics::NewProp_RigVMClient,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNextGraph_EditorData_Statics::NewProp_GraphFunctionStore,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNextGraph_EditorData_Statics::NewProp_EntryPoint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNextGraph_EditorData_Statics::NewProp_Controllers_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNextGraph_EditorData_Statics::NewProp_Controllers_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNextGraph_EditorData_Statics::NewProp_Controllers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNextGraph_EditorData_Statics::NewProp_RigGraphDisplaySettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNextGraph_EditorData_Statics::NewProp_VMRuntimeSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNextGraph_EditorData_Statics::NewProp_VMCompileSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNextGraph_EditorData_Statics::NewProp_PinToOperandMap_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNextGraph_EditorData_Statics::NewProp_PinToOperandMap_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNextGraph_EditorData_Statics::NewProp_PinToOperandMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNextGraph_EditorData_Statics::NewProp_bVMRecompilationRequired,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNextGraph_EditorData_Statics::NewProp_bIsCompiling,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UAnimNextGraph_EditorData_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_URigVMClientHost_NoRegister, (int32)VTABLE_OFFSET(UAnimNextGraph_EditorData, IRigVMClientHost), false },  // 812804782
			{ Z_Construct_UClass_URigVMGraphFunctionHost_NoRegister, (int32)VTABLE_OFFSET(UAnimNextGraph_EditorData, IRigVMGraphFunctionHost), false },  // 4190385312
		};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNextGraph_EditorData_Statics::InterfaceParams) < 64);
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimNextGraph_EditorData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimNextGraph_EditorData>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimNextGraph_EditorData_Statics::ClassParams = {
		&UAnimNextGraph_EditorData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAnimNextGraph_EditorData_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNextGraph_EditorData_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x000800A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNextGraph_EditorData_Statics::Class_MetaDataParams), Z_Construct_UClass_UAnimNextGraph_EditorData_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNextGraph_EditorData_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UAnimNextGraph_EditorData()
	{
		if (!Z_Registration_Info_UClass_UAnimNextGraph_EditorData.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimNextGraph_EditorData.OuterSingleton, Z_Construct_UClass_UAnimNextGraph_EditorData_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAnimNextGraph_EditorData.OuterSingleton;
	}
	template<> ANIMNEXTUNCOOKEDONLY_API UClass* StaticClass<UAnimNextGraph_EditorData>()
	{
		return UAnimNextGraph_EditorData::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimNextGraph_EditorData);
	UAnimNextGraph_EditorData::~UAnimNextGraph_EditorData() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UAnimNextGraph_EditorData)
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNextUncookedOnly_Internal_Graph_AnimNextGraph_EditorData_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNextUncookedOnly_Internal_Graph_AnimNextGraph_EditorData_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAnimNextGraph_Schema, UAnimNextGraph_Schema::StaticClass, TEXT("UAnimNextGraph_Schema"), &Z_Registration_Info_UClass_UAnimNextGraph_Schema, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimNextGraph_Schema), 3383510360U) },
		{ Z_Construct_UClass_UAnimNextGraph_EditorData, UAnimNextGraph_EditorData::StaticClass, TEXT("UAnimNextGraph_EditorData"), &Z_Registration_Info_UClass_UAnimNextGraph_EditorData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimNextGraph_EditorData), 2834700681U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNextUncookedOnly_Internal_Graph_AnimNextGraph_EditorData_h_2904875170(TEXT("/Script/AnimNextUncookedOnly"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNextUncookedOnly_Internal_Graph_AnimNextGraph_EditorData_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNextUncookedOnly_Internal_Graph_AnimNextGraph_EditorData_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
