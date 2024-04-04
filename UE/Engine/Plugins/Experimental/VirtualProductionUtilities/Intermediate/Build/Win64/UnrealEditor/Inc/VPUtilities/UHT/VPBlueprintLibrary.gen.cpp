// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Libraries/VPBlueprintLibrary.h"
#include "GameplayTagContainer.h"
#include "VPBookmarkContext.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVPBlueprintLibrary() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_USplineMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
	UPackage* Z_Construct_UPackage__Script_VPUtilities();
	VPBOOKMARK_API UClass* Z_Construct_UClass_UVPBookmark_NoRegister();
	VPBOOKMARK_API UScriptStruct* Z_Construct_UScriptStruct_FVPBookmarkCreationContext();
	VPUTILITIES_API UClass* Z_Construct_UClass_AVPViewportTickableActorBase_NoRegister();
	VPUTILITIES_API UClass* Z_Construct_UClass_UVPBlueprintLibrary();
	VPUTILITIES_API UClass* Z_Construct_UClass_UVPBlueprintLibrary_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UVPBlueprintLibrary::execVPBookmarkSplineMeshIndicatorDisable)
	{
		P_GET_OBJECT(USplineMeshComponent,Z_Param_SplineMesh);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVPBlueprintLibrary::VPBookmarkSplineMeshIndicatorDisable(Z_Param_SplineMesh);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVPBlueprintLibrary::execVPBookmarkSplineMeshIndicatorSetStartAndEnd)
	{
		P_GET_OBJECT(USplineMeshComponent,Z_Param_SplineMesh);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVPBlueprintLibrary::VPBookmarkSplineMeshIndicatorSetStartAndEnd(Z_Param_SplineMesh);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVPBlueprintLibrary::execGetEditorWorld)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UWorld**)Z_Param__Result=UVPBlueprintLibrary::GetEditorWorld();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVPBlueprintLibrary::execEditorDeleteSelectedObjects)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UVPBlueprintLibrary::EditorDeleteSelectedObjects();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVPBlueprintLibrary::execEditorDuplicate)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UVPBlueprintLibrary::EditorDuplicate();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVPBlueprintLibrary::execEditorRedo)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UVPBlueprintLibrary::EditorRedo();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVPBlueprintLibrary::execEditorUndo)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UVPBlueprintLibrary::EditorUndo();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVPBlueprintLibrary::execGetLeftInteractorLocation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=UVPBlueprintLibrary::GetLeftInteractorLocation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVPBlueprintLibrary::execGetVREditorLaserHoverLocation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=UVPBlueprintLibrary::GetVREditorLaserHoverLocation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVPBlueprintLibrary::execIsVREditorModeActive)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UVPBlueprintLibrary::IsVREditorModeActive();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVPBlueprintLibrary::execSetGrabSpeed)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Speed);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVPBlueprintLibrary::SetGrabSpeed(Z_Param_Speed);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVPBlueprintLibrary::execGetEditorVRRoomTransform)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTransform*)Z_Param__Result=UVPBlueprintLibrary::GetEditorVRRoomTransform();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVPBlueprintLibrary::execGetEditorVRHeadTransform)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTransform*)Z_Param__Result=UVPBlueprintLibrary::GetEditorVRHeadTransform();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVPBlueprintLibrary::execGetEditorViewportTransform)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTransform*)Z_Param__Result=UVPBlueprintLibrary::GetEditorViewportTransform();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVPBlueprintLibrary::execGetVirtualProductionRole)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FGameplayTagContainer*)Z_Param__Result=UVPBlueprintLibrary::GetVirtualProductionRole();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVPBlueprintLibrary::execJumpToBookmarkInLevelEditor)
	{
		P_GET_OBJECT(UVPBookmark,Z_Param_Bookmark);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UVPBlueprintLibrary::JumpToBookmarkInLevelEditor(Z_Param_Bookmark);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVPBlueprintLibrary::execSpawnBookmarkAtCurrentLevelEditorPosition)
	{
		P_GET_OBJECT(UClass,Z_Param_ActorClass);
		P_GET_STRUCT(FVPBookmarkCreationContext,Z_Param_CreationContext);
		P_GET_STRUCT(FVector,Z_Param_Offset);
		P_GET_UBOOL(Z_Param_bFlattenRotation);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AActor**)Z_Param__Result=UVPBlueprintLibrary::SpawnBookmarkAtCurrentLevelEditorPosition(Z_Param_ActorClass,Z_Param_CreationContext,Z_Param_Offset,Z_Param_bFlattenRotation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVPBlueprintLibrary::execSpawnVPTickableActor)
	{
		P_GET_OBJECT(UObject,Z_Param_ContextObject);
		P_GET_OBJECT(UClass,Z_Param_ActorClass);
		P_GET_STRUCT(FVector,Z_Param_Location);
		P_GET_STRUCT(FRotator,Z_Param_Rotation);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AVPViewportTickableActorBase**)Z_Param__Result=UVPBlueprintLibrary::SpawnVPTickableActor(Z_Param_ContextObject,Z_Param_ActorClass,Z_Param_Location,Z_Param_Rotation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVPBlueprintLibrary::execRefresh3DEditorViewport)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		UVPBlueprintLibrary::Refresh3DEditorViewport();
		P_NATIVE_END;
	}
	void UVPBlueprintLibrary::StaticRegisterNativesUVPBlueprintLibrary()
	{
		UClass* Class = UVPBlueprintLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "EditorDeleteSelectedObjects", &UVPBlueprintLibrary::execEditorDeleteSelectedObjects },
			{ "EditorDuplicate", &UVPBlueprintLibrary::execEditorDuplicate },
			{ "EditorRedo", &UVPBlueprintLibrary::execEditorRedo },
			{ "EditorUndo", &UVPBlueprintLibrary::execEditorUndo },
			{ "GetEditorViewportTransform", &UVPBlueprintLibrary::execGetEditorViewportTransform },
			{ "GetEditorVRHeadTransform", &UVPBlueprintLibrary::execGetEditorVRHeadTransform },
			{ "GetEditorVRRoomTransform", &UVPBlueprintLibrary::execGetEditorVRRoomTransform },
			{ "GetEditorWorld", &UVPBlueprintLibrary::execGetEditorWorld },
			{ "GetLeftInteractorLocation", &UVPBlueprintLibrary::execGetLeftInteractorLocation },
			{ "GetVirtualProductionRole", &UVPBlueprintLibrary::execGetVirtualProductionRole },
			{ "GetVREditorLaserHoverLocation", &UVPBlueprintLibrary::execGetVREditorLaserHoverLocation },
			{ "IsVREditorModeActive", &UVPBlueprintLibrary::execIsVREditorModeActive },
			{ "JumpToBookmarkInLevelEditor", &UVPBlueprintLibrary::execJumpToBookmarkInLevelEditor },
			{ "Refresh3DEditorViewport", &UVPBlueprintLibrary::execRefresh3DEditorViewport },
			{ "SetGrabSpeed", &UVPBlueprintLibrary::execSetGrabSpeed },
			{ "SpawnBookmarkAtCurrentLevelEditorPosition", &UVPBlueprintLibrary::execSpawnBookmarkAtCurrentLevelEditorPosition },
			{ "SpawnVPTickableActor", &UVPBlueprintLibrary::execSpawnVPTickableActor },
			{ "VPBookmarkSplineMeshIndicatorDisable", &UVPBlueprintLibrary::execVPBookmarkSplineMeshIndicatorDisable },
			{ "VPBookmarkSplineMeshIndicatorSetStartAndEnd", &UVPBlueprintLibrary::execVPBookmarkSplineMeshIndicatorSetStartAndEnd },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UVPBlueprintLibrary_EditorDeleteSelectedObjects_Statics
	{
		struct VPBlueprintLibrary_eventEditorDeleteSelectedObjects_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UVPBlueprintLibrary_EditorDeleteSelectedObjects_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VPBlueprintLibrary_eventEditorDeleteSelectedObjects_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVPBlueprintLibrary_EditorDeleteSelectedObjects_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VPBlueprintLibrary_eventEditorDeleteSelectedObjects_Parms), &Z_Construct_UFunction_UVPBlueprintLibrary_EditorDeleteSelectedObjects_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVPBlueprintLibrary_EditorDeleteSelectedObjects_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVPBlueprintLibrary_EditorDeleteSelectedObjects_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVPBlueprintLibrary_EditorDeleteSelectedObjects_Statics::Function_MetaDataParams[] = {
		{ "Category", "Virtual Production" },
		{ "Comment", "/** Trigger an UnrealEd Delete */" },
		{ "ModuleRelativePath", "Public/Libraries/VPBlueprintLibrary.h" },
		{ "ToolTip", "Trigger an UnrealEd Delete" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVPBlueprintLibrary_EditorDeleteSelectedObjects_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVPBlueprintLibrary, nullptr, "EditorDeleteSelectedObjects", nullptr, nullptr, Z_Construct_UFunction_UVPBlueprintLibrary_EditorDeleteSelectedObjects_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVPBlueprintLibrary_EditorDeleteSelectedObjects_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVPBlueprintLibrary_EditorDeleteSelectedObjects_Statics::VPBlueprintLibrary_eventEditorDeleteSelectedObjects_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVPBlueprintLibrary_EditorDeleteSelectedObjects_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVPBlueprintLibrary_EditorDeleteSelectedObjects_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVPBlueprintLibrary_EditorDeleteSelectedObjects_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UVPBlueprintLibrary_EditorDeleteSelectedObjects_Statics::VPBlueprintLibrary_eventEditorDeleteSelectedObjects_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UVPBlueprintLibrary_EditorDeleteSelectedObjects()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVPBlueprintLibrary_EditorDeleteSelectedObjects_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVPBlueprintLibrary_EditorDuplicate_Statics
	{
		struct VPBlueprintLibrary_eventEditorDuplicate_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UVPBlueprintLibrary_EditorDuplicate_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VPBlueprintLibrary_eventEditorDuplicate_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVPBlueprintLibrary_EditorDuplicate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VPBlueprintLibrary_eventEditorDuplicate_Parms), &Z_Construct_UFunction_UVPBlueprintLibrary_EditorDuplicate_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVPBlueprintLibrary_EditorDuplicate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVPBlueprintLibrary_EditorDuplicate_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVPBlueprintLibrary_EditorDuplicate_Statics::Function_MetaDataParams[] = {
		{ "Category", "Virtual Production" },
		{ "Comment", "/** Trigger an UnrealEd Duplicate */" },
		{ "ModuleRelativePath", "Public/Libraries/VPBlueprintLibrary.h" },
		{ "ToolTip", "Trigger an UnrealEd Duplicate" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVPBlueprintLibrary_EditorDuplicate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVPBlueprintLibrary, nullptr, "EditorDuplicate", nullptr, nullptr, Z_Construct_UFunction_UVPBlueprintLibrary_EditorDuplicate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVPBlueprintLibrary_EditorDuplicate_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVPBlueprintLibrary_EditorDuplicate_Statics::VPBlueprintLibrary_eventEditorDuplicate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVPBlueprintLibrary_EditorDuplicate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVPBlueprintLibrary_EditorDuplicate_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVPBlueprintLibrary_EditorDuplicate_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UVPBlueprintLibrary_EditorDuplicate_Statics::VPBlueprintLibrary_eventEditorDuplicate_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UVPBlueprintLibrary_EditorDuplicate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVPBlueprintLibrary_EditorDuplicate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVPBlueprintLibrary_EditorRedo_Statics
	{
		struct VPBlueprintLibrary_eventEditorRedo_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UVPBlueprintLibrary_EditorRedo_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VPBlueprintLibrary_eventEditorRedo_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVPBlueprintLibrary_EditorRedo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VPBlueprintLibrary_eventEditorRedo_Parms), &Z_Construct_UFunction_UVPBlueprintLibrary_EditorRedo_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVPBlueprintLibrary_EditorRedo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVPBlueprintLibrary_EditorRedo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVPBlueprintLibrary_EditorRedo_Statics::Function_MetaDataParams[] = {
		{ "Category", "Virtual Production" },
		{ "Comment", "/** Trigger an UnrealEd Redo */" },
		{ "ModuleRelativePath", "Public/Libraries/VPBlueprintLibrary.h" },
		{ "ToolTip", "Trigger an UnrealEd Redo" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVPBlueprintLibrary_EditorRedo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVPBlueprintLibrary, nullptr, "EditorRedo", nullptr, nullptr, Z_Construct_UFunction_UVPBlueprintLibrary_EditorRedo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVPBlueprintLibrary_EditorRedo_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVPBlueprintLibrary_EditorRedo_Statics::VPBlueprintLibrary_eventEditorRedo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVPBlueprintLibrary_EditorRedo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVPBlueprintLibrary_EditorRedo_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVPBlueprintLibrary_EditorRedo_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UVPBlueprintLibrary_EditorRedo_Statics::VPBlueprintLibrary_eventEditorRedo_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UVPBlueprintLibrary_EditorRedo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVPBlueprintLibrary_EditorRedo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVPBlueprintLibrary_EditorUndo_Statics
	{
		struct VPBlueprintLibrary_eventEditorUndo_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UVPBlueprintLibrary_EditorUndo_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VPBlueprintLibrary_eventEditorUndo_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVPBlueprintLibrary_EditorUndo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VPBlueprintLibrary_eventEditorUndo_Parms), &Z_Construct_UFunction_UVPBlueprintLibrary_EditorUndo_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVPBlueprintLibrary_EditorUndo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVPBlueprintLibrary_EditorUndo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVPBlueprintLibrary_EditorUndo_Statics::Function_MetaDataParams[] = {
		{ "Category", "Virtual Production" },
		{ "Comment", "/** Trigger an UnrealEd Undo */" },
		{ "ModuleRelativePath", "Public/Libraries/VPBlueprintLibrary.h" },
		{ "ToolTip", "Trigger an UnrealEd Undo" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVPBlueprintLibrary_EditorUndo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVPBlueprintLibrary, nullptr, "EditorUndo", nullptr, nullptr, Z_Construct_UFunction_UVPBlueprintLibrary_EditorUndo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVPBlueprintLibrary_EditorUndo_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVPBlueprintLibrary_EditorUndo_Statics::VPBlueprintLibrary_eventEditorUndo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVPBlueprintLibrary_EditorUndo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVPBlueprintLibrary_EditorUndo_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVPBlueprintLibrary_EditorUndo_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UVPBlueprintLibrary_EditorUndo_Statics::VPBlueprintLibrary_eventEditorUndo_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UVPBlueprintLibrary_EditorUndo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVPBlueprintLibrary_EditorUndo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVPBlueprintLibrary_GetEditorViewportTransform_Statics
	{
		struct VPBlueprintLibrary_eventGetEditorViewportTransform_Parms
		{
			FTransform ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVPBlueprintLibrary_GetEditorViewportTransform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VPBlueprintLibrary_eventGetEditorViewportTransform_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVPBlueprintLibrary_GetEditorViewportTransform_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVPBlueprintLibrary_GetEditorViewportTransform_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVPBlueprintLibrary_GetEditorViewportTransform_Statics::Function_MetaDataParams[] = {
		{ "Category", "Virtual Production" },
		{ "Comment", "/** Get the location of the 2D viewport camera */" },
		{ "ModuleRelativePath", "Public/Libraries/VPBlueprintLibrary.h" },
		{ "ToolTip", "Get the location of the 2D viewport camera" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVPBlueprintLibrary_GetEditorViewportTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVPBlueprintLibrary, nullptr, "GetEditorViewportTransform", nullptr, nullptr, Z_Construct_UFunction_UVPBlueprintLibrary_GetEditorViewportTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVPBlueprintLibrary_GetEditorViewportTransform_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVPBlueprintLibrary_GetEditorViewportTransform_Statics::VPBlueprintLibrary_eventGetEditorViewportTransform_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVPBlueprintLibrary_GetEditorViewportTransform_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVPBlueprintLibrary_GetEditorViewportTransform_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVPBlueprintLibrary_GetEditorViewportTransform_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UVPBlueprintLibrary_GetEditorViewportTransform_Statics::VPBlueprintLibrary_eventGetEditorViewportTransform_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UVPBlueprintLibrary_GetEditorViewportTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVPBlueprintLibrary_GetEditorViewportTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVPBlueprintLibrary_GetEditorVRHeadTransform_Statics
	{
		struct VPBlueprintLibrary_eventGetEditorVRHeadTransform_Parms
		{
			FTransform ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVPBlueprintLibrary_GetEditorVRHeadTransform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VPBlueprintLibrary_eventGetEditorVRHeadTransform_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVPBlueprintLibrary_GetEditorVRHeadTransform_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVPBlueprintLibrary_GetEditorVRHeadTransform_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVPBlueprintLibrary_GetEditorVRHeadTransform_Statics::Function_MetaDataParams[] = {
		{ "Category", "Virtual Production" },
		{ "Comment", "/** Get the location of the VR HMD */" },
		{ "ModuleRelativePath", "Public/Libraries/VPBlueprintLibrary.h" },
		{ "ToolTip", "Get the location of the VR HMD" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVPBlueprintLibrary_GetEditorVRHeadTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVPBlueprintLibrary, nullptr, "GetEditorVRHeadTransform", nullptr, nullptr, Z_Construct_UFunction_UVPBlueprintLibrary_GetEditorVRHeadTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVPBlueprintLibrary_GetEditorVRHeadTransform_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVPBlueprintLibrary_GetEditorVRHeadTransform_Statics::VPBlueprintLibrary_eventGetEditorVRHeadTransform_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVPBlueprintLibrary_GetEditorVRHeadTransform_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVPBlueprintLibrary_GetEditorVRHeadTransform_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVPBlueprintLibrary_GetEditorVRHeadTransform_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UVPBlueprintLibrary_GetEditorVRHeadTransform_Statics::VPBlueprintLibrary_eventGetEditorVRHeadTransform_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UVPBlueprintLibrary_GetEditorVRHeadTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVPBlueprintLibrary_GetEditorVRHeadTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVPBlueprintLibrary_GetEditorVRRoomTransform_Statics
	{
		struct VPBlueprintLibrary_eventGetEditorVRRoomTransform_Parms
		{
			FTransform ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVPBlueprintLibrary_GetEditorVRRoomTransform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VPBlueprintLibrary_eventGetEditorVRRoomTransform_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVPBlueprintLibrary_GetEditorVRRoomTransform_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVPBlueprintLibrary_GetEditorVRRoomTransform_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVPBlueprintLibrary_GetEditorVRRoomTransform_Statics::Function_MetaDataParams[] = {
		{ "Category", "Virtual Production" },
		{ "Comment", "/** Get the VR room transform (the playable area shown as a wireframe cage on Vive and Rift */" },
		{ "ModuleRelativePath", "Public/Libraries/VPBlueprintLibrary.h" },
		{ "ToolTip", "Get the VR room transform (the playable area shown as a wireframe cage on Vive and Rift" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVPBlueprintLibrary_GetEditorVRRoomTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVPBlueprintLibrary, nullptr, "GetEditorVRRoomTransform", nullptr, nullptr, Z_Construct_UFunction_UVPBlueprintLibrary_GetEditorVRRoomTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVPBlueprintLibrary_GetEditorVRRoomTransform_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVPBlueprintLibrary_GetEditorVRRoomTransform_Statics::VPBlueprintLibrary_eventGetEditorVRRoomTransform_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVPBlueprintLibrary_GetEditorVRRoomTransform_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVPBlueprintLibrary_GetEditorVRRoomTransform_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVPBlueprintLibrary_GetEditorVRRoomTransform_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UVPBlueprintLibrary_GetEditorVRRoomTransform_Statics::VPBlueprintLibrary_eventGetEditorVRRoomTransform_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UVPBlueprintLibrary_GetEditorVRRoomTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVPBlueprintLibrary_GetEditorVRRoomTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVPBlueprintLibrary_GetEditorWorld_Statics
	{
		struct VPBlueprintLibrary_eventGetEditorWorld_Parms
		{
			UWorld* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVPBlueprintLibrary_GetEditorWorld_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VPBlueprintLibrary_eventGetEditorWorld_Parms, ReturnValue), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVPBlueprintLibrary_GetEditorWorld_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVPBlueprintLibrary_GetEditorWorld_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVPBlueprintLibrary_GetEditorWorld_Statics::Function_MetaDataParams[] = {
		{ "Category", "Virtual Production" },
		{ "Comment", "/**\n\x09 * Wrapper around UUnrealEditorSubsystem::GetEditorWorld.\n\x09 * Used because you can't get the subsystem without being an editor utility actor.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Libraries/VPBlueprintLibrary.h" },
		{ "ToolTip", "Wrapper around UUnrealEditorSubsystem::GetEditorWorld.\nUsed because you can't get the subsystem without being an editor utility actor." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVPBlueprintLibrary_GetEditorWorld_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVPBlueprintLibrary, nullptr, "GetEditorWorld", nullptr, nullptr, Z_Construct_UFunction_UVPBlueprintLibrary_GetEditorWorld_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVPBlueprintLibrary_GetEditorWorld_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVPBlueprintLibrary_GetEditorWorld_Statics::VPBlueprintLibrary_eventGetEditorWorld_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVPBlueprintLibrary_GetEditorWorld_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVPBlueprintLibrary_GetEditorWorld_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVPBlueprintLibrary_GetEditorWorld_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UVPBlueprintLibrary_GetEditorWorld_Statics::VPBlueprintLibrary_eventGetEditorWorld_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UVPBlueprintLibrary_GetEditorWorld()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVPBlueprintLibrary_GetEditorWorld_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVPBlueprintLibrary_GetLeftInteractorLocation_Statics
	{
		struct VPBlueprintLibrary_eventGetLeftInteractorLocation_Parms
		{
			FVector ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVPBlueprintLibrary_GetLeftInteractorLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VPBlueprintLibrary_eventGetLeftInteractorLocation_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVPBlueprintLibrary_GetLeftInteractorLocation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVPBlueprintLibrary_GetLeftInteractorLocation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVPBlueprintLibrary_GetLeftInteractorLocation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Virtual Production" },
		{ "Comment", "/** Get the location of the left interactor, in world space */" },
		{ "ModuleRelativePath", "Public/Libraries/VPBlueprintLibrary.h" },
		{ "ToolTip", "Get the location of the left interactor, in world space" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVPBlueprintLibrary_GetLeftInteractorLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVPBlueprintLibrary, nullptr, "GetLeftInteractorLocation", nullptr, nullptr, Z_Construct_UFunction_UVPBlueprintLibrary_GetLeftInteractorLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVPBlueprintLibrary_GetLeftInteractorLocation_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVPBlueprintLibrary_GetLeftInteractorLocation_Statics::VPBlueprintLibrary_eventGetLeftInteractorLocation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVPBlueprintLibrary_GetLeftInteractorLocation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVPBlueprintLibrary_GetLeftInteractorLocation_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVPBlueprintLibrary_GetLeftInteractorLocation_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UVPBlueprintLibrary_GetLeftInteractorLocation_Statics::VPBlueprintLibrary_eventGetLeftInteractorLocation_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UVPBlueprintLibrary_GetLeftInteractorLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVPBlueprintLibrary_GetLeftInteractorLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVPBlueprintLibrary_GetVirtualProductionRole_Statics
	{
		struct VPBlueprintLibrary_eventGetVirtualProductionRole_Parms
		{
			FGameplayTagContainer ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVPBlueprintLibrary_GetVirtualProductionRole_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VPBlueprintLibrary_eventGetVirtualProductionRole_Parms, ReturnValue), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(0, nullptr) }; // 405371792
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVPBlueprintLibrary_GetVirtualProductionRole_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVPBlueprintLibrary_GetVirtualProductionRole_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVPBlueprintLibrary_GetVirtualProductionRole_Statics::Function_MetaDataParams[] = {
		{ "Category", "Virtual Production" },
		{ "Comment", "/** The machine role(s) in a virtual production context. */" },
		{ "ModuleRelativePath", "Public/Libraries/VPBlueprintLibrary.h" },
		{ "ToolTip", "The machine role(s) in a virtual production context." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVPBlueprintLibrary_GetVirtualProductionRole_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVPBlueprintLibrary, nullptr, "GetVirtualProductionRole", nullptr, nullptr, Z_Construct_UFunction_UVPBlueprintLibrary_GetVirtualProductionRole_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVPBlueprintLibrary_GetVirtualProductionRole_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVPBlueprintLibrary_GetVirtualProductionRole_Statics::VPBlueprintLibrary_eventGetVirtualProductionRole_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVPBlueprintLibrary_GetVirtualProductionRole_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVPBlueprintLibrary_GetVirtualProductionRole_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVPBlueprintLibrary_GetVirtualProductionRole_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UVPBlueprintLibrary_GetVirtualProductionRole_Statics::VPBlueprintLibrary_eventGetVirtualProductionRole_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UVPBlueprintLibrary_GetVirtualProductionRole()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVPBlueprintLibrary_GetVirtualProductionRole_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVPBlueprintLibrary_GetVREditorLaserHoverLocation_Statics
	{
		struct VPBlueprintLibrary_eventGetVREditorLaserHoverLocation_Parms
		{
			FVector ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVPBlueprintLibrary_GetVREditorLaserHoverLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VPBlueprintLibrary_eventGetVREditorLaserHoverLocation_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVPBlueprintLibrary_GetVREditorLaserHoverLocation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVPBlueprintLibrary_GetVREditorLaserHoverLocation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVPBlueprintLibrary_GetVREditorLaserHoverLocation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Virtual Production" },
		{ "Comment", "/** Get the hitlocation of the interaction controller's laser pointer, in world space */" },
		{ "ModuleRelativePath", "Public/Libraries/VPBlueprintLibrary.h" },
		{ "ToolTip", "Get the hitlocation of the interaction controller's laser pointer, in world space" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVPBlueprintLibrary_GetVREditorLaserHoverLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVPBlueprintLibrary, nullptr, "GetVREditorLaserHoverLocation", nullptr, nullptr, Z_Construct_UFunction_UVPBlueprintLibrary_GetVREditorLaserHoverLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVPBlueprintLibrary_GetVREditorLaserHoverLocation_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVPBlueprintLibrary_GetVREditorLaserHoverLocation_Statics::VPBlueprintLibrary_eventGetVREditorLaserHoverLocation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVPBlueprintLibrary_GetVREditorLaserHoverLocation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVPBlueprintLibrary_GetVREditorLaserHoverLocation_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVPBlueprintLibrary_GetVREditorLaserHoverLocation_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UVPBlueprintLibrary_GetVREditorLaserHoverLocation_Statics::VPBlueprintLibrary_eventGetVREditorLaserHoverLocation_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UVPBlueprintLibrary_GetVREditorLaserHoverLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVPBlueprintLibrary_GetVREditorLaserHoverLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVPBlueprintLibrary_IsVREditorModeActive_Statics
	{
		struct VPBlueprintLibrary_eventIsVREditorModeActive_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UVPBlueprintLibrary_IsVREditorModeActive_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VPBlueprintLibrary_eventIsVREditorModeActive_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVPBlueprintLibrary_IsVREditorModeActive_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VPBlueprintLibrary_eventIsVREditorModeActive_Parms), &Z_Construct_UFunction_UVPBlueprintLibrary_IsVREditorModeActive_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVPBlueprintLibrary_IsVREditorModeActive_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVPBlueprintLibrary_IsVREditorModeActive_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVPBlueprintLibrary_IsVREditorModeActive_Statics::Function_MetaDataParams[] = {
		{ "Category", "Virtual Production" },
		{ "Comment", "/** Get whether the user is in editor VR mode */" },
		{ "ModuleRelativePath", "Public/Libraries/VPBlueprintLibrary.h" },
		{ "ToolTip", "Get whether the user is in editor VR mode" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVPBlueprintLibrary_IsVREditorModeActive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVPBlueprintLibrary, nullptr, "IsVREditorModeActive", nullptr, nullptr, Z_Construct_UFunction_UVPBlueprintLibrary_IsVREditorModeActive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVPBlueprintLibrary_IsVREditorModeActive_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVPBlueprintLibrary_IsVREditorModeActive_Statics::VPBlueprintLibrary_eventIsVREditorModeActive_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVPBlueprintLibrary_IsVREditorModeActive_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVPBlueprintLibrary_IsVREditorModeActive_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVPBlueprintLibrary_IsVREditorModeActive_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UVPBlueprintLibrary_IsVREditorModeActive_Statics::VPBlueprintLibrary_eventIsVREditorModeActive_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UVPBlueprintLibrary_IsVREditorModeActive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVPBlueprintLibrary_IsVREditorModeActive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVPBlueprintLibrary_JumpToBookmarkInLevelEditor_Statics
	{
		struct VPBlueprintLibrary_eventJumpToBookmarkInLevelEditor_Parms
		{
			const UVPBookmark* Bookmark;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Bookmark_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Bookmark;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVPBlueprintLibrary_JumpToBookmarkInLevelEditor_Statics::NewProp_Bookmark_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVPBlueprintLibrary_JumpToBookmarkInLevelEditor_Statics::NewProp_Bookmark = { "Bookmark", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VPBlueprintLibrary_eventJumpToBookmarkInLevelEditor_Parms, Bookmark), Z_Construct_UClass_UVPBookmark_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVPBlueprintLibrary_JumpToBookmarkInLevelEditor_Statics::NewProp_Bookmark_MetaData), Z_Construct_UFunction_UVPBlueprintLibrary_JumpToBookmarkInLevelEditor_Statics::NewProp_Bookmark_MetaData) };
	void Z_Construct_UFunction_UVPBlueprintLibrary_JumpToBookmarkInLevelEditor_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VPBlueprintLibrary_eventJumpToBookmarkInLevelEditor_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVPBlueprintLibrary_JumpToBookmarkInLevelEditor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VPBlueprintLibrary_eventJumpToBookmarkInLevelEditor_Parms), &Z_Construct_UFunction_UVPBlueprintLibrary_JumpToBookmarkInLevelEditor_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVPBlueprintLibrary_JumpToBookmarkInLevelEditor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVPBlueprintLibrary_JumpToBookmarkInLevelEditor_Statics::NewProp_Bookmark,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVPBlueprintLibrary_JumpToBookmarkInLevelEditor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVPBlueprintLibrary_JumpToBookmarkInLevelEditor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Virtual Production" },
		{ "Comment", "/** Jump to a virtual production bookmark */" },
		{ "ModuleRelativePath", "Public/Libraries/VPBlueprintLibrary.h" },
		{ "ToolTip", "Jump to a virtual production bookmark" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVPBlueprintLibrary_JumpToBookmarkInLevelEditor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVPBlueprintLibrary, nullptr, "JumpToBookmarkInLevelEditor", nullptr, nullptr, Z_Construct_UFunction_UVPBlueprintLibrary_JumpToBookmarkInLevelEditor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVPBlueprintLibrary_JumpToBookmarkInLevelEditor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVPBlueprintLibrary_JumpToBookmarkInLevelEditor_Statics::VPBlueprintLibrary_eventJumpToBookmarkInLevelEditor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVPBlueprintLibrary_JumpToBookmarkInLevelEditor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVPBlueprintLibrary_JumpToBookmarkInLevelEditor_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVPBlueprintLibrary_JumpToBookmarkInLevelEditor_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UVPBlueprintLibrary_JumpToBookmarkInLevelEditor_Statics::VPBlueprintLibrary_eventJumpToBookmarkInLevelEditor_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UVPBlueprintLibrary_JumpToBookmarkInLevelEditor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVPBlueprintLibrary_JumpToBookmarkInLevelEditor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVPBlueprintLibrary_Refresh3DEditorViewport_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVPBlueprintLibrary_Refresh3DEditorViewport_Statics::Function_MetaDataParams[] = {
		{ "Category", "Virtual Production" },
		{ "Comment", "/** Refresh the desktop 3D viewport so that it updates changes even when not set to 'Realtime' */" },
		{ "ModuleRelativePath", "Public/Libraries/VPBlueprintLibrary.h" },
		{ "ToolTip", "Refresh the desktop 3D viewport so that it updates changes even when not set to 'Realtime'" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVPBlueprintLibrary_Refresh3DEditorViewport_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVPBlueprintLibrary, nullptr, "Refresh3DEditorViewport", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVPBlueprintLibrary_Refresh3DEditorViewport_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVPBlueprintLibrary_Refresh3DEditorViewport_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UVPBlueprintLibrary_Refresh3DEditorViewport()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVPBlueprintLibrary_Refresh3DEditorViewport_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVPBlueprintLibrary_SetGrabSpeed_Statics
	{
		struct VPBlueprintLibrary_eventSetGrabSpeed_Parms
		{
			float Speed;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Speed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Speed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVPBlueprintLibrary_SetGrabSpeed_Statics::NewProp_Speed_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVPBlueprintLibrary_SetGrabSpeed_Statics::NewProp_Speed = { "Speed", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VPBlueprintLibrary_eventSetGrabSpeed_Parms, Speed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVPBlueprintLibrary_SetGrabSpeed_Statics::NewProp_Speed_MetaData), Z_Construct_UFunction_UVPBlueprintLibrary_SetGrabSpeed_Statics::NewProp_Speed_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVPBlueprintLibrary_SetGrabSpeed_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVPBlueprintLibrary_SetGrabSpeed_Statics::NewProp_Speed,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVPBlueprintLibrary_SetGrabSpeed_Statics::Function_MetaDataParams[] = {
		{ "Category", "Virtual Production" },
		{ "Comment", "/** Set the VR grab speed cvar */" },
		{ "ModuleRelativePath", "Public/Libraries/VPBlueprintLibrary.h" },
		{ "ToolTip", "Set the VR grab speed cvar" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVPBlueprintLibrary_SetGrabSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVPBlueprintLibrary, nullptr, "SetGrabSpeed", nullptr, nullptr, Z_Construct_UFunction_UVPBlueprintLibrary_SetGrabSpeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVPBlueprintLibrary_SetGrabSpeed_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVPBlueprintLibrary_SetGrabSpeed_Statics::VPBlueprintLibrary_eventSetGrabSpeed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVPBlueprintLibrary_SetGrabSpeed_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVPBlueprintLibrary_SetGrabSpeed_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVPBlueprintLibrary_SetGrabSpeed_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UVPBlueprintLibrary_SetGrabSpeed_Statics::VPBlueprintLibrary_eventSetGrabSpeed_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UVPBlueprintLibrary_SetGrabSpeed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVPBlueprintLibrary_SetGrabSpeed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVPBlueprintLibrary_SpawnBookmarkAtCurrentLevelEditorPosition_Statics
	{
		struct VPBlueprintLibrary_eventSpawnBookmarkAtCurrentLevelEditorPosition_Parms
		{
			const TSubclassOf<AActor>  ActorClass;
			FVPBookmarkCreationContext CreationContext;
			FVector Offset;
			bool bFlattenRotation;
			AActor* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActorClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_ActorClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CreationContext_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CreationContext;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Offset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Offset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bFlattenRotation_MetaData[];
#endif
		static void NewProp_bFlattenRotation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFlattenRotation;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVPBlueprintLibrary_SpawnBookmarkAtCurrentLevelEditorPosition_Statics::NewProp_ActorClass_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UVPBlueprintLibrary_SpawnBookmarkAtCurrentLevelEditorPosition_Statics::NewProp_ActorClass = { "ActorClass", nullptr, (EPropertyFlags)0x0014000000000082, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VPBlueprintLibrary_eventSpawnBookmarkAtCurrentLevelEditorPosition_Parms, ActorClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVPBlueprintLibrary_SpawnBookmarkAtCurrentLevelEditorPosition_Statics::NewProp_ActorClass_MetaData), Z_Construct_UFunction_UVPBlueprintLibrary_SpawnBookmarkAtCurrentLevelEditorPosition_Statics::NewProp_ActorClass_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVPBlueprintLibrary_SpawnBookmarkAtCurrentLevelEditorPosition_Statics::NewProp_CreationContext_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVPBlueprintLibrary_SpawnBookmarkAtCurrentLevelEditorPosition_Statics::NewProp_CreationContext = { "CreationContext", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VPBlueprintLibrary_eventSpawnBookmarkAtCurrentLevelEditorPosition_Parms, CreationContext), Z_Construct_UScriptStruct_FVPBookmarkCreationContext, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVPBlueprintLibrary_SpawnBookmarkAtCurrentLevelEditorPosition_Statics::NewProp_CreationContext_MetaData), Z_Construct_UFunction_UVPBlueprintLibrary_SpawnBookmarkAtCurrentLevelEditorPosition_Statics::NewProp_CreationContext_MetaData) }; // 4146862096
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVPBlueprintLibrary_SpawnBookmarkAtCurrentLevelEditorPosition_Statics::NewProp_Offset_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVPBlueprintLibrary_SpawnBookmarkAtCurrentLevelEditorPosition_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VPBlueprintLibrary_eventSpawnBookmarkAtCurrentLevelEditorPosition_Parms, Offset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVPBlueprintLibrary_SpawnBookmarkAtCurrentLevelEditorPosition_Statics::NewProp_Offset_MetaData), Z_Construct_UFunction_UVPBlueprintLibrary_SpawnBookmarkAtCurrentLevelEditorPosition_Statics::NewProp_Offset_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVPBlueprintLibrary_SpawnBookmarkAtCurrentLevelEditorPosition_Statics::NewProp_bFlattenRotation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UVPBlueprintLibrary_SpawnBookmarkAtCurrentLevelEditorPosition_Statics::NewProp_bFlattenRotation_SetBit(void* Obj)
	{
		((VPBlueprintLibrary_eventSpawnBookmarkAtCurrentLevelEditorPosition_Parms*)Obj)->bFlattenRotation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVPBlueprintLibrary_SpawnBookmarkAtCurrentLevelEditorPosition_Statics::NewProp_bFlattenRotation = { "bFlattenRotation", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VPBlueprintLibrary_eventSpawnBookmarkAtCurrentLevelEditorPosition_Parms), &Z_Construct_UFunction_UVPBlueprintLibrary_SpawnBookmarkAtCurrentLevelEditorPosition_Statics::NewProp_bFlattenRotation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVPBlueprintLibrary_SpawnBookmarkAtCurrentLevelEditorPosition_Statics::NewProp_bFlattenRotation_MetaData), Z_Construct_UFunction_UVPBlueprintLibrary_SpawnBookmarkAtCurrentLevelEditorPosition_Statics::NewProp_bFlattenRotation_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVPBlueprintLibrary_SpawnBookmarkAtCurrentLevelEditorPosition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VPBlueprintLibrary_eventSpawnBookmarkAtCurrentLevelEditorPosition_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVPBlueprintLibrary_SpawnBookmarkAtCurrentLevelEditorPosition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVPBlueprintLibrary_SpawnBookmarkAtCurrentLevelEditorPosition_Statics::NewProp_ActorClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVPBlueprintLibrary_SpawnBookmarkAtCurrentLevelEditorPosition_Statics::NewProp_CreationContext,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVPBlueprintLibrary_SpawnBookmarkAtCurrentLevelEditorPosition_Statics::NewProp_Offset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVPBlueprintLibrary_SpawnBookmarkAtCurrentLevelEditorPosition_Statics::NewProp_bFlattenRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVPBlueprintLibrary_SpawnBookmarkAtCurrentLevelEditorPosition_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVPBlueprintLibrary_SpawnBookmarkAtCurrentLevelEditorPosition_Statics::Function_MetaDataParams[] = {
		{ "Category", "Virtual Production" },
		{ "Comment", "/** Spawn a virtual production bookmark */" },
		{ "CPP_Default_bFlattenRotation", "true" },
		{ "ModuleRelativePath", "Public/Libraries/VPBlueprintLibrary.h" },
		{ "ToolTip", "Spawn a virtual production bookmark" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVPBlueprintLibrary_SpawnBookmarkAtCurrentLevelEditorPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVPBlueprintLibrary, nullptr, "SpawnBookmarkAtCurrentLevelEditorPosition", nullptr, nullptr, Z_Construct_UFunction_UVPBlueprintLibrary_SpawnBookmarkAtCurrentLevelEditorPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVPBlueprintLibrary_SpawnBookmarkAtCurrentLevelEditorPosition_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVPBlueprintLibrary_SpawnBookmarkAtCurrentLevelEditorPosition_Statics::VPBlueprintLibrary_eventSpawnBookmarkAtCurrentLevelEditorPosition_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVPBlueprintLibrary_SpawnBookmarkAtCurrentLevelEditorPosition_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVPBlueprintLibrary_SpawnBookmarkAtCurrentLevelEditorPosition_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVPBlueprintLibrary_SpawnBookmarkAtCurrentLevelEditorPosition_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UVPBlueprintLibrary_SpawnBookmarkAtCurrentLevelEditorPosition_Statics::VPBlueprintLibrary_eventSpawnBookmarkAtCurrentLevelEditorPosition_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UVPBlueprintLibrary_SpawnBookmarkAtCurrentLevelEditorPosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVPBlueprintLibrary_SpawnBookmarkAtCurrentLevelEditorPosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVPBlueprintLibrary_SpawnVPTickableActor_Statics
	{
		struct VPBlueprintLibrary_eventSpawnVPTickableActor_Parms
		{
			UObject* ContextObject;
			const TSubclassOf<AVPViewportTickableActorBase>  ActorClass;
			FVector Location;
			FRotator Rotation;
			AVPViewportTickableActorBase* ReturnValue;
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVPBlueprintLibrary_SpawnVPTickableActor_Statics::NewProp_ContextObject = { "ContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VPBlueprintLibrary_eventSpawnVPTickableActor_Parms, ContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVPBlueprintLibrary_SpawnVPTickableActor_Statics::NewProp_ActorClass_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UVPBlueprintLibrary_SpawnVPTickableActor_Statics::NewProp_ActorClass = { "ActorClass", nullptr, (EPropertyFlags)0x0014000000000082, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VPBlueprintLibrary_eventSpawnVPTickableActor_Parms, ActorClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AVPViewportTickableActorBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVPBlueprintLibrary_SpawnVPTickableActor_Statics::NewProp_ActorClass_MetaData), Z_Construct_UFunction_UVPBlueprintLibrary_SpawnVPTickableActor_Statics::NewProp_ActorClass_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVPBlueprintLibrary_SpawnVPTickableActor_Statics::NewProp_Location_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVPBlueprintLibrary_SpawnVPTickableActor_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VPBlueprintLibrary_eventSpawnVPTickableActor_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVPBlueprintLibrary_SpawnVPTickableActor_Statics::NewProp_Location_MetaData), Z_Construct_UFunction_UVPBlueprintLibrary_SpawnVPTickableActor_Statics::NewProp_Location_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVPBlueprintLibrary_SpawnVPTickableActor_Statics::NewProp_Rotation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVPBlueprintLibrary_SpawnVPTickableActor_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VPBlueprintLibrary_eventSpawnVPTickableActor_Parms, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVPBlueprintLibrary_SpawnVPTickableActor_Statics::NewProp_Rotation_MetaData), Z_Construct_UFunction_UVPBlueprintLibrary_SpawnVPTickableActor_Statics::NewProp_Rotation_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVPBlueprintLibrary_SpawnVPTickableActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VPBlueprintLibrary_eventSpawnVPTickableActor_Parms, ReturnValue), Z_Construct_UClass_AVPViewportTickableActorBase_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVPBlueprintLibrary_SpawnVPTickableActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVPBlueprintLibrary_SpawnVPTickableActor_Statics::NewProp_ContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVPBlueprintLibrary_SpawnVPTickableActor_Statics::NewProp_ActorClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVPBlueprintLibrary_SpawnVPTickableActor_Statics::NewProp_Location,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVPBlueprintLibrary_SpawnVPTickableActor_Statics::NewProp_Rotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVPBlueprintLibrary_SpawnVPTickableActor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVPBlueprintLibrary_SpawnVPTickableActor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Virtual Production" },
		{ "Comment", "/** Spawn a virtual production tickable actor */" },
		{ "ModuleRelativePath", "Public/Libraries/VPBlueprintLibrary.h" },
		{ "ToolTip", "Spawn a virtual production tickable actor" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVPBlueprintLibrary_SpawnVPTickableActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVPBlueprintLibrary, nullptr, "SpawnVPTickableActor", nullptr, nullptr, Z_Construct_UFunction_UVPBlueprintLibrary_SpawnVPTickableActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVPBlueprintLibrary_SpawnVPTickableActor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVPBlueprintLibrary_SpawnVPTickableActor_Statics::VPBlueprintLibrary_eventSpawnVPTickableActor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVPBlueprintLibrary_SpawnVPTickableActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVPBlueprintLibrary_SpawnVPTickableActor_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVPBlueprintLibrary_SpawnVPTickableActor_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UVPBlueprintLibrary_SpawnVPTickableActor_Statics::VPBlueprintLibrary_eventSpawnVPTickableActor_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UVPBlueprintLibrary_SpawnVPTickableActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVPBlueprintLibrary_SpawnVPTickableActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVPBlueprintLibrary_VPBookmarkSplineMeshIndicatorDisable_Statics
	{
		struct VPBlueprintLibrary_eventVPBookmarkSplineMeshIndicatorDisable_Parms
		{
			USplineMeshComponent* SplineMesh;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SplineMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SplineMesh;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVPBlueprintLibrary_VPBookmarkSplineMeshIndicatorDisable_Statics::NewProp_SplineMesh_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVPBlueprintLibrary_VPBookmarkSplineMeshIndicatorDisable_Statics::NewProp_SplineMesh = { "SplineMesh", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VPBlueprintLibrary_eventVPBookmarkSplineMeshIndicatorDisable_Parms, SplineMesh), Z_Construct_UClass_USplineMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVPBlueprintLibrary_VPBookmarkSplineMeshIndicatorDisable_Statics::NewProp_SplineMesh_MetaData), Z_Construct_UFunction_UVPBlueprintLibrary_VPBookmarkSplineMeshIndicatorDisable_Statics::NewProp_SplineMesh_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVPBlueprintLibrary_VPBookmarkSplineMeshIndicatorDisable_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVPBlueprintLibrary_VPBookmarkSplineMeshIndicatorDisable_Statics::NewProp_SplineMesh,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVPBlueprintLibrary_VPBookmarkSplineMeshIndicatorDisable_Statics::Function_MetaDataParams[] = {
		{ "Category", "VPBookmarks" },
		{ "ModuleRelativePath", "Public/Libraries/VPBlueprintLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVPBlueprintLibrary_VPBookmarkSplineMeshIndicatorDisable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVPBlueprintLibrary, nullptr, "VPBookmarkSplineMeshIndicatorDisable", nullptr, nullptr, Z_Construct_UFunction_UVPBlueprintLibrary_VPBookmarkSplineMeshIndicatorDisable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVPBlueprintLibrary_VPBookmarkSplineMeshIndicatorDisable_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVPBlueprintLibrary_VPBookmarkSplineMeshIndicatorDisable_Statics::VPBlueprintLibrary_eventVPBookmarkSplineMeshIndicatorDisable_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVPBlueprintLibrary_VPBookmarkSplineMeshIndicatorDisable_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVPBlueprintLibrary_VPBookmarkSplineMeshIndicatorDisable_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVPBlueprintLibrary_VPBookmarkSplineMeshIndicatorDisable_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UVPBlueprintLibrary_VPBookmarkSplineMeshIndicatorDisable_Statics::VPBlueprintLibrary_eventVPBookmarkSplineMeshIndicatorDisable_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UVPBlueprintLibrary_VPBookmarkSplineMeshIndicatorDisable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVPBlueprintLibrary_VPBookmarkSplineMeshIndicatorDisable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVPBlueprintLibrary_VPBookmarkSplineMeshIndicatorSetStartAndEnd_Statics
	{
		struct VPBlueprintLibrary_eventVPBookmarkSplineMeshIndicatorSetStartAndEnd_Parms
		{
			USplineMeshComponent* SplineMesh;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SplineMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SplineMesh;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVPBlueprintLibrary_VPBookmarkSplineMeshIndicatorSetStartAndEnd_Statics::NewProp_SplineMesh_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVPBlueprintLibrary_VPBookmarkSplineMeshIndicatorSetStartAndEnd_Statics::NewProp_SplineMesh = { "SplineMesh", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VPBlueprintLibrary_eventVPBookmarkSplineMeshIndicatorSetStartAndEnd_Parms, SplineMesh), Z_Construct_UClass_USplineMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVPBlueprintLibrary_VPBookmarkSplineMeshIndicatorSetStartAndEnd_Statics::NewProp_SplineMesh_MetaData), Z_Construct_UFunction_UVPBlueprintLibrary_VPBookmarkSplineMeshIndicatorSetStartAndEnd_Statics::NewProp_SplineMesh_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVPBlueprintLibrary_VPBookmarkSplineMeshIndicatorSetStartAndEnd_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVPBlueprintLibrary_VPBookmarkSplineMeshIndicatorSetStartAndEnd_Statics::NewProp_SplineMesh,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVPBlueprintLibrary_VPBookmarkSplineMeshIndicatorSetStartAndEnd_Statics::Function_MetaDataParams[] = {
		{ "Category", "VPBookmarks" },
		{ "ModuleRelativePath", "Public/Libraries/VPBlueprintLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVPBlueprintLibrary_VPBookmarkSplineMeshIndicatorSetStartAndEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVPBlueprintLibrary, nullptr, "VPBookmarkSplineMeshIndicatorSetStartAndEnd", nullptr, nullptr, Z_Construct_UFunction_UVPBlueprintLibrary_VPBookmarkSplineMeshIndicatorSetStartAndEnd_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVPBlueprintLibrary_VPBookmarkSplineMeshIndicatorSetStartAndEnd_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVPBlueprintLibrary_VPBookmarkSplineMeshIndicatorSetStartAndEnd_Statics::VPBlueprintLibrary_eventVPBookmarkSplineMeshIndicatorSetStartAndEnd_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVPBlueprintLibrary_VPBookmarkSplineMeshIndicatorSetStartAndEnd_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVPBlueprintLibrary_VPBookmarkSplineMeshIndicatorSetStartAndEnd_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVPBlueprintLibrary_VPBookmarkSplineMeshIndicatorSetStartAndEnd_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UVPBlueprintLibrary_VPBookmarkSplineMeshIndicatorSetStartAndEnd_Statics::VPBlueprintLibrary_eventVPBookmarkSplineMeshIndicatorSetStartAndEnd_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UVPBlueprintLibrary_VPBookmarkSplineMeshIndicatorSetStartAndEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVPBlueprintLibrary_VPBookmarkSplineMeshIndicatorSetStartAndEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVPBlueprintLibrary);
	UClass* Z_Construct_UClass_UVPBlueprintLibrary_NoRegister()
	{
		return UVPBlueprintLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UVPBlueprintLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVPBlueprintLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_VPUtilities,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVPBlueprintLibrary_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UVPBlueprintLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UVPBlueprintLibrary_EditorDeleteSelectedObjects, "EditorDeleteSelectedObjects" }, // 1162016508
		{ &Z_Construct_UFunction_UVPBlueprintLibrary_EditorDuplicate, "EditorDuplicate" }, // 4270470335
		{ &Z_Construct_UFunction_UVPBlueprintLibrary_EditorRedo, "EditorRedo" }, // 2196035876
		{ &Z_Construct_UFunction_UVPBlueprintLibrary_EditorUndo, "EditorUndo" }, // 2799810567
		{ &Z_Construct_UFunction_UVPBlueprintLibrary_GetEditorViewportTransform, "GetEditorViewportTransform" }, // 3881152718
		{ &Z_Construct_UFunction_UVPBlueprintLibrary_GetEditorVRHeadTransform, "GetEditorVRHeadTransform" }, // 3479501126
		{ &Z_Construct_UFunction_UVPBlueprintLibrary_GetEditorVRRoomTransform, "GetEditorVRRoomTransform" }, // 2210300323
		{ &Z_Construct_UFunction_UVPBlueprintLibrary_GetEditorWorld, "GetEditorWorld" }, // 3057150450
		{ &Z_Construct_UFunction_UVPBlueprintLibrary_GetLeftInteractorLocation, "GetLeftInteractorLocation" }, // 639556045
		{ &Z_Construct_UFunction_UVPBlueprintLibrary_GetVirtualProductionRole, "GetVirtualProductionRole" }, // 3240748339
		{ &Z_Construct_UFunction_UVPBlueprintLibrary_GetVREditorLaserHoverLocation, "GetVREditorLaserHoverLocation" }, // 1313062683
		{ &Z_Construct_UFunction_UVPBlueprintLibrary_IsVREditorModeActive, "IsVREditorModeActive" }, // 1630933956
		{ &Z_Construct_UFunction_UVPBlueprintLibrary_JumpToBookmarkInLevelEditor, "JumpToBookmarkInLevelEditor" }, // 3451577096
		{ &Z_Construct_UFunction_UVPBlueprintLibrary_Refresh3DEditorViewport, "Refresh3DEditorViewport" }, // 254310646
		{ &Z_Construct_UFunction_UVPBlueprintLibrary_SetGrabSpeed, "SetGrabSpeed" }, // 3258267538
		{ &Z_Construct_UFunction_UVPBlueprintLibrary_SpawnBookmarkAtCurrentLevelEditorPosition, "SpawnBookmarkAtCurrentLevelEditorPosition" }, // 253698318
		{ &Z_Construct_UFunction_UVPBlueprintLibrary_SpawnVPTickableActor, "SpawnVPTickableActor" }, // 2905817358
		{ &Z_Construct_UFunction_UVPBlueprintLibrary_VPBookmarkSplineMeshIndicatorDisable, "VPBookmarkSplineMeshIndicatorDisable" }, // 2444727358
		{ &Z_Construct_UFunction_UVPBlueprintLibrary_VPBookmarkSplineMeshIndicatorSetStartAndEnd, "VPBookmarkSplineMeshIndicatorSetStartAndEnd" }, // 1871017908
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVPBlueprintLibrary_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVPBlueprintLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Functionality added to prototype the VR scouting tools\n */" },
		{ "IncludePath", "Libraries/VPBlueprintLibrary.h" },
		{ "ModuleRelativePath", "Public/Libraries/VPBlueprintLibrary.h" },
		{ "ToolTip", "Functionality added to prototype the VR scouting tools" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVPBlueprintLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVPBlueprintLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVPBlueprintLibrary_Statics::ClassParams = {
		&UVPBlueprintLibrary::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVPBlueprintLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UVPBlueprintLibrary_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UVPBlueprintLibrary()
	{
		if (!Z_Registration_Info_UClass_UVPBlueprintLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVPBlueprintLibrary.OuterSingleton, Z_Construct_UClass_UVPBlueprintLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVPBlueprintLibrary.OuterSingleton;
	}
	template<> VPUTILITIES_API UClass* StaticClass<UVPBlueprintLibrary>()
	{
		return UVPBlueprintLibrary::StaticClass();
	}
	UVPBlueprintLibrary::UVPBlueprintLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVPBlueprintLibrary);
	UVPBlueprintLibrary::~UVPBlueprintLibrary() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_Libraries_VPBlueprintLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_Libraries_VPBlueprintLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVPBlueprintLibrary, UVPBlueprintLibrary::StaticClass, TEXT("UVPBlueprintLibrary"), &Z_Registration_Info_UClass_UVPBlueprintLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVPBlueprintLibrary), 2027524636U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_Libraries_VPBlueprintLibrary_h_2483575016(TEXT("/Script/VPUtilities"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_Libraries_VPBlueprintLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_Libraries_VPBlueprintLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
