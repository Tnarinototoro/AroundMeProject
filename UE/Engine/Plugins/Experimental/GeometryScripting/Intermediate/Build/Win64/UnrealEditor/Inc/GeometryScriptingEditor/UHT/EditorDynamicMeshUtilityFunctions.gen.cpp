// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GeometryScript/EditorDynamicMeshUtilityFunctions.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEditorDynamicMeshUtilityFunctions() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	GEOMETRYFRAMEWORK_API UClass* Z_Construct_UClass_UDynamicMesh_NoRegister();
	GEOMETRYSCRIPTINGEDITOR_API UClass* Z_Construct_UClass_UGeometryScriptLibrary_EditorDynamicMeshFunctions();
	GEOMETRYSCRIPTINGEDITOR_API UClass* Z_Construct_UClass_UGeometryScriptLibrary_EditorDynamicMeshFunctions_NoRegister();
	GEOMETRYSCRIPTINGEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FDynamicMeshChangeContainer();
	UPackage* Z_Construct_UPackage__Script_GeometryScriptingEditor();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DynamicMeshChangeContainer;
class UScriptStruct* FDynamicMeshChangeContainer::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DynamicMeshChangeContainer.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DynamicMeshChangeContainer.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDynamicMeshChangeContainer, (UObject*)Z_Construct_UPackage__Script_GeometryScriptingEditor(), TEXT("DynamicMeshChangeContainer"));
	}
	return Z_Registration_Info_UScriptStruct_DynamicMeshChangeContainer.OuterSingleton;
}
template<> GEOMETRYSCRIPTINGEDITOR_API UScriptStruct* StaticStruct<FDynamicMeshChangeContainer>()
{
	return FDynamicMeshChangeContainer::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDynamicMeshChangeContainer_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDynamicMeshChangeContainer_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * FDynamicMeshChangeContainer is a temporary struct usable in Blueprints to\n * emit \"change\" transactions for a UDynamicMesh. The internals are hidden\n * and this type is only intended to be used with the BeginTrackedMeshChange()\n * and EmitTrackedMeshChange() functions\n */" },
		{ "DisplayName", "Dynamic Mesh ChangeTracker" },
		{ "ModuleRelativePath", "Public/GeometryScript/EditorDynamicMeshUtilityFunctions.h" },
		{ "ToolTip", "FDynamicMeshChangeContainer is a temporary struct usable in Blueprints to\nemit \"change\" transactions for a UDynamicMesh. The internals are hidden\nand this type is only intended to be used with the BeginTrackedMeshChange()\nand EmitTrackedMeshChange() functions" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDynamicMeshChangeContainer_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDynamicMeshChangeContainer>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDynamicMeshChangeContainer_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryScriptingEditor,
		nullptr,
		&NewStructOps,
		"DynamicMeshChangeContainer",
		nullptr,
		0,
		sizeof(FDynamicMeshChangeContainer),
		alignof(FDynamicMeshChangeContainer),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDynamicMeshChangeContainer_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDynamicMeshChangeContainer_Statics::Struct_MetaDataParams)
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDynamicMeshChangeContainer()
	{
		if (!Z_Registration_Info_UScriptStruct_DynamicMeshChangeContainer.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DynamicMeshChangeContainer.InnerSingleton, Z_Construct_UScriptStruct_FDynamicMeshChangeContainer_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DynamicMeshChangeContainer.InnerSingleton;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_EditorDynamicMeshFunctions::execFetchDebugMesh)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_DebugMeshName);
		P_GET_OBJECT(UDynamicMesh,Z_Param_ToTargetMesh);
		P_GET_UBOOL(Z_Param_bClearDebugMesh);
		P_GET_UBOOL_REF(Z_Param_Out_bDebugMeshExists);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDynamicMesh**)Z_Param__Result=UGeometryScriptLibrary_EditorDynamicMeshFunctions::FetchDebugMesh(Z_Param_DebugMeshName,Z_Param_ToTargetMesh,Z_Param_bClearDebugMesh,Z_Param_Out_bDebugMeshExists);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_EditorDynamicMeshFunctions::execStashDebugMesh)
	{
		P_GET_OBJECT(UDynamicMesh,Z_Param_TargetMesh);
		P_GET_PROPERTY(FStrProperty,Z_Param_DebugMeshName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDynamicMesh**)Z_Param__Result=UGeometryScriptLibrary_EditorDynamicMeshFunctions::StashDebugMesh(Z_Param_TargetMesh,Z_Param_DebugMeshName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_EditorDynamicMeshFunctions::execEmitTrackedMeshChange)
	{
		P_GET_OBJECT(UDynamicMesh,Z_Param_TargetMesh);
		P_GET_STRUCT_REF(FDynamicMeshChangeContainer,Z_Param_Out_ChangeTracker);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDynamicMesh**)Z_Param__Result=UGeometryScriptLibrary_EditorDynamicMeshFunctions::EmitTrackedMeshChange(Z_Param_TargetMesh,Z_Param_Out_ChangeTracker);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_EditorDynamicMeshFunctions::execBeginTrackedMeshChange)
	{
		P_GET_OBJECT(UDynamicMesh,Z_Param_TargetMesh);
		P_GET_STRUCT_REF(FDynamicMeshChangeContainer,Z_Param_Out_ChangeTracker);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDynamicMesh**)Z_Param__Result=UGeometryScriptLibrary_EditorDynamicMeshFunctions::BeginTrackedMeshChange(Z_Param_TargetMesh,Z_Param_Out_ChangeTracker);
		P_NATIVE_END;
	}
	void UGeometryScriptLibrary_EditorDynamicMeshFunctions::StaticRegisterNativesUGeometryScriptLibrary_EditorDynamicMeshFunctions()
	{
		UClass* Class = UGeometryScriptLibrary_EditorDynamicMeshFunctions::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BeginTrackedMeshChange", &UGeometryScriptLibrary_EditorDynamicMeshFunctions::execBeginTrackedMeshChange },
			{ "EmitTrackedMeshChange", &UGeometryScriptLibrary_EditorDynamicMeshFunctions::execEmitTrackedMeshChange },
			{ "FetchDebugMesh", &UGeometryScriptLibrary_EditorDynamicMeshFunctions::execFetchDebugMesh },
			{ "StashDebugMesh", &UGeometryScriptLibrary_EditorDynamicMeshFunctions::execStashDebugMesh },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_EditorDynamicMeshFunctions_BeginTrackedMeshChange_Statics
	{
		struct GeometryScriptLibrary_EditorDynamicMeshFunctions_eventBeginTrackedMeshChange_Parms
		{
			UDynamicMesh* TargetMesh;
			FDynamicMeshChangeContainer ChangeTracker;
			UDynamicMesh* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetMesh;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ChangeTracker;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_EditorDynamicMeshFunctions_BeginTrackedMeshChange_Statics::NewProp_TargetMesh = { "TargetMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_EditorDynamicMeshFunctions_eventBeginTrackedMeshChange_Parms, TargetMesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_EditorDynamicMeshFunctions_BeginTrackedMeshChange_Statics::NewProp_ChangeTracker = { "ChangeTracker", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_EditorDynamicMeshFunctions_eventBeginTrackedMeshChange_Parms, ChangeTracker), Z_Construct_UScriptStruct_FDynamicMeshChangeContainer, METADATA_PARAMS(0, nullptr) }; // 971410897
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_EditorDynamicMeshFunctions_BeginTrackedMeshChange_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Dynamic Mesh" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_EditorDynamicMeshFunctions_BeginTrackedMeshChange_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_EditorDynamicMeshFunctions_eventBeginTrackedMeshChange_Parms, ReturnValue), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_EditorDynamicMeshFunctions_BeginTrackedMeshChange_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_UGeometryScriptLibrary_EditorDynamicMeshFunctions_BeginTrackedMeshChange_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_EditorDynamicMeshFunctions_BeginTrackedMeshChange_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_EditorDynamicMeshFunctions_BeginTrackedMeshChange_Statics::NewProp_TargetMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_EditorDynamicMeshFunctions_BeginTrackedMeshChange_Statics::NewProp_ChangeTracker,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_EditorDynamicMeshFunctions_BeginTrackedMeshChange_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_EditorDynamicMeshFunctions_BeginTrackedMeshChange_Statics::Function_MetaDataParams[] = {
		{ "Category", "DynamicMesh|Changes" },
		{ "Comment", "/**\n\x09 * Save current state of TargetMesh so that an undoable/redoable Change can be emitted \n\x09 * after TargetMesh is modified, using EmitTrackedMeshChange().\n\x09 * @param ChangeTracker output structure containing initial TargetMesh state\n\x09 */" },
		{ "ModuleRelativePath", "Public/GeometryScript/EditorDynamicMeshUtilityFunctions.h" },
		{ "ToolTip", "Save current state of TargetMesh so that an undoable/redoable Change can be emitted\nafter TargetMesh is modified, using EmitTrackedMeshChange().\n@param ChangeTracker output structure containing initial TargetMesh state" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_EditorDynamicMeshFunctions_BeginTrackedMeshChange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_EditorDynamicMeshFunctions, nullptr, "BeginTrackedMeshChange", nullptr, nullptr, Z_Construct_UFunction_UGeometryScriptLibrary_EditorDynamicMeshFunctions_BeginTrackedMeshChange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_EditorDynamicMeshFunctions_BeginTrackedMeshChange_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_EditorDynamicMeshFunctions_BeginTrackedMeshChange_Statics::GeometryScriptLibrary_EditorDynamicMeshFunctions_eventBeginTrackedMeshChange_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_EditorDynamicMeshFunctions_BeginTrackedMeshChange_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGeometryScriptLibrary_EditorDynamicMeshFunctions_BeginTrackedMeshChange_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_EditorDynamicMeshFunctions_BeginTrackedMeshChange_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_EditorDynamicMeshFunctions_BeginTrackedMeshChange_Statics::GeometryScriptLibrary_EditorDynamicMeshFunctions_eventBeginTrackedMeshChange_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_EditorDynamicMeshFunctions_BeginTrackedMeshChange()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_EditorDynamicMeshFunctions_BeginTrackedMeshChange_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_EditorDynamicMeshFunctions_EmitTrackedMeshChange_Statics
	{
		struct GeometryScriptLibrary_EditorDynamicMeshFunctions_eventEmitTrackedMeshChange_Parms
		{
			UDynamicMesh* TargetMesh;
			FDynamicMeshChangeContainer ChangeTracker;
			UDynamicMesh* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetMesh;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ChangeTracker;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_EditorDynamicMeshFunctions_EmitTrackedMeshChange_Statics::NewProp_TargetMesh = { "TargetMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_EditorDynamicMeshFunctions_eventEmitTrackedMeshChange_Parms, TargetMesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_EditorDynamicMeshFunctions_EmitTrackedMeshChange_Statics::NewProp_ChangeTracker = { "ChangeTracker", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_EditorDynamicMeshFunctions_eventEmitTrackedMeshChange_Parms, ChangeTracker), Z_Construct_UScriptStruct_FDynamicMeshChangeContainer, METADATA_PARAMS(0, nullptr) }; // 971410897
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_EditorDynamicMeshFunctions_EmitTrackedMeshChange_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Dynamic Mesh" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_EditorDynamicMeshFunctions_EmitTrackedMeshChange_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_EditorDynamicMeshFunctions_eventEmitTrackedMeshChange_Parms, ReturnValue), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_EditorDynamicMeshFunctions_EmitTrackedMeshChange_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_UGeometryScriptLibrary_EditorDynamicMeshFunctions_EmitTrackedMeshChange_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_EditorDynamicMeshFunctions_EmitTrackedMeshChange_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_EditorDynamicMeshFunctions_EmitTrackedMeshChange_Statics::NewProp_TargetMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_EditorDynamicMeshFunctions_EmitTrackedMeshChange_Statics::NewProp_ChangeTracker,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_EditorDynamicMeshFunctions_EmitTrackedMeshChange_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_EditorDynamicMeshFunctions_EmitTrackedMeshChange_Statics::Function_MetaDataParams[] = {
		{ "Category", "DynamicMesh|Changes" },
		{ "Comment", "/**\n\x09 * Emit an undo/redo Change for a modified TargetMesh, based on the ChangeTracker information that was \n\x09 * saved (via call to BeginTrackedMeshChange) before TargetMesh was modified. This function must be\n\x09 * called in the context of a Transaction (ie BeginTransaction / EndTransaction pair)\n\x09 */" },
		{ "ModuleRelativePath", "Public/GeometryScript/EditorDynamicMeshUtilityFunctions.h" },
		{ "ToolTip", "Emit an undo/redo Change for a modified TargetMesh, based on the ChangeTracker information that was\nsaved (via call to BeginTrackedMeshChange) before TargetMesh was modified. This function must be\ncalled in the context of a Transaction (ie BeginTransaction / EndTransaction pair)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_EditorDynamicMeshFunctions_EmitTrackedMeshChange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_EditorDynamicMeshFunctions, nullptr, "EmitTrackedMeshChange", nullptr, nullptr, Z_Construct_UFunction_UGeometryScriptLibrary_EditorDynamicMeshFunctions_EmitTrackedMeshChange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_EditorDynamicMeshFunctions_EmitTrackedMeshChange_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_EditorDynamicMeshFunctions_EmitTrackedMeshChange_Statics::GeometryScriptLibrary_EditorDynamicMeshFunctions_eventEmitTrackedMeshChange_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_EditorDynamicMeshFunctions_EmitTrackedMeshChange_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGeometryScriptLibrary_EditorDynamicMeshFunctions_EmitTrackedMeshChange_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_EditorDynamicMeshFunctions_EmitTrackedMeshChange_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_EditorDynamicMeshFunctions_EmitTrackedMeshChange_Statics::GeometryScriptLibrary_EditorDynamicMeshFunctions_eventEmitTrackedMeshChange_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_EditorDynamicMeshFunctions_EmitTrackedMeshChange()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_EditorDynamicMeshFunctions_EmitTrackedMeshChange_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_EditorDynamicMeshFunctions_FetchDebugMesh_Statics
	{
		struct GeometryScriptLibrary_EditorDynamicMeshFunctions_eventFetchDebugMesh_Parms
		{
			FString DebugMeshName;
			UDynamicMesh* ToTargetMesh;
			bool bClearDebugMesh;
			bool bDebugMeshExists;
			UDynamicMesh* ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_DebugMeshName;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ToTargetMesh;
		static void NewProp_bClearDebugMesh_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bClearDebugMesh;
		static void NewProp_bDebugMeshExists_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDebugMeshExists;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_EditorDynamicMeshFunctions_FetchDebugMesh_Statics::NewProp_DebugMeshName = { "DebugMeshName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_EditorDynamicMeshFunctions_eventFetchDebugMesh_Parms, DebugMeshName), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_EditorDynamicMeshFunctions_FetchDebugMesh_Statics::NewProp_ToTargetMesh = { "ToTargetMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_EditorDynamicMeshFunctions_eventFetchDebugMesh_Parms, ToTargetMesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UGeometryScriptLibrary_EditorDynamicMeshFunctions_FetchDebugMesh_Statics::NewProp_bClearDebugMesh_SetBit(void* Obj)
	{
		((GeometryScriptLibrary_EditorDynamicMeshFunctions_eventFetchDebugMesh_Parms*)Obj)->bClearDebugMesh = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_EditorDynamicMeshFunctions_FetchDebugMesh_Statics::NewProp_bClearDebugMesh = { "bClearDebugMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GeometryScriptLibrary_EditorDynamicMeshFunctions_eventFetchDebugMesh_Parms), &Z_Construct_UFunction_UGeometryScriptLibrary_EditorDynamicMeshFunctions_FetchDebugMesh_Statics::NewProp_bClearDebugMesh_SetBit, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UGeometryScriptLibrary_EditorDynamicMeshFunctions_FetchDebugMesh_Statics::NewProp_bDebugMeshExists_SetBit(void* Obj)
	{
		((GeometryScriptLibrary_EditorDynamicMeshFunctions_eventFetchDebugMesh_Parms*)Obj)->bDebugMeshExists = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_EditorDynamicMeshFunctions_FetchDebugMesh_Statics::NewProp_bDebugMeshExists = { "bDebugMeshExists", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GeometryScriptLibrary_EditorDynamicMeshFunctions_eventFetchDebugMesh_Parms), &Z_Construct_UFunction_UGeometryScriptLibrary_EditorDynamicMeshFunctions_FetchDebugMesh_Statics::NewProp_bDebugMeshExists_SetBit, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_EditorDynamicMeshFunctions_FetchDebugMesh_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Dynamic Mesh" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_EditorDynamicMeshFunctions_FetchDebugMesh_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_EditorDynamicMeshFunctions_eventFetchDebugMesh_Parms, ReturnValue), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_EditorDynamicMeshFunctions_FetchDebugMesh_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_UGeometryScriptLibrary_EditorDynamicMeshFunctions_FetchDebugMesh_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_EditorDynamicMeshFunctions_FetchDebugMesh_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_EditorDynamicMeshFunctions_FetchDebugMesh_Statics::NewProp_DebugMeshName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_EditorDynamicMeshFunctions_FetchDebugMesh_Statics::NewProp_ToTargetMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_EditorDynamicMeshFunctions_FetchDebugMesh_Statics::NewProp_bClearDebugMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_EditorDynamicMeshFunctions_FetchDebugMesh_Statics::NewProp_bDebugMeshExists,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_EditorDynamicMeshFunctions_FetchDebugMesh_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_EditorDynamicMeshFunctions_FetchDebugMesh_Statics::Function_MetaDataParams[] = {
		{ "Category", "DynamicMesh|Changes" },
		{ "Comment", "/**\n\x09 * Fetch a debug FDynamicMesh3 saved with DebugMeshName from the global debug mesh storage and copy to ToTargetMesh.\n\x09 * If DebugMeshName does not exist, a cube will be returned.\n\x09 * @param bClearDebugMesh if true, debug mesh will be removed from global storage\n\x09 * @param bDebugMeshExists will return as true if DebugMeshName existed\n\x09 */" },
		{ "ModuleRelativePath", "Public/GeometryScript/EditorDynamicMeshUtilityFunctions.h" },
		{ "ToolTip", "Fetch a debug FDynamicMesh3 saved with DebugMeshName from the global debug mesh storage and copy to ToTargetMesh.\nIf DebugMeshName does not exist, a cube will be returned.\n@param bClearDebugMesh if true, debug mesh will be removed from global storage\n@param bDebugMeshExists will return as true if DebugMeshName existed" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_EditorDynamicMeshFunctions_FetchDebugMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_EditorDynamicMeshFunctions, nullptr, "FetchDebugMesh", nullptr, nullptr, Z_Construct_UFunction_UGeometryScriptLibrary_EditorDynamicMeshFunctions_FetchDebugMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_EditorDynamicMeshFunctions_FetchDebugMesh_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_EditorDynamicMeshFunctions_FetchDebugMesh_Statics::GeometryScriptLibrary_EditorDynamicMeshFunctions_eventFetchDebugMesh_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_EditorDynamicMeshFunctions_FetchDebugMesh_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGeometryScriptLibrary_EditorDynamicMeshFunctions_FetchDebugMesh_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_EditorDynamicMeshFunctions_FetchDebugMesh_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_EditorDynamicMeshFunctions_FetchDebugMesh_Statics::GeometryScriptLibrary_EditorDynamicMeshFunctions_eventFetchDebugMesh_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_EditorDynamicMeshFunctions_FetchDebugMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_EditorDynamicMeshFunctions_FetchDebugMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_EditorDynamicMeshFunctions_StashDebugMesh_Statics
	{
		struct GeometryScriptLibrary_EditorDynamicMeshFunctions_eventStashDebugMesh_Parms
		{
			UDynamicMesh* TargetMesh;
			FString DebugMeshName;
			UDynamicMesh* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetMesh;
		static const UECodeGen_Private::FStrPropertyParams NewProp_DebugMeshName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_EditorDynamicMeshFunctions_StashDebugMesh_Statics::NewProp_TargetMesh = { "TargetMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_EditorDynamicMeshFunctions_eventStashDebugMesh_Parms, TargetMesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_EditorDynamicMeshFunctions_StashDebugMesh_Statics::NewProp_DebugMeshName = { "DebugMeshName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_EditorDynamicMeshFunctions_eventStashDebugMesh_Parms, DebugMeshName), METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_EditorDynamicMeshFunctions_StashDebugMesh_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Dynamic Mesh" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_EditorDynamicMeshFunctions_StashDebugMesh_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_EditorDynamicMeshFunctions_eventStashDebugMesh_Parms, ReturnValue), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_EditorDynamicMeshFunctions_StashDebugMesh_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_UGeometryScriptLibrary_EditorDynamicMeshFunctions_StashDebugMesh_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_EditorDynamicMeshFunctions_StashDebugMesh_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_EditorDynamicMeshFunctions_StashDebugMesh_Statics::NewProp_TargetMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_EditorDynamicMeshFunctions_StashDebugMesh_Statics::NewProp_DebugMeshName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_EditorDynamicMeshFunctions_StashDebugMesh_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_EditorDynamicMeshFunctions_StashDebugMesh_Statics::Function_MetaDataParams[] = {
		{ "Category", "DynamicMesh|Changes" },
		{ "Comment", "/**\n\x09 * Store a copy of TargetMesh with name DebugMeshName.\n\x09 * The mesh can later be recovered via FetchDebugMesh.\n\x09 * @warning This function stores the mesh in a global data structure, the caller must take care to avoid storing large numbers of debug meshes\n\x09 */" },
		{ "ModuleRelativePath", "Public/GeometryScript/EditorDynamicMeshUtilityFunctions.h" },
		{ "ToolTip", "Store a copy of TargetMesh with name DebugMeshName.\nThe mesh can later be recovered via FetchDebugMesh.\n@warning This function stores the mesh in a global data structure, the caller must take care to avoid storing large numbers of debug meshes" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_EditorDynamicMeshFunctions_StashDebugMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_EditorDynamicMeshFunctions, nullptr, "StashDebugMesh", nullptr, nullptr, Z_Construct_UFunction_UGeometryScriptLibrary_EditorDynamicMeshFunctions_StashDebugMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_EditorDynamicMeshFunctions_StashDebugMesh_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_EditorDynamicMeshFunctions_StashDebugMesh_Statics::GeometryScriptLibrary_EditorDynamicMeshFunctions_eventStashDebugMesh_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_EditorDynamicMeshFunctions_StashDebugMesh_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGeometryScriptLibrary_EditorDynamicMeshFunctions_StashDebugMesh_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_EditorDynamicMeshFunctions_StashDebugMesh_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_EditorDynamicMeshFunctions_StashDebugMesh_Statics::GeometryScriptLibrary_EditorDynamicMeshFunctions_eventStashDebugMesh_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_EditorDynamicMeshFunctions_StashDebugMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_EditorDynamicMeshFunctions_StashDebugMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGeometryScriptLibrary_EditorDynamicMeshFunctions);
	UClass* Z_Construct_UClass_UGeometryScriptLibrary_EditorDynamicMeshFunctions_NoRegister()
	{
		return UGeometryScriptLibrary_EditorDynamicMeshFunctions::StaticClass();
	}
	struct Z_Construct_UClass_UGeometryScriptLibrary_EditorDynamicMeshFunctions_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGeometryScriptLibrary_EditorDynamicMeshFunctions_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryScriptingEditor,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryScriptLibrary_EditorDynamicMeshFunctions_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UGeometryScriptLibrary_EditorDynamicMeshFunctions_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_EditorDynamicMeshFunctions_BeginTrackedMeshChange, "BeginTrackedMeshChange" }, // 1708415491
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_EditorDynamicMeshFunctions_EmitTrackedMeshChange, "EmitTrackedMeshChange" }, // 2098174819
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_EditorDynamicMeshFunctions_FetchDebugMesh, "FetchDebugMesh" }, // 2479990924
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_EditorDynamicMeshFunctions_StashDebugMesh, "StashDebugMesh" }, // 1955529913
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryScriptLibrary_EditorDynamicMeshFunctions_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeometryScriptLibrary_EditorDynamicMeshFunctions_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GeometryScript/EditorDynamicMeshUtilityFunctions.h" },
		{ "ModuleRelativePath", "Public/GeometryScript/EditorDynamicMeshUtilityFunctions.h" },
		{ "ScriptName", "GeometryScript_EditorDynamicMeshUtil" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGeometryScriptLibrary_EditorDynamicMeshFunctions_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGeometryScriptLibrary_EditorDynamicMeshFunctions>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGeometryScriptLibrary_EditorDynamicMeshFunctions_Statics::ClassParams = {
		&UGeometryScriptLibrary_EditorDynamicMeshFunctions::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryScriptLibrary_EditorDynamicMeshFunctions_Statics::Class_MetaDataParams), Z_Construct_UClass_UGeometryScriptLibrary_EditorDynamicMeshFunctions_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UGeometryScriptLibrary_EditorDynamicMeshFunctions()
	{
		if (!Z_Registration_Info_UClass_UGeometryScriptLibrary_EditorDynamicMeshFunctions.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGeometryScriptLibrary_EditorDynamicMeshFunctions.OuterSingleton, Z_Construct_UClass_UGeometryScriptLibrary_EditorDynamicMeshFunctions_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGeometryScriptLibrary_EditorDynamicMeshFunctions.OuterSingleton;
	}
	template<> GEOMETRYSCRIPTINGEDITOR_API UClass* StaticClass<UGeometryScriptLibrary_EditorDynamicMeshFunctions>()
	{
		return UGeometryScriptLibrary_EditorDynamicMeshFunctions::StaticClass();
	}
	UGeometryScriptLibrary_EditorDynamicMeshFunctions::UGeometryScriptLibrary_EditorDynamicMeshFunctions(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGeometryScriptLibrary_EditorDynamicMeshFunctions);
	UGeometryScriptLibrary_EditorDynamicMeshFunctions::~UGeometryScriptLibrary_EditorDynamicMeshFunctions() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingEditor_Public_GeometryScript_EditorDynamicMeshUtilityFunctions_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingEditor_Public_GeometryScript_EditorDynamicMeshUtilityFunctions_h_Statics::ScriptStructInfo[] = {
		{ FDynamicMeshChangeContainer::StaticStruct, Z_Construct_UScriptStruct_FDynamicMeshChangeContainer_Statics::NewStructOps, TEXT("DynamicMeshChangeContainer"), &Z_Registration_Info_UScriptStruct_DynamicMeshChangeContainer, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDynamicMeshChangeContainer), 971410897U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingEditor_Public_GeometryScript_EditorDynamicMeshUtilityFunctions_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGeometryScriptLibrary_EditorDynamicMeshFunctions, UGeometryScriptLibrary_EditorDynamicMeshFunctions::StaticClass, TEXT("UGeometryScriptLibrary_EditorDynamicMeshFunctions"), &Z_Registration_Info_UClass_UGeometryScriptLibrary_EditorDynamicMeshFunctions, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGeometryScriptLibrary_EditorDynamicMeshFunctions), 3859274455U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingEditor_Public_GeometryScript_EditorDynamicMeshUtilityFunctions_h_735698910(TEXT("/Script/GeometryScriptingEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingEditor_Public_GeometryScript_EditorDynamicMeshUtilityFunctions_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingEditor_Public_GeometryScript_EditorDynamicMeshUtilityFunctions_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingEditor_Public_GeometryScript_EditorDynamicMeshUtilityFunctions_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingEditor_Public_GeometryScript_EditorDynamicMeshUtilityFunctions_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
