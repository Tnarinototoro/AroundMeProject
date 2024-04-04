// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Internal/Param/AnimNextParameterBlock_EditorData.h"
#include "../../Source/Runtime/Engine/Classes/Engine/Blueprint.h"
#include "RigVMBlueprint.h"
#include "RigVMCompiler/RigVMCompiler.h"
#include "RigVMCore/RigVMExecuteContext.h"
#include "RigVMCore/RigVMGraphFunctionHost.h"
#include "RigVMCore/RigVMMemoryCommon.h"
#include "RigVMModel/RigVMClient.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNextParameterBlock_EditorData() {}
// Cross Module References
	ANIMNEXT_API UClass* Z_Construct_UClass_UAnimNextParameterBlock_NoRegister();
	ANIMNEXTUNCOOKEDONLY_API UClass* Z_Construct_UClass_UAnimNextParameterBlock_EdGraph_NoRegister();
	ANIMNEXTUNCOOKEDONLY_API UClass* Z_Construct_UClass_UAnimNextParameterBlock_EditorData();
	ANIMNEXTUNCOOKEDONLY_API UClass* Z_Construct_UClass_UAnimNextParameterBlock_EditorData_NoRegister();
	ANIMNEXTUNCOOKEDONLY_API UClass* Z_Construct_UClass_UAnimNextParameterBlockBinding_NoRegister();
	ANIMNEXTUNCOOKEDONLY_API UClass* Z_Construct_UClass_UAnimNextParameterBlockBindingReference_NoRegister();
	ANIMNEXTUNCOOKEDONLY_API UClass* Z_Construct_UClass_UAnimNextParameterBlockEntry_NoRegister();
	ANIMNEXTUNCOOKEDONLY_API UClass* Z_Construct_UClass_UAnimNextParameterBlockLibrary();
	ANIMNEXTUNCOOKEDONLY_API UClass* Z_Construct_UClass_UAnimNextParameterBlockLibrary_NoRegister();
	ANIMNEXTUNCOOKEDONLY_API UClass* Z_Construct_UClass_UAnimNextParameterBlockLibrary_Schema();
	ANIMNEXTUNCOOKEDONLY_API UClass* Z_Construct_UClass_UAnimNextParameterBlockLibrary_Schema_NoRegister();
	ANIMNEXTUNCOOKEDONLY_API UClass* Z_Construct_UClass_UAnimNextParameterLibrary_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FEditedDocumentInfo();
	RIGVM_API UClass* Z_Construct_UClass_URigVMGraphFunctionHost_NoRegister();
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMGraphFunctionStore();
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMOperand();
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMRuntimeSettings();
	RIGVMDEVELOPER_API UClass* Z_Construct_UClass_URigVMClientHost_NoRegister();
	RIGVMDEVELOPER_API UClass* Z_Construct_UClass_URigVMSchema();
	RIGVMDEVELOPER_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMClient();
	RIGVMDEVELOPER_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMCompileSettings();
	RIGVMDEVELOPER_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMEdGraphDisplaySettings();
	UPackage* Z_Construct_UPackage__Script_AnimNextUncookedOnly();
// End Cross Module References
	void UAnimNextParameterBlockLibrary_Schema::StaticRegisterNativesUAnimNextParameterBlockLibrary_Schema()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimNextParameterBlockLibrary_Schema);
	UClass* Z_Construct_UClass_UAnimNextParameterBlockLibrary_Schema_NoRegister()
	{
		return UAnimNextParameterBlockLibrary_Schema::StaticClass();
	}
	struct Z_Construct_UClass_UAnimNextParameterBlockLibrary_Schema_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimNextParameterBlockLibrary_Schema_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_URigVMSchema,
		(UObject* (*)())Z_Construct_UPackage__Script_AnimNextUncookedOnly,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNextParameterBlockLibrary_Schema_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimNextParameterBlockLibrary_Schema_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Param/AnimNextParameterBlock_EditorData.h" },
		{ "ModuleRelativePath", "Internal/Param/AnimNextParameterBlock_EditorData.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimNextParameterBlockLibrary_Schema_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimNextParameterBlockLibrary_Schema>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimNextParameterBlockLibrary_Schema_Statics::ClassParams = {
		&UAnimNextParameterBlockLibrary_Schema::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNextParameterBlockLibrary_Schema_Statics::Class_MetaDataParams), Z_Construct_UClass_UAnimNextParameterBlockLibrary_Schema_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UAnimNextParameterBlockLibrary_Schema()
	{
		if (!Z_Registration_Info_UClass_UAnimNextParameterBlockLibrary_Schema.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimNextParameterBlockLibrary_Schema.OuterSingleton, Z_Construct_UClass_UAnimNextParameterBlockLibrary_Schema_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAnimNextParameterBlockLibrary_Schema.OuterSingleton;
	}
	template<> ANIMNEXTUNCOOKEDONLY_API UClass* StaticClass<UAnimNextParameterBlockLibrary_Schema>()
	{
		return UAnimNextParameterBlockLibrary_Schema::StaticClass();
	}
	UAnimNextParameterBlockLibrary_Schema::UAnimNextParameterBlockLibrary_Schema() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimNextParameterBlockLibrary_Schema);
	UAnimNextParameterBlockLibrary_Schema::~UAnimNextParameterBlockLibrary_Schema() {}
	DEFINE_FUNCTION(UAnimNextParameterBlockLibrary::execFindBinding)
	{
		P_GET_OBJECT(UAnimNextParameterBlock,Z_Param_InBlock);
		P_GET_PROPERTY(FNameProperty,Z_Param_InName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAnimNextParameterBlockEntry**)Z_Param__Result=UAnimNextParameterBlockLibrary::FindBinding(Z_Param_InBlock,Z_Param_InName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimNextParameterBlockLibrary::execRemoveEntries)
	{
		P_GET_OBJECT(UAnimNextParameterBlock,Z_Param_InBlock);
		P_GET_TARRAY_REF(UAnimNextParameterBlockEntry*,Z_Param_Out_InEntries);
		P_GET_UBOOL(Z_Param_bSetupUndoRedo);
		P_GET_UBOOL(Z_Param_bPrintPythonCommand);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UAnimNextParameterBlockLibrary::RemoveEntries(Z_Param_InBlock,Z_Param_Out_InEntries,Z_Param_bSetupUndoRedo,Z_Param_bPrintPythonCommand);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimNextParameterBlockLibrary::execRemoveEntry)
	{
		P_GET_OBJECT(UAnimNextParameterBlock,Z_Param_InBlock);
		P_GET_OBJECT(UAnimNextParameterBlockEntry,Z_Param_InEntry);
		P_GET_UBOOL(Z_Param_bSetupUndoRedo);
		P_GET_UBOOL(Z_Param_bPrintPythonCommand);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UAnimNextParameterBlockLibrary::RemoveEntry(Z_Param_InBlock,Z_Param_InEntry,Z_Param_bSetupUndoRedo,Z_Param_bPrintPythonCommand);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimNextParameterBlockLibrary::execRemoveAllBindings)
	{
		P_GET_OBJECT(UAnimNextParameterBlock,Z_Param_InBlock);
		P_GET_PROPERTY(FNameProperty,Z_Param_InName);
		P_GET_UBOOL(Z_Param_bSetupUndoRedo);
		P_GET_UBOOL(Z_Param_bPrintPythonCommand);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UAnimNextParameterBlockLibrary::RemoveAllBindings(Z_Param_InBlock,Z_Param_InName,Z_Param_bSetupUndoRedo,Z_Param_bPrintPythonCommand);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimNextParameterBlockLibrary::execAddBindingReference)
	{
		P_GET_OBJECT(UAnimNextParameterBlock,Z_Param_InBlock);
		P_GET_PROPERTY(FNameProperty,Z_Param_InName);
		P_GET_OBJECT(UAnimNextParameterLibrary,Z_Param_InLibrary);
		P_GET_OBJECT(UAnimNextParameterBlock,Z_Param_InReferencedBlock);
		P_GET_UBOOL(Z_Param_bSetupUndoRedo);
		P_GET_UBOOL(Z_Param_bPrintPythonCommand);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAnimNextParameterBlockBindingReference**)Z_Param__Result=UAnimNextParameterBlockLibrary::AddBindingReference(Z_Param_InBlock,Z_Param_InName,Z_Param_InLibrary,Z_Param_InReferencedBlock,Z_Param_bSetupUndoRedo,Z_Param_bPrintPythonCommand);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimNextParameterBlockLibrary::execAddBinding)
	{
		P_GET_OBJECT(UAnimNextParameterBlock,Z_Param_InBlock);
		P_GET_PROPERTY(FNameProperty,Z_Param_InName);
		P_GET_OBJECT(UAnimNextParameterLibrary,Z_Param_InLibrary);
		P_GET_UBOOL(Z_Param_bSetupUndoRedo);
		P_GET_UBOOL(Z_Param_bPrintPythonCommand);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAnimNextParameterBlockBinding**)Z_Param__Result=UAnimNextParameterBlockLibrary::AddBinding(Z_Param_InBlock,Z_Param_InName,Z_Param_InLibrary,Z_Param_bSetupUndoRedo,Z_Param_bPrintPythonCommand);
		P_NATIVE_END;
	}
	void UAnimNextParameterBlockLibrary::StaticRegisterNativesUAnimNextParameterBlockLibrary()
	{
		UClass* Class = UAnimNextParameterBlockLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddBinding", &UAnimNextParameterBlockLibrary::execAddBinding },
			{ "AddBindingReference", &UAnimNextParameterBlockLibrary::execAddBindingReference },
			{ "FindBinding", &UAnimNextParameterBlockLibrary::execFindBinding },
			{ "RemoveAllBindings", &UAnimNextParameterBlockLibrary::execRemoveAllBindings },
			{ "RemoveEntries", &UAnimNextParameterBlockLibrary::execRemoveEntries },
			{ "RemoveEntry", &UAnimNextParameterBlockLibrary::execRemoveEntry },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAnimNextParameterBlockLibrary_AddBinding_Statics
	{
		struct AnimNextParameterBlockLibrary_eventAddBinding_Parms
		{
			UAnimNextParameterBlock* InBlock;
			FName InName;
			UAnimNextParameterLibrary* InLibrary;
			bool bSetupUndoRedo;
			bool bPrintPythonCommand;
			UAnimNextParameterBlockBinding* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InBlock;
		static const UECodeGen_Private::FNamePropertyParams NewProp_InName;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InLibrary;
		static void NewProp_bSetupUndoRedo_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSetupUndoRedo;
		static void NewProp_bPrintPythonCommand_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPrintPythonCommand;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimNextParameterBlockLibrary_AddBinding_Statics::NewProp_InBlock = { "InBlock", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimNextParameterBlockLibrary_eventAddBinding_Parms, InBlock), Z_Construct_UClass_UAnimNextParameterBlock_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAnimNextParameterBlockLibrary_AddBinding_Statics::NewProp_InName = { "InName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimNextParameterBlockLibrary_eventAddBinding_Parms, InName), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimNextParameterBlockLibrary_AddBinding_Statics::NewProp_InLibrary = { "InLibrary", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimNextParameterBlockLibrary_eventAddBinding_Parms, InLibrary), Z_Construct_UClass_UAnimNextParameterLibrary_NoRegister, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UAnimNextParameterBlockLibrary_AddBinding_Statics::NewProp_bSetupUndoRedo_SetBit(void* Obj)
	{
		((AnimNextParameterBlockLibrary_eventAddBinding_Parms*)Obj)->bSetupUndoRedo = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAnimNextParameterBlockLibrary_AddBinding_Statics::NewProp_bSetupUndoRedo = { "bSetupUndoRedo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AnimNextParameterBlockLibrary_eventAddBinding_Parms), &Z_Construct_UFunction_UAnimNextParameterBlockLibrary_AddBinding_Statics::NewProp_bSetupUndoRedo_SetBit, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UAnimNextParameterBlockLibrary_AddBinding_Statics::NewProp_bPrintPythonCommand_SetBit(void* Obj)
	{
		((AnimNextParameterBlockLibrary_eventAddBinding_Parms*)Obj)->bPrintPythonCommand = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAnimNextParameterBlockLibrary_AddBinding_Statics::NewProp_bPrintPythonCommand = { "bPrintPythonCommand", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AnimNextParameterBlockLibrary_eventAddBinding_Parms), &Z_Construct_UFunction_UAnimNextParameterBlockLibrary_AddBinding_Statics::NewProp_bPrintPythonCommand_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimNextParameterBlockLibrary_AddBinding_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimNextParameterBlockLibrary_eventAddBinding_Parms, ReturnValue), Z_Construct_UClass_UAnimNextParameterBlockBinding_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimNextParameterBlockLibrary_AddBinding_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimNextParameterBlockLibrary_AddBinding_Statics::NewProp_InBlock,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimNextParameterBlockLibrary_AddBinding_Statics::NewProp_InName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimNextParameterBlockLibrary_AddBinding_Statics::NewProp_InLibrary,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimNextParameterBlockLibrary_AddBinding_Statics::NewProp_bSetupUndoRedo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimNextParameterBlockLibrary_AddBinding_Statics::NewProp_bPrintPythonCommand,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimNextParameterBlockLibrary_AddBinding_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimNextParameterBlockLibrary_AddBinding_Statics::Function_MetaDataParams[] = {
		{ "Category", "AnimNext|Parameter Block" },
		{ "CPP_Default_bPrintPythonCommand", "true" },
		{ "CPP_Default_bSetupUndoRedo", "true" },
		{ "ModuleRelativePath", "Internal/Param/AnimNextParameterBlock_EditorData.h" },
		{ "ScriptMethod", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimNextParameterBlockLibrary_AddBinding_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimNextParameterBlockLibrary, nullptr, "AddBinding", nullptr, nullptr, Z_Construct_UFunction_UAnimNextParameterBlockLibrary_AddBinding_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimNextParameterBlockLibrary_AddBinding_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAnimNextParameterBlockLibrary_AddBinding_Statics::AnimNextParameterBlockLibrary_eventAddBinding_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimNextParameterBlockLibrary_AddBinding_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAnimNextParameterBlockLibrary_AddBinding_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimNextParameterBlockLibrary_AddBinding_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAnimNextParameterBlockLibrary_AddBinding_Statics::AnimNextParameterBlockLibrary_eventAddBinding_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAnimNextParameterBlockLibrary_AddBinding()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimNextParameterBlockLibrary_AddBinding_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimNextParameterBlockLibrary_AddBindingReference_Statics
	{
		struct AnimNextParameterBlockLibrary_eventAddBindingReference_Parms
		{
			UAnimNextParameterBlock* InBlock;
			FName InName;
			UAnimNextParameterLibrary* InLibrary;
			UAnimNextParameterBlock* InReferencedBlock;
			bool bSetupUndoRedo;
			bool bPrintPythonCommand;
			UAnimNextParameterBlockBindingReference* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InBlock;
		static const UECodeGen_Private::FNamePropertyParams NewProp_InName;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InLibrary;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InReferencedBlock;
		static void NewProp_bSetupUndoRedo_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSetupUndoRedo;
		static void NewProp_bPrintPythonCommand_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPrintPythonCommand;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimNextParameterBlockLibrary_AddBindingReference_Statics::NewProp_InBlock = { "InBlock", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimNextParameterBlockLibrary_eventAddBindingReference_Parms, InBlock), Z_Construct_UClass_UAnimNextParameterBlock_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAnimNextParameterBlockLibrary_AddBindingReference_Statics::NewProp_InName = { "InName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimNextParameterBlockLibrary_eventAddBindingReference_Parms, InName), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimNextParameterBlockLibrary_AddBindingReference_Statics::NewProp_InLibrary = { "InLibrary", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimNextParameterBlockLibrary_eventAddBindingReference_Parms, InLibrary), Z_Construct_UClass_UAnimNextParameterLibrary_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimNextParameterBlockLibrary_AddBindingReference_Statics::NewProp_InReferencedBlock = { "InReferencedBlock", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimNextParameterBlockLibrary_eventAddBindingReference_Parms, InReferencedBlock), Z_Construct_UClass_UAnimNextParameterBlock_NoRegister, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UAnimNextParameterBlockLibrary_AddBindingReference_Statics::NewProp_bSetupUndoRedo_SetBit(void* Obj)
	{
		((AnimNextParameterBlockLibrary_eventAddBindingReference_Parms*)Obj)->bSetupUndoRedo = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAnimNextParameterBlockLibrary_AddBindingReference_Statics::NewProp_bSetupUndoRedo = { "bSetupUndoRedo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AnimNextParameterBlockLibrary_eventAddBindingReference_Parms), &Z_Construct_UFunction_UAnimNextParameterBlockLibrary_AddBindingReference_Statics::NewProp_bSetupUndoRedo_SetBit, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UAnimNextParameterBlockLibrary_AddBindingReference_Statics::NewProp_bPrintPythonCommand_SetBit(void* Obj)
	{
		((AnimNextParameterBlockLibrary_eventAddBindingReference_Parms*)Obj)->bPrintPythonCommand = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAnimNextParameterBlockLibrary_AddBindingReference_Statics::NewProp_bPrintPythonCommand = { "bPrintPythonCommand", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AnimNextParameterBlockLibrary_eventAddBindingReference_Parms), &Z_Construct_UFunction_UAnimNextParameterBlockLibrary_AddBindingReference_Statics::NewProp_bPrintPythonCommand_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimNextParameterBlockLibrary_AddBindingReference_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimNextParameterBlockLibrary_eventAddBindingReference_Parms, ReturnValue), Z_Construct_UClass_UAnimNextParameterBlockBindingReference_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimNextParameterBlockLibrary_AddBindingReference_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimNextParameterBlockLibrary_AddBindingReference_Statics::NewProp_InBlock,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimNextParameterBlockLibrary_AddBindingReference_Statics::NewProp_InName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimNextParameterBlockLibrary_AddBindingReference_Statics::NewProp_InLibrary,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimNextParameterBlockLibrary_AddBindingReference_Statics::NewProp_InReferencedBlock,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimNextParameterBlockLibrary_AddBindingReference_Statics::NewProp_bSetupUndoRedo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimNextParameterBlockLibrary_AddBindingReference_Statics::NewProp_bPrintPythonCommand,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimNextParameterBlockLibrary_AddBindingReference_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimNextParameterBlockLibrary_AddBindingReference_Statics::Function_MetaDataParams[] = {
		{ "Category", "AnimNext|Parameter Block" },
		{ "CPP_Default_bPrintPythonCommand", "true" },
		{ "CPP_Default_bSetupUndoRedo", "true" },
		{ "ModuleRelativePath", "Internal/Param/AnimNextParameterBlock_EditorData.h" },
		{ "ScriptMethod", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimNextParameterBlockLibrary_AddBindingReference_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimNextParameterBlockLibrary, nullptr, "AddBindingReference", nullptr, nullptr, Z_Construct_UFunction_UAnimNextParameterBlockLibrary_AddBindingReference_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimNextParameterBlockLibrary_AddBindingReference_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAnimNextParameterBlockLibrary_AddBindingReference_Statics::AnimNextParameterBlockLibrary_eventAddBindingReference_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimNextParameterBlockLibrary_AddBindingReference_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAnimNextParameterBlockLibrary_AddBindingReference_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimNextParameterBlockLibrary_AddBindingReference_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAnimNextParameterBlockLibrary_AddBindingReference_Statics::AnimNextParameterBlockLibrary_eventAddBindingReference_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAnimNextParameterBlockLibrary_AddBindingReference()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimNextParameterBlockLibrary_AddBindingReference_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimNextParameterBlockLibrary_FindBinding_Statics
	{
		struct AnimNextParameterBlockLibrary_eventFindBinding_Parms
		{
			UAnimNextParameterBlock* InBlock;
			FName InName;
			UAnimNextParameterBlockEntry* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InBlock;
		static const UECodeGen_Private::FNamePropertyParams NewProp_InName;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimNextParameterBlockLibrary_FindBinding_Statics::NewProp_InBlock = { "InBlock", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimNextParameterBlockLibrary_eventFindBinding_Parms, InBlock), Z_Construct_UClass_UAnimNextParameterBlock_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAnimNextParameterBlockLibrary_FindBinding_Statics::NewProp_InName = { "InName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimNextParameterBlockLibrary_eventFindBinding_Parms, InName), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimNextParameterBlockLibrary_FindBinding_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimNextParameterBlockLibrary_eventFindBinding_Parms, ReturnValue), Z_Construct_UClass_UAnimNextParameterBlockEntry_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimNextParameterBlockLibrary_FindBinding_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimNextParameterBlockLibrary_FindBinding_Statics::NewProp_InBlock,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimNextParameterBlockLibrary_FindBinding_Statics::NewProp_InName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimNextParameterBlockLibrary_FindBinding_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimNextParameterBlockLibrary_FindBinding_Statics::Function_MetaDataParams[] = {
		{ "Category", "AnimNext|Parameter Block" },
		{ "ModuleRelativePath", "Internal/Param/AnimNextParameterBlock_EditorData.h" },
		{ "ScriptMethod", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimNextParameterBlockLibrary_FindBinding_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimNextParameterBlockLibrary, nullptr, "FindBinding", nullptr, nullptr, Z_Construct_UFunction_UAnimNextParameterBlockLibrary_FindBinding_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimNextParameterBlockLibrary_FindBinding_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAnimNextParameterBlockLibrary_FindBinding_Statics::AnimNextParameterBlockLibrary_eventFindBinding_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimNextParameterBlockLibrary_FindBinding_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAnimNextParameterBlockLibrary_FindBinding_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimNextParameterBlockLibrary_FindBinding_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAnimNextParameterBlockLibrary_FindBinding_Statics::AnimNextParameterBlockLibrary_eventFindBinding_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAnimNextParameterBlockLibrary_FindBinding()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimNextParameterBlockLibrary_FindBinding_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimNextParameterBlockLibrary_RemoveAllBindings_Statics
	{
		struct AnimNextParameterBlockLibrary_eventRemoveAllBindings_Parms
		{
			UAnimNextParameterBlock* InBlock;
			FName InName;
			bool bSetupUndoRedo;
			bool bPrintPythonCommand;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InBlock;
		static const UECodeGen_Private::FNamePropertyParams NewProp_InName;
		static void NewProp_bSetupUndoRedo_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSetupUndoRedo;
		static void NewProp_bPrintPythonCommand_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPrintPythonCommand;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimNextParameterBlockLibrary_RemoveAllBindings_Statics::NewProp_InBlock = { "InBlock", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimNextParameterBlockLibrary_eventRemoveAllBindings_Parms, InBlock), Z_Construct_UClass_UAnimNextParameterBlock_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAnimNextParameterBlockLibrary_RemoveAllBindings_Statics::NewProp_InName = { "InName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimNextParameterBlockLibrary_eventRemoveAllBindings_Parms, InName), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UAnimNextParameterBlockLibrary_RemoveAllBindings_Statics::NewProp_bSetupUndoRedo_SetBit(void* Obj)
	{
		((AnimNextParameterBlockLibrary_eventRemoveAllBindings_Parms*)Obj)->bSetupUndoRedo = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAnimNextParameterBlockLibrary_RemoveAllBindings_Statics::NewProp_bSetupUndoRedo = { "bSetupUndoRedo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AnimNextParameterBlockLibrary_eventRemoveAllBindings_Parms), &Z_Construct_UFunction_UAnimNextParameterBlockLibrary_RemoveAllBindings_Statics::NewProp_bSetupUndoRedo_SetBit, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UAnimNextParameterBlockLibrary_RemoveAllBindings_Statics::NewProp_bPrintPythonCommand_SetBit(void* Obj)
	{
		((AnimNextParameterBlockLibrary_eventRemoveAllBindings_Parms*)Obj)->bPrintPythonCommand = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAnimNextParameterBlockLibrary_RemoveAllBindings_Statics::NewProp_bPrintPythonCommand = { "bPrintPythonCommand", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AnimNextParameterBlockLibrary_eventRemoveAllBindings_Parms), &Z_Construct_UFunction_UAnimNextParameterBlockLibrary_RemoveAllBindings_Statics::NewProp_bPrintPythonCommand_SetBit, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UAnimNextParameterBlockLibrary_RemoveAllBindings_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AnimNextParameterBlockLibrary_eventRemoveAllBindings_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAnimNextParameterBlockLibrary_RemoveAllBindings_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AnimNextParameterBlockLibrary_eventRemoveAllBindings_Parms), &Z_Construct_UFunction_UAnimNextParameterBlockLibrary_RemoveAllBindings_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimNextParameterBlockLibrary_RemoveAllBindings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimNextParameterBlockLibrary_RemoveAllBindings_Statics::NewProp_InBlock,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimNextParameterBlockLibrary_RemoveAllBindings_Statics::NewProp_InName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimNextParameterBlockLibrary_RemoveAllBindings_Statics::NewProp_bSetupUndoRedo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimNextParameterBlockLibrary_RemoveAllBindings_Statics::NewProp_bPrintPythonCommand,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimNextParameterBlockLibrary_RemoveAllBindings_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimNextParameterBlockLibrary_RemoveAllBindings_Statics::Function_MetaDataParams[] = {
		{ "Category", "AnimNext|Parameter Block" },
		{ "CPP_Default_bPrintPythonCommand", "true" },
		{ "CPP_Default_bSetupUndoRedo", "true" },
		{ "ModuleRelativePath", "Internal/Param/AnimNextParameterBlock_EditorData.h" },
		{ "ScriptMethod", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimNextParameterBlockLibrary_RemoveAllBindings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimNextParameterBlockLibrary, nullptr, "RemoveAllBindings", nullptr, nullptr, Z_Construct_UFunction_UAnimNextParameterBlockLibrary_RemoveAllBindings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimNextParameterBlockLibrary_RemoveAllBindings_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAnimNextParameterBlockLibrary_RemoveAllBindings_Statics::AnimNextParameterBlockLibrary_eventRemoveAllBindings_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimNextParameterBlockLibrary_RemoveAllBindings_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAnimNextParameterBlockLibrary_RemoveAllBindings_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimNextParameterBlockLibrary_RemoveAllBindings_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAnimNextParameterBlockLibrary_RemoveAllBindings_Statics::AnimNextParameterBlockLibrary_eventRemoveAllBindings_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAnimNextParameterBlockLibrary_RemoveAllBindings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimNextParameterBlockLibrary_RemoveAllBindings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimNextParameterBlockLibrary_RemoveEntries_Statics
	{
		struct AnimNextParameterBlockLibrary_eventRemoveEntries_Parms
		{
			UAnimNextParameterBlock* InBlock;
			TArray<UAnimNextParameterBlockEntry*> InEntries;
			bool bSetupUndoRedo;
			bool bPrintPythonCommand;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InBlock;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InEntries_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InEntries_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InEntries;
		static void NewProp_bSetupUndoRedo_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSetupUndoRedo;
		static void NewProp_bPrintPythonCommand_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPrintPythonCommand;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimNextParameterBlockLibrary_RemoveEntries_Statics::NewProp_InBlock = { "InBlock", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimNextParameterBlockLibrary_eventRemoveEntries_Parms, InBlock), Z_Construct_UClass_UAnimNextParameterBlock_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimNextParameterBlockLibrary_RemoveEntries_Statics::NewProp_InEntries_Inner = { "InEntries", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UAnimNextParameterBlockEntry_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimNextParameterBlockLibrary_RemoveEntries_Statics::NewProp_InEntries_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAnimNextParameterBlockLibrary_RemoveEntries_Statics::NewProp_InEntries = { "InEntries", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimNextParameterBlockLibrary_eventRemoveEntries_Parms, InEntries), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimNextParameterBlockLibrary_RemoveEntries_Statics::NewProp_InEntries_MetaData), Z_Construct_UFunction_UAnimNextParameterBlockLibrary_RemoveEntries_Statics::NewProp_InEntries_MetaData) };
	void Z_Construct_UFunction_UAnimNextParameterBlockLibrary_RemoveEntries_Statics::NewProp_bSetupUndoRedo_SetBit(void* Obj)
	{
		((AnimNextParameterBlockLibrary_eventRemoveEntries_Parms*)Obj)->bSetupUndoRedo = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAnimNextParameterBlockLibrary_RemoveEntries_Statics::NewProp_bSetupUndoRedo = { "bSetupUndoRedo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AnimNextParameterBlockLibrary_eventRemoveEntries_Parms), &Z_Construct_UFunction_UAnimNextParameterBlockLibrary_RemoveEntries_Statics::NewProp_bSetupUndoRedo_SetBit, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UAnimNextParameterBlockLibrary_RemoveEntries_Statics::NewProp_bPrintPythonCommand_SetBit(void* Obj)
	{
		((AnimNextParameterBlockLibrary_eventRemoveEntries_Parms*)Obj)->bPrintPythonCommand = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAnimNextParameterBlockLibrary_RemoveEntries_Statics::NewProp_bPrintPythonCommand = { "bPrintPythonCommand", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AnimNextParameterBlockLibrary_eventRemoveEntries_Parms), &Z_Construct_UFunction_UAnimNextParameterBlockLibrary_RemoveEntries_Statics::NewProp_bPrintPythonCommand_SetBit, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UAnimNextParameterBlockLibrary_RemoveEntries_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AnimNextParameterBlockLibrary_eventRemoveEntries_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAnimNextParameterBlockLibrary_RemoveEntries_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AnimNextParameterBlockLibrary_eventRemoveEntries_Parms), &Z_Construct_UFunction_UAnimNextParameterBlockLibrary_RemoveEntries_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimNextParameterBlockLibrary_RemoveEntries_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimNextParameterBlockLibrary_RemoveEntries_Statics::NewProp_InBlock,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimNextParameterBlockLibrary_RemoveEntries_Statics::NewProp_InEntries_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimNextParameterBlockLibrary_RemoveEntries_Statics::NewProp_InEntries,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimNextParameterBlockLibrary_RemoveEntries_Statics::NewProp_bSetupUndoRedo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimNextParameterBlockLibrary_RemoveEntries_Statics::NewProp_bPrintPythonCommand,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimNextParameterBlockLibrary_RemoveEntries_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimNextParameterBlockLibrary_RemoveEntries_Statics::Function_MetaDataParams[] = {
		{ "Category", "AnimNext|Parameter Block" },
		{ "CPP_Default_bPrintPythonCommand", "true" },
		{ "CPP_Default_bSetupUndoRedo", "true" },
		{ "ModuleRelativePath", "Internal/Param/AnimNextParameterBlock_EditorData.h" },
		{ "ScriptMethod", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimNextParameterBlockLibrary_RemoveEntries_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimNextParameterBlockLibrary, nullptr, "RemoveEntries", nullptr, nullptr, Z_Construct_UFunction_UAnimNextParameterBlockLibrary_RemoveEntries_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimNextParameterBlockLibrary_RemoveEntries_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAnimNextParameterBlockLibrary_RemoveEntries_Statics::AnimNextParameterBlockLibrary_eventRemoveEntries_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04442401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimNextParameterBlockLibrary_RemoveEntries_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAnimNextParameterBlockLibrary_RemoveEntries_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimNextParameterBlockLibrary_RemoveEntries_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAnimNextParameterBlockLibrary_RemoveEntries_Statics::AnimNextParameterBlockLibrary_eventRemoveEntries_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAnimNextParameterBlockLibrary_RemoveEntries()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimNextParameterBlockLibrary_RemoveEntries_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimNextParameterBlockLibrary_RemoveEntry_Statics
	{
		struct AnimNextParameterBlockLibrary_eventRemoveEntry_Parms
		{
			UAnimNextParameterBlock* InBlock;
			UAnimNextParameterBlockEntry* InEntry;
			bool bSetupUndoRedo;
			bool bPrintPythonCommand;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InBlock;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InEntry;
		static void NewProp_bSetupUndoRedo_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSetupUndoRedo;
		static void NewProp_bPrintPythonCommand_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPrintPythonCommand;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimNextParameterBlockLibrary_RemoveEntry_Statics::NewProp_InBlock = { "InBlock", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimNextParameterBlockLibrary_eventRemoveEntry_Parms, InBlock), Z_Construct_UClass_UAnimNextParameterBlock_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimNextParameterBlockLibrary_RemoveEntry_Statics::NewProp_InEntry = { "InEntry", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimNextParameterBlockLibrary_eventRemoveEntry_Parms, InEntry), Z_Construct_UClass_UAnimNextParameterBlockEntry_NoRegister, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UAnimNextParameterBlockLibrary_RemoveEntry_Statics::NewProp_bSetupUndoRedo_SetBit(void* Obj)
	{
		((AnimNextParameterBlockLibrary_eventRemoveEntry_Parms*)Obj)->bSetupUndoRedo = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAnimNextParameterBlockLibrary_RemoveEntry_Statics::NewProp_bSetupUndoRedo = { "bSetupUndoRedo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AnimNextParameterBlockLibrary_eventRemoveEntry_Parms), &Z_Construct_UFunction_UAnimNextParameterBlockLibrary_RemoveEntry_Statics::NewProp_bSetupUndoRedo_SetBit, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UAnimNextParameterBlockLibrary_RemoveEntry_Statics::NewProp_bPrintPythonCommand_SetBit(void* Obj)
	{
		((AnimNextParameterBlockLibrary_eventRemoveEntry_Parms*)Obj)->bPrintPythonCommand = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAnimNextParameterBlockLibrary_RemoveEntry_Statics::NewProp_bPrintPythonCommand = { "bPrintPythonCommand", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AnimNextParameterBlockLibrary_eventRemoveEntry_Parms), &Z_Construct_UFunction_UAnimNextParameterBlockLibrary_RemoveEntry_Statics::NewProp_bPrintPythonCommand_SetBit, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UAnimNextParameterBlockLibrary_RemoveEntry_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AnimNextParameterBlockLibrary_eventRemoveEntry_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAnimNextParameterBlockLibrary_RemoveEntry_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AnimNextParameterBlockLibrary_eventRemoveEntry_Parms), &Z_Construct_UFunction_UAnimNextParameterBlockLibrary_RemoveEntry_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimNextParameterBlockLibrary_RemoveEntry_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimNextParameterBlockLibrary_RemoveEntry_Statics::NewProp_InBlock,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimNextParameterBlockLibrary_RemoveEntry_Statics::NewProp_InEntry,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimNextParameterBlockLibrary_RemoveEntry_Statics::NewProp_bSetupUndoRedo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimNextParameterBlockLibrary_RemoveEntry_Statics::NewProp_bPrintPythonCommand,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimNextParameterBlockLibrary_RemoveEntry_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimNextParameterBlockLibrary_RemoveEntry_Statics::Function_MetaDataParams[] = {
		{ "Category", "AnimNext|Parameter Block" },
		{ "CPP_Default_bPrintPythonCommand", "true" },
		{ "CPP_Default_bSetupUndoRedo", "true" },
		{ "ModuleRelativePath", "Internal/Param/AnimNextParameterBlock_EditorData.h" },
		{ "ScriptMethod", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimNextParameterBlockLibrary_RemoveEntry_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimNextParameterBlockLibrary, nullptr, "RemoveEntry", nullptr, nullptr, Z_Construct_UFunction_UAnimNextParameterBlockLibrary_RemoveEntry_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimNextParameterBlockLibrary_RemoveEntry_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAnimNextParameterBlockLibrary_RemoveEntry_Statics::AnimNextParameterBlockLibrary_eventRemoveEntry_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimNextParameterBlockLibrary_RemoveEntry_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAnimNextParameterBlockLibrary_RemoveEntry_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimNextParameterBlockLibrary_RemoveEntry_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAnimNextParameterBlockLibrary_RemoveEntry_Statics::AnimNextParameterBlockLibrary_eventRemoveEntry_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAnimNextParameterBlockLibrary_RemoveEntry()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimNextParameterBlockLibrary_RemoveEntry_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimNextParameterBlockLibrary);
	UClass* Z_Construct_UClass_UAnimNextParameterBlockLibrary_NoRegister()
	{
		return UAnimNextParameterBlockLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UAnimNextParameterBlockLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimNextParameterBlockLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_AnimNextUncookedOnly,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNextParameterBlockLibrary_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UAnimNextParameterBlockLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAnimNextParameterBlockLibrary_AddBinding, "AddBinding" }, // 1579217586
		{ &Z_Construct_UFunction_UAnimNextParameterBlockLibrary_AddBindingReference, "AddBindingReference" }, // 1534269427
		{ &Z_Construct_UFunction_UAnimNextParameterBlockLibrary_FindBinding, "FindBinding" }, // 3335782861
		{ &Z_Construct_UFunction_UAnimNextParameterBlockLibrary_RemoveAllBindings, "RemoveAllBindings" }, // 4147117644
		{ &Z_Construct_UFunction_UAnimNextParameterBlockLibrary_RemoveEntries, "RemoveEntries" }, // 2035014870
		{ &Z_Construct_UFunction_UAnimNextParameterBlockLibrary_RemoveEntry, "RemoveEntry" }, // 2757449506
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNextParameterBlockLibrary_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimNextParameterBlockLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// Script-callable editor API hoisted onto UAnimNextParameterBlock\n" },
		{ "IncludePath", "Param/AnimNextParameterBlock_EditorData.h" },
		{ "ModuleRelativePath", "Internal/Param/AnimNextParameterBlock_EditorData.h" },
		{ "ToolTip", "Script-callable editor API hoisted onto UAnimNextParameterBlock" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimNextParameterBlockLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimNextParameterBlockLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimNextParameterBlockLibrary_Statics::ClassParams = {
		&UAnimNextParameterBlockLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNextParameterBlockLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UAnimNextParameterBlockLibrary_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UAnimNextParameterBlockLibrary()
	{
		if (!Z_Registration_Info_UClass_UAnimNextParameterBlockLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimNextParameterBlockLibrary.OuterSingleton, Z_Construct_UClass_UAnimNextParameterBlockLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAnimNextParameterBlockLibrary.OuterSingleton;
	}
	template<> ANIMNEXTUNCOOKEDONLY_API UClass* StaticClass<UAnimNextParameterBlockLibrary>()
	{
		return UAnimNextParameterBlockLibrary::StaticClass();
	}
	UAnimNextParameterBlockLibrary::UAnimNextParameterBlockLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimNextParameterBlockLibrary);
	UAnimNextParameterBlockLibrary::~UAnimNextParameterBlockLibrary() {}
	void UAnimNextParameterBlock_EditorData::StaticRegisterNativesUAnimNextParameterBlock_EditorData()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimNextParameterBlock_EditorData);
	UClass* Z_Construct_UClass_UAnimNextParameterBlock_EditorData_NoRegister()
	{
		return UAnimNextParameterBlock_EditorData::StaticClass();
	}
	struct Z_Construct_UClass_UAnimNextParameterBlock_EditorData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Graphs_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Graphs_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Graphs;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RigVMClient_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RigVMClient;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GraphFunctionStore_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GraphFunctionStore;
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
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Entries_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Entries_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Entries;
		static const UECodeGen_Private::FStructPropertyParams NewProp_LastEditedDocuments_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LastEditedDocuments_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_LastEditedDocuments;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VMRecompilationBracket_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_VMRecompilationBracket;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bVMRecompilationRequired_MetaData[];
#endif
		static void NewProp_bVMRecompilationRequired_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bVMRecompilationRequired;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bStructRecompilationRequired_MetaData[];
#endif
		static void NewProp_bStructRecompilationRequired_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bStructRecompilationRequired;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsCompiling_MetaData[];
#endif
		static void NewProp_bIsCompiling_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsCompiling;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimNextParameterBlock_EditorData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AnimNextUncookedOnly,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNextParameterBlock_EditorData_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimNextParameterBlock_EditorData_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Param/AnimNextParameterBlock_EditorData.h" },
		{ "ModuleRelativePath", "Internal/Param/AnimNextParameterBlock_EditorData.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_EDITORONLY_DATA
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UAnimNextParameterBlock_EditorData_Statics::NewProp_Graphs_Inner = { "Graphs", nullptr, (EPropertyFlags)0x0004000800000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UAnimNextParameterBlock_EdGraph_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimNextParameterBlock_EditorData_Statics::NewProp_Graphs_MetaData[] = {
		{ "ModuleRelativePath", "Internal/Param/AnimNextParameterBlock_EditorData.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAnimNextParameterBlock_EditorData_Statics::NewProp_Graphs = { "Graphs", nullptr, (EPropertyFlags)0x0044000800000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimNextParameterBlock_EditorData, Graphs), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNextParameterBlock_EditorData_Statics::NewProp_Graphs_MetaData), Z_Construct_UClass_UAnimNextParameterBlock_EditorData_Statics::NewProp_Graphs_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimNextParameterBlock_EditorData_Statics::NewProp_RigVMClient_MetaData[] = {
		{ "ModuleRelativePath", "Internal/Param/AnimNextParameterBlock_EditorData.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimNextParameterBlock_EditorData_Statics::NewProp_RigVMClient = { "RigVMClient", nullptr, (EPropertyFlags)0x0040000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimNextParameterBlock_EditorData, RigVMClient), Z_Construct_UScriptStruct_FRigVMClient, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNextParameterBlock_EditorData_Statics::NewProp_RigVMClient_MetaData), Z_Construct_UClass_UAnimNextParameterBlock_EditorData_Statics::NewProp_RigVMClient_MetaData) }; // 2430807336
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimNextParameterBlock_EditorData_Statics::NewProp_GraphFunctionStore_MetaData[] = {
		{ "ModuleRelativePath", "Internal/Param/AnimNextParameterBlock_EditorData.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimNextParameterBlock_EditorData_Statics::NewProp_GraphFunctionStore = { "GraphFunctionStore", nullptr, (EPropertyFlags)0x0040000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimNextParameterBlock_EditorData, GraphFunctionStore), Z_Construct_UScriptStruct_FRigVMGraphFunctionStore, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNextParameterBlock_EditorData_Statics::NewProp_GraphFunctionStore_MetaData), Z_Construct_UClass_UAnimNextParameterBlock_EditorData_Statics::NewProp_GraphFunctionStore_MetaData) }; // 3413187905
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimNextParameterBlock_EditorData_Statics::NewProp_RigGraphDisplaySettings_MetaData[] = {
		{ "Category", "User Interface" },
		{ "ModuleRelativePath", "Internal/Param/AnimNextParameterBlock_EditorData.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimNextParameterBlock_EditorData_Statics::NewProp_RigGraphDisplaySettings = { "RigGraphDisplaySettings", nullptr, (EPropertyFlags)0x0040000800000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimNextParameterBlock_EditorData, RigGraphDisplaySettings), Z_Construct_UScriptStruct_FRigVMEdGraphDisplaySettings, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNextParameterBlock_EditorData_Statics::NewProp_RigGraphDisplaySettings_MetaData), Z_Construct_UClass_UAnimNextParameterBlock_EditorData_Statics::NewProp_RigGraphDisplaySettings_MetaData) }; // 258900512
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimNextParameterBlock_EditorData_Statics::NewProp_VMRuntimeSettings_MetaData[] = {
		{ "Category", "VM" },
		{ "ModuleRelativePath", "Internal/Param/AnimNextParameterBlock_EditorData.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimNextParameterBlock_EditorData_Statics::NewProp_VMRuntimeSettings = { "VMRuntimeSettings", nullptr, (EPropertyFlags)0x0040000800000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimNextParameterBlock_EditorData, VMRuntimeSettings), Z_Construct_UScriptStruct_FRigVMRuntimeSettings, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNextParameterBlock_EditorData_Statics::NewProp_VMRuntimeSettings_MetaData), Z_Construct_UClass_UAnimNextParameterBlock_EditorData_Statics::NewProp_VMRuntimeSettings_MetaData) }; // 2055583755
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimNextParameterBlock_EditorData_Statics::NewProp_VMCompileSettings_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "VM" },
		{ "ModuleRelativePath", "Internal/Param/AnimNextParameterBlock_EditorData.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimNextParameterBlock_EditorData_Statics::NewProp_VMCompileSettings = { "VMCompileSettings", nullptr, (EPropertyFlags)0x0040000800000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimNextParameterBlock_EditorData, VMCompileSettings), Z_Construct_UScriptStruct_FRigVMCompileSettings, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNextParameterBlock_EditorData_Statics::NewProp_VMCompileSettings_MetaData), Z_Construct_UClass_UAnimNextParameterBlock_EditorData_Statics::NewProp_VMCompileSettings_MetaData) }; // 1268903359
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimNextParameterBlock_EditorData_Statics::NewProp_PinToOperandMap_ValueProp = { "PinToOperandMap", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FRigVMOperand, METADATA_PARAMS(0, nullptr) }; // 3848891530
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAnimNextParameterBlock_EditorData_Statics::NewProp_PinToOperandMap_Key_KeyProp = { "PinToOperandMap_Key", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimNextParameterBlock_EditorData_Statics::NewProp_PinToOperandMap_MetaData[] = {
		{ "ModuleRelativePath", "Internal/Param/AnimNextParameterBlock_EditorData.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UAnimNextParameterBlock_EditorData_Statics::NewProp_PinToOperandMap = { "PinToOperandMap", nullptr, (EPropertyFlags)0x0040000800202000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimNextParameterBlock_EditorData, PinToOperandMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNextParameterBlock_EditorData_Statics::NewProp_PinToOperandMap_MetaData), Z_Construct_UClass_UAnimNextParameterBlock_EditorData_Statics::NewProp_PinToOperandMap_MetaData) }; // 3848891530
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UAnimNextParameterBlock_EditorData_Statics::NewProp_Entries_Inner = { "Entries", nullptr, (EPropertyFlags)0x0004000800000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UAnimNextParameterBlockEntry_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimNextParameterBlock_EditorData_Statics::NewProp_Entries_MetaData[] = {
		{ "Comment", "/** All entries in this parameter block - not saved, either serialized or discovered at load time */" },
		{ "ModuleRelativePath", "Internal/Param/AnimNextParameterBlock_EditorData.h" },
		{ "ToolTip", "All entries in this parameter block - not saved, either serialized or discovered at load time" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAnimNextParameterBlock_EditorData_Statics::NewProp_Entries = { "Entries", nullptr, (EPropertyFlags)0x0044000800002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimNextParameterBlock_EditorData, Entries), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNextParameterBlock_EditorData_Statics::NewProp_Entries_MetaData), Z_Construct_UClass_UAnimNextParameterBlock_EditorData_Statics::NewProp_Entries_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimNextParameterBlock_EditorData_Statics::NewProp_LastEditedDocuments_Inner = { "LastEditedDocuments", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FEditedDocumentInfo, METADATA_PARAMS(0, nullptr) }; // 490872384
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimNextParameterBlock_EditorData_Statics::NewProp_LastEditedDocuments_MetaData[] = {
		{ "ModuleRelativePath", "Internal/Param/AnimNextParameterBlock_EditorData.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAnimNextParameterBlock_EditorData_Statics::NewProp_LastEditedDocuments = { "LastEditedDocuments", nullptr, (EPropertyFlags)0x0040000800000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimNextParameterBlock_EditorData, LastEditedDocuments), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNextParameterBlock_EditorData_Statics::NewProp_LastEditedDocuments_MetaData), Z_Construct_UClass_UAnimNextParameterBlock_EditorData_Statics::NewProp_LastEditedDocuments_MetaData) }; // 490872384
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimNextParameterBlock_EditorData_Statics::NewProp_VMRecompilationBracket_MetaData[] = {
		{ "ModuleRelativePath", "Internal/Param/AnimNextParameterBlock_EditorData.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAnimNextParameterBlock_EditorData_Statics::NewProp_VMRecompilationBracket = { "VMRecompilationBracket", nullptr, (EPropertyFlags)0x0040000800202000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimNextParameterBlock_EditorData, VMRecompilationBracket), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNextParameterBlock_EditorData_Statics::NewProp_VMRecompilationBracket_MetaData), Z_Construct_UClass_UAnimNextParameterBlock_EditorData_Statics::NewProp_VMRecompilationBracket_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimNextParameterBlock_EditorData_Statics::NewProp_bVMRecompilationRequired_MetaData[] = {
		{ "ModuleRelativePath", "Internal/Param/AnimNextParameterBlock_EditorData.h" },
	};
#endif
	void Z_Construct_UClass_UAnimNextParameterBlock_EditorData_Statics::NewProp_bVMRecompilationRequired_SetBit(void* Obj)
	{
		((UAnimNextParameterBlock_EditorData*)Obj)->bVMRecompilationRequired = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimNextParameterBlock_EditorData_Statics::NewProp_bVMRecompilationRequired = { "bVMRecompilationRequired", nullptr, (EPropertyFlags)0x0040000800202000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAnimNextParameterBlock_EditorData), &Z_Construct_UClass_UAnimNextParameterBlock_EditorData_Statics::NewProp_bVMRecompilationRequired_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNextParameterBlock_EditorData_Statics::NewProp_bVMRecompilationRequired_MetaData), Z_Construct_UClass_UAnimNextParameterBlock_EditorData_Statics::NewProp_bVMRecompilationRequired_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimNextParameterBlock_EditorData_Statics::NewProp_bStructRecompilationRequired_MetaData[] = {
		{ "ModuleRelativePath", "Internal/Param/AnimNextParameterBlock_EditorData.h" },
	};
#endif
	void Z_Construct_UClass_UAnimNextParameterBlock_EditorData_Statics::NewProp_bStructRecompilationRequired_SetBit(void* Obj)
	{
		((UAnimNextParameterBlock_EditorData*)Obj)->bStructRecompilationRequired = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimNextParameterBlock_EditorData_Statics::NewProp_bStructRecompilationRequired = { "bStructRecompilationRequired", nullptr, (EPropertyFlags)0x0040000800202000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAnimNextParameterBlock_EditorData), &Z_Construct_UClass_UAnimNextParameterBlock_EditorData_Statics::NewProp_bStructRecompilationRequired_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNextParameterBlock_EditorData_Statics::NewProp_bStructRecompilationRequired_MetaData), Z_Construct_UClass_UAnimNextParameterBlock_EditorData_Statics::NewProp_bStructRecompilationRequired_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimNextParameterBlock_EditorData_Statics::NewProp_bIsCompiling_MetaData[] = {
		{ "ModuleRelativePath", "Internal/Param/AnimNextParameterBlock_EditorData.h" },
	};
#endif
	void Z_Construct_UClass_UAnimNextParameterBlock_EditorData_Statics::NewProp_bIsCompiling_SetBit(void* Obj)
	{
		((UAnimNextParameterBlock_EditorData*)Obj)->bIsCompiling = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimNextParameterBlock_EditorData_Statics::NewProp_bIsCompiling = { "bIsCompiling", nullptr, (EPropertyFlags)0x0040000800202000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAnimNextParameterBlock_EditorData), &Z_Construct_UClass_UAnimNextParameterBlock_EditorData_Statics::NewProp_bIsCompiling_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNextParameterBlock_EditorData_Statics::NewProp_bIsCompiling_MetaData), Z_Construct_UClass_UAnimNextParameterBlock_EditorData_Statics::NewProp_bIsCompiling_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimNextParameterBlock_EditorData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNextParameterBlock_EditorData_Statics::NewProp_Graphs_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNextParameterBlock_EditorData_Statics::NewProp_Graphs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNextParameterBlock_EditorData_Statics::NewProp_RigVMClient,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNextParameterBlock_EditorData_Statics::NewProp_GraphFunctionStore,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNextParameterBlock_EditorData_Statics::NewProp_RigGraphDisplaySettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNextParameterBlock_EditorData_Statics::NewProp_VMRuntimeSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNextParameterBlock_EditorData_Statics::NewProp_VMCompileSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNextParameterBlock_EditorData_Statics::NewProp_PinToOperandMap_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNextParameterBlock_EditorData_Statics::NewProp_PinToOperandMap_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNextParameterBlock_EditorData_Statics::NewProp_PinToOperandMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNextParameterBlock_EditorData_Statics::NewProp_Entries_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNextParameterBlock_EditorData_Statics::NewProp_Entries,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNextParameterBlock_EditorData_Statics::NewProp_LastEditedDocuments_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNextParameterBlock_EditorData_Statics::NewProp_LastEditedDocuments,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNextParameterBlock_EditorData_Statics::NewProp_VMRecompilationBracket,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNextParameterBlock_EditorData_Statics::NewProp_bVMRecompilationRequired,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNextParameterBlock_EditorData_Statics::NewProp_bStructRecompilationRequired,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNextParameterBlock_EditorData_Statics::NewProp_bIsCompiling,
	};
#endif // WITH_EDITORONLY_DATA
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UAnimNextParameterBlock_EditorData_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_URigVMClientHost_NoRegister, (int32)VTABLE_OFFSET(UAnimNextParameterBlock_EditorData, IRigVMClientHost), false },  // 812804782
			{ Z_Construct_UClass_URigVMGraphFunctionHost_NoRegister, (int32)VTABLE_OFFSET(UAnimNextParameterBlock_EditorData, IRigVMGraphFunctionHost), false },  // 4190385312
		};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNextParameterBlock_EditorData_Statics::InterfaceParams) < 64);
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimNextParameterBlock_EditorData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimNextParameterBlock_EditorData>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimNextParameterBlock_EditorData_Statics::ClassParams = {
		&UAnimNextParameterBlock_EditorData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		IF_WITH_EDITORONLY_DATA(Z_Construct_UClass_UAnimNextParameterBlock_EditorData_Statics::PropPointers, nullptr),
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		IF_WITH_EDITORONLY_DATA(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNextParameterBlock_EditorData_Statics::PropPointers), 0),
		UE_ARRAY_COUNT(InterfaceParams),
		0x000800A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNextParameterBlock_EditorData_Statics::Class_MetaDataParams), Z_Construct_UClass_UAnimNextParameterBlock_EditorData_Statics::Class_MetaDataParams)
	};
#if WITH_EDITORONLY_DATA
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNextParameterBlock_EditorData_Statics::PropPointers) < 2048);
#endif
	UClass* Z_Construct_UClass_UAnimNextParameterBlock_EditorData()
	{
		if (!Z_Registration_Info_UClass_UAnimNextParameterBlock_EditorData.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimNextParameterBlock_EditorData.OuterSingleton, Z_Construct_UClass_UAnimNextParameterBlock_EditorData_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAnimNextParameterBlock_EditorData.OuterSingleton;
	}
	template<> ANIMNEXTUNCOOKEDONLY_API UClass* StaticClass<UAnimNextParameterBlock_EditorData>()
	{
		return UAnimNextParameterBlock_EditorData::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimNextParameterBlock_EditorData);
	UAnimNextParameterBlock_EditorData::~UAnimNextParameterBlock_EditorData() {}
#if WITH_EDITORONLY_DATA
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UAnimNextParameterBlock_EditorData)
#endif
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNextUncookedOnly_Internal_Param_AnimNextParameterBlock_EditorData_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNextUncookedOnly_Internal_Param_AnimNextParameterBlock_EditorData_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAnimNextParameterBlockLibrary_Schema, UAnimNextParameterBlockLibrary_Schema::StaticClass, TEXT("UAnimNextParameterBlockLibrary_Schema"), &Z_Registration_Info_UClass_UAnimNextParameterBlockLibrary_Schema, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimNextParameterBlockLibrary_Schema), 416666671U) },
		{ Z_Construct_UClass_UAnimNextParameterBlockLibrary, UAnimNextParameterBlockLibrary::StaticClass, TEXT("UAnimNextParameterBlockLibrary"), &Z_Registration_Info_UClass_UAnimNextParameterBlockLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimNextParameterBlockLibrary), 2668621652U) },
		{ Z_Construct_UClass_UAnimNextParameterBlock_EditorData, UAnimNextParameterBlock_EditorData::StaticClass, TEXT("UAnimNextParameterBlock_EditorData"), &Z_Registration_Info_UClass_UAnimNextParameterBlock_EditorData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimNextParameterBlock_EditorData), 784451370U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNextUncookedOnly_Internal_Param_AnimNextParameterBlock_EditorData_h_2545695165(TEXT("/Script/AnimNextUncookedOnly"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNextUncookedOnly_Internal_Param_AnimNextParameterBlock_EditorData_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNextUncookedOnly_Internal_Param_AnimNextParameterBlock_EditorData_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
