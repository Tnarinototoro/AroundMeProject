// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/AI/AITask_UseGameplayInteraction.h"
#include "GameplayInteractionContext.h"
#include "GameplayInteractionsTypes.h"
#include "SmartObjectRuntime.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAITask_UseGameplayInteraction() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_AAIController_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UAITask();
	AIMODULE_API UClass* Z_Construct_UClass_UAITask_MoveTo_NoRegister();
	GAMEPLAYINTERACTIONSMODULE_API UClass* Z_Construct_UClass_UAITask_UseGameplayInteraction();
	GAMEPLAYINTERACTIONSMODULE_API UClass* Z_Construct_UClass_UAITask_UseGameplayInteraction_NoRegister();
	GAMEPLAYINTERACTIONSMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayInteractionAbortContext();
	GAMEPLAYINTERACTIONSMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayInteractionContext();
	GAMEPLAYTASKS_API UFunction* Z_Construct_UDelegateFunction_UGameplayTask_GenericGameplayTaskDelegate__DelegateSignature();
	SMARTOBJECTSMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FSmartObjectClaimHandle();
	UPackage* Z_Construct_UPackage__Script_GameplayInteractionsModule();
// End Cross Module References
	DEFINE_FUNCTION(UAITask_UseGameplayInteraction::execRequestAbort)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RequestAbort();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAITask_UseGameplayInteraction::execMoveToAndUseSmartObjectWithGameplayInteraction)
	{
		P_GET_OBJECT(AAIController,Z_Param_Controller);
		P_GET_STRUCT(FSmartObjectClaimHandle,Z_Param_ClaimHandle);
		P_GET_UBOOL(Z_Param_bLockAILogic);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAITask_UseGameplayInteraction**)Z_Param__Result=UAITask_UseGameplayInteraction::MoveToAndUseSmartObjectWithGameplayInteraction(Z_Param_Controller,Z_Param_ClaimHandle,Z_Param_bLockAILogic);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAITask_UseGameplayInteraction::execUseSmartObjectWithGameplayInteraction)
	{
		P_GET_OBJECT(AAIController,Z_Param_Controller);
		P_GET_STRUCT(FSmartObjectClaimHandle,Z_Param_ClaimHandle);
		P_GET_UBOOL(Z_Param_bLockAILogic);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAITask_UseGameplayInteraction**)Z_Param__Result=UAITask_UseGameplayInteraction::UseSmartObjectWithGameplayInteraction(Z_Param_Controller,Z_Param_ClaimHandle,Z_Param_bLockAILogic);
		P_NATIVE_END;
	}
	void UAITask_UseGameplayInteraction::StaticRegisterNativesUAITask_UseGameplayInteraction()
	{
		UClass* Class = UAITask_UseGameplayInteraction::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "MoveToAndUseSmartObjectWithGameplayInteraction", &UAITask_UseGameplayInteraction::execMoveToAndUseSmartObjectWithGameplayInteraction },
			{ "RequestAbort", &UAITask_UseGameplayInteraction::execRequestAbort },
			{ "UseSmartObjectWithGameplayInteraction", &UAITask_UseGameplayInteraction::execUseSmartObjectWithGameplayInteraction },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAITask_UseGameplayInteraction_MoveToAndUseSmartObjectWithGameplayInteraction_Statics
	{
		struct AITask_UseGameplayInteraction_eventMoveToAndUseSmartObjectWithGameplayInteraction_Parms
		{
			AAIController* Controller;
			FSmartObjectClaimHandle ClaimHandle;
			bool bLockAILogic;
			UAITask_UseGameplayInteraction* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Controller;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ClaimHandle;
		static void NewProp_bLockAILogic_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLockAILogic;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAITask_UseGameplayInteraction_MoveToAndUseSmartObjectWithGameplayInteraction_Statics::NewProp_Controller = { "Controller", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AITask_UseGameplayInteraction_eventMoveToAndUseSmartObjectWithGameplayInteraction_Parms, Controller), Z_Construct_UClass_AAIController_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAITask_UseGameplayInteraction_MoveToAndUseSmartObjectWithGameplayInteraction_Statics::NewProp_ClaimHandle = { "ClaimHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AITask_UseGameplayInteraction_eventMoveToAndUseSmartObjectWithGameplayInteraction_Parms, ClaimHandle), Z_Construct_UScriptStruct_FSmartObjectClaimHandle, METADATA_PARAMS(0, nullptr) }; // 2747113422
	void Z_Construct_UFunction_UAITask_UseGameplayInteraction_MoveToAndUseSmartObjectWithGameplayInteraction_Statics::NewProp_bLockAILogic_SetBit(void* Obj)
	{
		((AITask_UseGameplayInteraction_eventMoveToAndUseSmartObjectWithGameplayInteraction_Parms*)Obj)->bLockAILogic = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAITask_UseGameplayInteraction_MoveToAndUseSmartObjectWithGameplayInteraction_Statics::NewProp_bLockAILogic = { "bLockAILogic", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AITask_UseGameplayInteraction_eventMoveToAndUseSmartObjectWithGameplayInteraction_Parms), &Z_Construct_UFunction_UAITask_UseGameplayInteraction_MoveToAndUseSmartObjectWithGameplayInteraction_Statics::NewProp_bLockAILogic_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAITask_UseGameplayInteraction_MoveToAndUseSmartObjectWithGameplayInteraction_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AITask_UseGameplayInteraction_eventMoveToAndUseSmartObjectWithGameplayInteraction_Parms, ReturnValue), Z_Construct_UClass_UAITask_UseGameplayInteraction_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAITask_UseGameplayInteraction_MoveToAndUseSmartObjectWithGameplayInteraction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAITask_UseGameplayInteraction_MoveToAndUseSmartObjectWithGameplayInteraction_Statics::NewProp_Controller,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAITask_UseGameplayInteraction_MoveToAndUseSmartObjectWithGameplayInteraction_Statics::NewProp_ClaimHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAITask_UseGameplayInteraction_MoveToAndUseSmartObjectWithGameplayInteraction_Statics::NewProp_bLockAILogic,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAITask_UseGameplayInteraction_MoveToAndUseSmartObjectWithGameplayInteraction_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAITask_UseGameplayInteraction_MoveToAndUseSmartObjectWithGameplayInteraction_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "AI|Tasks" },
		{ "Comment", "/**\n\x09 * Helper function to create an AITask that reaches and interacts with the SmartObject slot using the GameplayInteraction definition\n\x09 * @param Controller The controller that will move to the slot location and that will (or its attached pawn if available) take part to the interaction.\n\x09 * @param ClaimHandle The handle to an already claimed slot.\n\x09 * @param bLockAILogic Indicates if the task adds UAIResource_Logic to the set of Claimed resources \n\x09 * @return The AITask executing the move and the interaction.\n\x09 */" },
		{ "CPP_Default_bLockAILogic", "true" },
		{ "DefaultToSelf", "Controller" },
		{ "ModuleRelativePath", "Private/AI/AITask_UseGameplayInteraction.h" },
		{ "ToolTip", "Helper function to create an AITask that reaches and interacts with the SmartObject slot using the GameplayInteraction definition\n@param Controller The controller that will move to the slot location and that will (or its attached pawn if available) take part to the interaction.\n@param ClaimHandle The handle to an already claimed slot.\n@param bLockAILogic Indicates if the task adds UAIResource_Logic to the set of Claimed resources\n@return The AITask executing the move and the interaction." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAITask_UseGameplayInteraction_MoveToAndUseSmartObjectWithGameplayInteraction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAITask_UseGameplayInteraction, nullptr, "MoveToAndUseSmartObjectWithGameplayInteraction", nullptr, nullptr, Z_Construct_UFunction_UAITask_UseGameplayInteraction_MoveToAndUseSmartObjectWithGameplayInteraction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAITask_UseGameplayInteraction_MoveToAndUseSmartObjectWithGameplayInteraction_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAITask_UseGameplayInteraction_MoveToAndUseSmartObjectWithGameplayInteraction_Statics::AITask_UseGameplayInteraction_eventMoveToAndUseSmartObjectWithGameplayInteraction_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAITask_UseGameplayInteraction_MoveToAndUseSmartObjectWithGameplayInteraction_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAITask_UseGameplayInteraction_MoveToAndUseSmartObjectWithGameplayInteraction_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAITask_UseGameplayInteraction_MoveToAndUseSmartObjectWithGameplayInteraction_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAITask_UseGameplayInteraction_MoveToAndUseSmartObjectWithGameplayInteraction_Statics::AITask_UseGameplayInteraction_eventMoveToAndUseSmartObjectWithGameplayInteraction_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAITask_UseGameplayInteraction_MoveToAndUseSmartObjectWithGameplayInteraction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAITask_UseGameplayInteraction_MoveToAndUseSmartObjectWithGameplayInteraction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAITask_UseGameplayInteraction_RequestAbort_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAITask_UseGameplayInteraction_RequestAbort_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI|Tasks" },
		{ "ModuleRelativePath", "Private/AI/AITask_UseGameplayInteraction.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAITask_UseGameplayInteraction_RequestAbort_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAITask_UseGameplayInteraction, nullptr, "RequestAbort", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAITask_UseGameplayInteraction_RequestAbort_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAITask_UseGameplayInteraction_RequestAbort_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UAITask_UseGameplayInteraction_RequestAbort()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAITask_UseGameplayInteraction_RequestAbort_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAITask_UseGameplayInteraction_UseSmartObjectWithGameplayInteraction_Statics
	{
		struct AITask_UseGameplayInteraction_eventUseSmartObjectWithGameplayInteraction_Parms
		{
			AAIController* Controller;
			FSmartObjectClaimHandle ClaimHandle;
			bool bLockAILogic;
			UAITask_UseGameplayInteraction* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Controller;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ClaimHandle;
		static void NewProp_bLockAILogic_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLockAILogic;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAITask_UseGameplayInteraction_UseSmartObjectWithGameplayInteraction_Statics::NewProp_Controller = { "Controller", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AITask_UseGameplayInteraction_eventUseSmartObjectWithGameplayInteraction_Parms, Controller), Z_Construct_UClass_AAIController_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAITask_UseGameplayInteraction_UseSmartObjectWithGameplayInteraction_Statics::NewProp_ClaimHandle = { "ClaimHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AITask_UseGameplayInteraction_eventUseSmartObjectWithGameplayInteraction_Parms, ClaimHandle), Z_Construct_UScriptStruct_FSmartObjectClaimHandle, METADATA_PARAMS(0, nullptr) }; // 2747113422
	void Z_Construct_UFunction_UAITask_UseGameplayInteraction_UseSmartObjectWithGameplayInteraction_Statics::NewProp_bLockAILogic_SetBit(void* Obj)
	{
		((AITask_UseGameplayInteraction_eventUseSmartObjectWithGameplayInteraction_Parms*)Obj)->bLockAILogic = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAITask_UseGameplayInteraction_UseSmartObjectWithGameplayInteraction_Statics::NewProp_bLockAILogic = { "bLockAILogic", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AITask_UseGameplayInteraction_eventUseSmartObjectWithGameplayInteraction_Parms), &Z_Construct_UFunction_UAITask_UseGameplayInteraction_UseSmartObjectWithGameplayInteraction_Statics::NewProp_bLockAILogic_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAITask_UseGameplayInteraction_UseSmartObjectWithGameplayInteraction_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AITask_UseGameplayInteraction_eventUseSmartObjectWithGameplayInteraction_Parms, ReturnValue), Z_Construct_UClass_UAITask_UseGameplayInteraction_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAITask_UseGameplayInteraction_UseSmartObjectWithGameplayInteraction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAITask_UseGameplayInteraction_UseSmartObjectWithGameplayInteraction_Statics::NewProp_Controller,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAITask_UseGameplayInteraction_UseSmartObjectWithGameplayInteraction_Statics::NewProp_ClaimHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAITask_UseGameplayInteraction_UseSmartObjectWithGameplayInteraction_Statics::NewProp_bLockAILogic,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAITask_UseGameplayInteraction_UseSmartObjectWithGameplayInteraction_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAITask_UseGameplayInteraction_UseSmartObjectWithGameplayInteraction_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "AI|Tasks" },
		{ "Comment", "/**\n\x09 * Helper function to create an AITask that interacts with the SmartObject slot using the GameplayInteraction definition.\n\x09 * This version will start the interaction on spot so the actor needs to be at the desired position. \n\x09 * @param Controller The controller that (or its attached pawn if available) will take part to the interaction.\n\x09 * @param ClaimHandle The handle to an already claimed slot.\n\x09 * @param bLockAILogic Indicates if the task adds UAIResource_Logic to the set of Claimed resources \n\x09 * @return The AITask executing the GameplayInteraction.\n\x09 */" },
		{ "CPP_Default_bLockAILogic", "true" },
		{ "DefaultToSelf", "Controller" },
		{ "ModuleRelativePath", "Private/AI/AITask_UseGameplayInteraction.h" },
		{ "ToolTip", "Helper function to create an AITask that interacts with the SmartObject slot using the GameplayInteraction definition.\nThis version will start the interaction on spot so the actor needs to be at the desired position.\n@param Controller The controller that (or its attached pawn if available) will take part to the interaction.\n@param ClaimHandle The handle to an already claimed slot.\n@param bLockAILogic Indicates if the task adds UAIResource_Logic to the set of Claimed resources\n@return The AITask executing the GameplayInteraction." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAITask_UseGameplayInteraction_UseSmartObjectWithGameplayInteraction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAITask_UseGameplayInteraction, nullptr, "UseSmartObjectWithGameplayInteraction", nullptr, nullptr, Z_Construct_UFunction_UAITask_UseGameplayInteraction_UseSmartObjectWithGameplayInteraction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAITask_UseGameplayInteraction_UseSmartObjectWithGameplayInteraction_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAITask_UseGameplayInteraction_UseSmartObjectWithGameplayInteraction_Statics::AITask_UseGameplayInteraction_eventUseSmartObjectWithGameplayInteraction_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAITask_UseGameplayInteraction_UseSmartObjectWithGameplayInteraction_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAITask_UseGameplayInteraction_UseSmartObjectWithGameplayInteraction_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAITask_UseGameplayInteraction_UseSmartObjectWithGameplayInteraction_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAITask_UseGameplayInteraction_UseSmartObjectWithGameplayInteraction_Statics::AITask_UseGameplayInteraction_eventUseSmartObjectWithGameplayInteraction_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAITask_UseGameplayInteraction_UseSmartObjectWithGameplayInteraction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAITask_UseGameplayInteraction_UseSmartObjectWithGameplayInteraction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAITask_UseGameplayInteraction);
	UClass* Z_Construct_UClass_UAITask_UseGameplayInteraction_NoRegister()
	{
		return UAITask_UseGameplayInteraction::StaticClass();
	}
	struct Z_Construct_UClass_UAITask_UseGameplayInteraction_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnFinished_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFinished;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnSucceeded_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSucceeded;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnFailed_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFailed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnMoveToFailed_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnMoveToFailed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GameplayInteractionContext_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GameplayInteractionContext;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MoveToTask_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_MoveToTask;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClaimedHandle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ClaimedHandle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AbortContext_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AbortContext;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAITask_UseGameplayInteraction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAITask,
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayInteractionsModule,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAITask_UseGameplayInteraction_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UAITask_UseGameplayInteraction_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAITask_UseGameplayInteraction_MoveToAndUseSmartObjectWithGameplayInteraction, "MoveToAndUseSmartObjectWithGameplayInteraction" }, // 1372278789
		{ &Z_Construct_UFunction_UAITask_UseGameplayInteraction_RequestAbort, "RequestAbort" }, // 4120263466
		{ &Z_Construct_UFunction_UAITask_UseGameplayInteraction_UseSmartObjectWithGameplayInteraction, "UseSmartObjectWithGameplayInteraction" }, // 1805486584
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAITask_UseGameplayInteraction_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAITask_UseGameplayInteraction_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AI/AITask_UseGameplayInteraction.h" },
		{ "ModuleRelativePath", "Private/AI/AITask_UseGameplayInteraction.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAITask_UseGameplayInteraction_Statics::NewProp_OnFinished_MetaData[] = {
		{ "ModuleRelativePath", "Private/AI/AITask_UseGameplayInteraction.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAITask_UseGameplayInteraction_Statics::NewProp_OnFinished = { "OnFinished", nullptr, (EPropertyFlags)0x0020080010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAITask_UseGameplayInteraction, OnFinished), Z_Construct_UDelegateFunction_UGameplayTask_GenericGameplayTaskDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAITask_UseGameplayInteraction_Statics::NewProp_OnFinished_MetaData), Z_Construct_UClass_UAITask_UseGameplayInteraction_Statics::NewProp_OnFinished_MetaData) }; // 2864144361
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAITask_UseGameplayInteraction_Statics::NewProp_OnSucceeded_MetaData[] = {
		{ "ModuleRelativePath", "Private/AI/AITask_UseGameplayInteraction.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAITask_UseGameplayInteraction_Statics::NewProp_OnSucceeded = { "OnSucceeded", nullptr, (EPropertyFlags)0x0020080010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAITask_UseGameplayInteraction, OnSucceeded), Z_Construct_UDelegateFunction_UGameplayTask_GenericGameplayTaskDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAITask_UseGameplayInteraction_Statics::NewProp_OnSucceeded_MetaData), Z_Construct_UClass_UAITask_UseGameplayInteraction_Statics::NewProp_OnSucceeded_MetaData) }; // 2864144361
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAITask_UseGameplayInteraction_Statics::NewProp_OnFailed_MetaData[] = {
		{ "ModuleRelativePath", "Private/AI/AITask_UseGameplayInteraction.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAITask_UseGameplayInteraction_Statics::NewProp_OnFailed = { "OnFailed", nullptr, (EPropertyFlags)0x0020080010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAITask_UseGameplayInteraction, OnFailed), Z_Construct_UDelegateFunction_UGameplayTask_GenericGameplayTaskDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAITask_UseGameplayInteraction_Statics::NewProp_OnFailed_MetaData), Z_Construct_UClass_UAITask_UseGameplayInteraction_Statics::NewProp_OnFailed_MetaData) }; // 2864144361
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAITask_UseGameplayInteraction_Statics::NewProp_OnMoveToFailed_MetaData[] = {
		{ "ModuleRelativePath", "Private/AI/AITask_UseGameplayInteraction.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAITask_UseGameplayInteraction_Statics::NewProp_OnMoveToFailed = { "OnMoveToFailed", nullptr, (EPropertyFlags)0x0020080010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAITask_UseGameplayInteraction, OnMoveToFailed), Z_Construct_UDelegateFunction_UGameplayTask_GenericGameplayTaskDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAITask_UseGameplayInteraction_Statics::NewProp_OnMoveToFailed_MetaData), Z_Construct_UClass_UAITask_UseGameplayInteraction_Statics::NewProp_OnMoveToFailed_MetaData) }; // 2864144361
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAITask_UseGameplayInteraction_Statics::NewProp_GameplayInteractionContext_MetaData[] = {
		{ "ModuleRelativePath", "Private/AI/AITask_UseGameplayInteraction.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAITask_UseGameplayInteraction_Statics::NewProp_GameplayInteractionContext = { "GameplayInteractionContext", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAITask_UseGameplayInteraction, GameplayInteractionContext), Z_Construct_UScriptStruct_FGameplayInteractionContext, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAITask_UseGameplayInteraction_Statics::NewProp_GameplayInteractionContext_MetaData), Z_Construct_UClass_UAITask_UseGameplayInteraction_Statics::NewProp_GameplayInteractionContext_MetaData) }; // 1720620792
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAITask_UseGameplayInteraction_Statics::NewProp_MoveToTask_MetaData[] = {
		{ "ModuleRelativePath", "Private/AI/AITask_UseGameplayInteraction.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UAITask_UseGameplayInteraction_Statics::NewProp_MoveToTask = { "MoveToTask", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAITask_UseGameplayInteraction, MoveToTask), Z_Construct_UClass_UAITask_MoveTo_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAITask_UseGameplayInteraction_Statics::NewProp_MoveToTask_MetaData), Z_Construct_UClass_UAITask_UseGameplayInteraction_Statics::NewProp_MoveToTask_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAITask_UseGameplayInteraction_Statics::NewProp_ClaimedHandle_MetaData[] = {
		{ "ModuleRelativePath", "Private/AI/AITask_UseGameplayInteraction.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAITask_UseGameplayInteraction_Statics::NewProp_ClaimedHandle = { "ClaimedHandle", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAITask_UseGameplayInteraction, ClaimedHandle), Z_Construct_UScriptStruct_FSmartObjectClaimHandle, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAITask_UseGameplayInteraction_Statics::NewProp_ClaimedHandle_MetaData), Z_Construct_UClass_UAITask_UseGameplayInteraction_Statics::NewProp_ClaimedHandle_MetaData) }; // 2747113422
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAITask_UseGameplayInteraction_Statics::NewProp_AbortContext_MetaData[] = {
		{ "ModuleRelativePath", "Private/AI/AITask_UseGameplayInteraction.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAITask_UseGameplayInteraction_Statics::NewProp_AbortContext = { "AbortContext", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAITask_UseGameplayInteraction, AbortContext), Z_Construct_UScriptStruct_FGameplayInteractionAbortContext, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAITask_UseGameplayInteraction_Statics::NewProp_AbortContext_MetaData), Z_Construct_UClass_UAITask_UseGameplayInteraction_Statics::NewProp_AbortContext_MetaData) }; // 3272225570
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAITask_UseGameplayInteraction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAITask_UseGameplayInteraction_Statics::NewProp_OnFinished,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAITask_UseGameplayInteraction_Statics::NewProp_OnSucceeded,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAITask_UseGameplayInteraction_Statics::NewProp_OnFailed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAITask_UseGameplayInteraction_Statics::NewProp_OnMoveToFailed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAITask_UseGameplayInteraction_Statics::NewProp_GameplayInteractionContext,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAITask_UseGameplayInteraction_Statics::NewProp_MoveToTask,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAITask_UseGameplayInteraction_Statics::NewProp_ClaimedHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAITask_UseGameplayInteraction_Statics::NewProp_AbortContext,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAITask_UseGameplayInteraction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAITask_UseGameplayInteraction>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAITask_UseGameplayInteraction_Statics::ClassParams = {
		&UAITask_UseGameplayInteraction::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAITask_UseGameplayInteraction_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAITask_UseGameplayInteraction_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAITask_UseGameplayInteraction_Statics::Class_MetaDataParams), Z_Construct_UClass_UAITask_UseGameplayInteraction_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAITask_UseGameplayInteraction_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UAITask_UseGameplayInteraction()
	{
		if (!Z_Registration_Info_UClass_UAITask_UseGameplayInteraction.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAITask_UseGameplayInteraction.OuterSingleton, Z_Construct_UClass_UAITask_UseGameplayInteraction_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAITask_UseGameplayInteraction.OuterSingleton;
	}
	template<> GAMEPLAYINTERACTIONSMODULE_API UClass* StaticClass<UAITask_UseGameplayInteraction>()
	{
		return UAITask_UseGameplayInteraction::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAITask_UseGameplayInteraction);
	UAITask_UseGameplayInteraction::~UAITask_UseGameplayInteraction() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayInteractions_Source_GameplayInteractionsModule_Private_AI_AITask_UseGameplayInteraction_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayInteractions_Source_GameplayInteractionsModule_Private_AI_AITask_UseGameplayInteraction_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAITask_UseGameplayInteraction, UAITask_UseGameplayInteraction::StaticClass, TEXT("UAITask_UseGameplayInteraction"), &Z_Registration_Info_UClass_UAITask_UseGameplayInteraction, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAITask_UseGameplayInteraction), 1987589522U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayInteractions_Source_GameplayInteractionsModule_Private_AI_AITask_UseGameplayInteraction_h_4144950646(TEXT("/Script/GameplayInteractionsModule"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayInteractions_Source_GameplayInteractionsModule_Private_AI_AITask_UseGameplayInteraction_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayInteractions_Source_GameplayInteractionsModule_Private_AI_AITask_UseGameplayInteraction_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
