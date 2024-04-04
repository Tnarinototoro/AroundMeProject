// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AI/AITask_UseGameplayBehaviorSmartObject.h"
#include "SmartObjectRuntime.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAITask_UseGameplayBehaviorSmartObject() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_AAIController_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UAITask();
	AIMODULE_API UClass* Z_Construct_UClass_UAITask_MoveTo_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	GAMEPLAYBEHAVIORSMARTOBJECTSMODULE_API UClass* Z_Construct_UClass_UAITask_UseGameplayBehaviorSmartObject();
	GAMEPLAYBEHAVIORSMARTOBJECTSMODULE_API UClass* Z_Construct_UClass_UAITask_UseGameplayBehaviorSmartObject_NoRegister();
	GAMEPLAYBEHAVIORSMODULE_API UClass* Z_Construct_UClass_UGameplayBehavior_NoRegister();
	GAMEPLAYTASKS_API UFunction* Z_Construct_UDelegateFunction_UGameplayTask_GenericGameplayTaskDelegate__DelegateSignature();
	SMARTOBJECTSMODULE_API UClass* Z_Construct_UClass_USmartObjectComponent_NoRegister();
	SMARTOBJECTSMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FSmartObjectClaimHandle();
	UPackage* Z_Construct_UPackage__Script_GameplayBehaviorSmartObjectsModule();
// End Cross Module References
	DEFINE_FUNCTION(UAITask_UseGameplayBehaviorSmartObject::execUseGameplayBehaviorSmartObject)
	{
		P_GET_OBJECT(AAIController,Z_Param_Controller);
		P_GET_OBJECT(AActor,Z_Param_SmartObjectActor);
		P_GET_OBJECT(USmartObjectComponent,Z_Param_SmartObjectComponent);
		P_GET_UBOOL(Z_Param_bLockAILogic);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAITask_UseGameplayBehaviorSmartObject**)Z_Param__Result=UAITask_UseGameplayBehaviorSmartObject::UseGameplayBehaviorSmartObject(Z_Param_Controller,Z_Param_SmartObjectActor,Z_Param_SmartObjectComponent,Z_Param_bLockAILogic);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAITask_UseGameplayBehaviorSmartObject::execMoveToAndUseSmartObjectWithGameplayBehavior)
	{
		P_GET_OBJECT(AAIController,Z_Param_Controller);
		P_GET_STRUCT(FSmartObjectClaimHandle,Z_Param_ClaimHandle);
		P_GET_UBOOL(Z_Param_bLockAILogic);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAITask_UseGameplayBehaviorSmartObject**)Z_Param__Result=UAITask_UseGameplayBehaviorSmartObject::MoveToAndUseSmartObjectWithGameplayBehavior(Z_Param_Controller,Z_Param_ClaimHandle,Z_Param_bLockAILogic);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAITask_UseGameplayBehaviorSmartObject::execUseSmartObjectWithGameplayBehavior)
	{
		P_GET_OBJECT(AAIController,Z_Param_Controller);
		P_GET_STRUCT(FSmartObjectClaimHandle,Z_Param_ClaimHandle);
		P_GET_UBOOL(Z_Param_bLockAILogic);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAITask_UseGameplayBehaviorSmartObject**)Z_Param__Result=UAITask_UseGameplayBehaviorSmartObject::UseSmartObjectWithGameplayBehavior(Z_Param_Controller,Z_Param_ClaimHandle,Z_Param_bLockAILogic);
		P_NATIVE_END;
	}
	void UAITask_UseGameplayBehaviorSmartObject::StaticRegisterNativesUAITask_UseGameplayBehaviorSmartObject()
	{
		UClass* Class = UAITask_UseGameplayBehaviorSmartObject::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "MoveToAndUseSmartObjectWithGameplayBehavior", &UAITask_UseGameplayBehaviorSmartObject::execMoveToAndUseSmartObjectWithGameplayBehavior },
			{ "UseGameplayBehaviorSmartObject", &UAITask_UseGameplayBehaviorSmartObject::execUseGameplayBehaviorSmartObject },
			{ "UseSmartObjectWithGameplayBehavior", &UAITask_UseGameplayBehaviorSmartObject::execUseSmartObjectWithGameplayBehavior },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAITask_UseGameplayBehaviorSmartObject_MoveToAndUseSmartObjectWithGameplayBehavior_Statics
	{
		struct AITask_UseGameplayBehaviorSmartObject_eventMoveToAndUseSmartObjectWithGameplayBehavior_Parms
		{
			AAIController* Controller;
			FSmartObjectClaimHandle ClaimHandle;
			bool bLockAILogic;
			UAITask_UseGameplayBehaviorSmartObject* ReturnValue;
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAITask_UseGameplayBehaviorSmartObject_MoveToAndUseSmartObjectWithGameplayBehavior_Statics::NewProp_Controller = { "Controller", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AITask_UseGameplayBehaviorSmartObject_eventMoveToAndUseSmartObjectWithGameplayBehavior_Parms, Controller), Z_Construct_UClass_AAIController_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAITask_UseGameplayBehaviorSmartObject_MoveToAndUseSmartObjectWithGameplayBehavior_Statics::NewProp_ClaimHandle = { "ClaimHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AITask_UseGameplayBehaviorSmartObject_eventMoveToAndUseSmartObjectWithGameplayBehavior_Parms, ClaimHandle), Z_Construct_UScriptStruct_FSmartObjectClaimHandle, METADATA_PARAMS(0, nullptr) }; // 2747113422
	void Z_Construct_UFunction_UAITask_UseGameplayBehaviorSmartObject_MoveToAndUseSmartObjectWithGameplayBehavior_Statics::NewProp_bLockAILogic_SetBit(void* Obj)
	{
		((AITask_UseGameplayBehaviorSmartObject_eventMoveToAndUseSmartObjectWithGameplayBehavior_Parms*)Obj)->bLockAILogic = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAITask_UseGameplayBehaviorSmartObject_MoveToAndUseSmartObjectWithGameplayBehavior_Statics::NewProp_bLockAILogic = { "bLockAILogic", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AITask_UseGameplayBehaviorSmartObject_eventMoveToAndUseSmartObjectWithGameplayBehavior_Parms), &Z_Construct_UFunction_UAITask_UseGameplayBehaviorSmartObject_MoveToAndUseSmartObjectWithGameplayBehavior_Statics::NewProp_bLockAILogic_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAITask_UseGameplayBehaviorSmartObject_MoveToAndUseSmartObjectWithGameplayBehavior_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AITask_UseGameplayBehaviorSmartObject_eventMoveToAndUseSmartObjectWithGameplayBehavior_Parms, ReturnValue), Z_Construct_UClass_UAITask_UseGameplayBehaviorSmartObject_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAITask_UseGameplayBehaviorSmartObject_MoveToAndUseSmartObjectWithGameplayBehavior_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAITask_UseGameplayBehaviorSmartObject_MoveToAndUseSmartObjectWithGameplayBehavior_Statics::NewProp_Controller,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAITask_UseGameplayBehaviorSmartObject_MoveToAndUseSmartObjectWithGameplayBehavior_Statics::NewProp_ClaimHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAITask_UseGameplayBehaviorSmartObject_MoveToAndUseSmartObjectWithGameplayBehavior_Statics::NewProp_bLockAILogic,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAITask_UseGameplayBehaviorSmartObject_MoveToAndUseSmartObjectWithGameplayBehavior_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAITask_UseGameplayBehaviorSmartObject_MoveToAndUseSmartObjectWithGameplayBehavior_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "AI|Tasks" },
		{ "Comment", "/**\n\x09 * Helper function to create an AITask that reaches and interacts with the SmartObject slot using the GameplayBehavior definition.\n\x09 * @param Controller The controller that will move to the slot location and for which the attached pawn will take part to the GameplayBehavior.\n\x09 * @param ClaimHandle The handle to an already claimed slot.\n\x09 * @param bLockAILogic Indicates if the task adds UAIResource_Logic to the set of Claimed resources \n\x09 * @return The AITask performing the move to slot location and then executing the GameplayBehavior.\n\x09 */" },
		{ "CPP_Default_bLockAILogic", "true" },
		{ "DefaultToSelf", "Controller" },
		{ "ModuleRelativePath", "Public/AI/AITask_UseGameplayBehaviorSmartObject.h" },
		{ "ToolTip", "Helper function to create an AITask that reaches and interacts with the SmartObject slot using the GameplayBehavior definition.\n@param Controller The controller that will move to the slot location and for which the attached pawn will take part to the GameplayBehavior.\n@param ClaimHandle The handle to an already claimed slot.\n@param bLockAILogic Indicates if the task adds UAIResource_Logic to the set of Claimed resources\n@return The AITask performing the move to slot location and then executing the GameplayBehavior." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAITask_UseGameplayBehaviorSmartObject_MoveToAndUseSmartObjectWithGameplayBehavior_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAITask_UseGameplayBehaviorSmartObject, nullptr, "MoveToAndUseSmartObjectWithGameplayBehavior", nullptr, nullptr, Z_Construct_UFunction_UAITask_UseGameplayBehaviorSmartObject_MoveToAndUseSmartObjectWithGameplayBehavior_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAITask_UseGameplayBehaviorSmartObject_MoveToAndUseSmartObjectWithGameplayBehavior_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAITask_UseGameplayBehaviorSmartObject_MoveToAndUseSmartObjectWithGameplayBehavior_Statics::AITask_UseGameplayBehaviorSmartObject_eventMoveToAndUseSmartObjectWithGameplayBehavior_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAITask_UseGameplayBehaviorSmartObject_MoveToAndUseSmartObjectWithGameplayBehavior_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAITask_UseGameplayBehaviorSmartObject_MoveToAndUseSmartObjectWithGameplayBehavior_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAITask_UseGameplayBehaviorSmartObject_MoveToAndUseSmartObjectWithGameplayBehavior_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAITask_UseGameplayBehaviorSmartObject_MoveToAndUseSmartObjectWithGameplayBehavior_Statics::AITask_UseGameplayBehaviorSmartObject_eventMoveToAndUseSmartObjectWithGameplayBehavior_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAITask_UseGameplayBehaviorSmartObject_MoveToAndUseSmartObjectWithGameplayBehavior()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAITask_UseGameplayBehaviorSmartObject_MoveToAndUseSmartObjectWithGameplayBehavior_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAITask_UseGameplayBehaviorSmartObject_UseGameplayBehaviorSmartObject_Statics
	{
		struct AITask_UseGameplayBehaviorSmartObject_eventUseGameplayBehaviorSmartObject_Parms
		{
			AAIController* Controller;
			AActor* SmartObjectActor;
			USmartObjectComponent* SmartObjectComponent;
			bool bLockAILogic;
			UAITask_UseGameplayBehaviorSmartObject* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Controller;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SmartObjectActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SmartObjectComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SmartObjectComponent;
		static void NewProp_bLockAILogic_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLockAILogic;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAITask_UseGameplayBehaviorSmartObject_UseGameplayBehaviorSmartObject_Statics::NewProp_Controller = { "Controller", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AITask_UseGameplayBehaviorSmartObject_eventUseGameplayBehaviorSmartObject_Parms, Controller), Z_Construct_UClass_AAIController_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAITask_UseGameplayBehaviorSmartObject_UseGameplayBehaviorSmartObject_Statics::NewProp_SmartObjectActor = { "SmartObjectActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AITask_UseGameplayBehaviorSmartObject_eventUseGameplayBehaviorSmartObject_Parms, SmartObjectActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAITask_UseGameplayBehaviorSmartObject_UseGameplayBehaviorSmartObject_Statics::NewProp_SmartObjectComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAITask_UseGameplayBehaviorSmartObject_UseGameplayBehaviorSmartObject_Statics::NewProp_SmartObjectComponent = { "SmartObjectComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AITask_UseGameplayBehaviorSmartObject_eventUseGameplayBehaviorSmartObject_Parms, SmartObjectComponent), Z_Construct_UClass_USmartObjectComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAITask_UseGameplayBehaviorSmartObject_UseGameplayBehaviorSmartObject_Statics::NewProp_SmartObjectComponent_MetaData), Z_Construct_UFunction_UAITask_UseGameplayBehaviorSmartObject_UseGameplayBehaviorSmartObject_Statics::NewProp_SmartObjectComponent_MetaData) };
	void Z_Construct_UFunction_UAITask_UseGameplayBehaviorSmartObject_UseGameplayBehaviorSmartObject_Statics::NewProp_bLockAILogic_SetBit(void* Obj)
	{
		((AITask_UseGameplayBehaviorSmartObject_eventUseGameplayBehaviorSmartObject_Parms*)Obj)->bLockAILogic = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAITask_UseGameplayBehaviorSmartObject_UseGameplayBehaviorSmartObject_Statics::NewProp_bLockAILogic = { "bLockAILogic", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AITask_UseGameplayBehaviorSmartObject_eventUseGameplayBehaviorSmartObject_Parms), &Z_Construct_UFunction_UAITask_UseGameplayBehaviorSmartObject_UseGameplayBehaviorSmartObject_Statics::NewProp_bLockAILogic_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAITask_UseGameplayBehaviorSmartObject_UseGameplayBehaviorSmartObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AITask_UseGameplayBehaviorSmartObject_eventUseGameplayBehaviorSmartObject_Parms, ReturnValue), Z_Construct_UClass_UAITask_UseGameplayBehaviorSmartObject_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAITask_UseGameplayBehaviorSmartObject_UseGameplayBehaviorSmartObject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAITask_UseGameplayBehaviorSmartObject_UseGameplayBehaviorSmartObject_Statics::NewProp_Controller,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAITask_UseGameplayBehaviorSmartObject_UseGameplayBehaviorSmartObject_Statics::NewProp_SmartObjectActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAITask_UseGameplayBehaviorSmartObject_UseGameplayBehaviorSmartObject_Statics::NewProp_SmartObjectComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAITask_UseGameplayBehaviorSmartObject_UseGameplayBehaviorSmartObject_Statics::NewProp_bLockAILogic,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAITask_UseGameplayBehaviorSmartObject_UseGameplayBehaviorSmartObject_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAITask_UseGameplayBehaviorSmartObject_UseGameplayBehaviorSmartObject_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "AI|Tasks" },
		{ "CPP_Default_bLockAILogic", "true" },
		{ "DefaultToSelf", "Controller" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Use one of the UseSmartObjectWithGameplayBehavior functions using claim handle instead" },
		{ "ModuleRelativePath", "Public/AI/AITask_UseGameplayBehaviorSmartObject.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAITask_UseGameplayBehaviorSmartObject_UseGameplayBehaviorSmartObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAITask_UseGameplayBehaviorSmartObject, nullptr, "UseGameplayBehaviorSmartObject", nullptr, nullptr, Z_Construct_UFunction_UAITask_UseGameplayBehaviorSmartObject_UseGameplayBehaviorSmartObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAITask_UseGameplayBehaviorSmartObject_UseGameplayBehaviorSmartObject_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAITask_UseGameplayBehaviorSmartObject_UseGameplayBehaviorSmartObject_Statics::AITask_UseGameplayBehaviorSmartObject_eventUseGameplayBehaviorSmartObject_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAITask_UseGameplayBehaviorSmartObject_UseGameplayBehaviorSmartObject_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAITask_UseGameplayBehaviorSmartObject_UseGameplayBehaviorSmartObject_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAITask_UseGameplayBehaviorSmartObject_UseGameplayBehaviorSmartObject_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAITask_UseGameplayBehaviorSmartObject_UseGameplayBehaviorSmartObject_Statics::AITask_UseGameplayBehaviorSmartObject_eventUseGameplayBehaviorSmartObject_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAITask_UseGameplayBehaviorSmartObject_UseGameplayBehaviorSmartObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAITask_UseGameplayBehaviorSmartObject_UseGameplayBehaviorSmartObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAITask_UseGameplayBehaviorSmartObject_UseSmartObjectWithGameplayBehavior_Statics
	{
		struct AITask_UseGameplayBehaviorSmartObject_eventUseSmartObjectWithGameplayBehavior_Parms
		{
			AAIController* Controller;
			FSmartObjectClaimHandle ClaimHandle;
			bool bLockAILogic;
			UAITask_UseGameplayBehaviorSmartObject* ReturnValue;
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAITask_UseGameplayBehaviorSmartObject_UseSmartObjectWithGameplayBehavior_Statics::NewProp_Controller = { "Controller", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AITask_UseGameplayBehaviorSmartObject_eventUseSmartObjectWithGameplayBehavior_Parms, Controller), Z_Construct_UClass_AAIController_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAITask_UseGameplayBehaviorSmartObject_UseSmartObjectWithGameplayBehavior_Statics::NewProp_ClaimHandle = { "ClaimHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AITask_UseGameplayBehaviorSmartObject_eventUseSmartObjectWithGameplayBehavior_Parms, ClaimHandle), Z_Construct_UScriptStruct_FSmartObjectClaimHandle, METADATA_PARAMS(0, nullptr) }; // 2747113422
	void Z_Construct_UFunction_UAITask_UseGameplayBehaviorSmartObject_UseSmartObjectWithGameplayBehavior_Statics::NewProp_bLockAILogic_SetBit(void* Obj)
	{
		((AITask_UseGameplayBehaviorSmartObject_eventUseSmartObjectWithGameplayBehavior_Parms*)Obj)->bLockAILogic = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAITask_UseGameplayBehaviorSmartObject_UseSmartObjectWithGameplayBehavior_Statics::NewProp_bLockAILogic = { "bLockAILogic", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AITask_UseGameplayBehaviorSmartObject_eventUseSmartObjectWithGameplayBehavior_Parms), &Z_Construct_UFunction_UAITask_UseGameplayBehaviorSmartObject_UseSmartObjectWithGameplayBehavior_Statics::NewProp_bLockAILogic_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAITask_UseGameplayBehaviorSmartObject_UseSmartObjectWithGameplayBehavior_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AITask_UseGameplayBehaviorSmartObject_eventUseSmartObjectWithGameplayBehavior_Parms, ReturnValue), Z_Construct_UClass_UAITask_UseGameplayBehaviorSmartObject_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAITask_UseGameplayBehaviorSmartObject_UseSmartObjectWithGameplayBehavior_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAITask_UseGameplayBehaviorSmartObject_UseSmartObjectWithGameplayBehavior_Statics::NewProp_Controller,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAITask_UseGameplayBehaviorSmartObject_UseSmartObjectWithGameplayBehavior_Statics::NewProp_ClaimHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAITask_UseGameplayBehaviorSmartObject_UseSmartObjectWithGameplayBehavior_Statics::NewProp_bLockAILogic,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAITask_UseGameplayBehaviorSmartObject_UseSmartObjectWithGameplayBehavior_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAITask_UseGameplayBehaviorSmartObject_UseSmartObjectWithGameplayBehavior_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "AI|Tasks" },
		{ "Comment", "/**\n\x09 * Helper function to create an AITask that interacts with the SmartObject slot using the GameplayBehavior definition\n\x09 * This version starts the interaction on spot so the actor needs to be at the desired position. \n\x09 * @param Controller The controller for which the attached pawn will take part to the GameplayBehavior.\n\x09 * @param ClaimHandle The handle to an already claimed slot.\n\x09 * @param bLockAILogic Indicates if the task adds UAIResource_Logic to the set of Claimed resources \n\x09 * @return The AITask executing the GameplayBehavior.\n\x09 */" },
		{ "CPP_Default_bLockAILogic", "true" },
		{ "DefaultToSelf", "Controller" },
		{ "ModuleRelativePath", "Public/AI/AITask_UseGameplayBehaviorSmartObject.h" },
		{ "ToolTip", "Helper function to create an AITask that interacts with the SmartObject slot using the GameplayBehavior definition\nThis version starts the interaction on spot so the actor needs to be at the desired position.\n@param Controller The controller for which the attached pawn will take part to the GameplayBehavior.\n@param ClaimHandle The handle to an already claimed slot.\n@param bLockAILogic Indicates if the task adds UAIResource_Logic to the set of Claimed resources\n@return The AITask executing the GameplayBehavior." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAITask_UseGameplayBehaviorSmartObject_UseSmartObjectWithGameplayBehavior_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAITask_UseGameplayBehaviorSmartObject, nullptr, "UseSmartObjectWithGameplayBehavior", nullptr, nullptr, Z_Construct_UFunction_UAITask_UseGameplayBehaviorSmartObject_UseSmartObjectWithGameplayBehavior_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAITask_UseGameplayBehaviorSmartObject_UseSmartObjectWithGameplayBehavior_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAITask_UseGameplayBehaviorSmartObject_UseSmartObjectWithGameplayBehavior_Statics::AITask_UseGameplayBehaviorSmartObject_eventUseSmartObjectWithGameplayBehavior_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAITask_UseGameplayBehaviorSmartObject_UseSmartObjectWithGameplayBehavior_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAITask_UseGameplayBehaviorSmartObject_UseSmartObjectWithGameplayBehavior_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAITask_UseGameplayBehaviorSmartObject_UseSmartObjectWithGameplayBehavior_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAITask_UseGameplayBehaviorSmartObject_UseSmartObjectWithGameplayBehavior_Statics::AITask_UseGameplayBehaviorSmartObject_eventUseSmartObjectWithGameplayBehavior_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAITask_UseGameplayBehaviorSmartObject_UseSmartObjectWithGameplayBehavior()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAITask_UseGameplayBehaviorSmartObject_UseSmartObjectWithGameplayBehavior_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAITask_UseGameplayBehaviorSmartObject);
	UClass* Z_Construct_UClass_UAITask_UseGameplayBehaviorSmartObject_NoRegister()
	{
		return UAITask_UseGameplayBehaviorSmartObject::StaticClass();
	}
	struct Z_Construct_UClass_UAITask_UseGameplayBehaviorSmartObject_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MoveToTask_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_MoveToTask;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GameplayBehavior_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_GameplayBehavior;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAITask_UseGameplayBehaviorSmartObject_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAITask,
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayBehaviorSmartObjectsModule,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAITask_UseGameplayBehaviorSmartObject_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UAITask_UseGameplayBehaviorSmartObject_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAITask_UseGameplayBehaviorSmartObject_MoveToAndUseSmartObjectWithGameplayBehavior, "MoveToAndUseSmartObjectWithGameplayBehavior" }, // 694143503
		{ &Z_Construct_UFunction_UAITask_UseGameplayBehaviorSmartObject_UseGameplayBehaviorSmartObject, "UseGameplayBehaviorSmartObject" }, // 2489538004
		{ &Z_Construct_UFunction_UAITask_UseGameplayBehaviorSmartObject_UseSmartObjectWithGameplayBehavior, "UseSmartObjectWithGameplayBehavior" }, // 1489091899
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAITask_UseGameplayBehaviorSmartObject_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAITask_UseGameplayBehaviorSmartObject_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AI/AITask_UseGameplayBehaviorSmartObject.h" },
		{ "ModuleRelativePath", "Public/AI/AITask_UseGameplayBehaviorSmartObject.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAITask_UseGameplayBehaviorSmartObject_Statics::NewProp_OnSucceeded_MetaData[] = {
		{ "ModuleRelativePath", "Public/AI/AITask_UseGameplayBehaviorSmartObject.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAITask_UseGameplayBehaviorSmartObject_Statics::NewProp_OnSucceeded = { "OnSucceeded", nullptr, (EPropertyFlags)0x0020080010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAITask_UseGameplayBehaviorSmartObject, OnSucceeded), Z_Construct_UDelegateFunction_UGameplayTask_GenericGameplayTaskDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAITask_UseGameplayBehaviorSmartObject_Statics::NewProp_OnSucceeded_MetaData), Z_Construct_UClass_UAITask_UseGameplayBehaviorSmartObject_Statics::NewProp_OnSucceeded_MetaData) }; // 2864144361
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAITask_UseGameplayBehaviorSmartObject_Statics::NewProp_OnFailed_MetaData[] = {
		{ "ModuleRelativePath", "Public/AI/AITask_UseGameplayBehaviorSmartObject.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAITask_UseGameplayBehaviorSmartObject_Statics::NewProp_OnFailed = { "OnFailed", nullptr, (EPropertyFlags)0x0020080010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAITask_UseGameplayBehaviorSmartObject, OnFailed), Z_Construct_UDelegateFunction_UGameplayTask_GenericGameplayTaskDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAITask_UseGameplayBehaviorSmartObject_Statics::NewProp_OnFailed_MetaData), Z_Construct_UClass_UAITask_UseGameplayBehaviorSmartObject_Statics::NewProp_OnFailed_MetaData) }; // 2864144361
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAITask_UseGameplayBehaviorSmartObject_Statics::NewProp_OnMoveToFailed_MetaData[] = {
		{ "ModuleRelativePath", "Public/AI/AITask_UseGameplayBehaviorSmartObject.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAITask_UseGameplayBehaviorSmartObject_Statics::NewProp_OnMoveToFailed = { "OnMoveToFailed", nullptr, (EPropertyFlags)0x0020080010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAITask_UseGameplayBehaviorSmartObject, OnMoveToFailed), Z_Construct_UDelegateFunction_UGameplayTask_GenericGameplayTaskDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAITask_UseGameplayBehaviorSmartObject_Statics::NewProp_OnMoveToFailed_MetaData), Z_Construct_UClass_UAITask_UseGameplayBehaviorSmartObject_Statics::NewProp_OnMoveToFailed_MetaData) }; // 2864144361
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAITask_UseGameplayBehaviorSmartObject_Statics::NewProp_MoveToTask_MetaData[] = {
		{ "ModuleRelativePath", "Public/AI/AITask_UseGameplayBehaviorSmartObject.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UAITask_UseGameplayBehaviorSmartObject_Statics::NewProp_MoveToTask = { "MoveToTask", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAITask_UseGameplayBehaviorSmartObject, MoveToTask), Z_Construct_UClass_UAITask_MoveTo_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAITask_UseGameplayBehaviorSmartObject_Statics::NewProp_MoveToTask_MetaData), Z_Construct_UClass_UAITask_UseGameplayBehaviorSmartObject_Statics::NewProp_MoveToTask_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAITask_UseGameplayBehaviorSmartObject_Statics::NewProp_GameplayBehavior_MetaData[] = {
		{ "ModuleRelativePath", "Public/AI/AITask_UseGameplayBehaviorSmartObject.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UAITask_UseGameplayBehaviorSmartObject_Statics::NewProp_GameplayBehavior = { "GameplayBehavior", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAITask_UseGameplayBehaviorSmartObject, GameplayBehavior), Z_Construct_UClass_UGameplayBehavior_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAITask_UseGameplayBehaviorSmartObject_Statics::NewProp_GameplayBehavior_MetaData), Z_Construct_UClass_UAITask_UseGameplayBehaviorSmartObject_Statics::NewProp_GameplayBehavior_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAITask_UseGameplayBehaviorSmartObject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAITask_UseGameplayBehaviorSmartObject_Statics::NewProp_OnSucceeded,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAITask_UseGameplayBehaviorSmartObject_Statics::NewProp_OnFailed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAITask_UseGameplayBehaviorSmartObject_Statics::NewProp_OnMoveToFailed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAITask_UseGameplayBehaviorSmartObject_Statics::NewProp_MoveToTask,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAITask_UseGameplayBehaviorSmartObject_Statics::NewProp_GameplayBehavior,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAITask_UseGameplayBehaviorSmartObject_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAITask_UseGameplayBehaviorSmartObject>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAITask_UseGameplayBehaviorSmartObject_Statics::ClassParams = {
		&UAITask_UseGameplayBehaviorSmartObject::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAITask_UseGameplayBehaviorSmartObject_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAITask_UseGameplayBehaviorSmartObject_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAITask_UseGameplayBehaviorSmartObject_Statics::Class_MetaDataParams), Z_Construct_UClass_UAITask_UseGameplayBehaviorSmartObject_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAITask_UseGameplayBehaviorSmartObject_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UAITask_UseGameplayBehaviorSmartObject()
	{
		if (!Z_Registration_Info_UClass_UAITask_UseGameplayBehaviorSmartObject.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAITask_UseGameplayBehaviorSmartObject.OuterSingleton, Z_Construct_UClass_UAITask_UseGameplayBehaviorSmartObject_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAITask_UseGameplayBehaviorSmartObject.OuterSingleton;
	}
	template<> GAMEPLAYBEHAVIORSMARTOBJECTSMODULE_API UClass* StaticClass<UAITask_UseGameplayBehaviorSmartObject>()
	{
		return UAITask_UseGameplayBehaviorSmartObject::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAITask_UseGameplayBehaviorSmartObject);
	UAITask_UseGameplayBehaviorSmartObject::~UAITask_UseGameplayBehaviorSmartObject() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayBehaviorSmartObjects_Source_GameplayBehaviorSmartObjectsModule_Public_AI_AITask_UseGameplayBehaviorSmartObject_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayBehaviorSmartObjects_Source_GameplayBehaviorSmartObjectsModule_Public_AI_AITask_UseGameplayBehaviorSmartObject_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAITask_UseGameplayBehaviorSmartObject, UAITask_UseGameplayBehaviorSmartObject::StaticClass, TEXT("UAITask_UseGameplayBehaviorSmartObject"), &Z_Registration_Info_UClass_UAITask_UseGameplayBehaviorSmartObject, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAITask_UseGameplayBehaviorSmartObject), 3856418239U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayBehaviorSmartObjects_Source_GameplayBehaviorSmartObjectsModule_Public_AI_AITask_UseGameplayBehaviorSmartObject_h_4003489810(TEXT("/Script/GameplayBehaviorSmartObjectsModule"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayBehaviorSmartObjects_Source_GameplayBehaviorSmartObjectsModule_Public_AI_AITask_UseGameplayBehaviorSmartObject_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayBehaviorSmartObjects_Source_GameplayBehaviorSmartObjectsModule_Public_AI_AITask_UseGameplayBehaviorSmartObject_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
