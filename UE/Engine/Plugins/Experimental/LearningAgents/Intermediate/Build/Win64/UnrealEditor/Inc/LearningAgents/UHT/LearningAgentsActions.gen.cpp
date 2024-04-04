// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LearningAgentsActions.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLearningAgentsActions() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FQuat();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	LEARNINGAGENTS_API UClass* Z_Construct_UClass_UFloatAction();
	LEARNINGAGENTS_API UClass* Z_Construct_UClass_UFloatAction_NoRegister();
	LEARNINGAGENTS_API UClass* Z_Construct_UClass_UFloatArrayAction();
	LEARNINGAGENTS_API UClass* Z_Construct_UClass_UFloatArrayAction_NoRegister();
	LEARNINGAGENTS_API UClass* Z_Construct_UClass_ULearningAgentsAction();
	LEARNINGAGENTS_API UClass* Z_Construct_UClass_ULearningAgentsAction_NoRegister();
	LEARNINGAGENTS_API UClass* Z_Construct_UClass_ULearningAgentsInteractor_NoRegister();
	LEARNINGAGENTS_API UClass* Z_Construct_UClass_UPlanarVelocityAction();
	LEARNINGAGENTS_API UClass* Z_Construct_UClass_UPlanarVelocityAction_NoRegister();
	LEARNINGAGENTS_API UClass* Z_Construct_UClass_URotationAction();
	LEARNINGAGENTS_API UClass* Z_Construct_UClass_URotationAction_NoRegister();
	LEARNINGAGENTS_API UClass* Z_Construct_UClass_URotationArrayAction();
	LEARNINGAGENTS_API UClass* Z_Construct_UClass_URotationArrayAction_NoRegister();
	LEARNINGAGENTS_API UClass* Z_Construct_UClass_UVectorAction();
	LEARNINGAGENTS_API UClass* Z_Construct_UClass_UVectorAction_NoRegister();
	LEARNINGAGENTS_API UClass* Z_Construct_UClass_UVectorArrayAction();
	LEARNINGAGENTS_API UClass* Z_Construct_UClass_UVectorArrayAction_NoRegister();
	UPackage* Z_Construct_UPackage__Script_LearningAgents();
// End Cross Module References
	void ULearningAgentsAction::StaticRegisterNativesULearningAgentsAction()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULearningAgentsAction);
	UClass* Z_Construct_UClass_ULearningAgentsAction_NoRegister()
	{
		return ULearningAgentsAction::StaticClass();
	}
	struct Z_Construct_UClass_ULearningAgentsAction_Statics
	{
		static UObject* (*const DependentSingletons[])();
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
	UObject* (*const Z_Construct_UClass_ULearningAgentsAction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_LearningAgents,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULearningAgentsAction_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULearningAgentsAction_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * The base class for all actions. Actions define the outputs from your agents. Action getters are marked non-pure by\n * convention as many of them do non-trivial amounts of work that can cause performance issues when marked pure in \n * blueprints.\n */" },
		{ "IncludePath", "LearningAgentsActions.h" },
		{ "ModuleRelativePath", "Public/LearningAgentsActions.h" },
		{ "ToolTip", "The base class for all actions. Actions define the outputs from your agents. Action getters are marked non-pure by\nconvention as many of them do non-trivial amounts of work that can cause performance issues when marked pure in\nblueprints." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULearningAgentsAction_Statics::NewProp_Interactor_MetaData[] = {
		{ "Category", "LearningAgents" },
		{ "Comment", "/** Reference to the Interactor this action is associated with. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LearningAgentsActions.h" },
		{ "ToolTip", "Reference to the Interactor this action is associated with." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ULearningAgentsAction_Statics::NewProp_Interactor = { "Interactor", nullptr, (EPropertyFlags)0x00140000000a2009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULearningAgentsAction, Interactor), Z_Construct_UClass_ULearningAgentsInteractor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULearningAgentsAction_Statics::NewProp_Interactor_MetaData), Z_Construct_UClass_ULearningAgentsAction_Statics::NewProp_Interactor_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULearningAgentsAction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULearningAgentsAction_Statics::NewProp_Interactor,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULearningAgentsAction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULearningAgentsAction>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULearningAgentsAction_Statics::ClassParams = {
		&ULearningAgentsAction::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ULearningAgentsAction_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ULearningAgentsAction_Statics::PropPointers),
		0,
		0x009000A1u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULearningAgentsAction_Statics::Class_MetaDataParams), Z_Construct_UClass_ULearningAgentsAction_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULearningAgentsAction_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ULearningAgentsAction()
	{
		if (!Z_Registration_Info_UClass_ULearningAgentsAction.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULearningAgentsAction.OuterSingleton, Z_Construct_UClass_ULearningAgentsAction_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULearningAgentsAction.OuterSingleton;
	}
	template<> LEARNINGAGENTS_API UClass* StaticClass<ULearningAgentsAction>()
	{
		return ULearningAgentsAction::StaticClass();
	}
	ULearningAgentsAction::ULearningAgentsAction(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULearningAgentsAction);
	ULearningAgentsAction::~ULearningAgentsAction() {}
	DEFINE_FUNCTION(UFloatAction::execSetFloatAction)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_AgentId);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetFloatAction(Z_Param_AgentId,Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFloatAction::execGetFloatAction)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_AgentId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetFloatAction(Z_Param_AgentId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFloatAction::execAddFloatAction)
	{
		P_GET_OBJECT(ULearningAgentsInteractor,Z_Param_InInteractor);
		P_GET_PROPERTY(FNameProperty,Z_Param_Name);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Scale);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UFloatAction**)Z_Param__Result=UFloatAction::AddFloatAction(Z_Param_InInteractor,Z_Param_Name,Z_Param_Scale);
		P_NATIVE_END;
	}
	void UFloatAction::StaticRegisterNativesUFloatAction()
	{
		UClass* Class = UFloatAction::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddFloatAction", &UFloatAction::execAddFloatAction },
			{ "GetFloatAction", &UFloatAction::execGetFloatAction },
			{ "SetFloatAction", &UFloatAction::execSetFloatAction },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFloatAction_AddFloatAction_Statics
	{
		struct FloatAction_eventAddFloatAction_Parms
		{
			ULearningAgentsInteractor* InInteractor;
			FName Name;
			float Scale;
			UFloatAction* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InInteractor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InInteractor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Scale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Scale;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFloatAction_AddFloatAction_Statics::NewProp_InInteractor_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFloatAction_AddFloatAction_Statics::NewProp_InInteractor = { "InInteractor", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FloatAction_eventAddFloatAction_Parms, InInteractor), Z_Construct_UClass_ULearningAgentsInteractor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFloatAction_AddFloatAction_Statics::NewProp_InInteractor_MetaData), Z_Construct_UFunction_UFloatAction_AddFloatAction_Statics::NewProp_InInteractor_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFloatAction_AddFloatAction_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UFloatAction_AddFloatAction_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FloatAction_eventAddFloatAction_Parms, Name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFloatAction_AddFloatAction_Statics::NewProp_Name_MetaData), Z_Construct_UFunction_UFloatAction_AddFloatAction_Statics::NewProp_Name_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFloatAction_AddFloatAction_Statics::NewProp_Scale_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFloatAction_AddFloatAction_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FloatAction_eventAddFloatAction_Parms, Scale), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFloatAction_AddFloatAction_Statics::NewProp_Scale_MetaData), Z_Construct_UFunction_UFloatAction_AddFloatAction_Statics::NewProp_Scale_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFloatAction_AddFloatAction_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FloatAction_eventAddFloatAction_Parms, ReturnValue), Z_Construct_UClass_UFloatAction_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFloatAction_AddFloatAction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFloatAction_AddFloatAction_Statics::NewProp_InInteractor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFloatAction_AddFloatAction_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFloatAction_AddFloatAction_Statics::NewProp_Scale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFloatAction_AddFloatAction_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFloatAction_AddFloatAction_Statics::Function_MetaDataParams[] = {
		{ "Category", "LearningAgents" },
		{ "Comment", "/**\n\x09 * Adds a new float action to the given agent interactor. Call during ULearningAgentsInteractor::SetupActions event.\n\x09 * @param InInteractor The agent interactor to add this action to.\n\x09 * @param Name The name of this new action. Used for debugging.\n\x09 * @param Scale Used to normalize the data for the action.\n\x09 * @return The newly created action.\n\x09 */" },
		{ "CPP_Default_Name", "None" },
		{ "CPP_Default_Scale", "1.000000" },
		{ "DefaultToSelf", "InInteractor" },
		{ "ModuleRelativePath", "Public/LearningAgentsActions.h" },
		{ "ToolTip", "Adds a new float action to the given agent interactor. Call during ULearningAgentsInteractor::SetupActions event.\n@param InInteractor The agent interactor to add this action to.\n@param Name The name of this new action. Used for debugging.\n@param Scale Used to normalize the data for the action.\n@return The newly created action." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFloatAction_AddFloatAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFloatAction, nullptr, "AddFloatAction", nullptr, nullptr, Z_Construct_UFunction_UFloatAction_AddFloatAction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFloatAction_AddFloatAction_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFloatAction_AddFloatAction_Statics::FloatAction_eventAddFloatAction_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFloatAction_AddFloatAction_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFloatAction_AddFloatAction_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFloatAction_AddFloatAction_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UFloatAction_AddFloatAction_Statics::FloatAction_eventAddFloatAction_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UFloatAction_AddFloatAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFloatAction_AddFloatAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFloatAction_GetFloatAction_Statics
	{
		struct FloatAction_eventGetFloatAction_Parms
		{
			int32 AgentId;
			float ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AgentId_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_AgentId;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFloatAction_GetFloatAction_Statics::NewProp_AgentId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFloatAction_GetFloatAction_Statics::NewProp_AgentId = { "AgentId", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FloatAction_eventGetFloatAction_Parms, AgentId), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFloatAction_GetFloatAction_Statics::NewProp_AgentId_MetaData), Z_Construct_UFunction_UFloatAction_GetFloatAction_Statics::NewProp_AgentId_MetaData) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFloatAction_GetFloatAction_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FloatAction_eventGetFloatAction_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFloatAction_GetFloatAction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFloatAction_GetFloatAction_Statics::NewProp_AgentId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFloatAction_GetFloatAction_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFloatAction_GetFloatAction_Statics::Function_MetaDataParams[] = {
		{ "AgentId", "-1" },
		{ "Category", "LearningAgents" },
		{ "Comment", "/**\n\x09 * Gets the data for this action. Call during ULearningAgentsInteractor::GetActions event.\n\x09 * @param AgentId The agent id to get data for.\n\x09 * @return The current action value.\n\x09 */" },
		{ "ModuleRelativePath", "Public/LearningAgentsActions.h" },
		{ "ToolTip", "Gets the data for this action. Call during ULearningAgentsInteractor::GetActions event.\n@param AgentId The agent id to get data for.\n@return The current action value." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFloatAction_GetFloatAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFloatAction, nullptr, "GetFloatAction", nullptr, nullptr, Z_Construct_UFunction_UFloatAction_GetFloatAction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFloatAction_GetFloatAction_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFloatAction_GetFloatAction_Statics::FloatAction_eventGetFloatAction_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFloatAction_GetFloatAction_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFloatAction_GetFloatAction_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFloatAction_GetFloatAction_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UFloatAction_GetFloatAction_Statics::FloatAction_eventGetFloatAction_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UFloatAction_GetFloatAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFloatAction_GetFloatAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFloatAction_SetFloatAction_Statics
	{
		struct FloatAction_eventSetFloatAction_Parms
		{
			int32 AgentId;
			float Value;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AgentId_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_AgentId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFloatAction_SetFloatAction_Statics::NewProp_AgentId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFloatAction_SetFloatAction_Statics::NewProp_AgentId = { "AgentId", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FloatAction_eventSetFloatAction_Parms, AgentId), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFloatAction_SetFloatAction_Statics::NewProp_AgentId_MetaData), Z_Construct_UFunction_UFloatAction_SetFloatAction_Statics::NewProp_AgentId_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFloatAction_SetFloatAction_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFloatAction_SetFloatAction_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FloatAction_eventSetFloatAction_Parms, Value), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFloatAction_SetFloatAction_Statics::NewProp_Value_MetaData), Z_Construct_UFunction_UFloatAction_SetFloatAction_Statics::NewProp_Value_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFloatAction_SetFloatAction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFloatAction_SetFloatAction_Statics::NewProp_AgentId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFloatAction_SetFloatAction_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFloatAction_SetFloatAction_Statics::Function_MetaDataParams[] = {
		{ "AgentId", "-1" },
		{ "Category", "LearningAgents" },
		{ "Comment", "/**\n\x09 * Sets the data for this action. Call during ULearningAgentsController::SetActions event.\n\x09 * @param AgentId The agent id to set data for.\n\x09 * @param Value The current action value.\n\x09 */" },
		{ "ModuleRelativePath", "Public/LearningAgentsActions.h" },
		{ "ToolTip", "Sets the data for this action. Call during ULearningAgentsController::SetActions event.\n@param AgentId The agent id to set data for.\n@param Value The current action value." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFloatAction_SetFloatAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFloatAction, nullptr, "SetFloatAction", nullptr, nullptr, Z_Construct_UFunction_UFloatAction_SetFloatAction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFloatAction_SetFloatAction_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFloatAction_SetFloatAction_Statics::FloatAction_eventSetFloatAction_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFloatAction_SetFloatAction_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFloatAction_SetFloatAction_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFloatAction_SetFloatAction_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UFloatAction_SetFloatAction_Statics::FloatAction_eventSetFloatAction_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UFloatAction_SetFloatAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFloatAction_SetFloatAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFloatAction);
	UClass* Z_Construct_UClass_UFloatAction_NoRegister()
	{
		return UFloatAction::StaticClass();
	}
	struct Z_Construct_UClass_UFloatAction_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFloatAction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ULearningAgentsAction,
		(UObject* (*)())Z_Construct_UPackage__Script_LearningAgents,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFloatAction_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UFloatAction_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFloatAction_AddFloatAction, "AddFloatAction" }, // 4174383475
		{ &Z_Construct_UFunction_UFloatAction_GetFloatAction, "GetFloatAction" }, // 837896754
		{ &Z_Construct_UFunction_UFloatAction_SetFloatAction, "SetFloatAction" }, // 3093402600
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFloatAction_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFloatAction_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** A simple float action. Used as a catch-all for situations where a more type-specific action does not exist yet. */" },
		{ "IncludePath", "LearningAgentsActions.h" },
		{ "ModuleRelativePath", "Public/LearningAgentsActions.h" },
		{ "ToolTip", "A simple float action. Used as a catch-all for situations where a more type-specific action does not exist yet." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFloatAction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFloatAction>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UFloatAction_Statics::ClassParams = {
		&UFloatAction::StaticClass,
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
		0x009000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFloatAction_Statics::Class_MetaDataParams), Z_Construct_UClass_UFloatAction_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UFloatAction()
	{
		if (!Z_Registration_Info_UClass_UFloatAction.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFloatAction.OuterSingleton, Z_Construct_UClass_UFloatAction_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UFloatAction.OuterSingleton;
	}
	template<> LEARNINGAGENTS_API UClass* StaticClass<UFloatAction>()
	{
		return UFloatAction::StaticClass();
	}
	UFloatAction::UFloatAction(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFloatAction);
	UFloatAction::~UFloatAction() {}
	DEFINE_FUNCTION(UFloatArrayAction::execSetFloatArrayAction)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_AgentId);
		P_GET_TARRAY_REF(float,Z_Param_Out_Values);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetFloatArrayAction(Z_Param_AgentId,Z_Param_Out_Values);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFloatArrayAction::execGetFloatArrayAction)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_AgentId);
		P_GET_TARRAY_REF(float,Z_Param_Out_OutValues);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetFloatArrayAction(Z_Param_AgentId,Z_Param_Out_OutValues);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFloatArrayAction::execAddFloatArrayAction)
	{
		P_GET_OBJECT(ULearningAgentsInteractor,Z_Param_InInteractor);
		P_GET_PROPERTY(FNameProperty,Z_Param_Name);
		P_GET_PROPERTY(FIntProperty,Z_Param_Num);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Scale);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UFloatArrayAction**)Z_Param__Result=UFloatArrayAction::AddFloatArrayAction(Z_Param_InInteractor,Z_Param_Name,Z_Param_Num,Z_Param_Scale);
		P_NATIVE_END;
	}
	void UFloatArrayAction::StaticRegisterNativesUFloatArrayAction()
	{
		UClass* Class = UFloatArrayAction::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddFloatArrayAction", &UFloatArrayAction::execAddFloatArrayAction },
			{ "GetFloatArrayAction", &UFloatArrayAction::execGetFloatArrayAction },
			{ "SetFloatArrayAction", &UFloatArrayAction::execSetFloatArrayAction },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFloatArrayAction_AddFloatArrayAction_Statics
	{
		struct FloatArrayAction_eventAddFloatArrayAction_Parms
		{
			ULearningAgentsInteractor* InInteractor;
			FName Name;
			int32 Num;
			float Scale;
			UFloatArrayAction* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InInteractor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InInteractor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Num_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Num;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Scale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Scale;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFloatArrayAction_AddFloatArrayAction_Statics::NewProp_InInteractor_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFloatArrayAction_AddFloatArrayAction_Statics::NewProp_InInteractor = { "InInteractor", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FloatArrayAction_eventAddFloatArrayAction_Parms, InInteractor), Z_Construct_UClass_ULearningAgentsInteractor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFloatArrayAction_AddFloatArrayAction_Statics::NewProp_InInteractor_MetaData), Z_Construct_UFunction_UFloatArrayAction_AddFloatArrayAction_Statics::NewProp_InInteractor_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFloatArrayAction_AddFloatArrayAction_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UFloatArrayAction_AddFloatArrayAction_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FloatArrayAction_eventAddFloatArrayAction_Parms, Name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFloatArrayAction_AddFloatArrayAction_Statics::NewProp_Name_MetaData), Z_Construct_UFunction_UFloatArrayAction_AddFloatArrayAction_Statics::NewProp_Name_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFloatArrayAction_AddFloatArrayAction_Statics::NewProp_Num_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFloatArrayAction_AddFloatArrayAction_Statics::NewProp_Num = { "Num", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FloatArrayAction_eventAddFloatArrayAction_Parms, Num), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFloatArrayAction_AddFloatArrayAction_Statics::NewProp_Num_MetaData), Z_Construct_UFunction_UFloatArrayAction_AddFloatArrayAction_Statics::NewProp_Num_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFloatArrayAction_AddFloatArrayAction_Statics::NewProp_Scale_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFloatArrayAction_AddFloatArrayAction_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FloatArrayAction_eventAddFloatArrayAction_Parms, Scale), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFloatArrayAction_AddFloatArrayAction_Statics::NewProp_Scale_MetaData), Z_Construct_UFunction_UFloatArrayAction_AddFloatArrayAction_Statics::NewProp_Scale_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFloatArrayAction_AddFloatArrayAction_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FloatArrayAction_eventAddFloatArrayAction_Parms, ReturnValue), Z_Construct_UClass_UFloatArrayAction_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFloatArrayAction_AddFloatArrayAction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFloatArrayAction_AddFloatArrayAction_Statics::NewProp_InInteractor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFloatArrayAction_AddFloatArrayAction_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFloatArrayAction_AddFloatArrayAction_Statics::NewProp_Num,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFloatArrayAction_AddFloatArrayAction_Statics::NewProp_Scale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFloatArrayAction_AddFloatArrayAction_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFloatArrayAction_AddFloatArrayAction_Statics::Function_MetaDataParams[] = {
		{ "Category", "LearningAgents" },
		{ "Comment", "/**\n\x09 * Adds a new float array action to the given agent interactor. Call during ULearningAgentsInteractor::SetupActions event.\n\x09 * @param InInteractor The agent interactor to add this action to.\n\x09 * @param Name The name of this new action. Used for debugging.\n\x09 * @param Num The number of floats in the array\n\x09 * @param Scale Used to normalize the data for the action.\n\x09 * @return The newly created action.\n\x09 */" },
		{ "CPP_Default_Name", "None" },
		{ "CPP_Default_Num", "1" },
		{ "CPP_Default_Scale", "1.000000" },
		{ "DefaultToSelf", "InInteractor" },
		{ "ModuleRelativePath", "Public/LearningAgentsActions.h" },
		{ "ToolTip", "Adds a new float array action to the given agent interactor. Call during ULearningAgentsInteractor::SetupActions event.\n@param InInteractor The agent interactor to add this action to.\n@param Name The name of this new action. Used for debugging.\n@param Num The number of floats in the array\n@param Scale Used to normalize the data for the action.\n@return The newly created action." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFloatArrayAction_AddFloatArrayAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFloatArrayAction, nullptr, "AddFloatArrayAction", nullptr, nullptr, Z_Construct_UFunction_UFloatArrayAction_AddFloatArrayAction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFloatArrayAction_AddFloatArrayAction_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFloatArrayAction_AddFloatArrayAction_Statics::FloatArrayAction_eventAddFloatArrayAction_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFloatArrayAction_AddFloatArrayAction_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFloatArrayAction_AddFloatArrayAction_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFloatArrayAction_AddFloatArrayAction_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UFloatArrayAction_AddFloatArrayAction_Statics::FloatArrayAction_eventAddFloatArrayAction_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UFloatArrayAction_AddFloatArrayAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFloatArrayAction_AddFloatArrayAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFloatArrayAction_GetFloatArrayAction_Statics
	{
		struct FloatArrayAction_eventGetFloatArrayAction_Parms
		{
			int32 AgentId;
			TArray<float> OutValues;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AgentId_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_AgentId;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OutValues_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutValues;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFloatArrayAction_GetFloatArrayAction_Statics::NewProp_AgentId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFloatArrayAction_GetFloatArrayAction_Statics::NewProp_AgentId = { "AgentId", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FloatArrayAction_eventGetFloatArrayAction_Parms, AgentId), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFloatArrayAction_GetFloatArrayAction_Statics::NewProp_AgentId_MetaData), Z_Construct_UFunction_UFloatArrayAction_GetFloatArrayAction_Statics::NewProp_AgentId_MetaData) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFloatArrayAction_GetFloatArrayAction_Statics::NewProp_OutValues_Inner = { "OutValues", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFloatArrayAction_GetFloatArrayAction_Statics::NewProp_OutValues = { "OutValues", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FloatArrayAction_eventGetFloatArrayAction_Parms, OutValues), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFloatArrayAction_GetFloatArrayAction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFloatArrayAction_GetFloatArrayAction_Statics::NewProp_AgentId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFloatArrayAction_GetFloatArrayAction_Statics::NewProp_OutValues_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFloatArrayAction_GetFloatArrayAction_Statics::NewProp_OutValues,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFloatArrayAction_GetFloatArrayAction_Statics::Function_MetaDataParams[] = {
		{ "AgentId", "-1" },
		{ "Category", "LearningAgents" },
		{ "Comment", "/**\n\x09 * Gets the data for this action. Call during ULearningAgentsInteractor::GetActions event.\n\x09 * @param AgentId The agent id to get data for.\n\x09 * @param OutValues The output array of floats\n\x09 */" },
		{ "ModuleRelativePath", "Public/LearningAgentsActions.h" },
		{ "ToolTip", "Gets the data for this action. Call during ULearningAgentsInteractor::GetActions event.\n@param AgentId The agent id to get data for.\n@param OutValues The output array of floats" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFloatArrayAction_GetFloatArrayAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFloatArrayAction, nullptr, "GetFloatArrayAction", nullptr, nullptr, Z_Construct_UFunction_UFloatArrayAction_GetFloatArrayAction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFloatArrayAction_GetFloatArrayAction_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFloatArrayAction_GetFloatArrayAction_Statics::FloatArrayAction_eventGetFloatArrayAction_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFloatArrayAction_GetFloatArrayAction_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFloatArrayAction_GetFloatArrayAction_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFloatArrayAction_GetFloatArrayAction_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UFloatArrayAction_GetFloatArrayAction_Statics::FloatArrayAction_eventGetFloatArrayAction_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UFloatArrayAction_GetFloatArrayAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFloatArrayAction_GetFloatArrayAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFloatArrayAction_SetFloatArrayAction_Statics
	{
		struct FloatArrayAction_eventSetFloatArrayAction_Parms
		{
			int32 AgentId;
			TArray<float> Values;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AgentId_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_AgentId;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Values_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Values_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Values;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFloatArrayAction_SetFloatArrayAction_Statics::NewProp_AgentId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFloatArrayAction_SetFloatArrayAction_Statics::NewProp_AgentId = { "AgentId", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FloatArrayAction_eventSetFloatArrayAction_Parms, AgentId), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFloatArrayAction_SetFloatArrayAction_Statics::NewProp_AgentId_MetaData), Z_Construct_UFunction_UFloatArrayAction_SetFloatArrayAction_Statics::NewProp_AgentId_MetaData) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFloatArrayAction_SetFloatArrayAction_Statics::NewProp_Values_Inner = { "Values", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFloatArrayAction_SetFloatArrayAction_Statics::NewProp_Values_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFloatArrayAction_SetFloatArrayAction_Statics::NewProp_Values = { "Values", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FloatArrayAction_eventSetFloatArrayAction_Parms, Values), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFloatArrayAction_SetFloatArrayAction_Statics::NewProp_Values_MetaData), Z_Construct_UFunction_UFloatArrayAction_SetFloatArrayAction_Statics::NewProp_Values_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFloatArrayAction_SetFloatArrayAction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFloatArrayAction_SetFloatArrayAction_Statics::NewProp_AgentId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFloatArrayAction_SetFloatArrayAction_Statics::NewProp_Values_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFloatArrayAction_SetFloatArrayAction_Statics::NewProp_Values,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFloatArrayAction_SetFloatArrayAction_Statics::Function_MetaDataParams[] = {
		{ "AgentId", "-1" },
		{ "Category", "LearningAgents" },
		{ "Comment", "/**\n\x09 * Sets the data for this action. Call during ULearningAgentsController::SetActions event.\n\x09 * @param AgentId The agent id to set data for.\n\x09 * @param Values The current action values.\n\x09 */" },
		{ "ModuleRelativePath", "Public/LearningAgentsActions.h" },
		{ "ToolTip", "Sets the data for this action. Call during ULearningAgentsController::SetActions event.\n@param AgentId The agent id to set data for.\n@param Values The current action values." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFloatArrayAction_SetFloatArrayAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFloatArrayAction, nullptr, "SetFloatArrayAction", nullptr, nullptr, Z_Construct_UFunction_UFloatArrayAction_SetFloatArrayAction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFloatArrayAction_SetFloatArrayAction_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFloatArrayAction_SetFloatArrayAction_Statics::FloatArrayAction_eventSetFloatArrayAction_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFloatArrayAction_SetFloatArrayAction_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFloatArrayAction_SetFloatArrayAction_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFloatArrayAction_SetFloatArrayAction_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UFloatArrayAction_SetFloatArrayAction_Statics::FloatArrayAction_eventSetFloatArrayAction_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UFloatArrayAction_SetFloatArrayAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFloatArrayAction_SetFloatArrayAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFloatArrayAction);
	UClass* Z_Construct_UClass_UFloatArrayAction_NoRegister()
	{
		return UFloatArrayAction::StaticClass();
	}
	struct Z_Construct_UClass_UFloatArrayAction_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFloatArrayAction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ULearningAgentsAction,
		(UObject* (*)())Z_Construct_UPackage__Script_LearningAgents,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFloatArrayAction_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UFloatArrayAction_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFloatArrayAction_AddFloatArrayAction, "AddFloatArrayAction" }, // 725550281
		{ &Z_Construct_UFunction_UFloatArrayAction_GetFloatArrayAction, "GetFloatArrayAction" }, // 3944456845
		{ &Z_Construct_UFunction_UFloatArrayAction_SetFloatArrayAction, "SetFloatArrayAction" }, // 282555667
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFloatArrayAction_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFloatArrayAction_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** A simple float array action. Used as a catch-all for situations where a more type-specific action does not exist yet. */" },
		{ "IncludePath", "LearningAgentsActions.h" },
		{ "ModuleRelativePath", "Public/LearningAgentsActions.h" },
		{ "ToolTip", "A simple float array action. Used as a catch-all for situations where a more type-specific action does not exist yet." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFloatArrayAction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFloatArrayAction>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UFloatArrayAction_Statics::ClassParams = {
		&UFloatArrayAction::StaticClass,
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
		0x009000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFloatArrayAction_Statics::Class_MetaDataParams), Z_Construct_UClass_UFloatArrayAction_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UFloatArrayAction()
	{
		if (!Z_Registration_Info_UClass_UFloatArrayAction.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFloatArrayAction.OuterSingleton, Z_Construct_UClass_UFloatArrayAction_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UFloatArrayAction.OuterSingleton;
	}
	template<> LEARNINGAGENTS_API UClass* StaticClass<UFloatArrayAction>()
	{
		return UFloatArrayAction::StaticClass();
	}
	UFloatArrayAction::UFloatArrayAction(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFloatArrayAction);
	UFloatArrayAction::~UFloatArrayAction() {}
	DEFINE_FUNCTION(UVectorAction::execSetVectorAction)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_AgentId);
		P_GET_STRUCT(FVector,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetVectorAction(Z_Param_AgentId,Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVectorAction::execGetVectorAction)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_AgentId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetVectorAction(Z_Param_AgentId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVectorAction::execAddVectorAction)
	{
		P_GET_OBJECT(ULearningAgentsInteractor,Z_Param_InInteractor);
		P_GET_PROPERTY(FNameProperty,Z_Param_Name);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Scale);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UVectorAction**)Z_Param__Result=UVectorAction::AddVectorAction(Z_Param_InInteractor,Z_Param_Name,Z_Param_Scale);
		P_NATIVE_END;
	}
	void UVectorAction::StaticRegisterNativesUVectorAction()
	{
		UClass* Class = UVectorAction::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddVectorAction", &UVectorAction::execAddVectorAction },
			{ "GetVectorAction", &UVectorAction::execGetVectorAction },
			{ "SetVectorAction", &UVectorAction::execSetVectorAction },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UVectorAction_AddVectorAction_Statics
	{
		struct VectorAction_eventAddVectorAction_Parms
		{
			ULearningAgentsInteractor* InInteractor;
			FName Name;
			float Scale;
			UVectorAction* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InInteractor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InInteractor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Scale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Scale;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVectorAction_AddVectorAction_Statics::NewProp_InInteractor_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVectorAction_AddVectorAction_Statics::NewProp_InInteractor = { "InInteractor", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VectorAction_eventAddVectorAction_Parms, InInteractor), Z_Construct_UClass_ULearningAgentsInteractor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVectorAction_AddVectorAction_Statics::NewProp_InInteractor_MetaData), Z_Construct_UFunction_UVectorAction_AddVectorAction_Statics::NewProp_InInteractor_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVectorAction_AddVectorAction_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UVectorAction_AddVectorAction_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VectorAction_eventAddVectorAction_Parms, Name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVectorAction_AddVectorAction_Statics::NewProp_Name_MetaData), Z_Construct_UFunction_UVectorAction_AddVectorAction_Statics::NewProp_Name_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVectorAction_AddVectorAction_Statics::NewProp_Scale_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVectorAction_AddVectorAction_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VectorAction_eventAddVectorAction_Parms, Scale), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVectorAction_AddVectorAction_Statics::NewProp_Scale_MetaData), Z_Construct_UFunction_UVectorAction_AddVectorAction_Statics::NewProp_Scale_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVectorAction_AddVectorAction_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VectorAction_eventAddVectorAction_Parms, ReturnValue), Z_Construct_UClass_UVectorAction_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVectorAction_AddVectorAction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVectorAction_AddVectorAction_Statics::NewProp_InInteractor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVectorAction_AddVectorAction_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVectorAction_AddVectorAction_Statics::NewProp_Scale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVectorAction_AddVectorAction_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVectorAction_AddVectorAction_Statics::Function_MetaDataParams[] = {
		{ "Category", "LearningAgents" },
		{ "Comment", "/**\n\x09 * Adds a new vector action to the given agent interactor. Call during ULearningAgentsInteractor::SetupActions event.\n\x09 * @param InInteractor The agent interactor to add this action to.\n\x09 * @param Name The name of this new action. Used for debugging.\n\x09 * @param Scale Used to normalize the data for the action.\n\x09 * @return The newly created action.\n\x09 */" },
		{ "CPP_Default_Name", "None" },
		{ "CPP_Default_Scale", "1.000000" },
		{ "DefaultToSelf", "InInteractor" },
		{ "ModuleRelativePath", "Public/LearningAgentsActions.h" },
		{ "ToolTip", "Adds a new vector action to the given agent interactor. Call during ULearningAgentsInteractor::SetupActions event.\n@param InInteractor The agent interactor to add this action to.\n@param Name The name of this new action. Used for debugging.\n@param Scale Used to normalize the data for the action.\n@return The newly created action." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVectorAction_AddVectorAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVectorAction, nullptr, "AddVectorAction", nullptr, nullptr, Z_Construct_UFunction_UVectorAction_AddVectorAction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVectorAction_AddVectorAction_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVectorAction_AddVectorAction_Statics::VectorAction_eventAddVectorAction_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVectorAction_AddVectorAction_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVectorAction_AddVectorAction_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVectorAction_AddVectorAction_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UVectorAction_AddVectorAction_Statics::VectorAction_eventAddVectorAction_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UVectorAction_AddVectorAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVectorAction_AddVectorAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVectorAction_GetVectorAction_Statics
	{
		struct VectorAction_eventGetVectorAction_Parms
		{
			int32 AgentId;
			FVector ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AgentId_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_AgentId;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVectorAction_GetVectorAction_Statics::NewProp_AgentId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVectorAction_GetVectorAction_Statics::NewProp_AgentId = { "AgentId", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VectorAction_eventGetVectorAction_Parms, AgentId), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVectorAction_GetVectorAction_Statics::NewProp_AgentId_MetaData), Z_Construct_UFunction_UVectorAction_GetVectorAction_Statics::NewProp_AgentId_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVectorAction_GetVectorAction_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VectorAction_eventGetVectorAction_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVectorAction_GetVectorAction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVectorAction_GetVectorAction_Statics::NewProp_AgentId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVectorAction_GetVectorAction_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVectorAction_GetVectorAction_Statics::Function_MetaDataParams[] = {
		{ "AgentId", "-1" },
		{ "Category", "LearningAgents" },
		{ "Comment", "/**\n\x09 * Gets the data for this action. Call during ULearningAgentsInteractor::GetActions event.\n\x09 * @param AgentId The agent id to get data for.\n\x09 * @return The current action values.\n\x09 */" },
		{ "ModuleRelativePath", "Public/LearningAgentsActions.h" },
		{ "ToolTip", "Gets the data for this action. Call during ULearningAgentsInteractor::GetActions event.\n@param AgentId The agent id to get data for.\n@return The current action values." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVectorAction_GetVectorAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVectorAction, nullptr, "GetVectorAction", nullptr, nullptr, Z_Construct_UFunction_UVectorAction_GetVectorAction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVectorAction_GetVectorAction_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVectorAction_GetVectorAction_Statics::VectorAction_eventGetVectorAction_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVectorAction_GetVectorAction_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVectorAction_GetVectorAction_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVectorAction_GetVectorAction_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UVectorAction_GetVectorAction_Statics::VectorAction_eventGetVectorAction_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UVectorAction_GetVectorAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVectorAction_GetVectorAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVectorAction_SetVectorAction_Statics
	{
		struct VectorAction_eventSetVectorAction_Parms
		{
			int32 AgentId;
			FVector Value;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AgentId_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_AgentId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVectorAction_SetVectorAction_Statics::NewProp_AgentId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVectorAction_SetVectorAction_Statics::NewProp_AgentId = { "AgentId", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VectorAction_eventSetVectorAction_Parms, AgentId), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVectorAction_SetVectorAction_Statics::NewProp_AgentId_MetaData), Z_Construct_UFunction_UVectorAction_SetVectorAction_Statics::NewProp_AgentId_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVectorAction_SetVectorAction_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVectorAction_SetVectorAction_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VectorAction_eventSetVectorAction_Parms, Value), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVectorAction_SetVectorAction_Statics::NewProp_Value_MetaData), Z_Construct_UFunction_UVectorAction_SetVectorAction_Statics::NewProp_Value_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVectorAction_SetVectorAction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVectorAction_SetVectorAction_Statics::NewProp_AgentId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVectorAction_SetVectorAction_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVectorAction_SetVectorAction_Statics::Function_MetaDataParams[] = {
		{ "AgentId", "-1" },
		{ "Category", "LearningAgents" },
		{ "Comment", "/**\n\x09 * Sets the data for this action. Call during ULearningAgentsController::SetActions event.\n\x09 * @param AgentId The agent id to set data for.\n\x09 * @param Value The current action values.\n\x09 */" },
		{ "ModuleRelativePath", "Public/LearningAgentsActions.h" },
		{ "ToolTip", "Sets the data for this action. Call during ULearningAgentsController::SetActions event.\n@param AgentId The agent id to set data for.\n@param Value The current action values." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVectorAction_SetVectorAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVectorAction, nullptr, "SetVectorAction", nullptr, nullptr, Z_Construct_UFunction_UVectorAction_SetVectorAction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVectorAction_SetVectorAction_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVectorAction_SetVectorAction_Statics::VectorAction_eventSetVectorAction_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVectorAction_SetVectorAction_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVectorAction_SetVectorAction_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVectorAction_SetVectorAction_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UVectorAction_SetVectorAction_Statics::VectorAction_eventSetVectorAction_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UVectorAction_SetVectorAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVectorAction_SetVectorAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVectorAction);
	UClass* Z_Construct_UClass_UVectorAction_NoRegister()
	{
		return UVectorAction::StaticClass();
	}
	struct Z_Construct_UClass_UVectorAction_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVectorAction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ULearningAgentsAction,
		(UObject* (*)())Z_Construct_UPackage__Script_LearningAgents,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVectorAction_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UVectorAction_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UVectorAction_AddVectorAction, "AddVectorAction" }, // 203219380
		{ &Z_Construct_UFunction_UVectorAction_GetVectorAction, "GetVectorAction" }, // 3459139088
		{ &Z_Construct_UFunction_UVectorAction_SetVectorAction, "SetVectorAction" }, // 3959545704
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVectorAction_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVectorAction_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** A simple FVector action. */" },
		{ "IncludePath", "LearningAgentsActions.h" },
		{ "ModuleRelativePath", "Public/LearningAgentsActions.h" },
		{ "ToolTip", "A simple FVector action." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVectorAction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVectorAction>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVectorAction_Statics::ClassParams = {
		&UVectorAction::StaticClass,
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
		0x009000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVectorAction_Statics::Class_MetaDataParams), Z_Construct_UClass_UVectorAction_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UVectorAction()
	{
		if (!Z_Registration_Info_UClass_UVectorAction.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVectorAction.OuterSingleton, Z_Construct_UClass_UVectorAction_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVectorAction.OuterSingleton;
	}
	template<> LEARNINGAGENTS_API UClass* StaticClass<UVectorAction>()
	{
		return UVectorAction::StaticClass();
	}
	UVectorAction::UVectorAction(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVectorAction);
	UVectorAction::~UVectorAction() {}
	DEFINE_FUNCTION(UVectorArrayAction::execSetVectorArrayAction)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_AgentId);
		P_GET_TARRAY_REF(FVector,Z_Param_Out_Vectors);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetVectorArrayAction(Z_Param_AgentId,Z_Param_Out_Vectors);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVectorArrayAction::execGetVectorArrayAction)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_AgentId);
		P_GET_TARRAY_REF(FVector,Z_Param_Out_OutVectors);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetVectorArrayAction(Z_Param_AgentId,Z_Param_Out_OutVectors);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVectorArrayAction::execAddVectorArrayAction)
	{
		P_GET_OBJECT(ULearningAgentsInteractor,Z_Param_InInteractor);
		P_GET_PROPERTY(FNameProperty,Z_Param_Name);
		P_GET_PROPERTY(FIntProperty,Z_Param_Num);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Scale);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UVectorArrayAction**)Z_Param__Result=UVectorArrayAction::AddVectorArrayAction(Z_Param_InInteractor,Z_Param_Name,Z_Param_Num,Z_Param_Scale);
		P_NATIVE_END;
	}
	void UVectorArrayAction::StaticRegisterNativesUVectorArrayAction()
	{
		UClass* Class = UVectorArrayAction::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddVectorArrayAction", &UVectorArrayAction::execAddVectorArrayAction },
			{ "GetVectorArrayAction", &UVectorArrayAction::execGetVectorArrayAction },
			{ "SetVectorArrayAction", &UVectorArrayAction::execSetVectorArrayAction },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UVectorArrayAction_AddVectorArrayAction_Statics
	{
		struct VectorArrayAction_eventAddVectorArrayAction_Parms
		{
			ULearningAgentsInteractor* InInteractor;
			FName Name;
			int32 Num;
			float Scale;
			UVectorArrayAction* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InInteractor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InInteractor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Num_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Num;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Scale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Scale;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVectorArrayAction_AddVectorArrayAction_Statics::NewProp_InInteractor_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVectorArrayAction_AddVectorArrayAction_Statics::NewProp_InInteractor = { "InInteractor", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VectorArrayAction_eventAddVectorArrayAction_Parms, InInteractor), Z_Construct_UClass_ULearningAgentsInteractor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVectorArrayAction_AddVectorArrayAction_Statics::NewProp_InInteractor_MetaData), Z_Construct_UFunction_UVectorArrayAction_AddVectorArrayAction_Statics::NewProp_InInteractor_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVectorArrayAction_AddVectorArrayAction_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UVectorArrayAction_AddVectorArrayAction_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VectorArrayAction_eventAddVectorArrayAction_Parms, Name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVectorArrayAction_AddVectorArrayAction_Statics::NewProp_Name_MetaData), Z_Construct_UFunction_UVectorArrayAction_AddVectorArrayAction_Statics::NewProp_Name_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVectorArrayAction_AddVectorArrayAction_Statics::NewProp_Num_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVectorArrayAction_AddVectorArrayAction_Statics::NewProp_Num = { "Num", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VectorArrayAction_eventAddVectorArrayAction_Parms, Num), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVectorArrayAction_AddVectorArrayAction_Statics::NewProp_Num_MetaData), Z_Construct_UFunction_UVectorArrayAction_AddVectorArrayAction_Statics::NewProp_Num_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVectorArrayAction_AddVectorArrayAction_Statics::NewProp_Scale_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVectorArrayAction_AddVectorArrayAction_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VectorArrayAction_eventAddVectorArrayAction_Parms, Scale), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVectorArrayAction_AddVectorArrayAction_Statics::NewProp_Scale_MetaData), Z_Construct_UFunction_UVectorArrayAction_AddVectorArrayAction_Statics::NewProp_Scale_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVectorArrayAction_AddVectorArrayAction_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VectorArrayAction_eventAddVectorArrayAction_Parms, ReturnValue), Z_Construct_UClass_UVectorArrayAction_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVectorArrayAction_AddVectorArrayAction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVectorArrayAction_AddVectorArrayAction_Statics::NewProp_InInteractor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVectorArrayAction_AddVectorArrayAction_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVectorArrayAction_AddVectorArrayAction_Statics::NewProp_Num,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVectorArrayAction_AddVectorArrayAction_Statics::NewProp_Scale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVectorArrayAction_AddVectorArrayAction_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVectorArrayAction_AddVectorArrayAction_Statics::Function_MetaDataParams[] = {
		{ "Category", "LearningAgents" },
		{ "Comment", "/**\n\x09 * Adds a new vector action to the given agent interactor. Call during ULearningAgentsInteractor::SetupActions event.\n\x09 * @param InInteractor The agent interactor to add this action to.\n\x09 * @param Name The name of this new action. Used for debugging.\n\x09 * @param Num The number of vectors in the array\n\x09 * @param Scale Used to normalize the data for the action.\n\x09 * @return The newly created action.\n\x09 */" },
		{ "CPP_Default_Name", "None" },
		{ "CPP_Default_Num", "1" },
		{ "CPP_Default_Scale", "1.000000" },
		{ "DefaultToSelf", "InInteractor" },
		{ "ModuleRelativePath", "Public/LearningAgentsActions.h" },
		{ "ToolTip", "Adds a new vector action to the given agent interactor. Call during ULearningAgentsInteractor::SetupActions event.\n@param InInteractor The agent interactor to add this action to.\n@param Name The name of this new action. Used for debugging.\n@param Num The number of vectors in the array\n@param Scale Used to normalize the data for the action.\n@return The newly created action." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVectorArrayAction_AddVectorArrayAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVectorArrayAction, nullptr, "AddVectorArrayAction", nullptr, nullptr, Z_Construct_UFunction_UVectorArrayAction_AddVectorArrayAction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVectorArrayAction_AddVectorArrayAction_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVectorArrayAction_AddVectorArrayAction_Statics::VectorArrayAction_eventAddVectorArrayAction_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVectorArrayAction_AddVectorArrayAction_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVectorArrayAction_AddVectorArrayAction_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVectorArrayAction_AddVectorArrayAction_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UVectorArrayAction_AddVectorArrayAction_Statics::VectorArrayAction_eventAddVectorArrayAction_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UVectorArrayAction_AddVectorArrayAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVectorArrayAction_AddVectorArrayAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVectorArrayAction_GetVectorArrayAction_Statics
	{
		struct VectorArrayAction_eventGetVectorArrayAction_Parms
		{
			int32 AgentId;
			TArray<FVector> OutVectors;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AgentId_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_AgentId;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutVectors_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutVectors;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVectorArrayAction_GetVectorArrayAction_Statics::NewProp_AgentId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVectorArrayAction_GetVectorArrayAction_Statics::NewProp_AgentId = { "AgentId", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VectorArrayAction_eventGetVectorArrayAction_Parms, AgentId), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVectorArrayAction_GetVectorArrayAction_Statics::NewProp_AgentId_MetaData), Z_Construct_UFunction_UVectorArrayAction_GetVectorArrayAction_Statics::NewProp_AgentId_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVectorArrayAction_GetVectorArrayAction_Statics::NewProp_OutVectors_Inner = { "OutVectors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVectorArrayAction_GetVectorArrayAction_Statics::NewProp_OutVectors = { "OutVectors", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VectorArrayAction_eventGetVectorArrayAction_Parms, OutVectors), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVectorArrayAction_GetVectorArrayAction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVectorArrayAction_GetVectorArrayAction_Statics::NewProp_AgentId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVectorArrayAction_GetVectorArrayAction_Statics::NewProp_OutVectors_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVectorArrayAction_GetVectorArrayAction_Statics::NewProp_OutVectors,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVectorArrayAction_GetVectorArrayAction_Statics::Function_MetaDataParams[] = {
		{ "AgentId", "-1" },
		{ "Category", "LearningAgents" },
		{ "Comment", "/**\n\x09 * Gets the data for this action. Call during ULearningAgentsInteractor::GetActions event.\n\x09 * @param AgentId The agent id to get data for.\n\x09 * @param OutVectors The current action values.\n\x09 */" },
		{ "ModuleRelativePath", "Public/LearningAgentsActions.h" },
		{ "ToolTip", "Gets the data for this action. Call during ULearningAgentsInteractor::GetActions event.\n@param AgentId The agent id to get data for.\n@param OutVectors The current action values." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVectorArrayAction_GetVectorArrayAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVectorArrayAction, nullptr, "GetVectorArrayAction", nullptr, nullptr, Z_Construct_UFunction_UVectorArrayAction_GetVectorArrayAction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVectorArrayAction_GetVectorArrayAction_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVectorArrayAction_GetVectorArrayAction_Statics::VectorArrayAction_eventGetVectorArrayAction_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVectorArrayAction_GetVectorArrayAction_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVectorArrayAction_GetVectorArrayAction_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVectorArrayAction_GetVectorArrayAction_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UVectorArrayAction_GetVectorArrayAction_Statics::VectorArrayAction_eventGetVectorArrayAction_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UVectorArrayAction_GetVectorArrayAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVectorArrayAction_GetVectorArrayAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVectorArrayAction_SetVectorArrayAction_Statics
	{
		struct VectorArrayAction_eventSetVectorArrayAction_Parms
		{
			int32 AgentId;
			TArray<FVector> Vectors;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AgentId_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_AgentId;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Vectors_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Vectors_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Vectors;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVectorArrayAction_SetVectorArrayAction_Statics::NewProp_AgentId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVectorArrayAction_SetVectorArrayAction_Statics::NewProp_AgentId = { "AgentId", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VectorArrayAction_eventSetVectorArrayAction_Parms, AgentId), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVectorArrayAction_SetVectorArrayAction_Statics::NewProp_AgentId_MetaData), Z_Construct_UFunction_UVectorArrayAction_SetVectorArrayAction_Statics::NewProp_AgentId_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVectorArrayAction_SetVectorArrayAction_Statics::NewProp_Vectors_Inner = { "Vectors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVectorArrayAction_SetVectorArrayAction_Statics::NewProp_Vectors_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVectorArrayAction_SetVectorArrayAction_Statics::NewProp_Vectors = { "Vectors", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VectorArrayAction_eventSetVectorArrayAction_Parms, Vectors), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVectorArrayAction_SetVectorArrayAction_Statics::NewProp_Vectors_MetaData), Z_Construct_UFunction_UVectorArrayAction_SetVectorArrayAction_Statics::NewProp_Vectors_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVectorArrayAction_SetVectorArrayAction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVectorArrayAction_SetVectorArrayAction_Statics::NewProp_AgentId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVectorArrayAction_SetVectorArrayAction_Statics::NewProp_Vectors_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVectorArrayAction_SetVectorArrayAction_Statics::NewProp_Vectors,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVectorArrayAction_SetVectorArrayAction_Statics::Function_MetaDataParams[] = {
		{ "AgentId", "-1" },
		{ "Category", "LearningAgents" },
		{ "Comment", "/**\n\x09 * Sets the data for this action. Call during ULearningAgentsController::SetActions event.\n\x09 * @param AgentId The agent id to set data for.\n\x09 * @param Vectors The current action values.\n\x09 */" },
		{ "ModuleRelativePath", "Public/LearningAgentsActions.h" },
		{ "ToolTip", "Sets the data for this action. Call during ULearningAgentsController::SetActions event.\n@param AgentId The agent id to set data for.\n@param Vectors The current action values." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVectorArrayAction_SetVectorArrayAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVectorArrayAction, nullptr, "SetVectorArrayAction", nullptr, nullptr, Z_Construct_UFunction_UVectorArrayAction_SetVectorArrayAction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVectorArrayAction_SetVectorArrayAction_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVectorArrayAction_SetVectorArrayAction_Statics::VectorArrayAction_eventSetVectorArrayAction_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVectorArrayAction_SetVectorArrayAction_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVectorArrayAction_SetVectorArrayAction_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVectorArrayAction_SetVectorArrayAction_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UVectorArrayAction_SetVectorArrayAction_Statics::VectorArrayAction_eventSetVectorArrayAction_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UVectorArrayAction_SetVectorArrayAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVectorArrayAction_SetVectorArrayAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVectorArrayAction);
	UClass* Z_Construct_UClass_UVectorArrayAction_NoRegister()
	{
		return UVectorArrayAction::StaticClass();
	}
	struct Z_Construct_UClass_UVectorArrayAction_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVectorArrayAction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ULearningAgentsAction,
		(UObject* (*)())Z_Construct_UPackage__Script_LearningAgents,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVectorArrayAction_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UVectorArrayAction_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UVectorArrayAction_AddVectorArrayAction, "AddVectorArrayAction" }, // 954467635
		{ &Z_Construct_UFunction_UVectorArrayAction_GetVectorArrayAction, "GetVectorArrayAction" }, // 3746078743
		{ &Z_Construct_UFunction_UVectorArrayAction_SetVectorArrayAction, "SetVectorArrayAction" }, // 4254001983
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVectorArrayAction_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVectorArrayAction_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** A simple array of FVector action. */" },
		{ "IncludePath", "LearningAgentsActions.h" },
		{ "ModuleRelativePath", "Public/LearningAgentsActions.h" },
		{ "ToolTip", "A simple array of FVector action." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVectorArrayAction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVectorArrayAction>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVectorArrayAction_Statics::ClassParams = {
		&UVectorArrayAction::StaticClass,
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
		0x009000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVectorArrayAction_Statics::Class_MetaDataParams), Z_Construct_UClass_UVectorArrayAction_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UVectorArrayAction()
	{
		if (!Z_Registration_Info_UClass_UVectorArrayAction.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVectorArrayAction.OuterSingleton, Z_Construct_UClass_UVectorArrayAction_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVectorArrayAction.OuterSingleton;
	}
	template<> LEARNINGAGENTS_API UClass* StaticClass<UVectorArrayAction>()
	{
		return UVectorArrayAction::StaticClass();
	}
	UVectorArrayAction::UVectorArrayAction(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVectorArrayAction);
	UVectorArrayAction::~UVectorArrayAction() {}
	DEFINE_FUNCTION(UPlanarVelocityAction::execSetPlanarVelocityAction)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_AgentId);
		P_GET_STRUCT(FVector,Z_Param_Velocity);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPlanarVelocityAction(Z_Param_AgentId,Z_Param_Velocity);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlanarVelocityAction::execGetPlanarVelocityAction)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_AgentId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetPlanarVelocityAction(Z_Param_AgentId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlanarVelocityAction::execAddPlanarVelocityAction)
	{
		P_GET_OBJECT(ULearningAgentsInteractor,Z_Param_InInteractor);
		P_GET_PROPERTY(FNameProperty,Z_Param_Name);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Scale);
		P_GET_STRUCT(FVector,Z_Param_Axis0);
		P_GET_STRUCT(FVector,Z_Param_Axis1);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UPlanarVelocityAction**)Z_Param__Result=UPlanarVelocityAction::AddPlanarVelocityAction(Z_Param_InInteractor,Z_Param_Name,Z_Param_Scale,Z_Param_Axis0,Z_Param_Axis1);
		P_NATIVE_END;
	}
	void UPlanarVelocityAction::StaticRegisterNativesUPlanarVelocityAction()
	{
		UClass* Class = UPlanarVelocityAction::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddPlanarVelocityAction", &UPlanarVelocityAction::execAddPlanarVelocityAction },
			{ "GetPlanarVelocityAction", &UPlanarVelocityAction::execGetPlanarVelocityAction },
			{ "SetPlanarVelocityAction", &UPlanarVelocityAction::execSetPlanarVelocityAction },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPlanarVelocityAction_AddPlanarVelocityAction_Statics
	{
		struct PlanarVelocityAction_eventAddPlanarVelocityAction_Parms
		{
			ULearningAgentsInteractor* InInteractor;
			FName Name;
			float Scale;
			FVector Axis0;
			FVector Axis1;
			UPlanarVelocityAction* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InInteractor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InInteractor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Scale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Scale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Axis0_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Axis0;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Axis1_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Axis1;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlanarVelocityAction_AddPlanarVelocityAction_Statics::NewProp_InInteractor_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlanarVelocityAction_AddPlanarVelocityAction_Statics::NewProp_InInteractor = { "InInteractor", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlanarVelocityAction_eventAddPlanarVelocityAction_Parms, InInteractor), Z_Construct_UClass_ULearningAgentsInteractor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlanarVelocityAction_AddPlanarVelocityAction_Statics::NewProp_InInteractor_MetaData), Z_Construct_UFunction_UPlanarVelocityAction_AddPlanarVelocityAction_Statics::NewProp_InInteractor_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlanarVelocityAction_AddPlanarVelocityAction_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPlanarVelocityAction_AddPlanarVelocityAction_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlanarVelocityAction_eventAddPlanarVelocityAction_Parms, Name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlanarVelocityAction_AddPlanarVelocityAction_Statics::NewProp_Name_MetaData), Z_Construct_UFunction_UPlanarVelocityAction_AddPlanarVelocityAction_Statics::NewProp_Name_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlanarVelocityAction_AddPlanarVelocityAction_Statics::NewProp_Scale_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPlanarVelocityAction_AddPlanarVelocityAction_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlanarVelocityAction_eventAddPlanarVelocityAction_Parms, Scale), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlanarVelocityAction_AddPlanarVelocityAction_Statics::NewProp_Scale_MetaData), Z_Construct_UFunction_UPlanarVelocityAction_AddPlanarVelocityAction_Statics::NewProp_Scale_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlanarVelocityAction_AddPlanarVelocityAction_Statics::NewProp_Axis0_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlanarVelocityAction_AddPlanarVelocityAction_Statics::NewProp_Axis0 = { "Axis0", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlanarVelocityAction_eventAddPlanarVelocityAction_Parms, Axis0), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlanarVelocityAction_AddPlanarVelocityAction_Statics::NewProp_Axis0_MetaData), Z_Construct_UFunction_UPlanarVelocityAction_AddPlanarVelocityAction_Statics::NewProp_Axis0_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlanarVelocityAction_AddPlanarVelocityAction_Statics::NewProp_Axis1_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlanarVelocityAction_AddPlanarVelocityAction_Statics::NewProp_Axis1 = { "Axis1", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlanarVelocityAction_eventAddPlanarVelocityAction_Parms, Axis1), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlanarVelocityAction_AddPlanarVelocityAction_Statics::NewProp_Axis1_MetaData), Z_Construct_UFunction_UPlanarVelocityAction_AddPlanarVelocityAction_Statics::NewProp_Axis1_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlanarVelocityAction_AddPlanarVelocityAction_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlanarVelocityAction_eventAddPlanarVelocityAction_Parms, ReturnValue), Z_Construct_UClass_UPlanarVelocityAction_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlanarVelocityAction_AddPlanarVelocityAction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlanarVelocityAction_AddPlanarVelocityAction_Statics::NewProp_InInteractor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlanarVelocityAction_AddPlanarVelocityAction_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlanarVelocityAction_AddPlanarVelocityAction_Statics::NewProp_Scale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlanarVelocityAction_AddPlanarVelocityAction_Statics::NewProp_Axis0,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlanarVelocityAction_AddPlanarVelocityAction_Statics::NewProp_Axis1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlanarVelocityAction_AddPlanarVelocityAction_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlanarVelocityAction_AddPlanarVelocityAction_Statics::Function_MetaDataParams[] = {
		{ "Category", "LearningAgents" },
		{ "Comment", "/**\n\x09 * Adds a new planar velocity action to the given agent interactor. The axis parameters define the plane.\n\x09 * Call during ULearningAgentsInteractor::SetupActions event.\n\x09 * @param InInteractor The agent interactor to add this action to.\n\x09 * @param Name The name of this new action. Used for debugging.\n\x09 * @param Scale Used to normalize the data for the action.\n\x09 * @param Axis0 The forward axis of the plane.\n\x09 * @param Axis1 The right axis of the plane.\n\x09 * @return The newly created action.\n\x09 */" },
		{ "CPP_Default_Axis0", "1.000000,0.000000,0.000000" },
		{ "CPP_Default_Axis1", "0.000000,1.000000,0.000000" },
		{ "CPP_Default_Name", "None" },
		{ "CPP_Default_Scale", "200.000000" },
		{ "DefaultToSelf", "InInteractor" },
		{ "ModuleRelativePath", "Public/LearningAgentsActions.h" },
		{ "ToolTip", "Adds a new planar velocity action to the given agent interactor. The axis parameters define the plane.\nCall during ULearningAgentsInteractor::SetupActions event.\n@param InInteractor The agent interactor to add this action to.\n@param Name The name of this new action. Used for debugging.\n@param Scale Used to normalize the data for the action.\n@param Axis0 The forward axis of the plane.\n@param Axis1 The right axis of the plane.\n@return The newly created action." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlanarVelocityAction_AddPlanarVelocityAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlanarVelocityAction, nullptr, "AddPlanarVelocityAction", nullptr, nullptr, Z_Construct_UFunction_UPlanarVelocityAction_AddPlanarVelocityAction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlanarVelocityAction_AddPlanarVelocityAction_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlanarVelocityAction_AddPlanarVelocityAction_Statics::PlanarVelocityAction_eventAddPlanarVelocityAction_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlanarVelocityAction_AddPlanarVelocityAction_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlanarVelocityAction_AddPlanarVelocityAction_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlanarVelocityAction_AddPlanarVelocityAction_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UPlanarVelocityAction_AddPlanarVelocityAction_Statics::PlanarVelocityAction_eventAddPlanarVelocityAction_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPlanarVelocityAction_AddPlanarVelocityAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlanarVelocityAction_AddPlanarVelocityAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlanarVelocityAction_GetPlanarVelocityAction_Statics
	{
		struct PlanarVelocityAction_eventGetPlanarVelocityAction_Parms
		{
			int32 AgentId;
			FVector ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AgentId_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_AgentId;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlanarVelocityAction_GetPlanarVelocityAction_Statics::NewProp_AgentId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPlanarVelocityAction_GetPlanarVelocityAction_Statics::NewProp_AgentId = { "AgentId", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlanarVelocityAction_eventGetPlanarVelocityAction_Parms, AgentId), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlanarVelocityAction_GetPlanarVelocityAction_Statics::NewProp_AgentId_MetaData), Z_Construct_UFunction_UPlanarVelocityAction_GetPlanarVelocityAction_Statics::NewProp_AgentId_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlanarVelocityAction_GetPlanarVelocityAction_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlanarVelocityAction_eventGetPlanarVelocityAction_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlanarVelocityAction_GetPlanarVelocityAction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlanarVelocityAction_GetPlanarVelocityAction_Statics::NewProp_AgentId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlanarVelocityAction_GetPlanarVelocityAction_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlanarVelocityAction_GetPlanarVelocityAction_Statics::Function_MetaDataParams[] = {
		{ "AgentId", "-1" },
		{ "Category", "LearningAgents" },
		{ "Comment", "/**\n\x09 * Gets the data for this action. Call during ULearningAgentsInteractor::GetActions event.\n\x09 * @param AgentId The agent id to get data for.\n\x09 * @return The current action value.\n\x09 */" },
		{ "ModuleRelativePath", "Public/LearningAgentsActions.h" },
		{ "ToolTip", "Gets the data for this action. Call during ULearningAgentsInteractor::GetActions event.\n@param AgentId The agent id to get data for.\n@return The current action value." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlanarVelocityAction_GetPlanarVelocityAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlanarVelocityAction, nullptr, "GetPlanarVelocityAction", nullptr, nullptr, Z_Construct_UFunction_UPlanarVelocityAction_GetPlanarVelocityAction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlanarVelocityAction_GetPlanarVelocityAction_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlanarVelocityAction_GetPlanarVelocityAction_Statics::PlanarVelocityAction_eventGetPlanarVelocityAction_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlanarVelocityAction_GetPlanarVelocityAction_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlanarVelocityAction_GetPlanarVelocityAction_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlanarVelocityAction_GetPlanarVelocityAction_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UPlanarVelocityAction_GetPlanarVelocityAction_Statics::PlanarVelocityAction_eventGetPlanarVelocityAction_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPlanarVelocityAction_GetPlanarVelocityAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlanarVelocityAction_GetPlanarVelocityAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlanarVelocityAction_SetPlanarVelocityAction_Statics
	{
		struct PlanarVelocityAction_eventSetPlanarVelocityAction_Parms
		{
			int32 AgentId;
			FVector Velocity;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AgentId_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_AgentId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Velocity_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Velocity;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlanarVelocityAction_SetPlanarVelocityAction_Statics::NewProp_AgentId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPlanarVelocityAction_SetPlanarVelocityAction_Statics::NewProp_AgentId = { "AgentId", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlanarVelocityAction_eventSetPlanarVelocityAction_Parms, AgentId), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlanarVelocityAction_SetPlanarVelocityAction_Statics::NewProp_AgentId_MetaData), Z_Construct_UFunction_UPlanarVelocityAction_SetPlanarVelocityAction_Statics::NewProp_AgentId_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlanarVelocityAction_SetPlanarVelocityAction_Statics::NewProp_Velocity_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlanarVelocityAction_SetPlanarVelocityAction_Statics::NewProp_Velocity = { "Velocity", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlanarVelocityAction_eventSetPlanarVelocityAction_Parms, Velocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlanarVelocityAction_SetPlanarVelocityAction_Statics::NewProp_Velocity_MetaData), Z_Construct_UFunction_UPlanarVelocityAction_SetPlanarVelocityAction_Statics::NewProp_Velocity_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlanarVelocityAction_SetPlanarVelocityAction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlanarVelocityAction_SetPlanarVelocityAction_Statics::NewProp_AgentId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlanarVelocityAction_SetPlanarVelocityAction_Statics::NewProp_Velocity,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlanarVelocityAction_SetPlanarVelocityAction_Statics::Function_MetaDataParams[] = {
		{ "AgentId", "-1" },
		{ "Category", "LearningAgents" },
		{ "Comment", "/**\n\x09 * Sets the data for this action. Call during ULearningAgentsController::SetActions event.\n\x09 * @param AgentId The agent id this data corresponds to.\n\x09 * @param Velocity The velocity currently being observed.\n\x09 */" },
		{ "ModuleRelativePath", "Public/LearningAgentsActions.h" },
		{ "ToolTip", "Sets the data for this action. Call during ULearningAgentsController::SetActions event.\n@param AgentId The agent id this data corresponds to.\n@param Velocity The velocity currently being observed." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlanarVelocityAction_SetPlanarVelocityAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlanarVelocityAction, nullptr, "SetPlanarVelocityAction", nullptr, nullptr, Z_Construct_UFunction_UPlanarVelocityAction_SetPlanarVelocityAction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlanarVelocityAction_SetPlanarVelocityAction_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlanarVelocityAction_SetPlanarVelocityAction_Statics::PlanarVelocityAction_eventSetPlanarVelocityAction_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlanarVelocityAction_SetPlanarVelocityAction_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlanarVelocityAction_SetPlanarVelocityAction_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlanarVelocityAction_SetPlanarVelocityAction_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UPlanarVelocityAction_SetPlanarVelocityAction_Statics::PlanarVelocityAction_eventSetPlanarVelocityAction_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPlanarVelocityAction_SetPlanarVelocityAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlanarVelocityAction_SetPlanarVelocityAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPlanarVelocityAction);
	UClass* Z_Construct_UClass_UPlanarVelocityAction_NoRegister()
	{
		return UPlanarVelocityAction::StaticClass();
	}
	struct Z_Construct_UClass_UPlanarVelocityAction_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPlanarVelocityAction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ULearningAgentsAction,
		(UObject* (*)())Z_Construct_UPackage__Script_LearningAgents,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPlanarVelocityAction_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UPlanarVelocityAction_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPlanarVelocityAction_AddPlanarVelocityAction, "AddPlanarVelocityAction" }, // 2145506279
		{ &Z_Construct_UFunction_UPlanarVelocityAction_GetPlanarVelocityAction, "GetPlanarVelocityAction" }, // 1074811070
		{ &Z_Construct_UFunction_UPlanarVelocityAction_SetPlanarVelocityAction, "SetPlanarVelocityAction" }, // 1622180055
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPlanarVelocityAction_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlanarVelocityAction_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** A planar velocity action. */" },
		{ "IncludePath", "LearningAgentsActions.h" },
		{ "ModuleRelativePath", "Public/LearningAgentsActions.h" },
		{ "ToolTip", "A planar velocity action." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlanarVelocityAction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlanarVelocityAction>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPlanarVelocityAction_Statics::ClassParams = {
		&UPlanarVelocityAction::StaticClass,
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
		0x009000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPlanarVelocityAction_Statics::Class_MetaDataParams), Z_Construct_UClass_UPlanarVelocityAction_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UPlanarVelocityAction()
	{
		if (!Z_Registration_Info_UClass_UPlanarVelocityAction.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPlanarVelocityAction.OuterSingleton, Z_Construct_UClass_UPlanarVelocityAction_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPlanarVelocityAction.OuterSingleton;
	}
	template<> LEARNINGAGENTS_API UClass* StaticClass<UPlanarVelocityAction>()
	{
		return UPlanarVelocityAction::StaticClass();
	}
	UPlanarVelocityAction::UPlanarVelocityAction(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlanarVelocityAction);
	UPlanarVelocityAction::~UPlanarVelocityAction() {}
	DEFINE_FUNCTION(URotationAction::execGetRotationActionAsQuat)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_AgentId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FQuat*)Z_Param__Result=P_THIS->GetRotationActionAsQuat(Z_Param_AgentId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URotationAction::execGetRotationActionAsRotationVector)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_AgentId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetRotationActionAsRotationVector(Z_Param_AgentId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URotationAction::execGetRotationAction)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_AgentId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FRotator*)Z_Param__Result=P_THIS->GetRotationAction(Z_Param_AgentId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URotationAction::execAddRotationAction)
	{
		P_GET_OBJECT(ULearningAgentsInteractor,Z_Param_InInteractor);
		P_GET_PROPERTY(FNameProperty,Z_Param_Name);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Scale);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(URotationAction**)Z_Param__Result=URotationAction::AddRotationAction(Z_Param_InInteractor,Z_Param_Name,Z_Param_Scale);
		P_NATIVE_END;
	}
	void URotationAction::StaticRegisterNativesURotationAction()
	{
		UClass* Class = URotationAction::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddRotationAction", &URotationAction::execAddRotationAction },
			{ "GetRotationAction", &URotationAction::execGetRotationAction },
			{ "GetRotationActionAsQuat", &URotationAction::execGetRotationActionAsQuat },
			{ "GetRotationActionAsRotationVector", &URotationAction::execGetRotationActionAsRotationVector },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_URotationAction_AddRotationAction_Statics
	{
		struct RotationAction_eventAddRotationAction_Parms
		{
			ULearningAgentsInteractor* InInteractor;
			FName Name;
			float Scale;
			URotationAction* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InInteractor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InInteractor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Scale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Scale;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URotationAction_AddRotationAction_Statics::NewProp_InInteractor_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URotationAction_AddRotationAction_Statics::NewProp_InInteractor = { "InInteractor", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RotationAction_eventAddRotationAction_Parms, InInteractor), Z_Construct_UClass_ULearningAgentsInteractor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URotationAction_AddRotationAction_Statics::NewProp_InInteractor_MetaData), Z_Construct_UFunction_URotationAction_AddRotationAction_Statics::NewProp_InInteractor_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URotationAction_AddRotationAction_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_URotationAction_AddRotationAction_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RotationAction_eventAddRotationAction_Parms, Name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URotationAction_AddRotationAction_Statics::NewProp_Name_MetaData), Z_Construct_UFunction_URotationAction_AddRotationAction_Statics::NewProp_Name_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URotationAction_AddRotationAction_Statics::NewProp_Scale_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URotationAction_AddRotationAction_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RotationAction_eventAddRotationAction_Parms, Scale), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URotationAction_AddRotationAction_Statics::NewProp_Scale_MetaData), Z_Construct_UFunction_URotationAction_AddRotationAction_Statics::NewProp_Scale_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URotationAction_AddRotationAction_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RotationAction_eventAddRotationAction_Parms, ReturnValue), Z_Construct_UClass_URotationAction_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URotationAction_AddRotationAction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URotationAction_AddRotationAction_Statics::NewProp_InInteractor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URotationAction_AddRotationAction_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URotationAction_AddRotationAction_Statics::NewProp_Scale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URotationAction_AddRotationAction_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URotationAction_AddRotationAction_Statics::Function_MetaDataParams[] = {
		{ "Category", "LearningAgents" },
		{ "Comment", "/**\n\x09 * Adds a new rotation action to the given agent interactor. Call during ULearningAgentsInteractor::SetupActions event.\n\x09 * @param InInteractor The agent interactor to add this action to.\n\x09 * @param Name The name of this new action. Used for debugging.\n\x09 * @param Scale Used to normalize the data for the action.\n\x09 * @return The newly created action.\n\x09 */" },
		{ "CPP_Default_Name", "None" },
		{ "CPP_Default_Scale", "180.000000" },
		{ "DefaultToSelf", "InInteractor" },
		{ "ModuleRelativePath", "Public/LearningAgentsActions.h" },
		{ "ToolTip", "Adds a new rotation action to the given agent interactor. Call during ULearningAgentsInteractor::SetupActions event.\n@param InInteractor The agent interactor to add this action to.\n@param Name The name of this new action. Used for debugging.\n@param Scale Used to normalize the data for the action.\n@return The newly created action." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URotationAction_AddRotationAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URotationAction, nullptr, "AddRotationAction", nullptr, nullptr, Z_Construct_UFunction_URotationAction_AddRotationAction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URotationAction_AddRotationAction_Statics::PropPointers), sizeof(Z_Construct_UFunction_URotationAction_AddRotationAction_Statics::RotationAction_eventAddRotationAction_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URotationAction_AddRotationAction_Statics::Function_MetaDataParams), Z_Construct_UFunction_URotationAction_AddRotationAction_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URotationAction_AddRotationAction_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_URotationAction_AddRotationAction_Statics::RotationAction_eventAddRotationAction_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_URotationAction_AddRotationAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URotationAction_AddRotationAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URotationAction_GetRotationAction_Statics
	{
		struct RotationAction_eventGetRotationAction_Parms
		{
			int32 AgentId;
			FRotator ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AgentId_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_AgentId;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URotationAction_GetRotationAction_Statics::NewProp_AgentId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URotationAction_GetRotationAction_Statics::NewProp_AgentId = { "AgentId", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RotationAction_eventGetRotationAction_Parms, AgentId), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URotationAction_GetRotationAction_Statics::NewProp_AgentId_MetaData), Z_Construct_UFunction_URotationAction_GetRotationAction_Statics::NewProp_AgentId_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URotationAction_GetRotationAction_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RotationAction_eventGetRotationAction_Parms, ReturnValue), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URotationAction_GetRotationAction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URotationAction_GetRotationAction_Statics::NewProp_AgentId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URotationAction_GetRotationAction_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URotationAction_GetRotationAction_Statics::Function_MetaDataParams[] = {
		{ "AgentId", "-1" },
		{ "Category", "LearningAgents" },
		{ "Comment", "/**\n\x09 * Gets the data for this action as a rotator. Call during ULearningAgentsInteractor::GetActions event.\n\x09 * @param AgentId The agent id to get data for.\n\x09 * @return The current action value.\n\x09 */" },
		{ "ModuleRelativePath", "Public/LearningAgentsActions.h" },
		{ "ToolTip", "Gets the data for this action as a rotator. Call during ULearningAgentsInteractor::GetActions event.\n@param AgentId The agent id to get data for.\n@return The current action value." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URotationAction_GetRotationAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URotationAction, nullptr, "GetRotationAction", nullptr, nullptr, Z_Construct_UFunction_URotationAction_GetRotationAction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URotationAction_GetRotationAction_Statics::PropPointers), sizeof(Z_Construct_UFunction_URotationAction_GetRotationAction_Statics::RotationAction_eventGetRotationAction_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URotationAction_GetRotationAction_Statics::Function_MetaDataParams), Z_Construct_UFunction_URotationAction_GetRotationAction_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URotationAction_GetRotationAction_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_URotationAction_GetRotationAction_Statics::RotationAction_eventGetRotationAction_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_URotationAction_GetRotationAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URotationAction_GetRotationAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URotationAction_GetRotationActionAsQuat_Statics
	{
		struct RotationAction_eventGetRotationActionAsQuat_Parms
		{
			int32 AgentId;
			FQuat ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AgentId_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_AgentId;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URotationAction_GetRotationActionAsQuat_Statics::NewProp_AgentId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URotationAction_GetRotationActionAsQuat_Statics::NewProp_AgentId = { "AgentId", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RotationAction_eventGetRotationActionAsQuat_Parms, AgentId), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URotationAction_GetRotationActionAsQuat_Statics::NewProp_AgentId_MetaData), Z_Construct_UFunction_URotationAction_GetRotationActionAsQuat_Statics::NewProp_AgentId_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URotationAction_GetRotationActionAsQuat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RotationAction_eventGetRotationActionAsQuat_Parms, ReturnValue), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URotationAction_GetRotationActionAsQuat_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URotationAction_GetRotationActionAsQuat_Statics::NewProp_AgentId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URotationAction_GetRotationActionAsQuat_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URotationAction_GetRotationActionAsQuat_Statics::Function_MetaDataParams[] = {
		{ "AgentId", "-1" },
		{ "Category", "LearningAgents" },
		{ "Comment", "/**\n\x09 * Gets the data for this action as a quaternion. Call during ULearningAgentsInteractor::GetActions event.\n\x09 * @param AgentId The agent id to get data for.\n\x09 * @return The current action value.\n\x09 */" },
		{ "ModuleRelativePath", "Public/LearningAgentsActions.h" },
		{ "ToolTip", "Gets the data for this action as a quaternion. Call during ULearningAgentsInteractor::GetActions event.\n@param AgentId The agent id to get data for.\n@return The current action value." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URotationAction_GetRotationActionAsQuat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URotationAction, nullptr, "GetRotationActionAsQuat", nullptr, nullptr, Z_Construct_UFunction_URotationAction_GetRotationActionAsQuat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URotationAction_GetRotationActionAsQuat_Statics::PropPointers), sizeof(Z_Construct_UFunction_URotationAction_GetRotationActionAsQuat_Statics::RotationAction_eventGetRotationActionAsQuat_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URotationAction_GetRotationActionAsQuat_Statics::Function_MetaDataParams), Z_Construct_UFunction_URotationAction_GetRotationActionAsQuat_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URotationAction_GetRotationActionAsQuat_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_URotationAction_GetRotationActionAsQuat_Statics::RotationAction_eventGetRotationActionAsQuat_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_URotationAction_GetRotationActionAsQuat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URotationAction_GetRotationActionAsQuat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URotationAction_GetRotationActionAsRotationVector_Statics
	{
		struct RotationAction_eventGetRotationActionAsRotationVector_Parms
		{
			int32 AgentId;
			FVector ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AgentId_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_AgentId;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URotationAction_GetRotationActionAsRotationVector_Statics::NewProp_AgentId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URotationAction_GetRotationActionAsRotationVector_Statics::NewProp_AgentId = { "AgentId", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RotationAction_eventGetRotationActionAsRotationVector_Parms, AgentId), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URotationAction_GetRotationActionAsRotationVector_Statics::NewProp_AgentId_MetaData), Z_Construct_UFunction_URotationAction_GetRotationActionAsRotationVector_Statics::NewProp_AgentId_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URotationAction_GetRotationActionAsRotationVector_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RotationAction_eventGetRotationActionAsRotationVector_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URotationAction_GetRotationActionAsRotationVector_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URotationAction_GetRotationActionAsRotationVector_Statics::NewProp_AgentId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URotationAction_GetRotationActionAsRotationVector_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URotationAction_GetRotationActionAsRotationVector_Statics::Function_MetaDataParams[] = {
		{ "AgentId", "-1" },
		{ "Category", "LearningAgents" },
		{ "Comment", "/**\n\x09 * Gets the data for this action as a rotation vector. Call during ULearningAgentsInteractor::GetActions event.\n\x09 * @param AgentId The agent id to get data for.\n\x09 * @return The current action value.\n\x09 */" },
		{ "ModuleRelativePath", "Public/LearningAgentsActions.h" },
		{ "ToolTip", "Gets the data for this action as a rotation vector. Call during ULearningAgentsInteractor::GetActions event.\n@param AgentId The agent id to get data for.\n@return The current action value." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URotationAction_GetRotationActionAsRotationVector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URotationAction, nullptr, "GetRotationActionAsRotationVector", nullptr, nullptr, Z_Construct_UFunction_URotationAction_GetRotationActionAsRotationVector_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URotationAction_GetRotationActionAsRotationVector_Statics::PropPointers), sizeof(Z_Construct_UFunction_URotationAction_GetRotationActionAsRotationVector_Statics::RotationAction_eventGetRotationActionAsRotationVector_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URotationAction_GetRotationActionAsRotationVector_Statics::Function_MetaDataParams), Z_Construct_UFunction_URotationAction_GetRotationActionAsRotationVector_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URotationAction_GetRotationActionAsRotationVector_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_URotationAction_GetRotationActionAsRotationVector_Statics::RotationAction_eventGetRotationActionAsRotationVector_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_URotationAction_GetRotationActionAsRotationVector()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URotationAction_GetRotationActionAsRotationVector_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URotationAction);
	UClass* Z_Construct_UClass_URotationAction_NoRegister()
	{
		return URotationAction::StaticClass();
	}
	struct Z_Construct_UClass_URotationAction_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URotationAction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ULearningAgentsAction,
		(UObject* (*)())Z_Construct_UPackage__Script_LearningAgents,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URotationAction_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_URotationAction_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_URotationAction_AddRotationAction, "AddRotationAction" }, // 448299408
		{ &Z_Construct_UFunction_URotationAction_GetRotationAction, "GetRotationAction" }, // 2199613268
		{ &Z_Construct_UFunction_URotationAction_GetRotationActionAsQuat, "GetRotationActionAsQuat" }, // 831090203
		{ &Z_Construct_UFunction_URotationAction_GetRotationActionAsRotationVector, "GetRotationActionAsRotationVector" }, // 1468072594
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URotationAction_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URotationAction_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** A rotation action. */" },
		{ "IncludePath", "LearningAgentsActions.h" },
		{ "ModuleRelativePath", "Public/LearningAgentsActions.h" },
		{ "ToolTip", "A rotation action." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_URotationAction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URotationAction>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URotationAction_Statics::ClassParams = {
		&URotationAction::StaticClass,
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
		0x009000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URotationAction_Statics::Class_MetaDataParams), Z_Construct_UClass_URotationAction_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_URotationAction()
	{
		if (!Z_Registration_Info_UClass_URotationAction.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URotationAction.OuterSingleton, Z_Construct_UClass_URotationAction_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URotationAction.OuterSingleton;
	}
	template<> LEARNINGAGENTS_API UClass* StaticClass<URotationAction>()
	{
		return URotationAction::StaticClass();
	}
	URotationAction::URotationAction(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URotationAction);
	URotationAction::~URotationAction() {}
	DEFINE_FUNCTION(URotationArrayAction::execGetRotationArrayActionAsQuats)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_AgentId);
		P_GET_TARRAY_REF(FQuat,Z_Param_Out_OutRotations);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetRotationArrayActionAsQuats(Z_Param_AgentId,Z_Param_Out_OutRotations);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URotationArrayAction::execGetRotationArrayActionAsRotationVectors)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_AgentId);
		P_GET_TARRAY_REF(FVector,Z_Param_Out_OutRotationVectors);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetRotationArrayActionAsRotationVectors(Z_Param_AgentId,Z_Param_Out_OutRotationVectors);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URotationArrayAction::execGetRotationArrayAction)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_AgentId);
		P_GET_TARRAY_REF(FRotator,Z_Param_Out_OutRotations);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetRotationArrayAction(Z_Param_AgentId,Z_Param_Out_OutRotations);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URotationArrayAction::execAddRotationArrayAction)
	{
		P_GET_OBJECT(ULearningAgentsInteractor,Z_Param_InInteractor);
		P_GET_PROPERTY(FNameProperty,Z_Param_Name);
		P_GET_PROPERTY(FIntProperty,Z_Param_RotationNum);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Scale);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(URotationArrayAction**)Z_Param__Result=URotationArrayAction::AddRotationArrayAction(Z_Param_InInteractor,Z_Param_Name,Z_Param_RotationNum,Z_Param_Scale);
		P_NATIVE_END;
	}
	void URotationArrayAction::StaticRegisterNativesURotationArrayAction()
	{
		UClass* Class = URotationArrayAction::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddRotationArrayAction", &URotationArrayAction::execAddRotationArrayAction },
			{ "GetRotationArrayAction", &URotationArrayAction::execGetRotationArrayAction },
			{ "GetRotationArrayActionAsQuats", &URotationArrayAction::execGetRotationArrayActionAsQuats },
			{ "GetRotationArrayActionAsRotationVectors", &URotationArrayAction::execGetRotationArrayActionAsRotationVectors },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_URotationArrayAction_AddRotationArrayAction_Statics
	{
		struct RotationArrayAction_eventAddRotationArrayAction_Parms
		{
			ULearningAgentsInteractor* InInteractor;
			FName Name;
			int32 RotationNum;
			float Scale;
			URotationArrayAction* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InInteractor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InInteractor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotationNum_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_RotationNum;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Scale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Scale;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URotationArrayAction_AddRotationArrayAction_Statics::NewProp_InInteractor_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URotationArrayAction_AddRotationArrayAction_Statics::NewProp_InInteractor = { "InInteractor", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RotationArrayAction_eventAddRotationArrayAction_Parms, InInteractor), Z_Construct_UClass_ULearningAgentsInteractor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URotationArrayAction_AddRotationArrayAction_Statics::NewProp_InInteractor_MetaData), Z_Construct_UFunction_URotationArrayAction_AddRotationArrayAction_Statics::NewProp_InInteractor_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URotationArrayAction_AddRotationArrayAction_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_URotationArrayAction_AddRotationArrayAction_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RotationArrayAction_eventAddRotationArrayAction_Parms, Name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URotationArrayAction_AddRotationArrayAction_Statics::NewProp_Name_MetaData), Z_Construct_UFunction_URotationArrayAction_AddRotationArrayAction_Statics::NewProp_Name_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URotationArrayAction_AddRotationArrayAction_Statics::NewProp_RotationNum_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URotationArrayAction_AddRotationArrayAction_Statics::NewProp_RotationNum = { "RotationNum", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RotationArrayAction_eventAddRotationArrayAction_Parms, RotationNum), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URotationArrayAction_AddRotationArrayAction_Statics::NewProp_RotationNum_MetaData), Z_Construct_UFunction_URotationArrayAction_AddRotationArrayAction_Statics::NewProp_RotationNum_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URotationArrayAction_AddRotationArrayAction_Statics::NewProp_Scale_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URotationArrayAction_AddRotationArrayAction_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RotationArrayAction_eventAddRotationArrayAction_Parms, Scale), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URotationArrayAction_AddRotationArrayAction_Statics::NewProp_Scale_MetaData), Z_Construct_UFunction_URotationArrayAction_AddRotationArrayAction_Statics::NewProp_Scale_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URotationArrayAction_AddRotationArrayAction_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RotationArrayAction_eventAddRotationArrayAction_Parms, ReturnValue), Z_Construct_UClass_URotationArrayAction_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URotationArrayAction_AddRotationArrayAction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URotationArrayAction_AddRotationArrayAction_Statics::NewProp_InInteractor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URotationArrayAction_AddRotationArrayAction_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URotationArrayAction_AddRotationArrayAction_Statics::NewProp_RotationNum,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URotationArrayAction_AddRotationArrayAction_Statics::NewProp_Scale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URotationArrayAction_AddRotationArrayAction_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URotationArrayAction_AddRotationArrayAction_Statics::Function_MetaDataParams[] = {
		{ "Category", "LearningAgents" },
		{ "Comment", "/**\n\x09 * Adds a new rotation array action to the given agent interactor. Call during ULearningAgentsInteractor::SetupActions event.\n\x09 * @param InInteractor The agent interactor to add this action to.\n\x09 * @param Name The name of this new action. Used for debugging.\n\x09 * @param RotationNum The number of rotations in the array.\n\x09 * @param Scale Used to normalize the data for the action.\n\x09 * @return The newly created action.\n\x09 */" },
		{ "CPP_Default_Name", "None" },
		{ "CPP_Default_RotationNum", "1" },
		{ "CPP_Default_Scale", "180.000000" },
		{ "DefaultToSelf", "InInteractor" },
		{ "ModuleRelativePath", "Public/LearningAgentsActions.h" },
		{ "ToolTip", "Adds a new rotation array action to the given agent interactor. Call during ULearningAgentsInteractor::SetupActions event.\n@param InInteractor The agent interactor to add this action to.\n@param Name The name of this new action. Used for debugging.\n@param RotationNum The number of rotations in the array.\n@param Scale Used to normalize the data for the action.\n@return The newly created action." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URotationArrayAction_AddRotationArrayAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URotationArrayAction, nullptr, "AddRotationArrayAction", nullptr, nullptr, Z_Construct_UFunction_URotationArrayAction_AddRotationArrayAction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URotationArrayAction_AddRotationArrayAction_Statics::PropPointers), sizeof(Z_Construct_UFunction_URotationArrayAction_AddRotationArrayAction_Statics::RotationArrayAction_eventAddRotationArrayAction_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URotationArrayAction_AddRotationArrayAction_Statics::Function_MetaDataParams), Z_Construct_UFunction_URotationArrayAction_AddRotationArrayAction_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URotationArrayAction_AddRotationArrayAction_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_URotationArrayAction_AddRotationArrayAction_Statics::RotationArrayAction_eventAddRotationArrayAction_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_URotationArrayAction_AddRotationArrayAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URotationArrayAction_AddRotationArrayAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URotationArrayAction_GetRotationArrayAction_Statics
	{
		struct RotationArrayAction_eventGetRotationArrayAction_Parms
		{
			int32 AgentId;
			TArray<FRotator> OutRotations;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AgentId_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_AgentId;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutRotations_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutRotations;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URotationArrayAction_GetRotationArrayAction_Statics::NewProp_AgentId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URotationArrayAction_GetRotationArrayAction_Statics::NewProp_AgentId = { "AgentId", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RotationArrayAction_eventGetRotationArrayAction_Parms, AgentId), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URotationArrayAction_GetRotationArrayAction_Statics::NewProp_AgentId_MetaData), Z_Construct_UFunction_URotationArrayAction_GetRotationArrayAction_Statics::NewProp_AgentId_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URotationArrayAction_GetRotationArrayAction_Statics::NewProp_OutRotations_Inner = { "OutRotations", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URotationArrayAction_GetRotationArrayAction_Statics::NewProp_OutRotations = { "OutRotations", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RotationArrayAction_eventGetRotationArrayAction_Parms, OutRotations), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URotationArrayAction_GetRotationArrayAction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URotationArrayAction_GetRotationArrayAction_Statics::NewProp_AgentId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URotationArrayAction_GetRotationArrayAction_Statics::NewProp_OutRotations_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URotationArrayAction_GetRotationArrayAction_Statics::NewProp_OutRotations,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URotationArrayAction_GetRotationArrayAction_Statics::Function_MetaDataParams[] = {
		{ "AgentId", "-1" },
		{ "Category", "LearningAgents" },
		{ "Comment", "/**\n\x09 * Gets the data for this action as rotators. Call during ULearningAgentsInteractor::GetActions event.\n\x09 * @param AgentId The agent id to get data for.\n\x09 * @param OutRotations The current action values.\n\x09 */" },
		{ "ModuleRelativePath", "Public/LearningAgentsActions.h" },
		{ "ToolTip", "Gets the data for this action as rotators. Call during ULearningAgentsInteractor::GetActions event.\n@param AgentId The agent id to get data for.\n@param OutRotations The current action values." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URotationArrayAction_GetRotationArrayAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URotationArrayAction, nullptr, "GetRotationArrayAction", nullptr, nullptr, Z_Construct_UFunction_URotationArrayAction_GetRotationArrayAction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URotationArrayAction_GetRotationArrayAction_Statics::PropPointers), sizeof(Z_Construct_UFunction_URotationArrayAction_GetRotationArrayAction_Statics::RotationArrayAction_eventGetRotationArrayAction_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URotationArrayAction_GetRotationArrayAction_Statics::Function_MetaDataParams), Z_Construct_UFunction_URotationArrayAction_GetRotationArrayAction_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URotationArrayAction_GetRotationArrayAction_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_URotationArrayAction_GetRotationArrayAction_Statics::RotationArrayAction_eventGetRotationArrayAction_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_URotationArrayAction_GetRotationArrayAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URotationArrayAction_GetRotationArrayAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URotationArrayAction_GetRotationArrayActionAsQuats_Statics
	{
		struct RotationArrayAction_eventGetRotationArrayActionAsQuats_Parms
		{
			int32 AgentId;
			TArray<FQuat> OutRotations;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AgentId_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_AgentId;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutRotations_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutRotations;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URotationArrayAction_GetRotationArrayActionAsQuats_Statics::NewProp_AgentId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URotationArrayAction_GetRotationArrayActionAsQuats_Statics::NewProp_AgentId = { "AgentId", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RotationArrayAction_eventGetRotationArrayActionAsQuats_Parms, AgentId), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URotationArrayAction_GetRotationArrayActionAsQuats_Statics::NewProp_AgentId_MetaData), Z_Construct_UFunction_URotationArrayAction_GetRotationArrayActionAsQuats_Statics::NewProp_AgentId_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URotationArrayAction_GetRotationArrayActionAsQuats_Statics::NewProp_OutRotations_Inner = { "OutRotations", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URotationArrayAction_GetRotationArrayActionAsQuats_Statics::NewProp_OutRotations = { "OutRotations", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RotationArrayAction_eventGetRotationArrayActionAsQuats_Parms, OutRotations), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URotationArrayAction_GetRotationArrayActionAsQuats_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URotationArrayAction_GetRotationArrayActionAsQuats_Statics::NewProp_AgentId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URotationArrayAction_GetRotationArrayActionAsQuats_Statics::NewProp_OutRotations_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URotationArrayAction_GetRotationArrayActionAsQuats_Statics::NewProp_OutRotations,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URotationArrayAction_GetRotationArrayActionAsQuats_Statics::Function_MetaDataParams[] = {
		{ "AgentId", "-1" },
		{ "Category", "LearningAgents" },
		{ "Comment", "/**\n\x09 * Gets the data for this action as quaternions. Call during ULearningAgentsInteractor::GetActions event.\n\x09 * @param AgentId The agent id to get data for.\n\x09 * @param OutRotations The current action values.\n\x09 */" },
		{ "ModuleRelativePath", "Public/LearningAgentsActions.h" },
		{ "ToolTip", "Gets the data for this action as quaternions. Call during ULearningAgentsInteractor::GetActions event.\n@param AgentId The agent id to get data for.\n@param OutRotations The current action values." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URotationArrayAction_GetRotationArrayActionAsQuats_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URotationArrayAction, nullptr, "GetRotationArrayActionAsQuats", nullptr, nullptr, Z_Construct_UFunction_URotationArrayAction_GetRotationArrayActionAsQuats_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URotationArrayAction_GetRotationArrayActionAsQuats_Statics::PropPointers), sizeof(Z_Construct_UFunction_URotationArrayAction_GetRotationArrayActionAsQuats_Statics::RotationArrayAction_eventGetRotationArrayActionAsQuats_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URotationArrayAction_GetRotationArrayActionAsQuats_Statics::Function_MetaDataParams), Z_Construct_UFunction_URotationArrayAction_GetRotationArrayActionAsQuats_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URotationArrayAction_GetRotationArrayActionAsQuats_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_URotationArrayAction_GetRotationArrayActionAsQuats_Statics::RotationArrayAction_eventGetRotationArrayActionAsQuats_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_URotationArrayAction_GetRotationArrayActionAsQuats()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URotationArrayAction_GetRotationArrayActionAsQuats_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URotationArrayAction_GetRotationArrayActionAsRotationVectors_Statics
	{
		struct RotationArrayAction_eventGetRotationArrayActionAsRotationVectors_Parms
		{
			int32 AgentId;
			TArray<FVector> OutRotationVectors;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AgentId_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_AgentId;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutRotationVectors_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutRotationVectors;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URotationArrayAction_GetRotationArrayActionAsRotationVectors_Statics::NewProp_AgentId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URotationArrayAction_GetRotationArrayActionAsRotationVectors_Statics::NewProp_AgentId = { "AgentId", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RotationArrayAction_eventGetRotationArrayActionAsRotationVectors_Parms, AgentId), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URotationArrayAction_GetRotationArrayActionAsRotationVectors_Statics::NewProp_AgentId_MetaData), Z_Construct_UFunction_URotationArrayAction_GetRotationArrayActionAsRotationVectors_Statics::NewProp_AgentId_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URotationArrayAction_GetRotationArrayActionAsRotationVectors_Statics::NewProp_OutRotationVectors_Inner = { "OutRotationVectors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URotationArrayAction_GetRotationArrayActionAsRotationVectors_Statics::NewProp_OutRotationVectors = { "OutRotationVectors", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RotationArrayAction_eventGetRotationArrayActionAsRotationVectors_Parms, OutRotationVectors), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URotationArrayAction_GetRotationArrayActionAsRotationVectors_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URotationArrayAction_GetRotationArrayActionAsRotationVectors_Statics::NewProp_AgentId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URotationArrayAction_GetRotationArrayActionAsRotationVectors_Statics::NewProp_OutRotationVectors_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URotationArrayAction_GetRotationArrayActionAsRotationVectors_Statics::NewProp_OutRotationVectors,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URotationArrayAction_GetRotationArrayActionAsRotationVectors_Statics::Function_MetaDataParams[] = {
		{ "AgentId", "-1" },
		{ "Category", "LearningAgents" },
		{ "Comment", "/**\n\x09 * Gets the data for this action as rotation vectors. Call during ULearningAgentsInteractor::GetActions event.\n\x09 * @param AgentId The agent id to get data for.\n\x09 * @param OutRotationVectors The current action values.\n\x09 */" },
		{ "ModuleRelativePath", "Public/LearningAgentsActions.h" },
		{ "ToolTip", "Gets the data for this action as rotation vectors. Call during ULearningAgentsInteractor::GetActions event.\n@param AgentId The agent id to get data for.\n@param OutRotationVectors The current action values." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URotationArrayAction_GetRotationArrayActionAsRotationVectors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URotationArrayAction, nullptr, "GetRotationArrayActionAsRotationVectors", nullptr, nullptr, Z_Construct_UFunction_URotationArrayAction_GetRotationArrayActionAsRotationVectors_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URotationArrayAction_GetRotationArrayActionAsRotationVectors_Statics::PropPointers), sizeof(Z_Construct_UFunction_URotationArrayAction_GetRotationArrayActionAsRotationVectors_Statics::RotationArrayAction_eventGetRotationArrayActionAsRotationVectors_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URotationArrayAction_GetRotationArrayActionAsRotationVectors_Statics::Function_MetaDataParams), Z_Construct_UFunction_URotationArrayAction_GetRotationArrayActionAsRotationVectors_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URotationArrayAction_GetRotationArrayActionAsRotationVectors_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_URotationArrayAction_GetRotationArrayActionAsRotationVectors_Statics::RotationArrayAction_eventGetRotationArrayActionAsRotationVectors_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_URotationArrayAction_GetRotationArrayActionAsRotationVectors()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URotationArrayAction_GetRotationArrayActionAsRotationVectors_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URotationArrayAction);
	UClass* Z_Construct_UClass_URotationArrayAction_NoRegister()
	{
		return URotationArrayAction::StaticClass();
	}
	struct Z_Construct_UClass_URotationArrayAction_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URotationArrayAction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ULearningAgentsAction,
		(UObject* (*)())Z_Construct_UPackage__Script_LearningAgents,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URotationArrayAction_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_URotationArrayAction_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_URotationArrayAction_AddRotationArrayAction, "AddRotationArrayAction" }, // 913282714
		{ &Z_Construct_UFunction_URotationArrayAction_GetRotationArrayAction, "GetRotationArrayAction" }, // 511295125
		{ &Z_Construct_UFunction_URotationArrayAction_GetRotationArrayActionAsQuats, "GetRotationArrayActionAsQuats" }, // 4202787011
		{ &Z_Construct_UFunction_URotationArrayAction_GetRotationArrayActionAsRotationVectors, "GetRotationArrayActionAsRotationVectors" }, // 1243179717
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URotationArrayAction_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URotationArrayAction_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** An array of rotation actions. */" },
		{ "IncludePath", "LearningAgentsActions.h" },
		{ "ModuleRelativePath", "Public/LearningAgentsActions.h" },
		{ "ToolTip", "An array of rotation actions." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_URotationArrayAction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URotationArrayAction>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URotationArrayAction_Statics::ClassParams = {
		&URotationArrayAction::StaticClass,
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
		0x009000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URotationArrayAction_Statics::Class_MetaDataParams), Z_Construct_UClass_URotationArrayAction_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_URotationArrayAction()
	{
		if (!Z_Registration_Info_UClass_URotationArrayAction.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URotationArrayAction.OuterSingleton, Z_Construct_UClass_URotationArrayAction_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URotationArrayAction.OuterSingleton;
	}
	template<> LEARNINGAGENTS_API UClass* StaticClass<URotationArrayAction>()
	{
		return URotationArrayAction::StaticClass();
	}
	URotationArrayAction::URotationArrayAction(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URotationArrayAction);
	URotationArrayAction::~URotationArrayAction() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsActions_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsActions_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULearningAgentsAction, ULearningAgentsAction::StaticClass, TEXT("ULearningAgentsAction"), &Z_Registration_Info_UClass_ULearningAgentsAction, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULearningAgentsAction), 1435151896U) },
		{ Z_Construct_UClass_UFloatAction, UFloatAction::StaticClass, TEXT("UFloatAction"), &Z_Registration_Info_UClass_UFloatAction, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFloatAction), 3843281568U) },
		{ Z_Construct_UClass_UFloatArrayAction, UFloatArrayAction::StaticClass, TEXT("UFloatArrayAction"), &Z_Registration_Info_UClass_UFloatArrayAction, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFloatArrayAction), 841405712U) },
		{ Z_Construct_UClass_UVectorAction, UVectorAction::StaticClass, TEXT("UVectorAction"), &Z_Registration_Info_UClass_UVectorAction, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVectorAction), 2915595145U) },
		{ Z_Construct_UClass_UVectorArrayAction, UVectorArrayAction::StaticClass, TEXT("UVectorArrayAction"), &Z_Registration_Info_UClass_UVectorArrayAction, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVectorArrayAction), 1372941149U) },
		{ Z_Construct_UClass_UPlanarVelocityAction, UPlanarVelocityAction::StaticClass, TEXT("UPlanarVelocityAction"), &Z_Registration_Info_UClass_UPlanarVelocityAction, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPlanarVelocityAction), 1532096881U) },
		{ Z_Construct_UClass_URotationAction, URotationAction::StaticClass, TEXT("URotationAction"), &Z_Registration_Info_UClass_URotationAction, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URotationAction), 2770703875U) },
		{ Z_Construct_UClass_URotationArrayAction, URotationArrayAction::StaticClass, TEXT("URotationArrayAction"), &Z_Registration_Info_UClass_URotationArrayAction, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URotationArrayAction), 2912273093U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsActions_h_911819032(TEXT("/Script/LearningAgents"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsActions_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsActions_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
