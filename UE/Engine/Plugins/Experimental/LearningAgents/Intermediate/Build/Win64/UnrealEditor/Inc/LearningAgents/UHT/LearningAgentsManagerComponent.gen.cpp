// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LearningAgentsManagerComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLearningAgentsManagerComponent() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	LEARNINGAGENTS_API UClass* Z_Construct_UClass_ALearningAgentsManager_NoRegister();
	LEARNINGAGENTS_API UClass* Z_Construct_UClass_ULearningAgentsHelper_NoRegister();
	LEARNINGAGENTS_API UClass* Z_Construct_UClass_ULearningAgentsManagerComponent();
	LEARNINGAGENTS_API UClass* Z_Construct_UClass_ULearningAgentsManagerComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_LearningAgents();
// End Cross Module References
	DEFINE_FUNCTION(ULearningAgentsManagerComponent::execGetAgentManager)
	{
		P_GET_OBJECT(UClass,Z_Param_AgentManagerClass);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ALearningAgentsManager**)Z_Param__Result=P_THIS->GetAgentManager(Z_Param_AgentManagerClass);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULearningAgentsManagerComponent::execGetAllAgents)
	{
		P_GET_TARRAY_REF(UObject*,Z_Param_Out_OutAgents);
		P_GET_TARRAY_REF(int32,Z_Param_Out_OutAgentIds);
		P_GET_OBJECT(UClass,Z_Param_AgentClass);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetAllAgents(Z_Param_Out_OutAgents,Z_Param_Out_OutAgentIds,Z_Param_AgentClass);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULearningAgentsManagerComponent::execGetAgents)
	{
		P_GET_TARRAY_REF(int32,Z_Param_Out_AgentIds);
		P_GET_OBJECT(UClass,Z_Param_AgentClass);
		P_GET_TARRAY_REF(UObject*,Z_Param_Out_OutAgents);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetAgents(Z_Param_Out_AgentIds,Z_Param_AgentClass,Z_Param_Out_OutAgents);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULearningAgentsManagerComponent::execGetAgent)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_AgentId);
		P_GET_OBJECT(UClass,Z_Param_AgentClass);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UObject**)Z_Param__Result=P_THIS->GetAgent(Z_Param_AgentId,Z_Param_AgentClass);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULearningAgentsManagerComponent::execIsSetup)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsSetup();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULearningAgentsManagerComponent::execAgentsReset)
	{
		P_GET_TARRAY_REF(int32,Z_Param_Out_AgentIds);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AgentsReset_Implementation(Z_Param_Out_AgentIds);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULearningAgentsManagerComponent::execAgentsRemoved)
	{
		P_GET_TARRAY_REF(int32,Z_Param_Out_AgentIds);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AgentsRemoved_Implementation(Z_Param_Out_AgentIds);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULearningAgentsManagerComponent::execAgentsAdded)
	{
		P_GET_TARRAY_REF(int32,Z_Param_Out_AgentIds);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AgentsAdded_Implementation(Z_Param_Out_AgentIds);
		P_NATIVE_END;
	}
	struct LearningAgentsManagerComponent_eventAgentsAdded_Parms
	{
		TArray<int32> AgentIds;
	};
	struct LearningAgentsManagerComponent_eventAgentsRemoved_Parms
	{
		TArray<int32> AgentIds;
	};
	struct LearningAgentsManagerComponent_eventAgentsReset_Parms
	{
		TArray<int32> AgentIds;
	};
	static FName NAME_ULearningAgentsManagerComponent_AgentsAdded = FName(TEXT("AgentsAdded"));
	void ULearningAgentsManagerComponent::AgentsAdded(TArray<int32> const& AgentIds)
	{
		LearningAgentsManagerComponent_eventAgentsAdded_Parms Parms;
		Parms.AgentIds=AgentIds;
		ProcessEvent(FindFunctionChecked(NAME_ULearningAgentsManagerComponent_AgentsAdded),&Parms);
	}
	static FName NAME_ULearningAgentsManagerComponent_AgentsRemoved = FName(TEXT("AgentsRemoved"));
	void ULearningAgentsManagerComponent::AgentsRemoved(TArray<int32> const& AgentIds)
	{
		LearningAgentsManagerComponent_eventAgentsRemoved_Parms Parms;
		Parms.AgentIds=AgentIds;
		ProcessEvent(FindFunctionChecked(NAME_ULearningAgentsManagerComponent_AgentsRemoved),&Parms);
	}
	static FName NAME_ULearningAgentsManagerComponent_AgentsReset = FName(TEXT("AgentsReset"));
	void ULearningAgentsManagerComponent::AgentsReset(TArray<int32> const& AgentIds)
	{
		LearningAgentsManagerComponent_eventAgentsReset_Parms Parms;
		Parms.AgentIds=AgentIds;
		ProcessEvent(FindFunctionChecked(NAME_ULearningAgentsManagerComponent_AgentsReset),&Parms);
	}
	void ULearningAgentsManagerComponent::StaticRegisterNativesULearningAgentsManagerComponent()
	{
		UClass* Class = ULearningAgentsManagerComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AgentsAdded", &ULearningAgentsManagerComponent::execAgentsAdded },
			{ "AgentsRemoved", &ULearningAgentsManagerComponent::execAgentsRemoved },
			{ "AgentsReset", &ULearningAgentsManagerComponent::execAgentsReset },
			{ "GetAgent", &ULearningAgentsManagerComponent::execGetAgent },
			{ "GetAgentManager", &ULearningAgentsManagerComponent::execGetAgentManager },
			{ "GetAgents", &ULearningAgentsManagerComponent::execGetAgents },
			{ "GetAllAgents", &ULearningAgentsManagerComponent::execGetAllAgents },
			{ "IsSetup", &ULearningAgentsManagerComponent::execIsSetup },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULearningAgentsManagerComponent_AgentsAdded_Statics
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
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULearningAgentsManagerComponent_AgentsAdded_Statics::NewProp_AgentIds_Inner = { "AgentIds", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULearningAgentsManagerComponent_AgentsAdded_Statics::NewProp_AgentIds_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULearningAgentsManagerComponent_AgentsAdded_Statics::NewProp_AgentIds = { "AgentIds", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LearningAgentsManagerComponent_eventAgentsAdded_Parms, AgentIds), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULearningAgentsManagerComponent_AgentsAdded_Statics::NewProp_AgentIds_MetaData), Z_Construct_UFunction_ULearningAgentsManagerComponent_AgentsAdded_Statics::NewProp_AgentIds_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULearningAgentsManagerComponent_AgentsAdded_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULearningAgentsManagerComponent_AgentsAdded_Statics::NewProp_AgentIds_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULearningAgentsManagerComponent_AgentsAdded_Statics::NewProp_AgentIds,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULearningAgentsManagerComponent_AgentsAdded_Statics::Function_MetaDataParams[] = {
		{ "Category", "LearningAgents" },
		{ "Comment", "/**\n\x09 * During this event, any additional logic required for when agents are added can be executed.\n\x09 */" },
		{ "ModuleRelativePath", "Public/LearningAgentsManagerComponent.h" },
		{ "ToolTip", "During this event, any additional logic required for when agents are added can be executed." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULearningAgentsManagerComponent_AgentsAdded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULearningAgentsManagerComponent, nullptr, "AgentsAdded", nullptr, nullptr, Z_Construct_UFunction_ULearningAgentsManagerComponent_AgentsAdded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULearningAgentsManagerComponent_AgentsAdded_Statics::PropPointers), sizeof(LearningAgentsManagerComponent_eventAgentsAdded_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULearningAgentsManagerComponent_AgentsAdded_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULearningAgentsManagerComponent_AgentsAdded_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULearningAgentsManagerComponent_AgentsAdded_Statics::PropPointers) < 2048);
	static_assert(sizeof(LearningAgentsManagerComponent_eventAgentsAdded_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULearningAgentsManagerComponent_AgentsAdded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULearningAgentsManagerComponent_AgentsAdded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULearningAgentsManagerComponent_AgentsRemoved_Statics
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
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULearningAgentsManagerComponent_AgentsRemoved_Statics::NewProp_AgentIds_Inner = { "AgentIds", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULearningAgentsManagerComponent_AgentsRemoved_Statics::NewProp_AgentIds_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULearningAgentsManagerComponent_AgentsRemoved_Statics::NewProp_AgentIds = { "AgentIds", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LearningAgentsManagerComponent_eventAgentsRemoved_Parms, AgentIds), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULearningAgentsManagerComponent_AgentsRemoved_Statics::NewProp_AgentIds_MetaData), Z_Construct_UFunction_ULearningAgentsManagerComponent_AgentsRemoved_Statics::NewProp_AgentIds_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULearningAgentsManagerComponent_AgentsRemoved_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULearningAgentsManagerComponent_AgentsRemoved_Statics::NewProp_AgentIds_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULearningAgentsManagerComponent_AgentsRemoved_Statics::NewProp_AgentIds,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULearningAgentsManagerComponent_AgentsRemoved_Statics::Function_MetaDataParams[] = {
		{ "Category", "LearningAgents" },
		{ "Comment", "/**\n\x09 * During this event, any additional logic required for when agents are removed can be executed.\n\x09 */" },
		{ "ModuleRelativePath", "Public/LearningAgentsManagerComponent.h" },
		{ "ToolTip", "During this event, any additional logic required for when agents are removed can be executed." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULearningAgentsManagerComponent_AgentsRemoved_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULearningAgentsManagerComponent, nullptr, "AgentsRemoved", nullptr, nullptr, Z_Construct_UFunction_ULearningAgentsManagerComponent_AgentsRemoved_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULearningAgentsManagerComponent_AgentsRemoved_Statics::PropPointers), sizeof(LearningAgentsManagerComponent_eventAgentsRemoved_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULearningAgentsManagerComponent_AgentsRemoved_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULearningAgentsManagerComponent_AgentsRemoved_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULearningAgentsManagerComponent_AgentsRemoved_Statics::PropPointers) < 2048);
	static_assert(sizeof(LearningAgentsManagerComponent_eventAgentsRemoved_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULearningAgentsManagerComponent_AgentsRemoved()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULearningAgentsManagerComponent_AgentsRemoved_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULearningAgentsManagerComponent_AgentsReset_Statics
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
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULearningAgentsManagerComponent_AgentsReset_Statics::NewProp_AgentIds_Inner = { "AgentIds", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULearningAgentsManagerComponent_AgentsReset_Statics::NewProp_AgentIds_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULearningAgentsManagerComponent_AgentsReset_Statics::NewProp_AgentIds = { "AgentIds", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LearningAgentsManagerComponent_eventAgentsReset_Parms, AgentIds), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULearningAgentsManagerComponent_AgentsReset_Statics::NewProp_AgentIds_MetaData), Z_Construct_UFunction_ULearningAgentsManagerComponent_AgentsReset_Statics::NewProp_AgentIds_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULearningAgentsManagerComponent_AgentsReset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULearningAgentsManagerComponent_AgentsReset_Statics::NewProp_AgentIds_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULearningAgentsManagerComponent_AgentsReset_Statics::NewProp_AgentIds,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULearningAgentsManagerComponent_AgentsReset_Statics::Function_MetaDataParams[] = {
		{ "Category", "LearningAgents" },
		{ "Comment", "/**\n\x09 * During this event, any additional logic required for when agents are reset can be executed.\n\x09 */" },
		{ "ModuleRelativePath", "Public/LearningAgentsManagerComponent.h" },
		{ "ToolTip", "During this event, any additional logic required for when agents are reset can be executed." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULearningAgentsManagerComponent_AgentsReset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULearningAgentsManagerComponent, nullptr, "AgentsReset", nullptr, nullptr, Z_Construct_UFunction_ULearningAgentsManagerComponent_AgentsReset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULearningAgentsManagerComponent_AgentsReset_Statics::PropPointers), sizeof(LearningAgentsManagerComponent_eventAgentsReset_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULearningAgentsManagerComponent_AgentsReset_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULearningAgentsManagerComponent_AgentsReset_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULearningAgentsManagerComponent_AgentsReset_Statics::PropPointers) < 2048);
	static_assert(sizeof(LearningAgentsManagerComponent_eventAgentsReset_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULearningAgentsManagerComponent_AgentsReset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULearningAgentsManagerComponent_AgentsReset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULearningAgentsManagerComponent_GetAgent_Statics
	{
		struct LearningAgentsManagerComponent_eventGetAgent_Parms
		{
			int32 AgentId;
			const TSubclassOf<UObject>  AgentClass;
			UObject* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AgentId_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_AgentId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AgentClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_AgentClass;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULearningAgentsManagerComponent_GetAgent_Statics::NewProp_AgentId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULearningAgentsManagerComponent_GetAgent_Statics::NewProp_AgentId = { "AgentId", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LearningAgentsManagerComponent_eventGetAgent_Parms, AgentId), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULearningAgentsManagerComponent_GetAgent_Statics::NewProp_AgentId_MetaData), Z_Construct_UFunction_ULearningAgentsManagerComponent_GetAgent_Statics::NewProp_AgentId_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULearningAgentsManagerComponent_GetAgent_Statics::NewProp_AgentClass_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_ULearningAgentsManagerComponent_GetAgent_Statics::NewProp_AgentClass = { "AgentClass", nullptr, (EPropertyFlags)0x0014000000000082, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LearningAgentsManagerComponent_eventGetAgent_Parms, AgentClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULearningAgentsManagerComponent_GetAgent_Statics::NewProp_AgentClass_MetaData), Z_Construct_UFunction_ULearningAgentsManagerComponent_GetAgent_Statics::NewProp_AgentClass_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULearningAgentsManagerComponent_GetAgent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LearningAgentsManagerComponent_eventGetAgent_Parms, ReturnValue), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULearningAgentsManagerComponent_GetAgent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULearningAgentsManagerComponent_GetAgent_Statics::NewProp_AgentId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULearningAgentsManagerComponent_GetAgent_Statics::NewProp_AgentClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULearningAgentsManagerComponent_GetAgent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULearningAgentsManagerComponent_GetAgent_Statics::Function_MetaDataParams[] = {
		{ "AgentId", "-1" },
		{ "Category", "LearningAgents" },
		{ "Comment", "/**\n\x09 * Gets the agent with the given id from the manager. Calling this from blueprint with the appropriate AgentClass\n\x09 * will automatically cast the object to the given type. If not in a blueprint, you should call the manager's\n\x09 * GetAgent methods directly.\n\x09 * @param AgentId The id of the agent to get.\n\x09 * @param AgentClass The class to cast the agent object to (in blueprint).\n\x09 * @return The agent object.\n\x09 */" },
		{ "DeterminesOutputType", "AgentClass" },
		{ "ModuleRelativePath", "Public/LearningAgentsManagerComponent.h" },
		{ "ToolTip", "Gets the agent with the given id from the manager. Calling this from blueprint with the appropriate AgentClass\nwill automatically cast the object to the given type. If not in a blueprint, you should call the manager's\nGetAgent methods directly.\n@param AgentId The id of the agent to get.\n@param AgentClass The class to cast the agent object to (in blueprint).\n@return The agent object." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULearningAgentsManagerComponent_GetAgent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULearningAgentsManagerComponent, nullptr, "GetAgent", nullptr, nullptr, Z_Construct_UFunction_ULearningAgentsManagerComponent_GetAgent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULearningAgentsManagerComponent_GetAgent_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULearningAgentsManagerComponent_GetAgent_Statics::LearningAgentsManagerComponent_eventGetAgent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULearningAgentsManagerComponent_GetAgent_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULearningAgentsManagerComponent_GetAgent_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULearningAgentsManagerComponent_GetAgent_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULearningAgentsManagerComponent_GetAgent_Statics::LearningAgentsManagerComponent_eventGetAgent_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULearningAgentsManagerComponent_GetAgent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULearningAgentsManagerComponent_GetAgent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULearningAgentsManagerComponent_GetAgentManager_Statics
	{
		struct LearningAgentsManagerComponent_eventGetAgentManager_Parms
		{
			const TSubclassOf<ALearningAgentsManager>  AgentManagerClass;
			ALearningAgentsManager* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AgentManagerClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_AgentManagerClass;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULearningAgentsManagerComponent_GetAgentManager_Statics::NewProp_AgentManagerClass_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_ULearningAgentsManagerComponent_GetAgentManager_Statics::NewProp_AgentManagerClass = { "AgentManagerClass", nullptr, (EPropertyFlags)0x0014000000000082, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LearningAgentsManagerComponent_eventGetAgentManager_Parms, AgentManagerClass), Z_Construct_UClass_UClass, Z_Construct_UClass_ALearningAgentsManager_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULearningAgentsManagerComponent_GetAgentManager_Statics::NewProp_AgentManagerClass_MetaData), Z_Construct_UFunction_ULearningAgentsManagerComponent_GetAgentManager_Statics::NewProp_AgentManagerClass_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULearningAgentsManagerComponent_GetAgentManager_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LearningAgentsManagerComponent_eventGetAgentManager_Parms, ReturnValue), Z_Construct_UClass_ALearningAgentsManager_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULearningAgentsManagerComponent_GetAgentManager_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULearningAgentsManagerComponent_GetAgentManager_Statics::NewProp_AgentManagerClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULearningAgentsManagerComponent_GetAgentManager_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULearningAgentsManagerComponent_GetAgentManager_Statics::Function_MetaDataParams[] = {
		{ "Category", "LearningAgents" },
		{ "Comment", "/**\n\x09 * Gets the agent manager associated with this component.\n\x09 * @param AgentClass The class to cast the agent manager to (in blueprint).\n\x09 */" },
		{ "DeterminesOutputType", "AgentManagerClass" },
		{ "ModuleRelativePath", "Public/LearningAgentsManagerComponent.h" },
		{ "ToolTip", "Gets the agent manager associated with this component.\n@param AgentClass The class to cast the agent manager to (in blueprint)." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULearningAgentsManagerComponent_GetAgentManager_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULearningAgentsManagerComponent, nullptr, "GetAgentManager", nullptr, nullptr, Z_Construct_UFunction_ULearningAgentsManagerComponent_GetAgentManager_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULearningAgentsManagerComponent_GetAgentManager_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULearningAgentsManagerComponent_GetAgentManager_Statics::LearningAgentsManagerComponent_eventGetAgentManager_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULearningAgentsManagerComponent_GetAgentManager_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULearningAgentsManagerComponent_GetAgentManager_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULearningAgentsManagerComponent_GetAgentManager_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULearningAgentsManagerComponent_GetAgentManager_Statics::LearningAgentsManagerComponent_eventGetAgentManager_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULearningAgentsManagerComponent_GetAgentManager()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULearningAgentsManagerComponent_GetAgentManager_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULearningAgentsManagerComponent_GetAgents_Statics
	{
		struct LearningAgentsManagerComponent_eventGetAgents_Parms
		{
			TArray<int32> AgentIds;
			const TSubclassOf<UObject>  AgentClass;
			TArray<UObject*> OutAgents;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_AgentIds_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AgentIds_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AgentIds;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AgentClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_AgentClass;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OutAgents_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutAgents;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULearningAgentsManagerComponent_GetAgents_Statics::NewProp_AgentIds_Inner = { "AgentIds", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULearningAgentsManagerComponent_GetAgents_Statics::NewProp_AgentIds_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULearningAgentsManagerComponent_GetAgents_Statics::NewProp_AgentIds = { "AgentIds", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LearningAgentsManagerComponent_eventGetAgents_Parms, AgentIds), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULearningAgentsManagerComponent_GetAgents_Statics::NewProp_AgentIds_MetaData), Z_Construct_UFunction_ULearningAgentsManagerComponent_GetAgents_Statics::NewProp_AgentIds_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULearningAgentsManagerComponent_GetAgents_Statics::NewProp_AgentClass_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_ULearningAgentsManagerComponent_GetAgents_Statics::NewProp_AgentClass = { "AgentClass", nullptr, (EPropertyFlags)0x0014000000000082, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LearningAgentsManagerComponent_eventGetAgents_Parms, AgentClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULearningAgentsManagerComponent_GetAgents_Statics::NewProp_AgentClass_MetaData), Z_Construct_UFunction_ULearningAgentsManagerComponent_GetAgents_Statics::NewProp_AgentClass_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULearningAgentsManagerComponent_GetAgents_Statics::NewProp_OutAgents_Inner = { "OutAgents", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULearningAgentsManagerComponent_GetAgents_Statics::NewProp_OutAgents = { "OutAgents", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LearningAgentsManagerComponent_eventGetAgents_Parms, OutAgents), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULearningAgentsManagerComponent_GetAgents_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULearningAgentsManagerComponent_GetAgents_Statics::NewProp_AgentIds_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULearningAgentsManagerComponent_GetAgents_Statics::NewProp_AgentIds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULearningAgentsManagerComponent_GetAgents_Statics::NewProp_AgentClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULearningAgentsManagerComponent_GetAgents_Statics::NewProp_OutAgents_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULearningAgentsManagerComponent_GetAgents_Statics::NewProp_OutAgents,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULearningAgentsManagerComponent_GetAgents_Statics::Function_MetaDataParams[] = {
		{ "Category", "LearningAgents" },
		{ "Comment", "/**\n\x09 * Gets the agents associated with a set of ids from the manager. Calling this from blueprint with the appropriate \n\x09 * AgentClass will automatically cast the object to the given type. If not in a blueprint, you should call the \n\x09 * manager's GetAgents method directly.\n\x09 * @param AgentIds The ids of the agents to get.\n\x09 * @param AgentClass The class to cast the agent objects to (in blueprint).\n\x09 * @param OutAgents The output array of agent objects.\n\x09 */" },
		{ "DeterminesOutputType", "AgentClass" },
		{ "DynamicOutputParam", "OutAgents" },
		{ "ModuleRelativePath", "Public/LearningAgentsManagerComponent.h" },
		{ "ToolTip", "Gets the agents associated with a set of ids from the manager. Calling this from blueprint with the appropriate\nAgentClass will automatically cast the object to the given type. If not in a blueprint, you should call the\nmanager's GetAgents method directly.\n@param AgentIds The ids of the agents to get.\n@param AgentClass The class to cast the agent objects to (in blueprint).\n@param OutAgents The output array of agent objects." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULearningAgentsManagerComponent_GetAgents_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULearningAgentsManagerComponent, nullptr, "GetAgents", nullptr, nullptr, Z_Construct_UFunction_ULearningAgentsManagerComponent_GetAgents_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULearningAgentsManagerComponent_GetAgents_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULearningAgentsManagerComponent_GetAgents_Statics::LearningAgentsManagerComponent_eventGetAgents_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULearningAgentsManagerComponent_GetAgents_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULearningAgentsManagerComponent_GetAgents_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULearningAgentsManagerComponent_GetAgents_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULearningAgentsManagerComponent_GetAgents_Statics::LearningAgentsManagerComponent_eventGetAgents_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULearningAgentsManagerComponent_GetAgents()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULearningAgentsManagerComponent_GetAgents_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULearningAgentsManagerComponent_GetAllAgents_Statics
	{
		struct LearningAgentsManagerComponent_eventGetAllAgents_Parms
		{
			TArray<UObject*> OutAgents;
			TArray<int32> OutAgentIds;
			const TSubclassOf<UObject>  AgentClass;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OutAgents_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutAgents;
		static const UECodeGen_Private::FIntPropertyParams NewProp_OutAgentIds_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutAgentIds;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AgentClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_AgentClass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULearningAgentsManagerComponent_GetAllAgents_Statics::NewProp_OutAgents_Inner = { "OutAgents", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULearningAgentsManagerComponent_GetAllAgents_Statics::NewProp_OutAgents = { "OutAgents", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LearningAgentsManagerComponent_eventGetAllAgents_Parms, OutAgents), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULearningAgentsManagerComponent_GetAllAgents_Statics::NewProp_OutAgentIds_Inner = { "OutAgentIds", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULearningAgentsManagerComponent_GetAllAgents_Statics::NewProp_OutAgentIds = { "OutAgentIds", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LearningAgentsManagerComponent_eventGetAllAgents_Parms, OutAgentIds), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULearningAgentsManagerComponent_GetAllAgents_Statics::NewProp_AgentClass_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_ULearningAgentsManagerComponent_GetAllAgents_Statics::NewProp_AgentClass = { "AgentClass", nullptr, (EPropertyFlags)0x0014000000000082, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LearningAgentsManagerComponent_eventGetAllAgents_Parms, AgentClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULearningAgentsManagerComponent_GetAllAgents_Statics::NewProp_AgentClass_MetaData), Z_Construct_UFunction_ULearningAgentsManagerComponent_GetAllAgents_Statics::NewProp_AgentClass_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULearningAgentsManagerComponent_GetAllAgents_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULearningAgentsManagerComponent_GetAllAgents_Statics::NewProp_OutAgents_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULearningAgentsManagerComponent_GetAllAgents_Statics::NewProp_OutAgents,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULearningAgentsManagerComponent_GetAllAgents_Statics::NewProp_OutAgentIds_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULearningAgentsManagerComponent_GetAllAgents_Statics::NewProp_OutAgentIds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULearningAgentsManagerComponent_GetAllAgents_Statics::NewProp_AgentClass,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULearningAgentsManagerComponent_GetAllAgents_Statics::Function_MetaDataParams[] = {
		{ "Category", "LearningAgents" },
		{ "Comment", "/**\n\x09 * Gets all added agents from the manager. Calling this from blueprint with the appropriate AgentClass will \n\x09 * automatically cast the object to the given type.\n\x09 * @param AgentClass The class to cast the agent objects to (in blueprint).\n\x09 * @param OutAgents The output array of agent objects.\n\x09 * @param OutAgentIds The output array of agent ids.\n\x09 */" },
		{ "DeterminesOutputType", "AgentClass" },
		{ "DynamicOutputParam", "OutAgents" },
		{ "ModuleRelativePath", "Public/LearningAgentsManagerComponent.h" },
		{ "ToolTip", "Gets all added agents from the manager. Calling this from blueprint with the appropriate AgentClass will\nautomatically cast the object to the given type.\n@param AgentClass The class to cast the agent objects to (in blueprint).\n@param OutAgents The output array of agent objects.\n@param OutAgentIds The output array of agent ids." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULearningAgentsManagerComponent_GetAllAgents_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULearningAgentsManagerComponent, nullptr, "GetAllAgents", nullptr, nullptr, Z_Construct_UFunction_ULearningAgentsManagerComponent_GetAllAgents_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULearningAgentsManagerComponent_GetAllAgents_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULearningAgentsManagerComponent_GetAllAgents_Statics::LearningAgentsManagerComponent_eventGetAllAgents_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULearningAgentsManagerComponent_GetAllAgents_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULearningAgentsManagerComponent_GetAllAgents_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULearningAgentsManagerComponent_GetAllAgents_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULearningAgentsManagerComponent_GetAllAgents_Statics::LearningAgentsManagerComponent_eventGetAllAgents_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULearningAgentsManagerComponent_GetAllAgents()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULearningAgentsManagerComponent_GetAllAgents_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULearningAgentsManagerComponent_IsSetup_Statics
	{
		struct LearningAgentsManagerComponent_eventIsSetup_Parms
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
	void Z_Construct_UFunction_ULearningAgentsManagerComponent_IsSetup_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LearningAgentsManagerComponent_eventIsSetup_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULearningAgentsManagerComponent_IsSetup_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LearningAgentsManagerComponent_eventIsSetup_Parms), &Z_Construct_UFunction_ULearningAgentsManagerComponent_IsSetup_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULearningAgentsManagerComponent_IsSetup_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULearningAgentsManagerComponent_IsSetup_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULearningAgentsManagerComponent_IsSetup_Statics::Function_MetaDataParams[] = {
		{ "Category", "LearningAgents" },
		{ "Comment", "/** Returns true if this component has been setup. Otherwise, false. */" },
		{ "ModuleRelativePath", "Public/LearningAgentsManagerComponent.h" },
		{ "ToolTip", "Returns true if this component has been setup. Otherwise, false." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULearningAgentsManagerComponent_IsSetup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULearningAgentsManagerComponent, nullptr, "IsSetup", nullptr, nullptr, Z_Construct_UFunction_ULearningAgentsManagerComponent_IsSetup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULearningAgentsManagerComponent_IsSetup_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULearningAgentsManagerComponent_IsSetup_Statics::LearningAgentsManagerComponent_eventIsSetup_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULearningAgentsManagerComponent_IsSetup_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULearningAgentsManagerComponent_IsSetup_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULearningAgentsManagerComponent_IsSetup_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULearningAgentsManagerComponent_IsSetup_Statics::LearningAgentsManagerComponent_eventIsSetup_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULearningAgentsManagerComponent_IsSetup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULearningAgentsManagerComponent_IsSetup_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULearningAgentsManagerComponent);
	UClass* Z_Construct_UClass_ULearningAgentsManagerComponent_NoRegister()
	{
		return ULearningAgentsManagerComponent::StaticClass();
	}
	struct Z_Construct_UClass_ULearningAgentsManagerComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsSetup_MetaData[];
#endif
		static void NewProp_bIsSetup_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsSetup;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Manager_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Manager;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_HelperObjects_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HelperObjects_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_HelperObjects;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULearningAgentsManagerComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_LearningAgents,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULearningAgentsManagerComponent_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_ULearningAgentsManagerComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULearningAgentsManagerComponent_AgentsAdded, "AgentsAdded" }, // 3092098353
		{ &Z_Construct_UFunction_ULearningAgentsManagerComponent_AgentsRemoved, "AgentsRemoved" }, // 1338634890
		{ &Z_Construct_UFunction_ULearningAgentsManagerComponent_AgentsReset, "AgentsReset" }, // 2337365638
		{ &Z_Construct_UFunction_ULearningAgentsManagerComponent_GetAgent, "GetAgent" }, // 3482710096
		{ &Z_Construct_UFunction_ULearningAgentsManagerComponent_GetAgentManager, "GetAgentManager" }, // 2175812958
		{ &Z_Construct_UFunction_ULearningAgentsManagerComponent_GetAgents, "GetAgents" }, // 577917818
		{ &Z_Construct_UFunction_ULearningAgentsManagerComponent_GetAllAgents, "GetAllAgents" }, // 1125055844
		{ &Z_Construct_UFunction_ULearningAgentsManagerComponent_IsSetup, "IsSetup" }, // 2756854565
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULearningAgentsManagerComponent_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULearningAgentsManagerComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Base class for components which can be attached to an ALearningAgentsManager.\n */" },
		{ "IncludePath", "LearningAgentsManagerComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/LearningAgentsManagerComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Base class for components which can be attached to an ALearningAgentsManager." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULearningAgentsManagerComponent_Statics::NewProp_bIsSetup_MetaData[] = {
		{ "Category", "LearningAgents" },
		{ "Comment", "/** True if this component has been setup. Otherwise, false. */" },
		{ "ModuleRelativePath", "Public/LearningAgentsManagerComponent.h" },
		{ "ToolTip", "True if this component has been setup. Otherwise, false." },
	};
#endif
	void Z_Construct_UClass_ULearningAgentsManagerComponent_Statics::NewProp_bIsSetup_SetBit(void* Obj)
	{
		((ULearningAgentsManagerComponent*)Obj)->bIsSetup = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULearningAgentsManagerComponent_Statics::NewProp_bIsSetup = { "bIsSetup", nullptr, (EPropertyFlags)0x0020080000022001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ULearningAgentsManagerComponent), &Z_Construct_UClass_ULearningAgentsManagerComponent_Statics::NewProp_bIsSetup_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULearningAgentsManagerComponent_Statics::NewProp_bIsSetup_MetaData), Z_Construct_UClass_ULearningAgentsManagerComponent_Statics::NewProp_bIsSetup_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULearningAgentsManagerComponent_Statics::NewProp_Manager_MetaData[] = {
		{ "Category", "LearningAgents" },
		{ "Comment", "/** The associated manager this component is attached to. */" },
		{ "ModuleRelativePath", "Public/LearningAgentsManagerComponent.h" },
		{ "ToolTip", "The associated manager this component is attached to." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ULearningAgentsManagerComponent_Statics::NewProp_Manager = { "Manager", nullptr, (EPropertyFlags)0x0024080000022001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULearningAgentsManagerComponent, Manager), Z_Construct_UClass_ALearningAgentsManager_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULearningAgentsManagerComponent_Statics::NewProp_Manager_MetaData), Z_Construct_UClass_ULearningAgentsManagerComponent_Statics::NewProp_Manager_MetaData) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ULearningAgentsManagerComponent_Statics::NewProp_HelperObjects_Inner = { "HelperObjects", nullptr, (EPropertyFlags)0x0004000000020000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_ULearningAgentsHelper_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULearningAgentsManagerComponent_Statics::NewProp_HelperObjects_MetaData[] = {
		{ "Category", "LearningAgents" },
		{ "Comment", "/** The list of current helper objects. */" },
		{ "ModuleRelativePath", "Public/LearningAgentsManagerComponent.h" },
		{ "ToolTip", "The list of current helper objects." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULearningAgentsManagerComponent_Statics::NewProp_HelperObjects = { "HelperObjects", nullptr, (EPropertyFlags)0x0024080000022001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULearningAgentsManagerComponent, HelperObjects), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULearningAgentsManagerComponent_Statics::NewProp_HelperObjects_MetaData), Z_Construct_UClass_ULearningAgentsManagerComponent_Statics::NewProp_HelperObjects_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULearningAgentsManagerComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULearningAgentsManagerComponent_Statics::NewProp_bIsSetup,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULearningAgentsManagerComponent_Statics::NewProp_Manager,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULearningAgentsManagerComponent_Statics::NewProp_HelperObjects_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULearningAgentsManagerComponent_Statics::NewProp_HelperObjects,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULearningAgentsManagerComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULearningAgentsManagerComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULearningAgentsManagerComponent_Statics::ClassParams = {
		&ULearningAgentsManagerComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ULearningAgentsManagerComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ULearningAgentsManagerComponent_Statics::PropPointers),
		0,
		0x00B000A5u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULearningAgentsManagerComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_ULearningAgentsManagerComponent_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULearningAgentsManagerComponent_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ULearningAgentsManagerComponent()
	{
		if (!Z_Registration_Info_UClass_ULearningAgentsManagerComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULearningAgentsManagerComponent.OuterSingleton, Z_Construct_UClass_ULearningAgentsManagerComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULearningAgentsManagerComponent.OuterSingleton;
	}
	template<> LEARNINGAGENTS_API UClass* StaticClass<ULearningAgentsManagerComponent>()
	{
		return ULearningAgentsManagerComponent::StaticClass();
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsManagerComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsManagerComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULearningAgentsManagerComponent, ULearningAgentsManagerComponent::StaticClass, TEXT("ULearningAgentsManagerComponent"), &Z_Registration_Info_UClass_ULearningAgentsManagerComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULearningAgentsManagerComponent), 42158521U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsManagerComponent_h_646660830(TEXT("/Script/LearningAgents"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsManagerComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsManagerComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
