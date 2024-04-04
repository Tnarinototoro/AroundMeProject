// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "XRCreativeVREditorMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeXRCreativeVREditorMode() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	UPackage* Z_Construct_UPackage__Script_XRCreativeEditor();
	VREDITOR_API UClass* Z_Construct_UClass_UVREditorModeBase();
	XRCREATIVE_API UClass* Z_Construct_UClass_AXRCreativeAvatar_NoRegister();
	XRCREATIVE_API UClass* Z_Construct_UClass_UXRCreativeToolset_NoRegister();
	XRCREATIVEEDITOR_API UClass* Z_Construct_UClass_UXRCreativeVREditorMode();
	XRCREATIVEEDITOR_API UClass* Z_Construct_UClass_UXRCreativeVREditorMode_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UXRCreativeVREditorMode::execSetHeadTransform)
	{
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_HeadToWorld);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetHeadTransform(Z_Param_Out_HeadToWorld);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXRCreativeVREditorMode::execSetRoomTransform)
	{
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_RoomToWorld);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetRoomTransform(Z_Param_Out_RoomToWorld);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXRCreativeVREditorMode::execGetHeadTransform)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTransform*)Z_Param__Result=P_THIS->GetHeadTransform();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXRCreativeVREditorMode::execGetRoomTransform)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTransform*)Z_Param__Result=P_THIS->GetRoomTransform();
		P_NATIVE_END;
	}
	struct XRCreativeVREditorMode_eventBP_Tick_Parms
	{
		float DeltaSeconds;
	};
	static FName NAME_UXRCreativeVREditorMode_BP_OnEnter = FName(TEXT("BP_OnEnter"));
	void UXRCreativeVREditorMode::BP_OnEnter()
	{
		ProcessEvent(FindFunctionChecked(NAME_UXRCreativeVREditorMode_BP_OnEnter),NULL);
	}
	static FName NAME_UXRCreativeVREditorMode_BP_OnExit = FName(TEXT("BP_OnExit"));
	void UXRCreativeVREditorMode::BP_OnExit()
	{
		ProcessEvent(FindFunctionChecked(NAME_UXRCreativeVREditorMode_BP_OnExit),NULL);
	}
	static FName NAME_UXRCreativeVREditorMode_BP_Tick = FName(TEXT("BP_Tick"));
	void UXRCreativeVREditorMode::BP_Tick(float DeltaSeconds)
	{
		XRCreativeVREditorMode_eventBP_Tick_Parms Parms;
		Parms.DeltaSeconds=DeltaSeconds;
		ProcessEvent(FindFunctionChecked(NAME_UXRCreativeVREditorMode_BP_Tick),&Parms);
	}
	void UXRCreativeVREditorMode::StaticRegisterNativesUXRCreativeVREditorMode()
	{
		UClass* Class = UXRCreativeVREditorMode::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetHeadTransform", &UXRCreativeVREditorMode::execGetHeadTransform },
			{ "GetRoomTransform", &UXRCreativeVREditorMode::execGetRoomTransform },
			{ "SetHeadTransform", &UXRCreativeVREditorMode::execSetHeadTransform },
			{ "SetRoomTransform", &UXRCreativeVREditorMode::execSetRoomTransform },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UXRCreativeVREditorMode_BP_OnEnter_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXRCreativeVREditorMode_BP_OnEnter_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//~ End UEditorWorldExtension interface\n" },
		{ "DisplayName", "On Enter" },
		{ "ModuleRelativePath", "Private/XRCreativeVREditorMode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UXRCreativeVREditorMode_BP_OnEnter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXRCreativeVREditorMode, nullptr, "BP_OnEnter", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UXRCreativeVREditorMode_BP_OnEnter_Statics::Function_MetaDataParams), Z_Construct_UFunction_UXRCreativeVREditorMode_BP_OnEnter_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UXRCreativeVREditorMode_BP_OnEnter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UXRCreativeVREditorMode_BP_OnEnter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXRCreativeVREditorMode_BP_OnExit_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXRCreativeVREditorMode_BP_OnExit_Statics::Function_MetaDataParams[] = {
		{ "DisplayName", "On Exit" },
		{ "ModuleRelativePath", "Private/XRCreativeVREditorMode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UXRCreativeVREditorMode_BP_OnExit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXRCreativeVREditorMode, nullptr, "BP_OnExit", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UXRCreativeVREditorMode_BP_OnExit_Statics::Function_MetaDataParams), Z_Construct_UFunction_UXRCreativeVREditorMode_BP_OnExit_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UXRCreativeVREditorMode_BP_OnExit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UXRCreativeVREditorMode_BP_OnExit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXRCreativeVREditorMode_BP_Tick_Statics
	{
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaSeconds;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UXRCreativeVREditorMode_BP_Tick_Statics::NewProp_DeltaSeconds = { "DeltaSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(XRCreativeVREditorMode_eventBP_Tick_Parms, DeltaSeconds), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXRCreativeVREditorMode_BP_Tick_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXRCreativeVREditorMode_BP_Tick_Statics::NewProp_DeltaSeconds,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXRCreativeVREditorMode_BP_Tick_Statics::Function_MetaDataParams[] = {
		{ "DisplayName", "Tick" },
		{ "ModuleRelativePath", "Private/XRCreativeVREditorMode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UXRCreativeVREditorMode_BP_Tick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXRCreativeVREditorMode, nullptr, "BP_Tick", nullptr, nullptr, Z_Construct_UFunction_UXRCreativeVREditorMode_BP_Tick_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXRCreativeVREditorMode_BP_Tick_Statics::PropPointers), sizeof(XRCreativeVREditorMode_eventBP_Tick_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UXRCreativeVREditorMode_BP_Tick_Statics::Function_MetaDataParams), Z_Construct_UFunction_UXRCreativeVREditorMode_BP_Tick_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UXRCreativeVREditorMode_BP_Tick_Statics::PropPointers) < 2048);
	static_assert(sizeof(XRCreativeVREditorMode_eventBP_Tick_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UXRCreativeVREditorMode_BP_Tick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UXRCreativeVREditorMode_BP_Tick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXRCreativeVREditorMode_GetHeadTransform_Statics
	{
		struct XRCreativeVREditorMode_eventGetHeadTransform_Parms
		{
			FTransform ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UXRCreativeVREditorMode_GetHeadTransform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(XRCreativeVREditorMode_eventGetHeadTransform_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXRCreativeVREditorMode_GetHeadTransform_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXRCreativeVREditorMode_GetHeadTransform_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXRCreativeVREditorMode_GetHeadTransform_Statics::Function_MetaDataParams[] = {
		{ "Category", "XR Creative" },
		{ "ModuleRelativePath", "Private/XRCreativeVREditorMode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UXRCreativeVREditorMode_GetHeadTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXRCreativeVREditorMode, nullptr, "GetHeadTransform", nullptr, nullptr, Z_Construct_UFunction_UXRCreativeVREditorMode_GetHeadTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXRCreativeVREditorMode_GetHeadTransform_Statics::PropPointers), sizeof(Z_Construct_UFunction_UXRCreativeVREditorMode_GetHeadTransform_Statics::XRCreativeVREditorMode_eventGetHeadTransform_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UXRCreativeVREditorMode_GetHeadTransform_Statics::Function_MetaDataParams), Z_Construct_UFunction_UXRCreativeVREditorMode_GetHeadTransform_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UXRCreativeVREditorMode_GetHeadTransform_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UXRCreativeVREditorMode_GetHeadTransform_Statics::XRCreativeVREditorMode_eventGetHeadTransform_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UXRCreativeVREditorMode_GetHeadTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UXRCreativeVREditorMode_GetHeadTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXRCreativeVREditorMode_GetRoomTransform_Statics
	{
		struct XRCreativeVREditorMode_eventGetRoomTransform_Parms
		{
			FTransform ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UXRCreativeVREditorMode_GetRoomTransform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(XRCreativeVREditorMode_eventGetRoomTransform_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXRCreativeVREditorMode_GetRoomTransform_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXRCreativeVREditorMode_GetRoomTransform_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXRCreativeVREditorMode_GetRoomTransform_Statics::Function_MetaDataParams[] = {
		{ "Category", "XR Creative" },
		{ "ModuleRelativePath", "Private/XRCreativeVREditorMode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UXRCreativeVREditorMode_GetRoomTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXRCreativeVREditorMode, nullptr, "GetRoomTransform", nullptr, nullptr, Z_Construct_UFunction_UXRCreativeVREditorMode_GetRoomTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXRCreativeVREditorMode_GetRoomTransform_Statics::PropPointers), sizeof(Z_Construct_UFunction_UXRCreativeVREditorMode_GetRoomTransform_Statics::XRCreativeVREditorMode_eventGetRoomTransform_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UXRCreativeVREditorMode_GetRoomTransform_Statics::Function_MetaDataParams), Z_Construct_UFunction_UXRCreativeVREditorMode_GetRoomTransform_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UXRCreativeVREditorMode_GetRoomTransform_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UXRCreativeVREditorMode_GetRoomTransform_Statics::XRCreativeVREditorMode_eventGetRoomTransform_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UXRCreativeVREditorMode_GetRoomTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UXRCreativeVREditorMode_GetRoomTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXRCreativeVREditorMode_SetHeadTransform_Statics
	{
		struct XRCreativeVREditorMode_eventSetHeadTransform_Parms
		{
			FTransform HeadToWorld;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HeadToWorld_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_HeadToWorld;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXRCreativeVREditorMode_SetHeadTransform_Statics::NewProp_HeadToWorld_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UXRCreativeVREditorMode_SetHeadTransform_Statics::NewProp_HeadToWorld = { "HeadToWorld", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(XRCreativeVREditorMode_eventSetHeadTransform_Parms, HeadToWorld), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UXRCreativeVREditorMode_SetHeadTransform_Statics::NewProp_HeadToWorld_MetaData), Z_Construct_UFunction_UXRCreativeVREditorMode_SetHeadTransform_Statics::NewProp_HeadToWorld_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXRCreativeVREditorMode_SetHeadTransform_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXRCreativeVREditorMode_SetHeadTransform_Statics::NewProp_HeadToWorld,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXRCreativeVREditorMode_SetHeadTransform_Statics::Function_MetaDataParams[] = {
		{ "Category", "XR Creative" },
		{ "ModuleRelativePath", "Private/XRCreativeVREditorMode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UXRCreativeVREditorMode_SetHeadTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXRCreativeVREditorMode, nullptr, "SetHeadTransform", nullptr, nullptr, Z_Construct_UFunction_UXRCreativeVREditorMode_SetHeadTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXRCreativeVREditorMode_SetHeadTransform_Statics::PropPointers), sizeof(Z_Construct_UFunction_UXRCreativeVREditorMode_SetHeadTransform_Statics::XRCreativeVREditorMode_eventSetHeadTransform_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UXRCreativeVREditorMode_SetHeadTransform_Statics::Function_MetaDataParams), Z_Construct_UFunction_UXRCreativeVREditorMode_SetHeadTransform_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UXRCreativeVREditorMode_SetHeadTransform_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UXRCreativeVREditorMode_SetHeadTransform_Statics::XRCreativeVREditorMode_eventSetHeadTransform_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UXRCreativeVREditorMode_SetHeadTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UXRCreativeVREditorMode_SetHeadTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXRCreativeVREditorMode_SetRoomTransform_Statics
	{
		struct XRCreativeVREditorMode_eventSetRoomTransform_Parms
		{
			FTransform RoomToWorld;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RoomToWorld_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RoomToWorld;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXRCreativeVREditorMode_SetRoomTransform_Statics::NewProp_RoomToWorld_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UXRCreativeVREditorMode_SetRoomTransform_Statics::NewProp_RoomToWorld = { "RoomToWorld", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(XRCreativeVREditorMode_eventSetRoomTransform_Parms, RoomToWorld), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UXRCreativeVREditorMode_SetRoomTransform_Statics::NewProp_RoomToWorld_MetaData), Z_Construct_UFunction_UXRCreativeVREditorMode_SetRoomTransform_Statics::NewProp_RoomToWorld_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXRCreativeVREditorMode_SetRoomTransform_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXRCreativeVREditorMode_SetRoomTransform_Statics::NewProp_RoomToWorld,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXRCreativeVREditorMode_SetRoomTransform_Statics::Function_MetaDataParams[] = {
		{ "Category", "XR Creative" },
		{ "ModuleRelativePath", "Private/XRCreativeVREditorMode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UXRCreativeVREditorMode_SetRoomTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXRCreativeVREditorMode, nullptr, "SetRoomTransform", nullptr, nullptr, Z_Construct_UFunction_UXRCreativeVREditorMode_SetRoomTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXRCreativeVREditorMode_SetRoomTransform_Statics::PropPointers), sizeof(Z_Construct_UFunction_UXRCreativeVREditorMode_SetRoomTransform_Statics::XRCreativeVREditorMode_eventSetRoomTransform_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UXRCreativeVREditorMode_SetRoomTransform_Statics::Function_MetaDataParams), Z_Construct_UFunction_UXRCreativeVREditorMode_SetRoomTransform_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UXRCreativeVREditorMode_SetRoomTransform_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UXRCreativeVREditorMode_SetRoomTransform_Statics::XRCreativeVREditorMode_eventSetRoomTransform_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UXRCreativeVREditorMode_SetRoomTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UXRCreativeVREditorMode_SetRoomTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UXRCreativeVREditorMode);
	UClass* Z_Construct_UClass_UXRCreativeVREditorMode_NoRegister()
	{
		return UXRCreativeVREditorMode::StaticClass();
	}
	struct Z_Construct_UClass_UXRCreativeVREditorMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MappableInputConfig_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MappableInputConfig;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ToolsetClass_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_ToolsetClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Avatar_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Avatar;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UXRCreativeVREditorMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVREditorModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_XRCreativeEditor,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UXRCreativeVREditorMode_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UXRCreativeVREditorMode_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UXRCreativeVREditorMode_BP_OnEnter, "BP_OnEnter" }, // 3463151276
		{ &Z_Construct_UFunction_UXRCreativeVREditorMode_BP_OnExit, "BP_OnExit" }, // 2302289909
		{ &Z_Construct_UFunction_UXRCreativeVREditorMode_BP_Tick, "BP_Tick" }, // 2304724088
		{ &Z_Construct_UFunction_UXRCreativeVREditorMode_GetHeadTransform, "GetHeadTransform" }, // 837426683
		{ &Z_Construct_UFunction_UXRCreativeVREditorMode_GetRoomTransform, "GetRoomTransform" }, // 2969978361
		{ &Z_Construct_UFunction_UXRCreativeVREditorMode_SetHeadTransform, "SetHeadTransform" }, // 4073961384
		{ &Z_Construct_UFunction_UXRCreativeVREditorMode_SetRoomTransform, "SetRoomTransform" }, // 1086629005
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UXRCreativeVREditorMode_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UXRCreativeVREditorMode_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "XRCreativeVREditorMode.h" },
		{ "ModuleRelativePath", "Private/XRCreativeVREditorMode.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UXRCreativeVREditorMode_Statics::NewProp_MappableInputConfig_MetaData[] = {
		{ "AllowedClasses", "/Script/EnhancedInput.PlayerMappableInputConfig" },
		{ "Category", "XR Creative" },
		{ "ModuleRelativePath", "Private/XRCreativeVREditorMode.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UXRCreativeVREditorMode_Statics::NewProp_MappableInputConfig = { "MappableInputConfig", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UXRCreativeVREditorMode, MappableInputConfig), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UXRCreativeVREditorMode_Statics::NewProp_MappableInputConfig_MetaData), Z_Construct_UClass_UXRCreativeVREditorMode_Statics::NewProp_MappableInputConfig_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UXRCreativeVREditorMode_Statics::NewProp_ToolsetClass_MetaData[] = {
		{ "Category", "XR Creative" },
		{ "ModuleRelativePath", "Private/XRCreativeVREditorMode.h" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UXRCreativeVREditorMode_Statics::NewProp_ToolsetClass = { "ToolsetClass", nullptr, (EPropertyFlags)0x0024080000010001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UXRCreativeVREditorMode, ToolsetClass), Z_Construct_UClass_UXRCreativeToolset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UXRCreativeVREditorMode_Statics::NewProp_ToolsetClass_MetaData), Z_Construct_UClass_UXRCreativeVREditorMode_Statics::NewProp_ToolsetClass_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UXRCreativeVREditorMode_Statics::NewProp_Avatar_MetaData[] = {
		{ "Category", "XR Creative" },
		{ "ModuleRelativePath", "Private/XRCreativeVREditorMode.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UXRCreativeVREditorMode_Statics::NewProp_Avatar = { "Avatar", nullptr, (EPropertyFlags)0x0024080000000014, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UXRCreativeVREditorMode, Avatar), Z_Construct_UClass_AXRCreativeAvatar_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UXRCreativeVREditorMode_Statics::NewProp_Avatar_MetaData), Z_Construct_UClass_UXRCreativeVREditorMode_Statics::NewProp_Avatar_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UXRCreativeVREditorMode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UXRCreativeVREditorMode_Statics::NewProp_MappableInputConfig,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UXRCreativeVREditorMode_Statics::NewProp_ToolsetClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UXRCreativeVREditorMode_Statics::NewProp_Avatar,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UXRCreativeVREditorMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UXRCreativeVREditorMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UXRCreativeVREditorMode_Statics::ClassParams = {
		&UXRCreativeVREditorMode::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UXRCreativeVREditorMode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UXRCreativeVREditorMode_Statics::PropPointers),
		0,
		0x000000A9u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UXRCreativeVREditorMode_Statics::Class_MetaDataParams), Z_Construct_UClass_UXRCreativeVREditorMode_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UXRCreativeVREditorMode_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UXRCreativeVREditorMode()
	{
		if (!Z_Registration_Info_UClass_UXRCreativeVREditorMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UXRCreativeVREditorMode.OuterSingleton, Z_Construct_UClass_UXRCreativeVREditorMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UXRCreativeVREditorMode.OuterSingleton;
	}
	template<> XRCREATIVEEDITOR_API UClass* StaticClass<UXRCreativeVREditorMode>()
	{
		return UXRCreativeVREditorMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UXRCreativeVREditorMode);
	UXRCreativeVREditorMode::~UXRCreativeVREditorMode() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_XRCreativeFramework_Source_XRCreativeEditor_Private_XRCreativeVREditorMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_XRCreativeFramework_Source_XRCreativeEditor_Private_XRCreativeVREditorMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UXRCreativeVREditorMode, UXRCreativeVREditorMode::StaticClass, TEXT("UXRCreativeVREditorMode"), &Z_Registration_Info_UClass_UXRCreativeVREditorMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UXRCreativeVREditorMode), 852691262U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_XRCreativeFramework_Source_XRCreativeEditor_Private_XRCreativeVREditorMode_h_1999933779(TEXT("/Script/XRCreativeEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_XRCreativeFramework_Source_XRCreativeEditor_Private_XRCreativeVREditorMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_XRCreativeFramework_Source_XRCreativeEditor_Private_XRCreativeVREditorMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
