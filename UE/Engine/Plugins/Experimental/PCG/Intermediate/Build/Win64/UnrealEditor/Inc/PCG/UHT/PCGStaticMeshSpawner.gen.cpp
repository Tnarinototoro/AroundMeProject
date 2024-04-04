// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Elements/PCGStaticMeshSpawner.h"
#include "../../Source/Runtime/Engine/Classes/Engine/CollisionProfile.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePCGStaticMeshSpawner() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FCollisionProfileName();
	PCG_API UClass* Z_Construct_UClass_UPCGInstanceDataPackerBase_NoRegister();
	PCG_API UClass* Z_Construct_UClass_UPCGMeshSelectorBase_NoRegister();
	PCG_API UClass* Z_Construct_UClass_UPCGSettings();
	PCG_API UClass* Z_Construct_UClass_UPCGStaticMeshSpawnerSettings();
	PCG_API UClass* Z_Construct_UClass_UPCGStaticMeshSpawnerSettings_NoRegister();
	PCG_API UScriptStruct* Z_Construct_UScriptStruct_FPCGStaticMeshSpawnerEntry();
	UPackage* Z_Construct_UPackage__Script_PCG();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PCGStaticMeshSpawnerEntry;
class UScriptStruct* FPCGStaticMeshSpawnerEntry::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PCGStaticMeshSpawnerEntry.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PCGStaticMeshSpawnerEntry.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPCGStaticMeshSpawnerEntry, (UObject*)Z_Construct_UPackage__Script_PCG(), TEXT("PCGStaticMeshSpawnerEntry"));
	}
	return Z_Registration_Info_UScriptStruct_PCGStaticMeshSpawnerEntry.OuterSingleton;
}
template<> PCG_API UScriptStruct* StaticStruct<FPCGStaticMeshSpawnerEntry>()
{
	return FPCGStaticMeshSpawnerEntry::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPCGStaticMeshSpawnerEntry_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Weight_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Weight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_Mesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideCollisionProfile_MetaData[];
#endif
		static void NewProp_bOverrideCollisionProfile_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideCollisionProfile;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CollisionProfile_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CollisionProfile;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPCGStaticMeshSpawnerEntry_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Deprecated", "5.0" },
		{ "DeprecationMessage", "Use MeshSelectorWeighted instead." },
		{ "ModuleRelativePath", "Public/Elements/PCGStaticMeshSpawner.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPCGStaticMeshSpawnerEntry_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPCGStaticMeshSpawnerEntry>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPCGStaticMeshSpawnerEntry_Statics::NewProp_Weight_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/Elements/PCGStaticMeshSpawner.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPCGStaticMeshSpawnerEntry_Statics::NewProp_Weight = { "Weight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGStaticMeshSpawnerEntry, Weight), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGStaticMeshSpawnerEntry_Statics::NewProp_Weight_MetaData), Z_Construct_UScriptStruct_FPCGStaticMeshSpawnerEntry_Statics::NewProp_Weight_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPCGStaticMeshSpawnerEntry_Statics::NewProp_Mesh_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Elements/PCGStaticMeshSpawner.h" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FPCGStaticMeshSpawnerEntry_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGStaticMeshSpawnerEntry, Mesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGStaticMeshSpawnerEntry_Statics::NewProp_Mesh_MetaData), Z_Construct_UScriptStruct_FPCGStaticMeshSpawnerEntry_Statics::NewProp_Mesh_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPCGStaticMeshSpawnerEntry_Statics::NewProp_bOverrideCollisionProfile_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Elements/PCGStaticMeshSpawner.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FPCGStaticMeshSpawnerEntry_Statics::NewProp_bOverrideCollisionProfile_SetBit(void* Obj)
	{
		((FPCGStaticMeshSpawnerEntry*)Obj)->bOverrideCollisionProfile = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGStaticMeshSpawnerEntry_Statics::NewProp_bOverrideCollisionProfile = { "bOverrideCollisionProfile", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPCGStaticMeshSpawnerEntry), &Z_Construct_UScriptStruct_FPCGStaticMeshSpawnerEntry_Statics::NewProp_bOverrideCollisionProfile_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGStaticMeshSpawnerEntry_Statics::NewProp_bOverrideCollisionProfile_MetaData), Z_Construct_UScriptStruct_FPCGStaticMeshSpawnerEntry_Statics::NewProp_bOverrideCollisionProfile_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPCGStaticMeshSpawnerEntry_Statics::NewProp_CollisionProfile_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Elements/PCGStaticMeshSpawner.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPCGStaticMeshSpawnerEntry_Statics::NewProp_CollisionProfile = { "CollisionProfile", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGStaticMeshSpawnerEntry, CollisionProfile), Z_Construct_UScriptStruct_FCollisionProfileName, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGStaticMeshSpawnerEntry_Statics::NewProp_CollisionProfile_MetaData), Z_Construct_UScriptStruct_FPCGStaticMeshSpawnerEntry_Statics::NewProp_CollisionProfile_MetaData) }; // 3144723258
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPCGStaticMeshSpawnerEntry_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGStaticMeshSpawnerEntry_Statics::NewProp_Weight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGStaticMeshSpawnerEntry_Statics::NewProp_Mesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGStaticMeshSpawnerEntry_Statics::NewProp_bOverrideCollisionProfile,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGStaticMeshSpawnerEntry_Statics::NewProp_CollisionProfile,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPCGStaticMeshSpawnerEntry_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PCG,
		nullptr,
		&NewStructOps,
		"PCGStaticMeshSpawnerEntry",
		Z_Construct_UScriptStruct_FPCGStaticMeshSpawnerEntry_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGStaticMeshSpawnerEntry_Statics::PropPointers),
		sizeof(FPCGStaticMeshSpawnerEntry),
		alignof(FPCGStaticMeshSpawnerEntry),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGStaticMeshSpawnerEntry_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPCGStaticMeshSpawnerEntry_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGStaticMeshSpawnerEntry_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FPCGStaticMeshSpawnerEntry()
	{
		if (!Z_Registration_Info_UScriptStruct_PCGStaticMeshSpawnerEntry.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PCGStaticMeshSpawnerEntry.InnerSingleton, Z_Construct_UScriptStruct_FPCGStaticMeshSpawnerEntry_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PCGStaticMeshSpawnerEntry.InnerSingleton;
	}
	DEFINE_FUNCTION(UPCGStaticMeshSpawnerSettings::execSetInstancePackerType)
	{
		P_GET_OBJECT(UClass,Z_Param_InInstancePackerType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetInstancePackerType(Z_Param_InInstancePackerType);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPCGStaticMeshSpawnerSettings::execSetMeshSelectorType)
	{
		P_GET_OBJECT(UClass,Z_Param_InMeshSelectorType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMeshSelectorType(Z_Param_InMeshSelectorType);
		P_NATIVE_END;
	}
	void UPCGStaticMeshSpawnerSettings::StaticRegisterNativesUPCGStaticMeshSpawnerSettings()
	{
		UClass* Class = UPCGStaticMeshSpawnerSettings::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetInstancePackerType", &UPCGStaticMeshSpawnerSettings::execSetInstancePackerType },
			{ "SetMeshSelectorType", &UPCGStaticMeshSpawnerSettings::execSetMeshSelectorType },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPCGStaticMeshSpawnerSettings_SetInstancePackerType_Statics
	{
		struct PCGStaticMeshSpawnerSettings_eventSetInstancePackerType_Parms
		{
			TSubclassOf<UPCGInstanceDataPackerBase>  InInstancePackerType;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_InInstancePackerType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UPCGStaticMeshSpawnerSettings_SetInstancePackerType_Statics::NewProp_InInstancePackerType = { "InInstancePackerType", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGStaticMeshSpawnerSettings_eventSetInstancePackerType_Parms, InInstancePackerType), Z_Construct_UClass_UClass, Z_Construct_UClass_UPCGInstanceDataPackerBase_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGStaticMeshSpawnerSettings_SetInstancePackerType_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGStaticMeshSpawnerSettings_SetInstancePackerType_Statics::NewProp_InInstancePackerType,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGStaticMeshSpawnerSettings_SetInstancePackerType_Statics::Function_MetaDataParams[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Elements/PCGStaticMeshSpawner.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGStaticMeshSpawnerSettings_SetInstancePackerType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPCGStaticMeshSpawnerSettings, nullptr, "SetInstancePackerType", nullptr, nullptr, Z_Construct_UFunction_UPCGStaticMeshSpawnerSettings_SetInstancePackerType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGStaticMeshSpawnerSettings_SetInstancePackerType_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPCGStaticMeshSpawnerSettings_SetInstancePackerType_Statics::PCGStaticMeshSpawnerSettings_eventSetInstancePackerType_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGStaticMeshSpawnerSettings_SetInstancePackerType_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPCGStaticMeshSpawnerSettings_SetInstancePackerType_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGStaticMeshSpawnerSettings_SetInstancePackerType_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UPCGStaticMeshSpawnerSettings_SetInstancePackerType_Statics::PCGStaticMeshSpawnerSettings_eventSetInstancePackerType_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPCGStaticMeshSpawnerSettings_SetInstancePackerType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGStaticMeshSpawnerSettings_SetInstancePackerType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPCGStaticMeshSpawnerSettings_SetMeshSelectorType_Statics
	{
		struct PCGStaticMeshSpawnerSettings_eventSetMeshSelectorType_Parms
		{
			TSubclassOf<UPCGMeshSelectorBase>  InMeshSelectorType;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_InMeshSelectorType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UPCGStaticMeshSpawnerSettings_SetMeshSelectorType_Statics::NewProp_InMeshSelectorType = { "InMeshSelectorType", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGStaticMeshSpawnerSettings_eventSetMeshSelectorType_Parms, InMeshSelectorType), Z_Construct_UClass_UClass, Z_Construct_UClass_UPCGMeshSelectorBase_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGStaticMeshSpawnerSettings_SetMeshSelectorType_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGStaticMeshSpawnerSettings_SetMeshSelectorType_Statics::NewProp_InMeshSelectorType,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGStaticMeshSpawnerSettings_SetMeshSelectorType_Statics::Function_MetaDataParams[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Elements/PCGStaticMeshSpawner.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGStaticMeshSpawnerSettings_SetMeshSelectorType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPCGStaticMeshSpawnerSettings, nullptr, "SetMeshSelectorType", nullptr, nullptr, Z_Construct_UFunction_UPCGStaticMeshSpawnerSettings_SetMeshSelectorType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGStaticMeshSpawnerSettings_SetMeshSelectorType_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPCGStaticMeshSpawnerSettings_SetMeshSelectorType_Statics::PCGStaticMeshSpawnerSettings_eventSetMeshSelectorType_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGStaticMeshSpawnerSettings_SetMeshSelectorType_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPCGStaticMeshSpawnerSettings_SetMeshSelectorType_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGStaticMeshSpawnerSettings_SetMeshSelectorType_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UPCGStaticMeshSpawnerSettings_SetMeshSelectorType_Statics::PCGStaticMeshSpawnerSettings_eventSetMeshSelectorType_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPCGStaticMeshSpawnerSettings_SetMeshSelectorType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGStaticMeshSpawnerSettings_SetMeshSelectorType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPCGStaticMeshSpawnerSettings);
	UClass* Z_Construct_UClass_UPCGStaticMeshSpawnerSettings_NoRegister()
	{
		return UPCGStaticMeshSpawnerSettings::StaticClass();
	}
	struct Z_Construct_UClass_UPCGStaticMeshSpawnerSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeshSelectorType_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_MeshSelectorType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeshSelectorParameters_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_MeshSelectorParameters;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InstanceDataPackerType_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_InstanceDataPackerType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InstanceDataPackerParameters_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_InstanceDataPackerParameters;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OutAttributeName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_OutAttributeName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bApplyMeshBoundsToPoints_MetaData[];
#endif
		static void NewProp_bApplyMeshBoundsToPoints_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bApplyMeshBoundsToPoints;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetActor_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_TargetActor;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Meshes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Meshes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Meshes;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPCGStaticMeshSpawnerSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPCGSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_PCG,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGStaticMeshSpawnerSettings_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UPCGStaticMeshSpawnerSettings_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPCGStaticMeshSpawnerSettings_SetInstancePackerType, "SetInstancePackerType" }, // 3739722409
		{ &Z_Construct_UFunction_UPCGStaticMeshSpawnerSettings_SetMeshSelectorType, "SetMeshSelectorType" }, // 1068282085
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGStaticMeshSpawnerSettings_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGStaticMeshSpawnerSettings_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Procedural" },
		{ "IncludePath", "Elements/PCGStaticMeshSpawner.h" },
		{ "ModuleRelativePath", "Public/Elements/PCGStaticMeshSpawner.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGStaticMeshSpawnerSettings_Statics::NewProp_MeshSelectorType_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Defines the method of mesh selection per input data */" },
		{ "ModuleRelativePath", "Public/Elements/PCGStaticMeshSpawner.h" },
		{ "ToolTip", "Defines the method of mesh selection per input data" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UPCGStaticMeshSpawnerSettings_Statics::NewProp_MeshSelectorType = { "MeshSelectorType", nullptr, (EPropertyFlags)0x0014000002000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGStaticMeshSpawnerSettings, MeshSelectorType), Z_Construct_UClass_UClass, Z_Construct_UClass_UPCGMeshSelectorBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGStaticMeshSpawnerSettings_Statics::NewProp_MeshSelectorType_MetaData), Z_Construct_UClass_UPCGStaticMeshSpawnerSettings_Statics::NewProp_MeshSelectorType_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGStaticMeshSpawnerSettings_Statics::NewProp_MeshSelectorParameters_MetaData[] = {
		{ "Category", "Settings" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Elements/PCGStaticMeshSpawner.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UPCGStaticMeshSpawnerSettings_Statics::NewProp_MeshSelectorParameters = { "MeshSelectorParameters", nullptr, (EPropertyFlags)0x00160000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGStaticMeshSpawnerSettings, MeshSelectorParameters), Z_Construct_UClass_UPCGMeshSelectorBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGStaticMeshSpawnerSettings_Statics::NewProp_MeshSelectorParameters_MetaData), Z_Construct_UClass_UPCGStaticMeshSpawnerSettings_Statics::NewProp_MeshSelectorParameters_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGStaticMeshSpawnerSettings_Statics::NewProp_InstanceDataPackerType_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Defines the method of custom data packing for spawned (H)ISMCs */" },
		{ "ModuleRelativePath", "Public/Elements/PCGStaticMeshSpawner.h" },
		{ "ToolTip", "Defines the method of custom data packing for spawned (H)ISMCs" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UPCGStaticMeshSpawnerSettings_Statics::NewProp_InstanceDataPackerType = { "InstanceDataPackerType", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGStaticMeshSpawnerSettings, InstanceDataPackerType), Z_Construct_UClass_UClass, Z_Construct_UClass_UPCGInstanceDataPackerBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGStaticMeshSpawnerSettings_Statics::NewProp_InstanceDataPackerType_MetaData), Z_Construct_UClass_UPCGStaticMeshSpawnerSettings_Statics::NewProp_InstanceDataPackerType_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGStaticMeshSpawnerSettings_Statics::NewProp_InstanceDataPackerParameters_MetaData[] = {
		{ "Category", "Settings" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Elements/PCGStaticMeshSpawner.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UPCGStaticMeshSpawnerSettings_Statics::NewProp_InstanceDataPackerParameters = { "InstanceDataPackerParameters", nullptr, (EPropertyFlags)0x00160000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGStaticMeshSpawnerSettings, InstanceDataPackerParameters), Z_Construct_UClass_UPCGInstanceDataPackerBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGStaticMeshSpawnerSettings_Statics::NewProp_InstanceDataPackerParameters_MetaData), Z_Construct_UClass_UPCGStaticMeshSpawnerSettings_Statics::NewProp_InstanceDataPackerParameters_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGStaticMeshSpawnerSettings_Statics::NewProp_OutAttributeName_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Attribute name to store mesh SoftObjectPaths inside if the output pin is connected. Note: Will overwrite existing data if the attribute name already exists. */" },
		{ "ModuleRelativePath", "Public/Elements/PCGStaticMeshSpawner.h" },
		{ "ToolTip", "Attribute name to store mesh SoftObjectPaths inside if the output pin is connected. Note: Will overwrite existing data if the attribute name already exists." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGStaticMeshSpawnerSettings_Statics::NewProp_OutAttributeName = { "OutAttributeName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGStaticMeshSpawnerSettings, OutAttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGStaticMeshSpawnerSettings_Statics::NewProp_OutAttributeName_MetaData), Z_Construct_UClass_UPCGStaticMeshSpawnerSettings_Statics::NewProp_OutAttributeName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGStaticMeshSpawnerSettings_Statics::NewProp_bApplyMeshBoundsToPoints_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Sets the BoundsMin and BoundsMax attributes of each point to reflect the StaticMesh spawned at its location */" },
		{ "ModuleRelativePath", "Public/Elements/PCGStaticMeshSpawner.h" },
		{ "ToolTip", "Sets the BoundsMin and BoundsMax attributes of each point to reflect the StaticMesh spawned at its location" },
	};
#endif
	void Z_Construct_UClass_UPCGStaticMeshSpawnerSettings_Statics::NewProp_bApplyMeshBoundsToPoints_SetBit(void* Obj)
	{
		((UPCGStaticMeshSpawnerSettings*)Obj)->bApplyMeshBoundsToPoints = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGStaticMeshSpawnerSettings_Statics::NewProp_bApplyMeshBoundsToPoints = { "bApplyMeshBoundsToPoints", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGStaticMeshSpawnerSettings), &Z_Construct_UClass_UPCGStaticMeshSpawnerSettings_Statics::NewProp_bApplyMeshBoundsToPoints_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGStaticMeshSpawnerSettings_Statics::NewProp_bApplyMeshBoundsToPoints_MetaData), Z_Construct_UClass_UPCGStaticMeshSpawnerSettings_Statics::NewProp_bApplyMeshBoundsToPoints_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGStaticMeshSpawnerSettings_Statics::NewProp_TargetActor_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Elements/PCGStaticMeshSpawner.h" },
		{ "PCG_Overridable", "" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UPCGStaticMeshSpawnerSettings_Statics::NewProp_TargetActor = { "TargetActor", nullptr, (EPropertyFlags)0x0014000000000004, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGStaticMeshSpawnerSettings, TargetActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGStaticMeshSpawnerSettings_Statics::NewProp_TargetActor_MetaData), Z_Construct_UClass_UPCGStaticMeshSpawnerSettings_Statics::NewProp_TargetActor_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGStaticMeshSpawnerSettings_Statics::NewProp_Meshes_Inner = { "Meshes", nullptr, (EPropertyFlags)0x0000000020000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FPCGStaticMeshSpawnerEntry, METADATA_PARAMS(0, nullptr) }; // 3696999533
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGStaticMeshSpawnerSettings_Statics::NewProp_Meshes_MetaData[] = {
		{ "DeprecatedProperty", "" },
		{ "DeprecationMessage", "Use MeshSelectorType and MeshSelectorParameters instead." },
		{ "ModuleRelativePath", "Public/Elements/PCGStaticMeshSpawner.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPCGStaticMeshSpawnerSettings_Statics::NewProp_Meshes = { "Meshes", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGStaticMeshSpawnerSettings, Meshes_DEPRECATED), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGStaticMeshSpawnerSettings_Statics::NewProp_Meshes_MetaData), Z_Construct_UClass_UPCGStaticMeshSpawnerSettings_Statics::NewProp_Meshes_MetaData) }; // 3696999533
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGStaticMeshSpawnerSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGStaticMeshSpawnerSettings_Statics::NewProp_MeshSelectorType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGStaticMeshSpawnerSettings_Statics::NewProp_MeshSelectorParameters,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGStaticMeshSpawnerSettings_Statics::NewProp_InstanceDataPackerType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGStaticMeshSpawnerSettings_Statics::NewProp_InstanceDataPackerParameters,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGStaticMeshSpawnerSettings_Statics::NewProp_OutAttributeName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGStaticMeshSpawnerSettings_Statics::NewProp_bApplyMeshBoundsToPoints,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGStaticMeshSpawnerSettings_Statics::NewProp_TargetActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGStaticMeshSpawnerSettings_Statics::NewProp_Meshes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGStaticMeshSpawnerSettings_Statics::NewProp_Meshes,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPCGStaticMeshSpawnerSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGStaticMeshSpawnerSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGStaticMeshSpawnerSettings_Statics::ClassParams = {
		&UPCGStaticMeshSpawnerSettings::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPCGStaticMeshSpawnerSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPCGStaticMeshSpawnerSettings_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGStaticMeshSpawnerSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGStaticMeshSpawnerSettings_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGStaticMeshSpawnerSettings_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UPCGStaticMeshSpawnerSettings()
	{
		if (!Z_Registration_Info_UClass_UPCGStaticMeshSpawnerSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGStaticMeshSpawnerSettings.OuterSingleton, Z_Construct_UClass_UPCGStaticMeshSpawnerSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPCGStaticMeshSpawnerSettings.OuterSingleton;
	}
	template<> PCG_API UClass* StaticClass<UPCGStaticMeshSpawnerSettings>()
	{
		return UPCGStaticMeshSpawnerSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPCGStaticMeshSpawnerSettings);
	UPCGStaticMeshSpawnerSettings::~UPCGStaticMeshSpawnerSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Elements_PCGStaticMeshSpawner_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Elements_PCGStaticMeshSpawner_h_Statics::ScriptStructInfo[] = {
		{ FPCGStaticMeshSpawnerEntry::StaticStruct, Z_Construct_UScriptStruct_FPCGStaticMeshSpawnerEntry_Statics::NewStructOps, TEXT("PCGStaticMeshSpawnerEntry"), &Z_Registration_Info_UScriptStruct_PCGStaticMeshSpawnerEntry, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPCGStaticMeshSpawnerEntry), 3696999533U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Elements_PCGStaticMeshSpawner_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPCGStaticMeshSpawnerSettings, UPCGStaticMeshSpawnerSettings::StaticClass, TEXT("UPCGStaticMeshSpawnerSettings"), &Z_Registration_Info_UClass_UPCGStaticMeshSpawnerSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGStaticMeshSpawnerSettings), 830436438U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Elements_PCGStaticMeshSpawner_h_876450610(TEXT("/Script/PCG"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Elements_PCGStaticMeshSpawner_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Elements_PCGStaticMeshSpawner_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Elements_PCGStaticMeshSpawner_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Elements_PCGStaticMeshSpawner_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
