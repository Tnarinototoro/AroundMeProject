// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/StateTree/StateTreeTask_PlayContextualAnim.h"
#include "../../Source/Runtime/Engine/Classes/Animation/AnimNotifies/AnimNotify.h"
#include "ContextualAnimSceneActorComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStateTreeTask_PlayContextualAnim() {}
// Cross Module References
	CONTEXTUALANIMATION_API UClass* Z_Construct_UClass_UContextualAnimSceneAsset_NoRegister();
	CONTEXTUALANIMATION_API UScriptStruct* Z_Construct_UScriptStruct_FContextualAnimWarpTarget();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBranchingPointNotifyPayload();
	GAMEPLAYINTERACTIONSMODULE_API UClass* Z_Construct_UClass_UStateTreeTask_PlayContextualAnim_InstanceData();
	GAMEPLAYINTERACTIONSMODULE_API UClass* Z_Construct_UClass_UStateTreeTask_PlayContextualAnim_InstanceData_NoRegister();
	GAMEPLAYINTERACTIONSMODULE_API UEnum* Z_Construct_UEnum_GameplayInteractionsModule_EPlayContextualAnimExecutionMethod();
	GAMEPLAYINTERACTIONSMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FStateTreeTask_PlayContextualAnim();
	STATETREEMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FStateTreeTaskCommonBase();
	UPackage* Z_Construct_UPackage__Script_GameplayInteractionsModule();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPlayContextualAnimExecutionMethod;
	static UEnum* EPlayContextualAnimExecutionMethod_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EPlayContextualAnimExecutionMethod.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EPlayContextualAnimExecutionMethod.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GameplayInteractionsModule_EPlayContextualAnimExecutionMethod, (UObject*)Z_Construct_UPackage__Script_GameplayInteractionsModule(), TEXT("EPlayContextualAnimExecutionMethod"));
		}
		return Z_Registration_Info_UEnum_EPlayContextualAnimExecutionMethod.OuterSingleton;
	}
	template<> GAMEPLAYINTERACTIONSMODULE_API UEnum* StaticEnum<EPlayContextualAnimExecutionMethod>()
	{
		return EPlayContextualAnimExecutionMethod_StaticEnum();
	}
	struct Z_Construct_UEnum_GameplayInteractionsModule_EPlayContextualAnimExecutionMethod_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_GameplayInteractionsModule_EPlayContextualAnimExecutionMethod_Statics::Enumerators[] = {
		{ "EPlayContextualAnimExecutionMethod::StartInteraction", (int64)EPlayContextualAnimExecutionMethod::StartInteraction },
		{ "EPlayContextualAnimExecutionMethod::JoinInteraction", (int64)EPlayContextualAnimExecutionMethod::JoinInteraction },
		{ "EPlayContextualAnimExecutionMethod::TransitionAllActors", (int64)EPlayContextualAnimExecutionMethod::TransitionAllActors },
		{ "EPlayContextualAnimExecutionMethod::TransitionSingleActor", (int64)EPlayContextualAnimExecutionMethod::TransitionSingleActor },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_GameplayInteractionsModule_EPlayContextualAnimExecutionMethod_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "JoinInteraction.Comment", "/** Join an existing interaction */" },
		{ "JoinInteraction.Name", "EPlayContextualAnimExecutionMethod::JoinInteraction" },
		{ "JoinInteraction.ToolTip", "Join an existing interaction" },
		{ "ModuleRelativePath", "Private/StateTree/StateTreeTask_PlayContextualAnim.h" },
		{ "StartInteraction.Comment", "/** Start a new interaction */" },
		{ "StartInteraction.Name", "EPlayContextualAnimExecutionMethod::StartInteraction" },
		{ "StartInteraction.ToolTip", "Start a new interaction" },
		{ "TransitionAllActors.Comment", "/** Transition a single actor in an interaction to a different section */" },
		{ "TransitionAllActors.Name", "EPlayContextualAnimExecutionMethod::TransitionAllActors" },
		{ "TransitionAllActors.ToolTip", "Transition a single actor in an interaction to a different section" },
		{ "TransitionSingleActor.Comment", "/** Transition all the actors in an interaction to a different sections */" },
		{ "TransitionSingleActor.Name", "EPlayContextualAnimExecutionMethod::TransitionSingleActor" },
		{ "TransitionSingleActor.ToolTip", "Transition all the actors in an interaction to a different sections" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GameplayInteractionsModule_EPlayContextualAnimExecutionMethod_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_GameplayInteractionsModule,
		nullptr,
		"EPlayContextualAnimExecutionMethod",
		"EPlayContextualAnimExecutionMethod",
		Z_Construct_UEnum_GameplayInteractionsModule_EPlayContextualAnimExecutionMethod_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_GameplayInteractionsModule_EPlayContextualAnimExecutionMethod_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_GameplayInteractionsModule_EPlayContextualAnimExecutionMethod_Statics::Enum_MetaDataParams), Z_Construct_UEnum_GameplayInteractionsModule_EPlayContextualAnimExecutionMethod_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_GameplayInteractionsModule_EPlayContextualAnimExecutionMethod()
	{
		if (!Z_Registration_Info_UEnum_EPlayContextualAnimExecutionMethod.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPlayContextualAnimExecutionMethod.InnerSingleton, Z_Construct_UEnum_GameplayInteractionsModule_EPlayContextualAnimExecutionMethod_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EPlayContextualAnimExecutionMethod.InnerSingleton;
	}
	DEFINE_FUNCTION(UStateTreeTask_PlayContextualAnim_InstanceData::execOnNotifyBeginReceived)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_NotifyName);
		P_GET_STRUCT_REF(FBranchingPointNotifyPayload,Z_Param_Out_BranchingPointNotifyPayload);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnNotifyBeginReceived(Z_Param_NotifyName,Z_Param_Out_BranchingPointNotifyPayload);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStateTreeTask_PlayContextualAnim_InstanceData::execOnMontageEnded)
	{
		P_GET_OBJECT(UAnimMontage,Z_Param_EndedMontage);
		P_GET_UBOOL(Z_Param_bInterrupted);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnMontageEnded(Z_Param_EndedMontage,Z_Param_bInterrupted);
		P_NATIVE_END;
	}
	void UStateTreeTask_PlayContextualAnim_InstanceData::StaticRegisterNativesUStateTreeTask_PlayContextualAnim_InstanceData()
	{
		UClass* Class = UStateTreeTask_PlayContextualAnim_InstanceData::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnMontageEnded", &UStateTreeTask_PlayContextualAnim_InstanceData::execOnMontageEnded },
			{ "OnNotifyBeginReceived", &UStateTreeTask_PlayContextualAnim_InstanceData::execOnNotifyBeginReceived },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UStateTreeTask_PlayContextualAnim_InstanceData_OnMontageEnded_Statics
	{
		struct StateTreeTask_PlayContextualAnim_InstanceData_eventOnMontageEnded_Parms
		{
			const UAnimMontage* EndedMontage;
			bool bInterrupted;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EndedMontage_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_EndedMontage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bInterrupted_MetaData[];
#endif
		static void NewProp_bInterrupted_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInterrupted;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStateTreeTask_PlayContextualAnim_InstanceData_OnMontageEnded_Statics::NewProp_EndedMontage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStateTreeTask_PlayContextualAnim_InstanceData_OnMontageEnded_Statics::NewProp_EndedMontage = { "EndedMontage", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StateTreeTask_PlayContextualAnim_InstanceData_eventOnMontageEnded_Parms, EndedMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStateTreeTask_PlayContextualAnim_InstanceData_OnMontageEnded_Statics::NewProp_EndedMontage_MetaData), Z_Construct_UFunction_UStateTreeTask_PlayContextualAnim_InstanceData_OnMontageEnded_Statics::NewProp_EndedMontage_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStateTreeTask_PlayContextualAnim_InstanceData_OnMontageEnded_Statics::NewProp_bInterrupted_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UStateTreeTask_PlayContextualAnim_InstanceData_OnMontageEnded_Statics::NewProp_bInterrupted_SetBit(void* Obj)
	{
		((StateTreeTask_PlayContextualAnim_InstanceData_eventOnMontageEnded_Parms*)Obj)->bInterrupted = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UStateTreeTask_PlayContextualAnim_InstanceData_OnMontageEnded_Statics::NewProp_bInterrupted = { "bInterrupted", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(StateTreeTask_PlayContextualAnim_InstanceData_eventOnMontageEnded_Parms), &Z_Construct_UFunction_UStateTreeTask_PlayContextualAnim_InstanceData_OnMontageEnded_Statics::NewProp_bInterrupted_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStateTreeTask_PlayContextualAnim_InstanceData_OnMontageEnded_Statics::NewProp_bInterrupted_MetaData), Z_Construct_UFunction_UStateTreeTask_PlayContextualAnim_InstanceData_OnMontageEnded_Statics::NewProp_bInterrupted_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStateTreeTask_PlayContextualAnim_InstanceData_OnMontageEnded_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStateTreeTask_PlayContextualAnim_InstanceData_OnMontageEnded_Statics::NewProp_EndedMontage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStateTreeTask_PlayContextualAnim_InstanceData_OnMontageEnded_Statics::NewProp_bInterrupted,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStateTreeTask_PlayContextualAnim_InstanceData_OnMontageEnded_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/StateTree/StateTreeTask_PlayContextualAnim.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStateTreeTask_PlayContextualAnim_InstanceData_OnMontageEnded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStateTreeTask_PlayContextualAnim_InstanceData, nullptr, "OnMontageEnded", nullptr, nullptr, Z_Construct_UFunction_UStateTreeTask_PlayContextualAnim_InstanceData_OnMontageEnded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStateTreeTask_PlayContextualAnim_InstanceData_OnMontageEnded_Statics::PropPointers), sizeof(Z_Construct_UFunction_UStateTreeTask_PlayContextualAnim_InstanceData_OnMontageEnded_Statics::StateTreeTask_PlayContextualAnim_InstanceData_eventOnMontageEnded_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStateTreeTask_PlayContextualAnim_InstanceData_OnMontageEnded_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStateTreeTask_PlayContextualAnim_InstanceData_OnMontageEnded_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStateTreeTask_PlayContextualAnim_InstanceData_OnMontageEnded_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UStateTreeTask_PlayContextualAnim_InstanceData_OnMontageEnded_Statics::StateTreeTask_PlayContextualAnim_InstanceData_eventOnMontageEnded_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UStateTreeTask_PlayContextualAnim_InstanceData_OnMontageEnded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStateTreeTask_PlayContextualAnim_InstanceData_OnMontageEnded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStateTreeTask_PlayContextualAnim_InstanceData_OnNotifyBeginReceived_Statics
	{
		struct StateTreeTask_PlayContextualAnim_InstanceData_eventOnNotifyBeginReceived_Parms
		{
			FName NotifyName;
			FBranchingPointNotifyPayload BranchingPointNotifyPayload;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_NotifyName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BranchingPointNotifyPayload_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BranchingPointNotifyPayload;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UStateTreeTask_PlayContextualAnim_InstanceData_OnNotifyBeginReceived_Statics::NewProp_NotifyName = { "NotifyName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StateTreeTask_PlayContextualAnim_InstanceData_eventOnNotifyBeginReceived_Parms, NotifyName), METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStateTreeTask_PlayContextualAnim_InstanceData_OnNotifyBeginReceived_Statics::NewProp_BranchingPointNotifyPayload_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UStateTreeTask_PlayContextualAnim_InstanceData_OnNotifyBeginReceived_Statics::NewProp_BranchingPointNotifyPayload = { "BranchingPointNotifyPayload", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StateTreeTask_PlayContextualAnim_InstanceData_eventOnNotifyBeginReceived_Parms, BranchingPointNotifyPayload), Z_Construct_UScriptStruct_FBranchingPointNotifyPayload, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStateTreeTask_PlayContextualAnim_InstanceData_OnNotifyBeginReceived_Statics::NewProp_BranchingPointNotifyPayload_MetaData), Z_Construct_UFunction_UStateTreeTask_PlayContextualAnim_InstanceData_OnNotifyBeginReceived_Statics::NewProp_BranchingPointNotifyPayload_MetaData) }; // 3747288722
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStateTreeTask_PlayContextualAnim_InstanceData_OnNotifyBeginReceived_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStateTreeTask_PlayContextualAnim_InstanceData_OnNotifyBeginReceived_Statics::NewProp_NotifyName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStateTreeTask_PlayContextualAnim_InstanceData_OnNotifyBeginReceived_Statics::NewProp_BranchingPointNotifyPayload,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStateTreeTask_PlayContextualAnim_InstanceData_OnNotifyBeginReceived_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/StateTree/StateTreeTask_PlayContextualAnim.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStateTreeTask_PlayContextualAnim_InstanceData_OnNotifyBeginReceived_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStateTreeTask_PlayContextualAnim_InstanceData, nullptr, "OnNotifyBeginReceived", nullptr, nullptr, Z_Construct_UFunction_UStateTreeTask_PlayContextualAnim_InstanceData_OnNotifyBeginReceived_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStateTreeTask_PlayContextualAnim_InstanceData_OnNotifyBeginReceived_Statics::PropPointers), sizeof(Z_Construct_UFunction_UStateTreeTask_PlayContextualAnim_InstanceData_OnNotifyBeginReceived_Statics::StateTreeTask_PlayContextualAnim_InstanceData_eventOnNotifyBeginReceived_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStateTreeTask_PlayContextualAnim_InstanceData_OnNotifyBeginReceived_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStateTreeTask_PlayContextualAnim_InstanceData_OnNotifyBeginReceived_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStateTreeTask_PlayContextualAnim_InstanceData_OnNotifyBeginReceived_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UStateTreeTask_PlayContextualAnim_InstanceData_OnNotifyBeginReceived_Statics::StateTreeTask_PlayContextualAnim_InstanceData_eventOnNotifyBeginReceived_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UStateTreeTask_PlayContextualAnim_InstanceData_OnNotifyBeginReceived()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStateTreeTask_PlayContextualAnim_InstanceData_OnNotifyBeginReceived_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UStateTreeTask_PlayContextualAnim_InstanceData);
	UClass* Z_Construct_UClass_UStateTreeTask_PlayContextualAnim_InstanceData_NoRegister()
	{
		return UStateTreeTask_PlayContextualAnim_InstanceData::StaticClass();
	}
	struct Z_Construct_UClass_UStateTreeTask_PlayContextualAnim_InstanceData_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PrimaryActor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PrimaryActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SecondaryActor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SecondaryActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SecondaryRole_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_SecondaryRole;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TertiaryActor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_TertiaryActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TertiaryRole_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_TertiaryRole;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SceneAsset_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SceneAsset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SectionName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_SectionName;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ExecutionMethod_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExecutionMethod_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ExecutionMethod;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bWaitForNotifyEventToEnd_MetaData[];
#endif
		static void NewProp_bWaitForNotifyEventToEnd_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bWaitForNotifyEventToEnd;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NotifyEventNameToEnd_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_NotifyEventNameToEnd;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LoopsToRun_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_LoopsToRun;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bLoopForever_MetaData[];
#endif
		static void NewProp_bLoopForever_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLoopForever;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DelayBetweenLoops_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DelayBetweenLoops;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RandomDeviationBetweenLoops_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RandomDeviationBetweenLoops;
		static const UECodeGen_Private::FStructPropertyParams NewProp_WarpTargets_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WarpTargets_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_WarpTargets;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UStateTreeTask_PlayContextualAnim_InstanceData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayInteractionsModule,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UStateTreeTask_PlayContextualAnim_InstanceData_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UStateTreeTask_PlayContextualAnim_InstanceData_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UStateTreeTask_PlayContextualAnim_InstanceData_OnMontageEnded, "OnMontageEnded" }, // 3578826438
		{ &Z_Construct_UFunction_UStateTreeTask_PlayContextualAnim_InstanceData_OnNotifyBeginReceived, "OnNotifyBeginReceived" }, // 2536951144
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UStateTreeTask_PlayContextualAnim_InstanceData_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStateTreeTask_PlayContextualAnim_InstanceData_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "StateTree/StateTreeTask_PlayContextualAnim.h" },
		{ "ModuleRelativePath", "Private/StateTree/StateTreeTask_PlayContextualAnim.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStateTreeTask_PlayContextualAnim_InstanceData_Statics::NewProp_PrimaryActor_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Private/StateTree/StateTreeTask_PlayContextualAnim.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UStateTreeTask_PlayContextualAnim_InstanceData_Statics::NewProp_PrimaryActor = { "PrimaryActor", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStateTreeTask_PlayContextualAnim_InstanceData, PrimaryActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UStateTreeTask_PlayContextualAnim_InstanceData_Statics::NewProp_PrimaryActor_MetaData), Z_Construct_UClass_UStateTreeTask_PlayContextualAnim_InstanceData_Statics::NewProp_PrimaryActor_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStateTreeTask_PlayContextualAnim_InstanceData_Statics::NewProp_SecondaryActor_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Private/StateTree/StateTreeTask_PlayContextualAnim.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UStateTreeTask_PlayContextualAnim_InstanceData_Statics::NewProp_SecondaryActor = { "SecondaryActor", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStateTreeTask_PlayContextualAnim_InstanceData, SecondaryActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UStateTreeTask_PlayContextualAnim_InstanceData_Statics::NewProp_SecondaryActor_MetaData), Z_Construct_UClass_UStateTreeTask_PlayContextualAnim_InstanceData_Statics::NewProp_SecondaryActor_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStateTreeTask_PlayContextualAnim_InstanceData_Statics::NewProp_SecondaryRole_MetaData[] = {
		{ "Category", "Parameter" },
		{ "ModuleRelativePath", "Private/StateTree/StateTreeTask_PlayContextualAnim.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UStateTreeTask_PlayContextualAnim_InstanceData_Statics::NewProp_SecondaryRole = { "SecondaryRole", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStateTreeTask_PlayContextualAnim_InstanceData, SecondaryRole), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UStateTreeTask_PlayContextualAnim_InstanceData_Statics::NewProp_SecondaryRole_MetaData), Z_Construct_UClass_UStateTreeTask_PlayContextualAnim_InstanceData_Statics::NewProp_SecondaryRole_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStateTreeTask_PlayContextualAnim_InstanceData_Statics::NewProp_TertiaryActor_MetaData[] = {
		{ "Category", "Parameter" },
		{ "ModuleRelativePath", "Private/StateTree/StateTreeTask_PlayContextualAnim.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UStateTreeTask_PlayContextualAnim_InstanceData_Statics::NewProp_TertiaryActor = { "TertiaryActor", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStateTreeTask_PlayContextualAnim_InstanceData, TertiaryActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UStateTreeTask_PlayContextualAnim_InstanceData_Statics::NewProp_TertiaryActor_MetaData), Z_Construct_UClass_UStateTreeTask_PlayContextualAnim_InstanceData_Statics::NewProp_TertiaryActor_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStateTreeTask_PlayContextualAnim_InstanceData_Statics::NewProp_TertiaryRole_MetaData[] = {
		{ "Category", "Parameter" },
		{ "ModuleRelativePath", "Private/StateTree/StateTreeTask_PlayContextualAnim.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UStateTreeTask_PlayContextualAnim_InstanceData_Statics::NewProp_TertiaryRole = { "TertiaryRole", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStateTreeTask_PlayContextualAnim_InstanceData, TertiaryRole), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UStateTreeTask_PlayContextualAnim_InstanceData_Statics::NewProp_TertiaryRole_MetaData), Z_Construct_UClass_UStateTreeTask_PlayContextualAnim_InstanceData_Statics::NewProp_TertiaryRole_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStateTreeTask_PlayContextualAnim_InstanceData_Statics::NewProp_SceneAsset_MetaData[] = {
		{ "Category", "Parameter" },
		{ "ModuleRelativePath", "Private/StateTree/StateTreeTask_PlayContextualAnim.h" },
		{ "NativeConstTemplateArg", "" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UStateTreeTask_PlayContextualAnim_InstanceData_Statics::NewProp_SceneAsset = { "SceneAsset", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStateTreeTask_PlayContextualAnim_InstanceData, SceneAsset), Z_Construct_UClass_UContextualAnimSceneAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UStateTreeTask_PlayContextualAnim_InstanceData_Statics::NewProp_SceneAsset_MetaData), Z_Construct_UClass_UStateTreeTask_PlayContextualAnim_InstanceData_Statics::NewProp_SceneAsset_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStateTreeTask_PlayContextualAnim_InstanceData_Statics::NewProp_SectionName_MetaData[] = {
		{ "Category", "Parameter" },
		{ "ModuleRelativePath", "Private/StateTree/StateTreeTask_PlayContextualAnim.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UStateTreeTask_PlayContextualAnim_InstanceData_Statics::NewProp_SectionName = { "SectionName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStateTreeTask_PlayContextualAnim_InstanceData, SectionName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UStateTreeTask_PlayContextualAnim_InstanceData_Statics::NewProp_SectionName_MetaData), Z_Construct_UClass_UStateTreeTask_PlayContextualAnim_InstanceData_Statics::NewProp_SectionName_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UStateTreeTask_PlayContextualAnim_InstanceData_Statics::NewProp_ExecutionMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStateTreeTask_PlayContextualAnim_InstanceData_Statics::NewProp_ExecutionMethod_MetaData[] = {
		{ "Category", "Parameter" },
		{ "ModuleRelativePath", "Private/StateTree/StateTreeTask_PlayContextualAnim.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UStateTreeTask_PlayContextualAnim_InstanceData_Statics::NewProp_ExecutionMethod = { "ExecutionMethod", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStateTreeTask_PlayContextualAnim_InstanceData, ExecutionMethod), Z_Construct_UEnum_GameplayInteractionsModule_EPlayContextualAnimExecutionMethod, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UStateTreeTask_PlayContextualAnim_InstanceData_Statics::NewProp_ExecutionMethod_MetaData), Z_Construct_UClass_UStateTreeTask_PlayContextualAnim_InstanceData_Statics::NewProp_ExecutionMethod_MetaData) }; // 2334234411
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStateTreeTask_PlayContextualAnim_InstanceData_Statics::NewProp_bWaitForNotifyEventToEnd_MetaData[] = {
		{ "Category", "Parameter" },
		{ "Comment", "/**\n\x09 * There are cases where we may be 'chaining' multiple interactions animations through different state tree tasks (e.g start -> loop -> end)\n\x09 * This could cause visual artifacts specially noticeable in multiplayer environment when the replicated package to start the next animation may not arrive right after the current animation ends.\n\x09 * To avoid this we can set the montage to do not auto blend out and add a Montage Notify at the end of the animation to let us know that we reached the end\n\x09 *\n\x09 * Note: This is really a workaround. Ideally we should have an event that let us know when the montage reaches its end regardless of the Auto Blend Out property.\n\x09*/" },
		{ "ModuleRelativePath", "Private/StateTree/StateTreeTask_PlayContextualAnim.h" },
		{ "ToolTip", "There are cases where we may be 'chaining' multiple interactions animations through different state tree tasks (e.g start -> loop -> end)\nThis could cause visual artifacts specially noticeable in multiplayer environment when the replicated package to start the next animation may not arrive right after the current animation ends.\nTo avoid this we can set the montage to do not auto blend out and add a Montage Notify at the end of the animation to let us know that we reached the end\n\nNote: This is really a workaround. Ideally we should have an event that let us know when the montage reaches its end regardless of the Auto Blend Out property." },
	};
#endif
	void Z_Construct_UClass_UStateTreeTask_PlayContextualAnim_InstanceData_Statics::NewProp_bWaitForNotifyEventToEnd_SetBit(void* Obj)
	{
		((UStateTreeTask_PlayContextualAnim_InstanceData*)Obj)->bWaitForNotifyEventToEnd = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UStateTreeTask_PlayContextualAnim_InstanceData_Statics::NewProp_bWaitForNotifyEventToEnd = { "bWaitForNotifyEventToEnd", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UStateTreeTask_PlayContextualAnim_InstanceData), &Z_Construct_UClass_UStateTreeTask_PlayContextualAnim_InstanceData_Statics::NewProp_bWaitForNotifyEventToEnd_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UStateTreeTask_PlayContextualAnim_InstanceData_Statics::NewProp_bWaitForNotifyEventToEnd_MetaData), Z_Construct_UClass_UStateTreeTask_PlayContextualAnim_InstanceData_Statics::NewProp_bWaitForNotifyEventToEnd_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStateTreeTask_PlayContextualAnim_InstanceData_Statics::NewProp_NotifyEventNameToEnd_MetaData[] = {
		{ "Category", "Parameter" },
		{ "Comment", "/** When bWaitForNotifyEventToEnd is set to true this is the name of the notify that we will look for to signal the end of the task */" },
		{ "EditCondition", "bWaitForNotifyEventToEnd" },
		{ "ModuleRelativePath", "Private/StateTree/StateTreeTask_PlayContextualAnim.h" },
		{ "ToolTip", "When bWaitForNotifyEventToEnd is set to true this is the name of the notify that we will look for to signal the end of the task" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UStateTreeTask_PlayContextualAnim_InstanceData_Statics::NewProp_NotifyEventNameToEnd = { "NotifyEventNameToEnd", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStateTreeTask_PlayContextualAnim_InstanceData, NotifyEventNameToEnd), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UStateTreeTask_PlayContextualAnim_InstanceData_Statics::NewProp_NotifyEventNameToEnd_MetaData), Z_Construct_UClass_UStateTreeTask_PlayContextualAnim_InstanceData_Statics::NewProp_NotifyEventNameToEnd_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStateTreeTask_PlayContextualAnim_InstanceData_Statics::NewProp_LoopsToRun_MetaData[] = {
		{ "Category", "Parameter" },
		{ "ClampMin", "1" },
		{ "Comment", "/** How many times the animation should be run before completing the task. */" },
		{ "EditCondition", "!bLoopForever" },
		{ "ModuleRelativePath", "Private/StateTree/StateTreeTask_PlayContextualAnim.h" },
		{ "ToolTip", "How many times the animation should be run before completing the task." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UStateTreeTask_PlayContextualAnim_InstanceData_Statics::NewProp_LoopsToRun = { "LoopsToRun", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStateTreeTask_PlayContextualAnim_InstanceData, LoopsToRun), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UStateTreeTask_PlayContextualAnim_InstanceData_Statics::NewProp_LoopsToRun_MetaData), Z_Construct_UClass_UStateTreeTask_PlayContextualAnim_InstanceData_Statics::NewProp_LoopsToRun_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStateTreeTask_PlayContextualAnim_InstanceData_Statics::NewProp_bLoopForever_MetaData[] = {
		{ "Category", "Parameter" },
		{ "Comment", "/** If true the animation will loop forever until a transition stops it. */" },
		{ "ModuleRelativePath", "Private/StateTree/StateTreeTask_PlayContextualAnim.h" },
		{ "ToolTip", "If true the animation will loop forever until a transition stops it." },
	};
#endif
	void Z_Construct_UClass_UStateTreeTask_PlayContextualAnim_InstanceData_Statics::NewProp_bLoopForever_SetBit(void* Obj)
	{
		((UStateTreeTask_PlayContextualAnim_InstanceData*)Obj)->bLoopForever = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UStateTreeTask_PlayContextualAnim_InstanceData_Statics::NewProp_bLoopForever = { "bLoopForever", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UStateTreeTask_PlayContextualAnim_InstanceData), &Z_Construct_UClass_UStateTreeTask_PlayContextualAnim_InstanceData_Statics::NewProp_bLoopForever_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UStateTreeTask_PlayContextualAnim_InstanceData_Statics::NewProp_bLoopForever_MetaData), Z_Construct_UClass_UStateTreeTask_PlayContextualAnim_InstanceData_Statics::NewProp_bLoopForever_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStateTreeTask_PlayContextualAnim_InstanceData_Statics::NewProp_DelayBetweenLoops_MetaData[] = {
		{ "Category", "Parameter" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** How many seconds should we wait between each animation loop (won't be used if RunLoops is equal 1). */" },
		{ "ModuleRelativePath", "Private/StateTree/StateTreeTask_PlayContextualAnim.h" },
		{ "ToolTip", "How many seconds should we wait between each animation loop (won't be used if RunLoops is equal 1)." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UStateTreeTask_PlayContextualAnim_InstanceData_Statics::NewProp_DelayBetweenLoops = { "DelayBetweenLoops", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStateTreeTask_PlayContextualAnim_InstanceData, DelayBetweenLoops), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UStateTreeTask_PlayContextualAnim_InstanceData_Statics::NewProp_DelayBetweenLoops_MetaData), Z_Construct_UClass_UStateTreeTask_PlayContextualAnim_InstanceData_Statics::NewProp_DelayBetweenLoops_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStateTreeTask_PlayContextualAnim_InstanceData_Statics::NewProp_RandomDeviationBetweenLoops_MetaData[] = {
		{ "Category", "Parameter" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Adds random range to the DelayBetweenLoops. */" },
		{ "ModuleRelativePath", "Private/StateTree/StateTreeTask_PlayContextualAnim.h" },
		{ "ToolTip", "Adds random range to the DelayBetweenLoops." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UStateTreeTask_PlayContextualAnim_InstanceData_Statics::NewProp_RandomDeviationBetweenLoops = { "RandomDeviationBetweenLoops", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStateTreeTask_PlayContextualAnim_InstanceData, RandomDeviationBetweenLoops), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UStateTreeTask_PlayContextualAnim_InstanceData_Statics::NewProp_RandomDeviationBetweenLoops_MetaData), Z_Construct_UClass_UStateTreeTask_PlayContextualAnim_InstanceData_Statics::NewProp_RandomDeviationBetweenLoops_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UStateTreeTask_PlayContextualAnim_InstanceData_Statics::NewProp_WarpTargets_Inner = { "WarpTargets", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FContextualAnimWarpTarget, METADATA_PARAMS(0, nullptr) }; // 2885167821
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStateTreeTask_PlayContextualAnim_InstanceData_Statics::NewProp_WarpTargets_MetaData[] = {
		{ "Category", "Parameter" },
		{ "Comment", "/** Manual warp targets for specific roles. */" },
		{ "ModuleRelativePath", "Private/StateTree/StateTreeTask_PlayContextualAnim.h" },
		{ "ToolTip", "Manual warp targets for specific roles." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UStateTreeTask_PlayContextualAnim_InstanceData_Statics::NewProp_WarpTargets = { "WarpTargets", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStateTreeTask_PlayContextualAnim_InstanceData, WarpTargets), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UStateTreeTask_PlayContextualAnim_InstanceData_Statics::NewProp_WarpTargets_MetaData), Z_Construct_UClass_UStateTreeTask_PlayContextualAnim_InstanceData_Statics::NewProp_WarpTargets_MetaData) }; // 2885167821
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UStateTreeTask_PlayContextualAnim_InstanceData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStateTreeTask_PlayContextualAnim_InstanceData_Statics::NewProp_PrimaryActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStateTreeTask_PlayContextualAnim_InstanceData_Statics::NewProp_SecondaryActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStateTreeTask_PlayContextualAnim_InstanceData_Statics::NewProp_SecondaryRole,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStateTreeTask_PlayContextualAnim_InstanceData_Statics::NewProp_TertiaryActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStateTreeTask_PlayContextualAnim_InstanceData_Statics::NewProp_TertiaryRole,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStateTreeTask_PlayContextualAnim_InstanceData_Statics::NewProp_SceneAsset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStateTreeTask_PlayContextualAnim_InstanceData_Statics::NewProp_SectionName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStateTreeTask_PlayContextualAnim_InstanceData_Statics::NewProp_ExecutionMethod_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStateTreeTask_PlayContextualAnim_InstanceData_Statics::NewProp_ExecutionMethod,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStateTreeTask_PlayContextualAnim_InstanceData_Statics::NewProp_bWaitForNotifyEventToEnd,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStateTreeTask_PlayContextualAnim_InstanceData_Statics::NewProp_NotifyEventNameToEnd,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStateTreeTask_PlayContextualAnim_InstanceData_Statics::NewProp_LoopsToRun,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStateTreeTask_PlayContextualAnim_InstanceData_Statics::NewProp_bLoopForever,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStateTreeTask_PlayContextualAnim_InstanceData_Statics::NewProp_DelayBetweenLoops,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStateTreeTask_PlayContextualAnim_InstanceData_Statics::NewProp_RandomDeviationBetweenLoops,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStateTreeTask_PlayContextualAnim_InstanceData_Statics::NewProp_WarpTargets_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStateTreeTask_PlayContextualAnim_InstanceData_Statics::NewProp_WarpTargets,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UStateTreeTask_PlayContextualAnim_InstanceData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStateTreeTask_PlayContextualAnim_InstanceData>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UStateTreeTask_PlayContextualAnim_InstanceData_Statics::ClassParams = {
		&UStateTreeTask_PlayContextualAnim_InstanceData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UStateTreeTask_PlayContextualAnim_InstanceData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UStateTreeTask_PlayContextualAnim_InstanceData_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UStateTreeTask_PlayContextualAnim_InstanceData_Statics::Class_MetaDataParams), Z_Construct_UClass_UStateTreeTask_PlayContextualAnim_InstanceData_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UStateTreeTask_PlayContextualAnim_InstanceData_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UStateTreeTask_PlayContextualAnim_InstanceData()
	{
		if (!Z_Registration_Info_UClass_UStateTreeTask_PlayContextualAnim_InstanceData.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UStateTreeTask_PlayContextualAnim_InstanceData.OuterSingleton, Z_Construct_UClass_UStateTreeTask_PlayContextualAnim_InstanceData_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UStateTreeTask_PlayContextualAnim_InstanceData.OuterSingleton;
	}
	template<> GAMEPLAYINTERACTIONSMODULE_API UClass* StaticClass<UStateTreeTask_PlayContextualAnim_InstanceData>()
	{
		return UStateTreeTask_PlayContextualAnim_InstanceData::StaticClass();
	}
	UStateTreeTask_PlayContextualAnim_InstanceData::UStateTreeTask_PlayContextualAnim_InstanceData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UStateTreeTask_PlayContextualAnim_InstanceData);
	UStateTreeTask_PlayContextualAnim_InstanceData::~UStateTreeTask_PlayContextualAnim_InstanceData() {}

static_assert(std::is_polymorphic<FStateTreeTask_PlayContextualAnim>() == std::is_polymorphic<FStateTreeTaskCommonBase>(), "USTRUCT FStateTreeTask_PlayContextualAnim cannot be polymorphic unless super FStateTreeTaskCommonBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StateTreeTask_PlayContextualAnim;
class UScriptStruct* FStateTreeTask_PlayContextualAnim::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StateTreeTask_PlayContextualAnim.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StateTreeTask_PlayContextualAnim.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeTask_PlayContextualAnim, (UObject*)Z_Construct_UPackage__Script_GameplayInteractionsModule(), TEXT("StateTreeTask_PlayContextualAnim"));
	}
	return Z_Registration_Info_UScriptStruct_StateTreeTask_PlayContextualAnim.OuterSingleton;
}
template<> GAMEPLAYINTERACTIONSMODULE_API UScriptStruct* StaticStruct<FStateTreeTask_PlayContextualAnim>()
{
	return FStateTreeTask_PlayContextualAnim::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FStateTreeTask_PlayContextualAnim_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateTreeTask_PlayContextualAnim_Statics::Struct_MetaDataParams[] = {
		{ "DisplayName", "Play Contextual Anim" },
		{ "ModuleRelativePath", "Private/StateTree/StateTreeTask_PlayContextualAnim.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FStateTreeTask_PlayContextualAnim_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStateTreeTask_PlayContextualAnim>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStateTreeTask_PlayContextualAnim_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayInteractionsModule,
		Z_Construct_UScriptStruct_FStateTreeTaskCommonBase,
		&NewStructOps,
		"StateTreeTask_PlayContextualAnim",
		nullptr,
		0,
		sizeof(FStateTreeTask_PlayContextualAnim),
		alignof(FStateTreeTask_PlayContextualAnim),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeTask_PlayContextualAnim_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FStateTreeTask_PlayContextualAnim_Statics::Struct_MetaDataParams)
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStateTreeTask_PlayContextualAnim()
	{
		if (!Z_Registration_Info_UScriptStruct_StateTreeTask_PlayContextualAnim.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StateTreeTask_PlayContextualAnim.InnerSingleton, Z_Construct_UScriptStruct_FStateTreeTask_PlayContextualAnim_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_StateTreeTask_PlayContextualAnim.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayInteractions_Source_GameplayInteractionsModule_Private_StateTree_StateTreeTask_PlayContextualAnim_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayInteractions_Source_GameplayInteractionsModule_Private_StateTree_StateTreeTask_PlayContextualAnim_h_Statics::EnumInfo[] = {
		{ EPlayContextualAnimExecutionMethod_StaticEnum, TEXT("EPlayContextualAnimExecutionMethod"), &Z_Registration_Info_UEnum_EPlayContextualAnimExecutionMethod, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2334234411U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayInteractions_Source_GameplayInteractionsModule_Private_StateTree_StateTreeTask_PlayContextualAnim_h_Statics::ScriptStructInfo[] = {
		{ FStateTreeTask_PlayContextualAnim::StaticStruct, Z_Construct_UScriptStruct_FStateTreeTask_PlayContextualAnim_Statics::NewStructOps, TEXT("StateTreeTask_PlayContextualAnim"), &Z_Registration_Info_UScriptStruct_StateTreeTask_PlayContextualAnim, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStateTreeTask_PlayContextualAnim), 3841966885U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayInteractions_Source_GameplayInteractionsModule_Private_StateTree_StateTreeTask_PlayContextualAnim_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UStateTreeTask_PlayContextualAnim_InstanceData, UStateTreeTask_PlayContextualAnim_InstanceData::StaticClass, TEXT("UStateTreeTask_PlayContextualAnim_InstanceData"), &Z_Registration_Info_UClass_UStateTreeTask_PlayContextualAnim_InstanceData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UStateTreeTask_PlayContextualAnim_InstanceData), 1417910267U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayInteractions_Source_GameplayInteractionsModule_Private_StateTree_StateTreeTask_PlayContextualAnim_h_3598870441(TEXT("/Script/GameplayInteractionsModule"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayInteractions_Source_GameplayInteractionsModule_Private_StateTree_StateTreeTask_PlayContextualAnim_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayInteractions_Source_GameplayInteractionsModule_Private_StateTree_StateTreeTask_PlayContextualAnim_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayInteractions_Source_GameplayInteractionsModule_Private_StateTree_StateTreeTask_PlayContextualAnim_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayInteractions_Source_GameplayInteractionsModule_Private_StateTree_StateTreeTask_PlayContextualAnim_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayInteractions_Source_GameplayInteractionsModule_Private_StateTree_StateTreeTask_PlayContextualAnim_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayInteractions_Source_GameplayInteractionsModule_Private_StateTree_StateTreeTask_PlayContextualAnim_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
