// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LearningAgentsInteractor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLearningAgentsInteractor() {}
// Cross Module References
	LEARNINGAGENTS_API UClass* Z_Construct_UClass_ULearningAgentsAction_NoRegister();
	LEARNINGAGENTS_API UClass* Z_Construct_UClass_ULearningAgentsInteractor();
	LEARNINGAGENTS_API UClass* Z_Construct_UClass_ULearningAgentsInteractor_NoRegister();
	LEARNINGAGENTS_API UClass* Z_Construct_UClass_ULearningAgentsManagerComponent();
	LEARNINGAGENTS_API UClass* Z_Construct_UClass_ULearningAgentsObservation_NoRegister();
	UPackage* Z_Construct_UPackage__Script_LearningAgents();
// End Cross Module References
	DEFINE_FUNCTION(ULearningAgentsInteractor::execGetActionVector)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_AgentId);
		P_GET_TARRAY_REF(float,Z_Param_Out_OutActionVector);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetActionVector(Z_Param_AgentId,Z_Param_Out_OutActionVector);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULearningAgentsInteractor::execGetObservationVector)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_AgentId);
		P_GET_TARRAY_REF(float,Z_Param_Out_OutObservationVector);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetObservationVector(Z_Param_AgentId,Z_Param_Out_OutObservationVector);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULearningAgentsInteractor::execDecodeActions)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DecodeActions();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULearningAgentsInteractor::execEncodeObservations)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EncodeObservations();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULearningAgentsInteractor::execGetActions)
	{
		P_GET_TARRAY_REF(int32,Z_Param_Out_AgentIds);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetActions_Implementation(Z_Param_Out_AgentIds);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULearningAgentsInteractor::execSetupActions)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetupActions_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULearningAgentsInteractor::execSetObservations)
	{
		P_GET_TARRAY_REF(int32,Z_Param_Out_AgentIds);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetObservations_Implementation(Z_Param_Out_AgentIds);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULearningAgentsInteractor::execSetupObservations)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetupObservations_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULearningAgentsInteractor::execSetupInteractor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetupInteractor();
		P_NATIVE_END;
	}
	struct LearningAgentsInteractor_eventGetActions_Parms
	{
		TArray<int32> AgentIds;
	};
	struct LearningAgentsInteractor_eventSetObservations_Parms
	{
		TArray<int32> AgentIds;
	};
	static FName NAME_ULearningAgentsInteractor_GetActions = FName(TEXT("GetActions"));
	void ULearningAgentsInteractor::GetActions(TArray<int32> const& AgentIds)
	{
		LearningAgentsInteractor_eventGetActions_Parms Parms;
		Parms.AgentIds=AgentIds;
		ProcessEvent(FindFunctionChecked(NAME_ULearningAgentsInteractor_GetActions),&Parms);
	}
	static FName NAME_ULearningAgentsInteractor_SetObservations = FName(TEXT("SetObservations"));
	void ULearningAgentsInteractor::SetObservations(TArray<int32> const& AgentIds)
	{
		LearningAgentsInteractor_eventSetObservations_Parms Parms;
		Parms.AgentIds=AgentIds;
		ProcessEvent(FindFunctionChecked(NAME_ULearningAgentsInteractor_SetObservations),&Parms);
	}
	static FName NAME_ULearningAgentsInteractor_SetupActions = FName(TEXT("SetupActions"));
	void ULearningAgentsInteractor::SetupActions()
	{
		ProcessEvent(FindFunctionChecked(NAME_ULearningAgentsInteractor_SetupActions),NULL);
	}
	static FName NAME_ULearningAgentsInteractor_SetupObservations = FName(TEXT("SetupObservations"));
	void ULearningAgentsInteractor::SetupObservations()
	{
		ProcessEvent(FindFunctionChecked(NAME_ULearningAgentsInteractor_SetupObservations),NULL);
	}
	void ULearningAgentsInteractor::StaticRegisterNativesULearningAgentsInteractor()
	{
		UClass* Class = ULearningAgentsInteractor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DecodeActions", &ULearningAgentsInteractor::execDecodeActions },
			{ "EncodeObservations", &ULearningAgentsInteractor::execEncodeObservations },
			{ "GetActions", &ULearningAgentsInteractor::execGetActions },
			{ "GetActionVector", &ULearningAgentsInteractor::execGetActionVector },
			{ "GetObservationVector", &ULearningAgentsInteractor::execGetObservationVector },
			{ "SetObservations", &ULearningAgentsInteractor::execSetObservations },
			{ "SetupActions", &ULearningAgentsInteractor::execSetupActions },
			{ "SetupInteractor", &ULearningAgentsInteractor::execSetupInteractor },
			{ "SetupObservations", &ULearningAgentsInteractor::execSetupObservations },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULearningAgentsInteractor_DecodeActions_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULearningAgentsInteractor_DecodeActions_Statics::Function_MetaDataParams[] = {
		{ "Category", "LearningAgents" },
		{ "Comment", "/**\n\x09 * Call this function when it is time for your agents to take their actions. You most likely want to call this after\n\x09 * your policy's EvaluatePolicy function to ensure that you are receiving the latest actions. This will call this\n\x09 * agent interactor's GetActions event.\n\x09 */" },
		{ "ModuleRelativePath", "Public/LearningAgentsInteractor.h" },
		{ "ToolTip", "Call this function when it is time for your agents to take their actions. You most likely want to call this after\nyour policy's EvaluatePolicy function to ensure that you are receiving the latest actions. This will call this\nagent interactor's GetActions event." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULearningAgentsInteractor_DecodeActions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULearningAgentsInteractor, nullptr, "DecodeActions", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULearningAgentsInteractor_DecodeActions_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULearningAgentsInteractor_DecodeActions_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ULearningAgentsInteractor_DecodeActions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULearningAgentsInteractor_DecodeActions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULearningAgentsInteractor_EncodeObservations_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULearningAgentsInteractor_EncodeObservations_Statics::Function_MetaDataParams[] = {
		{ "Category", "LearningAgents" },
		{ "Comment", "/**\n\x09 * Call this function when it is time to gather all the observations for your agents. This can be done each frame or\n\x09 * you can consider wiring it up to some kind of meaningful event, e.g. a hypothetical \"OnAITurnStarted\" if you have\n\x09 * a turn-based game. This will call this agent interactor's SetObservations event.\n\x09 */" },
		{ "ModuleRelativePath", "Public/LearningAgentsInteractor.h" },
		{ "ToolTip", "Call this function when it is time to gather all the observations for your agents. This can be done each frame or\nyou can consider wiring it up to some kind of meaningful event, e.g. a hypothetical \"OnAITurnStarted\" if you have\na turn-based game. This will call this agent interactor's SetObservations event." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULearningAgentsInteractor_EncodeObservations_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULearningAgentsInteractor, nullptr, "EncodeObservations", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULearningAgentsInteractor_EncodeObservations_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULearningAgentsInteractor_EncodeObservations_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ULearningAgentsInteractor_EncodeObservations()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULearningAgentsInteractor_EncodeObservations_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULearningAgentsInteractor_GetActions_Statics
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
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULearningAgentsInteractor_GetActions_Statics::NewProp_AgentIds_Inner = { "AgentIds", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULearningAgentsInteractor_GetActions_Statics::NewProp_AgentIds_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULearningAgentsInteractor_GetActions_Statics::NewProp_AgentIds = { "AgentIds", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LearningAgentsInteractor_eventGetActions_Parms, AgentIds), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULearningAgentsInteractor_GetActions_Statics::NewProp_AgentIds_MetaData), Z_Construct_UFunction_ULearningAgentsInteractor_GetActions_Statics::NewProp_AgentIds_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULearningAgentsInteractor_GetActions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULearningAgentsInteractor_GetActions_Statics::NewProp_AgentIds_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULearningAgentsInteractor_GetActions_Statics::NewProp_AgentIds,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULearningAgentsInteractor_GetActions_Statics::Function_MetaDataParams[] = {
		{ "Category", "LearningAgents" },
		{ "Comment", "/**\n\x09 * During this event, you should retrieve the actions and apply them to your agents.\n\x09 * @param AgentIds The list of agent ids to get actions for.\n\x09 * @see LearningAgentsActions.h for the list of available actions.\n\x09 * @see GetAgent to get the agent corresponding to each id.\n\x09 */" },
		{ "ModuleRelativePath", "Public/LearningAgentsInteractor.h" },
		{ "ToolTip", "During this event, you should retrieve the actions and apply them to your agents.\n@param AgentIds The list of agent ids to get actions for.\n@see LearningAgentsActions.h for the list of available actions.\n@see GetAgent to get the agent corresponding to each id." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULearningAgentsInteractor_GetActions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULearningAgentsInteractor, nullptr, "GetActions", nullptr, nullptr, Z_Construct_UFunction_ULearningAgentsInteractor_GetActions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULearningAgentsInteractor_GetActions_Statics::PropPointers), sizeof(LearningAgentsInteractor_eventGetActions_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULearningAgentsInteractor_GetActions_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULearningAgentsInteractor_GetActions_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULearningAgentsInteractor_GetActions_Statics::PropPointers) < 2048);
	static_assert(sizeof(LearningAgentsInteractor_eventGetActions_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULearningAgentsInteractor_GetActions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULearningAgentsInteractor_GetActions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULearningAgentsInteractor_GetActionVector_Statics
	{
		struct LearningAgentsInteractor_eventGetActionVector_Parms
		{
			int32 AgentId;
			TArray<float> OutActionVector;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AgentId_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_AgentId;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OutActionVector_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutActionVector;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULearningAgentsInteractor_GetActionVector_Statics::NewProp_AgentId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULearningAgentsInteractor_GetActionVector_Statics::NewProp_AgentId = { "AgentId", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LearningAgentsInteractor_eventGetActionVector_Parms, AgentId), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULearningAgentsInteractor_GetActionVector_Statics::NewProp_AgentId_MetaData), Z_Construct_UFunction_ULearningAgentsInteractor_GetActionVector_Statics::NewProp_AgentId_MetaData) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULearningAgentsInteractor_GetActionVector_Statics::NewProp_OutActionVector_Inner = { "OutActionVector", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULearningAgentsInteractor_GetActionVector_Statics::NewProp_OutActionVector = { "OutActionVector", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LearningAgentsInteractor_eventGetActionVector_Parms, OutActionVector), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULearningAgentsInteractor_GetActionVector_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULearningAgentsInteractor_GetActionVector_Statics::NewProp_AgentId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULearningAgentsInteractor_GetActionVector_Statics::NewProp_OutActionVector_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULearningAgentsInteractor_GetActionVector_Statics::NewProp_OutActionVector,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULearningAgentsInteractor_GetActionVector_Statics::Function_MetaDataParams[] = {
		{ "AgentId", "-1" },
		{ "Category", "LearningAgents" },
		{ "Comment", "/**\n\x09 * Gets the action vector used by a given agent. Should be called only after EncodeActions or EvaluatePolicy.\n\x09 *\n\x09 * @param AgentId\x09\x09\x09\x09The AgentId to look-up the action vector for\n\x09 * @param OutActionVector\x09\x09The action vector for the given agent\n\x09 */" },
		{ "ModuleRelativePath", "Public/LearningAgentsInteractor.h" },
		{ "ToolTip", "Gets the action vector used by a given agent. Should be called only after EncodeActions or EvaluatePolicy.\n\n@param AgentId                               The AgentId to look-up the action vector for\n@param OutActionVector               The action vector for the given agent" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULearningAgentsInteractor_GetActionVector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULearningAgentsInteractor, nullptr, "GetActionVector", nullptr, nullptr, Z_Construct_UFunction_ULearningAgentsInteractor_GetActionVector_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULearningAgentsInteractor_GetActionVector_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULearningAgentsInteractor_GetActionVector_Statics::LearningAgentsInteractor_eventGetActionVector_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULearningAgentsInteractor_GetActionVector_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULearningAgentsInteractor_GetActionVector_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULearningAgentsInteractor_GetActionVector_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULearningAgentsInteractor_GetActionVector_Statics::LearningAgentsInteractor_eventGetActionVector_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULearningAgentsInteractor_GetActionVector()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULearningAgentsInteractor_GetActionVector_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULearningAgentsInteractor_GetObservationVector_Statics
	{
		struct LearningAgentsInteractor_eventGetObservationVector_Parms
		{
			int32 AgentId;
			TArray<float> OutObservationVector;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AgentId_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_AgentId;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OutObservationVector_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutObservationVector;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULearningAgentsInteractor_GetObservationVector_Statics::NewProp_AgentId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULearningAgentsInteractor_GetObservationVector_Statics::NewProp_AgentId = { "AgentId", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LearningAgentsInteractor_eventGetObservationVector_Parms, AgentId), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULearningAgentsInteractor_GetObservationVector_Statics::NewProp_AgentId_MetaData), Z_Construct_UFunction_ULearningAgentsInteractor_GetObservationVector_Statics::NewProp_AgentId_MetaData) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULearningAgentsInteractor_GetObservationVector_Statics::NewProp_OutObservationVector_Inner = { "OutObservationVector", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULearningAgentsInteractor_GetObservationVector_Statics::NewProp_OutObservationVector = { "OutObservationVector", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LearningAgentsInteractor_eventGetObservationVector_Parms, OutObservationVector), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULearningAgentsInteractor_GetObservationVector_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULearningAgentsInteractor_GetObservationVector_Statics::NewProp_AgentId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULearningAgentsInteractor_GetObservationVector_Statics::NewProp_OutObservationVector_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULearningAgentsInteractor_GetObservationVector_Statics::NewProp_OutObservationVector,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULearningAgentsInteractor_GetObservationVector_Statics::Function_MetaDataParams[] = {
		{ "AgentId", "-1" },
		{ "Category", "LearningAgents" },
		{ "Comment", "/**\n\x09 * Gets the observation vector used by a given agent. Should be called only after EncodeObservations.\n\x09 *\n\x09 * @param AgentId\x09\x09\x09\x09The AgentId to look-up the observation vector for\n\x09 * @param OutObservationVector\x09The observation vector for the given agent\n\x09 */" },
		{ "ModuleRelativePath", "Public/LearningAgentsInteractor.h" },
		{ "ToolTip", "Gets the observation vector used by a given agent. Should be called only after EncodeObservations.\n\n@param AgentId                               The AgentId to look-up the observation vector for\n@param OutObservationVector  The observation vector for the given agent" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULearningAgentsInteractor_GetObservationVector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULearningAgentsInteractor, nullptr, "GetObservationVector", nullptr, nullptr, Z_Construct_UFunction_ULearningAgentsInteractor_GetObservationVector_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULearningAgentsInteractor_GetObservationVector_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULearningAgentsInteractor_GetObservationVector_Statics::LearningAgentsInteractor_eventGetObservationVector_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULearningAgentsInteractor_GetObservationVector_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULearningAgentsInteractor_GetObservationVector_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULearningAgentsInteractor_GetObservationVector_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULearningAgentsInteractor_GetObservationVector_Statics::LearningAgentsInteractor_eventGetObservationVector_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULearningAgentsInteractor_GetObservationVector()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULearningAgentsInteractor_GetObservationVector_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULearningAgentsInteractor_SetObservations_Statics
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
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULearningAgentsInteractor_SetObservations_Statics::NewProp_AgentIds_Inner = { "AgentIds", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULearningAgentsInteractor_SetObservations_Statics::NewProp_AgentIds_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULearningAgentsInteractor_SetObservations_Statics::NewProp_AgentIds = { "AgentIds", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LearningAgentsInteractor_eventSetObservations_Parms, AgentIds), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULearningAgentsInteractor_SetObservations_Statics::NewProp_AgentIds_MetaData), Z_Construct_UFunction_ULearningAgentsInteractor_SetObservations_Statics::NewProp_AgentIds_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULearningAgentsInteractor_SetObservations_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULearningAgentsInteractor_SetObservations_Statics::NewProp_AgentIds_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULearningAgentsInteractor_SetObservations_Statics::NewProp_AgentIds,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULearningAgentsInteractor_SetObservations_Statics::Function_MetaDataParams[] = {
		{ "Category", "LearningAgents" },
		{ "Comment", "/**\n\x09 * During this event, all observations should be set for each agent.\n\x09 * @param AgentIds The list of agent ids to set observations for.\n\x09 * @see LearningAgentsObservations.h for the list of available observations.\n\x09 * @see GetAgent to get the agent corresponding to each id.\n\x09 */" },
		{ "ModuleRelativePath", "Public/LearningAgentsInteractor.h" },
		{ "ToolTip", "During this event, all observations should be set for each agent.\n@param AgentIds The list of agent ids to set observations for.\n@see LearningAgentsObservations.h for the list of available observations.\n@see GetAgent to get the agent corresponding to each id." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULearningAgentsInteractor_SetObservations_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULearningAgentsInteractor, nullptr, "SetObservations", nullptr, nullptr, Z_Construct_UFunction_ULearningAgentsInteractor_SetObservations_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULearningAgentsInteractor_SetObservations_Statics::PropPointers), sizeof(LearningAgentsInteractor_eventSetObservations_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULearningAgentsInteractor_SetObservations_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULearningAgentsInteractor_SetObservations_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULearningAgentsInteractor_SetObservations_Statics::PropPointers) < 2048);
	static_assert(sizeof(LearningAgentsInteractor_eventSetObservations_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULearningAgentsInteractor_SetObservations()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULearningAgentsInteractor_SetObservations_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULearningAgentsInteractor_SetupActions_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULearningAgentsInteractor_SetupActions_Statics::Function_MetaDataParams[] = {
		{ "Category", "LearningAgents" },
		{ "Comment", "/**\n\x09 * During this event, all actions should be added to this agent interactor.\n\x09 * @see LearningAgentsActions.h for the list of available actions.\n\x09 */" },
		{ "ModuleRelativePath", "Public/LearningAgentsInteractor.h" },
		{ "ToolTip", "During this event, all actions should be added to this agent interactor.\n@see LearningAgentsActions.h for the list of available actions." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULearningAgentsInteractor_SetupActions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULearningAgentsInteractor, nullptr, "SetupActions", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULearningAgentsInteractor_SetupActions_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULearningAgentsInteractor_SetupActions_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ULearningAgentsInteractor_SetupActions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULearningAgentsInteractor_SetupActions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULearningAgentsInteractor_SetupInteractor_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULearningAgentsInteractor_SetupInteractor_Statics::Function_MetaDataParams[] = {
		{ "Category", "LearningAgents" },
		{ "Comment", "/** Initializes this object and runs the setup events for observations and actions. */" },
		{ "ModuleRelativePath", "Public/LearningAgentsInteractor.h" },
		{ "ToolTip", "Initializes this object and runs the setup events for observations and actions." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULearningAgentsInteractor_SetupInteractor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULearningAgentsInteractor, nullptr, "SetupInteractor", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULearningAgentsInteractor_SetupInteractor_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULearningAgentsInteractor_SetupInteractor_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ULearningAgentsInteractor_SetupInteractor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULearningAgentsInteractor_SetupInteractor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULearningAgentsInteractor_SetupObservations_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULearningAgentsInteractor_SetupObservations_Statics::Function_MetaDataParams[] = {
		{ "Category", "LearningAgents" },
		{ "Comment", "/**\n\x09 * During this event, all observations should be added to this agent interactor.\n\x09 * @see LearningAgentsObservations.h for the list of available observations.\n\x09 */" },
		{ "ModuleRelativePath", "Public/LearningAgentsInteractor.h" },
		{ "ToolTip", "During this event, all observations should be added to this agent interactor.\n@see LearningAgentsObservations.h for the list of available observations." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULearningAgentsInteractor_SetupObservations_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULearningAgentsInteractor, nullptr, "SetupObservations", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULearningAgentsInteractor_SetupObservations_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULearningAgentsInteractor_SetupObservations_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ULearningAgentsInteractor_SetupObservations()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULearningAgentsInteractor_SetupObservations_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULearningAgentsInteractor);
	UClass* Z_Construct_UClass_ULearningAgentsInteractor_NoRegister()
	{
		return ULearningAgentsInteractor::StaticClass();
	}
	struct Z_Construct_UClass_ULearningAgentsInteractor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ObservationObjects_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ObservationObjects_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ObservationObjects;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ActionObjects_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActionObjects_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ActionObjects;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULearningAgentsInteractor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ULearningAgentsManagerComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_LearningAgents,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULearningAgentsInteractor_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_ULearningAgentsInteractor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULearningAgentsInteractor_DecodeActions, "DecodeActions" }, // 1167403002
		{ &Z_Construct_UFunction_ULearningAgentsInteractor_EncodeObservations, "EncodeObservations" }, // 2528139727
		{ &Z_Construct_UFunction_ULearningAgentsInteractor_GetActions, "GetActions" }, // 4092585630
		{ &Z_Construct_UFunction_ULearningAgentsInteractor_GetActionVector, "GetActionVector" }, // 322582272
		{ &Z_Construct_UFunction_ULearningAgentsInteractor_GetObservationVector, "GetObservationVector" }, // 1855687161
		{ &Z_Construct_UFunction_ULearningAgentsInteractor_SetObservations, "SetObservations" }, // 3620978923
		{ &Z_Construct_UFunction_ULearningAgentsInteractor_SetupActions, "SetupActions" }, // 785703211
		{ &Z_Construct_UFunction_ULearningAgentsInteractor_SetupInteractor, "SetupInteractor" }, // 244899680
		{ &Z_Construct_UFunction_ULearningAgentsInteractor_SetupObservations, "SetupObservations" }, // 2810373328
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULearningAgentsInteractor_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULearningAgentsInteractor_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * ULearningAgentsInteractor defines how agents interact with the environment through their observations and actions.\n * Additionally, it provides methods to be called during the inference process of those agents.\n *\n * To use this class, you need to implement the SetupObservations and SetupActions functions (as well as their\n * corresponding SetObservations and SetActions functions), which will define the size of inputs and outputs to your\n * policy. Before you can do inference, you need to call SetupInteractor, which will initialize the underlying data\n * structure, and you need to call AddAgent for each object you want controlled by this agent interactor.\n */" },
		{ "IncludePath", "LearningAgentsInteractor.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/LearningAgentsInteractor.h" },
		{ "ToolTip", "ULearningAgentsInteractor defines how agents interact with the environment through their observations and actions.\nAdditionally, it provides methods to be called during the inference process of those agents.\n\nTo use this class, you need to implement the SetupObservations and SetupActions functions (as well as their\ncorresponding SetObservations and SetActions functions), which will define the size of inputs and outputs to your\npolicy. Before you can do inference, you need to call SetupInteractor, which will initialize the underlying data\nstructure, and you need to call AddAgent for each object you want controlled by this agent interactor." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ULearningAgentsInteractor_Statics::NewProp_ObservationObjects_Inner = { "ObservationObjects", nullptr, (EPropertyFlags)0x0004000000020000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_ULearningAgentsObservation_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULearningAgentsInteractor_Statics::NewProp_ObservationObjects_MetaData[] = {
		{ "Category", "LearningAgents" },
		{ "Comment", "/** The list of current observation objects. */" },
		{ "ModuleRelativePath", "Public/LearningAgentsInteractor.h" },
		{ "ToolTip", "The list of current observation objects." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULearningAgentsInteractor_Statics::NewProp_ObservationObjects = { "ObservationObjects", nullptr, (EPropertyFlags)0x0044000000022001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULearningAgentsInteractor, ObservationObjects), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULearningAgentsInteractor_Statics::NewProp_ObservationObjects_MetaData), Z_Construct_UClass_ULearningAgentsInteractor_Statics::NewProp_ObservationObjects_MetaData) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ULearningAgentsInteractor_Statics::NewProp_ActionObjects_Inner = { "ActionObjects", nullptr, (EPropertyFlags)0x0004000000020000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_ULearningAgentsAction_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULearningAgentsInteractor_Statics::NewProp_ActionObjects_MetaData[] = {
		{ "Category", "LearningAgents" },
		{ "Comment", "/** The list of current action objects. */" },
		{ "ModuleRelativePath", "Public/LearningAgentsInteractor.h" },
		{ "ToolTip", "The list of current action objects." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULearningAgentsInteractor_Statics::NewProp_ActionObjects = { "ActionObjects", nullptr, (EPropertyFlags)0x0044000000022001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULearningAgentsInteractor, ActionObjects), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULearningAgentsInteractor_Statics::NewProp_ActionObjects_MetaData), Z_Construct_UClass_ULearningAgentsInteractor_Statics::NewProp_ActionObjects_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULearningAgentsInteractor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULearningAgentsInteractor_Statics::NewProp_ObservationObjects_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULearningAgentsInteractor_Statics::NewProp_ObservationObjects,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULearningAgentsInteractor_Statics::NewProp_ActionObjects_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULearningAgentsInteractor_Statics::NewProp_ActionObjects,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULearningAgentsInteractor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULearningAgentsInteractor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULearningAgentsInteractor_Statics::ClassParams = {
		&ULearningAgentsInteractor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ULearningAgentsInteractor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ULearningAgentsInteractor_Statics::PropPointers),
		0,
		0x00B000A5u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULearningAgentsInteractor_Statics::Class_MetaDataParams), Z_Construct_UClass_ULearningAgentsInteractor_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULearningAgentsInteractor_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ULearningAgentsInteractor()
	{
		if (!Z_Registration_Info_UClass_ULearningAgentsInteractor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULearningAgentsInteractor.OuterSingleton, Z_Construct_UClass_ULearningAgentsInteractor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULearningAgentsInteractor.OuterSingleton;
	}
	template<> LEARNINGAGENTS_API UClass* StaticClass<ULearningAgentsInteractor>()
	{
		return ULearningAgentsInteractor::StaticClass();
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsInteractor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsInteractor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULearningAgentsInteractor, ULearningAgentsInteractor::StaticClass, TEXT("ULearningAgentsInteractor"), &Z_Registration_Info_UClass_ULearningAgentsInteractor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULearningAgentsInteractor), 482379278U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsInteractor_h_3570021207(TEXT("/Script/LearningAgents"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsInteractor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsInteractor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
