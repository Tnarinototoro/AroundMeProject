// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LearningAgentsController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLearningAgentsController() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	LEARNINGAGENTS_API UClass* Z_Construct_UClass_ULearningAgentsController();
	LEARNINGAGENTS_API UClass* Z_Construct_UClass_ULearningAgentsController_NoRegister();
	LEARNINGAGENTS_API UClass* Z_Construct_UClass_ULearningAgentsInteractor_NoRegister();
	LEARNINGAGENTS_API UClass* Z_Construct_UClass_ULearningAgentsManagerComponent();
	UPackage* Z_Construct_UPackage__Script_LearningAgents();
// End Cross Module References
	DEFINE_FUNCTION(ULearningAgentsController::execGetInteractor)
	{
		P_GET_OBJECT(UClass,Z_Param_InteractorClass);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ULearningAgentsInteractor**)Z_Param__Result=P_THIS->GetInteractor(Z_Param_InteractorClass);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULearningAgentsController::execRunController)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RunController();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULearningAgentsController::execEncodeActions)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EncodeActions();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULearningAgentsController::execSetActions)
	{
		P_GET_TARRAY_REF(int32,Z_Param_Out_AgentIds);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetActions_Implementation(Z_Param_Out_AgentIds);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULearningAgentsController::execSetupController)
	{
		P_GET_OBJECT(ULearningAgentsInteractor,Z_Param_InInteractor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetupController(Z_Param_InInteractor);
		P_NATIVE_END;
	}
	struct LearningAgentsController_eventSetActions_Parms
	{
		TArray<int32> AgentIds;
	};
	static FName NAME_ULearningAgentsController_SetActions = FName(TEXT("SetActions"));
	void ULearningAgentsController::SetActions(TArray<int32> const& AgentIds)
	{
		LearningAgentsController_eventSetActions_Parms Parms;
		Parms.AgentIds=AgentIds;
		ProcessEvent(FindFunctionChecked(NAME_ULearningAgentsController_SetActions),&Parms);
	}
	void ULearningAgentsController::StaticRegisterNativesULearningAgentsController()
	{
		UClass* Class = ULearningAgentsController::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "EncodeActions", &ULearningAgentsController::execEncodeActions },
			{ "GetInteractor", &ULearningAgentsController::execGetInteractor },
			{ "RunController", &ULearningAgentsController::execRunController },
			{ "SetActions", &ULearningAgentsController::execSetActions },
			{ "SetupController", &ULearningAgentsController::execSetupController },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULearningAgentsController_EncodeActions_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULearningAgentsController_EncodeActions_Statics::Function_MetaDataParams[] = {
		{ "Category", "LearningAgents" },
		{ "Comment", "/**\n\x09 * Call this function when it is time to gather all the actions for your agents. This should be called roughly \n\x09 * whenever you are calling ULearningAgentsInteractor::EncodeObservations. This will call this controller's SetActions event.\n\x09 */" },
		{ "ModuleRelativePath", "Public/LearningAgentsController.h" },
		{ "ToolTip", "Call this function when it is time to gather all the actions for your agents. This should be called roughly\nwhenever you are calling ULearningAgentsInteractor::EncodeObservations. This will call this controller's SetActions event." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULearningAgentsController_EncodeActions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULearningAgentsController, nullptr, "EncodeActions", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULearningAgentsController_EncodeActions_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULearningAgentsController_EncodeActions_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ULearningAgentsController_EncodeActions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULearningAgentsController_EncodeActions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULearningAgentsController_GetInteractor_Statics
	{
		struct LearningAgentsController_eventGetInteractor_Parms
		{
			const TSubclassOf<ULearningAgentsInteractor>  InteractorClass;
			ULearningAgentsInteractor* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InteractorClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_InteractorClass;
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
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULearningAgentsController_GetInteractor_Statics::NewProp_InteractorClass_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_ULearningAgentsController_GetInteractor_Statics::NewProp_InteractorClass = { "InteractorClass", nullptr, (EPropertyFlags)0x0014000000000082, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LearningAgentsController_eventGetInteractor_Parms, InteractorClass), Z_Construct_UClass_UClass, Z_Construct_UClass_ULearningAgentsInteractor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULearningAgentsController_GetInteractor_Statics::NewProp_InteractorClass_MetaData), Z_Construct_UFunction_ULearningAgentsController_GetInteractor_Statics::NewProp_InteractorClass_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULearningAgentsController_GetInteractor_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULearningAgentsController_GetInteractor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LearningAgentsController_eventGetInteractor_Parms, ReturnValue), Z_Construct_UClass_ULearningAgentsInteractor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULearningAgentsController_GetInteractor_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_ULearningAgentsController_GetInteractor_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULearningAgentsController_GetInteractor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULearningAgentsController_GetInteractor_Statics::NewProp_InteractorClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULearningAgentsController_GetInteractor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULearningAgentsController_GetInteractor_Statics::Function_MetaDataParams[] = {
		{ "Category", "LearningAgents" },
		{ "Comment", "/**\n\x09 * Gets the agent interactor associated with this component.\n\x09 * @param AgentClass The class to cast the agent interactor to (in blueprint).\n\x09 */" },
		{ "DeterminesOutputType", "InteractorClass" },
		{ "ModuleRelativePath", "Public/LearningAgentsController.h" },
		{ "ToolTip", "Gets the agent interactor associated with this component.\n@param AgentClass The class to cast the agent interactor to (in blueprint)." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULearningAgentsController_GetInteractor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULearningAgentsController, nullptr, "GetInteractor", nullptr, nullptr, Z_Construct_UFunction_ULearningAgentsController_GetInteractor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULearningAgentsController_GetInteractor_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULearningAgentsController_GetInteractor_Statics::LearningAgentsController_eventGetInteractor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULearningAgentsController_GetInteractor_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULearningAgentsController_GetInteractor_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULearningAgentsController_GetInteractor_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULearningAgentsController_GetInteractor_Statics::LearningAgentsController_eventGetInteractor_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULearningAgentsController_GetInteractor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULearningAgentsController_GetInteractor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULearningAgentsController_RunController_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULearningAgentsController_RunController_Statics::Function_MetaDataParams[] = {
		{ "Category", "LearningAgents" },
		{ "Comment", "/**\n\x09 * Calls EncodeObservations, followed by EncodeActions, followed by DecodeActions\n\x09 */" },
		{ "ModuleRelativePath", "Public/LearningAgentsController.h" },
		{ "ToolTip", "Calls EncodeObservations, followed by EncodeActions, followed by DecodeActions" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULearningAgentsController_RunController_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULearningAgentsController, nullptr, "RunController", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULearningAgentsController_RunController_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULearningAgentsController_RunController_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ULearningAgentsController_RunController()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULearningAgentsController_RunController_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULearningAgentsController_SetActions_Statics
	{
		static const UECodeGen_Private::FIntPropertyParams NewProp_AgentIds_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AgentIds_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AgentIds;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULearningAgentsController_SetActions_Statics::NewProp_AgentIds_Inner = { "AgentIds", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULearningAgentsController_SetActions_Statics::NewProp_AgentIds_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULearningAgentsController_SetActions_Statics::NewProp_AgentIds = { "AgentIds", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LearningAgentsController_eventSetActions_Parms, AgentIds), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULearningAgentsController_SetActions_Statics::NewProp_AgentIds_MetaData), Z_Construct_UFunction_ULearningAgentsController_SetActions_Statics::NewProp_AgentIds_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULearningAgentsController_SetActions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULearningAgentsController_SetActions_Statics::NewProp_AgentIds_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULearningAgentsController_SetActions_Statics::NewProp_AgentIds,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULearningAgentsController_SetActions_Statics::Function_MetaDataParams[] = {
		{ "Category", "LearningAgents" },
		{ "Comment", "/**\n\x09 * During this event, you should set the actions of your agents.\n\x09 * @param AgentIds The list of agent ids to set actions for.\n\x09 * @see LearningAgentsActions.h for the list of available actions.\n\x09 * @see ULearningAgentsInteractor::GetAgent to get the agent corresponding to each id.\n\x09 */" },
		{ "ModuleRelativePath", "Public/LearningAgentsController.h" },
		{ "ToolTip", "During this event, you should set the actions of your agents.\n@param AgentIds The list of agent ids to set actions for.\n@see LearningAgentsActions.h for the list of available actions.\n@see ULearningAgentsInteractor::GetAgent to get the agent corresponding to each id." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULearningAgentsController_SetActions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULearningAgentsController, nullptr, "SetActions", nullptr, nullptr, Z_Construct_UFunction_ULearningAgentsController_SetActions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULearningAgentsController_SetActions_Statics::PropPointers), sizeof(LearningAgentsController_eventSetActions_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULearningAgentsController_SetActions_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULearningAgentsController_SetActions_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULearningAgentsController_SetActions_Statics::PropPointers) < 2048);
	static_assert(sizeof(LearningAgentsController_eventSetActions_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULearningAgentsController_SetActions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULearningAgentsController_SetActions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULearningAgentsController_SetupController_Statics
	{
		struct LearningAgentsController_eventSetupController_Parms
		{
			ULearningAgentsInteractor* InInteractor;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InInteractor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InInteractor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULearningAgentsController_SetupController_Statics::NewProp_InInteractor_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULearningAgentsController_SetupController_Statics::NewProp_InInteractor = { "InInteractor", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LearningAgentsController_eventSetupController_Parms, InInteractor), Z_Construct_UClass_ULearningAgentsInteractor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULearningAgentsController_SetupController_Statics::NewProp_InInteractor_MetaData), Z_Construct_UFunction_ULearningAgentsController_SetupController_Statics::NewProp_InInteractor_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULearningAgentsController_SetupController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULearningAgentsController_SetupController_Statics::NewProp_InInteractor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULearningAgentsController_SetupController_Statics::Function_MetaDataParams[] = {
		{ "Category", "LearningAgents" },
		{ "Comment", "/** Initializes this object to be used with the given agent interactor. */" },
		{ "ModuleRelativePath", "Public/LearningAgentsController.h" },
		{ "ToolTip", "Initializes this object to be used with the given agent interactor." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULearningAgentsController_SetupController_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULearningAgentsController, nullptr, "SetupController", nullptr, nullptr, Z_Construct_UFunction_ULearningAgentsController_SetupController_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULearningAgentsController_SetupController_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULearningAgentsController_SetupController_Statics::LearningAgentsController_eventSetupController_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULearningAgentsController_SetupController_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULearningAgentsController_SetupController_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULearningAgentsController_SetupController_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULearningAgentsController_SetupController_Statics::LearningAgentsController_eventSetupController_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULearningAgentsController_SetupController()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULearningAgentsController_SetupController_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULearningAgentsController);
	UClass* Z_Construct_UClass_ULearningAgentsController_NoRegister()
	{
		return ULearningAgentsController::StaticClass();
	}
	struct Z_Construct_UClass_ULearningAgentsController_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Interactor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Interactor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULearningAgentsController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ULearningAgentsManagerComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_LearningAgents,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULearningAgentsController_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_ULearningAgentsController_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULearningAgentsController_EncodeActions, "EncodeActions" }, // 338783672
		{ &Z_Construct_UFunction_ULearningAgentsController_GetInteractor, "GetInteractor" }, // 567107818
		{ &Z_Construct_UFunction_ULearningAgentsController_RunController, "RunController" }, // 3536026126
		{ &Z_Construct_UFunction_ULearningAgentsController_SetActions, "SetActions" }, // 91888442
		{ &Z_Construct_UFunction_ULearningAgentsController_SetupController, "SetupController" }, // 2101562115
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULearningAgentsController_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULearningAgentsController_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * A controller provides a method for injecting actions into the learning agents system from some other existing\n * behavior, e.g. we may want to gather demonstrations from a human or AI behavior tree controlling our agent(s)\n * for imitation learning purposes.\n */" },
		{ "IncludePath", "LearningAgentsController.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/LearningAgentsController.h" },
		{ "ToolTip", "A controller provides a method for injecting actions into the learning agents system from some other existing\nbehavior, e.g. we may want to gather demonstrations from a human or AI behavior tree controlling our agent(s)\nfor imitation learning purposes." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULearningAgentsController_Statics::NewProp_Interactor_MetaData[] = {
		{ "Category", "LearningAgents" },
		{ "Comment", "/** The agent interactor this controller is associated with. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LearningAgentsController.h" },
		{ "ToolTip", "The agent interactor this controller is associated with." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ULearningAgentsController_Statics::NewProp_Interactor = { "Interactor", nullptr, (EPropertyFlags)0x00440000000a2009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULearningAgentsController, Interactor), Z_Construct_UClass_ULearningAgentsInteractor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULearningAgentsController_Statics::NewProp_Interactor_MetaData), Z_Construct_UClass_ULearningAgentsController_Statics::NewProp_Interactor_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULearningAgentsController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULearningAgentsController_Statics::NewProp_Interactor,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULearningAgentsController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULearningAgentsController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULearningAgentsController_Statics::ClassParams = {
		&ULearningAgentsController::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ULearningAgentsController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ULearningAgentsController_Statics::PropPointers),
		0,
		0x00B000A5u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULearningAgentsController_Statics::Class_MetaDataParams), Z_Construct_UClass_ULearningAgentsController_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULearningAgentsController_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ULearningAgentsController()
	{
		if (!Z_Registration_Info_UClass_ULearningAgentsController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULearningAgentsController.OuterSingleton, Z_Construct_UClass_ULearningAgentsController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULearningAgentsController.OuterSingleton;
	}
	template<> LEARNINGAGENTS_API UClass* StaticClass<ULearningAgentsController>()
	{
		return ULearningAgentsController::StaticClass();
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULearningAgentsController, ULearningAgentsController::StaticClass, TEXT("ULearningAgentsController"), &Z_Registration_Info_UClass_ULearningAgentsController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULearningAgentsController), 2630395479U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsController_h_763692355(TEXT("/Script/LearningAgents"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
