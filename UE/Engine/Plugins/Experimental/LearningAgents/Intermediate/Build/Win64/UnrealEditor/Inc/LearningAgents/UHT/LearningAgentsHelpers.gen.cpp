// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LearningAgentsHelpers.h"
#include "../../Source/Runtime/Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLearningAgentsHelpers() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USplineComponent_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECollisionChannel();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ESplineCoordinateSpace();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	LEARNINGAGENTS_API UClass* Z_Construct_UClass_UCollisionMonitorHelper();
	LEARNINGAGENTS_API UClass* Z_Construct_UClass_UCollisionMonitorHelper_NoRegister();
	LEARNINGAGENTS_API UClass* Z_Construct_UClass_ULearningAgentsHelper();
	LEARNINGAGENTS_API UClass* Z_Construct_UClass_ULearningAgentsHelper_NoRegister();
	LEARNINGAGENTS_API UClass* Z_Construct_UClass_ULearningAgentsManagerComponent_NoRegister();
	LEARNINGAGENTS_API UClass* Z_Construct_UClass_UMeshComponentHelper();
	LEARNINGAGENTS_API UClass* Z_Construct_UClass_UMeshComponentHelper_NoRegister();
	LEARNINGAGENTS_API UClass* Z_Construct_UClass_UProjectionHelper();
	LEARNINGAGENTS_API UClass* Z_Construct_UClass_UProjectionHelper_NoRegister();
	LEARNINGAGENTS_API UClass* Z_Construct_UClass_URayCastHelper();
	LEARNINGAGENTS_API UClass* Z_Construct_UClass_URayCastHelper_NoRegister();
	LEARNINGAGENTS_API UClass* Z_Construct_UClass_USplineComponentHelper();
	LEARNINGAGENTS_API UClass* Z_Construct_UClass_USplineComponentHelper_NoRegister();
	UPackage* Z_Construct_UPackage__Script_LearningAgents();
// End Cross Module References
	void ULearningAgentsHelper::StaticRegisterNativesULearningAgentsHelper()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULearningAgentsHelper);
	UClass* Z_Construct_UClass_ULearningAgentsHelper_NoRegister()
	{
		return ULearningAgentsHelper::StaticClass();
	}
	struct Z_Construct_UClass_ULearningAgentsHelper_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ManagerComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ManagerComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULearningAgentsHelper_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_LearningAgents,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULearningAgentsHelper_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULearningAgentsHelper_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * The base class for all helpers. Helpers are additional objects that can be used in getting or setting observations,\n * actions, rewards, and completions.\n */" },
		{ "IncludePath", "LearningAgentsHelpers.h" },
		{ "ModuleRelativePath", "Public/LearningAgentsHelpers.h" },
		{ "ToolTip", "The base class for all helpers. Helpers are additional objects that can be used in getting or setting observations,\nactions, rewards, and completions." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULearningAgentsHelper_Statics::NewProp_ManagerComponent_MetaData[] = {
		{ "Category", "LearningAgents" },
		{ "Comment", "/** Reference to the Manager Component this helper is associated with. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LearningAgentsHelpers.h" },
		{ "ToolTip", "Reference to the Manager Component this helper is associated with." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ULearningAgentsHelper_Statics::NewProp_ManagerComponent = { "ManagerComponent", nullptr, (EPropertyFlags)0x00140000000a2009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULearningAgentsHelper, ManagerComponent), Z_Construct_UClass_ULearningAgentsManagerComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULearningAgentsHelper_Statics::NewProp_ManagerComponent_MetaData), Z_Construct_UClass_ULearningAgentsHelper_Statics::NewProp_ManagerComponent_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULearningAgentsHelper_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULearningAgentsHelper_Statics::NewProp_ManagerComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULearningAgentsHelper_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULearningAgentsHelper>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULearningAgentsHelper_Statics::ClassParams = {
		&ULearningAgentsHelper::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ULearningAgentsHelper_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ULearningAgentsHelper_Statics::PropPointers),
		0,
		0x009000A1u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULearningAgentsHelper_Statics::Class_MetaDataParams), Z_Construct_UClass_ULearningAgentsHelper_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULearningAgentsHelper_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ULearningAgentsHelper()
	{
		if (!Z_Registration_Info_UClass_ULearningAgentsHelper.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULearningAgentsHelper.OuterSingleton, Z_Construct_UClass_ULearningAgentsHelper_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULearningAgentsHelper.OuterSingleton;
	}
	template<> LEARNINGAGENTS_API UClass* StaticClass<ULearningAgentsHelper>()
	{
		return ULearningAgentsHelper::StaticClass();
	}
	ULearningAgentsHelper::ULearningAgentsHelper(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULearningAgentsHelper);
	ULearningAgentsHelper::~ULearningAgentsHelper() {}
	DEFINE_FUNCTION(USplineComponentHelper::execGetVelocityAlongSpline)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_AgentId);
		P_GET_OBJECT(USplineComponent,Z_Param_SplineComponent);
		P_GET_STRUCT(FVector,Z_Param_Position);
		P_GET_STRUCT(FVector,Z_Param_Velocity);
		P_GET_PROPERTY(FFloatProperty,Z_Param_FiniteDifferenceDelta);
		P_GET_PROPERTY(FByteProperty,Z_Param_CoordinateSpace);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetVelocityAlongSpline(Z_Param_AgentId,Z_Param_SplineComponent,Z_Param_Position,Z_Param_Velocity,Z_Param_FiniteDifferenceDelta,ESplineCoordinateSpace::Type(Z_Param_CoordinateSpace));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USplineComponentHelper::execGetPositionsAlongSpline)
	{
		P_GET_TARRAY_REF(FVector,Z_Param_Out_OutPositions);
		P_GET_PROPERTY(FIntProperty,Z_Param_AgentId);
		P_GET_OBJECT(USplineComponent,Z_Param_SplineComponent);
		P_GET_PROPERTY(FIntProperty,Z_Param_PositionNum);
		P_GET_PROPERTY(FFloatProperty,Z_Param_StartDistanceAlongSpline);
		P_GET_PROPERTY(FFloatProperty,Z_Param_StopDistanceAlongSpline);
		P_GET_PROPERTY(FByteProperty,Z_Param_CoordinateSpace);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetPositionsAlongSpline(Z_Param_Out_OutPositions,Z_Param_AgentId,Z_Param_SplineComponent,Z_Param_PositionNum,Z_Param_StartDistanceAlongSpline,Z_Param_StopDistanceAlongSpline,ESplineCoordinateSpace::Type(Z_Param_CoordinateSpace));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USplineComponentHelper::execGetProportionAlongSplineAsAngle)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_AgentId);
		P_GET_OBJECT(USplineComponent,Z_Param_SplineComponent);
		P_GET_PROPERTY(FFloatProperty,Z_Param_DistanceAlongSpline);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetProportionAlongSplineAsAngle(Z_Param_AgentId,Z_Param_SplineComponent,Z_Param_DistanceAlongSpline);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USplineComponentHelper::execGetProportionAlongSpline)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_AgentId);
		P_GET_OBJECT(USplineComponent,Z_Param_SplineComponent);
		P_GET_PROPERTY(FFloatProperty,Z_Param_DistanceAlongSpline);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetProportionAlongSpline(Z_Param_AgentId,Z_Param_SplineComponent,Z_Param_DistanceAlongSpline);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USplineComponentHelper::execGetDirectionAtDistanceAlongSpline)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_AgentId);
		P_GET_OBJECT(USplineComponent,Z_Param_SplineComponent);
		P_GET_PROPERTY(FFloatProperty,Z_Param_DistanceAlongSpline);
		P_GET_PROPERTY(FByteProperty,Z_Param_CoordinateSpace);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetDirectionAtDistanceAlongSpline(Z_Param_AgentId,Z_Param_SplineComponent,Z_Param_DistanceAlongSpline,ESplineCoordinateSpace::Type(Z_Param_CoordinateSpace));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USplineComponentHelper::execGetPositionAtDistanceAlongSpline)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_AgentId);
		P_GET_OBJECT(USplineComponent,Z_Param_SplineComponent);
		P_GET_PROPERTY(FFloatProperty,Z_Param_DistanceAlongSpline);
		P_GET_PROPERTY(FByteProperty,Z_Param_CoordinateSpace);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetPositionAtDistanceAlongSpline(Z_Param_AgentId,Z_Param_SplineComponent,Z_Param_DistanceAlongSpline,ESplineCoordinateSpace::Type(Z_Param_CoordinateSpace));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USplineComponentHelper::execGetDistanceAlongSplineAtPosition)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_AgentId);
		P_GET_OBJECT(USplineComponent,Z_Param_SplineComponent);
		P_GET_STRUCT(FVector,Z_Param_Position);
		P_GET_PROPERTY(FByteProperty,Z_Param_CoordinateSpace);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetDistanceAlongSplineAtPosition(Z_Param_AgentId,Z_Param_SplineComponent,Z_Param_Position,ESplineCoordinateSpace::Type(Z_Param_CoordinateSpace));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USplineComponentHelper::execGetNearestPositionOnSpline)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_AgentId);
		P_GET_OBJECT(USplineComponent,Z_Param_SplineComponent);
		P_GET_STRUCT(FVector,Z_Param_Position);
		P_GET_PROPERTY(FByteProperty,Z_Param_CoordinateSpace);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetNearestPositionOnSpline(Z_Param_AgentId,Z_Param_SplineComponent,Z_Param_Position,ESplineCoordinateSpace::Type(Z_Param_CoordinateSpace));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USplineComponentHelper::execAddSplineComponentHelper)
	{
		P_GET_OBJECT(ULearningAgentsManagerComponent,Z_Param_InManagerComponent);
		P_GET_PROPERTY(FNameProperty,Z_Param_Name);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USplineComponentHelper**)Z_Param__Result=USplineComponentHelper::AddSplineComponentHelper(Z_Param_InManagerComponent,Z_Param_Name);
		P_NATIVE_END;
	}
	void USplineComponentHelper::StaticRegisterNativesUSplineComponentHelper()
	{
		UClass* Class = USplineComponentHelper::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddSplineComponentHelper", &USplineComponentHelper::execAddSplineComponentHelper },
			{ "GetDirectionAtDistanceAlongSpline", &USplineComponentHelper::execGetDirectionAtDistanceAlongSpline },
			{ "GetDistanceAlongSplineAtPosition", &USplineComponentHelper::execGetDistanceAlongSplineAtPosition },
			{ "GetNearestPositionOnSpline", &USplineComponentHelper::execGetNearestPositionOnSpline },
			{ "GetPositionAtDistanceAlongSpline", &USplineComponentHelper::execGetPositionAtDistanceAlongSpline },
			{ "GetPositionsAlongSpline", &USplineComponentHelper::execGetPositionsAlongSpline },
			{ "GetProportionAlongSpline", &USplineComponentHelper::execGetProportionAlongSpline },
			{ "GetProportionAlongSplineAsAngle", &USplineComponentHelper::execGetProportionAlongSplineAsAngle },
			{ "GetVelocityAlongSpline", &USplineComponentHelper::execGetVelocityAlongSpline },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USplineComponentHelper_AddSplineComponentHelper_Statics
	{
		struct SplineComponentHelper_eventAddSplineComponentHelper_Parms
		{
			ULearningAgentsManagerComponent* InManagerComponent;
			FName Name;
			USplineComponentHelper* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InManagerComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InManagerComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineComponentHelper_AddSplineComponentHelper_Statics::NewProp_InManagerComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USplineComponentHelper_AddSplineComponentHelper_Statics::NewProp_InManagerComponent = { "InManagerComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SplineComponentHelper_eventAddSplineComponentHelper_Parms, InManagerComponent), Z_Construct_UClass_ULearningAgentsManagerComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USplineComponentHelper_AddSplineComponentHelper_Statics::NewProp_InManagerComponent_MetaData), Z_Construct_UFunction_USplineComponentHelper_AddSplineComponentHelper_Statics::NewProp_InManagerComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineComponentHelper_AddSplineComponentHelper_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USplineComponentHelper_AddSplineComponentHelper_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SplineComponentHelper_eventAddSplineComponentHelper_Parms, Name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USplineComponentHelper_AddSplineComponentHelper_Statics::NewProp_Name_MetaData), Z_Construct_UFunction_USplineComponentHelper_AddSplineComponentHelper_Statics::NewProp_Name_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USplineComponentHelper_AddSplineComponentHelper_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SplineComponentHelper_eventAddSplineComponentHelper_Parms, ReturnValue), Z_Construct_UClass_USplineComponentHelper_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USplineComponentHelper_AddSplineComponentHelper_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponentHelper_AddSplineComponentHelper_Statics::NewProp_InManagerComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponentHelper_AddSplineComponentHelper_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponentHelper_AddSplineComponentHelper_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineComponentHelper_AddSplineComponentHelper_Statics::Function_MetaDataParams[] = {
		{ "Category", "LearningAgents" },
		{ "Comment", "/**\n\x09 * Adds a new spline component helper to the given manager component.\n\x09 * @param InManagerComponent The manager component to add this helper to (such as an Interactor or Trainer).\n\x09 * @param Name The name of this new helper. Used for debugging.\n\x09 * @return The newly created helper.\n\x09 */" },
		{ "CPP_Default_Name", "None" },
		{ "DefaultToSelf", "InManagerComponent" },
		{ "ModuleRelativePath", "Public/LearningAgentsHelpers.h" },
		{ "ToolTip", "Adds a new spline component helper to the given manager component.\n@param InManagerComponent The manager component to add this helper to (such as an Interactor or Trainer).\n@param Name The name of this new helper. Used for debugging.\n@return The newly created helper." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USplineComponentHelper_AddSplineComponentHelper_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USplineComponentHelper, nullptr, "AddSplineComponentHelper", nullptr, nullptr, Z_Construct_UFunction_USplineComponentHelper_AddSplineComponentHelper_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USplineComponentHelper_AddSplineComponentHelper_Statics::PropPointers), sizeof(Z_Construct_UFunction_USplineComponentHelper_AddSplineComponentHelper_Statics::SplineComponentHelper_eventAddSplineComponentHelper_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USplineComponentHelper_AddSplineComponentHelper_Statics::Function_MetaDataParams), Z_Construct_UFunction_USplineComponentHelper_AddSplineComponentHelper_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USplineComponentHelper_AddSplineComponentHelper_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USplineComponentHelper_AddSplineComponentHelper_Statics::SplineComponentHelper_eventAddSplineComponentHelper_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USplineComponentHelper_AddSplineComponentHelper()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USplineComponentHelper_AddSplineComponentHelper_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USplineComponentHelper_GetDirectionAtDistanceAlongSpline_Statics
	{
		struct SplineComponentHelper_eventGetDirectionAtDistanceAlongSpline_Parms
		{
			int32 AgentId;
			const USplineComponent* SplineComponent;
			float DistanceAlongSpline;
			TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace;
			FVector ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AgentId_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_AgentId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SplineComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SplineComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DistanceAlongSpline_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DistanceAlongSpline;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CoordinateSpace_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_CoordinateSpace;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineComponentHelper_GetDirectionAtDistanceAlongSpline_Statics::NewProp_AgentId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USplineComponentHelper_GetDirectionAtDistanceAlongSpline_Statics::NewProp_AgentId = { "AgentId", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SplineComponentHelper_eventGetDirectionAtDistanceAlongSpline_Parms, AgentId), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USplineComponentHelper_GetDirectionAtDistanceAlongSpline_Statics::NewProp_AgentId_MetaData), Z_Construct_UFunction_USplineComponentHelper_GetDirectionAtDistanceAlongSpline_Statics::NewProp_AgentId_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineComponentHelper_GetDirectionAtDistanceAlongSpline_Statics::NewProp_SplineComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USplineComponentHelper_GetDirectionAtDistanceAlongSpline_Statics::NewProp_SplineComponent = { "SplineComponent", nullptr, (EPropertyFlags)0x0010000000080082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SplineComponentHelper_eventGetDirectionAtDistanceAlongSpline_Parms, SplineComponent), Z_Construct_UClass_USplineComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USplineComponentHelper_GetDirectionAtDistanceAlongSpline_Statics::NewProp_SplineComponent_MetaData), Z_Construct_UFunction_USplineComponentHelper_GetDirectionAtDistanceAlongSpline_Statics::NewProp_SplineComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineComponentHelper_GetDirectionAtDistanceAlongSpline_Statics::NewProp_DistanceAlongSpline_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USplineComponentHelper_GetDirectionAtDistanceAlongSpline_Statics::NewProp_DistanceAlongSpline = { "DistanceAlongSpline", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SplineComponentHelper_eventGetDirectionAtDistanceAlongSpline_Parms, DistanceAlongSpline), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USplineComponentHelper_GetDirectionAtDistanceAlongSpline_Statics::NewProp_DistanceAlongSpline_MetaData), Z_Construct_UFunction_USplineComponentHelper_GetDirectionAtDistanceAlongSpline_Statics::NewProp_DistanceAlongSpline_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineComponentHelper_GetDirectionAtDistanceAlongSpline_Statics::NewProp_CoordinateSpace_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USplineComponentHelper_GetDirectionAtDistanceAlongSpline_Statics::NewProp_CoordinateSpace = { "CoordinateSpace", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SplineComponentHelper_eventGetDirectionAtDistanceAlongSpline_Parms, CoordinateSpace), Z_Construct_UEnum_Engine_ESplineCoordinateSpace, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USplineComponentHelper_GetDirectionAtDistanceAlongSpline_Statics::NewProp_CoordinateSpace_MetaData), Z_Construct_UFunction_USplineComponentHelper_GetDirectionAtDistanceAlongSpline_Statics::NewProp_CoordinateSpace_MetaData) }; // 3009475903
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USplineComponentHelper_GetDirectionAtDistanceAlongSpline_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SplineComponentHelper_eventGetDirectionAtDistanceAlongSpline_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USplineComponentHelper_GetDirectionAtDistanceAlongSpline_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponentHelper_GetDirectionAtDistanceAlongSpline_Statics::NewProp_AgentId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponentHelper_GetDirectionAtDistanceAlongSpline_Statics::NewProp_SplineComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponentHelper_GetDirectionAtDistanceAlongSpline_Statics::NewProp_DistanceAlongSpline,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponentHelper_GetDirectionAtDistanceAlongSpline_Statics::NewProp_CoordinateSpace,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponentHelper_GetDirectionAtDistanceAlongSpline_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineComponentHelper_GetDirectionAtDistanceAlongSpline_Statics::Function_MetaDataParams[] = {
		{ "AgentId", "-1" },
		{ "Category", "LearningAgents" },
		{ "Comment", "/**\n\x09 * Gets the direction along a spline at the given distance.\n\x09 * @param AgentId The agent id to run the helper for.\n\x09 * @param SplineComponent The spline component to use.\n\x09 * @param DistanceAlongSpline The distance along the spline to use.\n\x09 * @param CoordinateSpace The coordinate space to use for the spline.\n\x09 * @return The direction at the given distance along the spline.\n\x09 */" },
		{ "CPP_Default_CoordinateSpace", "World" },
		{ "ModuleRelativePath", "Public/LearningAgentsHelpers.h" },
		{ "ToolTip", "Gets the direction along a spline at the given distance.\n@param AgentId The agent id to run the helper for.\n@param SplineComponent The spline component to use.\n@param DistanceAlongSpline The distance along the spline to use.\n@param CoordinateSpace The coordinate space to use for the spline.\n@return The direction at the given distance along the spline." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USplineComponentHelper_GetDirectionAtDistanceAlongSpline_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USplineComponentHelper, nullptr, "GetDirectionAtDistanceAlongSpline", nullptr, nullptr, Z_Construct_UFunction_USplineComponentHelper_GetDirectionAtDistanceAlongSpline_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USplineComponentHelper_GetDirectionAtDistanceAlongSpline_Statics::PropPointers), sizeof(Z_Construct_UFunction_USplineComponentHelper_GetDirectionAtDistanceAlongSpline_Statics::SplineComponentHelper_eventGetDirectionAtDistanceAlongSpline_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USplineComponentHelper_GetDirectionAtDistanceAlongSpline_Statics::Function_MetaDataParams), Z_Construct_UFunction_USplineComponentHelper_GetDirectionAtDistanceAlongSpline_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USplineComponentHelper_GetDirectionAtDistanceAlongSpline_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USplineComponentHelper_GetDirectionAtDistanceAlongSpline_Statics::SplineComponentHelper_eventGetDirectionAtDistanceAlongSpline_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USplineComponentHelper_GetDirectionAtDistanceAlongSpline()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USplineComponentHelper_GetDirectionAtDistanceAlongSpline_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USplineComponentHelper_GetDistanceAlongSplineAtPosition_Statics
	{
		struct SplineComponentHelper_eventGetDistanceAlongSplineAtPosition_Parms
		{
			int32 AgentId;
			const USplineComponent* SplineComponent;
			FVector Position;
			TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace;
			float ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AgentId_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_AgentId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SplineComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SplineComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Position;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CoordinateSpace_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_CoordinateSpace;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineComponentHelper_GetDistanceAlongSplineAtPosition_Statics::NewProp_AgentId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USplineComponentHelper_GetDistanceAlongSplineAtPosition_Statics::NewProp_AgentId = { "AgentId", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SplineComponentHelper_eventGetDistanceAlongSplineAtPosition_Parms, AgentId), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USplineComponentHelper_GetDistanceAlongSplineAtPosition_Statics::NewProp_AgentId_MetaData), Z_Construct_UFunction_USplineComponentHelper_GetDistanceAlongSplineAtPosition_Statics::NewProp_AgentId_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineComponentHelper_GetDistanceAlongSplineAtPosition_Statics::NewProp_SplineComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USplineComponentHelper_GetDistanceAlongSplineAtPosition_Statics::NewProp_SplineComponent = { "SplineComponent", nullptr, (EPropertyFlags)0x0010000000080082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SplineComponentHelper_eventGetDistanceAlongSplineAtPosition_Parms, SplineComponent), Z_Construct_UClass_USplineComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USplineComponentHelper_GetDistanceAlongSplineAtPosition_Statics::NewProp_SplineComponent_MetaData), Z_Construct_UFunction_USplineComponentHelper_GetDistanceAlongSplineAtPosition_Statics::NewProp_SplineComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineComponentHelper_GetDistanceAlongSplineAtPosition_Statics::NewProp_Position_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USplineComponentHelper_GetDistanceAlongSplineAtPosition_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SplineComponentHelper_eventGetDistanceAlongSplineAtPosition_Parms, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USplineComponentHelper_GetDistanceAlongSplineAtPosition_Statics::NewProp_Position_MetaData), Z_Construct_UFunction_USplineComponentHelper_GetDistanceAlongSplineAtPosition_Statics::NewProp_Position_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineComponentHelper_GetDistanceAlongSplineAtPosition_Statics::NewProp_CoordinateSpace_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USplineComponentHelper_GetDistanceAlongSplineAtPosition_Statics::NewProp_CoordinateSpace = { "CoordinateSpace", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SplineComponentHelper_eventGetDistanceAlongSplineAtPosition_Parms, CoordinateSpace), Z_Construct_UEnum_Engine_ESplineCoordinateSpace, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USplineComponentHelper_GetDistanceAlongSplineAtPosition_Statics::NewProp_CoordinateSpace_MetaData), Z_Construct_UFunction_USplineComponentHelper_GetDistanceAlongSplineAtPosition_Statics::NewProp_CoordinateSpace_MetaData) }; // 3009475903
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USplineComponentHelper_GetDistanceAlongSplineAtPosition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SplineComponentHelper_eventGetDistanceAlongSplineAtPosition_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USplineComponentHelper_GetDistanceAlongSplineAtPosition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponentHelper_GetDistanceAlongSplineAtPosition_Statics::NewProp_AgentId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponentHelper_GetDistanceAlongSplineAtPosition_Statics::NewProp_SplineComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponentHelper_GetDistanceAlongSplineAtPosition_Statics::NewProp_Position,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponentHelper_GetDistanceAlongSplineAtPosition_Statics::NewProp_CoordinateSpace,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponentHelper_GetDistanceAlongSplineAtPosition_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineComponentHelper_GetDistanceAlongSplineAtPosition_Statics::Function_MetaDataParams[] = {
		{ "AgentId", "-1" },
		{ "Category", "LearningAgents" },
		{ "Comment", "/**\n\x09 * Gets the distance along a spline closest to the provided position.\n\x09 * @param AgentId The agent id to run the helper for.\n\x09 * @param SplineComponent The spline component to use.\n\x09 * @param Position The position to find the closest position to.\n\x09 * @param CoordinateSpace The coordinate space to use for the spline.\n\x09 * @return The distance along the spline of the closest position.\n\x09 */" },
		{ "CPP_Default_CoordinateSpace", "World" },
		{ "ModuleRelativePath", "Public/LearningAgentsHelpers.h" },
		{ "ToolTip", "Gets the distance along a spline closest to the provided position.\n@param AgentId The agent id to run the helper for.\n@param SplineComponent The spline component to use.\n@param Position The position to find the closest position to.\n@param CoordinateSpace The coordinate space to use for the spline.\n@return The distance along the spline of the closest position." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USplineComponentHelper_GetDistanceAlongSplineAtPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USplineComponentHelper, nullptr, "GetDistanceAlongSplineAtPosition", nullptr, nullptr, Z_Construct_UFunction_USplineComponentHelper_GetDistanceAlongSplineAtPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USplineComponentHelper_GetDistanceAlongSplineAtPosition_Statics::PropPointers), sizeof(Z_Construct_UFunction_USplineComponentHelper_GetDistanceAlongSplineAtPosition_Statics::SplineComponentHelper_eventGetDistanceAlongSplineAtPosition_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USplineComponentHelper_GetDistanceAlongSplineAtPosition_Statics::Function_MetaDataParams), Z_Construct_UFunction_USplineComponentHelper_GetDistanceAlongSplineAtPosition_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USplineComponentHelper_GetDistanceAlongSplineAtPosition_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USplineComponentHelper_GetDistanceAlongSplineAtPosition_Statics::SplineComponentHelper_eventGetDistanceAlongSplineAtPosition_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USplineComponentHelper_GetDistanceAlongSplineAtPosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USplineComponentHelper_GetDistanceAlongSplineAtPosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USplineComponentHelper_GetNearestPositionOnSpline_Statics
	{
		struct SplineComponentHelper_eventGetNearestPositionOnSpline_Parms
		{
			int32 AgentId;
			const USplineComponent* SplineComponent;
			FVector Position;
			TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace;
			FVector ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AgentId_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_AgentId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SplineComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SplineComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Position;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CoordinateSpace_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_CoordinateSpace;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineComponentHelper_GetNearestPositionOnSpline_Statics::NewProp_AgentId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USplineComponentHelper_GetNearestPositionOnSpline_Statics::NewProp_AgentId = { "AgentId", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SplineComponentHelper_eventGetNearestPositionOnSpline_Parms, AgentId), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USplineComponentHelper_GetNearestPositionOnSpline_Statics::NewProp_AgentId_MetaData), Z_Construct_UFunction_USplineComponentHelper_GetNearestPositionOnSpline_Statics::NewProp_AgentId_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineComponentHelper_GetNearestPositionOnSpline_Statics::NewProp_SplineComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USplineComponentHelper_GetNearestPositionOnSpline_Statics::NewProp_SplineComponent = { "SplineComponent", nullptr, (EPropertyFlags)0x0010000000080082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SplineComponentHelper_eventGetNearestPositionOnSpline_Parms, SplineComponent), Z_Construct_UClass_USplineComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USplineComponentHelper_GetNearestPositionOnSpline_Statics::NewProp_SplineComponent_MetaData), Z_Construct_UFunction_USplineComponentHelper_GetNearestPositionOnSpline_Statics::NewProp_SplineComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineComponentHelper_GetNearestPositionOnSpline_Statics::NewProp_Position_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USplineComponentHelper_GetNearestPositionOnSpline_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SplineComponentHelper_eventGetNearestPositionOnSpline_Parms, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USplineComponentHelper_GetNearestPositionOnSpline_Statics::NewProp_Position_MetaData), Z_Construct_UFunction_USplineComponentHelper_GetNearestPositionOnSpline_Statics::NewProp_Position_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineComponentHelper_GetNearestPositionOnSpline_Statics::NewProp_CoordinateSpace_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USplineComponentHelper_GetNearestPositionOnSpline_Statics::NewProp_CoordinateSpace = { "CoordinateSpace", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SplineComponentHelper_eventGetNearestPositionOnSpline_Parms, CoordinateSpace), Z_Construct_UEnum_Engine_ESplineCoordinateSpace, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USplineComponentHelper_GetNearestPositionOnSpline_Statics::NewProp_CoordinateSpace_MetaData), Z_Construct_UFunction_USplineComponentHelper_GetNearestPositionOnSpline_Statics::NewProp_CoordinateSpace_MetaData) }; // 3009475903
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USplineComponentHelper_GetNearestPositionOnSpline_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SplineComponentHelper_eventGetNearestPositionOnSpline_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USplineComponentHelper_GetNearestPositionOnSpline_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponentHelper_GetNearestPositionOnSpline_Statics::NewProp_AgentId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponentHelper_GetNearestPositionOnSpline_Statics::NewProp_SplineComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponentHelper_GetNearestPositionOnSpline_Statics::NewProp_Position,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponentHelper_GetNearestPositionOnSpline_Statics::NewProp_CoordinateSpace,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponentHelper_GetNearestPositionOnSpline_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineComponentHelper_GetNearestPositionOnSpline_Statics::Function_MetaDataParams[] = {
		{ "AgentId", "-1" },
		{ "Category", "LearningAgents" },
		{ "Comment", "/**\n\x09 * Gets the position on a spline closest to the provided position.\n\x09 * @param AgentId The agent id to run the helper for.\n\x09 * @param SplineComponent The spline component to use.\n\x09 * @param Position The position to find the closest position to.\n\x09 * @param CoordinateSpace The coordinate space to use for the spline.\n\x09 * @return The closest position on the spline.\n\x09 */" },
		{ "CPP_Default_CoordinateSpace", "World" },
		{ "ModuleRelativePath", "Public/LearningAgentsHelpers.h" },
		{ "ToolTip", "Gets the position on a spline closest to the provided position.\n@param AgentId The agent id to run the helper for.\n@param SplineComponent The spline component to use.\n@param Position The position to find the closest position to.\n@param CoordinateSpace The coordinate space to use for the spline.\n@return The closest position on the spline." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USplineComponentHelper_GetNearestPositionOnSpline_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USplineComponentHelper, nullptr, "GetNearestPositionOnSpline", nullptr, nullptr, Z_Construct_UFunction_USplineComponentHelper_GetNearestPositionOnSpline_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USplineComponentHelper_GetNearestPositionOnSpline_Statics::PropPointers), sizeof(Z_Construct_UFunction_USplineComponentHelper_GetNearestPositionOnSpline_Statics::SplineComponentHelper_eventGetNearestPositionOnSpline_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USplineComponentHelper_GetNearestPositionOnSpline_Statics::Function_MetaDataParams), Z_Construct_UFunction_USplineComponentHelper_GetNearestPositionOnSpline_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USplineComponentHelper_GetNearestPositionOnSpline_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USplineComponentHelper_GetNearestPositionOnSpline_Statics::SplineComponentHelper_eventGetNearestPositionOnSpline_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USplineComponentHelper_GetNearestPositionOnSpline()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USplineComponentHelper_GetNearestPositionOnSpline_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USplineComponentHelper_GetPositionAtDistanceAlongSpline_Statics
	{
		struct SplineComponentHelper_eventGetPositionAtDistanceAlongSpline_Parms
		{
			int32 AgentId;
			const USplineComponent* SplineComponent;
			float DistanceAlongSpline;
			TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace;
			FVector ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AgentId_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_AgentId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SplineComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SplineComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DistanceAlongSpline_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DistanceAlongSpline;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CoordinateSpace_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_CoordinateSpace;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineComponentHelper_GetPositionAtDistanceAlongSpline_Statics::NewProp_AgentId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USplineComponentHelper_GetPositionAtDistanceAlongSpline_Statics::NewProp_AgentId = { "AgentId", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SplineComponentHelper_eventGetPositionAtDistanceAlongSpline_Parms, AgentId), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USplineComponentHelper_GetPositionAtDistanceAlongSpline_Statics::NewProp_AgentId_MetaData), Z_Construct_UFunction_USplineComponentHelper_GetPositionAtDistanceAlongSpline_Statics::NewProp_AgentId_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineComponentHelper_GetPositionAtDistanceAlongSpline_Statics::NewProp_SplineComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USplineComponentHelper_GetPositionAtDistanceAlongSpline_Statics::NewProp_SplineComponent = { "SplineComponent", nullptr, (EPropertyFlags)0x0010000000080082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SplineComponentHelper_eventGetPositionAtDistanceAlongSpline_Parms, SplineComponent), Z_Construct_UClass_USplineComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USplineComponentHelper_GetPositionAtDistanceAlongSpline_Statics::NewProp_SplineComponent_MetaData), Z_Construct_UFunction_USplineComponentHelper_GetPositionAtDistanceAlongSpline_Statics::NewProp_SplineComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineComponentHelper_GetPositionAtDistanceAlongSpline_Statics::NewProp_DistanceAlongSpline_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USplineComponentHelper_GetPositionAtDistanceAlongSpline_Statics::NewProp_DistanceAlongSpline = { "DistanceAlongSpline", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SplineComponentHelper_eventGetPositionAtDistanceAlongSpline_Parms, DistanceAlongSpline), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USplineComponentHelper_GetPositionAtDistanceAlongSpline_Statics::NewProp_DistanceAlongSpline_MetaData), Z_Construct_UFunction_USplineComponentHelper_GetPositionAtDistanceAlongSpline_Statics::NewProp_DistanceAlongSpline_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineComponentHelper_GetPositionAtDistanceAlongSpline_Statics::NewProp_CoordinateSpace_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USplineComponentHelper_GetPositionAtDistanceAlongSpline_Statics::NewProp_CoordinateSpace = { "CoordinateSpace", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SplineComponentHelper_eventGetPositionAtDistanceAlongSpline_Parms, CoordinateSpace), Z_Construct_UEnum_Engine_ESplineCoordinateSpace, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USplineComponentHelper_GetPositionAtDistanceAlongSpline_Statics::NewProp_CoordinateSpace_MetaData), Z_Construct_UFunction_USplineComponentHelper_GetPositionAtDistanceAlongSpline_Statics::NewProp_CoordinateSpace_MetaData) }; // 3009475903
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USplineComponentHelper_GetPositionAtDistanceAlongSpline_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SplineComponentHelper_eventGetPositionAtDistanceAlongSpline_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USplineComponentHelper_GetPositionAtDistanceAlongSpline_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponentHelper_GetPositionAtDistanceAlongSpline_Statics::NewProp_AgentId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponentHelper_GetPositionAtDistanceAlongSpline_Statics::NewProp_SplineComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponentHelper_GetPositionAtDistanceAlongSpline_Statics::NewProp_DistanceAlongSpline,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponentHelper_GetPositionAtDistanceAlongSpline_Statics::NewProp_CoordinateSpace,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponentHelper_GetPositionAtDistanceAlongSpline_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineComponentHelper_GetPositionAtDistanceAlongSpline_Statics::Function_MetaDataParams[] = {
		{ "AgentId", "-1" },
		{ "Category", "LearningAgents" },
		{ "Comment", "/**\n\x09 * Gets the position along a spline at the given distance.\n\x09 * @param AgentId The agent id to run the helper for.\n\x09 * @param SplineComponent The spline component to use.\n\x09 * @param DistanceAlongSpline The distance along the spline to use.\n\x09 * @param CoordinateSpace The coordinate space to use for the spline.\n\x09 * @return The position at the given distance along the spline.\n\x09 */" },
		{ "CPP_Default_CoordinateSpace", "World" },
		{ "ModuleRelativePath", "Public/LearningAgentsHelpers.h" },
		{ "ToolTip", "Gets the position along a spline at the given distance.\n@param AgentId The agent id to run the helper for.\n@param SplineComponent The spline component to use.\n@param DistanceAlongSpline The distance along the spline to use.\n@param CoordinateSpace The coordinate space to use for the spline.\n@return The position at the given distance along the spline." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USplineComponentHelper_GetPositionAtDistanceAlongSpline_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USplineComponentHelper, nullptr, "GetPositionAtDistanceAlongSpline", nullptr, nullptr, Z_Construct_UFunction_USplineComponentHelper_GetPositionAtDistanceAlongSpline_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USplineComponentHelper_GetPositionAtDistanceAlongSpline_Statics::PropPointers), sizeof(Z_Construct_UFunction_USplineComponentHelper_GetPositionAtDistanceAlongSpline_Statics::SplineComponentHelper_eventGetPositionAtDistanceAlongSpline_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USplineComponentHelper_GetPositionAtDistanceAlongSpline_Statics::Function_MetaDataParams), Z_Construct_UFunction_USplineComponentHelper_GetPositionAtDistanceAlongSpline_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USplineComponentHelper_GetPositionAtDistanceAlongSpline_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USplineComponentHelper_GetPositionAtDistanceAlongSpline_Statics::SplineComponentHelper_eventGetPositionAtDistanceAlongSpline_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USplineComponentHelper_GetPositionAtDistanceAlongSpline()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USplineComponentHelper_GetPositionAtDistanceAlongSpline_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USplineComponentHelper_GetPositionsAlongSpline_Statics
	{
		struct SplineComponentHelper_eventGetPositionsAlongSpline_Parms
		{
			TArray<FVector> OutPositions;
			int32 AgentId;
			const USplineComponent* SplineComponent;
			int32 PositionNum;
			float StartDistanceAlongSpline;
			float StopDistanceAlongSpline;
			TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutPositions_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutPositions;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AgentId_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_AgentId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SplineComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SplineComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PositionNum_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_PositionNum;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartDistanceAlongSpline_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StartDistanceAlongSpline;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StopDistanceAlongSpline_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StopDistanceAlongSpline;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CoordinateSpace_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_CoordinateSpace;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USplineComponentHelper_GetPositionsAlongSpline_Statics::NewProp_OutPositions_Inner = { "OutPositions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USplineComponentHelper_GetPositionsAlongSpline_Statics::NewProp_OutPositions = { "OutPositions", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SplineComponentHelper_eventGetPositionsAlongSpline_Parms, OutPositions), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineComponentHelper_GetPositionsAlongSpline_Statics::NewProp_AgentId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USplineComponentHelper_GetPositionsAlongSpline_Statics::NewProp_AgentId = { "AgentId", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SplineComponentHelper_eventGetPositionsAlongSpline_Parms, AgentId), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USplineComponentHelper_GetPositionsAlongSpline_Statics::NewProp_AgentId_MetaData), Z_Construct_UFunction_USplineComponentHelper_GetPositionsAlongSpline_Statics::NewProp_AgentId_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineComponentHelper_GetPositionsAlongSpline_Statics::NewProp_SplineComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USplineComponentHelper_GetPositionsAlongSpline_Statics::NewProp_SplineComponent = { "SplineComponent", nullptr, (EPropertyFlags)0x0010000000080082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SplineComponentHelper_eventGetPositionsAlongSpline_Parms, SplineComponent), Z_Construct_UClass_USplineComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USplineComponentHelper_GetPositionsAlongSpline_Statics::NewProp_SplineComponent_MetaData), Z_Construct_UFunction_USplineComponentHelper_GetPositionsAlongSpline_Statics::NewProp_SplineComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineComponentHelper_GetPositionsAlongSpline_Statics::NewProp_PositionNum_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USplineComponentHelper_GetPositionsAlongSpline_Statics::NewProp_PositionNum = { "PositionNum", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SplineComponentHelper_eventGetPositionsAlongSpline_Parms, PositionNum), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USplineComponentHelper_GetPositionsAlongSpline_Statics::NewProp_PositionNum_MetaData), Z_Construct_UFunction_USplineComponentHelper_GetPositionsAlongSpline_Statics::NewProp_PositionNum_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineComponentHelper_GetPositionsAlongSpline_Statics::NewProp_StartDistanceAlongSpline_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USplineComponentHelper_GetPositionsAlongSpline_Statics::NewProp_StartDistanceAlongSpline = { "StartDistanceAlongSpline", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SplineComponentHelper_eventGetPositionsAlongSpline_Parms, StartDistanceAlongSpline), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USplineComponentHelper_GetPositionsAlongSpline_Statics::NewProp_StartDistanceAlongSpline_MetaData), Z_Construct_UFunction_USplineComponentHelper_GetPositionsAlongSpline_Statics::NewProp_StartDistanceAlongSpline_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineComponentHelper_GetPositionsAlongSpline_Statics::NewProp_StopDistanceAlongSpline_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USplineComponentHelper_GetPositionsAlongSpline_Statics::NewProp_StopDistanceAlongSpline = { "StopDistanceAlongSpline", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SplineComponentHelper_eventGetPositionsAlongSpline_Parms, StopDistanceAlongSpline), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USplineComponentHelper_GetPositionsAlongSpline_Statics::NewProp_StopDistanceAlongSpline_MetaData), Z_Construct_UFunction_USplineComponentHelper_GetPositionsAlongSpline_Statics::NewProp_StopDistanceAlongSpline_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineComponentHelper_GetPositionsAlongSpline_Statics::NewProp_CoordinateSpace_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USplineComponentHelper_GetPositionsAlongSpline_Statics::NewProp_CoordinateSpace = { "CoordinateSpace", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SplineComponentHelper_eventGetPositionsAlongSpline_Parms, CoordinateSpace), Z_Construct_UEnum_Engine_ESplineCoordinateSpace, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USplineComponentHelper_GetPositionsAlongSpline_Statics::NewProp_CoordinateSpace_MetaData), Z_Construct_UFunction_USplineComponentHelper_GetPositionsAlongSpline_Statics::NewProp_CoordinateSpace_MetaData) }; // 3009475903
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USplineComponentHelper_GetPositionsAlongSpline_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponentHelper_GetPositionsAlongSpline_Statics::NewProp_OutPositions_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponentHelper_GetPositionsAlongSpline_Statics::NewProp_OutPositions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponentHelper_GetPositionsAlongSpline_Statics::NewProp_AgentId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponentHelper_GetPositionsAlongSpline_Statics::NewProp_SplineComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponentHelper_GetPositionsAlongSpline_Statics::NewProp_PositionNum,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponentHelper_GetPositionsAlongSpline_Statics::NewProp_StartDistanceAlongSpline,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponentHelper_GetPositionsAlongSpline_Statics::NewProp_StopDistanceAlongSpline,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponentHelper_GetPositionsAlongSpline_Statics::NewProp_CoordinateSpace,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineComponentHelper_GetPositionsAlongSpline_Statics::Function_MetaDataParams[] = {
		{ "AgentId", "-1" },
		{ "Category", "LearningAgents" },
		{ "Comment", "/**\n\x09 * Gets an array of positions sampled along a spline between some starting and stopping distance. Deals properly\n\x09 * for splines which are looped.\n\x09 * @param OutPositions Output array of spline positions.\n\x09 * @param AgentId The agent id to run the helper for.\n\x09 * @param SplineComponent The spline component to use.\n\x09 * @param PositionNum The number of positions to sample along the spline.\n\x09 * @param StartDistanceAlongSpline The starting distance along the spline.\n\x09 * @param StopDistanceAlongSpline The stopping distance along the spline.\n\x09 * @param CoordinateSpace The coordinate space to use for the spline.\n\x09 */" },
		{ "CPP_Default_CoordinateSpace", "World" },
		{ "ModuleRelativePath", "Public/LearningAgentsHelpers.h" },
		{ "ToolTip", "Gets an array of positions sampled along a spline between some starting and stopping distance. Deals properly\nfor splines which are looped.\n@param OutPositions Output array of spline positions.\n@param AgentId The agent id to run the helper for.\n@param SplineComponent The spline component to use.\n@param PositionNum The number of positions to sample along the spline.\n@param StartDistanceAlongSpline The starting distance along the spline.\n@param StopDistanceAlongSpline The stopping distance along the spline.\n@param CoordinateSpace The coordinate space to use for the spline." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USplineComponentHelper_GetPositionsAlongSpline_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USplineComponentHelper, nullptr, "GetPositionsAlongSpline", nullptr, nullptr, Z_Construct_UFunction_USplineComponentHelper_GetPositionsAlongSpline_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USplineComponentHelper_GetPositionsAlongSpline_Statics::PropPointers), sizeof(Z_Construct_UFunction_USplineComponentHelper_GetPositionsAlongSpline_Statics::SplineComponentHelper_eventGetPositionsAlongSpline_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USplineComponentHelper_GetPositionsAlongSpline_Statics::Function_MetaDataParams), Z_Construct_UFunction_USplineComponentHelper_GetPositionsAlongSpline_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USplineComponentHelper_GetPositionsAlongSpline_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USplineComponentHelper_GetPositionsAlongSpline_Statics::SplineComponentHelper_eventGetPositionsAlongSpline_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USplineComponentHelper_GetPositionsAlongSpline()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USplineComponentHelper_GetPositionsAlongSpline_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USplineComponentHelper_GetProportionAlongSpline_Statics
	{
		struct SplineComponentHelper_eventGetProportionAlongSpline_Parms
		{
			int32 AgentId;
			const USplineComponent* SplineComponent;
			float DistanceAlongSpline;
			float ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AgentId_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_AgentId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SplineComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SplineComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DistanceAlongSpline_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DistanceAlongSpline;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineComponentHelper_GetProportionAlongSpline_Statics::NewProp_AgentId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USplineComponentHelper_GetProportionAlongSpline_Statics::NewProp_AgentId = { "AgentId", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SplineComponentHelper_eventGetProportionAlongSpline_Parms, AgentId), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USplineComponentHelper_GetProportionAlongSpline_Statics::NewProp_AgentId_MetaData), Z_Construct_UFunction_USplineComponentHelper_GetProportionAlongSpline_Statics::NewProp_AgentId_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineComponentHelper_GetProportionAlongSpline_Statics::NewProp_SplineComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USplineComponentHelper_GetProportionAlongSpline_Statics::NewProp_SplineComponent = { "SplineComponent", nullptr, (EPropertyFlags)0x0010000000080082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SplineComponentHelper_eventGetProportionAlongSpline_Parms, SplineComponent), Z_Construct_UClass_USplineComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USplineComponentHelper_GetProportionAlongSpline_Statics::NewProp_SplineComponent_MetaData), Z_Construct_UFunction_USplineComponentHelper_GetProportionAlongSpline_Statics::NewProp_SplineComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineComponentHelper_GetProportionAlongSpline_Statics::NewProp_DistanceAlongSpline_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USplineComponentHelper_GetProportionAlongSpline_Statics::NewProp_DistanceAlongSpline = { "DistanceAlongSpline", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SplineComponentHelper_eventGetProportionAlongSpline_Parms, DistanceAlongSpline), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USplineComponentHelper_GetProportionAlongSpline_Statics::NewProp_DistanceAlongSpline_MetaData), Z_Construct_UFunction_USplineComponentHelper_GetProportionAlongSpline_Statics::NewProp_DistanceAlongSpline_MetaData) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USplineComponentHelper_GetProportionAlongSpline_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SplineComponentHelper_eventGetProportionAlongSpline_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USplineComponentHelper_GetProportionAlongSpline_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponentHelper_GetProportionAlongSpline_Statics::NewProp_AgentId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponentHelper_GetProportionAlongSpline_Statics::NewProp_SplineComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponentHelper_GetProportionAlongSpline_Statics::NewProp_DistanceAlongSpline,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponentHelper_GetProportionAlongSpline_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineComponentHelper_GetProportionAlongSpline_Statics::Function_MetaDataParams[] = {
		{ "AgentId", "-1" },
		{ "Category", "LearningAgents" },
		{ "Comment", "/**\n\x09 * Gets the proportion along a spline in the range 0-1 for a given distance.\n\x09 * @param AgentId The agent id to run the helper for.\n\x09 * @param SplineComponent The spline component to use.\n\x09 * @param DistanceAlongSpline The distance along the spline to use.\n\x09 * @return The proportion along the spline in the range 0-1.\n\x09 */" },
		{ "ModuleRelativePath", "Public/LearningAgentsHelpers.h" },
		{ "ToolTip", "Gets the proportion along a spline in the range 0-1 for a given distance.\n@param AgentId The agent id to run the helper for.\n@param SplineComponent The spline component to use.\n@param DistanceAlongSpline The distance along the spline to use.\n@return The proportion along the spline in the range 0-1." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USplineComponentHelper_GetProportionAlongSpline_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USplineComponentHelper, nullptr, "GetProportionAlongSpline", nullptr, nullptr, Z_Construct_UFunction_USplineComponentHelper_GetProportionAlongSpline_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USplineComponentHelper_GetProportionAlongSpline_Statics::PropPointers), sizeof(Z_Construct_UFunction_USplineComponentHelper_GetProportionAlongSpline_Statics::SplineComponentHelper_eventGetProportionAlongSpline_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USplineComponentHelper_GetProportionAlongSpline_Statics::Function_MetaDataParams), Z_Construct_UFunction_USplineComponentHelper_GetProportionAlongSpline_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USplineComponentHelper_GetProportionAlongSpline_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USplineComponentHelper_GetProportionAlongSpline_Statics::SplineComponentHelper_eventGetProportionAlongSpline_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USplineComponentHelper_GetProportionAlongSpline()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USplineComponentHelper_GetProportionAlongSpline_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USplineComponentHelper_GetProportionAlongSplineAsAngle_Statics
	{
		struct SplineComponentHelper_eventGetProportionAlongSplineAsAngle_Parms
		{
			int32 AgentId;
			const USplineComponent* SplineComponent;
			float DistanceAlongSpline;
			float ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AgentId_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_AgentId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SplineComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SplineComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DistanceAlongSpline_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DistanceAlongSpline;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineComponentHelper_GetProportionAlongSplineAsAngle_Statics::NewProp_AgentId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USplineComponentHelper_GetProportionAlongSplineAsAngle_Statics::NewProp_AgentId = { "AgentId", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SplineComponentHelper_eventGetProportionAlongSplineAsAngle_Parms, AgentId), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USplineComponentHelper_GetProportionAlongSplineAsAngle_Statics::NewProp_AgentId_MetaData), Z_Construct_UFunction_USplineComponentHelper_GetProportionAlongSplineAsAngle_Statics::NewProp_AgentId_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineComponentHelper_GetProportionAlongSplineAsAngle_Statics::NewProp_SplineComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USplineComponentHelper_GetProportionAlongSplineAsAngle_Statics::NewProp_SplineComponent = { "SplineComponent", nullptr, (EPropertyFlags)0x0010000000080082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SplineComponentHelper_eventGetProportionAlongSplineAsAngle_Parms, SplineComponent), Z_Construct_UClass_USplineComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USplineComponentHelper_GetProportionAlongSplineAsAngle_Statics::NewProp_SplineComponent_MetaData), Z_Construct_UFunction_USplineComponentHelper_GetProportionAlongSplineAsAngle_Statics::NewProp_SplineComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineComponentHelper_GetProportionAlongSplineAsAngle_Statics::NewProp_DistanceAlongSpline_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USplineComponentHelper_GetProportionAlongSplineAsAngle_Statics::NewProp_DistanceAlongSpline = { "DistanceAlongSpline", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SplineComponentHelper_eventGetProportionAlongSplineAsAngle_Parms, DistanceAlongSpline), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USplineComponentHelper_GetProportionAlongSplineAsAngle_Statics::NewProp_DistanceAlongSpline_MetaData), Z_Construct_UFunction_USplineComponentHelper_GetProportionAlongSplineAsAngle_Statics::NewProp_DistanceAlongSpline_MetaData) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USplineComponentHelper_GetProportionAlongSplineAsAngle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SplineComponentHelper_eventGetProportionAlongSplineAsAngle_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USplineComponentHelper_GetProportionAlongSplineAsAngle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponentHelper_GetProportionAlongSplineAsAngle_Statics::NewProp_AgentId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponentHelper_GetProportionAlongSplineAsAngle_Statics::NewProp_SplineComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponentHelper_GetProportionAlongSplineAsAngle_Statics::NewProp_DistanceAlongSpline,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponentHelper_GetProportionAlongSplineAsAngle_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineComponentHelper_GetProportionAlongSplineAsAngle_Statics::Function_MetaDataParams[] = {
		{ "AgentId", "-1" },
		{ "Category", "LearningAgents" },
		{ "Comment", "/**\n\x09 * Gets the proportion along a spline encoded as an angle between -180 and 180 degrees for a given distance. \n\x09 * This should be used for looped splines.\n\x09 * @param AgentId The agent id to run the helper for.\n\x09 * @param SplineComponent The spline component to use.\n\x09 * @param DistanceAlongSpline The distance along the spline to use.\n\x09 * @return The proportion along the spline encoded as an angle between -180 and 180 degrees\n\x09 */" },
		{ "ModuleRelativePath", "Public/LearningAgentsHelpers.h" },
		{ "ToolTip", "Gets the proportion along a spline encoded as an angle between -180 and 180 degrees for a given distance.\nThis should be used for looped splines.\n@param AgentId The agent id to run the helper for.\n@param SplineComponent The spline component to use.\n@param DistanceAlongSpline The distance along the spline to use.\n@return The proportion along the spline encoded as an angle between -180 and 180 degrees" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USplineComponentHelper_GetProportionAlongSplineAsAngle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USplineComponentHelper, nullptr, "GetProportionAlongSplineAsAngle", nullptr, nullptr, Z_Construct_UFunction_USplineComponentHelper_GetProportionAlongSplineAsAngle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USplineComponentHelper_GetProportionAlongSplineAsAngle_Statics::PropPointers), sizeof(Z_Construct_UFunction_USplineComponentHelper_GetProportionAlongSplineAsAngle_Statics::SplineComponentHelper_eventGetProportionAlongSplineAsAngle_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USplineComponentHelper_GetProportionAlongSplineAsAngle_Statics::Function_MetaDataParams), Z_Construct_UFunction_USplineComponentHelper_GetProportionAlongSplineAsAngle_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USplineComponentHelper_GetProportionAlongSplineAsAngle_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USplineComponentHelper_GetProportionAlongSplineAsAngle_Statics::SplineComponentHelper_eventGetProportionAlongSplineAsAngle_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USplineComponentHelper_GetProportionAlongSplineAsAngle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USplineComponentHelper_GetProportionAlongSplineAsAngle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USplineComponentHelper_GetVelocityAlongSpline_Statics
	{
		struct SplineComponentHelper_eventGetVelocityAlongSpline_Parms
		{
			int32 AgentId;
			const USplineComponent* SplineComponent;
			FVector Position;
			FVector Velocity;
			float FiniteDifferenceDelta;
			TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace;
			float ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AgentId_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_AgentId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SplineComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SplineComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Position;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Velocity_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Velocity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FiniteDifferenceDelta_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FiniteDifferenceDelta;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CoordinateSpace_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_CoordinateSpace;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineComponentHelper_GetVelocityAlongSpline_Statics::NewProp_AgentId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USplineComponentHelper_GetVelocityAlongSpline_Statics::NewProp_AgentId = { "AgentId", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SplineComponentHelper_eventGetVelocityAlongSpline_Parms, AgentId), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USplineComponentHelper_GetVelocityAlongSpline_Statics::NewProp_AgentId_MetaData), Z_Construct_UFunction_USplineComponentHelper_GetVelocityAlongSpline_Statics::NewProp_AgentId_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineComponentHelper_GetVelocityAlongSpline_Statics::NewProp_SplineComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USplineComponentHelper_GetVelocityAlongSpline_Statics::NewProp_SplineComponent = { "SplineComponent", nullptr, (EPropertyFlags)0x0010000000080082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SplineComponentHelper_eventGetVelocityAlongSpline_Parms, SplineComponent), Z_Construct_UClass_USplineComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USplineComponentHelper_GetVelocityAlongSpline_Statics::NewProp_SplineComponent_MetaData), Z_Construct_UFunction_USplineComponentHelper_GetVelocityAlongSpline_Statics::NewProp_SplineComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineComponentHelper_GetVelocityAlongSpline_Statics::NewProp_Position_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USplineComponentHelper_GetVelocityAlongSpline_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SplineComponentHelper_eventGetVelocityAlongSpline_Parms, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USplineComponentHelper_GetVelocityAlongSpline_Statics::NewProp_Position_MetaData), Z_Construct_UFunction_USplineComponentHelper_GetVelocityAlongSpline_Statics::NewProp_Position_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineComponentHelper_GetVelocityAlongSpline_Statics::NewProp_Velocity_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USplineComponentHelper_GetVelocityAlongSpline_Statics::NewProp_Velocity = { "Velocity", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SplineComponentHelper_eventGetVelocityAlongSpline_Parms, Velocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USplineComponentHelper_GetVelocityAlongSpline_Statics::NewProp_Velocity_MetaData), Z_Construct_UFunction_USplineComponentHelper_GetVelocityAlongSpline_Statics::NewProp_Velocity_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineComponentHelper_GetVelocityAlongSpline_Statics::NewProp_FiniteDifferenceDelta_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USplineComponentHelper_GetVelocityAlongSpline_Statics::NewProp_FiniteDifferenceDelta = { "FiniteDifferenceDelta", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SplineComponentHelper_eventGetVelocityAlongSpline_Parms, FiniteDifferenceDelta), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USplineComponentHelper_GetVelocityAlongSpline_Statics::NewProp_FiniteDifferenceDelta_MetaData), Z_Construct_UFunction_USplineComponentHelper_GetVelocityAlongSpline_Statics::NewProp_FiniteDifferenceDelta_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineComponentHelper_GetVelocityAlongSpline_Statics::NewProp_CoordinateSpace_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USplineComponentHelper_GetVelocityAlongSpline_Statics::NewProp_CoordinateSpace = { "CoordinateSpace", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SplineComponentHelper_eventGetVelocityAlongSpline_Parms, CoordinateSpace), Z_Construct_UEnum_Engine_ESplineCoordinateSpace, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USplineComponentHelper_GetVelocityAlongSpline_Statics::NewProp_CoordinateSpace_MetaData), Z_Construct_UFunction_USplineComponentHelper_GetVelocityAlongSpline_Statics::NewProp_CoordinateSpace_MetaData) }; // 3009475903
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USplineComponentHelper_GetVelocityAlongSpline_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SplineComponentHelper_eventGetVelocityAlongSpline_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USplineComponentHelper_GetVelocityAlongSpline_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponentHelper_GetVelocityAlongSpline_Statics::NewProp_AgentId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponentHelper_GetVelocityAlongSpline_Statics::NewProp_SplineComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponentHelper_GetVelocityAlongSpline_Statics::NewProp_Position,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponentHelper_GetVelocityAlongSpline_Statics::NewProp_Velocity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponentHelper_GetVelocityAlongSpline_Statics::NewProp_FiniteDifferenceDelta,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponentHelper_GetVelocityAlongSpline_Statics::NewProp_CoordinateSpace,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponentHelper_GetVelocityAlongSpline_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineComponentHelper_GetVelocityAlongSpline_Statics::Function_MetaDataParams[] = {
		{ "AgentId", "-1" },
		{ "Category", "LearningAgents" },
		{ "Comment", "/**\n\x09 * Gets the velocity a point is traveling along a spline.\n\x09 * @param AgentId The agent id to run the helper for.\n\x09 * @param SplineComponent The spline component to use.\n\x09 * @param Position The position of the point.\n\x09 * @param Velocity The velocity of the point.\n\x09 * @param FiniteDifferenceDelta The finite difference delta used to estimate the velocity along the spline.\n\x09 * @param CoordinateSpace The coordinate space to use for the spline.\n\x09 * @return The scalar velocity the point is traveling along the spline.\n\x09 */" },
		{ "CPP_Default_CoordinateSpace", "World" },
		{ "CPP_Default_FiniteDifferenceDelta", "10.000000" },
		{ "ModuleRelativePath", "Public/LearningAgentsHelpers.h" },
		{ "ToolTip", "Gets the velocity a point is traveling along a spline.\n@param AgentId The agent id to run the helper for.\n@param SplineComponent The spline component to use.\n@param Position The position of the point.\n@param Velocity The velocity of the point.\n@param FiniteDifferenceDelta The finite difference delta used to estimate the velocity along the spline.\n@param CoordinateSpace The coordinate space to use for the spline.\n@return The scalar velocity the point is traveling along the spline." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USplineComponentHelper_GetVelocityAlongSpline_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USplineComponentHelper, nullptr, "GetVelocityAlongSpline", nullptr, nullptr, Z_Construct_UFunction_USplineComponentHelper_GetVelocityAlongSpline_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USplineComponentHelper_GetVelocityAlongSpline_Statics::PropPointers), sizeof(Z_Construct_UFunction_USplineComponentHelper_GetVelocityAlongSpline_Statics::SplineComponentHelper_eventGetVelocityAlongSpline_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USplineComponentHelper_GetVelocityAlongSpline_Statics::Function_MetaDataParams), Z_Construct_UFunction_USplineComponentHelper_GetVelocityAlongSpline_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USplineComponentHelper_GetVelocityAlongSpline_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USplineComponentHelper_GetVelocityAlongSpline_Statics::SplineComponentHelper_eventGetVelocityAlongSpline_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USplineComponentHelper_GetVelocityAlongSpline()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USplineComponentHelper_GetVelocityAlongSpline_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USplineComponentHelper);
	UClass* Z_Construct_UClass_USplineComponentHelper_NoRegister()
	{
		return USplineComponentHelper::StaticClass();
	}
	struct Z_Construct_UClass_USplineComponentHelper_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USplineComponentHelper_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ULearningAgentsHelper,
		(UObject* (*)())Z_Construct_UPackage__Script_LearningAgents,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USplineComponentHelper_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_USplineComponentHelper_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USplineComponentHelper_AddSplineComponentHelper, "AddSplineComponentHelper" }, // 1443344154
		{ &Z_Construct_UFunction_USplineComponentHelper_GetDirectionAtDistanceAlongSpline, "GetDirectionAtDistanceAlongSpline" }, // 2773266
		{ &Z_Construct_UFunction_USplineComponentHelper_GetDistanceAlongSplineAtPosition, "GetDistanceAlongSplineAtPosition" }, // 2194856270
		{ &Z_Construct_UFunction_USplineComponentHelper_GetNearestPositionOnSpline, "GetNearestPositionOnSpline" }, // 2229708331
		{ &Z_Construct_UFunction_USplineComponentHelper_GetPositionAtDistanceAlongSpline, "GetPositionAtDistanceAlongSpline" }, // 1491930485
		{ &Z_Construct_UFunction_USplineComponentHelper_GetPositionsAlongSpline, "GetPositionsAlongSpline" }, // 561476236
		{ &Z_Construct_UFunction_USplineComponentHelper_GetProportionAlongSpline, "GetProportionAlongSpline" }, // 4200557829
		{ &Z_Construct_UFunction_USplineComponentHelper_GetProportionAlongSplineAsAngle, "GetProportionAlongSplineAsAngle" }, // 2998195658
		{ &Z_Construct_UFunction_USplineComponentHelper_GetVelocityAlongSpline, "GetVelocityAlongSpline" }, // 2380815535
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USplineComponentHelper_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USplineComponentHelper_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** A helper for computing various properties from a SplineComponent. */" },
		{ "IncludePath", "LearningAgentsHelpers.h" },
		{ "ModuleRelativePath", "Public/LearningAgentsHelpers.h" },
		{ "ToolTip", "A helper for computing various properties from a SplineComponent." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USplineComponentHelper_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USplineComponentHelper>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USplineComponentHelper_Statics::ClassParams = {
		&USplineComponentHelper::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USplineComponentHelper_Statics::Class_MetaDataParams), Z_Construct_UClass_USplineComponentHelper_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_USplineComponentHelper()
	{
		if (!Z_Registration_Info_UClass_USplineComponentHelper.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USplineComponentHelper.OuterSingleton, Z_Construct_UClass_USplineComponentHelper_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USplineComponentHelper.OuterSingleton;
	}
	template<> LEARNINGAGENTS_API UClass* StaticClass<USplineComponentHelper>()
	{
		return USplineComponentHelper::StaticClass();
	}
	USplineComponentHelper::USplineComponentHelper(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USplineComponentHelper);
	USplineComponentHelper::~USplineComponentHelper() {}
	DEFINE_FUNCTION(UProjectionHelper::execProjectPositionRotationOntoGroundPlane)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_OutPosition);
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_OutRotation);
		P_GET_PROPERTY(FIntProperty,Z_Param_AgentId);
		P_GET_STRUCT(FVector,Z_Param_InPosition);
		P_GET_STRUCT(FRotator,Z_Param_InRotation);
		P_GET_STRUCT(FVector,Z_Param_LocalForwardVector);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ProjectPositionRotationOntoGroundPlane(Z_Param_Out_OutPosition,Z_Param_Out_OutRotation,Z_Param_AgentId,Z_Param_InPosition,Z_Param_InRotation,Z_Param_LocalForwardVector);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UProjectionHelper::execProjectTransformOntoGroundPlane)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_AgentId);
		P_GET_STRUCT(FTransform,Z_Param_Transform);
		P_GET_STRUCT(FVector,Z_Param_LocalForwardVector);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTransform*)Z_Param__Result=P_THIS->ProjectTransformOntoGroundPlane(Z_Param_AgentId,Z_Param_Transform,Z_Param_LocalForwardVector);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UProjectionHelper::execAddProjectionHelper)
	{
		P_GET_OBJECT(ULearningAgentsManagerComponent,Z_Param_InManagerComponent);
		P_GET_PROPERTY(FNameProperty,Z_Param_Name);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UProjectionHelper**)Z_Param__Result=UProjectionHelper::AddProjectionHelper(Z_Param_InManagerComponent,Z_Param_Name);
		P_NATIVE_END;
	}
	void UProjectionHelper::StaticRegisterNativesUProjectionHelper()
	{
		UClass* Class = UProjectionHelper::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddProjectionHelper", &UProjectionHelper::execAddProjectionHelper },
			{ "ProjectPositionRotationOntoGroundPlane", &UProjectionHelper::execProjectPositionRotationOntoGroundPlane },
			{ "ProjectTransformOntoGroundPlane", &UProjectionHelper::execProjectTransformOntoGroundPlane },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UProjectionHelper_AddProjectionHelper_Statics
	{
		struct ProjectionHelper_eventAddProjectionHelper_Parms
		{
			ULearningAgentsManagerComponent* InManagerComponent;
			FName Name;
			UProjectionHelper* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InManagerComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InManagerComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UProjectionHelper_AddProjectionHelper_Statics::NewProp_InManagerComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UProjectionHelper_AddProjectionHelper_Statics::NewProp_InManagerComponent = { "InManagerComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProjectionHelper_eventAddProjectionHelper_Parms, InManagerComponent), Z_Construct_UClass_ULearningAgentsManagerComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectionHelper_AddProjectionHelper_Statics::NewProp_InManagerComponent_MetaData), Z_Construct_UFunction_UProjectionHelper_AddProjectionHelper_Statics::NewProp_InManagerComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UProjectionHelper_AddProjectionHelper_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UProjectionHelper_AddProjectionHelper_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProjectionHelper_eventAddProjectionHelper_Parms, Name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectionHelper_AddProjectionHelper_Statics::NewProp_Name_MetaData), Z_Construct_UFunction_UProjectionHelper_AddProjectionHelper_Statics::NewProp_Name_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UProjectionHelper_AddProjectionHelper_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProjectionHelper_eventAddProjectionHelper_Parms, ReturnValue), Z_Construct_UClass_UProjectionHelper_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UProjectionHelper_AddProjectionHelper_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProjectionHelper_AddProjectionHelper_Statics::NewProp_InManagerComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProjectionHelper_AddProjectionHelper_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProjectionHelper_AddProjectionHelper_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UProjectionHelper_AddProjectionHelper_Statics::Function_MetaDataParams[] = {
		{ "Category", "LearningAgents" },
		{ "Comment", "/**\n\x09 * Adds a new projection helper to the given manager component.\n\x09 * @param InManagerComponent The manager component to add this helper to (such as an Interactor or Trainer).\n\x09 * @param Name The name of this new helper. Used for debugging.\n\x09 * @return The newly created helper.\n\x09 */" },
		{ "CPP_Default_Name", "None" },
		{ "DefaultToSelf", "InManagerComponent" },
		{ "ModuleRelativePath", "Public/LearningAgentsHelpers.h" },
		{ "ToolTip", "Adds a new projection helper to the given manager component.\n@param InManagerComponent The manager component to add this helper to (such as an Interactor or Trainer).\n@param Name The name of this new helper. Used for debugging.\n@return The newly created helper." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UProjectionHelper_AddProjectionHelper_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UProjectionHelper, nullptr, "AddProjectionHelper", nullptr, nullptr, Z_Construct_UFunction_UProjectionHelper_AddProjectionHelper_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectionHelper_AddProjectionHelper_Statics::PropPointers), sizeof(Z_Construct_UFunction_UProjectionHelper_AddProjectionHelper_Statics::ProjectionHelper_eventAddProjectionHelper_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectionHelper_AddProjectionHelper_Statics::Function_MetaDataParams), Z_Construct_UFunction_UProjectionHelper_AddProjectionHelper_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectionHelper_AddProjectionHelper_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UProjectionHelper_AddProjectionHelper_Statics::ProjectionHelper_eventAddProjectionHelper_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UProjectionHelper_AddProjectionHelper()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UProjectionHelper_AddProjectionHelper_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UProjectionHelper_ProjectPositionRotationOntoGroundPlane_Statics
	{
		struct ProjectionHelper_eventProjectPositionRotationOntoGroundPlane_Parms
		{
			FVector OutPosition;
			FRotator OutRotation;
			int32 AgentId;
			FVector InPosition;
			FRotator InRotation;
			FVector LocalForwardVector;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutPosition;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutRotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AgentId_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_AgentId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InPosition_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InPosition;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InRotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InRotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LocalForwardVector_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LocalForwardVector;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UProjectionHelper_ProjectPositionRotationOntoGroundPlane_Statics::NewProp_OutPosition = { "OutPosition", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProjectionHelper_eventProjectPositionRotationOntoGroundPlane_Parms, OutPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UProjectionHelper_ProjectPositionRotationOntoGroundPlane_Statics::NewProp_OutRotation = { "OutRotation", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProjectionHelper_eventProjectPositionRotationOntoGroundPlane_Parms, OutRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UProjectionHelper_ProjectPositionRotationOntoGroundPlane_Statics::NewProp_AgentId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UProjectionHelper_ProjectPositionRotationOntoGroundPlane_Statics::NewProp_AgentId = { "AgentId", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProjectionHelper_eventProjectPositionRotationOntoGroundPlane_Parms, AgentId), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectionHelper_ProjectPositionRotationOntoGroundPlane_Statics::NewProp_AgentId_MetaData), Z_Construct_UFunction_UProjectionHelper_ProjectPositionRotationOntoGroundPlane_Statics::NewProp_AgentId_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UProjectionHelper_ProjectPositionRotationOntoGroundPlane_Statics::NewProp_InPosition_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UProjectionHelper_ProjectPositionRotationOntoGroundPlane_Statics::NewProp_InPosition = { "InPosition", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProjectionHelper_eventProjectPositionRotationOntoGroundPlane_Parms, InPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectionHelper_ProjectPositionRotationOntoGroundPlane_Statics::NewProp_InPosition_MetaData), Z_Construct_UFunction_UProjectionHelper_ProjectPositionRotationOntoGroundPlane_Statics::NewProp_InPosition_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UProjectionHelper_ProjectPositionRotationOntoGroundPlane_Statics::NewProp_InRotation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UProjectionHelper_ProjectPositionRotationOntoGroundPlane_Statics::NewProp_InRotation = { "InRotation", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProjectionHelper_eventProjectPositionRotationOntoGroundPlane_Parms, InRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectionHelper_ProjectPositionRotationOntoGroundPlane_Statics::NewProp_InRotation_MetaData), Z_Construct_UFunction_UProjectionHelper_ProjectPositionRotationOntoGroundPlane_Statics::NewProp_InRotation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UProjectionHelper_ProjectPositionRotationOntoGroundPlane_Statics::NewProp_LocalForwardVector_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UProjectionHelper_ProjectPositionRotationOntoGroundPlane_Statics::NewProp_LocalForwardVector = { "LocalForwardVector", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProjectionHelper_eventProjectPositionRotationOntoGroundPlane_Parms, LocalForwardVector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectionHelper_ProjectPositionRotationOntoGroundPlane_Statics::NewProp_LocalForwardVector_MetaData), Z_Construct_UFunction_UProjectionHelper_ProjectPositionRotationOntoGroundPlane_Statics::NewProp_LocalForwardVector_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UProjectionHelper_ProjectPositionRotationOntoGroundPlane_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProjectionHelper_ProjectPositionRotationOntoGroundPlane_Statics::NewProp_OutPosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProjectionHelper_ProjectPositionRotationOntoGroundPlane_Statics::NewProp_OutRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProjectionHelper_ProjectPositionRotationOntoGroundPlane_Statics::NewProp_AgentId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProjectionHelper_ProjectPositionRotationOntoGroundPlane_Statics::NewProp_InPosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProjectionHelper_ProjectPositionRotationOntoGroundPlane_Statics::NewProp_InRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProjectionHelper_ProjectPositionRotationOntoGroundPlane_Statics::NewProp_LocalForwardVector,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UProjectionHelper_ProjectPositionRotationOntoGroundPlane_Statics::Function_MetaDataParams[] = {
		{ "AgentId", "-1" },
		{ "Category", "LearningAgents" },
		{ "Comment", "/**\n\x09 * Projects a position and rotation onto the zero height ground plane resulting in translation only in XY and rotation only around the Z.\n\x09 * @param OutPosition The output projected position.\n\x09 * @param OutRotation The output projected rotation.\n\x09 * @param AgentId The agent id to run the helper for.\n\x09 * @param InPosition The input position.\n\x09 * @param InRotation The input rotation.\n\x09 * @param LocalForwardVector The local forward direction.\n\x09 */" },
		{ "CPP_Default_LocalForwardVector", "1.000000,0.000000,0.000000" },
		{ "ModuleRelativePath", "Public/LearningAgentsHelpers.h" },
		{ "ToolTip", "Projects a position and rotation onto the zero height ground plane resulting in translation only in XY and rotation only around the Z.\n@param OutPosition The output projected position.\n@param OutRotation The output projected rotation.\n@param AgentId The agent id to run the helper for.\n@param InPosition The input position.\n@param InRotation The input rotation.\n@param LocalForwardVector The local forward direction." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UProjectionHelper_ProjectPositionRotationOntoGroundPlane_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UProjectionHelper, nullptr, "ProjectPositionRotationOntoGroundPlane", nullptr, nullptr, Z_Construct_UFunction_UProjectionHelper_ProjectPositionRotationOntoGroundPlane_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectionHelper_ProjectPositionRotationOntoGroundPlane_Statics::PropPointers), sizeof(Z_Construct_UFunction_UProjectionHelper_ProjectPositionRotationOntoGroundPlane_Statics::ProjectionHelper_eventProjectPositionRotationOntoGroundPlane_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectionHelper_ProjectPositionRotationOntoGroundPlane_Statics::Function_MetaDataParams), Z_Construct_UFunction_UProjectionHelper_ProjectPositionRotationOntoGroundPlane_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectionHelper_ProjectPositionRotationOntoGroundPlane_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UProjectionHelper_ProjectPositionRotationOntoGroundPlane_Statics::ProjectionHelper_eventProjectPositionRotationOntoGroundPlane_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UProjectionHelper_ProjectPositionRotationOntoGroundPlane()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UProjectionHelper_ProjectPositionRotationOntoGroundPlane_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UProjectionHelper_ProjectTransformOntoGroundPlane_Statics
	{
		struct ProjectionHelper_eventProjectTransformOntoGroundPlane_Parms
		{
			int32 AgentId;
			FTransform Transform;
			FVector LocalForwardVector;
			FTransform ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AgentId_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_AgentId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Transform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LocalForwardVector_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LocalForwardVector;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UProjectionHelper_ProjectTransformOntoGroundPlane_Statics::NewProp_AgentId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UProjectionHelper_ProjectTransformOntoGroundPlane_Statics::NewProp_AgentId = { "AgentId", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProjectionHelper_eventProjectTransformOntoGroundPlane_Parms, AgentId), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectionHelper_ProjectTransformOntoGroundPlane_Statics::NewProp_AgentId_MetaData), Z_Construct_UFunction_UProjectionHelper_ProjectTransformOntoGroundPlane_Statics::NewProp_AgentId_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UProjectionHelper_ProjectTransformOntoGroundPlane_Statics::NewProp_Transform_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UProjectionHelper_ProjectTransformOntoGroundPlane_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProjectionHelper_eventProjectTransformOntoGroundPlane_Parms, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectionHelper_ProjectTransformOntoGroundPlane_Statics::NewProp_Transform_MetaData), Z_Construct_UFunction_UProjectionHelper_ProjectTransformOntoGroundPlane_Statics::NewProp_Transform_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UProjectionHelper_ProjectTransformOntoGroundPlane_Statics::NewProp_LocalForwardVector_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UProjectionHelper_ProjectTransformOntoGroundPlane_Statics::NewProp_LocalForwardVector = { "LocalForwardVector", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProjectionHelper_eventProjectTransformOntoGroundPlane_Parms, LocalForwardVector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectionHelper_ProjectTransformOntoGroundPlane_Statics::NewProp_LocalForwardVector_MetaData), Z_Construct_UFunction_UProjectionHelper_ProjectTransformOntoGroundPlane_Statics::NewProp_LocalForwardVector_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UProjectionHelper_ProjectTransformOntoGroundPlane_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProjectionHelper_eventProjectTransformOntoGroundPlane_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UProjectionHelper_ProjectTransformOntoGroundPlane_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProjectionHelper_ProjectTransformOntoGroundPlane_Statics::NewProp_AgentId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProjectionHelper_ProjectTransformOntoGroundPlane_Statics::NewProp_Transform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProjectionHelper_ProjectTransformOntoGroundPlane_Statics::NewProp_LocalForwardVector,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProjectionHelper_ProjectTransformOntoGroundPlane_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UProjectionHelper_ProjectTransformOntoGroundPlane_Statics::Function_MetaDataParams[] = {
		{ "AgentId", "-1" },
		{ "Category", "LearningAgents" },
		{ "Comment", "/**\n\x09 * Projects a transform onto the zero height ground plane resulting in translation only in XY and rotation only around the Z.\n\x09 * @param AgentId The agent id to run the helper for.\n\x09 * @param Transform The transform to project.\n\x09 * @param LocalForwardVector The local forward direction.\n\x09 * @return The transform projected onto the ground plane.\n\x09 */" },
		{ "CPP_Default_LocalForwardVector", "1.000000,0.000000,0.000000" },
		{ "ModuleRelativePath", "Public/LearningAgentsHelpers.h" },
		{ "ToolTip", "Projects a transform onto the zero height ground plane resulting in translation only in XY and rotation only around the Z.\n@param AgentId The agent id to run the helper for.\n@param Transform The transform to project.\n@param LocalForwardVector The local forward direction.\n@return The transform projected onto the ground plane." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UProjectionHelper_ProjectTransformOntoGroundPlane_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UProjectionHelper, nullptr, "ProjectTransformOntoGroundPlane", nullptr, nullptr, Z_Construct_UFunction_UProjectionHelper_ProjectTransformOntoGroundPlane_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectionHelper_ProjectTransformOntoGroundPlane_Statics::PropPointers), sizeof(Z_Construct_UFunction_UProjectionHelper_ProjectTransformOntoGroundPlane_Statics::ProjectionHelper_eventProjectTransformOntoGroundPlane_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectionHelper_ProjectTransformOntoGroundPlane_Statics::Function_MetaDataParams), Z_Construct_UFunction_UProjectionHelper_ProjectTransformOntoGroundPlane_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectionHelper_ProjectTransformOntoGroundPlane_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UProjectionHelper_ProjectTransformOntoGroundPlane_Statics::ProjectionHelper_eventProjectTransformOntoGroundPlane_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UProjectionHelper_ProjectTransformOntoGroundPlane()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UProjectionHelper_ProjectTransformOntoGroundPlane_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UProjectionHelper);
	UClass* Z_Construct_UClass_UProjectionHelper_NoRegister()
	{
		return UProjectionHelper::StaticClass();
	}
	struct Z_Construct_UClass_UProjectionHelper_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UProjectionHelper_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ULearningAgentsHelper,
		(UObject* (*)())Z_Construct_UPackage__Script_LearningAgents,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UProjectionHelper_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UProjectionHelper_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UProjectionHelper_AddProjectionHelper, "AddProjectionHelper" }, // 879135965
		{ &Z_Construct_UFunction_UProjectionHelper_ProjectPositionRotationOntoGroundPlane, "ProjectPositionRotationOntoGroundPlane" }, // 1968413834
		{ &Z_Construct_UFunction_UProjectionHelper_ProjectTransformOntoGroundPlane, "ProjectTransformOntoGroundPlane" }, // 2610752857
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UProjectionHelper_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProjectionHelper_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** A helper for projecting onto surfaces. */" },
		{ "IncludePath", "LearningAgentsHelpers.h" },
		{ "ModuleRelativePath", "Public/LearningAgentsHelpers.h" },
		{ "ToolTip", "A helper for projecting onto surfaces." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UProjectionHelper_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UProjectionHelper>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UProjectionHelper_Statics::ClassParams = {
		&UProjectionHelper::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UProjectionHelper_Statics::Class_MetaDataParams), Z_Construct_UClass_UProjectionHelper_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UProjectionHelper()
	{
		if (!Z_Registration_Info_UClass_UProjectionHelper.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UProjectionHelper.OuterSingleton, Z_Construct_UClass_UProjectionHelper_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UProjectionHelper.OuterSingleton;
	}
	template<> LEARNINGAGENTS_API UClass* StaticClass<UProjectionHelper>()
	{
		return UProjectionHelper::StaticClass();
	}
	UProjectionHelper::UProjectionHelper(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UProjectionHelper);
	UProjectionHelper::~UProjectionHelper() {}
	DEFINE_FUNCTION(UMeshComponentHelper::execGetMeshBonePositions)
	{
		P_GET_TARRAY_REF(FVector,Z_Param_Out_OutBonePositions);
		P_GET_PROPERTY(FIntProperty,Z_Param_AgentId);
		P_GET_OBJECT(UMeshComponent,Z_Param_MeshComponent);
		P_GET_TARRAY_REF(FName,Z_Param_Out_BoneNames);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetMeshBonePositions(Z_Param_Out_OutBonePositions,Z_Param_AgentId,Z_Param_MeshComponent,Z_Param_Out_BoneNames);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMeshComponentHelper::execAddMeshComponentHelper)
	{
		P_GET_OBJECT(ULearningAgentsManagerComponent,Z_Param_InManagerComponent);
		P_GET_PROPERTY(FNameProperty,Z_Param_Name);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UMeshComponentHelper**)Z_Param__Result=UMeshComponentHelper::AddMeshComponentHelper(Z_Param_InManagerComponent,Z_Param_Name);
		P_NATIVE_END;
	}
	void UMeshComponentHelper::StaticRegisterNativesUMeshComponentHelper()
	{
		UClass* Class = UMeshComponentHelper::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddMeshComponentHelper", &UMeshComponentHelper::execAddMeshComponentHelper },
			{ "GetMeshBonePositions", &UMeshComponentHelper::execGetMeshBonePositions },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMeshComponentHelper_AddMeshComponentHelper_Statics
	{
		struct MeshComponentHelper_eventAddMeshComponentHelper_Parms
		{
			ULearningAgentsManagerComponent* InManagerComponent;
			FName Name;
			UMeshComponentHelper* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InManagerComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InManagerComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMeshComponentHelper_AddMeshComponentHelper_Statics::NewProp_InManagerComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMeshComponentHelper_AddMeshComponentHelper_Statics::NewProp_InManagerComponent = { "InManagerComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MeshComponentHelper_eventAddMeshComponentHelper_Parms, InManagerComponent), Z_Construct_UClass_ULearningAgentsManagerComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshComponentHelper_AddMeshComponentHelper_Statics::NewProp_InManagerComponent_MetaData), Z_Construct_UFunction_UMeshComponentHelper_AddMeshComponentHelper_Statics::NewProp_InManagerComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMeshComponentHelper_AddMeshComponentHelper_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMeshComponentHelper_AddMeshComponentHelper_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MeshComponentHelper_eventAddMeshComponentHelper_Parms, Name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshComponentHelper_AddMeshComponentHelper_Statics::NewProp_Name_MetaData), Z_Construct_UFunction_UMeshComponentHelper_AddMeshComponentHelper_Statics::NewProp_Name_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMeshComponentHelper_AddMeshComponentHelper_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MeshComponentHelper_eventAddMeshComponentHelper_Parms, ReturnValue), Z_Construct_UClass_UMeshComponentHelper_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMeshComponentHelper_AddMeshComponentHelper_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshComponentHelper_AddMeshComponentHelper_Statics::NewProp_InManagerComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshComponentHelper_AddMeshComponentHelper_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshComponentHelper_AddMeshComponentHelper_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMeshComponentHelper_AddMeshComponentHelper_Statics::Function_MetaDataParams[] = {
		{ "Category", "LearningAgents" },
		{ "Comment", "/**\n\x09 * Adds a new mesh component helper to the given manager component.\n\x09 * @param InManagerComponent The manager component to add this helper to (such as an Interactor or Trainer).\n\x09 * @param Name The name of this new helper. Used for debugging.\n\x09 * @return The newly created helper.\n\x09 */" },
		{ "CPP_Default_Name", "None" },
		{ "DefaultToSelf", "InManagerComponent" },
		{ "ModuleRelativePath", "Public/LearningAgentsHelpers.h" },
		{ "ToolTip", "Adds a new mesh component helper to the given manager component.\n@param InManagerComponent The manager component to add this helper to (such as an Interactor or Trainer).\n@param Name The name of this new helper. Used for debugging.\n@return The newly created helper." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeshComponentHelper_AddMeshComponentHelper_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshComponentHelper, nullptr, "AddMeshComponentHelper", nullptr, nullptr, Z_Construct_UFunction_UMeshComponentHelper_AddMeshComponentHelper_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshComponentHelper_AddMeshComponentHelper_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMeshComponentHelper_AddMeshComponentHelper_Statics::MeshComponentHelper_eventAddMeshComponentHelper_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshComponentHelper_AddMeshComponentHelper_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMeshComponentHelper_AddMeshComponentHelper_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshComponentHelper_AddMeshComponentHelper_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMeshComponentHelper_AddMeshComponentHelper_Statics::MeshComponentHelper_eventAddMeshComponentHelper_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMeshComponentHelper_AddMeshComponentHelper()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMeshComponentHelper_AddMeshComponentHelper_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMeshComponentHelper_GetMeshBonePositions_Statics
	{
		struct MeshComponentHelper_eventGetMeshBonePositions_Parms
		{
			TArray<FVector> OutBonePositions;
			int32 AgentId;
			const UMeshComponent* MeshComponent;
			TArray<FName> BoneNames;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutBonePositions_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutBonePositions;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AgentId_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_AgentId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeshComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshComponent;
		static const UECodeGen_Private::FNamePropertyParams NewProp_BoneNames_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoneNames_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_BoneNames;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeshComponentHelper_GetMeshBonePositions_Statics::NewProp_OutBonePositions_Inner = { "OutBonePositions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMeshComponentHelper_GetMeshBonePositions_Statics::NewProp_OutBonePositions = { "OutBonePositions", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MeshComponentHelper_eventGetMeshBonePositions_Parms, OutBonePositions), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMeshComponentHelper_GetMeshBonePositions_Statics::NewProp_AgentId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMeshComponentHelper_GetMeshBonePositions_Statics::NewProp_AgentId = { "AgentId", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MeshComponentHelper_eventGetMeshBonePositions_Parms, AgentId), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshComponentHelper_GetMeshBonePositions_Statics::NewProp_AgentId_MetaData), Z_Construct_UFunction_UMeshComponentHelper_GetMeshBonePositions_Statics::NewProp_AgentId_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMeshComponentHelper_GetMeshBonePositions_Statics::NewProp_MeshComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMeshComponentHelper_GetMeshBonePositions_Statics::NewProp_MeshComponent = { "MeshComponent", nullptr, (EPropertyFlags)0x0010000000080082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MeshComponentHelper_eventGetMeshBonePositions_Parms, MeshComponent), Z_Construct_UClass_UMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshComponentHelper_GetMeshBonePositions_Statics::NewProp_MeshComponent_MetaData), Z_Construct_UFunction_UMeshComponentHelper_GetMeshBonePositions_Statics::NewProp_MeshComponent_MetaData) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMeshComponentHelper_GetMeshBonePositions_Statics::NewProp_BoneNames_Inner = { "BoneNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMeshComponentHelper_GetMeshBonePositions_Statics::NewProp_BoneNames_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMeshComponentHelper_GetMeshBonePositions_Statics::NewProp_BoneNames = { "BoneNames", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MeshComponentHelper_eventGetMeshBonePositions_Parms, BoneNames), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshComponentHelper_GetMeshBonePositions_Statics::NewProp_BoneNames_MetaData), Z_Construct_UFunction_UMeshComponentHelper_GetMeshBonePositions_Statics::NewProp_BoneNames_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMeshComponentHelper_GetMeshBonePositions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshComponentHelper_GetMeshBonePositions_Statics::NewProp_OutBonePositions_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshComponentHelper_GetMeshBonePositions_Statics::NewProp_OutBonePositions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshComponentHelper_GetMeshBonePositions_Statics::NewProp_AgentId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshComponentHelper_GetMeshBonePositions_Statics::NewProp_MeshComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshComponentHelper_GetMeshBonePositions_Statics::NewProp_BoneNames_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshComponentHelper_GetMeshBonePositions_Statics::NewProp_BoneNames,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMeshComponentHelper_GetMeshBonePositions_Statics::Function_MetaDataParams[] = {
		{ "AgentId", "-1" },
		{ "Category", "LearningAgents" },
		{ "Comment", "/**\n\x09 * Gets the bone positions for a set of bones of the mesh component in world space.\n\x09 * @param OutBonePositions The output array of bone positions.\n\x09 * @param AgentId The agent id to run the helper for.\n\x09 * @param MeshComponent The mesh component to use.\n\x09 * @param BoneNames The names of the bones to use.\n\x09 */" },
		{ "ModuleRelativePath", "Public/LearningAgentsHelpers.h" },
		{ "ToolTip", "Gets the bone positions for a set of bones of the mesh component in world space.\n@param OutBonePositions The output array of bone positions.\n@param AgentId The agent id to run the helper for.\n@param MeshComponent The mesh component to use.\n@param BoneNames The names of the bones to use." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeshComponentHelper_GetMeshBonePositions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshComponentHelper, nullptr, "GetMeshBonePositions", nullptr, nullptr, Z_Construct_UFunction_UMeshComponentHelper_GetMeshBonePositions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshComponentHelper_GetMeshBonePositions_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMeshComponentHelper_GetMeshBonePositions_Statics::MeshComponentHelper_eventGetMeshBonePositions_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshComponentHelper_GetMeshBonePositions_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMeshComponentHelper_GetMeshBonePositions_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshComponentHelper_GetMeshBonePositions_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMeshComponentHelper_GetMeshBonePositions_Statics::MeshComponentHelper_eventGetMeshBonePositions_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMeshComponentHelper_GetMeshBonePositions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMeshComponentHelper_GetMeshBonePositions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMeshComponentHelper);
	UClass* Z_Construct_UClass_UMeshComponentHelper_NoRegister()
	{
		return UMeshComponentHelper::StaticClass();
	}
	struct Z_Construct_UClass_UMeshComponentHelper_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMeshComponentHelper_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ULearningAgentsHelper,
		(UObject* (*)())Z_Construct_UPackage__Script_LearningAgents,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMeshComponentHelper_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UMeshComponentHelper_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMeshComponentHelper_AddMeshComponentHelper, "AddMeshComponentHelper" }, // 877871896
		{ &Z_Construct_UFunction_UMeshComponentHelper_GetMeshBonePositions, "GetMeshBonePositions" }, // 1080143280
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMeshComponentHelper_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshComponentHelper_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** A helper for getting various properties from a MeshComponent. */" },
		{ "IncludePath", "LearningAgentsHelpers.h" },
		{ "ModuleRelativePath", "Public/LearningAgentsHelpers.h" },
		{ "ToolTip", "A helper for getting various properties from a MeshComponent." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMeshComponentHelper_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMeshComponentHelper>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMeshComponentHelper_Statics::ClassParams = {
		&UMeshComponentHelper::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMeshComponentHelper_Statics::Class_MetaDataParams), Z_Construct_UClass_UMeshComponentHelper_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UMeshComponentHelper()
	{
		if (!Z_Registration_Info_UClass_UMeshComponentHelper.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMeshComponentHelper.OuterSingleton, Z_Construct_UClass_UMeshComponentHelper_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMeshComponentHelper.OuterSingleton;
	}
	template<> LEARNINGAGENTS_API UClass* StaticClass<UMeshComponentHelper>()
	{
		return UMeshComponentHelper::StaticClass();
	}
	UMeshComponentHelper::UMeshComponentHelper(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMeshComponentHelper);
	UMeshComponentHelper::~UMeshComponentHelper() {}
	DEFINE_FUNCTION(URayCastHelper::execRayCastRadial)
	{
		P_GET_TARRAY_REF(float,Z_Param_Out_OutDistances);
		P_GET_PROPERTY(FIntProperty,Z_Param_AgentId);
		P_GET_STRUCT(FVector,Z_Param_Position);
		P_GET_STRUCT(FRotator,Z_Param_Rotation);
		P_GET_PROPERTY(FIntProperty,Z_Param_RayNum);
		P_GET_PROPERTY(FFloatProperty,Z_Param_MinAngle);
		P_GET_PROPERTY(FFloatProperty,Z_Param_MaxAngle);
		P_GET_PROPERTY(FFloatProperty,Z_Param_MaxRayDist);
		P_GET_STRUCT(FVector,Z_Param_LocalForward);
		P_GET_PROPERTY(FByteProperty,Z_Param_CollisionChannel);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RayCastRadial(Z_Param_Out_OutDistances,Z_Param_AgentId,Z_Param_Position,Z_Param_Rotation,Z_Param_RayNum,Z_Param_MinAngle,Z_Param_MaxAngle,Z_Param_MaxRayDist,Z_Param_LocalForward,ECollisionChannel(Z_Param_CollisionChannel));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URayCastHelper::execRayCastGridHeights)
	{
		P_GET_TARRAY_REF(float,Z_Param_Out_OutHeights);
		P_GET_PROPERTY(FIntProperty,Z_Param_AgentId);
		P_GET_STRUCT(FVector,Z_Param_Position);
		P_GET_STRUCT(FRotator,Z_Param_Rotation);
		P_GET_PROPERTY(FIntProperty,Z_Param_RowNum);
		P_GET_PROPERTY(FIntProperty,Z_Param_ColNum);
		P_GET_PROPERTY(FFloatProperty,Z_Param_RowWidth);
		P_GET_PROPERTY(FFloatProperty,Z_Param_ColWidth);
		P_GET_PROPERTY(FFloatProperty,Z_Param_MaxHeight);
		P_GET_PROPERTY(FFloatProperty,Z_Param_MinHeight);
		P_GET_PROPERTY(FByteProperty,Z_Param_CollisionChannel);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RayCastGridHeights(Z_Param_Out_OutHeights,Z_Param_AgentId,Z_Param_Position,Z_Param_Rotation,Z_Param_RowNum,Z_Param_ColNum,Z_Param_RowWidth,Z_Param_ColWidth,Z_Param_MaxHeight,Z_Param_MinHeight,ECollisionChannel(Z_Param_CollisionChannel));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URayCastHelper::execAddRayCastHelper)
	{
		P_GET_OBJECT(ULearningAgentsManagerComponent,Z_Param_InManagerComponent);
		P_GET_PROPERTY(FNameProperty,Z_Param_Name);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(URayCastHelper**)Z_Param__Result=URayCastHelper::AddRayCastHelper(Z_Param_InManagerComponent,Z_Param_Name);
		P_NATIVE_END;
	}
	void URayCastHelper::StaticRegisterNativesURayCastHelper()
	{
		UClass* Class = URayCastHelper::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddRayCastHelper", &URayCastHelper::execAddRayCastHelper },
			{ "RayCastGridHeights", &URayCastHelper::execRayCastGridHeights },
			{ "RayCastRadial", &URayCastHelper::execRayCastRadial },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_URayCastHelper_AddRayCastHelper_Statics
	{
		struct RayCastHelper_eventAddRayCastHelper_Parms
		{
			ULearningAgentsManagerComponent* InManagerComponent;
			FName Name;
			URayCastHelper* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InManagerComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InManagerComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URayCastHelper_AddRayCastHelper_Statics::NewProp_InManagerComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URayCastHelper_AddRayCastHelper_Statics::NewProp_InManagerComponent = { "InManagerComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RayCastHelper_eventAddRayCastHelper_Parms, InManagerComponent), Z_Construct_UClass_ULearningAgentsManagerComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URayCastHelper_AddRayCastHelper_Statics::NewProp_InManagerComponent_MetaData), Z_Construct_UFunction_URayCastHelper_AddRayCastHelper_Statics::NewProp_InManagerComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URayCastHelper_AddRayCastHelper_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_URayCastHelper_AddRayCastHelper_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RayCastHelper_eventAddRayCastHelper_Parms, Name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URayCastHelper_AddRayCastHelper_Statics::NewProp_Name_MetaData), Z_Construct_UFunction_URayCastHelper_AddRayCastHelper_Statics::NewProp_Name_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URayCastHelper_AddRayCastHelper_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RayCastHelper_eventAddRayCastHelper_Parms, ReturnValue), Z_Construct_UClass_URayCastHelper_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URayCastHelper_AddRayCastHelper_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URayCastHelper_AddRayCastHelper_Statics::NewProp_InManagerComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URayCastHelper_AddRayCastHelper_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URayCastHelper_AddRayCastHelper_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URayCastHelper_AddRayCastHelper_Statics::Function_MetaDataParams[] = {
		{ "Category", "LearningAgents" },
		{ "Comment", "/**\n\x09 * Adds a new ray cast helper to the given manager component.\n\x09 * @param InManagerComponent The manager component to add this helper to (such as an Interactor or Trainer).\n\x09 * @param Name The name of this new helper. Used for debugging.\n\x09 * @return The newly created helper.\n\x09 */" },
		{ "CPP_Default_Name", "None" },
		{ "DefaultToSelf", "InManagerComponent" },
		{ "ModuleRelativePath", "Public/LearningAgentsHelpers.h" },
		{ "ToolTip", "Adds a new ray cast helper to the given manager component.\n@param InManagerComponent The manager component to add this helper to (such as an Interactor or Trainer).\n@param Name The name of this new helper. Used for debugging.\n@return The newly created helper." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URayCastHelper_AddRayCastHelper_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URayCastHelper, nullptr, "AddRayCastHelper", nullptr, nullptr, Z_Construct_UFunction_URayCastHelper_AddRayCastHelper_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URayCastHelper_AddRayCastHelper_Statics::PropPointers), sizeof(Z_Construct_UFunction_URayCastHelper_AddRayCastHelper_Statics::RayCastHelper_eventAddRayCastHelper_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URayCastHelper_AddRayCastHelper_Statics::Function_MetaDataParams), Z_Construct_UFunction_URayCastHelper_AddRayCastHelper_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URayCastHelper_AddRayCastHelper_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_URayCastHelper_AddRayCastHelper_Statics::RayCastHelper_eventAddRayCastHelper_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_URayCastHelper_AddRayCastHelper()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URayCastHelper_AddRayCastHelper_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URayCastHelper_RayCastGridHeights_Statics
	{
		struct RayCastHelper_eventRayCastGridHeights_Parms
		{
			TArray<float> OutHeights;
			int32 AgentId;
			FVector Position;
			FRotator Rotation;
			int32 RowNum;
			int32 ColNum;
			float RowWidth;
			float ColWidth;
			float MaxHeight;
			float MinHeight;
			TEnumAsByte<ECollisionChannel> CollisionChannel;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OutHeights_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutHeights;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AgentId_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_AgentId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Position;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Rotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RowNum_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_RowNum;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ColNum_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ColNum;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RowWidth_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RowWidth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ColWidth_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ColWidth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxHeight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxHeight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinHeight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinHeight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CollisionChannel_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_CollisionChannel;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URayCastHelper_RayCastGridHeights_Statics::NewProp_OutHeights_Inner = { "OutHeights", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URayCastHelper_RayCastGridHeights_Statics::NewProp_OutHeights = { "OutHeights", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RayCastHelper_eventRayCastGridHeights_Parms, OutHeights), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URayCastHelper_RayCastGridHeights_Statics::NewProp_AgentId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URayCastHelper_RayCastGridHeights_Statics::NewProp_AgentId = { "AgentId", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RayCastHelper_eventRayCastGridHeights_Parms, AgentId), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URayCastHelper_RayCastGridHeights_Statics::NewProp_AgentId_MetaData), Z_Construct_UFunction_URayCastHelper_RayCastGridHeights_Statics::NewProp_AgentId_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URayCastHelper_RayCastGridHeights_Statics::NewProp_Position_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URayCastHelper_RayCastGridHeights_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RayCastHelper_eventRayCastGridHeights_Parms, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URayCastHelper_RayCastGridHeights_Statics::NewProp_Position_MetaData), Z_Construct_UFunction_URayCastHelper_RayCastGridHeights_Statics::NewProp_Position_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URayCastHelper_RayCastGridHeights_Statics::NewProp_Rotation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URayCastHelper_RayCastGridHeights_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RayCastHelper_eventRayCastGridHeights_Parms, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URayCastHelper_RayCastGridHeights_Statics::NewProp_Rotation_MetaData), Z_Construct_UFunction_URayCastHelper_RayCastGridHeights_Statics::NewProp_Rotation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URayCastHelper_RayCastGridHeights_Statics::NewProp_RowNum_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URayCastHelper_RayCastGridHeights_Statics::NewProp_RowNum = { "RowNum", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RayCastHelper_eventRayCastGridHeights_Parms, RowNum), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URayCastHelper_RayCastGridHeights_Statics::NewProp_RowNum_MetaData), Z_Construct_UFunction_URayCastHelper_RayCastGridHeights_Statics::NewProp_RowNum_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URayCastHelper_RayCastGridHeights_Statics::NewProp_ColNum_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URayCastHelper_RayCastGridHeights_Statics::NewProp_ColNum = { "ColNum", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RayCastHelper_eventRayCastGridHeights_Parms, ColNum), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URayCastHelper_RayCastGridHeights_Statics::NewProp_ColNum_MetaData), Z_Construct_UFunction_URayCastHelper_RayCastGridHeights_Statics::NewProp_ColNum_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URayCastHelper_RayCastGridHeights_Statics::NewProp_RowWidth_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URayCastHelper_RayCastGridHeights_Statics::NewProp_RowWidth = { "RowWidth", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RayCastHelper_eventRayCastGridHeights_Parms, RowWidth), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URayCastHelper_RayCastGridHeights_Statics::NewProp_RowWidth_MetaData), Z_Construct_UFunction_URayCastHelper_RayCastGridHeights_Statics::NewProp_RowWidth_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URayCastHelper_RayCastGridHeights_Statics::NewProp_ColWidth_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URayCastHelper_RayCastGridHeights_Statics::NewProp_ColWidth = { "ColWidth", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RayCastHelper_eventRayCastGridHeights_Parms, ColWidth), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URayCastHelper_RayCastGridHeights_Statics::NewProp_ColWidth_MetaData), Z_Construct_UFunction_URayCastHelper_RayCastGridHeights_Statics::NewProp_ColWidth_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URayCastHelper_RayCastGridHeights_Statics::NewProp_MaxHeight_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URayCastHelper_RayCastGridHeights_Statics::NewProp_MaxHeight = { "MaxHeight", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RayCastHelper_eventRayCastGridHeights_Parms, MaxHeight), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URayCastHelper_RayCastGridHeights_Statics::NewProp_MaxHeight_MetaData), Z_Construct_UFunction_URayCastHelper_RayCastGridHeights_Statics::NewProp_MaxHeight_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URayCastHelper_RayCastGridHeights_Statics::NewProp_MinHeight_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URayCastHelper_RayCastGridHeights_Statics::NewProp_MinHeight = { "MinHeight", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RayCastHelper_eventRayCastGridHeights_Parms, MinHeight), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URayCastHelper_RayCastGridHeights_Statics::NewProp_MinHeight_MetaData), Z_Construct_UFunction_URayCastHelper_RayCastGridHeights_Statics::NewProp_MinHeight_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URayCastHelper_RayCastGridHeights_Statics::NewProp_CollisionChannel_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_URayCastHelper_RayCastGridHeights_Statics::NewProp_CollisionChannel = { "CollisionChannel", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RayCastHelper_eventRayCastGridHeights_Parms, CollisionChannel), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URayCastHelper_RayCastGridHeights_Statics::NewProp_CollisionChannel_MetaData), Z_Construct_UFunction_URayCastHelper_RayCastGridHeights_Statics::NewProp_CollisionChannel_MetaData) }; // 1822723181
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URayCastHelper_RayCastGridHeights_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URayCastHelper_RayCastGridHeights_Statics::NewProp_OutHeights_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URayCastHelper_RayCastGridHeights_Statics::NewProp_OutHeights,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URayCastHelper_RayCastGridHeights_Statics::NewProp_AgentId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URayCastHelper_RayCastGridHeights_Statics::NewProp_Position,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URayCastHelper_RayCastGridHeights_Statics::NewProp_Rotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URayCastHelper_RayCastGridHeights_Statics::NewProp_RowNum,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URayCastHelper_RayCastGridHeights_Statics::NewProp_ColNum,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URayCastHelper_RayCastGridHeights_Statics::NewProp_RowWidth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URayCastHelper_RayCastGridHeights_Statics::NewProp_ColWidth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URayCastHelper_RayCastGridHeights_Statics::NewProp_MaxHeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URayCastHelper_RayCastGridHeights_Statics::NewProp_MinHeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URayCastHelper_RayCastGridHeights_Statics::NewProp_CollisionChannel,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URayCastHelper_RayCastGridHeights_Statics::Function_MetaDataParams[] = {
		{ "AgentId", "-1" },
		{ "Category", "LearningAgents" },
		{ "Comment", "/**\n\x09 * Samples a grid of heights from above.\n\x09 * @param OutHeights The output array of heights for each ray in the grid.\n\x09 * @param AgentId The agent id to run the helper for.\n\x09 * @param Position The central position of the grid.\n\x09 * @param Rotation The orientation of the grid.\n\x09 * @param RowNum The number of rows in the grid.\n\x09 * @param ColNum The number of columns in the grid.\n\x09 * @param RowWidth The width of grid rows.\n\x09 * @param ColWidth The width of grid columns.\n\x09 * @param MaxHeight The height at which to start ray casts from.\n\x09 * @param MinHeight The height at which to send ray casts to.\n\x09 * @param CollisionChannel The collision channel to use for the ray-casts.\n\x09 */" },
		{ "CPP_Default_CollisionChannel", "ECC_WorldStatic" },
		{ "CPP_Default_ColNum", "5" },
		{ "CPP_Default_ColWidth", "1000.000000" },
		{ "CPP_Default_MaxHeight", "10000.000000" },
		{ "CPP_Default_MinHeight", "-10000.000000" },
		{ "CPP_Default_RowNum", "5" },
		{ "CPP_Default_RowWidth", "1000.000000" },
		{ "ModuleRelativePath", "Public/LearningAgentsHelpers.h" },
		{ "ToolTip", "Samples a grid of heights from above.\n@param OutHeights The output array of heights for each ray in the grid.\n@param AgentId The agent id to run the helper for.\n@param Position The central position of the grid.\n@param Rotation The orientation of the grid.\n@param RowNum The number of rows in the grid.\n@param ColNum The number of columns in the grid.\n@param RowWidth The width of grid rows.\n@param ColWidth The width of grid columns.\n@param MaxHeight The height at which to start ray casts from.\n@param MinHeight The height at which to send ray casts to.\n@param CollisionChannel The collision channel to use for the ray-casts." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URayCastHelper_RayCastGridHeights_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URayCastHelper, nullptr, "RayCastGridHeights", nullptr, nullptr, Z_Construct_UFunction_URayCastHelper_RayCastGridHeights_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URayCastHelper_RayCastGridHeights_Statics::PropPointers), sizeof(Z_Construct_UFunction_URayCastHelper_RayCastGridHeights_Statics::RayCastHelper_eventRayCastGridHeights_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URayCastHelper_RayCastGridHeights_Statics::Function_MetaDataParams), Z_Construct_UFunction_URayCastHelper_RayCastGridHeights_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URayCastHelper_RayCastGridHeights_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_URayCastHelper_RayCastGridHeights_Statics::RayCastHelper_eventRayCastGridHeights_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_URayCastHelper_RayCastGridHeights()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URayCastHelper_RayCastGridHeights_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URayCastHelper_RayCastRadial_Statics
	{
		struct RayCastHelper_eventRayCastRadial_Parms
		{
			TArray<float> OutDistances;
			int32 AgentId;
			FVector Position;
			FRotator Rotation;
			int32 RayNum;
			float MinAngle;
			float MaxAngle;
			float MaxRayDist;
			FVector LocalForward;
			TEnumAsByte<ECollisionChannel> CollisionChannel;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OutDistances_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutDistances;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AgentId_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_AgentId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Position;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Rotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RayNum_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_RayNum;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinAngle_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinAngle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxAngle_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxAngle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxRayDist_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxRayDist;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LocalForward_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LocalForward;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CollisionChannel_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_CollisionChannel;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URayCastHelper_RayCastRadial_Statics::NewProp_OutDistances_Inner = { "OutDistances", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URayCastHelper_RayCastRadial_Statics::NewProp_OutDistances = { "OutDistances", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RayCastHelper_eventRayCastRadial_Parms, OutDistances), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URayCastHelper_RayCastRadial_Statics::NewProp_AgentId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URayCastHelper_RayCastRadial_Statics::NewProp_AgentId = { "AgentId", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RayCastHelper_eventRayCastRadial_Parms, AgentId), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URayCastHelper_RayCastRadial_Statics::NewProp_AgentId_MetaData), Z_Construct_UFunction_URayCastHelper_RayCastRadial_Statics::NewProp_AgentId_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URayCastHelper_RayCastRadial_Statics::NewProp_Position_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URayCastHelper_RayCastRadial_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RayCastHelper_eventRayCastRadial_Parms, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URayCastHelper_RayCastRadial_Statics::NewProp_Position_MetaData), Z_Construct_UFunction_URayCastHelper_RayCastRadial_Statics::NewProp_Position_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URayCastHelper_RayCastRadial_Statics::NewProp_Rotation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URayCastHelper_RayCastRadial_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RayCastHelper_eventRayCastRadial_Parms, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URayCastHelper_RayCastRadial_Statics::NewProp_Rotation_MetaData), Z_Construct_UFunction_URayCastHelper_RayCastRadial_Statics::NewProp_Rotation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URayCastHelper_RayCastRadial_Statics::NewProp_RayNum_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URayCastHelper_RayCastRadial_Statics::NewProp_RayNum = { "RayNum", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RayCastHelper_eventRayCastRadial_Parms, RayNum), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URayCastHelper_RayCastRadial_Statics::NewProp_RayNum_MetaData), Z_Construct_UFunction_URayCastHelper_RayCastRadial_Statics::NewProp_RayNum_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URayCastHelper_RayCastRadial_Statics::NewProp_MinAngle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URayCastHelper_RayCastRadial_Statics::NewProp_MinAngle = { "MinAngle", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RayCastHelper_eventRayCastRadial_Parms, MinAngle), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URayCastHelper_RayCastRadial_Statics::NewProp_MinAngle_MetaData), Z_Construct_UFunction_URayCastHelper_RayCastRadial_Statics::NewProp_MinAngle_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URayCastHelper_RayCastRadial_Statics::NewProp_MaxAngle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URayCastHelper_RayCastRadial_Statics::NewProp_MaxAngle = { "MaxAngle", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RayCastHelper_eventRayCastRadial_Parms, MaxAngle), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URayCastHelper_RayCastRadial_Statics::NewProp_MaxAngle_MetaData), Z_Construct_UFunction_URayCastHelper_RayCastRadial_Statics::NewProp_MaxAngle_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URayCastHelper_RayCastRadial_Statics::NewProp_MaxRayDist_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URayCastHelper_RayCastRadial_Statics::NewProp_MaxRayDist = { "MaxRayDist", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RayCastHelper_eventRayCastRadial_Parms, MaxRayDist), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URayCastHelper_RayCastRadial_Statics::NewProp_MaxRayDist_MetaData), Z_Construct_UFunction_URayCastHelper_RayCastRadial_Statics::NewProp_MaxRayDist_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URayCastHelper_RayCastRadial_Statics::NewProp_LocalForward_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URayCastHelper_RayCastRadial_Statics::NewProp_LocalForward = { "LocalForward", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RayCastHelper_eventRayCastRadial_Parms, LocalForward), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URayCastHelper_RayCastRadial_Statics::NewProp_LocalForward_MetaData), Z_Construct_UFunction_URayCastHelper_RayCastRadial_Statics::NewProp_LocalForward_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URayCastHelper_RayCastRadial_Statics::NewProp_CollisionChannel_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_URayCastHelper_RayCastRadial_Statics::NewProp_CollisionChannel = { "CollisionChannel", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RayCastHelper_eventRayCastRadial_Parms, CollisionChannel), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URayCastHelper_RayCastRadial_Statics::NewProp_CollisionChannel_MetaData), Z_Construct_UFunction_URayCastHelper_RayCastRadial_Statics::NewProp_CollisionChannel_MetaData) }; // 1822723181
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URayCastHelper_RayCastRadial_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URayCastHelper_RayCastRadial_Statics::NewProp_OutDistances_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URayCastHelper_RayCastRadial_Statics::NewProp_OutDistances,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URayCastHelper_RayCastRadial_Statics::NewProp_AgentId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URayCastHelper_RayCastRadial_Statics::NewProp_Position,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URayCastHelper_RayCastRadial_Statics::NewProp_Rotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URayCastHelper_RayCastRadial_Statics::NewProp_RayNum,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URayCastHelper_RayCastRadial_Statics::NewProp_MinAngle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URayCastHelper_RayCastRadial_Statics::NewProp_MaxAngle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URayCastHelper_RayCastRadial_Statics::NewProp_MaxRayDist,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URayCastHelper_RayCastRadial_Statics::NewProp_LocalForward,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URayCastHelper_RayCastRadial_Statics::NewProp_CollisionChannel,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URayCastHelper_RayCastRadial_Statics::Function_MetaDataParams[] = {
		{ "AgentId", "-1" },
		{ "Category", "LearningAgents" },
		{ "Comment", "/**\n\x09 * Casts rays out in a radius from a given position.\n\x09 * @param OutDistances The output array of distances for each ray from the start position.\n\x09 * @param AgentId The agent id to run the helper for.\n\x09 * @param Position The central position of the ray cast.\n\x09 * @param Rotation The orientation of the ray cast.\n\x09 * @param RayNum The number of rays to cast.\n\x09 * @param MinAngle The minimum angle to spread the rays.\n\x09 * @param MaxAngle The maximum angle to spread the rays.\n\x09 * @param MaxRayDist The maximum distance at which to shoot rays.\n\x09 * @param CollisionChannel The collision channel to use for the ray-casts.\n\x09 */" },
		{ "CPP_Default_CollisionChannel", "ECC_WorldStatic" },
		{ "CPP_Default_LocalForward", "1.000000,0.000000,0.000000" },
		{ "CPP_Default_MaxAngle", "90.000000" },
		{ "CPP_Default_MaxRayDist", "500.000000" },
		{ "CPP_Default_MinAngle", "-90.000000" },
		{ "CPP_Default_RayNum", "7" },
		{ "ModuleRelativePath", "Public/LearningAgentsHelpers.h" },
		{ "ToolTip", "Casts rays out in a radius from a given position.\n@param OutDistances The output array of distances for each ray from the start position.\n@param AgentId The agent id to run the helper for.\n@param Position The central position of the ray cast.\n@param Rotation The orientation of the ray cast.\n@param RayNum The number of rays to cast.\n@param MinAngle The minimum angle to spread the rays.\n@param MaxAngle The maximum angle to spread the rays.\n@param MaxRayDist The maximum distance at which to shoot rays.\n@param CollisionChannel The collision channel to use for the ray-casts." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URayCastHelper_RayCastRadial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URayCastHelper, nullptr, "RayCastRadial", nullptr, nullptr, Z_Construct_UFunction_URayCastHelper_RayCastRadial_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URayCastHelper_RayCastRadial_Statics::PropPointers), sizeof(Z_Construct_UFunction_URayCastHelper_RayCastRadial_Statics::RayCastHelper_eventRayCastRadial_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URayCastHelper_RayCastRadial_Statics::Function_MetaDataParams), Z_Construct_UFunction_URayCastHelper_RayCastRadial_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URayCastHelper_RayCastRadial_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_URayCastHelper_RayCastRadial_Statics::RayCastHelper_eventRayCastRadial_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_URayCastHelper_RayCastRadial()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URayCastHelper_RayCastRadial_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URayCastHelper);
	UClass* Z_Construct_UClass_URayCastHelper_NoRegister()
	{
		return URayCastHelper::StaticClass();
	}
	struct Z_Construct_UClass_URayCastHelper_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URayCastHelper_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ULearningAgentsHelper,
		(UObject* (*)())Z_Construct_UPackage__Script_LearningAgents,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URayCastHelper_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_URayCastHelper_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_URayCastHelper_AddRayCastHelper, "AddRayCastHelper" }, // 4180662006
		{ &Z_Construct_UFunction_URayCastHelper_RayCastGridHeights, "RayCastGridHeights" }, // 2830349423
		{ &Z_Construct_UFunction_URayCastHelper_RayCastRadial, "RayCastRadial" }, // 3847479057
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URayCastHelper_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URayCastHelper_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** A helper for performing various kinds of ray cast. */" },
		{ "IncludePath", "LearningAgentsHelpers.h" },
		{ "ModuleRelativePath", "Public/LearningAgentsHelpers.h" },
		{ "ToolTip", "A helper for performing various kinds of ray cast." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_URayCastHelper_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URayCastHelper>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URayCastHelper_Statics::ClassParams = {
		&URayCastHelper::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URayCastHelper_Statics::Class_MetaDataParams), Z_Construct_UClass_URayCastHelper_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_URayCastHelper()
	{
		if (!Z_Registration_Info_UClass_URayCastHelper.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URayCastHelper.OuterSingleton, Z_Construct_UClass_URayCastHelper_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URayCastHelper.OuterSingleton;
	}
	template<> LEARNINGAGENTS_API UClass* StaticClass<URayCastHelper>()
	{
		return URayCastHelper::StaticClass();
	}
	URayCastHelper::URayCastHelper(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URayCastHelper);
	URayCastHelper::~URayCastHelper() {}
	DEFINE_FUNCTION(UCollisionMonitorHelper::execHandleOnHit)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComponent);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleOnHit(Z_Param_HitComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCollisionMonitorHelper::execResetCollisionOccurred)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_AgentId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetCollisionOccurred(Z_Param_AgentId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCollisionMonitorHelper::execGetAndResetCollisionOccurred)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_AgentId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetAndResetCollisionOccurred(Z_Param_AgentId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCollisionMonitorHelper::execGetCollisionOccurred)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_AgentId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetCollisionOccurred(Z_Param_AgentId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCollisionMonitorHelper::execSetComponent)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_AgentId);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_Component);
		P_GET_PROPERTY(FNameProperty,Z_Param_OtherComponentTag);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetComponent(Z_Param_AgentId,Z_Param_Component,Z_Param_OtherComponentTag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCollisionMonitorHelper::execAddCollisionMonitorHelper)
	{
		P_GET_OBJECT(ULearningAgentsManagerComponent,Z_Param_InManagerComponent);
		P_GET_PROPERTY(FNameProperty,Z_Param_Name);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UCollisionMonitorHelper**)Z_Param__Result=UCollisionMonitorHelper::AddCollisionMonitorHelper(Z_Param_InManagerComponent,Z_Param_Name);
		P_NATIVE_END;
	}
	void UCollisionMonitorHelper::StaticRegisterNativesUCollisionMonitorHelper()
	{
		UClass* Class = UCollisionMonitorHelper::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddCollisionMonitorHelper", &UCollisionMonitorHelper::execAddCollisionMonitorHelper },
			{ "GetAndResetCollisionOccurred", &UCollisionMonitorHelper::execGetAndResetCollisionOccurred },
			{ "GetCollisionOccurred", &UCollisionMonitorHelper::execGetCollisionOccurred },
			{ "HandleOnHit", &UCollisionMonitorHelper::execHandleOnHit },
			{ "ResetCollisionOccurred", &UCollisionMonitorHelper::execResetCollisionOccurred },
			{ "SetComponent", &UCollisionMonitorHelper::execSetComponent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCollisionMonitorHelper_AddCollisionMonitorHelper_Statics
	{
		struct CollisionMonitorHelper_eventAddCollisionMonitorHelper_Parms
		{
			ULearningAgentsManagerComponent* InManagerComponent;
			FName Name;
			UCollisionMonitorHelper* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InManagerComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InManagerComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCollisionMonitorHelper_AddCollisionMonitorHelper_Statics::NewProp_InManagerComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCollisionMonitorHelper_AddCollisionMonitorHelper_Statics::NewProp_InManagerComponent = { "InManagerComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CollisionMonitorHelper_eventAddCollisionMonitorHelper_Parms, InManagerComponent), Z_Construct_UClass_ULearningAgentsManagerComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCollisionMonitorHelper_AddCollisionMonitorHelper_Statics::NewProp_InManagerComponent_MetaData), Z_Construct_UFunction_UCollisionMonitorHelper_AddCollisionMonitorHelper_Statics::NewProp_InManagerComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCollisionMonitorHelper_AddCollisionMonitorHelper_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UCollisionMonitorHelper_AddCollisionMonitorHelper_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CollisionMonitorHelper_eventAddCollisionMonitorHelper_Parms, Name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCollisionMonitorHelper_AddCollisionMonitorHelper_Statics::NewProp_Name_MetaData), Z_Construct_UFunction_UCollisionMonitorHelper_AddCollisionMonitorHelper_Statics::NewProp_Name_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCollisionMonitorHelper_AddCollisionMonitorHelper_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CollisionMonitorHelper_eventAddCollisionMonitorHelper_Parms, ReturnValue), Z_Construct_UClass_UCollisionMonitorHelper_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCollisionMonitorHelper_AddCollisionMonitorHelper_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCollisionMonitorHelper_AddCollisionMonitorHelper_Statics::NewProp_InManagerComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCollisionMonitorHelper_AddCollisionMonitorHelper_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCollisionMonitorHelper_AddCollisionMonitorHelper_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCollisionMonitorHelper_AddCollisionMonitorHelper_Statics::Function_MetaDataParams[] = {
		{ "Category", "LearningAgents" },
		{ "Comment", "/**\n\x09 * Adds a new collision monitor helper to the given manager component.\n\x09 * @param InManagerComponent The manager component to add this helper to (such as an Interactor or Trainer).\n\x09 * @param Name The name of this new helper. Used for debugging.\n\x09 * @return The newly created helper.\n\x09 */" },
		{ "CPP_Default_Name", "None" },
		{ "DefaultToSelf", "InManagerComponent" },
		{ "ModuleRelativePath", "Public/LearningAgentsHelpers.h" },
		{ "ToolTip", "Adds a new collision monitor helper to the given manager component.\n@param InManagerComponent The manager component to add this helper to (such as an Interactor or Trainer).\n@param Name The name of this new helper. Used for debugging.\n@return The newly created helper." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCollisionMonitorHelper_AddCollisionMonitorHelper_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCollisionMonitorHelper, nullptr, "AddCollisionMonitorHelper", nullptr, nullptr, Z_Construct_UFunction_UCollisionMonitorHelper_AddCollisionMonitorHelper_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCollisionMonitorHelper_AddCollisionMonitorHelper_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCollisionMonitorHelper_AddCollisionMonitorHelper_Statics::CollisionMonitorHelper_eventAddCollisionMonitorHelper_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCollisionMonitorHelper_AddCollisionMonitorHelper_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCollisionMonitorHelper_AddCollisionMonitorHelper_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCollisionMonitorHelper_AddCollisionMonitorHelper_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UCollisionMonitorHelper_AddCollisionMonitorHelper_Statics::CollisionMonitorHelper_eventAddCollisionMonitorHelper_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCollisionMonitorHelper_AddCollisionMonitorHelper()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCollisionMonitorHelper_AddCollisionMonitorHelper_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCollisionMonitorHelper_GetAndResetCollisionOccurred_Statics
	{
		struct CollisionMonitorHelper_eventGetAndResetCollisionOccurred_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCollisionMonitorHelper_GetAndResetCollisionOccurred_Statics::NewProp_AgentId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCollisionMonitorHelper_GetAndResetCollisionOccurred_Statics::NewProp_AgentId = { "AgentId", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CollisionMonitorHelper_eventGetAndResetCollisionOccurred_Parms, AgentId), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCollisionMonitorHelper_GetAndResetCollisionOccurred_Statics::NewProp_AgentId_MetaData), Z_Construct_UFunction_UCollisionMonitorHelper_GetAndResetCollisionOccurred_Statics::NewProp_AgentId_MetaData) };
	void Z_Construct_UFunction_UCollisionMonitorHelper_GetAndResetCollisionOccurred_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CollisionMonitorHelper_eventGetAndResetCollisionOccurred_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCollisionMonitorHelper_GetAndResetCollisionOccurred_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CollisionMonitorHelper_eventGetAndResetCollisionOccurred_Parms), &Z_Construct_UFunction_UCollisionMonitorHelper_GetAndResetCollisionOccurred_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCollisionMonitorHelper_GetAndResetCollisionOccurred_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCollisionMonitorHelper_GetAndResetCollisionOccurred_Statics::NewProp_AgentId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCollisionMonitorHelper_GetAndResetCollisionOccurred_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCollisionMonitorHelper_GetAndResetCollisionOccurred_Statics::Function_MetaDataParams[] = {
		{ "AgentId", "-1" },
		{ "Category", "LearningAgents" },
		{ "Comment", "/**\n\x09 * Gets if a collision has occurred for this agent and resets the state of if a collision has occurred back to false.\n\x09 * @param AgentId The agent id to check for collisions for.\n\x09 */" },
		{ "ModuleRelativePath", "Public/LearningAgentsHelpers.h" },
		{ "ToolTip", "Gets if a collision has occurred for this agent and resets the state of if a collision has occurred back to false.\n@param AgentId The agent id to check for collisions for." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCollisionMonitorHelper_GetAndResetCollisionOccurred_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCollisionMonitorHelper, nullptr, "GetAndResetCollisionOccurred", nullptr, nullptr, Z_Construct_UFunction_UCollisionMonitorHelper_GetAndResetCollisionOccurred_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCollisionMonitorHelper_GetAndResetCollisionOccurred_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCollisionMonitorHelper_GetAndResetCollisionOccurred_Statics::CollisionMonitorHelper_eventGetAndResetCollisionOccurred_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCollisionMonitorHelper_GetAndResetCollisionOccurred_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCollisionMonitorHelper_GetAndResetCollisionOccurred_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCollisionMonitorHelper_GetAndResetCollisionOccurred_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UCollisionMonitorHelper_GetAndResetCollisionOccurred_Statics::CollisionMonitorHelper_eventGetAndResetCollisionOccurred_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCollisionMonitorHelper_GetAndResetCollisionOccurred()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCollisionMonitorHelper_GetAndResetCollisionOccurred_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCollisionMonitorHelper_GetCollisionOccurred_Statics
	{
		struct CollisionMonitorHelper_eventGetCollisionOccurred_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCollisionMonitorHelper_GetCollisionOccurred_Statics::NewProp_AgentId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCollisionMonitorHelper_GetCollisionOccurred_Statics::NewProp_AgentId = { "AgentId", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CollisionMonitorHelper_eventGetCollisionOccurred_Parms, AgentId), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCollisionMonitorHelper_GetCollisionOccurred_Statics::NewProp_AgentId_MetaData), Z_Construct_UFunction_UCollisionMonitorHelper_GetCollisionOccurred_Statics::NewProp_AgentId_MetaData) };
	void Z_Construct_UFunction_UCollisionMonitorHelper_GetCollisionOccurred_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CollisionMonitorHelper_eventGetCollisionOccurred_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCollisionMonitorHelper_GetCollisionOccurred_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CollisionMonitorHelper_eventGetCollisionOccurred_Parms), &Z_Construct_UFunction_UCollisionMonitorHelper_GetCollisionOccurred_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCollisionMonitorHelper_GetCollisionOccurred_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCollisionMonitorHelper_GetCollisionOccurred_Statics::NewProp_AgentId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCollisionMonitorHelper_GetCollisionOccurred_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCollisionMonitorHelper_GetCollisionOccurred_Statics::Function_MetaDataParams[] = {
		{ "AgentId", "-1" },
		{ "Category", "LearningAgents" },
		{ "Comment", "/**\n\x09 * Gets if a collision has occurred for this agent.\n\x09 * @param AgentId The agent id to check for collisions for.\n\x09 */" },
		{ "ModuleRelativePath", "Public/LearningAgentsHelpers.h" },
		{ "ToolTip", "Gets if a collision has occurred for this agent.\n@param AgentId The agent id to check for collisions for." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCollisionMonitorHelper_GetCollisionOccurred_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCollisionMonitorHelper, nullptr, "GetCollisionOccurred", nullptr, nullptr, Z_Construct_UFunction_UCollisionMonitorHelper_GetCollisionOccurred_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCollisionMonitorHelper_GetCollisionOccurred_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCollisionMonitorHelper_GetCollisionOccurred_Statics::CollisionMonitorHelper_eventGetCollisionOccurred_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCollisionMonitorHelper_GetCollisionOccurred_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCollisionMonitorHelper_GetCollisionOccurred_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCollisionMonitorHelper_GetCollisionOccurred_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UCollisionMonitorHelper_GetCollisionOccurred_Statics::CollisionMonitorHelper_eventGetCollisionOccurred_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCollisionMonitorHelper_GetCollisionOccurred()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCollisionMonitorHelper_GetCollisionOccurred_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCollisionMonitorHelper_HandleOnHit_Statics
	{
		struct CollisionMonitorHelper_eventHandleOnHit_Parms
		{
			UPrimitiveComponent* HitComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			FVector NormalImpulse;
			FHitResult Hit;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HitComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HitComponent;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_NormalImpulse;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Hit_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Hit;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCollisionMonitorHelper_HandleOnHit_Statics::NewProp_HitComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCollisionMonitorHelper_HandleOnHit_Statics::NewProp_HitComponent = { "HitComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CollisionMonitorHelper_eventHandleOnHit_Parms, HitComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCollisionMonitorHelper_HandleOnHit_Statics::NewProp_HitComponent_MetaData), Z_Construct_UFunction_UCollisionMonitorHelper_HandleOnHit_Statics::NewProp_HitComponent_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCollisionMonitorHelper_HandleOnHit_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CollisionMonitorHelper_eventHandleOnHit_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCollisionMonitorHelper_HandleOnHit_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCollisionMonitorHelper_HandleOnHit_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CollisionMonitorHelper_eventHandleOnHit_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCollisionMonitorHelper_HandleOnHit_Statics::NewProp_OtherComp_MetaData), Z_Construct_UFunction_UCollisionMonitorHelper_HandleOnHit_Statics::NewProp_OtherComp_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCollisionMonitorHelper_HandleOnHit_Statics::NewProp_NormalImpulse = { "NormalImpulse", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CollisionMonitorHelper_eventHandleOnHit_Parms, NormalImpulse), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCollisionMonitorHelper_HandleOnHit_Statics::NewProp_Hit_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCollisionMonitorHelper_HandleOnHit_Statics::NewProp_Hit = { "Hit", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CollisionMonitorHelper_eventHandleOnHit_Parms, Hit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCollisionMonitorHelper_HandleOnHit_Statics::NewProp_Hit_MetaData), Z_Construct_UFunction_UCollisionMonitorHelper_HandleOnHit_Statics::NewProp_Hit_MetaData) }; // 1891709922
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCollisionMonitorHelper_HandleOnHit_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCollisionMonitorHelper_HandleOnHit_Statics::NewProp_HitComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCollisionMonitorHelper_HandleOnHit_Statics::NewProp_OtherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCollisionMonitorHelper_HandleOnHit_Statics::NewProp_OtherComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCollisionMonitorHelper_HandleOnHit_Statics::NewProp_NormalImpulse,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCollisionMonitorHelper_HandleOnHit_Statics::NewProp_Hit,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCollisionMonitorHelper_HandleOnHit_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LearningAgentsHelpers.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCollisionMonitorHelper_HandleOnHit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCollisionMonitorHelper, nullptr, "HandleOnHit", nullptr, nullptr, Z_Construct_UFunction_UCollisionMonitorHelper_HandleOnHit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCollisionMonitorHelper_HandleOnHit_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCollisionMonitorHelper_HandleOnHit_Statics::CollisionMonitorHelper_eventHandleOnHit_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00C40401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCollisionMonitorHelper_HandleOnHit_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCollisionMonitorHelper_HandleOnHit_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCollisionMonitorHelper_HandleOnHit_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UCollisionMonitorHelper_HandleOnHit_Statics::CollisionMonitorHelper_eventHandleOnHit_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCollisionMonitorHelper_HandleOnHit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCollisionMonitorHelper_HandleOnHit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCollisionMonitorHelper_ResetCollisionOccurred_Statics
	{
		struct CollisionMonitorHelper_eventResetCollisionOccurred_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCollisionMonitorHelper_ResetCollisionOccurred_Statics::NewProp_AgentId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCollisionMonitorHelper_ResetCollisionOccurred_Statics::NewProp_AgentId = { "AgentId", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CollisionMonitorHelper_eventResetCollisionOccurred_Parms, AgentId), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCollisionMonitorHelper_ResetCollisionOccurred_Statics::NewProp_AgentId_MetaData), Z_Construct_UFunction_UCollisionMonitorHelper_ResetCollisionOccurred_Statics::NewProp_AgentId_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCollisionMonitorHelper_ResetCollisionOccurred_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCollisionMonitorHelper_ResetCollisionOccurred_Statics::NewProp_AgentId,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCollisionMonitorHelper_ResetCollisionOccurred_Statics::Function_MetaDataParams[] = {
		{ "AgentId", "-1" },
		{ "Category", "LearningAgents" },
		{ "Comment", "/**\n\x09 * Resets the state of if a collision has occurred back to false.\n\x09 * @param AgentId The agent id to reset the state for.\n\x09 */" },
		{ "ModuleRelativePath", "Public/LearningAgentsHelpers.h" },
		{ "ToolTip", "Resets the state of if a collision has occurred back to false.\n@param AgentId The agent id to reset the state for." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCollisionMonitorHelper_ResetCollisionOccurred_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCollisionMonitorHelper, nullptr, "ResetCollisionOccurred", nullptr, nullptr, Z_Construct_UFunction_UCollisionMonitorHelper_ResetCollisionOccurred_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCollisionMonitorHelper_ResetCollisionOccurred_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCollisionMonitorHelper_ResetCollisionOccurred_Statics::CollisionMonitorHelper_eventResetCollisionOccurred_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCollisionMonitorHelper_ResetCollisionOccurred_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCollisionMonitorHelper_ResetCollisionOccurred_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCollisionMonitorHelper_ResetCollisionOccurred_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UCollisionMonitorHelper_ResetCollisionOccurred_Statics::CollisionMonitorHelper_eventResetCollisionOccurred_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCollisionMonitorHelper_ResetCollisionOccurred()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCollisionMonitorHelper_ResetCollisionOccurred_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCollisionMonitorHelper_SetComponent_Statics
	{
		struct CollisionMonitorHelper_eventSetComponent_Parms
		{
			int32 AgentId;
			UPrimitiveComponent* Component;
			FName OtherComponentTag;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AgentId_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_AgentId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Component_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Component;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OtherComponentTag_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_OtherComponentTag;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCollisionMonitorHelper_SetComponent_Statics::NewProp_AgentId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCollisionMonitorHelper_SetComponent_Statics::NewProp_AgentId = { "AgentId", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CollisionMonitorHelper_eventSetComponent_Parms, AgentId), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCollisionMonitorHelper_SetComponent_Statics::NewProp_AgentId_MetaData), Z_Construct_UFunction_UCollisionMonitorHelper_SetComponent_Statics::NewProp_AgentId_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCollisionMonitorHelper_SetComponent_Statics::NewProp_Component_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCollisionMonitorHelper_SetComponent_Statics::NewProp_Component = { "Component", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CollisionMonitorHelper_eventSetComponent_Parms, Component), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCollisionMonitorHelper_SetComponent_Statics::NewProp_Component_MetaData), Z_Construct_UFunction_UCollisionMonitorHelper_SetComponent_Statics::NewProp_Component_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCollisionMonitorHelper_SetComponent_Statics::NewProp_OtherComponentTag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UCollisionMonitorHelper_SetComponent_Statics::NewProp_OtherComponentTag = { "OtherComponentTag", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CollisionMonitorHelper_eventSetComponent_Parms, OtherComponentTag), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCollisionMonitorHelper_SetComponent_Statics::NewProp_OtherComponentTag_MetaData), Z_Construct_UFunction_UCollisionMonitorHelper_SetComponent_Statics::NewProp_OtherComponentTag_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCollisionMonitorHelper_SetComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCollisionMonitorHelper_SetComponent_Statics::NewProp_AgentId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCollisionMonitorHelper_SetComponent_Statics::NewProp_Component,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCollisionMonitorHelper_SetComponent_Statics::NewProp_OtherComponentTag,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCollisionMonitorHelper_SetComponent_Statics::Function_MetaDataParams[] = {
		{ "AgentId", "-1" },
		{ "Category", "LearningAgents" },
		{ "Comment", "/**\n\x09 * Sets the component to monitor for collisions. Generally this should be called on the \n\x09 * `ULearningAgentsManagerComponent::AgentsAdded` event.\n\x09 * @param AgentId The agent id to associate this component with.\n\x09 * @param Component The component to monitor for collisions.\n\x09 * @param OtherComponentTag The tag other components must have to trigger collisions.\n\x09 */" },
		{ "CPP_Default_OtherComponentTag", "None" },
		{ "ModuleRelativePath", "Public/LearningAgentsHelpers.h" },
		{ "ToolTip", "Sets the component to monitor for collisions. Generally this should be called on the\n`ULearningAgentsManagerComponent::AgentsAdded` event.\n@param AgentId The agent id to associate this component with.\n@param Component The component to monitor for collisions.\n@param OtherComponentTag The tag other components must have to trigger collisions." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCollisionMonitorHelper_SetComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCollisionMonitorHelper, nullptr, "SetComponent", nullptr, nullptr, Z_Construct_UFunction_UCollisionMonitorHelper_SetComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCollisionMonitorHelper_SetComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCollisionMonitorHelper_SetComponent_Statics::CollisionMonitorHelper_eventSetComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCollisionMonitorHelper_SetComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCollisionMonitorHelper_SetComponent_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCollisionMonitorHelper_SetComponent_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UCollisionMonitorHelper_SetComponent_Statics::CollisionMonitorHelper_eventSetComponent_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCollisionMonitorHelper_SetComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCollisionMonitorHelper_SetComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCollisionMonitorHelper);
	UClass* Z_Construct_UClass_UCollisionMonitorHelper_NoRegister()
	{
		return UCollisionMonitorHelper::StaticClass();
	}
	struct Z_Construct_UClass_UCollisionMonitorHelper_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCollisionMonitorHelper_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ULearningAgentsHelper,
		(UObject* (*)())Z_Construct_UPackage__Script_LearningAgents,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCollisionMonitorHelper_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UCollisionMonitorHelper_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCollisionMonitorHelper_AddCollisionMonitorHelper, "AddCollisionMonitorHelper" }, // 2368348831
		{ &Z_Construct_UFunction_UCollisionMonitorHelper_GetAndResetCollisionOccurred, "GetAndResetCollisionOccurred" }, // 675683008
		{ &Z_Construct_UFunction_UCollisionMonitorHelper_GetCollisionOccurred, "GetCollisionOccurred" }, // 3614061071
		{ &Z_Construct_UFunction_UCollisionMonitorHelper_HandleOnHit, "HandleOnHit" }, // 2316289905
		{ &Z_Construct_UFunction_UCollisionMonitorHelper_ResetCollisionOccurred, "ResetCollisionOccurred" }, // 953242332
		{ &Z_Construct_UFunction_UCollisionMonitorHelper_SetComponent, "SetComponent" }, // 1144790872
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCollisionMonitorHelper_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCollisionMonitorHelper_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A helper for monitoring collisions between components.\n *\n * This object works by monitoring for collisions between a given component and any other components with a given tag.\n * To indicate which component to monitor for collisions `SetComponent` should be called (generally on the \n * `ULearningAgentsManagerComponent::AgentsAdded` event) with the corresponding agent id.\n * \n * If any collisions occur `GetCollisionOccurred` will report true until it is reset to false either by calling \n * `ResetCollisionOccurred` or `GetAndResetCollisionOccurred`. It will also be automatically reset when the agent is \n * reset.\n */" },
		{ "IncludePath", "LearningAgentsHelpers.h" },
		{ "ModuleRelativePath", "Public/LearningAgentsHelpers.h" },
		{ "ToolTip", "A helper for monitoring collisions between components.\n\nThis object works by monitoring for collisions between a given component and any other components with a given tag.\nTo indicate which component to monitor for collisions `SetComponent` should be called (generally on the\n`ULearningAgentsManagerComponent::AgentsAdded` event) with the corresponding agent id.\n\nIf any collisions occur `GetCollisionOccurred` will report true until it is reset to false either by calling\n`ResetCollisionOccurred` or `GetAndResetCollisionOccurred`. It will also be automatically reset when the agent is\nreset." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCollisionMonitorHelper_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCollisionMonitorHelper>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCollisionMonitorHelper_Statics::ClassParams = {
		&UCollisionMonitorHelper::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCollisionMonitorHelper_Statics::Class_MetaDataParams), Z_Construct_UClass_UCollisionMonitorHelper_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UCollisionMonitorHelper()
	{
		if (!Z_Registration_Info_UClass_UCollisionMonitorHelper.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCollisionMonitorHelper.OuterSingleton, Z_Construct_UClass_UCollisionMonitorHelper_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCollisionMonitorHelper.OuterSingleton;
	}
	template<> LEARNINGAGENTS_API UClass* StaticClass<UCollisionMonitorHelper>()
	{
		return UCollisionMonitorHelper::StaticClass();
	}
	UCollisionMonitorHelper::UCollisionMonitorHelper(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCollisionMonitorHelper);
	UCollisionMonitorHelper::~UCollisionMonitorHelper() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsHelpers_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsHelpers_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULearningAgentsHelper, ULearningAgentsHelper::StaticClass, TEXT("ULearningAgentsHelper"), &Z_Registration_Info_UClass_ULearningAgentsHelper, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULearningAgentsHelper), 399904962U) },
		{ Z_Construct_UClass_USplineComponentHelper, USplineComponentHelper::StaticClass, TEXT("USplineComponentHelper"), &Z_Registration_Info_UClass_USplineComponentHelper, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USplineComponentHelper), 3642224976U) },
		{ Z_Construct_UClass_UProjectionHelper, UProjectionHelper::StaticClass, TEXT("UProjectionHelper"), &Z_Registration_Info_UClass_UProjectionHelper, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UProjectionHelper), 1830746437U) },
		{ Z_Construct_UClass_UMeshComponentHelper, UMeshComponentHelper::StaticClass, TEXT("UMeshComponentHelper"), &Z_Registration_Info_UClass_UMeshComponentHelper, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMeshComponentHelper), 241307672U) },
		{ Z_Construct_UClass_URayCastHelper, URayCastHelper::StaticClass, TEXT("URayCastHelper"), &Z_Registration_Info_UClass_URayCastHelper, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URayCastHelper), 1717316325U) },
		{ Z_Construct_UClass_UCollisionMonitorHelper, UCollisionMonitorHelper::StaticClass, TEXT("UCollisionMonitorHelper"), &Z_Registration_Info_UClass_UCollisionMonitorHelper, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCollisionMonitorHelper), 3458421904U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsHelpers_h_180855900(TEXT("/Script/LearningAgents"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsHelpers_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsHelpers_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
