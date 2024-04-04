// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VPUtilitiesEditorBlueprintLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVPUtilitiesEditorBlueprintLibrary() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UTexture_NoRegister();
	OSC_API UClass* Z_Construct_UClass_UOSCServer_NoRegister();
	UPackage* Z_Construct_UPackage__Script_VPUtilitiesEditor();
	VPUTILITIESEDITOR_API UClass* Z_Construct_UClass_AVPEditorTickableActorBase_NoRegister();
	VPUTILITIESEDITOR_API UClass* Z_Construct_UClass_AVPTransientEditorTickableActorBase_NoRegister();
	VPUTILITIESEDITOR_API UClass* Z_Construct_UClass_UVPUtilitiesEditorBlueprintLibrary();
	VPUTILITIESEDITOR_API UClass* Z_Construct_UClass_UVPUtilitiesEditorBlueprintLibrary_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UVPUtilitiesEditorBlueprintLibrary::execGetDefaultOSCServer)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UOSCServer**)Z_Param__Result=UVPUtilitiesEditorBlueprintLibrary::GetDefaultOSCServer();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVPUtilitiesEditorBlueprintLibrary::execImportSnapshotTexture)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_FileName);
		P_GET_PROPERTY(FStrProperty,Z_Param_SubFolderName);
		P_GET_PROPERTY(FStrProperty,Z_Param_AbsolutePathPackage);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTexture**)Z_Param__Result=UVPUtilitiesEditorBlueprintLibrary::ImportSnapshotTexture(Z_Param_FileName,Z_Param_SubFolderName,Z_Param_AbsolutePathPackage);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVPUtilitiesEditorBlueprintLibrary::execSpawnVPTransientEditorTickableActor)
	{
		P_GET_OBJECT(UObject,Z_Param_ContextObject);
		P_GET_OBJECT(UClass,Z_Param_ActorClass);
		P_GET_STRUCT(FVector,Z_Param_Location);
		P_GET_STRUCT(FRotator,Z_Param_Rotation);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AVPTransientEditorTickableActorBase**)Z_Param__Result=UVPUtilitiesEditorBlueprintLibrary::SpawnVPTransientEditorTickableActor(Z_Param_ContextObject,Z_Param_ActorClass,Z_Param_Location,Z_Param_Rotation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVPUtilitiesEditorBlueprintLibrary::execSpawnVPEditorTickableActor)
	{
		P_GET_OBJECT(UObject,Z_Param_ContextObject);
		P_GET_OBJECT(UClass,Z_Param_ActorClass);
		P_GET_STRUCT(FVector,Z_Param_Location);
		P_GET_STRUCT(FRotator,Z_Param_Rotation);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AVPEditorTickableActorBase**)Z_Param__Result=UVPUtilitiesEditorBlueprintLibrary::SpawnVPEditorTickableActor(Z_Param_ContextObject,Z_Param_ActorClass,Z_Param_Location,Z_Param_Rotation);
		P_NATIVE_END;
	}
	void UVPUtilitiesEditorBlueprintLibrary::StaticRegisterNativesUVPUtilitiesEditorBlueprintLibrary()
	{
		UClass* Class = UVPUtilitiesEditorBlueprintLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetDefaultOSCServer", &UVPUtilitiesEditorBlueprintLibrary::execGetDefaultOSCServer },
			{ "ImportSnapshotTexture", &UVPUtilitiesEditorBlueprintLibrary::execImportSnapshotTexture },
			{ "SpawnVPEditorTickableActor", &UVPUtilitiesEditorBlueprintLibrary::execSpawnVPEditorTickableActor },
			{ "SpawnVPTransientEditorTickableActor", &UVPUtilitiesEditorBlueprintLibrary::execSpawnVPTransientEditorTickableActor },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UVPUtilitiesEditorBlueprintLibrary_GetDefaultOSCServer_Statics
	{
		struct VPUtilitiesEditorBlueprintLibrary_eventGetDefaultOSCServer_Parms
		{
			UOSCServer* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVPUtilitiesEditorBlueprintLibrary_GetDefaultOSCServer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VPUtilitiesEditorBlueprintLibrary_eventGetDefaultOSCServer_Parms, ReturnValue), Z_Construct_UClass_UOSCServer_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVPUtilitiesEditorBlueprintLibrary_GetDefaultOSCServer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVPUtilitiesEditorBlueprintLibrary_GetDefaultOSCServer_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVPUtilitiesEditorBlueprintLibrary_GetDefaultOSCServer_Statics::Function_MetaDataParams[] = {
		{ "Category", "Virtual Production" },
		{ "Comment", "/** Get the default OSC server. */" },
		{ "ModuleRelativePath", "Public/VPUtilitiesEditorBlueprintLibrary.h" },
		{ "ToolTip", "Get the default OSC server." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVPUtilitiesEditorBlueprintLibrary_GetDefaultOSCServer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVPUtilitiesEditorBlueprintLibrary, nullptr, "GetDefaultOSCServer", nullptr, nullptr, Z_Construct_UFunction_UVPUtilitiesEditorBlueprintLibrary_GetDefaultOSCServer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVPUtilitiesEditorBlueprintLibrary_GetDefaultOSCServer_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVPUtilitiesEditorBlueprintLibrary_GetDefaultOSCServer_Statics::VPUtilitiesEditorBlueprintLibrary_eventGetDefaultOSCServer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVPUtilitiesEditorBlueprintLibrary_GetDefaultOSCServer_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVPUtilitiesEditorBlueprintLibrary_GetDefaultOSCServer_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVPUtilitiesEditorBlueprintLibrary_GetDefaultOSCServer_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UVPUtilitiesEditorBlueprintLibrary_GetDefaultOSCServer_Statics::VPUtilitiesEditorBlueprintLibrary_eventGetDefaultOSCServer_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UVPUtilitiesEditorBlueprintLibrary_GetDefaultOSCServer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVPUtilitiesEditorBlueprintLibrary_GetDefaultOSCServer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVPUtilitiesEditorBlueprintLibrary_ImportSnapshotTexture_Statics
	{
		struct VPUtilitiesEditorBlueprintLibrary_eventImportSnapshotTexture_Parms
		{
			FString FileName;
			FString SubFolderName;
			FString AbsolutePathPackage;
			UTexture* ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_FileName;
		static const UECodeGen_Private::FStrPropertyParams NewProp_SubFolderName;
		static const UECodeGen_Private::FStrPropertyParams NewProp_AbsolutePathPackage;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVPUtilitiesEditorBlueprintLibrary_ImportSnapshotTexture_Statics::NewProp_FileName = { "FileName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VPUtilitiesEditorBlueprintLibrary_eventImportSnapshotTexture_Parms, FileName), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVPUtilitiesEditorBlueprintLibrary_ImportSnapshotTexture_Statics::NewProp_SubFolderName = { "SubFolderName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VPUtilitiesEditorBlueprintLibrary_eventImportSnapshotTexture_Parms, SubFolderName), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVPUtilitiesEditorBlueprintLibrary_ImportSnapshotTexture_Statics::NewProp_AbsolutePathPackage = { "AbsolutePathPackage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VPUtilitiesEditorBlueprintLibrary_eventImportSnapshotTexture_Parms, AbsolutePathPackage), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVPUtilitiesEditorBlueprintLibrary_ImportSnapshotTexture_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VPUtilitiesEditorBlueprintLibrary_eventImportSnapshotTexture_Parms, ReturnValue), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVPUtilitiesEditorBlueprintLibrary_ImportSnapshotTexture_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVPUtilitiesEditorBlueprintLibrary_ImportSnapshotTexture_Statics::NewProp_FileName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVPUtilitiesEditorBlueprintLibrary_ImportSnapshotTexture_Statics::NewProp_SubFolderName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVPUtilitiesEditorBlueprintLibrary_ImportSnapshotTexture_Statics::NewProp_AbsolutePathPackage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVPUtilitiesEditorBlueprintLibrary_ImportSnapshotTexture_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVPUtilitiesEditorBlueprintLibrary_ImportSnapshotTexture_Statics::Function_MetaDataParams[] = {
		{ "Category", "Virtual Production" },
		{ "Comment", "/** Imports Image file into VirtualProduction/Snapshots/ folder */" },
		{ "ModuleRelativePath", "Public/VPUtilitiesEditorBlueprintLibrary.h" },
		{ "ToolTip", "Imports Image file into VirtualProduction/Snapshots/ folder" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVPUtilitiesEditorBlueprintLibrary_ImportSnapshotTexture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVPUtilitiesEditorBlueprintLibrary, nullptr, "ImportSnapshotTexture", nullptr, nullptr, Z_Construct_UFunction_UVPUtilitiesEditorBlueprintLibrary_ImportSnapshotTexture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVPUtilitiesEditorBlueprintLibrary_ImportSnapshotTexture_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVPUtilitiesEditorBlueprintLibrary_ImportSnapshotTexture_Statics::VPUtilitiesEditorBlueprintLibrary_eventImportSnapshotTexture_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVPUtilitiesEditorBlueprintLibrary_ImportSnapshotTexture_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVPUtilitiesEditorBlueprintLibrary_ImportSnapshotTexture_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVPUtilitiesEditorBlueprintLibrary_ImportSnapshotTexture_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UVPUtilitiesEditorBlueprintLibrary_ImportSnapshotTexture_Statics::VPUtilitiesEditorBlueprintLibrary_eventImportSnapshotTexture_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UVPUtilitiesEditorBlueprintLibrary_ImportSnapshotTexture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVPUtilitiesEditorBlueprintLibrary_ImportSnapshotTexture_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVPUtilitiesEditorBlueprintLibrary_SpawnVPEditorTickableActor_Statics
	{
		struct VPUtilitiesEditorBlueprintLibrary_eventSpawnVPEditorTickableActor_Parms
		{
			UObject* ContextObject;
			const TSubclassOf<AVPEditorTickableActorBase>  ActorClass;
			FVector Location;
			FRotator Rotation;
			AVPEditorTickableActorBase* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ContextObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActorClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_ActorClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Rotation;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVPUtilitiesEditorBlueprintLibrary_SpawnVPEditorTickableActor_Statics::NewProp_ContextObject = { "ContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VPUtilitiesEditorBlueprintLibrary_eventSpawnVPEditorTickableActor_Parms, ContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVPUtilitiesEditorBlueprintLibrary_SpawnVPEditorTickableActor_Statics::NewProp_ActorClass_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UVPUtilitiesEditorBlueprintLibrary_SpawnVPEditorTickableActor_Statics::NewProp_ActorClass = { "ActorClass", nullptr, (EPropertyFlags)0x0014000000000082, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VPUtilitiesEditorBlueprintLibrary_eventSpawnVPEditorTickableActor_Parms, ActorClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AVPEditorTickableActorBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVPUtilitiesEditorBlueprintLibrary_SpawnVPEditorTickableActor_Statics::NewProp_ActorClass_MetaData), Z_Construct_UFunction_UVPUtilitiesEditorBlueprintLibrary_SpawnVPEditorTickableActor_Statics::NewProp_ActorClass_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVPUtilitiesEditorBlueprintLibrary_SpawnVPEditorTickableActor_Statics::NewProp_Location_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVPUtilitiesEditorBlueprintLibrary_SpawnVPEditorTickableActor_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VPUtilitiesEditorBlueprintLibrary_eventSpawnVPEditorTickableActor_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVPUtilitiesEditorBlueprintLibrary_SpawnVPEditorTickableActor_Statics::NewProp_Location_MetaData), Z_Construct_UFunction_UVPUtilitiesEditorBlueprintLibrary_SpawnVPEditorTickableActor_Statics::NewProp_Location_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVPUtilitiesEditorBlueprintLibrary_SpawnVPEditorTickableActor_Statics::NewProp_Rotation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVPUtilitiesEditorBlueprintLibrary_SpawnVPEditorTickableActor_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VPUtilitiesEditorBlueprintLibrary_eventSpawnVPEditorTickableActor_Parms, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVPUtilitiesEditorBlueprintLibrary_SpawnVPEditorTickableActor_Statics::NewProp_Rotation_MetaData), Z_Construct_UFunction_UVPUtilitiesEditorBlueprintLibrary_SpawnVPEditorTickableActor_Statics::NewProp_Rotation_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVPUtilitiesEditorBlueprintLibrary_SpawnVPEditorTickableActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VPUtilitiesEditorBlueprintLibrary_eventSpawnVPEditorTickableActor_Parms, ReturnValue), Z_Construct_UClass_AVPEditorTickableActorBase_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVPUtilitiesEditorBlueprintLibrary_SpawnVPEditorTickableActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVPUtilitiesEditorBlueprintLibrary_SpawnVPEditorTickableActor_Statics::NewProp_ContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVPUtilitiesEditorBlueprintLibrary_SpawnVPEditorTickableActor_Statics::NewProp_ActorClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVPUtilitiesEditorBlueprintLibrary_SpawnVPEditorTickableActor_Statics::NewProp_Location,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVPUtilitiesEditorBlueprintLibrary_SpawnVPEditorTickableActor_Statics::NewProp_Rotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVPUtilitiesEditorBlueprintLibrary_SpawnVPEditorTickableActor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVPUtilitiesEditorBlueprintLibrary_SpawnVPEditorTickableActor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Virtual Production" },
		{ "Comment", "/**\n\x09 * Spawn an editor-only virtual production tickable actor \n\x09 * @note Actors based on the non-transient AVPEditorTickableActorBase will be saved in the level. \n\x09 * @note Being non-transient also means that transactions happening on them will be replicated on other connected multi-user machines\n\x09 */" },
		{ "ModuleRelativePath", "Public/VPUtilitiesEditorBlueprintLibrary.h" },
		{ "ToolTip", "Spawn an editor-only virtual production tickable actor\n@note Actors based on the non-transient AVPEditorTickableActorBase will be saved in the level.\n@note Being non-transient also means that transactions happening on them will be replicated on other connected multi-user machines" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVPUtilitiesEditorBlueprintLibrary_SpawnVPEditorTickableActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVPUtilitiesEditorBlueprintLibrary, nullptr, "SpawnVPEditorTickableActor", nullptr, nullptr, Z_Construct_UFunction_UVPUtilitiesEditorBlueprintLibrary_SpawnVPEditorTickableActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVPUtilitiesEditorBlueprintLibrary_SpawnVPEditorTickableActor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVPUtilitiesEditorBlueprintLibrary_SpawnVPEditorTickableActor_Statics::VPUtilitiesEditorBlueprintLibrary_eventSpawnVPEditorTickableActor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVPUtilitiesEditorBlueprintLibrary_SpawnVPEditorTickableActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVPUtilitiesEditorBlueprintLibrary_SpawnVPEditorTickableActor_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVPUtilitiesEditorBlueprintLibrary_SpawnVPEditorTickableActor_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UVPUtilitiesEditorBlueprintLibrary_SpawnVPEditorTickableActor_Statics::VPUtilitiesEditorBlueprintLibrary_eventSpawnVPEditorTickableActor_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UVPUtilitiesEditorBlueprintLibrary_SpawnVPEditorTickableActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVPUtilitiesEditorBlueprintLibrary_SpawnVPEditorTickableActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVPUtilitiesEditorBlueprintLibrary_SpawnVPTransientEditorTickableActor_Statics
	{
		struct VPUtilitiesEditorBlueprintLibrary_eventSpawnVPTransientEditorTickableActor_Parms
		{
			UObject* ContextObject;
			const TSubclassOf<AVPTransientEditorTickableActorBase>  ActorClass;
			FVector Location;
			FRotator Rotation;
			AVPTransientEditorTickableActorBase* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ContextObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActorClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_ActorClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Rotation;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVPUtilitiesEditorBlueprintLibrary_SpawnVPTransientEditorTickableActor_Statics::NewProp_ContextObject = { "ContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VPUtilitiesEditorBlueprintLibrary_eventSpawnVPTransientEditorTickableActor_Parms, ContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVPUtilitiesEditorBlueprintLibrary_SpawnVPTransientEditorTickableActor_Statics::NewProp_ActorClass_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UVPUtilitiesEditorBlueprintLibrary_SpawnVPTransientEditorTickableActor_Statics::NewProp_ActorClass = { "ActorClass", nullptr, (EPropertyFlags)0x0014000000000082, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VPUtilitiesEditorBlueprintLibrary_eventSpawnVPTransientEditorTickableActor_Parms, ActorClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AVPTransientEditorTickableActorBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVPUtilitiesEditorBlueprintLibrary_SpawnVPTransientEditorTickableActor_Statics::NewProp_ActorClass_MetaData), Z_Construct_UFunction_UVPUtilitiesEditorBlueprintLibrary_SpawnVPTransientEditorTickableActor_Statics::NewProp_ActorClass_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVPUtilitiesEditorBlueprintLibrary_SpawnVPTransientEditorTickableActor_Statics::NewProp_Location_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVPUtilitiesEditorBlueprintLibrary_SpawnVPTransientEditorTickableActor_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VPUtilitiesEditorBlueprintLibrary_eventSpawnVPTransientEditorTickableActor_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVPUtilitiesEditorBlueprintLibrary_SpawnVPTransientEditorTickableActor_Statics::NewProp_Location_MetaData), Z_Construct_UFunction_UVPUtilitiesEditorBlueprintLibrary_SpawnVPTransientEditorTickableActor_Statics::NewProp_Location_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVPUtilitiesEditorBlueprintLibrary_SpawnVPTransientEditorTickableActor_Statics::NewProp_Rotation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVPUtilitiesEditorBlueprintLibrary_SpawnVPTransientEditorTickableActor_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VPUtilitiesEditorBlueprintLibrary_eventSpawnVPTransientEditorTickableActor_Parms, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVPUtilitiesEditorBlueprintLibrary_SpawnVPTransientEditorTickableActor_Statics::NewProp_Rotation_MetaData), Z_Construct_UFunction_UVPUtilitiesEditorBlueprintLibrary_SpawnVPTransientEditorTickableActor_Statics::NewProp_Rotation_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVPUtilitiesEditorBlueprintLibrary_SpawnVPTransientEditorTickableActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VPUtilitiesEditorBlueprintLibrary_eventSpawnVPTransientEditorTickableActor_Parms, ReturnValue), Z_Construct_UClass_AVPTransientEditorTickableActorBase_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVPUtilitiesEditorBlueprintLibrary_SpawnVPTransientEditorTickableActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVPUtilitiesEditorBlueprintLibrary_SpawnVPTransientEditorTickableActor_Statics::NewProp_ContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVPUtilitiesEditorBlueprintLibrary_SpawnVPTransientEditorTickableActor_Statics::NewProp_ActorClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVPUtilitiesEditorBlueprintLibrary_SpawnVPTransientEditorTickableActor_Statics::NewProp_Location,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVPUtilitiesEditorBlueprintLibrary_SpawnVPTransientEditorTickableActor_Statics::NewProp_Rotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVPUtilitiesEditorBlueprintLibrary_SpawnVPTransientEditorTickableActor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVPUtilitiesEditorBlueprintLibrary_SpawnVPTransientEditorTickableActor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Virtual Production" },
		{ "Comment", "/**\n\x09 * Spawn an editor-only transient virtual production tickable actor\n\x09 * @note Actors based on the transient AVPTransientEditorTickableActorBase will NOT be saved in the level.\n\x09 * @note Being transient also means that transactions happening on them will NOT be replicated on other connected multi-user machines\n\x09 */" },
		{ "ModuleRelativePath", "Public/VPUtilitiesEditorBlueprintLibrary.h" },
		{ "ToolTip", "Spawn an editor-only transient virtual production tickable actor\n@note Actors based on the transient AVPTransientEditorTickableActorBase will NOT be saved in the level.\n@note Being transient also means that transactions happening on them will NOT be replicated on other connected multi-user machines" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVPUtilitiesEditorBlueprintLibrary_SpawnVPTransientEditorTickableActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVPUtilitiesEditorBlueprintLibrary, nullptr, "SpawnVPTransientEditorTickableActor", nullptr, nullptr, Z_Construct_UFunction_UVPUtilitiesEditorBlueprintLibrary_SpawnVPTransientEditorTickableActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVPUtilitiesEditorBlueprintLibrary_SpawnVPTransientEditorTickableActor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVPUtilitiesEditorBlueprintLibrary_SpawnVPTransientEditorTickableActor_Statics::VPUtilitiesEditorBlueprintLibrary_eventSpawnVPTransientEditorTickableActor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVPUtilitiesEditorBlueprintLibrary_SpawnVPTransientEditorTickableActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVPUtilitiesEditorBlueprintLibrary_SpawnVPTransientEditorTickableActor_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVPUtilitiesEditorBlueprintLibrary_SpawnVPTransientEditorTickableActor_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UVPUtilitiesEditorBlueprintLibrary_SpawnVPTransientEditorTickableActor_Statics::VPUtilitiesEditorBlueprintLibrary_eventSpawnVPTransientEditorTickableActor_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UVPUtilitiesEditorBlueprintLibrary_SpawnVPTransientEditorTickableActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVPUtilitiesEditorBlueprintLibrary_SpawnVPTransientEditorTickableActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVPUtilitiesEditorBlueprintLibrary);
	UClass* Z_Construct_UClass_UVPUtilitiesEditorBlueprintLibrary_NoRegister()
	{
		return UVPUtilitiesEditorBlueprintLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UVPUtilitiesEditorBlueprintLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVPUtilitiesEditorBlueprintLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_VPUtilitiesEditor,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVPUtilitiesEditorBlueprintLibrary_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UVPUtilitiesEditorBlueprintLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UVPUtilitiesEditorBlueprintLibrary_GetDefaultOSCServer, "GetDefaultOSCServer" }, // 927904525
		{ &Z_Construct_UFunction_UVPUtilitiesEditorBlueprintLibrary_ImportSnapshotTexture, "ImportSnapshotTexture" }, // 848432265
		{ &Z_Construct_UFunction_UVPUtilitiesEditorBlueprintLibrary_SpawnVPEditorTickableActor, "SpawnVPEditorTickableActor" }, // 2739692081
		{ &Z_Construct_UFunction_UVPUtilitiesEditorBlueprintLibrary_SpawnVPTransientEditorTickableActor, "SpawnVPTransientEditorTickableActor" }, // 4039651624
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVPUtilitiesEditorBlueprintLibrary_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVPUtilitiesEditorBlueprintLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "VPUtilitiesEditorBlueprintLibrary.h" },
		{ "ModuleRelativePath", "Public/VPUtilitiesEditorBlueprintLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVPUtilitiesEditorBlueprintLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVPUtilitiesEditorBlueprintLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVPUtilitiesEditorBlueprintLibrary_Statics::ClassParams = {
		&UVPUtilitiesEditorBlueprintLibrary::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVPUtilitiesEditorBlueprintLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UVPUtilitiesEditorBlueprintLibrary_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UVPUtilitiesEditorBlueprintLibrary()
	{
		if (!Z_Registration_Info_UClass_UVPUtilitiesEditorBlueprintLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVPUtilitiesEditorBlueprintLibrary.OuterSingleton, Z_Construct_UClass_UVPUtilitiesEditorBlueprintLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVPUtilitiesEditorBlueprintLibrary.OuterSingleton;
	}
	template<> VPUTILITIESEDITOR_API UClass* StaticClass<UVPUtilitiesEditorBlueprintLibrary>()
	{
		return UVPUtilitiesEditorBlueprintLibrary::StaticClass();
	}
	UVPUtilitiesEditorBlueprintLibrary::UVPUtilitiesEditorBlueprintLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVPUtilitiesEditorBlueprintLibrary);
	UVPUtilitiesEditorBlueprintLibrary::~UVPUtilitiesEditorBlueprintLibrary() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilitiesEditor_Public_VPUtilitiesEditorBlueprintLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilitiesEditor_Public_VPUtilitiesEditorBlueprintLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVPUtilitiesEditorBlueprintLibrary, UVPUtilitiesEditorBlueprintLibrary::StaticClass, TEXT("UVPUtilitiesEditorBlueprintLibrary"), &Z_Registration_Info_UClass_UVPUtilitiesEditorBlueprintLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVPUtilitiesEditorBlueprintLibrary), 1217156610U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilitiesEditor_Public_VPUtilitiesEditorBlueprintLibrary_h_4280771772(TEXT("/Script/VPUtilitiesEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilitiesEditor_Public_VPUtilitiesEditorBlueprintLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilitiesEditor_Public_VPUtilitiesEditorBlueprintLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
