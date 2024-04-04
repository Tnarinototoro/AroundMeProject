// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CommonVisibilitySwitcher.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCommonVisibilitySwitcher() {}
// Cross Module References
	COMMONUI_API UClass* Z_Construct_UClass_UCommonVisibilitySwitcher();
	COMMONUI_API UClass* Z_Construct_UClass_UCommonVisibilitySwitcher_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UOverlay();
	UMG_API UClass* Z_Construct_UClass_UWidget_NoRegister();
	UMG_API UEnum* Z_Construct_UEnum_UMG_ESlateVisibility();
	UPackage* Z_Construct_UPackage__Script_CommonUI();
// End Cross Module References
	DEFINE_FUNCTION(UCommonVisibilitySwitcher::execDeactivateVisibleSlot)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DeactivateVisibleSlot();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCommonVisibilitySwitcher::execActivateVisibleSlot)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ActivateVisibleSlot();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCommonVisibilitySwitcher::execDecrementActiveWidgetIndex)
	{
		P_GET_UBOOL(Z_Param_bAllowWrapping);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DecrementActiveWidgetIndex(Z_Param_bAllowWrapping);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCommonVisibilitySwitcher::execIncrementActiveWidgetIndex)
	{
		P_GET_UBOOL(Z_Param_bAllowWrapping);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->IncrementActiveWidgetIndex(Z_Param_bAllowWrapping);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCommonVisibilitySwitcher::execSetActiveWidget)
	{
		P_GET_OBJECT(UWidget,Z_Param_Widget);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetActiveWidget(Z_Param_Widget);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCommonVisibilitySwitcher::execGetActiveWidget)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UWidget**)Z_Param__Result=P_THIS->GetActiveWidget();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCommonVisibilitySwitcher::execGetActiveWidgetIndex)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetActiveWidgetIndex();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCommonVisibilitySwitcher::execSetActiveWidgetIndex)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetActiveWidgetIndex(Z_Param_Index);
		P_NATIVE_END;
	}
	void UCommonVisibilitySwitcher::StaticRegisterNativesUCommonVisibilitySwitcher()
	{
		UClass* Class = UCommonVisibilitySwitcher::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ActivateVisibleSlot", &UCommonVisibilitySwitcher::execActivateVisibleSlot },
			{ "DeactivateVisibleSlot", &UCommonVisibilitySwitcher::execDeactivateVisibleSlot },
			{ "DecrementActiveWidgetIndex", &UCommonVisibilitySwitcher::execDecrementActiveWidgetIndex },
			{ "GetActiveWidget", &UCommonVisibilitySwitcher::execGetActiveWidget },
			{ "GetActiveWidgetIndex", &UCommonVisibilitySwitcher::execGetActiveWidgetIndex },
			{ "IncrementActiveWidgetIndex", &UCommonVisibilitySwitcher::execIncrementActiveWidgetIndex },
			{ "SetActiveWidget", &UCommonVisibilitySwitcher::execSetActiveWidget },
			{ "SetActiveWidgetIndex", &UCommonVisibilitySwitcher::execSetActiveWidgetIndex },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCommonVisibilitySwitcher_ActivateVisibleSlot_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonVisibilitySwitcher_ActivateVisibleSlot_Statics::Function_MetaDataParams[] = {
		{ "Category", "CommonVisibilitySwitcher" },
		{ "ModuleRelativePath", "Public/CommonVisibilitySwitcher.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonVisibilitySwitcher_ActivateVisibleSlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonVisibilitySwitcher, nullptr, "ActivateVisibleSlot", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonVisibilitySwitcher_ActivateVisibleSlot_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCommonVisibilitySwitcher_ActivateVisibleSlot_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UCommonVisibilitySwitcher_ActivateVisibleSlot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommonVisibilitySwitcher_ActivateVisibleSlot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonVisibilitySwitcher_DeactivateVisibleSlot_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonVisibilitySwitcher_DeactivateVisibleSlot_Statics::Function_MetaDataParams[] = {
		{ "Category", "CommonVisibilitySwitcher" },
		{ "ModuleRelativePath", "Public/CommonVisibilitySwitcher.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonVisibilitySwitcher_DeactivateVisibleSlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonVisibilitySwitcher, nullptr, "DeactivateVisibleSlot", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonVisibilitySwitcher_DeactivateVisibleSlot_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCommonVisibilitySwitcher_DeactivateVisibleSlot_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UCommonVisibilitySwitcher_DeactivateVisibleSlot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommonVisibilitySwitcher_DeactivateVisibleSlot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonVisibilitySwitcher_DecrementActiveWidgetIndex_Statics
	{
		struct CommonVisibilitySwitcher_eventDecrementActiveWidgetIndex_Parms
		{
			bool bAllowWrapping;
		};
		static void NewProp_bAllowWrapping_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowWrapping;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UCommonVisibilitySwitcher_DecrementActiveWidgetIndex_Statics::NewProp_bAllowWrapping_SetBit(void* Obj)
	{
		((CommonVisibilitySwitcher_eventDecrementActiveWidgetIndex_Parms*)Obj)->bAllowWrapping = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCommonVisibilitySwitcher_DecrementActiveWidgetIndex_Statics::NewProp_bAllowWrapping = { "bAllowWrapping", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CommonVisibilitySwitcher_eventDecrementActiveWidgetIndex_Parms), &Z_Construct_UFunction_UCommonVisibilitySwitcher_DecrementActiveWidgetIndex_Statics::NewProp_bAllowWrapping_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonVisibilitySwitcher_DecrementActiveWidgetIndex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonVisibilitySwitcher_DecrementActiveWidgetIndex_Statics::NewProp_bAllowWrapping,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonVisibilitySwitcher_DecrementActiveWidgetIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "CommonVisibilitySwitcher" },
		{ "CPP_Default_bAllowWrapping", "true" },
		{ "ModuleRelativePath", "Public/CommonVisibilitySwitcher.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonVisibilitySwitcher_DecrementActiveWidgetIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonVisibilitySwitcher, nullptr, "DecrementActiveWidgetIndex", nullptr, nullptr, Z_Construct_UFunction_UCommonVisibilitySwitcher_DecrementActiveWidgetIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonVisibilitySwitcher_DecrementActiveWidgetIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCommonVisibilitySwitcher_DecrementActiveWidgetIndex_Statics::CommonVisibilitySwitcher_eventDecrementActiveWidgetIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonVisibilitySwitcher_DecrementActiveWidgetIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCommonVisibilitySwitcher_DecrementActiveWidgetIndex_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonVisibilitySwitcher_DecrementActiveWidgetIndex_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UCommonVisibilitySwitcher_DecrementActiveWidgetIndex_Statics::CommonVisibilitySwitcher_eventDecrementActiveWidgetIndex_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCommonVisibilitySwitcher_DecrementActiveWidgetIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommonVisibilitySwitcher_DecrementActiveWidgetIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonVisibilitySwitcher_GetActiveWidget_Statics
	{
		struct CommonVisibilitySwitcher_eventGetActiveWidget_Parms
		{
			UWidget* ReturnValue;
		};
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonVisibilitySwitcher_GetActiveWidget_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCommonVisibilitySwitcher_GetActiveWidget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CommonVisibilitySwitcher_eventGetActiveWidget_Parms, ReturnValue), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonVisibilitySwitcher_GetActiveWidget_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_UCommonVisibilitySwitcher_GetActiveWidget_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonVisibilitySwitcher_GetActiveWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonVisibilitySwitcher_GetActiveWidget_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonVisibilitySwitcher_GetActiveWidget_Statics::Function_MetaDataParams[] = {
		{ "Category", "CommonVisibilitySwitcher" },
		{ "ModuleRelativePath", "Public/CommonVisibilitySwitcher.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonVisibilitySwitcher_GetActiveWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonVisibilitySwitcher, nullptr, "GetActiveWidget", nullptr, nullptr, Z_Construct_UFunction_UCommonVisibilitySwitcher_GetActiveWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonVisibilitySwitcher_GetActiveWidget_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCommonVisibilitySwitcher_GetActiveWidget_Statics::CommonVisibilitySwitcher_eventGetActiveWidget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonVisibilitySwitcher_GetActiveWidget_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCommonVisibilitySwitcher_GetActiveWidget_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonVisibilitySwitcher_GetActiveWidget_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UCommonVisibilitySwitcher_GetActiveWidget_Statics::CommonVisibilitySwitcher_eventGetActiveWidget_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCommonVisibilitySwitcher_GetActiveWidget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommonVisibilitySwitcher_GetActiveWidget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonVisibilitySwitcher_GetActiveWidgetIndex_Statics
	{
		struct CommonVisibilitySwitcher_eventGetActiveWidgetIndex_Parms
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
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCommonVisibilitySwitcher_GetActiveWidgetIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CommonVisibilitySwitcher_eventGetActiveWidgetIndex_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonVisibilitySwitcher_GetActiveWidgetIndex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonVisibilitySwitcher_GetActiveWidgetIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonVisibilitySwitcher_GetActiveWidgetIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "CommonVisibilitySwitcher" },
		{ "ModuleRelativePath", "Public/CommonVisibilitySwitcher.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonVisibilitySwitcher_GetActiveWidgetIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonVisibilitySwitcher, nullptr, "GetActiveWidgetIndex", nullptr, nullptr, Z_Construct_UFunction_UCommonVisibilitySwitcher_GetActiveWidgetIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonVisibilitySwitcher_GetActiveWidgetIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCommonVisibilitySwitcher_GetActiveWidgetIndex_Statics::CommonVisibilitySwitcher_eventGetActiveWidgetIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonVisibilitySwitcher_GetActiveWidgetIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCommonVisibilitySwitcher_GetActiveWidgetIndex_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonVisibilitySwitcher_GetActiveWidgetIndex_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UCommonVisibilitySwitcher_GetActiveWidgetIndex_Statics::CommonVisibilitySwitcher_eventGetActiveWidgetIndex_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCommonVisibilitySwitcher_GetActiveWidgetIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommonVisibilitySwitcher_GetActiveWidgetIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonVisibilitySwitcher_IncrementActiveWidgetIndex_Statics
	{
		struct CommonVisibilitySwitcher_eventIncrementActiveWidgetIndex_Parms
		{
			bool bAllowWrapping;
		};
		static void NewProp_bAllowWrapping_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowWrapping;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UCommonVisibilitySwitcher_IncrementActiveWidgetIndex_Statics::NewProp_bAllowWrapping_SetBit(void* Obj)
	{
		((CommonVisibilitySwitcher_eventIncrementActiveWidgetIndex_Parms*)Obj)->bAllowWrapping = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCommonVisibilitySwitcher_IncrementActiveWidgetIndex_Statics::NewProp_bAllowWrapping = { "bAllowWrapping", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CommonVisibilitySwitcher_eventIncrementActiveWidgetIndex_Parms), &Z_Construct_UFunction_UCommonVisibilitySwitcher_IncrementActiveWidgetIndex_Statics::NewProp_bAllowWrapping_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonVisibilitySwitcher_IncrementActiveWidgetIndex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonVisibilitySwitcher_IncrementActiveWidgetIndex_Statics::NewProp_bAllowWrapping,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonVisibilitySwitcher_IncrementActiveWidgetIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "CommonVisibilitySwitcher" },
		{ "CPP_Default_bAllowWrapping", "true" },
		{ "ModuleRelativePath", "Public/CommonVisibilitySwitcher.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonVisibilitySwitcher_IncrementActiveWidgetIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonVisibilitySwitcher, nullptr, "IncrementActiveWidgetIndex", nullptr, nullptr, Z_Construct_UFunction_UCommonVisibilitySwitcher_IncrementActiveWidgetIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonVisibilitySwitcher_IncrementActiveWidgetIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCommonVisibilitySwitcher_IncrementActiveWidgetIndex_Statics::CommonVisibilitySwitcher_eventIncrementActiveWidgetIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonVisibilitySwitcher_IncrementActiveWidgetIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCommonVisibilitySwitcher_IncrementActiveWidgetIndex_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonVisibilitySwitcher_IncrementActiveWidgetIndex_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UCommonVisibilitySwitcher_IncrementActiveWidgetIndex_Statics::CommonVisibilitySwitcher_eventIncrementActiveWidgetIndex_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCommonVisibilitySwitcher_IncrementActiveWidgetIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommonVisibilitySwitcher_IncrementActiveWidgetIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonVisibilitySwitcher_SetActiveWidget_Statics
	{
		struct CommonVisibilitySwitcher_eventSetActiveWidget_Parms
		{
			const UWidget* Widget;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Widget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Widget;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonVisibilitySwitcher_SetActiveWidget_Statics::NewProp_Widget_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCommonVisibilitySwitcher_SetActiveWidget_Statics::NewProp_Widget = { "Widget", nullptr, (EPropertyFlags)0x0010000000080082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CommonVisibilitySwitcher_eventSetActiveWidget_Parms, Widget), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonVisibilitySwitcher_SetActiveWidget_Statics::NewProp_Widget_MetaData), Z_Construct_UFunction_UCommonVisibilitySwitcher_SetActiveWidget_Statics::NewProp_Widget_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonVisibilitySwitcher_SetActiveWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonVisibilitySwitcher_SetActiveWidget_Statics::NewProp_Widget,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonVisibilitySwitcher_SetActiveWidget_Statics::Function_MetaDataParams[] = {
		{ "Category", "CommonVisibilitySwitcher" },
		{ "ModuleRelativePath", "Public/CommonVisibilitySwitcher.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonVisibilitySwitcher_SetActiveWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonVisibilitySwitcher, nullptr, "SetActiveWidget", nullptr, nullptr, Z_Construct_UFunction_UCommonVisibilitySwitcher_SetActiveWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonVisibilitySwitcher_SetActiveWidget_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCommonVisibilitySwitcher_SetActiveWidget_Statics::CommonVisibilitySwitcher_eventSetActiveWidget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonVisibilitySwitcher_SetActiveWidget_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCommonVisibilitySwitcher_SetActiveWidget_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonVisibilitySwitcher_SetActiveWidget_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UCommonVisibilitySwitcher_SetActiveWidget_Statics::CommonVisibilitySwitcher_eventSetActiveWidget_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCommonVisibilitySwitcher_SetActiveWidget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommonVisibilitySwitcher_SetActiveWidget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonVisibilitySwitcher_SetActiveWidgetIndex_Statics
	{
		struct CommonVisibilitySwitcher_eventSetActiveWidgetIndex_Parms
		{
			int32 Index;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCommonVisibilitySwitcher_SetActiveWidgetIndex_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CommonVisibilitySwitcher_eventSetActiveWidgetIndex_Parms, Index), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonVisibilitySwitcher_SetActiveWidgetIndex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonVisibilitySwitcher_SetActiveWidgetIndex_Statics::NewProp_Index,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonVisibilitySwitcher_SetActiveWidgetIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "CommonVisibilitySwitcher" },
		{ "ModuleRelativePath", "Public/CommonVisibilitySwitcher.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonVisibilitySwitcher_SetActiveWidgetIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonVisibilitySwitcher, nullptr, "SetActiveWidgetIndex", nullptr, nullptr, Z_Construct_UFunction_UCommonVisibilitySwitcher_SetActiveWidgetIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonVisibilitySwitcher_SetActiveWidgetIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCommonVisibilitySwitcher_SetActiveWidgetIndex_Statics::CommonVisibilitySwitcher_eventSetActiveWidgetIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonVisibilitySwitcher_SetActiveWidgetIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCommonVisibilitySwitcher_SetActiveWidgetIndex_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonVisibilitySwitcher_SetActiveWidgetIndex_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UCommonVisibilitySwitcher_SetActiveWidgetIndex_Statics::CommonVisibilitySwitcher_eventSetActiveWidgetIndex_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCommonVisibilitySwitcher_SetActiveWidgetIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommonVisibilitySwitcher_SetActiveWidgetIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCommonVisibilitySwitcher);
	UClass* Z_Construct_UClass_UCommonVisibilitySwitcher_NoRegister()
	{
		return UCommonVisibilitySwitcher::StaticClass();
	}
	struct Z_Construct_UClass_UCommonVisibilitySwitcher_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_ShownVisibility_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShownVisibility_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ShownVisibility;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActiveWidgetIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ActiveWidgetIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAutoActivateSlot_MetaData[];
#endif
		static void NewProp_bAutoActivateSlot_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoActivateSlot;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bActivateFirstSlotOnAdding_MetaData[];
#endif
		static void NewProp_bActivateFirstSlotOnAdding_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bActivateFirstSlotOnAdding;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCommonVisibilitySwitcher_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UOverlay,
		(UObject* (*)())Z_Construct_UPackage__Script_CommonUI,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCommonVisibilitySwitcher_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UCommonVisibilitySwitcher_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCommonVisibilitySwitcher_ActivateVisibleSlot, "ActivateVisibleSlot" }, // 2364488887
		{ &Z_Construct_UFunction_UCommonVisibilitySwitcher_DeactivateVisibleSlot, "DeactivateVisibleSlot" }, // 4169241832
		{ &Z_Construct_UFunction_UCommonVisibilitySwitcher_DecrementActiveWidgetIndex, "DecrementActiveWidgetIndex" }, // 1135028774
		{ &Z_Construct_UFunction_UCommonVisibilitySwitcher_GetActiveWidget, "GetActiveWidget" }, // 2615037916
		{ &Z_Construct_UFunction_UCommonVisibilitySwitcher_GetActiveWidgetIndex, "GetActiveWidgetIndex" }, // 3970402227
		{ &Z_Construct_UFunction_UCommonVisibilitySwitcher_IncrementActiveWidgetIndex, "IncrementActiveWidgetIndex" }, // 2068970470
		{ &Z_Construct_UFunction_UCommonVisibilitySwitcher_SetActiveWidget, "SetActiveWidget" }, // 1435176181
		{ &Z_Construct_UFunction_UCommonVisibilitySwitcher_SetActiveWidgetIndex, "SetActiveWidgetIndex" }, // 384670760
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCommonVisibilitySwitcher_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonVisibilitySwitcher_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Basic switcher that toggles visibility on its children to only show one widget at a time. Activates visible widget if possible.\n */" },
		{ "DisableNativeTick", "" },
		{ "IncludePath", "CommonVisibilitySwitcher.h" },
		{ "ModuleRelativePath", "Public/CommonVisibilitySwitcher.h" },
		{ "ToolTip", "Basic switcher that toggles visibility on its children to only show one widget at a time. Activates visible widget if possible." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCommonVisibilitySwitcher_Statics::NewProp_ShownVisibility_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonVisibilitySwitcher_Statics::NewProp_ShownVisibility_MetaData[] = {
		{ "Category", "CommonVisibilitySwitcher" },
		{ "ModuleRelativePath", "Public/CommonVisibilitySwitcher.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UCommonVisibilitySwitcher_Statics::NewProp_ShownVisibility = { "ShownVisibility", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCommonVisibilitySwitcher, ShownVisibility), Z_Construct_UEnum_UMG_ESlateVisibility, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCommonVisibilitySwitcher_Statics::NewProp_ShownVisibility_MetaData), Z_Construct_UClass_UCommonVisibilitySwitcher_Statics::NewProp_ShownVisibility_MetaData) }; // 1295612096
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonVisibilitySwitcher_Statics::NewProp_ActiveWidgetIndex_MetaData[] = {
		{ "Category", "CommonVisibilitySwitcher" },
		{ "ClampMin", "-1" },
		{ "ModuleRelativePath", "Public/CommonVisibilitySwitcher.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCommonVisibilitySwitcher_Statics::NewProp_ActiveWidgetIndex = { "ActiveWidgetIndex", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCommonVisibilitySwitcher, ActiveWidgetIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCommonVisibilitySwitcher_Statics::NewProp_ActiveWidgetIndex_MetaData), Z_Construct_UClass_UCommonVisibilitySwitcher_Statics::NewProp_ActiveWidgetIndex_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonVisibilitySwitcher_Statics::NewProp_bAutoActivateSlot_MetaData[] = {
		{ "Category", "CommonVisibilitySwitcher" },
		{ "Comment", "// Whether or not to automatically activate a slot when it becomes visible\n" },
		{ "ModuleRelativePath", "Public/CommonVisibilitySwitcher.h" },
		{ "ToolTip", "Whether or not to automatically activate a slot when it becomes visible" },
	};
#endif
	void Z_Construct_UClass_UCommonVisibilitySwitcher_Statics::NewProp_bAutoActivateSlot_SetBit(void* Obj)
	{
		((UCommonVisibilitySwitcher*)Obj)->bAutoActivateSlot = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCommonVisibilitySwitcher_Statics::NewProp_bAutoActivateSlot = { "bAutoActivateSlot", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCommonVisibilitySwitcher), &Z_Construct_UClass_UCommonVisibilitySwitcher_Statics::NewProp_bAutoActivateSlot_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCommonVisibilitySwitcher_Statics::NewProp_bAutoActivateSlot_MetaData), Z_Construct_UClass_UCommonVisibilitySwitcher_Statics::NewProp_bAutoActivateSlot_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonVisibilitySwitcher_Statics::NewProp_bActivateFirstSlotOnAdding_MetaData[] = {
		{ "Category", "CommonVisibilitySwitcher" },
		{ "Comment", "// Whether or not to activate the first slot if one is added dynamically\n" },
		{ "ModuleRelativePath", "Public/CommonVisibilitySwitcher.h" },
		{ "ToolTip", "Whether or not to activate the first slot if one is added dynamically" },
	};
#endif
	void Z_Construct_UClass_UCommonVisibilitySwitcher_Statics::NewProp_bActivateFirstSlotOnAdding_SetBit(void* Obj)
	{
		((UCommonVisibilitySwitcher*)Obj)->bActivateFirstSlotOnAdding = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCommonVisibilitySwitcher_Statics::NewProp_bActivateFirstSlotOnAdding = { "bActivateFirstSlotOnAdding", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCommonVisibilitySwitcher), &Z_Construct_UClass_UCommonVisibilitySwitcher_Statics::NewProp_bActivateFirstSlotOnAdding_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCommonVisibilitySwitcher_Statics::NewProp_bActivateFirstSlotOnAdding_MetaData), Z_Construct_UClass_UCommonVisibilitySwitcher_Statics::NewProp_bActivateFirstSlotOnAdding_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCommonVisibilitySwitcher_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonVisibilitySwitcher_Statics::NewProp_ShownVisibility_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonVisibilitySwitcher_Statics::NewProp_ShownVisibility,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonVisibilitySwitcher_Statics::NewProp_ActiveWidgetIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonVisibilitySwitcher_Statics::NewProp_bAutoActivateSlot,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonVisibilitySwitcher_Statics::NewProp_bActivateFirstSlotOnAdding,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCommonVisibilitySwitcher_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCommonVisibilitySwitcher>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCommonVisibilitySwitcher_Statics::ClassParams = {
		&UCommonVisibilitySwitcher::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCommonVisibilitySwitcher_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCommonVisibilitySwitcher_Statics::PropPointers),
		0,
		0x00B000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCommonVisibilitySwitcher_Statics::Class_MetaDataParams), Z_Construct_UClass_UCommonVisibilitySwitcher_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCommonVisibilitySwitcher_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UCommonVisibilitySwitcher()
	{
		if (!Z_Registration_Info_UClass_UCommonVisibilitySwitcher.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCommonVisibilitySwitcher.OuterSingleton, Z_Construct_UClass_UCommonVisibilitySwitcher_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCommonVisibilitySwitcher.OuterSingleton;
	}
	template<> COMMONUI_API UClass* StaticClass<UCommonVisibilitySwitcher>()
	{
		return UCommonVisibilitySwitcher::StaticClass();
	}
	UCommonVisibilitySwitcher::UCommonVisibilitySwitcher(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCommonVisibilitySwitcher);
	UCommonVisibilitySwitcher::~UCommonVisibilitySwitcher() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonVisibilitySwitcher_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonVisibilitySwitcher_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCommonVisibilitySwitcher, UCommonVisibilitySwitcher::StaticClass, TEXT("UCommonVisibilitySwitcher"), &Z_Registration_Info_UClass_UCommonVisibilitySwitcher, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCommonVisibilitySwitcher), 2984748696U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonVisibilitySwitcher_h_4209312244(TEXT("/Script/CommonUI"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonVisibilitySwitcher_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonVisibilitySwitcher_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
