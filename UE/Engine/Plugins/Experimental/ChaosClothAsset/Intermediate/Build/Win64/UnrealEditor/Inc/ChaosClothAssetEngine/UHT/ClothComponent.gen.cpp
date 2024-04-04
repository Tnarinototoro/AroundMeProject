// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ChaosClothAsset/ClothComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeClothComponent() {}
// Cross Module References
	CHAOSCLOTHASSETENGINE_API UClass* Z_Construct_UClass_UChaosClothAsset_NoRegister();
	CHAOSCLOTHASSETENGINE_API UClass* Z_Construct_UClass_UChaosClothComponent();
	CHAOSCLOTHASSETENGINE_API UClass* Z_Construct_UClass_UChaosClothComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkinnedMeshComponent();
	UPackage* Z_Construct_UPackage__Script_ChaosClothAssetEngine();
// End Cross Module References
	DEFINE_FUNCTION(UChaosClothComponent::execRecreateClothSimulationProxy)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RecreateClothSimulationProxy();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UChaosClothComponent::execResetConfigProperties)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetConfigProperties();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UChaosClothComponent::execIsSimulationEnabled)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsSimulationEnabled();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UChaosClothComponent::execSetEnableSimulation)
	{
		P_GET_UBOOL(Z_Param_bEnable);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetEnableSimulation(Z_Param_bEnable);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UChaosClothComponent::execIsSimulationSuspended)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsSimulationSuspended();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UChaosClothComponent::execResumeSimulation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResumeSimulation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UChaosClothComponent::execSuspendSimulation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SuspendSimulation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UChaosClothComponent::execForceNextUpdateTeleportAndReset)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ForceNextUpdateTeleportAndReset();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UChaosClothComponent::execForceNextUpdateTeleport)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ForceNextUpdateTeleport();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UChaosClothComponent::execResetTeleportMode)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetTeleportMode();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UChaosClothComponent::execGetClothAsset)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UChaosClothAsset**)Z_Param__Result=P_THIS->GetClothAsset();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UChaosClothComponent::execSetClothAsset)
	{
		P_GET_OBJECT(UChaosClothAsset,Z_Param_InClothAsset);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetClothAsset(Z_Param_InClothAsset);
		P_NATIVE_END;
	}
	void UChaosClothComponent::GetClothAsset_WrapperImpl(const void* Object, void* OutValue)
	{
	#if WITH_EDITORONLY_DATA
		const UChaosClothComponent* Obj = (const UChaosClothComponent*)Object;
		UChaosClothAsset*& Result = *(UChaosClothAsset**)OutValue;
		Result = (UChaosClothAsset*)Obj->GetClothAsset();
	#endif // WITH_EDITORONLY_DATA
	}
	void UChaosClothComponent::SetClothAsset_WrapperImpl(void* Object, const void* InValue)
	{
	#if WITH_EDITORONLY_DATA
		UChaosClothComponent* Obj = (UChaosClothComponent*)Object;
		UChaosClothAsset*& Value = *(UChaosClothAsset**)InValue;
		Obj->SetClothAsset(Value);
	#endif // WITH_EDITORONLY_DATA
	}
	void UChaosClothComponent::StaticRegisterNativesUChaosClothComponent()
	{
		UClass* Class = UChaosClothComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ForceNextUpdateTeleport", &UChaosClothComponent::execForceNextUpdateTeleport },
			{ "ForceNextUpdateTeleportAndReset", &UChaosClothComponent::execForceNextUpdateTeleportAndReset },
			{ "GetClothAsset", &UChaosClothComponent::execGetClothAsset },
			{ "IsSimulationEnabled", &UChaosClothComponent::execIsSimulationEnabled },
			{ "IsSimulationSuspended", &UChaosClothComponent::execIsSimulationSuspended },
			{ "RecreateClothSimulationProxy", &UChaosClothComponent::execRecreateClothSimulationProxy },
			{ "ResetConfigProperties", &UChaosClothComponent::execResetConfigProperties },
			{ "ResetTeleportMode", &UChaosClothComponent::execResetTeleportMode },
			{ "ResumeSimulation", &UChaosClothComponent::execResumeSimulation },
			{ "SetClothAsset", &UChaosClothComponent::execSetClothAsset },
			{ "SetEnableSimulation", &UChaosClothComponent::execSetEnableSimulation },
			{ "SuspendSimulation", &UChaosClothComponent::execSuspendSimulation },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UChaosClothComponent_ForceNextUpdateTeleport_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UChaosClothComponent_ForceNextUpdateTeleport_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components||Teleport" },
		{ "Comment", "/** Teleport the cloth particles to the new reference bone location keeping pose and velocities prior to advancing the simulation. */" },
		{ "Keywords", "Chaos Cloth Teleport" },
		{ "ModuleRelativePath", "Public/ChaosClothAsset/ClothComponent.h" },
		{ "ToolTip", "Teleport the cloth particles to the new reference bone location keeping pose and velocities prior to advancing the simulation." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UChaosClothComponent_ForceNextUpdateTeleport_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UChaosClothComponent, nullptr, "ForceNextUpdateTeleport", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosClothComponent_ForceNextUpdateTeleport_Statics::Function_MetaDataParams), Z_Construct_UFunction_UChaosClothComponent_ForceNextUpdateTeleport_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UChaosClothComponent_ForceNextUpdateTeleport()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UChaosClothComponent_ForceNextUpdateTeleport_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UChaosClothComponent_ForceNextUpdateTeleportAndReset_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UChaosClothComponent_ForceNextUpdateTeleportAndReset_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|Simulation" },
		{ "Comment", "/** Teleport the cloth particles to the new reference bone location while reseting the pose and velocities prior to advancing the simulation. */" },
		{ "Keywords", "Chaos Cloth Teleport Reset" },
		{ "ModuleRelativePath", "Public/ChaosClothAsset/ClothComponent.h" },
		{ "ToolTip", "Teleport the cloth particles to the new reference bone location while reseting the pose and velocities prior to advancing the simulation." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UChaosClothComponent_ForceNextUpdateTeleportAndReset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UChaosClothComponent, nullptr, "ForceNextUpdateTeleportAndReset", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosClothComponent_ForceNextUpdateTeleportAndReset_Statics::Function_MetaDataParams), Z_Construct_UFunction_UChaosClothComponent_ForceNextUpdateTeleportAndReset_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UChaosClothComponent_ForceNextUpdateTeleportAndReset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UChaosClothComponent_ForceNextUpdateTeleportAndReset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UChaosClothComponent_GetClothAsset_Statics
	{
		struct ChaosClothComponent_eventGetClothAsset_Parms
		{
			UChaosClothAsset* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UChaosClothComponent_GetClothAsset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ChaosClothComponent_eventGetClothAsset_Parms, ReturnValue), Z_Construct_UClass_UChaosClothAsset_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UChaosClothComponent_GetClothAsset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosClothComponent_GetClothAsset_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UChaosClothComponent_GetClothAsset_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|ClothAsset" },
		{ "Comment", "/** Get the cloth asset used by this component. */" },
		{ "Keywords", "Chaos Cloth Asset" },
		{ "ModuleRelativePath", "Public/ChaosClothAsset/ClothComponent.h" },
		{ "ToolTip", "Get the cloth asset used by this component." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UChaosClothComponent_GetClothAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UChaosClothComponent, nullptr, "GetClothAsset", nullptr, nullptr, Z_Construct_UFunction_UChaosClothComponent_GetClothAsset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosClothComponent_GetClothAsset_Statics::PropPointers), sizeof(Z_Construct_UFunction_UChaosClothComponent_GetClothAsset_Statics::ChaosClothComponent_eventGetClothAsset_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosClothComponent_GetClothAsset_Statics::Function_MetaDataParams), Z_Construct_UFunction_UChaosClothComponent_GetClothAsset_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosClothComponent_GetClothAsset_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UChaosClothComponent_GetClothAsset_Statics::ChaosClothComponent_eventGetClothAsset_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UChaosClothComponent_GetClothAsset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UChaosClothComponent_GetClothAsset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UChaosClothComponent_IsSimulationEnabled_Statics
	{
		struct ChaosClothComponent_eventIsSimulationEnabled_Parms
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
	void Z_Construct_UFunction_UChaosClothComponent_IsSimulationEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ChaosClothComponent_eventIsSimulationEnabled_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UChaosClothComponent_IsSimulationEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ChaosClothComponent_eventIsSimulationEnabled_Parms), &Z_Construct_UFunction_UChaosClothComponent_IsSimulationEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UChaosClothComponent_IsSimulationEnabled_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosClothComponent_IsSimulationEnabled_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UChaosClothComponent_IsSimulationEnabled_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|Simulation" },
		{ "Comment", "/** Return whether or not the simulation is currently enabled. */" },
		{ "Keywords", "Chaos Cloth Simulation Enable" },
		{ "ModuleRelativePath", "Public/ChaosClothAsset/ClothComponent.h" },
		{ "ToolTip", "Return whether or not the simulation is currently enabled." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UChaosClothComponent_IsSimulationEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UChaosClothComponent, nullptr, "IsSimulationEnabled", nullptr, nullptr, Z_Construct_UFunction_UChaosClothComponent_IsSimulationEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosClothComponent_IsSimulationEnabled_Statics::PropPointers), sizeof(Z_Construct_UFunction_UChaosClothComponent_IsSimulationEnabled_Statics::ChaosClothComponent_eventIsSimulationEnabled_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosClothComponent_IsSimulationEnabled_Statics::Function_MetaDataParams), Z_Construct_UFunction_UChaosClothComponent_IsSimulationEnabled_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosClothComponent_IsSimulationEnabled_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UChaosClothComponent_IsSimulationEnabled_Statics::ChaosClothComponent_eventIsSimulationEnabled_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UChaosClothComponent_IsSimulationEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UChaosClothComponent_IsSimulationEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UChaosClothComponent_IsSimulationSuspended_Statics
	{
		struct ChaosClothComponent_eventIsSimulationSuspended_Parms
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
	void Z_Construct_UFunction_UChaosClothComponent_IsSimulationSuspended_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ChaosClothComponent_eventIsSimulationSuspended_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UChaosClothComponent_IsSimulationSuspended_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ChaosClothComponent_eventIsSimulationSuspended_Parms), &Z_Construct_UFunction_UChaosClothComponent_IsSimulationSuspended_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UChaosClothComponent_IsSimulationSuspended_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosClothComponent_IsSimulationSuspended_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UChaosClothComponent_IsSimulationSuspended_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|Simulation" },
		{ "Comment", "/** Return whether or not the simulation is currently suspended. */" },
		{ "Keywords", "Chaos Cloth Simulation Suspend" },
		{ "ModuleRelativePath", "Public/ChaosClothAsset/ClothComponent.h" },
		{ "ToolTip", "Return whether or not the simulation is currently suspended." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UChaosClothComponent_IsSimulationSuspended_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UChaosClothComponent, nullptr, "IsSimulationSuspended", nullptr, nullptr, Z_Construct_UFunction_UChaosClothComponent_IsSimulationSuspended_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosClothComponent_IsSimulationSuspended_Statics::PropPointers), sizeof(Z_Construct_UFunction_UChaosClothComponent_IsSimulationSuspended_Statics::ChaosClothComponent_eventIsSimulationSuspended_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosClothComponent_IsSimulationSuspended_Statics::Function_MetaDataParams), Z_Construct_UFunction_UChaosClothComponent_IsSimulationSuspended_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosClothComponent_IsSimulationSuspended_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UChaosClothComponent_IsSimulationSuspended_Statics::ChaosClothComponent_eventIsSimulationSuspended_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UChaosClothComponent_IsSimulationSuspended()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UChaosClothComponent_IsSimulationSuspended_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UChaosClothComponent_RecreateClothSimulationProxy_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UChaosClothComponent_RecreateClothSimulationProxy_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|Simulation" },
		{ "Comment", "/** Hard reset the cloth simulation by recreating the proxy. */" },
		{ "Keywords", "Chaos Cloth Recreate Simulation Proxy" },
		{ "ModuleRelativePath", "Public/ChaosClothAsset/ClothComponent.h" },
		{ "ToolTip", "Hard reset the cloth simulation by recreating the proxy." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UChaosClothComponent_RecreateClothSimulationProxy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UChaosClothComponent, nullptr, "RecreateClothSimulationProxy", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosClothComponent_RecreateClothSimulationProxy_Statics::Function_MetaDataParams), Z_Construct_UFunction_UChaosClothComponent_RecreateClothSimulationProxy_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UChaosClothComponent_RecreateClothSimulationProxy()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UChaosClothComponent_RecreateClothSimulationProxy_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UChaosClothComponent_ResetConfigProperties_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UChaosClothComponent_ResetConfigProperties_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|Simulation" },
		{ "Comment", "/** Reset all cloth simulation config properties to the values stored in the original cloth asset. */" },
		{ "Keywords", "Chaos Cloth Config Property" },
		{ "ModuleRelativePath", "Public/ChaosClothAsset/ClothComponent.h" },
		{ "ToolTip", "Reset all cloth simulation config properties to the values stored in the original cloth asset." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UChaosClothComponent_ResetConfigProperties_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UChaosClothComponent, nullptr, "ResetConfigProperties", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosClothComponent_ResetConfigProperties_Statics::Function_MetaDataParams), Z_Construct_UFunction_UChaosClothComponent_ResetConfigProperties_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UChaosClothComponent_ResetConfigProperties()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UChaosClothComponent_ResetConfigProperties_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UChaosClothComponent_ResetTeleportMode_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UChaosClothComponent_ResetTeleportMode_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|Teleport" },
		{ "Comment", "/** Reset the teleport mode. */" },
		{ "Keywords", "Chaos Cloth Teleport" },
		{ "ModuleRelativePath", "Public/ChaosClothAsset/ClothComponent.h" },
		{ "ToolTip", "Reset the teleport mode." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UChaosClothComponent_ResetTeleportMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UChaosClothComponent, nullptr, "ResetTeleportMode", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosClothComponent_ResetTeleportMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UChaosClothComponent_ResetTeleportMode_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UChaosClothComponent_ResetTeleportMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UChaosClothComponent_ResetTeleportMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UChaosClothComponent_ResumeSimulation_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UChaosClothComponent_ResumeSimulation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|Simulation" },
		{ "Comment", "/** Resume a previously suspended simulation. */" },
		{ "Keywords", "Chaos Cloth Simulation Resume" },
		{ "ModuleRelativePath", "Public/ChaosClothAsset/ClothComponent.h" },
		{ "ToolTip", "Resume a previously suspended simulation." },
		{ "UnsafeDuringActorConstruction", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UChaosClothComponent_ResumeSimulation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UChaosClothComponent, nullptr, "ResumeSimulation", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosClothComponent_ResumeSimulation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UChaosClothComponent_ResumeSimulation_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UChaosClothComponent_ResumeSimulation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UChaosClothComponent_ResumeSimulation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UChaosClothComponent_SetClothAsset_Statics
	{
		struct ChaosClothComponent_eventSetClothAsset_Parms
		{
			UChaosClothAsset* InClothAsset;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InClothAsset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UChaosClothComponent_SetClothAsset_Statics::NewProp_InClothAsset = { "InClothAsset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ChaosClothComponent_eventSetClothAsset_Parms, InClothAsset), Z_Construct_UClass_UChaosClothAsset_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UChaosClothComponent_SetClothAsset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosClothComponent_SetClothAsset_Statics::NewProp_InClothAsset,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UChaosClothComponent_SetClothAsset_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|ClothAsset" },
		{ "Comment", "/** Set the cloth asset used by this component. */" },
		{ "Keywords", "Chaos Cloth Asset" },
		{ "ModuleRelativePath", "Public/ChaosClothAsset/ClothComponent.h" },
		{ "ToolTip", "Set the cloth asset used by this component." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UChaosClothComponent_SetClothAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UChaosClothComponent, nullptr, "SetClothAsset", nullptr, nullptr, Z_Construct_UFunction_UChaosClothComponent_SetClothAsset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosClothComponent_SetClothAsset_Statics::PropPointers), sizeof(Z_Construct_UFunction_UChaosClothComponent_SetClothAsset_Statics::ChaosClothComponent_eventSetClothAsset_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosClothComponent_SetClothAsset_Statics::Function_MetaDataParams), Z_Construct_UFunction_UChaosClothComponent_SetClothAsset_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosClothComponent_SetClothAsset_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UChaosClothComponent_SetClothAsset_Statics::ChaosClothComponent_eventSetClothAsset_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UChaosClothComponent_SetClothAsset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UChaosClothComponent_SetClothAsset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UChaosClothComponent_SetEnableSimulation_Statics
	{
		struct ChaosClothComponent_eventSetEnableSimulation_Parms
		{
			bool bEnable;
		};
		static void NewProp_bEnable_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnable;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UChaosClothComponent_SetEnableSimulation_Statics::NewProp_bEnable_SetBit(void* Obj)
	{
		((ChaosClothComponent_eventSetEnableSimulation_Parms*)Obj)->bEnable = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UChaosClothComponent_SetEnableSimulation_Statics::NewProp_bEnable = { "bEnable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ChaosClothComponent_eventSetEnableSimulation_Parms), &Z_Construct_UFunction_UChaosClothComponent_SetEnableSimulation_Statics::NewProp_bEnable_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UChaosClothComponent_SetEnableSimulation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosClothComponent_SetEnableSimulation_Statics::NewProp_bEnable,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UChaosClothComponent_SetEnableSimulation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|Simulation" },
		{ "Comment", "/** Set whether or not to enable simulation. */" },
		{ "Keywords", "Chaos Cloth Simulation Enable" },
		{ "ModuleRelativePath", "Public/ChaosClothAsset/ClothComponent.h" },
		{ "ToolTip", "Set whether or not to enable simulation." },
		{ "UnsafeDuringActorConstruction", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UChaosClothComponent_SetEnableSimulation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UChaosClothComponent, nullptr, "SetEnableSimulation", nullptr, nullptr, Z_Construct_UFunction_UChaosClothComponent_SetEnableSimulation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosClothComponent_SetEnableSimulation_Statics::PropPointers), sizeof(Z_Construct_UFunction_UChaosClothComponent_SetEnableSimulation_Statics::ChaosClothComponent_eventSetEnableSimulation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosClothComponent_SetEnableSimulation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UChaosClothComponent_SetEnableSimulation_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosClothComponent_SetEnableSimulation_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UChaosClothComponent_SetEnableSimulation_Statics::ChaosClothComponent_eventSetEnableSimulation_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UChaosClothComponent_SetEnableSimulation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UChaosClothComponent_SetEnableSimulation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UChaosClothComponent_SuspendSimulation_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UChaosClothComponent_SuspendSimulation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|Simulation" },
		{ "Comment", "/** Stop the simulation, and keep the cloth in its last pose. */" },
		{ "Keywords", "Chaos Cloth Simulation Suspend" },
		{ "ModuleRelativePath", "Public/ChaosClothAsset/ClothComponent.h" },
		{ "ToolTip", "Stop the simulation, and keep the cloth in its last pose." },
		{ "UnsafeDuringActorConstruction", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UChaosClothComponent_SuspendSimulation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UChaosClothComponent, nullptr, "SuspendSimulation", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosClothComponent_SuspendSimulation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UChaosClothComponent_SuspendSimulation_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UChaosClothComponent_SuspendSimulation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UChaosClothComponent_SuspendSimulation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UChaosClothComponent);
	UClass* Z_Construct_UClass_UChaosClothComponent_NoRegister()
	{
		return UChaosClothComponent::StaticClass();
	}
	struct Z_Construct_UClass_UChaosClothComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClothAsset_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ClothAsset;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseAttachedParentAsPoseComponent_MetaData[];
#endif
		static void NewProp_bUseAttachedParentAsPoseComponent_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseAttachedParentAsPoseComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bWaitForParallelTask_MetaData[];
#endif
		static void NewProp_bWaitForParallelTask_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bWaitForParallelTask;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableSimulation_MetaData[];
#endif
		static void NewProp_bEnableSimulation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableSimulation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSuspendSimulation_MetaData[];
#endif
		static void NewProp_bSuspendSimulation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuspendSimulation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bBindToLeaderComponent_MetaData[];
#endif
		static void NewProp_bBindToLeaderComponent_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bBindToLeaderComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bTeleport_MetaData[];
#endif
		static void NewProp_bTeleport_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bTeleport;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bReset_MetaData[];
#endif
		static void NewProp_bReset_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bReset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlendWeight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BlendWeight;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UChaosClothComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USkinnedMeshComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_ChaosClothAssetEngine,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UChaosClothComponent_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UChaosClothComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UChaosClothComponent_ForceNextUpdateTeleport, "ForceNextUpdateTeleport" }, // 1143307148
		{ &Z_Construct_UFunction_UChaosClothComponent_ForceNextUpdateTeleportAndReset, "ForceNextUpdateTeleportAndReset" }, // 1793745509
		{ &Z_Construct_UFunction_UChaosClothComponent_GetClothAsset, "GetClothAsset" }, // 4154310841
		{ &Z_Construct_UFunction_UChaosClothComponent_IsSimulationEnabled, "IsSimulationEnabled" }, // 3450120021
		{ &Z_Construct_UFunction_UChaosClothComponent_IsSimulationSuspended, "IsSimulationSuspended" }, // 450186606
		{ &Z_Construct_UFunction_UChaosClothComponent_RecreateClothSimulationProxy, "RecreateClothSimulationProxy" }, // 3350293368
		{ &Z_Construct_UFunction_UChaosClothComponent_ResetConfigProperties, "ResetConfigProperties" }, // 1085804538
		{ &Z_Construct_UFunction_UChaosClothComponent_ResetTeleportMode, "ResetTeleportMode" }, // 1571863723
		{ &Z_Construct_UFunction_UChaosClothComponent_ResumeSimulation, "ResumeSimulation" }, // 2443342430
		{ &Z_Construct_UFunction_UChaosClothComponent_SetClothAsset, "SetClothAsset" }, // 622651396
		{ &Z_Construct_UFunction_UChaosClothComponent_SetEnableSimulation, "SetEnableSimulation" }, // 4194667974
		{ &Z_Construct_UFunction_UChaosClothComponent_SuspendSimulation, "SuspendSimulation" }, // 1356890932
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UChaosClothComponent_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosClothComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Physics" },
		{ "DisplayName", "Chaos cloth component" },
		{ "HideCategories", "Object Mesh|SkeletalAsset Constraints Advanced Cooking Collision Navigation Object Mobility Trigger" },
		{ "IncludePath", "ChaosClothAsset/ClothComponent.h" },
		{ "ModuleRelativePath", "Public/ChaosClothAsset/ClothComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Chaos cloth component." },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosClothComponent_Statics::NewProp_ClothAsset_MetaData[] = {
		{ "BlueprintGetter", "GetClothAsset" },
		{ "BlueprintSetter", "SetClothAsset" },
		{ "Category", "ClothAsset" },
		{ "ModuleRelativePath", "Public/ChaosClothAsset/ClothComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UChaosClothComponent_Statics::NewProp_ClothAsset = { "ClothAsset", nullptr, (EPropertyFlags)0x0044000800002005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, &UChaosClothComponent::SetClothAsset_WrapperImpl, &UChaosClothComponent::GetClothAsset_WrapperImpl, 1, STRUCT_OFFSET(UChaosClothComponent, ClothAsset), Z_Construct_UClass_UChaosClothAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UChaosClothComponent_Statics::NewProp_ClothAsset_MetaData), Z_Construct_UClass_UChaosClothComponent_Statics::NewProp_ClothAsset_MetaData) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosClothComponent_Statics::NewProp_bUseAttachedParentAsPoseComponent_MetaData[] = {
		{ "Category", "ClothComponent" },
		{ "Comment", "/** If enabled, and the parent is another Skinned Mesh Component (e.g. another Cloth Component, Poseable Mesh Component, Skeletal Mesh Component, ...etc.), use its pose. */" },
		{ "ModuleRelativePath", "Public/ChaosClothAsset/ClothComponent.h" },
		{ "ToolTip", "If enabled, and the parent is another Skinned Mesh Component (e.g. another Cloth Component, Poseable Mesh Component, Skeletal Mesh Component, ...etc.), use its pose." },
	};
#endif
	void Z_Construct_UClass_UChaosClothComponent_Statics::NewProp_bUseAttachedParentAsPoseComponent_SetBit(void* Obj)
	{
		((UChaosClothComponent*)Obj)->bUseAttachedParentAsPoseComponent = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UChaosClothComponent_Statics::NewProp_bUseAttachedParentAsPoseComponent = { "bUseAttachedParentAsPoseComponent", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UChaosClothComponent), &Z_Construct_UClass_UChaosClothComponent_Statics::NewProp_bUseAttachedParentAsPoseComponent_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UChaosClothComponent_Statics::NewProp_bUseAttachedParentAsPoseComponent_MetaData), Z_Construct_UClass_UChaosClothComponent_Statics::NewProp_bUseAttachedParentAsPoseComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosClothComponent_Statics::NewProp_bWaitForParallelTask_MetaData[] = {
		{ "Category", "ClothComponent" },
		{ "Comment", "/** Whether to wait for the cloth simulation to end in the TickComponent instead of in the EndOfFrameUpdates. */" },
		{ "ModuleRelativePath", "Public/ChaosClothAsset/ClothComponent.h" },
		{ "ToolTip", "Whether to wait for the cloth simulation to end in the TickComponent instead of in the EndOfFrameUpdates." },
	};
#endif
	void Z_Construct_UClass_UChaosClothComponent_Statics::NewProp_bWaitForParallelTask_SetBit(void* Obj)
	{
		((UChaosClothComponent*)Obj)->bWaitForParallelTask = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UChaosClothComponent_Statics::NewProp_bWaitForParallelTask = { "bWaitForParallelTask", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UChaosClothComponent), &Z_Construct_UClass_UChaosClothComponent_Statics::NewProp_bWaitForParallelTask_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UChaosClothComponent_Statics::NewProp_bWaitForParallelTask_MetaData), Z_Construct_UClass_UChaosClothComponent_Statics::NewProp_bWaitForParallelTask_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosClothComponent_Statics::NewProp_bEnableSimulation_MetaData[] = {
		{ "Comment", "/** Whether to enable the simulation or use the skinned pose instead. */" },
		{ "ModuleRelativePath", "Public/ChaosClothAsset/ClothComponent.h" },
		{ "ToolTip", "Whether to enable the simulation or use the skinned pose instead." },
	};
#endif
	void Z_Construct_UClass_UChaosClothComponent_Statics::NewProp_bEnableSimulation_SetBit(void* Obj)
	{
		((UChaosClothComponent*)Obj)->bEnableSimulation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UChaosClothComponent_Statics::NewProp_bEnableSimulation = { "bEnableSimulation", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UChaosClothComponent), &Z_Construct_UClass_UChaosClothComponent_Statics::NewProp_bEnableSimulation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UChaosClothComponent_Statics::NewProp_bEnableSimulation_MetaData), Z_Construct_UClass_UChaosClothComponent_Statics::NewProp_bEnableSimulation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosClothComponent_Statics::NewProp_bSuspendSimulation_MetaData[] = {
		{ "Comment", "/** Whether to suspend the simulation and use the last simulated pose. */" },
		{ "ModuleRelativePath", "Public/ChaosClothAsset/ClothComponent.h" },
		{ "ToolTip", "Whether to suspend the simulation and use the last simulated pose." },
	};
#endif
	void Z_Construct_UClass_UChaosClothComponent_Statics::NewProp_bSuspendSimulation_SetBit(void* Obj)
	{
		((UChaosClothComponent*)Obj)->bSuspendSimulation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UChaosClothComponent_Statics::NewProp_bSuspendSimulation = { "bSuspendSimulation", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UChaosClothComponent), &Z_Construct_UClass_UChaosClothComponent_Statics::NewProp_bSuspendSimulation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UChaosClothComponent_Statics::NewProp_bSuspendSimulation_MetaData), Z_Construct_UClass_UChaosClothComponent_Statics::NewProp_bSuspendSimulation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosClothComponent_Statics::NewProp_bBindToLeaderComponent_MetaData[] = {
		{ "Comment", "/** Whether to use the leader component pose. */" },
		{ "ModuleRelativePath", "Public/ChaosClothAsset/ClothComponent.h" },
		{ "ToolTip", "Whether to use the leader component pose." },
	};
#endif
	void Z_Construct_UClass_UChaosClothComponent_Statics::NewProp_bBindToLeaderComponent_SetBit(void* Obj)
	{
		((UChaosClothComponent*)Obj)->bBindToLeaderComponent = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UChaosClothComponent_Statics::NewProp_bBindToLeaderComponent = { "bBindToLeaderComponent", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UChaosClothComponent), &Z_Construct_UClass_UChaosClothComponent_Statics::NewProp_bBindToLeaderComponent_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UChaosClothComponent_Statics::NewProp_bBindToLeaderComponent_MetaData), Z_Construct_UClass_UChaosClothComponent_Statics::NewProp_bBindToLeaderComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosClothComponent_Statics::NewProp_bTeleport_MetaData[] = {
		{ "Comment", "/** Whether to teleport the cloth prior to advancing the simulation. */" },
		{ "ModuleRelativePath", "Public/ChaosClothAsset/ClothComponent.h" },
		{ "ToolTip", "Whether to teleport the cloth prior to advancing the simulation." },
	};
#endif
	void Z_Construct_UClass_UChaosClothComponent_Statics::NewProp_bTeleport_SetBit(void* Obj)
	{
		((UChaosClothComponent*)Obj)->bTeleport = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UChaosClothComponent_Statics::NewProp_bTeleport = { "bTeleport", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UChaosClothComponent), &Z_Construct_UClass_UChaosClothComponent_Statics::NewProp_bTeleport_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UChaosClothComponent_Statics::NewProp_bTeleport_MetaData), Z_Construct_UClass_UChaosClothComponent_Statics::NewProp_bTeleport_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosClothComponent_Statics::NewProp_bReset_MetaData[] = {
		{ "Comment", "/** Whether to reset the pose, bTeleport must be true. */" },
		{ "ModuleRelativePath", "Public/ChaosClothAsset/ClothComponent.h" },
		{ "ToolTip", "Whether to reset the pose, bTeleport must be true." },
	};
#endif
	void Z_Construct_UClass_UChaosClothComponent_Statics::NewProp_bReset_SetBit(void* Obj)
	{
		((UChaosClothComponent*)Obj)->bReset = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UChaosClothComponent_Statics::NewProp_bReset = { "bReset", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UChaosClothComponent), &Z_Construct_UClass_UChaosClothComponent_Statics::NewProp_bReset_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UChaosClothComponent_Statics::NewProp_bReset_MetaData), Z_Construct_UClass_UChaosClothComponent_Statics::NewProp_bReset_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosClothComponent_Statics::NewProp_BlendWeight_MetaData[] = {
		{ "Comment", "/** Blend amount between the skinned (=0) and the simulated pose (=1). */" },
		{ "ModuleRelativePath", "Public/ChaosClothAsset/ClothComponent.h" },
		{ "ToolTip", "Blend amount between the skinned (=0) and the simulated pose (=1)." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UChaosClothComponent_Statics::NewProp_BlendWeight = { "BlendWeight", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UChaosClothComponent, BlendWeight), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UChaosClothComponent_Statics::NewProp_BlendWeight_MetaData), Z_Construct_UClass_UChaosClothComponent_Statics::NewProp_BlendWeight_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UChaosClothComponent_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosClothComponent_Statics::NewProp_ClothAsset,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosClothComponent_Statics::NewProp_bUseAttachedParentAsPoseComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosClothComponent_Statics::NewProp_bWaitForParallelTask,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosClothComponent_Statics::NewProp_bEnableSimulation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosClothComponent_Statics::NewProp_bSuspendSimulation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosClothComponent_Statics::NewProp_bBindToLeaderComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosClothComponent_Statics::NewProp_bTeleport,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosClothComponent_Statics::NewProp_bReset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosClothComponent_Statics::NewProp_BlendWeight,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UChaosClothComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UChaosClothComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UChaosClothComponent_Statics::ClassParams = {
		&UChaosClothComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UChaosClothComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UChaosClothComponent_Statics::PropPointers),
		0,
		0x00B010A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UChaosClothComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UChaosClothComponent_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UChaosClothComponent_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UChaosClothComponent()
	{
		if (!Z_Registration_Info_UClass_UChaosClothComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UChaosClothComponent.OuterSingleton, Z_Construct_UClass_UChaosClothComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UChaosClothComponent.OuterSingleton;
	}
	template<> CHAOSCLOTHASSETENGINE_API UClass* StaticClass<UChaosClothComponent>()
	{
		return UChaosClothComponent::StaticClass();
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosClothAsset_Source_ChaosClothAssetEngine_Public_ChaosClothAsset_ClothComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosClothAsset_Source_ChaosClothAssetEngine_Public_ChaosClothAsset_ClothComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UChaosClothComponent, UChaosClothComponent::StaticClass, TEXT("UChaosClothComponent"), &Z_Registration_Info_UClass_UChaosClothComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UChaosClothComponent), 2832401233U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosClothAsset_Source_ChaosClothAssetEngine_Public_ChaosClothAsset_ClothComponent_h_2722424042(TEXT("/Script/ChaosClothAssetEngine"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosClothAsset_Source_ChaosClothAssetEngine_Public_ChaosClothAsset_ClothComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosClothAsset_Source_ChaosClothAssetEngine_Public_ChaosClothAsset_ClothComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
