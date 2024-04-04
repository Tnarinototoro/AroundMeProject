// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ControlRigBlueprint.h"
#include "Rigs/RigHierarchyContainer.h"
#include "Rigs/RigInfluenceMap.h"
#include "RigVMBlueprint.h"
#include "RigVMCore/RigVMDrawContainer.h"
#include "RigVMCore/RigVMStatistics.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#include "Units/RigUnitContext.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeControlRigBlueprint() {}
// Cross Module References
	CONTROLRIG_API UClass* Z_Construct_UClass_UControlRig_NoRegister();
	CONTROLRIG_API UClass* Z_Construct_UClass_UControlRigShapeLibrary_NoRegister();
	CONTROLRIG_API UClass* Z_Construct_UClass_UControlRigValidator_NoRegister();
	CONTROLRIG_API UClass* Z_Construct_UClass_URigHierarchy_NoRegister();
	CONTROLRIG_API UClass* Z_Construct_UClass_URigHierarchyController_NoRegister();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigHierarchyContainer();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigHierarchySettings();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigInfluenceMapPerEvent();
	CONTROLRIGDEVELOPER_API UClass* Z_Construct_UClass_UControlRigBlueprint();
	CONTROLRIGDEVELOPER_API UClass* Z_Construct_UClass_UControlRigBlueprint_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInterface_PreviewMeshProvider_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMDrawContainer();
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMStatistics();
	RIGVMDEVELOPER_API UClass* Z_Construct_UClass_URigVMBlueprint();
	RIGVMDEVELOPER_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMOldPublicFunctionData();
	UPackage* Z_Construct_UPackage__Script_ControlRigDeveloper();
// End Cross Module References
	DEFINE_FUNCTION(UControlRigBlueprint::execGetHierarchyController)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(URigHierarchyController**)Z_Param__Result=P_THIS->GetHierarchyController();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UControlRigBlueprint::execGetCurrentlyOpenRigBlueprints)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UControlRigBlueprint*>*)Z_Param__Result=UControlRigBlueprint::GetCurrentlyOpenRigBlueprints();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UControlRigBlueprint::execGetPreviewMesh)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USkeletalMesh**)Z_Param__Result=P_THIS->GetPreviewMesh();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UControlRigBlueprint::execSetPreviewMesh)
	{
		P_GET_OBJECT(USkeletalMesh,Z_Param_PreviewMesh);
		P_GET_UBOOL(Z_Param_bMarkAsDirty);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPreviewMesh(Z_Param_PreviewMesh,Z_Param_bMarkAsDirty);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UControlRigBlueprint::execCreateControlRig)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UControlRig**)Z_Param__Result=P_THIS->CreateControlRig();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UControlRigBlueprint::execGetControlRigClass)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UClass**)Z_Param__Result=P_THIS->GetControlRigClass();
		P_NATIVE_END;
	}
	void UControlRigBlueprint::StaticRegisterNativesUControlRigBlueprint()
	{
		UClass* Class = UControlRigBlueprint::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateControlRig", &UControlRigBlueprint::execCreateControlRig },
			{ "GetControlRigClass", &UControlRigBlueprint::execGetControlRigClass },
			{ "GetCurrentlyOpenRigBlueprints", &UControlRigBlueprint::execGetCurrentlyOpenRigBlueprints },
			{ "GetHierarchyController", &UControlRigBlueprint::execGetHierarchyController },
			{ "GetPreviewMesh", &UControlRigBlueprint::execGetPreviewMesh },
			{ "SetPreviewMesh", &UControlRigBlueprint::execSetPreviewMesh },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UControlRigBlueprint_CreateControlRig_Statics
	{
		struct ControlRigBlueprint_eventCreateControlRig_Parms
		{
			UControlRig* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UControlRigBlueprint_CreateControlRig_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ControlRigBlueprint_eventCreateControlRig_Parms, ReturnValue), Z_Construct_UClass_UControlRig_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UControlRigBlueprint_CreateControlRig_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigBlueprint_CreateControlRig_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UControlRigBlueprint_CreateControlRig_Statics::Function_MetaDataParams[] = {
		{ "Category", "Control Rig Blueprint" },
		{ "ModuleRelativePath", "Public/ControlRigBlueprint.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UControlRigBlueprint_CreateControlRig_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UControlRigBlueprint, nullptr, "CreateControlRig", nullptr, nullptr, Z_Construct_UFunction_UControlRigBlueprint_CreateControlRig_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigBlueprint_CreateControlRig_Statics::PropPointers), sizeof(Z_Construct_UFunction_UControlRigBlueprint_CreateControlRig_Statics::ControlRigBlueprint_eventCreateControlRig_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigBlueprint_CreateControlRig_Statics::Function_MetaDataParams), Z_Construct_UFunction_UControlRigBlueprint_CreateControlRig_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigBlueprint_CreateControlRig_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UControlRigBlueprint_CreateControlRig_Statics::ControlRigBlueprint_eventCreateControlRig_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UControlRigBlueprint_CreateControlRig()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UControlRigBlueprint_CreateControlRig_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UControlRigBlueprint_GetControlRigClass_Statics
	{
		struct ControlRigBlueprint_eventGetControlRigClass_Parms
		{
			UClass* ReturnValue;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UControlRigBlueprint_GetControlRigClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ControlRigBlueprint_eventGetControlRigClass_Parms, ReturnValue), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UControlRigBlueprint_GetControlRigClass_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigBlueprint_GetControlRigClass_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UControlRigBlueprint_GetControlRigClass_Statics::Function_MetaDataParams[] = {
		{ "Category", "VM" },
		{ "ModuleRelativePath", "Public/ControlRigBlueprint.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UControlRigBlueprint_GetControlRigClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UControlRigBlueprint, nullptr, "GetControlRigClass", nullptr, nullptr, Z_Construct_UFunction_UControlRigBlueprint_GetControlRigClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigBlueprint_GetControlRigClass_Statics::PropPointers), sizeof(Z_Construct_UFunction_UControlRigBlueprint_GetControlRigClass_Statics::ControlRigBlueprint_eventGetControlRigClass_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigBlueprint_GetControlRigClass_Statics::Function_MetaDataParams), Z_Construct_UFunction_UControlRigBlueprint_GetControlRigClass_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigBlueprint_GetControlRigClass_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UControlRigBlueprint_GetControlRigClass_Statics::ControlRigBlueprint_eventGetControlRigClass_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UControlRigBlueprint_GetControlRigClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UControlRigBlueprint_GetControlRigClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UControlRigBlueprint_GetCurrentlyOpenRigBlueprints_Statics
	{
		struct ControlRigBlueprint_eventGetCurrentlyOpenRigBlueprints_Parms
		{
			TArray<UControlRigBlueprint*> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UControlRigBlueprint_GetCurrentlyOpenRigBlueprints_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UControlRigBlueprint_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UControlRigBlueprint_GetCurrentlyOpenRigBlueprints_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ControlRigBlueprint_eventGetCurrentlyOpenRigBlueprints_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UControlRigBlueprint_GetCurrentlyOpenRigBlueprints_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigBlueprint_GetCurrentlyOpenRigBlueprints_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigBlueprint_GetCurrentlyOpenRigBlueprints_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UControlRigBlueprint_GetCurrentlyOpenRigBlueprints_Statics::Function_MetaDataParams[] = {
		{ "Category", "VM" },
		{ "ModuleRelativePath", "Public/ControlRigBlueprint.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UControlRigBlueprint_GetCurrentlyOpenRigBlueprints_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UControlRigBlueprint, nullptr, "GetCurrentlyOpenRigBlueprints", nullptr, nullptr, Z_Construct_UFunction_UControlRigBlueprint_GetCurrentlyOpenRigBlueprints_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigBlueprint_GetCurrentlyOpenRigBlueprints_Statics::PropPointers), sizeof(Z_Construct_UFunction_UControlRigBlueprint_GetCurrentlyOpenRigBlueprints_Statics::ControlRigBlueprint_eventGetCurrentlyOpenRigBlueprints_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigBlueprint_GetCurrentlyOpenRigBlueprints_Statics::Function_MetaDataParams), Z_Construct_UFunction_UControlRigBlueprint_GetCurrentlyOpenRigBlueprints_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigBlueprint_GetCurrentlyOpenRigBlueprints_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UControlRigBlueprint_GetCurrentlyOpenRigBlueprints_Statics::ControlRigBlueprint_eventGetCurrentlyOpenRigBlueprints_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UControlRigBlueprint_GetCurrentlyOpenRigBlueprints()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UControlRigBlueprint_GetCurrentlyOpenRigBlueprints_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UControlRigBlueprint_GetHierarchyController_Statics
	{
		struct ControlRigBlueprint_eventGetHierarchyController_Parms
		{
			URigHierarchyController* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UControlRigBlueprint_GetHierarchyController_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ControlRigBlueprint_eventGetHierarchyController_Parms, ReturnValue), Z_Construct_UClass_URigHierarchyController_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UControlRigBlueprint_GetHierarchyController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigBlueprint_GetHierarchyController_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UControlRigBlueprint_GetHierarchyController_Statics::Function_MetaDataParams[] = {
		{ "Category", "Hierarchy" },
		{ "ModuleRelativePath", "Public/ControlRigBlueprint.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UControlRigBlueprint_GetHierarchyController_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UControlRigBlueprint, nullptr, "GetHierarchyController", nullptr, nullptr, Z_Construct_UFunction_UControlRigBlueprint_GetHierarchyController_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigBlueprint_GetHierarchyController_Statics::PropPointers), sizeof(Z_Construct_UFunction_UControlRigBlueprint_GetHierarchyController_Statics::ControlRigBlueprint_eventGetHierarchyController_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigBlueprint_GetHierarchyController_Statics::Function_MetaDataParams), Z_Construct_UFunction_UControlRigBlueprint_GetHierarchyController_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigBlueprint_GetHierarchyController_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UControlRigBlueprint_GetHierarchyController_Statics::ControlRigBlueprint_eventGetHierarchyController_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UControlRigBlueprint_GetHierarchyController()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UControlRigBlueprint_GetHierarchyController_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UControlRigBlueprint_GetPreviewMesh_Statics
	{
		struct ControlRigBlueprint_eventGetPreviewMesh_Parms
		{
			USkeletalMesh* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UControlRigBlueprint_GetPreviewMesh_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ControlRigBlueprint_eventGetPreviewMesh_Parms, ReturnValue), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UControlRigBlueprint_GetPreviewMesh_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigBlueprint_GetPreviewMesh_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UControlRigBlueprint_GetPreviewMesh_Statics::Function_MetaDataParams[] = {
		{ "Category", "Control Rig Blueprint" },
		{ "ModuleRelativePath", "Public/ControlRigBlueprint.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UControlRigBlueprint_GetPreviewMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UControlRigBlueprint, nullptr, "GetPreviewMesh", nullptr, nullptr, Z_Construct_UFunction_UControlRigBlueprint_GetPreviewMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigBlueprint_GetPreviewMesh_Statics::PropPointers), sizeof(Z_Construct_UFunction_UControlRigBlueprint_GetPreviewMesh_Statics::ControlRigBlueprint_eventGetPreviewMesh_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigBlueprint_GetPreviewMesh_Statics::Function_MetaDataParams), Z_Construct_UFunction_UControlRigBlueprint_GetPreviewMesh_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigBlueprint_GetPreviewMesh_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UControlRigBlueprint_GetPreviewMesh_Statics::ControlRigBlueprint_eventGetPreviewMesh_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UControlRigBlueprint_GetPreviewMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UControlRigBlueprint_GetPreviewMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UControlRigBlueprint_SetPreviewMesh_Statics
	{
		struct ControlRigBlueprint_eventSetPreviewMesh_Parms
		{
			USkeletalMesh* PreviewMesh;
			bool bMarkAsDirty;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PreviewMesh;
		static void NewProp_bMarkAsDirty_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bMarkAsDirty;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UControlRigBlueprint_SetPreviewMesh_Statics::NewProp_PreviewMesh = { "PreviewMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ControlRigBlueprint_eventSetPreviewMesh_Parms, PreviewMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UControlRigBlueprint_SetPreviewMesh_Statics::NewProp_bMarkAsDirty_SetBit(void* Obj)
	{
		((ControlRigBlueprint_eventSetPreviewMesh_Parms*)Obj)->bMarkAsDirty = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UControlRigBlueprint_SetPreviewMesh_Statics::NewProp_bMarkAsDirty = { "bMarkAsDirty", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ControlRigBlueprint_eventSetPreviewMesh_Parms), &Z_Construct_UFunction_UControlRigBlueprint_SetPreviewMesh_Statics::NewProp_bMarkAsDirty_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UControlRigBlueprint_SetPreviewMesh_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigBlueprint_SetPreviewMesh_Statics::NewProp_PreviewMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigBlueprint_SetPreviewMesh_Statics::NewProp_bMarkAsDirty,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UControlRigBlueprint_SetPreviewMesh_Statics::Function_MetaDataParams[] = {
		{ "Category", "Control Rig Blueprint" },
		{ "Comment", "/** IInterface_PreviewMeshProvider interface */" },
		{ "CPP_Default_bMarkAsDirty", "true" },
		{ "ModuleRelativePath", "Public/ControlRigBlueprint.h" },
		{ "ToolTip", "IInterface_PreviewMeshProvider interface" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UControlRigBlueprint_SetPreviewMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UControlRigBlueprint, nullptr, "SetPreviewMesh", nullptr, nullptr, Z_Construct_UFunction_UControlRigBlueprint_SetPreviewMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigBlueprint_SetPreviewMesh_Statics::PropPointers), sizeof(Z_Construct_UFunction_UControlRigBlueprint_SetPreviewMesh_Statics::ControlRigBlueprint_eventSetPreviewMesh_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigBlueprint_SetPreviewMesh_Statics::Function_MetaDataParams), Z_Construct_UFunction_UControlRigBlueprint_SetPreviewMesh_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigBlueprint_SetPreviewMesh_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UControlRigBlueprint_SetPreviewMesh_Statics::ControlRigBlueprint_eventSetPreviewMesh_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UControlRigBlueprint_SetPreviewMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UControlRigBlueprint_SetPreviewMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UControlRigBlueprint);
	UClass* Z_Construct_UClass_UControlRigBlueprint_NoRegister()
	{
		return UControlRigBlueprint::StaticClass();
	}
	struct Z_Construct_UClass_UControlRigBlueprint_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HierarchySettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_HierarchySettings;
		static const UECodeGen_Private::FStructPropertyParams NewProp_PublicFunctions_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PublicFunctions_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PublicFunctions;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GizmoLibrary_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_GizmoLibrary;
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_ShapeLibraries_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShapeLibraries_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ShapeLibraries;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Statistics_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Statistics;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DrawContainer_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DrawContainer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Influences_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Influences;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HierarchyContainer_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_HierarchyContainer;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Hierarchy_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Hierarchy;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSupportsInversion_MetaData[];
#endif
		static void NewProp_bSupportsInversion_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSupportsInversion;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSupportsControls_MetaData[];
#endif
		static void NewProp_bSupportsControls_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSupportsControls;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreviewSkeletalMesh_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_PreviewSkeletalMesh;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceHierarchyImport_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_SourceHierarchyImport;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceCurveImport_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_SourceCurveImport;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bExposesAnimatableControls_MetaData[];
#endif
		static void NewProp_bExposesAnimatableControls_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bExposesAnimatableControls;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Validator_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Validator;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DebugBoneRadius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DebugBoneRadius;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UControlRigBlueprint_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_URigVMBlueprint,
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRigDeveloper,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UControlRigBlueprint_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UControlRigBlueprint_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UControlRigBlueprint_CreateControlRig, "CreateControlRig" }, // 937591571
		{ &Z_Construct_UFunction_UControlRigBlueprint_GetControlRigClass, "GetControlRigClass" }, // 397918710
		{ &Z_Construct_UFunction_UControlRigBlueprint_GetCurrentlyOpenRigBlueprints, "GetCurrentlyOpenRigBlueprints" }, // 3886729581
		{ &Z_Construct_UFunction_UControlRigBlueprint_GetHierarchyController, "GetHierarchyController" }, // 352826458
		{ &Z_Construct_UFunction_UControlRigBlueprint_GetPreviewMesh, "GetPreviewMesh" }, // 2188574699
		{ &Z_Construct_UFunction_UControlRigBlueprint_SetPreviewMesh, "SetPreviewMesh" }, // 3735534531
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UControlRigBlueprint_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UControlRigBlueprint_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IgnoreClassThumbnail", "" },
		{ "IncludePath", "ControlRigBlueprint.h" },
		{ "ModuleRelativePath", "Public/ControlRigBlueprint.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UControlRigBlueprint_Statics::NewProp_HierarchySettings_MetaData[] = {
		{ "Category", "Hierarchy" },
		{ "ModuleRelativePath", "Public/ControlRigBlueprint.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UControlRigBlueprint_Statics::NewProp_HierarchySettings = { "HierarchySettings", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UControlRigBlueprint, HierarchySettings), Z_Construct_UScriptStruct_FRigHierarchySettings, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UControlRigBlueprint_Statics::NewProp_HierarchySettings_MetaData), Z_Construct_UClass_UControlRigBlueprint_Statics::NewProp_HierarchySettings_MetaData) }; // 285177512
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UControlRigBlueprint_Statics::NewProp_PublicFunctions_Inner = { "PublicFunctions", nullptr, (EPropertyFlags)0x0000000020000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FRigVMOldPublicFunctionData, METADATA_PARAMS(0, nullptr) }; // 3956944550
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UControlRigBlueprint_Statics::NewProp_PublicFunctions_MetaData[] = {
		{ "Comment", "/** Asset searchable information about exposed public functions on this rig */" },
		{ "ModuleRelativePath", "Public/ControlRigBlueprint.h" },
		{ "ToolTip", "Asset searchable information about exposed public functions on this rig" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UControlRigBlueprint_Statics::NewProp_PublicFunctions = { "PublicFunctions", nullptr, (EPropertyFlags)0x0020090020000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UControlRigBlueprint, PublicFunctions_DEPRECATED), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UControlRigBlueprint_Statics::NewProp_PublicFunctions_MetaData), Z_Construct_UClass_UControlRigBlueprint_Statics::NewProp_PublicFunctions_MetaData) }; // 3956944550
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UControlRigBlueprint_Statics::NewProp_GizmoLibrary_MetaData[] = {
		{ "ModuleRelativePath", "Public/ControlRigBlueprint.h" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UControlRigBlueprint_Statics::NewProp_GizmoLibrary = { "GizmoLibrary", nullptr, (EPropertyFlags)0x0014000820000000, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UControlRigBlueprint, GizmoLibrary_DEPRECATED), Z_Construct_UClass_UControlRigShapeLibrary_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UControlRigBlueprint_Statics::NewProp_GizmoLibrary_MetaData), Z_Construct_UClass_UControlRigBlueprint_Statics::NewProp_GizmoLibrary_MetaData) };
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UControlRigBlueprint_Statics::NewProp_ShapeLibraries_Inner = { "ShapeLibraries", nullptr, (EPropertyFlags)0x0004000800000000, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UControlRigShapeLibrary_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UControlRigBlueprint_Statics::NewProp_ShapeLibraries_MetaData[] = {
		{ "Category", "Shapes" },
		{ "ModuleRelativePath", "Public/ControlRigBlueprint.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UControlRigBlueprint_Statics::NewProp_ShapeLibraries = { "ShapeLibraries", nullptr, (EPropertyFlags)0x0014000800000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UControlRigBlueprint, ShapeLibraries), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UControlRigBlueprint_Statics::NewProp_ShapeLibraries_MetaData), Z_Construct_UClass_UControlRigBlueprint_Statics::NewProp_ShapeLibraries_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UControlRigBlueprint_Statics::NewProp_Statistics_MetaData[] = {
		{ "DisplayAfter", "VMCompileSettings" },
		{ "DisplayName", "VM Statistics" },
		{ "ModuleRelativePath", "Public/ControlRigBlueprint.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UControlRigBlueprint_Statics::NewProp_Statistics = { "Statistics", nullptr, (EPropertyFlags)0x0010000820202000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UControlRigBlueprint, Statistics_DEPRECATED), Z_Construct_UScriptStruct_FRigVMStatistics, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UControlRigBlueprint_Statics::NewProp_Statistics_MetaData), Z_Construct_UClass_UControlRigBlueprint_Statics::NewProp_Statistics_MetaData) }; // 676819673
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UControlRigBlueprint_Statics::NewProp_DrawContainer_MetaData[] = {
		{ "Category", "Drawing" },
		{ "ModuleRelativePath", "Public/ControlRigBlueprint.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UControlRigBlueprint_Statics::NewProp_DrawContainer = { "DrawContainer", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UControlRigBlueprint, DrawContainer), Z_Construct_UScriptStruct_FRigVMDrawContainer, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UControlRigBlueprint_Statics::NewProp_DrawContainer_MetaData), Z_Construct_UClass_UControlRigBlueprint_Statics::NewProp_DrawContainer_MetaData) }; // 677735076
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UControlRigBlueprint_Statics::NewProp_Influences_MetaData[] = {
		{ "Category", "Influence Map" },
		{ "ModuleRelativePath", "Public/ControlRigBlueprint.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UControlRigBlueprint_Statics::NewProp_Influences = { "Influences", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UControlRigBlueprint, Influences), Z_Construct_UScriptStruct_FRigInfluenceMapPerEvent, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UControlRigBlueprint_Statics::NewProp_Influences_MetaData), Z_Construct_UClass_UControlRigBlueprint_Statics::NewProp_Influences_MetaData) }; // 1334244442
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UControlRigBlueprint_Statics::NewProp_HierarchyContainer_MetaData[] = {
		{ "ModuleRelativePath", "Public/ControlRigBlueprint.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UControlRigBlueprint_Statics::NewProp_HierarchyContainer = { "HierarchyContainer", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UControlRigBlueprint, HierarchyContainer_DEPRECATED), Z_Construct_UScriptStruct_FRigHierarchyContainer, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UControlRigBlueprint_Statics::NewProp_HierarchyContainer_MetaData), Z_Construct_UClass_UControlRigBlueprint_Statics::NewProp_HierarchyContainer_MetaData) }; // 2983478275
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UControlRigBlueprint_Statics::NewProp_Hierarchy_MetaData[] = {
		{ "Category", "Hierarchy" },
		{ "ModuleRelativePath", "Public/ControlRigBlueprint.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UControlRigBlueprint_Statics::NewProp_Hierarchy = { "Hierarchy", nullptr, (EPropertyFlags)0x0014000000000014, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UControlRigBlueprint, Hierarchy), Z_Construct_UClass_URigHierarchy_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UControlRigBlueprint_Statics::NewProp_Hierarchy_MetaData), Z_Construct_UClass_UControlRigBlueprint_Statics::NewProp_Hierarchy_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UControlRigBlueprint_Statics::NewProp_bSupportsInversion_MetaData[] = {
		{ "Comment", "/** Whether or not this rig has an Inversion Event */" },
		{ "ModuleRelativePath", "Public/ControlRigBlueprint.h" },
		{ "ToolTip", "Whether or not this rig has an Inversion Event" },
	};
#endif
	void Z_Construct_UClass_UControlRigBlueprint_Statics::NewProp_bSupportsInversion_SetBit(void* Obj)
	{
		((UControlRigBlueprint*)Obj)->bSupportsInversion = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UControlRigBlueprint_Statics::NewProp_bSupportsInversion = { "bSupportsInversion", nullptr, (EPropertyFlags)0x0040010000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UControlRigBlueprint), &Z_Construct_UClass_UControlRigBlueprint_Statics::NewProp_bSupportsInversion_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UControlRigBlueprint_Statics::NewProp_bSupportsInversion_MetaData), Z_Construct_UClass_UControlRigBlueprint_Statics::NewProp_bSupportsInversion_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UControlRigBlueprint_Statics::NewProp_bSupportsControls_MetaData[] = {
		{ "Comment", "/** Whether or not this rig has Controls on It */" },
		{ "ModuleRelativePath", "Public/ControlRigBlueprint.h" },
		{ "ToolTip", "Whether or not this rig has Controls on It" },
	};
#endif
	void Z_Construct_UClass_UControlRigBlueprint_Statics::NewProp_bSupportsControls_SetBit(void* Obj)
	{
		((UControlRigBlueprint*)Obj)->bSupportsControls = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UControlRigBlueprint_Statics::NewProp_bSupportsControls = { "bSupportsControls", nullptr, (EPropertyFlags)0x0040010000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UControlRigBlueprint), &Z_Construct_UClass_UControlRigBlueprint_Statics::NewProp_bSupportsControls_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UControlRigBlueprint_Statics::NewProp_bSupportsControls_MetaData), Z_Construct_UClass_UControlRigBlueprint_Statics::NewProp_bSupportsControls_MetaData) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UControlRigBlueprint_Statics::NewProp_PreviewSkeletalMesh_MetaData[] = {
		{ "ModuleRelativePath", "Public/ControlRigBlueprint.h" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UControlRigBlueprint_Statics::NewProp_PreviewSkeletalMesh = { "PreviewSkeletalMesh", nullptr, (EPropertyFlags)0x0044010800000000, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UControlRigBlueprint, PreviewSkeletalMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UControlRigBlueprint_Statics::NewProp_PreviewSkeletalMesh_MetaData), Z_Construct_UClass_UControlRigBlueprint_Statics::NewProp_PreviewSkeletalMesh_MetaData) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UControlRigBlueprint_Statics::NewProp_SourceHierarchyImport_MetaData[] = {
		{ "Comment", "/** The skeleton from import into a hierarchy */" },
		{ "ModuleRelativePath", "Public/ControlRigBlueprint.h" },
		{ "ToolTip", "The skeleton from import into a hierarchy" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UControlRigBlueprint_Statics::NewProp_SourceHierarchyImport = { "SourceHierarchyImport", nullptr, (EPropertyFlags)0x0044010000200000, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UControlRigBlueprint, SourceHierarchyImport), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UControlRigBlueprint_Statics::NewProp_SourceHierarchyImport_MetaData), Z_Construct_UClass_UControlRigBlueprint_Statics::NewProp_SourceHierarchyImport_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UControlRigBlueprint_Statics::NewProp_SourceCurveImport_MetaData[] = {
		{ "Comment", "/** The skeleton from import into a curve */" },
		{ "ModuleRelativePath", "Public/ControlRigBlueprint.h" },
		{ "ToolTip", "The skeleton from import into a curve" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UControlRigBlueprint_Statics::NewProp_SourceCurveImport = { "SourceCurveImport", nullptr, (EPropertyFlags)0x0044010000200000, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UControlRigBlueprint, SourceCurveImport), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UControlRigBlueprint_Statics::NewProp_SourceCurveImport_MetaData), Z_Construct_UClass_UControlRigBlueprint_Statics::NewProp_SourceCurveImport_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UControlRigBlueprint_Statics::NewProp_bExposesAnimatableControls_MetaData[] = {
		{ "Comment", "/** If set to true, this control rig has animatable controls */" },
		{ "ModuleRelativePath", "Public/ControlRigBlueprint.h" },
		{ "ToolTip", "If set to true, this control rig has animatable controls" },
	};
#endif
	void Z_Construct_UClass_UControlRigBlueprint_Statics::NewProp_bExposesAnimatableControls_SetBit(void* Obj)
	{
		((UControlRigBlueprint*)Obj)->bExposesAnimatableControls = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UControlRigBlueprint_Statics::NewProp_bExposesAnimatableControls = { "bExposesAnimatableControls", nullptr, (EPropertyFlags)0x0040010000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UControlRigBlueprint), &Z_Construct_UClass_UControlRigBlueprint_Statics::NewProp_bExposesAnimatableControls_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UControlRigBlueprint_Statics::NewProp_bExposesAnimatableControls_MetaData), Z_Construct_UClass_UControlRigBlueprint_Statics::NewProp_bExposesAnimatableControls_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UControlRigBlueprint_Statics::NewProp_Validator_MetaData[] = {
		{ "ModuleRelativePath", "Public/ControlRigBlueprint.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UControlRigBlueprint_Statics::NewProp_Validator = { "Validator", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UControlRigBlueprint, Validator), Z_Construct_UClass_UControlRigValidator_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UControlRigBlueprint_Statics::NewProp_Validator_MetaData), Z_Construct_UClass_UControlRigBlueprint_Statics::NewProp_Validator_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UControlRigBlueprint_Statics::NewProp_DebugBoneRadius_MetaData[] = {
		{ "ModuleRelativePath", "Public/ControlRigBlueprint.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UControlRigBlueprint_Statics::NewProp_DebugBoneRadius = { "DebugBoneRadius", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UControlRigBlueprint, DebugBoneRadius), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UControlRigBlueprint_Statics::NewProp_DebugBoneRadius_MetaData), Z_Construct_UClass_UControlRigBlueprint_Statics::NewProp_DebugBoneRadius_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UControlRigBlueprint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRigBlueprint_Statics::NewProp_HierarchySettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRigBlueprint_Statics::NewProp_PublicFunctions_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRigBlueprint_Statics::NewProp_PublicFunctions,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRigBlueprint_Statics::NewProp_GizmoLibrary,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRigBlueprint_Statics::NewProp_ShapeLibraries_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRigBlueprint_Statics::NewProp_ShapeLibraries,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRigBlueprint_Statics::NewProp_Statistics,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRigBlueprint_Statics::NewProp_DrawContainer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRigBlueprint_Statics::NewProp_Influences,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRigBlueprint_Statics::NewProp_HierarchyContainer,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRigBlueprint_Statics::NewProp_Hierarchy,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRigBlueprint_Statics::NewProp_bSupportsInversion,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRigBlueprint_Statics::NewProp_bSupportsControls,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRigBlueprint_Statics::NewProp_PreviewSkeletalMesh,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRigBlueprint_Statics::NewProp_SourceHierarchyImport,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRigBlueprint_Statics::NewProp_SourceCurveImport,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRigBlueprint_Statics::NewProp_bExposesAnimatableControls,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRigBlueprint_Statics::NewProp_Validator,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRigBlueprint_Statics::NewProp_DebugBoneRadius,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UControlRigBlueprint_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UInterface_PreviewMeshProvider_NoRegister, (int32)VTABLE_OFFSET(UControlRigBlueprint, IInterface_PreviewMeshProvider), false },  // 539613644
		};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UControlRigBlueprint_Statics::InterfaceParams) < 64);
	const FCppClassTypeInfoStatic Z_Construct_UClass_UControlRigBlueprint_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UControlRigBlueprint>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UControlRigBlueprint_Statics::ClassParams = {
		&UControlRigBlueprint::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UControlRigBlueprint_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UControlRigBlueprint_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UControlRigBlueprint_Statics::Class_MetaDataParams), Z_Construct_UClass_UControlRigBlueprint_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UControlRigBlueprint_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UControlRigBlueprint()
	{
		if (!Z_Registration_Info_UClass_UControlRigBlueprint.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UControlRigBlueprint.OuterSingleton, Z_Construct_UClass_UControlRigBlueprint_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UControlRigBlueprint.OuterSingleton;
	}
	template<> CONTROLRIGDEVELOPER_API UClass* StaticClass<UControlRigBlueprint>()
	{
		return UControlRigBlueprint::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UControlRigBlueprint);
	UControlRigBlueprint::~UControlRigBlueprint() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UControlRigBlueprint)
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigDeveloper_Public_ControlRigBlueprint_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigDeveloper_Public_ControlRigBlueprint_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UControlRigBlueprint, UControlRigBlueprint::StaticClass, TEXT("UControlRigBlueprint"), &Z_Registration_Info_UClass_UControlRigBlueprint, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UControlRigBlueprint), 1113655233U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigDeveloper_Public_ControlRigBlueprint_h_2570036797(TEXT("/Script/ControlRigDeveloper"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigDeveloper_Public_ControlRigBlueprint_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigDeveloper_Public_ControlRigBlueprint_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
