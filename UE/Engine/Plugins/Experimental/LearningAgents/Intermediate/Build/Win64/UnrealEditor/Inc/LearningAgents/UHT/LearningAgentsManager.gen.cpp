// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LearningAgentsManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLearningAgentsManager() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	LEARNINGAGENTS_API UClass* Z_Construct_UClass_ALearningAgentsManager();
	LEARNINGAGENTS_API UClass* Z_Construct_UClass_ALearningAgentsManager_NoRegister();
	UPackage* Z_Construct_UPackage__Script_LearningAgents();
// End Cross Module References
	DEFINE_FUNCTION(ALearningAgentsManager::execAddAgentsAsTickPrerequisiteOfManager)
	{
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_InAgents);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddAgentsAsTickPrerequisiteOfManager(Z_Param_Out_InAgents);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALearningAgentsManager::execAddManagerAsTickPrerequisiteOfAgents)
	{
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_InAgents);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddManagerAsTickPrerequisiteOfAgents(Z_Param_Out_InAgents);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALearningAgentsManager::execHasAgent)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_AgentId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasAgent(Z_Param_AgentId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALearningAgentsManager::execHasAgentObject)
	{
		P_GET_OBJECT(UObject,Z_Param_Agent);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasAgentObject(Z_Param_Agent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALearningAgentsManager::execGetAgentNum)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetAgentNum();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALearningAgentsManager::execGetAgentIds)
	{
		P_GET_TARRAY_REF(int32,Z_Param_Out_OutAgentIds);
		P_GET_TARRAY_REF(UObject*,Z_Param_Out_InAgents);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetAgentIds(Z_Param_Out_OutAgentIds,Z_Param_Out_InAgents);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALearningAgentsManager::execGetAgentId)
	{
		P_GET_OBJECT(UObject,Z_Param_Agent);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetAgentId(Z_Param_Agent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALearningAgentsManager::execGetAllAgents)
	{
		P_GET_TARRAY_REF(UObject*,Z_Param_Out_OutAgents);
		P_GET_TARRAY_REF(int32,Z_Param_Out_OutAgentIds);
		P_GET_OBJECT(UClass,Z_Param_AgentClass);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetAllAgents(Z_Param_Out_OutAgents,Z_Param_Out_OutAgentIds,Z_Param_AgentClass);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALearningAgentsManager::execGetAgents)
	{
		P_GET_TARRAY_REF(UObject*,Z_Param_Out_OutAgents);
		P_GET_TARRAY_REF(int32,Z_Param_Out_AgentIds);
		P_GET_OBJECT(UClass,Z_Param_AgentClass);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetAgents(Z_Param_Out_OutAgents,Z_Param_Out_AgentIds,Z_Param_AgentClass);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALearningAgentsManager::execGetAgent)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_AgentId);
		P_GET_OBJECT(UClass,Z_Param_AgentClass);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UObject**)Z_Param__Result=P_THIS->GetAgent(Z_Param_AgentId,Z_Param_AgentClass);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALearningAgentsManager::execResetAllAgents)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetAllAgents();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALearningAgentsManager::execResetAgents)
	{
		P_GET_TARRAY_REF(int32,Z_Param_Out_AgentIds);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetAgents(Z_Param_Out_AgentIds);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALearningAgentsManager::execResetAgent)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_AgentId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetAgent(Z_Param_AgentId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALearningAgentsManager::execRemoveAllAgents)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveAllAgents();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALearningAgentsManager::execRemoveAgents)
	{
		P_GET_TARRAY_REF(int32,Z_Param_Out_AgentIds);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveAgents(Z_Param_Out_AgentIds);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALearningAgentsManager::execRemoveAgent)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_AgentId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveAgent(Z_Param_AgentId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALearningAgentsManager::execAddAgents)
	{
		P_GET_TARRAY_REF(int32,Z_Param_Out_OutAgentIds);
		P_GET_TARRAY_REF(UObject*,Z_Param_Out_InAgents);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddAgents(Z_Param_Out_OutAgentIds,Z_Param_Out_InAgents);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALearningAgentsManager::execAddAgent)
	{
		P_GET_OBJECT(UObject,Z_Param_Agent);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->AddAgent(Z_Param_Agent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALearningAgentsManager::execGetMaxAgentNum)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetMaxAgentNum();
		P_NATIVE_END;
	}
	void ALearningAgentsManager::StaticRegisterNativesALearningAgentsManager()
	{
		UClass* Class = ALearningAgentsManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddAgent", &ALearningAgentsManager::execAddAgent },
			{ "AddAgents", &ALearningAgentsManager::execAddAgents },
			{ "AddAgentsAsTickPrerequisiteOfManager", &ALearningAgentsManager::execAddAgentsAsTickPrerequisiteOfManager },
			{ "AddManagerAsTickPrerequisiteOfAgents", &ALearningAgentsManager::execAddManagerAsTickPrerequisiteOfAgents },
			{ "GetAgent", &ALearningAgentsManager::execGetAgent },
			{ "GetAgentId", &ALearningAgentsManager::execGetAgentId },
			{ "GetAgentIds", &ALearningAgentsManager::execGetAgentIds },
			{ "GetAgentNum", &ALearningAgentsManager::execGetAgentNum },
			{ "GetAgents", &ALearningAgentsManager::execGetAgents },
			{ "GetAllAgents", &ALearningAgentsManager::execGetAllAgents },
			{ "GetMaxAgentNum", &ALearningAgentsManager::execGetMaxAgentNum },
			{ "HasAgent", &ALearningAgentsManager::execHasAgent },
			{ "HasAgentObject", &ALearningAgentsManager::execHasAgentObject },
			{ "RemoveAgent", &ALearningAgentsManager::execRemoveAgent },
			{ "RemoveAgents", &ALearningAgentsManager::execRemoveAgents },
			{ "RemoveAllAgents", &ALearningAgentsManager::execRemoveAllAgents },
			{ "ResetAgent", &ALearningAgentsManager::execResetAgent },
			{ "ResetAgents", &ALearningAgentsManager::execResetAgents },
			{ "ResetAllAgents", &ALearningAgentsManager::execResetAllAgents },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ALearningAgentsManager_AddAgent_Statics
	{
		struct LearningAgentsManager_eventAddAgent_Parms
		{
			UObject* Agent;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Agent;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALearningAgentsManager_AddAgent_Statics::NewProp_Agent = { "Agent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LearningAgentsManager_eventAddAgent_Parms, Agent), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ALearningAgentsManager_AddAgent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LearningAgentsManager_eventAddAgent_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALearningAgentsManager_AddAgent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALearningAgentsManager_AddAgent_Statics::NewProp_Agent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALearningAgentsManager_AddAgent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALearningAgentsManager_AddAgent_Statics::Function_MetaDataParams[] = {
		{ "Category", "LearningAgents" },
		{ "Comment", "/**\n\x09 * Adds the given object as an agent to the manager.\n\x09 * @param Agent The object to be added.\n\x09 * @return The agent's newly assigned id.\n\x09 */" },
		{ "ModuleRelativePath", "Public/LearningAgentsManager.h" },
		{ "ToolTip", "Adds the given object as an agent to the manager.\n@param Agent The object to be added.\n@return The agent's newly assigned id." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALearningAgentsManager_AddAgent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALearningAgentsManager, nullptr, "AddAgent", nullptr, nullptr, Z_Construct_UFunction_ALearningAgentsManager_AddAgent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALearningAgentsManager_AddAgent_Statics::PropPointers), sizeof(Z_Construct_UFunction_ALearningAgentsManager_AddAgent_Statics::LearningAgentsManager_eventAddAgent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALearningAgentsManager_AddAgent_Statics::Function_MetaDataParams), Z_Construct_UFunction_ALearningAgentsManager_AddAgent_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ALearningAgentsManager_AddAgent_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ALearningAgentsManager_AddAgent_Statics::LearningAgentsManager_eventAddAgent_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ALearningAgentsManager_AddAgent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALearningAgentsManager_AddAgent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALearningAgentsManager_AddAgents_Statics
	{
		struct LearningAgentsManager_eventAddAgents_Parms
		{
			TArray<int32> OutAgentIds;
			TArray<UObject*> InAgents;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_OutAgentIds_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutAgentIds;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InAgents_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InAgents_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InAgents;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ALearningAgentsManager_AddAgents_Statics::NewProp_OutAgentIds_Inner = { "OutAgentIds", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ALearningAgentsManager_AddAgents_Statics::NewProp_OutAgentIds = { "OutAgentIds", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LearningAgentsManager_eventAddAgents_Parms, OutAgentIds), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALearningAgentsManager_AddAgents_Statics::NewProp_InAgents_Inner = { "InAgents", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALearningAgentsManager_AddAgents_Statics::NewProp_InAgents_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ALearningAgentsManager_AddAgents_Statics::NewProp_InAgents = { "InAgents", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LearningAgentsManager_eventAddAgents_Parms, InAgents), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALearningAgentsManager_AddAgents_Statics::NewProp_InAgents_MetaData), Z_Construct_UFunction_ALearningAgentsManager_AddAgents_Statics::NewProp_InAgents_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALearningAgentsManager_AddAgents_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALearningAgentsManager_AddAgents_Statics::NewProp_OutAgentIds_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALearningAgentsManager_AddAgents_Statics::NewProp_OutAgentIds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALearningAgentsManager_AddAgents_Statics::NewProp_InAgents_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALearningAgentsManager_AddAgents_Statics::NewProp_InAgents,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALearningAgentsManager_AddAgents_Statics::Function_MetaDataParams[] = {
		{ "Category", "LearningAgents" },
		{ "Comment", "/**\n\x09 * Adds the given objects as an agents to the manager.\n\x09 * @param OutAgentIds The output newly assigned agent ids\n\x09 * @param InAgents The objects to be added.\n\x09 */" },
		{ "ModuleRelativePath", "Public/LearningAgentsManager.h" },
		{ "ToolTip", "Adds the given objects as an agents to the manager.\n@param OutAgentIds The output newly assigned agent ids\n@param InAgents The objects to be added." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALearningAgentsManager_AddAgents_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALearningAgentsManager, nullptr, "AddAgents", nullptr, nullptr, Z_Construct_UFunction_ALearningAgentsManager_AddAgents_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALearningAgentsManager_AddAgents_Statics::PropPointers), sizeof(Z_Construct_UFunction_ALearningAgentsManager_AddAgents_Statics::LearningAgentsManager_eventAddAgents_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALearningAgentsManager_AddAgents_Statics::Function_MetaDataParams), Z_Construct_UFunction_ALearningAgentsManager_AddAgents_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ALearningAgentsManager_AddAgents_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ALearningAgentsManager_AddAgents_Statics::LearningAgentsManager_eventAddAgents_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ALearningAgentsManager_AddAgents()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALearningAgentsManager_AddAgents_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALearningAgentsManager_AddAgentsAsTickPrerequisiteOfManager_Statics
	{
		struct LearningAgentsManager_eventAddAgentsAsTickPrerequisiteOfManager_Parms
		{
			TArray<AActor*> InAgents;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InAgents_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InAgents_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InAgents;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALearningAgentsManager_AddAgentsAsTickPrerequisiteOfManager_Statics::NewProp_InAgents_Inner = { "InAgents", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALearningAgentsManager_AddAgentsAsTickPrerequisiteOfManager_Statics::NewProp_InAgents_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ALearningAgentsManager_AddAgentsAsTickPrerequisiteOfManager_Statics::NewProp_InAgents = { "InAgents", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LearningAgentsManager_eventAddAgentsAsTickPrerequisiteOfManager_Parms, InAgents), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALearningAgentsManager_AddAgentsAsTickPrerequisiteOfManager_Statics::NewProp_InAgents_MetaData), Z_Construct_UFunction_ALearningAgentsManager_AddAgentsAsTickPrerequisiteOfManager_Statics::NewProp_InAgents_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALearningAgentsManager_AddAgentsAsTickPrerequisiteOfManager_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALearningAgentsManager_AddAgentsAsTickPrerequisiteOfManager_Statics::NewProp_InAgents_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALearningAgentsManager_AddAgentsAsTickPrerequisiteOfManager_Statics::NewProp_InAgents,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALearningAgentsManager_AddAgentsAsTickPrerequisiteOfManager_Statics::Function_MetaDataParams[] = {
		{ "Category", "LearningAgents" },
		{ "Comment", "/**\n\x09 * Adds the given actor objects as tick prerequisite of this manager.\n\x09 * @param InAgents The actor object which will be added as tick prerequisites to this manager.\n\x09 */" },
		{ "ModuleRelativePath", "Public/LearningAgentsManager.h" },
		{ "ToolTip", "Adds the given actor objects as tick prerequisite of this manager.\n@param InAgents The actor object which will be added as tick prerequisites to this manager." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALearningAgentsManager_AddAgentsAsTickPrerequisiteOfManager_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALearningAgentsManager, nullptr, "AddAgentsAsTickPrerequisiteOfManager", nullptr, nullptr, Z_Construct_UFunction_ALearningAgentsManager_AddAgentsAsTickPrerequisiteOfManager_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALearningAgentsManager_AddAgentsAsTickPrerequisiteOfManager_Statics::PropPointers), sizeof(Z_Construct_UFunction_ALearningAgentsManager_AddAgentsAsTickPrerequisiteOfManager_Statics::LearningAgentsManager_eventAddAgentsAsTickPrerequisiteOfManager_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALearningAgentsManager_AddAgentsAsTickPrerequisiteOfManager_Statics::Function_MetaDataParams), Z_Construct_UFunction_ALearningAgentsManager_AddAgentsAsTickPrerequisiteOfManager_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ALearningAgentsManager_AddAgentsAsTickPrerequisiteOfManager_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ALearningAgentsManager_AddAgentsAsTickPrerequisiteOfManager_Statics::LearningAgentsManager_eventAddAgentsAsTickPrerequisiteOfManager_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ALearningAgentsManager_AddAgentsAsTickPrerequisiteOfManager()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALearningAgentsManager_AddAgentsAsTickPrerequisiteOfManager_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALearningAgentsManager_AddManagerAsTickPrerequisiteOfAgents_Statics
	{
		struct LearningAgentsManager_eventAddManagerAsTickPrerequisiteOfAgents_Parms
		{
			TArray<AActor*> InAgents;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InAgents_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InAgents_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InAgents;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALearningAgentsManager_AddManagerAsTickPrerequisiteOfAgents_Statics::NewProp_InAgents_Inner = { "InAgents", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALearningAgentsManager_AddManagerAsTickPrerequisiteOfAgents_Statics::NewProp_InAgents_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ALearningAgentsManager_AddManagerAsTickPrerequisiteOfAgents_Statics::NewProp_InAgents = { "InAgents", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LearningAgentsManager_eventAddManagerAsTickPrerequisiteOfAgents_Parms, InAgents), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALearningAgentsManager_AddManagerAsTickPrerequisiteOfAgents_Statics::NewProp_InAgents_MetaData), Z_Construct_UFunction_ALearningAgentsManager_AddManagerAsTickPrerequisiteOfAgents_Statics::NewProp_InAgents_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALearningAgentsManager_AddManagerAsTickPrerequisiteOfAgents_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALearningAgentsManager_AddManagerAsTickPrerequisiteOfAgents_Statics::NewProp_InAgents_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALearningAgentsManager_AddManagerAsTickPrerequisiteOfAgents_Statics::NewProp_InAgents,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALearningAgentsManager_AddManagerAsTickPrerequisiteOfAgents_Statics::Function_MetaDataParams[] = {
		{ "Category", "LearningAgents" },
		{ "Comment", "/**\n\x09 * Adds this manager as a tick prerequisite of the given actor objects.\n\x09 * @param InAgents The actor object which this manager will be added as a tick prerequisite to.\n\x09 */" },
		{ "ModuleRelativePath", "Public/LearningAgentsManager.h" },
		{ "ToolTip", "Adds this manager as a tick prerequisite of the given actor objects.\n@param InAgents The actor object which this manager will be added as a tick prerequisite to." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALearningAgentsManager_AddManagerAsTickPrerequisiteOfAgents_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALearningAgentsManager, nullptr, "AddManagerAsTickPrerequisiteOfAgents", nullptr, nullptr, Z_Construct_UFunction_ALearningAgentsManager_AddManagerAsTickPrerequisiteOfAgents_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALearningAgentsManager_AddManagerAsTickPrerequisiteOfAgents_Statics::PropPointers), sizeof(Z_Construct_UFunction_ALearningAgentsManager_AddManagerAsTickPrerequisiteOfAgents_Statics::LearningAgentsManager_eventAddManagerAsTickPrerequisiteOfAgents_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALearningAgentsManager_AddManagerAsTickPrerequisiteOfAgents_Statics::Function_MetaDataParams), Z_Construct_UFunction_ALearningAgentsManager_AddManagerAsTickPrerequisiteOfAgents_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ALearningAgentsManager_AddManagerAsTickPrerequisiteOfAgents_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ALearningAgentsManager_AddManagerAsTickPrerequisiteOfAgents_Statics::LearningAgentsManager_eventAddManagerAsTickPrerequisiteOfAgents_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ALearningAgentsManager_AddManagerAsTickPrerequisiteOfAgents()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALearningAgentsManager_AddManagerAsTickPrerequisiteOfAgents_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALearningAgentsManager_GetAgent_Statics
	{
		struct LearningAgentsManager_eventGetAgent_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALearningAgentsManager_GetAgent_Statics::NewProp_AgentId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ALearningAgentsManager_GetAgent_Statics::NewProp_AgentId = { "AgentId", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LearningAgentsManager_eventGetAgent_Parms, AgentId), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALearningAgentsManager_GetAgent_Statics::NewProp_AgentId_MetaData), Z_Construct_UFunction_ALearningAgentsManager_GetAgent_Statics::NewProp_AgentId_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALearningAgentsManager_GetAgent_Statics::NewProp_AgentClass_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_ALearningAgentsManager_GetAgent_Statics::NewProp_AgentClass = { "AgentClass", nullptr, (EPropertyFlags)0x0014000000000082, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LearningAgentsManager_eventGetAgent_Parms, AgentClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALearningAgentsManager_GetAgent_Statics::NewProp_AgentClass_MetaData), Z_Construct_UFunction_ALearningAgentsManager_GetAgent_Statics::NewProp_AgentClass_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALearningAgentsManager_GetAgent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LearningAgentsManager_eventGetAgent_Parms, ReturnValue), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALearningAgentsManager_GetAgent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALearningAgentsManager_GetAgent_Statics::NewProp_AgentId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALearningAgentsManager_GetAgent_Statics::NewProp_AgentClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALearningAgentsManager_GetAgent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALearningAgentsManager_GetAgent_Statics::Function_MetaDataParams[] = {
		{ "AgentId", "-1" },
		{ "Category", "LearningAgents" },
		{ "Comment", "/**\n\x09 * Gets the agent with the given id. Calling this from blueprint with the appropriate AgentClass will automatically\n\x09 * cast the object to the given type. If not in a blueprint, you should use one of the other GetAgent overloads.\n\x09 * @param AgentId The id of the agent to get.\n\x09 * @param AgentClass The class to cast the agent object to (in blueprint).\n\x09 * @return The agent object.\n\x09 */" },
		{ "DeterminesOutputType", "AgentClass" },
		{ "ModuleRelativePath", "Public/LearningAgentsManager.h" },
		{ "ToolTip", "Gets the agent with the given id. Calling this from blueprint with the appropriate AgentClass will automatically\ncast the object to the given type. If not in a blueprint, you should use one of the other GetAgent overloads.\n@param AgentId The id of the agent to get.\n@param AgentClass The class to cast the agent object to (in blueprint).\n@return The agent object." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALearningAgentsManager_GetAgent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALearningAgentsManager, nullptr, "GetAgent", nullptr, nullptr, Z_Construct_UFunction_ALearningAgentsManager_GetAgent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALearningAgentsManager_GetAgent_Statics::PropPointers), sizeof(Z_Construct_UFunction_ALearningAgentsManager_GetAgent_Statics::LearningAgentsManager_eventGetAgent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALearningAgentsManager_GetAgent_Statics::Function_MetaDataParams), Z_Construct_UFunction_ALearningAgentsManager_GetAgent_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ALearningAgentsManager_GetAgent_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ALearningAgentsManager_GetAgent_Statics::LearningAgentsManager_eventGetAgent_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ALearningAgentsManager_GetAgent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALearningAgentsManager_GetAgent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALearningAgentsManager_GetAgentId_Statics
	{
		struct LearningAgentsManager_eventGetAgentId_Parms
		{
			UObject* Agent;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Agent;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALearningAgentsManager_GetAgentId_Statics::NewProp_Agent = { "Agent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LearningAgentsManager_eventGetAgentId_Parms, Agent), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ALearningAgentsManager_GetAgentId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LearningAgentsManager_eventGetAgentId_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALearningAgentsManager_GetAgentId_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALearningAgentsManager_GetAgentId_Statics::NewProp_Agent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALearningAgentsManager_GetAgentId_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALearningAgentsManager_GetAgentId_Statics::Function_MetaDataParams[] = {
		{ "Category", "LearningAgents" },
		{ "Comment", "/**\n\x09 * Gets the agent id associated with a given agent.\n\x09 * @param Agent The agent object.\n\x09 * @return The agent id.\n\x09 */" },
		{ "ModuleRelativePath", "Public/LearningAgentsManager.h" },
		{ "ToolTip", "Gets the agent id associated with a given agent.\n@param Agent The agent object.\n@return The agent id." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALearningAgentsManager_GetAgentId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALearningAgentsManager, nullptr, "GetAgentId", nullptr, nullptr, Z_Construct_UFunction_ALearningAgentsManager_GetAgentId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALearningAgentsManager_GetAgentId_Statics::PropPointers), sizeof(Z_Construct_UFunction_ALearningAgentsManager_GetAgentId_Statics::LearningAgentsManager_eventGetAgentId_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALearningAgentsManager_GetAgentId_Statics::Function_MetaDataParams), Z_Construct_UFunction_ALearningAgentsManager_GetAgentId_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ALearningAgentsManager_GetAgentId_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ALearningAgentsManager_GetAgentId_Statics::LearningAgentsManager_eventGetAgentId_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ALearningAgentsManager_GetAgentId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALearningAgentsManager_GetAgentId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALearningAgentsManager_GetAgentIds_Statics
	{
		struct LearningAgentsManager_eventGetAgentIds_Parms
		{
			TArray<int32> OutAgentIds;
			TArray<UObject*> InAgents;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_OutAgentIds_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutAgentIds;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InAgents_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InAgents_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InAgents;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ALearningAgentsManager_GetAgentIds_Statics::NewProp_OutAgentIds_Inner = { "OutAgentIds", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ALearningAgentsManager_GetAgentIds_Statics::NewProp_OutAgentIds = { "OutAgentIds", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LearningAgentsManager_eventGetAgentIds_Parms, OutAgentIds), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALearningAgentsManager_GetAgentIds_Statics::NewProp_InAgents_Inner = { "InAgents", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALearningAgentsManager_GetAgentIds_Statics::NewProp_InAgents_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ALearningAgentsManager_GetAgentIds_Statics::NewProp_InAgents = { "InAgents", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LearningAgentsManager_eventGetAgentIds_Parms, InAgents), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALearningAgentsManager_GetAgentIds_Statics::NewProp_InAgents_MetaData), Z_Construct_UFunction_ALearningAgentsManager_GetAgentIds_Statics::NewProp_InAgents_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALearningAgentsManager_GetAgentIds_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALearningAgentsManager_GetAgentIds_Statics::NewProp_OutAgentIds_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALearningAgentsManager_GetAgentIds_Statics::NewProp_OutAgentIds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALearningAgentsManager_GetAgentIds_Statics::NewProp_InAgents_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALearningAgentsManager_GetAgentIds_Statics::NewProp_InAgents,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALearningAgentsManager_GetAgentIds_Statics::Function_MetaDataParams[] = {
		{ "Category", "LearningAgents" },
		{ "Comment", "/**\n\x09 * Gets the agent ids associated with a set of agents.\n\x09 * @param OutAgentIds The ids of the agents.\n\x09 * @param InAgents The agent objects.\n\x09 */" },
		{ "ModuleRelativePath", "Public/LearningAgentsManager.h" },
		{ "ToolTip", "Gets the agent ids associated with a set of agents.\n@param OutAgentIds The ids of the agents.\n@param InAgents The agent objects." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALearningAgentsManager_GetAgentIds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALearningAgentsManager, nullptr, "GetAgentIds", nullptr, nullptr, Z_Construct_UFunction_ALearningAgentsManager_GetAgentIds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALearningAgentsManager_GetAgentIds_Statics::PropPointers), sizeof(Z_Construct_UFunction_ALearningAgentsManager_GetAgentIds_Statics::LearningAgentsManager_eventGetAgentIds_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALearningAgentsManager_GetAgentIds_Statics::Function_MetaDataParams), Z_Construct_UFunction_ALearningAgentsManager_GetAgentIds_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ALearningAgentsManager_GetAgentIds_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ALearningAgentsManager_GetAgentIds_Statics::LearningAgentsManager_eventGetAgentIds_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ALearningAgentsManager_GetAgentIds()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALearningAgentsManager_GetAgentIds_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALearningAgentsManager_GetAgentNum_Statics
	{
		struct LearningAgentsManager_eventGetAgentNum_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ALearningAgentsManager_GetAgentNum_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LearningAgentsManager_eventGetAgentNum_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALearningAgentsManager_GetAgentNum_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALearningAgentsManager_GetAgentNum_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALearningAgentsManager_GetAgentNum_Statics::Function_MetaDataParams[] = {
		{ "Category", "LearningAgents" },
		{ "Comment", "/**\n\x09 * Gets the number of agents added\n\x09 * @return The number of agents added.\n\x09 */" },
		{ "ModuleRelativePath", "Public/LearningAgentsManager.h" },
		{ "ToolTip", "Gets the number of agents added\n@return The number of agents added." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALearningAgentsManager_GetAgentNum_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALearningAgentsManager, nullptr, "GetAgentNum", nullptr, nullptr, Z_Construct_UFunction_ALearningAgentsManager_GetAgentNum_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALearningAgentsManager_GetAgentNum_Statics::PropPointers), sizeof(Z_Construct_UFunction_ALearningAgentsManager_GetAgentNum_Statics::LearningAgentsManager_eventGetAgentNum_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALearningAgentsManager_GetAgentNum_Statics::Function_MetaDataParams), Z_Construct_UFunction_ALearningAgentsManager_GetAgentNum_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ALearningAgentsManager_GetAgentNum_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ALearningAgentsManager_GetAgentNum_Statics::LearningAgentsManager_eventGetAgentNum_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ALearningAgentsManager_GetAgentNum()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALearningAgentsManager_GetAgentNum_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALearningAgentsManager_GetAgents_Statics
	{
		struct LearningAgentsManager_eventGetAgents_Parms
		{
			TArray<UObject*> OutAgents;
			TArray<int32> AgentIds;
			const TSubclassOf<UObject>  AgentClass;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OutAgents_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutAgents;
		static const UECodeGen_Private::FIntPropertyParams NewProp_AgentIds_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AgentIds_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AgentIds;
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALearningAgentsManager_GetAgents_Statics::NewProp_OutAgents_Inner = { "OutAgents", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ALearningAgentsManager_GetAgents_Statics::NewProp_OutAgents = { "OutAgents", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LearningAgentsManager_eventGetAgents_Parms, OutAgents), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ALearningAgentsManager_GetAgents_Statics::NewProp_AgentIds_Inner = { "AgentIds", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALearningAgentsManager_GetAgents_Statics::NewProp_AgentIds_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ALearningAgentsManager_GetAgents_Statics::NewProp_AgentIds = { "AgentIds", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LearningAgentsManager_eventGetAgents_Parms, AgentIds), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALearningAgentsManager_GetAgents_Statics::NewProp_AgentIds_MetaData), Z_Construct_UFunction_ALearningAgentsManager_GetAgents_Statics::NewProp_AgentIds_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALearningAgentsManager_GetAgents_Statics::NewProp_AgentClass_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_ALearningAgentsManager_GetAgents_Statics::NewProp_AgentClass = { "AgentClass", nullptr, (EPropertyFlags)0x0014000000000082, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LearningAgentsManager_eventGetAgents_Parms, AgentClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALearningAgentsManager_GetAgents_Statics::NewProp_AgentClass_MetaData), Z_Construct_UFunction_ALearningAgentsManager_GetAgents_Statics::NewProp_AgentClass_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALearningAgentsManager_GetAgents_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALearningAgentsManager_GetAgents_Statics::NewProp_OutAgents_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALearningAgentsManager_GetAgents_Statics::NewProp_OutAgents,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALearningAgentsManager_GetAgents_Statics::NewProp_AgentIds_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALearningAgentsManager_GetAgents_Statics::NewProp_AgentIds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALearningAgentsManager_GetAgents_Statics::NewProp_AgentClass,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALearningAgentsManager_GetAgents_Statics::Function_MetaDataParams[] = {
		{ "Category", "LearningAgents" },
		{ "Comment", "/**\n\x09 * Gets the agents associated with a set of ids. Calling this from blueprint with the appropriate AgentClass will \n\x09 * automatically cast the object to the given type.\n\x09 * @param AgentIds The ids of the agents to get.\n\x09 * @param AgentClass The class to cast the agent objects to (in blueprint).\n\x09 * @param OutAgents The output array of agent objects.\n\x09 */" },
		{ "DeterminesOutputType", "AgentClass" },
		{ "DynamicOutputParam", "OutAgents" },
		{ "ModuleRelativePath", "Public/LearningAgentsManager.h" },
		{ "ToolTip", "Gets the agents associated with a set of ids. Calling this from blueprint with the appropriate AgentClass will\nautomatically cast the object to the given type.\n@param AgentIds The ids of the agents to get.\n@param AgentClass The class to cast the agent objects to (in blueprint).\n@param OutAgents The output array of agent objects." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALearningAgentsManager_GetAgents_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALearningAgentsManager, nullptr, "GetAgents", nullptr, nullptr, Z_Construct_UFunction_ALearningAgentsManager_GetAgents_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALearningAgentsManager_GetAgents_Statics::PropPointers), sizeof(Z_Construct_UFunction_ALearningAgentsManager_GetAgents_Statics::LearningAgentsManager_eventGetAgents_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALearningAgentsManager_GetAgents_Statics::Function_MetaDataParams), Z_Construct_UFunction_ALearningAgentsManager_GetAgents_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ALearningAgentsManager_GetAgents_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ALearningAgentsManager_GetAgents_Statics::LearningAgentsManager_eventGetAgents_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ALearningAgentsManager_GetAgents()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALearningAgentsManager_GetAgents_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALearningAgentsManager_GetAllAgents_Statics
	{
		struct LearningAgentsManager_eventGetAllAgents_Parms
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALearningAgentsManager_GetAllAgents_Statics::NewProp_OutAgents_Inner = { "OutAgents", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ALearningAgentsManager_GetAllAgents_Statics::NewProp_OutAgents = { "OutAgents", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LearningAgentsManager_eventGetAllAgents_Parms, OutAgents), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ALearningAgentsManager_GetAllAgents_Statics::NewProp_OutAgentIds_Inner = { "OutAgentIds", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ALearningAgentsManager_GetAllAgents_Statics::NewProp_OutAgentIds = { "OutAgentIds", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LearningAgentsManager_eventGetAllAgents_Parms, OutAgentIds), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALearningAgentsManager_GetAllAgents_Statics::NewProp_AgentClass_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_ALearningAgentsManager_GetAllAgents_Statics::NewProp_AgentClass = { "AgentClass", nullptr, (EPropertyFlags)0x0014000000000082, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LearningAgentsManager_eventGetAllAgents_Parms, AgentClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALearningAgentsManager_GetAllAgents_Statics::NewProp_AgentClass_MetaData), Z_Construct_UFunction_ALearningAgentsManager_GetAllAgents_Statics::NewProp_AgentClass_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALearningAgentsManager_GetAllAgents_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALearningAgentsManager_GetAllAgents_Statics::NewProp_OutAgents_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALearningAgentsManager_GetAllAgents_Statics::NewProp_OutAgents,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALearningAgentsManager_GetAllAgents_Statics::NewProp_OutAgentIds_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALearningAgentsManager_GetAllAgents_Statics::NewProp_OutAgentIds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALearningAgentsManager_GetAllAgents_Statics::NewProp_AgentClass,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALearningAgentsManager_GetAllAgents_Statics::Function_MetaDataParams[] = {
		{ "Category", "LearningAgents" },
		{ "Comment", "/**\n\x09 * Gets all added agents. Calling this from blueprint with the appropriate AgentClass will automatically\n\x09 * cast the object to the given type.\n\x09 * @param AgentClass The class to cast the agent objects to (in blueprint).\n\x09 * @param OutAgents The output array of agent objects.\n\x09 * @param OutAgentIds The output array of agent ids.\n\x09 */" },
		{ "DeterminesOutputType", "AgentClass" },
		{ "DynamicOutputParam", "OutAgents" },
		{ "ModuleRelativePath", "Public/LearningAgentsManager.h" },
		{ "ToolTip", "Gets all added agents. Calling this from blueprint with the appropriate AgentClass will automatically\ncast the object to the given type.\n@param AgentClass The class to cast the agent objects to (in blueprint).\n@param OutAgents The output array of agent objects.\n@param OutAgentIds The output array of agent ids." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALearningAgentsManager_GetAllAgents_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALearningAgentsManager, nullptr, "GetAllAgents", nullptr, nullptr, Z_Construct_UFunction_ALearningAgentsManager_GetAllAgents_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALearningAgentsManager_GetAllAgents_Statics::PropPointers), sizeof(Z_Construct_UFunction_ALearningAgentsManager_GetAllAgents_Statics::LearningAgentsManager_eventGetAllAgents_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALearningAgentsManager_GetAllAgents_Statics::Function_MetaDataParams), Z_Construct_UFunction_ALearningAgentsManager_GetAllAgents_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ALearningAgentsManager_GetAllAgents_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ALearningAgentsManager_GetAllAgents_Statics::LearningAgentsManager_eventGetAllAgents_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ALearningAgentsManager_GetAllAgents()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALearningAgentsManager_GetAllAgents_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALearningAgentsManager_GetMaxAgentNum_Statics
	{
		struct LearningAgentsManager_eventGetMaxAgentNum_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ALearningAgentsManager_GetMaxAgentNum_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LearningAgentsManager_eventGetMaxAgentNum_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALearningAgentsManager_GetMaxAgentNum_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALearningAgentsManager_GetMaxAgentNum_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALearningAgentsManager_GetMaxAgentNum_Statics::Function_MetaDataParams[] = {
		{ "Category", "LearningAgents" },
		{ "Comment", "/** Returns the maximum number of agents that this manager is configured to handle. */" },
		{ "ModuleRelativePath", "Public/LearningAgentsManager.h" },
		{ "ToolTip", "Returns the maximum number of agents that this manager is configured to handle." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALearningAgentsManager_GetMaxAgentNum_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALearningAgentsManager, nullptr, "GetMaxAgentNum", nullptr, nullptr, Z_Construct_UFunction_ALearningAgentsManager_GetMaxAgentNum_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALearningAgentsManager_GetMaxAgentNum_Statics::PropPointers), sizeof(Z_Construct_UFunction_ALearningAgentsManager_GetMaxAgentNum_Statics::LearningAgentsManager_eventGetMaxAgentNum_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALearningAgentsManager_GetMaxAgentNum_Statics::Function_MetaDataParams), Z_Construct_UFunction_ALearningAgentsManager_GetMaxAgentNum_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ALearningAgentsManager_GetMaxAgentNum_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ALearningAgentsManager_GetMaxAgentNum_Statics::LearningAgentsManager_eventGetMaxAgentNum_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ALearningAgentsManager_GetMaxAgentNum()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALearningAgentsManager_GetMaxAgentNum_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALearningAgentsManager_HasAgent_Statics
	{
		struct LearningAgentsManager_eventHasAgent_Parms
		{
			int32 AgentId;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AgentId_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_AgentId;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALearningAgentsManager_HasAgent_Statics::NewProp_AgentId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ALearningAgentsManager_HasAgent_Statics::NewProp_AgentId = { "AgentId", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LearningAgentsManager_eventHasAgent_Parms, AgentId), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALearningAgentsManager_HasAgent_Statics::NewProp_AgentId_MetaData), Z_Construct_UFunction_ALearningAgentsManager_HasAgent_Statics::NewProp_AgentId_MetaData) };
	void Z_Construct_UFunction_ALearningAgentsManager_HasAgent_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LearningAgentsManager_eventHasAgent_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ALearningAgentsManager_HasAgent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LearningAgentsManager_eventHasAgent_Parms), &Z_Construct_UFunction_ALearningAgentsManager_HasAgent_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALearningAgentsManager_HasAgent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALearningAgentsManager_HasAgent_Statics::NewProp_AgentId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALearningAgentsManager_HasAgent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALearningAgentsManager_HasAgent_Statics::Function_MetaDataParams[] = {
		{ "AgentId", "-1" },
		{ "Category", "LearningAgents" },
		{ "Comment", "/** Returns true if the given id is an agent used by the manager; Otherwise, false. */" },
		{ "ModuleRelativePath", "Public/LearningAgentsManager.h" },
		{ "ToolTip", "Returns true if the given id is an agent used by the manager; Otherwise, false." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALearningAgentsManager_HasAgent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALearningAgentsManager, nullptr, "HasAgent", nullptr, nullptr, Z_Construct_UFunction_ALearningAgentsManager_HasAgent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALearningAgentsManager_HasAgent_Statics::PropPointers), sizeof(Z_Construct_UFunction_ALearningAgentsManager_HasAgent_Statics::LearningAgentsManager_eventHasAgent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALearningAgentsManager_HasAgent_Statics::Function_MetaDataParams), Z_Construct_UFunction_ALearningAgentsManager_HasAgent_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ALearningAgentsManager_HasAgent_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ALearningAgentsManager_HasAgent_Statics::LearningAgentsManager_eventHasAgent_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ALearningAgentsManager_HasAgent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALearningAgentsManager_HasAgent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALearningAgentsManager_HasAgentObject_Statics
	{
		struct LearningAgentsManager_eventHasAgentObject_Parms
		{
			UObject* Agent;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Agent;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALearningAgentsManager_HasAgentObject_Statics::NewProp_Agent = { "Agent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LearningAgentsManager_eventHasAgentObject_Parms, Agent), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_ALearningAgentsManager_HasAgentObject_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LearningAgentsManager_eventHasAgentObject_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ALearningAgentsManager_HasAgentObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LearningAgentsManager_eventHasAgentObject_Parms), &Z_Construct_UFunction_ALearningAgentsManager_HasAgentObject_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALearningAgentsManager_HasAgentObject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALearningAgentsManager_HasAgentObject_Statics::NewProp_Agent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALearningAgentsManager_HasAgentObject_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALearningAgentsManager_HasAgentObject_Statics::Function_MetaDataParams[] = {
		{ "Category", "LearningAgents" },
		{ "Comment", "/** Returns true if the given object is an agent used by the manager; Otherwise, false. */" },
		{ "ModuleRelativePath", "Public/LearningAgentsManager.h" },
		{ "ToolTip", "Returns true if the given object is an agent used by the manager; Otherwise, false." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALearningAgentsManager_HasAgentObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALearningAgentsManager, nullptr, "HasAgentObject", nullptr, nullptr, Z_Construct_UFunction_ALearningAgentsManager_HasAgentObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALearningAgentsManager_HasAgentObject_Statics::PropPointers), sizeof(Z_Construct_UFunction_ALearningAgentsManager_HasAgentObject_Statics::LearningAgentsManager_eventHasAgentObject_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALearningAgentsManager_HasAgentObject_Statics::Function_MetaDataParams), Z_Construct_UFunction_ALearningAgentsManager_HasAgentObject_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ALearningAgentsManager_HasAgentObject_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ALearningAgentsManager_HasAgentObject_Statics::LearningAgentsManager_eventHasAgentObject_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ALearningAgentsManager_HasAgentObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALearningAgentsManager_HasAgentObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALearningAgentsManager_RemoveAgent_Statics
	{
		struct LearningAgentsManager_eventRemoveAgent_Parms
		{
			int32 AgentId;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AgentId_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_AgentId;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALearningAgentsManager_RemoveAgent_Statics::NewProp_AgentId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ALearningAgentsManager_RemoveAgent_Statics::NewProp_AgentId = { "AgentId", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LearningAgentsManager_eventRemoveAgent_Parms, AgentId), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALearningAgentsManager_RemoveAgent_Statics::NewProp_AgentId_MetaData), Z_Construct_UFunction_ALearningAgentsManager_RemoveAgent_Statics::NewProp_AgentId_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALearningAgentsManager_RemoveAgent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALearningAgentsManager_RemoveAgent_Statics::NewProp_AgentId,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALearningAgentsManager_RemoveAgent_Statics::Function_MetaDataParams[] = {
		{ "AgentId", "-1" },
		{ "Category", "LearningAgents" },
		{ "Comment", "/**\n\x09 * Removes the agent with the given id from the manager.\n\x09 * @param AgentId The id of the agent to remove.\n\x09 */" },
		{ "ModuleRelativePath", "Public/LearningAgentsManager.h" },
		{ "ToolTip", "Removes the agent with the given id from the manager.\n@param AgentId The id of the agent to remove." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALearningAgentsManager_RemoveAgent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALearningAgentsManager, nullptr, "RemoveAgent", nullptr, nullptr, Z_Construct_UFunction_ALearningAgentsManager_RemoveAgent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALearningAgentsManager_RemoveAgent_Statics::PropPointers), sizeof(Z_Construct_UFunction_ALearningAgentsManager_RemoveAgent_Statics::LearningAgentsManager_eventRemoveAgent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALearningAgentsManager_RemoveAgent_Statics::Function_MetaDataParams), Z_Construct_UFunction_ALearningAgentsManager_RemoveAgent_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ALearningAgentsManager_RemoveAgent_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ALearningAgentsManager_RemoveAgent_Statics::LearningAgentsManager_eventRemoveAgent_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ALearningAgentsManager_RemoveAgent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALearningAgentsManager_RemoveAgent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALearningAgentsManager_RemoveAgents_Statics
	{
		struct LearningAgentsManager_eventRemoveAgents_Parms
		{
			TArray<int32> AgentIds;
		};
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
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ALearningAgentsManager_RemoveAgents_Statics::NewProp_AgentIds_Inner = { "AgentIds", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALearningAgentsManager_RemoveAgents_Statics::NewProp_AgentIds_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ALearningAgentsManager_RemoveAgents_Statics::NewProp_AgentIds = { "AgentIds", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LearningAgentsManager_eventRemoveAgents_Parms, AgentIds), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALearningAgentsManager_RemoveAgents_Statics::NewProp_AgentIds_MetaData), Z_Construct_UFunction_ALearningAgentsManager_RemoveAgents_Statics::NewProp_AgentIds_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALearningAgentsManager_RemoveAgents_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALearningAgentsManager_RemoveAgents_Statics::NewProp_AgentIds_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALearningAgentsManager_RemoveAgents_Statics::NewProp_AgentIds,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALearningAgentsManager_RemoveAgents_Statics::Function_MetaDataParams[] = {
		{ "Category", "LearningAgents" },
		{ "Comment", "/**\n\x09 * Removes the agents with the given ids from the manager.\n\x09 * @param AgentIds The ids of the agents to remove.\n\x09 */" },
		{ "ModuleRelativePath", "Public/LearningAgentsManager.h" },
		{ "ToolTip", "Removes the agents with the given ids from the manager.\n@param AgentIds The ids of the agents to remove." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALearningAgentsManager_RemoveAgents_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALearningAgentsManager, nullptr, "RemoveAgents", nullptr, nullptr, Z_Construct_UFunction_ALearningAgentsManager_RemoveAgents_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALearningAgentsManager_RemoveAgents_Statics::PropPointers), sizeof(Z_Construct_UFunction_ALearningAgentsManager_RemoveAgents_Statics::LearningAgentsManager_eventRemoveAgents_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALearningAgentsManager_RemoveAgents_Statics::Function_MetaDataParams), Z_Construct_UFunction_ALearningAgentsManager_RemoveAgents_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ALearningAgentsManager_RemoveAgents_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ALearningAgentsManager_RemoveAgents_Statics::LearningAgentsManager_eventRemoveAgents_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ALearningAgentsManager_RemoveAgents()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALearningAgentsManager_RemoveAgents_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALearningAgentsManager_RemoveAllAgents_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALearningAgentsManager_RemoveAllAgents_Statics::Function_MetaDataParams[] = {
		{ "Category", "LearningAgents" },
		{ "Comment", "/** Removes all agents from the manager. */" },
		{ "ModuleRelativePath", "Public/LearningAgentsManager.h" },
		{ "ToolTip", "Removes all agents from the manager." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALearningAgentsManager_RemoveAllAgents_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALearningAgentsManager, nullptr, "RemoveAllAgents", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALearningAgentsManager_RemoveAllAgents_Statics::Function_MetaDataParams), Z_Construct_UFunction_ALearningAgentsManager_RemoveAllAgents_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ALearningAgentsManager_RemoveAllAgents()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALearningAgentsManager_RemoveAllAgents_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALearningAgentsManager_ResetAgent_Statics
	{
		struct LearningAgentsManager_eventResetAgent_Parms
		{
			int32 AgentId;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AgentId_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_AgentId;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALearningAgentsManager_ResetAgent_Statics::NewProp_AgentId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ALearningAgentsManager_ResetAgent_Statics::NewProp_AgentId = { "AgentId", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LearningAgentsManager_eventResetAgent_Parms, AgentId), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALearningAgentsManager_ResetAgent_Statics::NewProp_AgentId_MetaData), Z_Construct_UFunction_ALearningAgentsManager_ResetAgent_Statics::NewProp_AgentId_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALearningAgentsManager_ResetAgent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALearningAgentsManager_ResetAgent_Statics::NewProp_AgentId,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALearningAgentsManager_ResetAgent_Statics::Function_MetaDataParams[] = {
		{ "AgentId", "-1" },
		{ "Category", "LearningAgents" },
		{ "Comment", "/**\n\x09 * Resets the agent with the given id on the manager. Used to tell components to reset any state associated with this agent.\n\x09 * @param AgentId The id of the agent to reset.\n\x09 */" },
		{ "ModuleRelativePath", "Public/LearningAgentsManager.h" },
		{ "ToolTip", "Resets the agent with the given id on the manager. Used to tell components to reset any state associated with this agent.\n@param AgentId The id of the agent to reset." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALearningAgentsManager_ResetAgent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALearningAgentsManager, nullptr, "ResetAgent", nullptr, nullptr, Z_Construct_UFunction_ALearningAgentsManager_ResetAgent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALearningAgentsManager_ResetAgent_Statics::PropPointers), sizeof(Z_Construct_UFunction_ALearningAgentsManager_ResetAgent_Statics::LearningAgentsManager_eventResetAgent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALearningAgentsManager_ResetAgent_Statics::Function_MetaDataParams), Z_Construct_UFunction_ALearningAgentsManager_ResetAgent_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ALearningAgentsManager_ResetAgent_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ALearningAgentsManager_ResetAgent_Statics::LearningAgentsManager_eventResetAgent_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ALearningAgentsManager_ResetAgent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALearningAgentsManager_ResetAgent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALearningAgentsManager_ResetAgents_Statics
	{
		struct LearningAgentsManager_eventResetAgents_Parms
		{
			TArray<int32> AgentIds;
		};
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
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ALearningAgentsManager_ResetAgents_Statics::NewProp_AgentIds_Inner = { "AgentIds", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALearningAgentsManager_ResetAgents_Statics::NewProp_AgentIds_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ALearningAgentsManager_ResetAgents_Statics::NewProp_AgentIds = { "AgentIds", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LearningAgentsManager_eventResetAgents_Parms, AgentIds), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALearningAgentsManager_ResetAgents_Statics::NewProp_AgentIds_MetaData), Z_Construct_UFunction_ALearningAgentsManager_ResetAgents_Statics::NewProp_AgentIds_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALearningAgentsManager_ResetAgents_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALearningAgentsManager_ResetAgents_Statics::NewProp_AgentIds_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALearningAgentsManager_ResetAgents_Statics::NewProp_AgentIds,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALearningAgentsManager_ResetAgents_Statics::Function_MetaDataParams[] = {
		{ "Category", "LearningAgents" },
		{ "Comment", "/**\n\x09 * Resets the agents with the given ids on the manager. Used to tell components to reset any state associated with this agent.\n\x09 * @param AgentIds The ids of the agents to reset.\n\x09 */" },
		{ "ModuleRelativePath", "Public/LearningAgentsManager.h" },
		{ "ToolTip", "Resets the agents with the given ids on the manager. Used to tell components to reset any state associated with this agent.\n@param AgentIds The ids of the agents to reset." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALearningAgentsManager_ResetAgents_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALearningAgentsManager, nullptr, "ResetAgents", nullptr, nullptr, Z_Construct_UFunction_ALearningAgentsManager_ResetAgents_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALearningAgentsManager_ResetAgents_Statics::PropPointers), sizeof(Z_Construct_UFunction_ALearningAgentsManager_ResetAgents_Statics::LearningAgentsManager_eventResetAgents_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALearningAgentsManager_ResetAgents_Statics::Function_MetaDataParams), Z_Construct_UFunction_ALearningAgentsManager_ResetAgents_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ALearningAgentsManager_ResetAgents_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ALearningAgentsManager_ResetAgents_Statics::LearningAgentsManager_eventResetAgents_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ALearningAgentsManager_ResetAgents()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALearningAgentsManager_ResetAgents_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALearningAgentsManager_ResetAllAgents_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALearningAgentsManager_ResetAllAgents_Statics::Function_MetaDataParams[] = {
		{ "Category", "LearningAgents" },
		{ "Comment", "/** Resets all the agents on the manager. */" },
		{ "ModuleRelativePath", "Public/LearningAgentsManager.h" },
		{ "ToolTip", "Resets all the agents on the manager." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALearningAgentsManager_ResetAllAgents_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALearningAgentsManager, nullptr, "ResetAllAgents", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALearningAgentsManager_ResetAllAgents_Statics::Function_MetaDataParams), Z_Construct_UFunction_ALearningAgentsManager_ResetAllAgents_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ALearningAgentsManager_ResetAllAgents()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALearningAgentsManager_ResetAllAgents_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ALearningAgentsManager);
	UClass* Z_Construct_UClass_ALearningAgentsManager_NoRegister()
	{
		return ALearningAgentsManager::StaticClass();
	}
	struct Z_Construct_UClass_ALearningAgentsManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxAgentNum_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxAgentNum;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Agents_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Agents_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Agents;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ALearningAgentsManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_LearningAgents,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ALearningAgentsManager_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_ALearningAgentsManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ALearningAgentsManager_AddAgent, "AddAgent" }, // 1158763552
		{ &Z_Construct_UFunction_ALearningAgentsManager_AddAgents, "AddAgents" }, // 36263263
		{ &Z_Construct_UFunction_ALearningAgentsManager_AddAgentsAsTickPrerequisiteOfManager, "AddAgentsAsTickPrerequisiteOfManager" }, // 3673590485
		{ &Z_Construct_UFunction_ALearningAgentsManager_AddManagerAsTickPrerequisiteOfAgents, "AddManagerAsTickPrerequisiteOfAgents" }, // 74423022
		{ &Z_Construct_UFunction_ALearningAgentsManager_GetAgent, "GetAgent" }, // 100362077
		{ &Z_Construct_UFunction_ALearningAgentsManager_GetAgentId, "GetAgentId" }, // 3414890322
		{ &Z_Construct_UFunction_ALearningAgentsManager_GetAgentIds, "GetAgentIds" }, // 2845406904
		{ &Z_Construct_UFunction_ALearningAgentsManager_GetAgentNum, "GetAgentNum" }, // 2178956036
		{ &Z_Construct_UFunction_ALearningAgentsManager_GetAgents, "GetAgents" }, // 1254290271
		{ &Z_Construct_UFunction_ALearningAgentsManager_GetAllAgents, "GetAllAgents" }, // 2995380862
		{ &Z_Construct_UFunction_ALearningAgentsManager_GetMaxAgentNum, "GetMaxAgentNum" }, // 2106716929
		{ &Z_Construct_UFunction_ALearningAgentsManager_HasAgent, "HasAgent" }, // 3598975503
		{ &Z_Construct_UFunction_ALearningAgentsManager_HasAgentObject, "HasAgentObject" }, // 3075460155
		{ &Z_Construct_UFunction_ALearningAgentsManager_RemoveAgent, "RemoveAgent" }, // 2528192427
		{ &Z_Construct_UFunction_ALearningAgentsManager_RemoveAgents, "RemoveAgents" }, // 3908641881
		{ &Z_Construct_UFunction_ALearningAgentsManager_RemoveAllAgents, "RemoveAllAgents" }, // 2154576708
		{ &Z_Construct_UFunction_ALearningAgentsManager_ResetAgent, "ResetAgent" }, // 3445663145
		{ &Z_Construct_UFunction_ALearningAgentsManager_ResetAgents, "ResetAgents" }, // 1595052324
		{ &Z_Construct_UFunction_ALearningAgentsManager_ResetAllAgents, "ResetAllAgents" }, // 1213469482
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ALearningAgentsManager_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALearningAgentsManager_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * The agent manager is responsible for tracking which game objects are agents. It's the central class around which\n * most of Learning Agents is built.\n *\n * If you have multiple different types of objects you want controlled by Learning Agents, you should consider creating\n * one agent manager per object type, rather than trying to share an agent manager.\n */" },
		{ "IncludePath", "LearningAgentsManager.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/LearningAgentsManager.h" },
		{ "ToolTip", "The agent manager is responsible for tracking which game objects are agents. It's the central class around which\nmost of Learning Agents is built.\n\nIf you have multiple different types of objects you want controlled by Learning Agents, you should consider creating\none agent manager per object type, rather than trying to share an agent manager." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALearningAgentsManager_Statics::NewProp_MaxAgentNum_MetaData[] = {
		{ "Category", "LearningAgents" },
		{ "ClampMin", "1" },
		{ "Comment", "/** Maximum number of agents. Used to preallocate internal buffers. Setting this higher will allow more agents but use up more memory. */" },
		{ "ModuleRelativePath", "Public/LearningAgentsManager.h" },
		{ "ToolTip", "Maximum number of agents. Used to preallocate internal buffers. Setting this higher will allow more agents but use up more memory." },
		{ "UIMin", "1" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ALearningAgentsManager_Statics::NewProp_MaxAgentNum = { "MaxAgentNum", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALearningAgentsManager, MaxAgentNum), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ALearningAgentsManager_Statics::NewProp_MaxAgentNum_MetaData), Z_Construct_UClass_ALearningAgentsManager_Statics::NewProp_MaxAgentNum_MetaData) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ALearningAgentsManager_Statics::NewProp_Agents_Inner = { "Agents", nullptr, (EPropertyFlags)0x0004000000020000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALearningAgentsManager_Statics::NewProp_Agents_MetaData[] = {
		{ "Category", "LearningAgents" },
		{ "Comment", "/** The list of current agents. */" },
		{ "ModuleRelativePath", "Public/LearningAgentsManager.h" },
		{ "ToolTip", "The list of current agents." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ALearningAgentsManager_Statics::NewProp_Agents = { "Agents", nullptr, (EPropertyFlags)0x0044000000022001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALearningAgentsManager, Agents), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ALearningAgentsManager_Statics::NewProp_Agents_MetaData), Z_Construct_UClass_ALearningAgentsManager_Statics::NewProp_Agents_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ALearningAgentsManager_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALearningAgentsManager_Statics::NewProp_MaxAgentNum,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALearningAgentsManager_Statics::NewProp_Agents_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALearningAgentsManager_Statics::NewProp_Agents,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ALearningAgentsManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALearningAgentsManager>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ALearningAgentsManager_Statics::ClassParams = {
		&ALearningAgentsManager::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ALearningAgentsManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ALearningAgentsManager_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ALearningAgentsManager_Statics::Class_MetaDataParams), Z_Construct_UClass_ALearningAgentsManager_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ALearningAgentsManager_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ALearningAgentsManager()
	{
		if (!Z_Registration_Info_UClass_ALearningAgentsManager.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ALearningAgentsManager.OuterSingleton, Z_Construct_UClass_ALearningAgentsManager_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ALearningAgentsManager.OuterSingleton;
	}
	template<> LEARNINGAGENTS_API UClass* StaticClass<ALearningAgentsManager>()
	{
		return ALearningAgentsManager::StaticClass();
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsManager_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsManager_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ALearningAgentsManager, ALearningAgentsManager::StaticClass, TEXT("ALearningAgentsManager"), &Z_Registration_Info_UClass_ALearningAgentsManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ALearningAgentsManager), 743255762U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsManager_h_1988851321(TEXT("/Script/LearningAgents"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsManager_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
