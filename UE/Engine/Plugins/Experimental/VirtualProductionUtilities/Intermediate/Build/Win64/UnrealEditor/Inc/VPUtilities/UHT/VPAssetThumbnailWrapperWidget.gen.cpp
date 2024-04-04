// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Widgets/VPAssetThumbnailWrapperWidget.h"
#include "Styling/SlateBrush.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVPAssetThumbnailWrapperWidget() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FAssetData();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateBrush();
	UMG_API UClass* Z_Construct_UClass_UWidget();
	UPackage* Z_Construct_UPackage__Script_VPUtilities();
	VPUTILITIES_API UClass* Z_Construct_UClass_UVPAssetThumbnailWrapperWidget();
	VPUTILITIES_API UClass* Z_Construct_UClass_UVPAssetThumbnailWrapperWidget_NoRegister();
	VPUTILITIES_API UEnum* Z_Construct_UEnum_VPUtilities_EAssetThumbnailDisplayMode();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAssetThumbnailDisplayMode;
	static UEnum* EAssetThumbnailDisplayMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EAssetThumbnailDisplayMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EAssetThumbnailDisplayMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_VPUtilities_EAssetThumbnailDisplayMode, (UObject*)Z_Construct_UPackage__Script_VPUtilities(), TEXT("EAssetThumbnailDisplayMode"));
		}
		return Z_Registration_Info_UEnum_EAssetThumbnailDisplayMode.OuterSingleton;
	}
	template<> VPUTILITIES_API UEnum* StaticEnum<EAssetThumbnailDisplayMode>()
	{
		return EAssetThumbnailDisplayMode_StaticEnum();
	}
	struct Z_Construct_UEnum_VPUtilities_EAssetThumbnailDisplayMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_VPUtilities_EAssetThumbnailDisplayMode_Statics::Enumerators[] = {
		{ "EAssetThumbnailDisplayMode::EditorThumbnail", (int64)EAssetThumbnailDisplayMode::EditorThumbnail },
		{ "EAssetThumbnailDisplayMode::FallbackImage", (int64)EAssetThumbnailDisplayMode::FallbackImage },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_VPUtilities_EAssetThumbnailDisplayMode_Statics::Enum_MetaDataParams[] = {
		{ "EditorThumbnail.Name", "EAssetThumbnailDisplayMode::EditorThumbnail" },
		{ "FallbackImage.Name", "EAssetThumbnailDisplayMode::FallbackImage" },
		{ "ModuleRelativePath", "Public/Widgets/VPAssetThumbnailWrapperWidget.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_VPUtilities_EAssetThumbnailDisplayMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_VPUtilities,
		nullptr,
		"EAssetThumbnailDisplayMode",
		"EAssetThumbnailDisplayMode",
		Z_Construct_UEnum_VPUtilities_EAssetThumbnailDisplayMode_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_VPUtilities_EAssetThumbnailDisplayMode_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_VPUtilities_EAssetThumbnailDisplayMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_VPUtilities_EAssetThumbnailDisplayMode_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_VPUtilities_EAssetThumbnailDisplayMode()
	{
		if (!Z_Registration_Info_UEnum_EAssetThumbnailDisplayMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAssetThumbnailDisplayMode.InnerSingleton, Z_Construct_UEnum_VPUtilities_EAssetThumbnailDisplayMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EAssetThumbnailDisplayMode.InnerSingleton;
	}
	DEFINE_FUNCTION(UVPAssetThumbnailWrapperWidget::execSetDisplayMode)
	{
		P_GET_ENUM(EAssetThumbnailDisplayMode,Z_Param_Mode);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDisplayMode(EAssetThumbnailDisplayMode(Z_Param_Mode));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVPAssetThumbnailWrapperWidget::execGetFallbackBrush)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSlateBrush*)Z_Param__Result=P_THIS->GetFallbackBrush();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVPAssetThumbnailWrapperWidget::execSetFallbackBrush)
	{
		P_GET_STRUCT_REF(FSlateBrush,Z_Param_Out_NewFallbackBrush);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetFallbackBrush(Z_Param_Out_NewFallbackBrush);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVPAssetThumbnailWrapperWidget::execSetAssetByObject)
	{
		P_GET_OBJECT(UObject,Z_Param_Object);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAssetByObject(Z_Param_Object);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVPAssetThumbnailWrapperWidget::execSetAsset)
	{
		P_GET_STRUCT_REF(FAssetData,Z_Param_Out_AssetData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAsset(Z_Param_Out_AssetData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVPAssetThumbnailWrapperWidget::execGetEditorAssetWidget)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UObject**)Z_Param__Result=P_THIS->GetEditorAssetWidget();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVPAssetThumbnailWrapperWidget::execGetEditorThumbnailResolution)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FIntPoint*)Z_Param__Result=P_THIS->GetEditorThumbnailResolution();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVPAssetThumbnailWrapperWidget::execSetEditorThumbnailResolution)
	{
		P_GET_STRUCT_REF(FIntPoint,Z_Param_Out_NewResolution);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetEditorThumbnailResolution(Z_Param_Out_NewResolution);
		P_NATIVE_END;
	}
	void UVPAssetThumbnailWrapperWidget::StaticRegisterNativesUVPAssetThumbnailWrapperWidget()
	{
		UClass* Class = UVPAssetThumbnailWrapperWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetEditorAssetWidget", &UVPAssetThumbnailWrapperWidget::execGetEditorAssetWidget },
			{ "GetEditorThumbnailResolution", &UVPAssetThumbnailWrapperWidget::execGetEditorThumbnailResolution },
			{ "GetFallbackBrush", &UVPAssetThumbnailWrapperWidget::execGetFallbackBrush },
			{ "SetAsset", &UVPAssetThumbnailWrapperWidget::execSetAsset },
			{ "SetAssetByObject", &UVPAssetThumbnailWrapperWidget::execSetAssetByObject },
			{ "SetDisplayMode", &UVPAssetThumbnailWrapperWidget::execSetDisplayMode },
			{ "SetEditorThumbnailResolution", &UVPAssetThumbnailWrapperWidget::execSetEditorThumbnailResolution },
			{ "SetFallbackBrush", &UVPAssetThumbnailWrapperWidget::execSetFallbackBrush },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UVPAssetThumbnailWrapperWidget_GetEditorAssetWidget_Statics
	{
		struct VPAssetThumbnailWrapperWidget_eventGetEditorAssetWidget_Parms
		{
			UObject* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVPAssetThumbnailWrapperWidget_GetEditorAssetWidget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VPAssetThumbnailWrapperWidget_eventGetEditorAssetWidget_Parms, ReturnValue), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVPAssetThumbnailWrapperWidget_GetEditorAssetWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVPAssetThumbnailWrapperWidget_GetEditorAssetWidget_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVPAssetThumbnailWrapperWidget_GetEditorAssetWidget_Statics::Function_MetaDataParams[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/**\n\x09 * Gets the widget used for displaying in editor. Returns nullptr in non-editor builds.\n\x09 * This type must be cast to UAssetThumbnailWidget manually (due to Unreal Header Tool restrictions).\n\x09 */" },
		{ "ModuleRelativePath", "Public/Widgets/VPAssetThumbnailWrapperWidget.h" },
		{ "ToolTip", "Gets the widget used for displaying in editor. Returns nullptr in non-editor builds.\nThis type must be cast to UAssetThumbnailWidget manually (due to Unreal Header Tool restrictions)." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVPAssetThumbnailWrapperWidget_GetEditorAssetWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVPAssetThumbnailWrapperWidget, nullptr, "GetEditorAssetWidget", nullptr, nullptr, Z_Construct_UFunction_UVPAssetThumbnailWrapperWidget_GetEditorAssetWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVPAssetThumbnailWrapperWidget_GetEditorAssetWidget_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVPAssetThumbnailWrapperWidget_GetEditorAssetWidget_Statics::VPAssetThumbnailWrapperWidget_eventGetEditorAssetWidget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVPAssetThumbnailWrapperWidget_GetEditorAssetWidget_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVPAssetThumbnailWrapperWidget_GetEditorAssetWidget_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVPAssetThumbnailWrapperWidget_GetEditorAssetWidget_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UVPAssetThumbnailWrapperWidget_GetEditorAssetWidget_Statics::VPAssetThumbnailWrapperWidget_eventGetEditorAssetWidget_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UVPAssetThumbnailWrapperWidget_GetEditorAssetWidget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVPAssetThumbnailWrapperWidget_GetEditorAssetWidget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVPAssetThumbnailWrapperWidget_GetEditorThumbnailResolution_Statics
	{
		struct VPAssetThumbnailWrapperWidget_eventGetEditorThumbnailResolution_Parms
		{
			FIntPoint ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVPAssetThumbnailWrapperWidget_GetEditorThumbnailResolution_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VPAssetThumbnailWrapperWidget_eventGetEditorThumbnailResolution_Parms, ReturnValue), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVPAssetThumbnailWrapperWidget_GetEditorThumbnailResolution_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVPAssetThumbnailWrapperWidget_GetEditorThumbnailResolution_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVPAssetThumbnailWrapperWidget_GetEditorThumbnailResolution_Statics::Function_MetaDataParams[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/Widgets/VPAssetThumbnailWrapperWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVPAssetThumbnailWrapperWidget_GetEditorThumbnailResolution_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVPAssetThumbnailWrapperWidget, nullptr, "GetEditorThumbnailResolution", nullptr, nullptr, Z_Construct_UFunction_UVPAssetThumbnailWrapperWidget_GetEditorThumbnailResolution_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVPAssetThumbnailWrapperWidget_GetEditorThumbnailResolution_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVPAssetThumbnailWrapperWidget_GetEditorThumbnailResolution_Statics::VPAssetThumbnailWrapperWidget_eventGetEditorThumbnailResolution_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVPAssetThumbnailWrapperWidget_GetEditorThumbnailResolution_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVPAssetThumbnailWrapperWidget_GetEditorThumbnailResolution_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVPAssetThumbnailWrapperWidget_GetEditorThumbnailResolution_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UVPAssetThumbnailWrapperWidget_GetEditorThumbnailResolution_Statics::VPAssetThumbnailWrapperWidget_eventGetEditorThumbnailResolution_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UVPAssetThumbnailWrapperWidget_GetEditorThumbnailResolution()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVPAssetThumbnailWrapperWidget_GetEditorThumbnailResolution_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVPAssetThumbnailWrapperWidget_GetFallbackBrush_Statics
	{
		struct VPAssetThumbnailWrapperWidget_eventGetFallbackBrush_Parms
		{
			FSlateBrush ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVPAssetThumbnailWrapperWidget_GetFallbackBrush_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VPAssetThumbnailWrapperWidget_eventGetFallbackBrush_Parms, ReturnValue), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(0, nullptr) }; // 899956612
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVPAssetThumbnailWrapperWidget_GetFallbackBrush_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVPAssetThumbnailWrapperWidget_GetFallbackBrush_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVPAssetThumbnailWrapperWidget_GetFallbackBrush_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/Widgets/VPAssetThumbnailWrapperWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVPAssetThumbnailWrapperWidget_GetFallbackBrush_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVPAssetThumbnailWrapperWidget, nullptr, "GetFallbackBrush", nullptr, nullptr, Z_Construct_UFunction_UVPAssetThumbnailWrapperWidget_GetFallbackBrush_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVPAssetThumbnailWrapperWidget_GetFallbackBrush_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVPAssetThumbnailWrapperWidget_GetFallbackBrush_Statics::VPAssetThumbnailWrapperWidget_eventGetFallbackBrush_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVPAssetThumbnailWrapperWidget_GetFallbackBrush_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVPAssetThumbnailWrapperWidget_GetFallbackBrush_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVPAssetThumbnailWrapperWidget_GetFallbackBrush_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UVPAssetThumbnailWrapperWidget_GetFallbackBrush_Statics::VPAssetThumbnailWrapperWidget_eventGetFallbackBrush_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UVPAssetThumbnailWrapperWidget_GetFallbackBrush()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVPAssetThumbnailWrapperWidget_GetFallbackBrush_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVPAssetThumbnailWrapperWidget_SetAsset_Statics
	{
		struct FTopLevelAssetPath
		{
			FName PackageName;
			FName AssetName;
		};

		struct VPAssetThumbnailWrapperWidget_eventSetAsset_Parms
		{
			FAssetData AssetData;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AssetData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AssetData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVPAssetThumbnailWrapperWidget_SetAsset_Statics::NewProp_AssetData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVPAssetThumbnailWrapperWidget_SetAsset_Statics::NewProp_AssetData = { "AssetData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VPAssetThumbnailWrapperWidget_eventSetAsset_Parms, AssetData), Z_Construct_UScriptStruct_FAssetData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVPAssetThumbnailWrapperWidget_SetAsset_Statics::NewProp_AssetData_MetaData), Z_Construct_UFunction_UVPAssetThumbnailWrapperWidget_SetAsset_Statics::NewProp_AssetData_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVPAssetThumbnailWrapperWidget_SetAsset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVPAssetThumbnailWrapperWidget_SetAsset_Statics::NewProp_AssetData,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVPAssetThumbnailWrapperWidget_SetAsset_Statics::Function_MetaDataParams[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Sets the asset to display. Has no effect in non-editor builds. */" },
		{ "ModuleRelativePath", "Public/Widgets/VPAssetThumbnailWrapperWidget.h" },
		{ "ToolTip", "Sets the asset to display. Has no effect in non-editor builds." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVPAssetThumbnailWrapperWidget_SetAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVPAssetThumbnailWrapperWidget, nullptr, "SetAsset", nullptr, nullptr, Z_Construct_UFunction_UVPAssetThumbnailWrapperWidget_SetAsset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVPAssetThumbnailWrapperWidget_SetAsset_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVPAssetThumbnailWrapperWidget_SetAsset_Statics::VPAssetThumbnailWrapperWidget_eventSetAsset_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVPAssetThumbnailWrapperWidget_SetAsset_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVPAssetThumbnailWrapperWidget_SetAsset_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVPAssetThumbnailWrapperWidget_SetAsset_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UVPAssetThumbnailWrapperWidget_SetAsset_Statics::VPAssetThumbnailWrapperWidget_eventSetAsset_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UVPAssetThumbnailWrapperWidget_SetAsset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVPAssetThumbnailWrapperWidget_SetAsset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVPAssetThumbnailWrapperWidget_SetAssetByObject_Statics
	{
		struct VPAssetThumbnailWrapperWidget_eventSetAssetByObject_Parms
		{
			UObject* Object;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Object;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVPAssetThumbnailWrapperWidget_SetAssetByObject_Statics::NewProp_Object = { "Object", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VPAssetThumbnailWrapperWidget_eventSetAssetByObject_Parms, Object), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVPAssetThumbnailWrapperWidget_SetAssetByObject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVPAssetThumbnailWrapperWidget_SetAssetByObject_Statics::NewProp_Object,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVPAssetThumbnailWrapperWidget_SetAssetByObject_Statics::Function_MetaDataParams[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Sets the asset to display. Has no effect in non-editor builds. */" },
		{ "ModuleRelativePath", "Public/Widgets/VPAssetThumbnailWrapperWidget.h" },
		{ "ToolTip", "Sets the asset to display. Has no effect in non-editor builds." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVPAssetThumbnailWrapperWidget_SetAssetByObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVPAssetThumbnailWrapperWidget, nullptr, "SetAssetByObject", nullptr, nullptr, Z_Construct_UFunction_UVPAssetThumbnailWrapperWidget_SetAssetByObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVPAssetThumbnailWrapperWidget_SetAssetByObject_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVPAssetThumbnailWrapperWidget_SetAssetByObject_Statics::VPAssetThumbnailWrapperWidget_eventSetAssetByObject_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVPAssetThumbnailWrapperWidget_SetAssetByObject_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVPAssetThumbnailWrapperWidget_SetAssetByObject_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVPAssetThumbnailWrapperWidget_SetAssetByObject_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UVPAssetThumbnailWrapperWidget_SetAssetByObject_Statics::VPAssetThumbnailWrapperWidget_eventSetAssetByObject_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UVPAssetThumbnailWrapperWidget_SetAssetByObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVPAssetThumbnailWrapperWidget_SetAssetByObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVPAssetThumbnailWrapperWidget_SetDisplayMode_Statics
	{
		struct VPAssetThumbnailWrapperWidget_eventSetDisplayMode_Parms
		{
			EAssetThumbnailDisplayMode Mode;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_Mode_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Mode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVPAssetThumbnailWrapperWidget_SetDisplayMode_Statics::NewProp_Mode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UVPAssetThumbnailWrapperWidget_SetDisplayMode_Statics::NewProp_Mode = { "Mode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VPAssetThumbnailWrapperWidget_eventSetDisplayMode_Parms, Mode), Z_Construct_UEnum_VPUtilities_EAssetThumbnailDisplayMode, METADATA_PARAMS(0, nullptr) }; // 586476563
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVPAssetThumbnailWrapperWidget_SetDisplayMode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVPAssetThumbnailWrapperWidget_SetDisplayMode_Statics::NewProp_Mode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVPAssetThumbnailWrapperWidget_SetDisplayMode_Statics::NewProp_Mode,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVPAssetThumbnailWrapperWidget_SetDisplayMode_Statics::Function_MetaDataParams[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Sets the display mode. Only has an effect in editor builds because packaged games always display in FallbackImage mode. */" },
		{ "CPP_Default_Mode", "FallbackImage" },
		{ "ModuleRelativePath", "Public/Widgets/VPAssetThumbnailWrapperWidget.h" },
		{ "ToolTip", "Sets the display mode. Only has an effect in editor builds because packaged games always display in FallbackImage mode." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVPAssetThumbnailWrapperWidget_SetDisplayMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVPAssetThumbnailWrapperWidget, nullptr, "SetDisplayMode", nullptr, nullptr, Z_Construct_UFunction_UVPAssetThumbnailWrapperWidget_SetDisplayMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVPAssetThumbnailWrapperWidget_SetDisplayMode_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVPAssetThumbnailWrapperWidget_SetDisplayMode_Statics::VPAssetThumbnailWrapperWidget_eventSetDisplayMode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVPAssetThumbnailWrapperWidget_SetDisplayMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVPAssetThumbnailWrapperWidget_SetDisplayMode_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVPAssetThumbnailWrapperWidget_SetDisplayMode_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UVPAssetThumbnailWrapperWidget_SetDisplayMode_Statics::VPAssetThumbnailWrapperWidget_eventSetDisplayMode_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UVPAssetThumbnailWrapperWidget_SetDisplayMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVPAssetThumbnailWrapperWidget_SetDisplayMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVPAssetThumbnailWrapperWidget_SetEditorThumbnailResolution_Statics
	{
		struct VPAssetThumbnailWrapperWidget_eventSetEditorThumbnailResolution_Parms
		{
			FIntPoint NewResolution;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewResolution_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewResolution;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVPAssetThumbnailWrapperWidget_SetEditorThumbnailResolution_Statics::NewProp_NewResolution_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVPAssetThumbnailWrapperWidget_SetEditorThumbnailResolution_Statics::NewProp_NewResolution = { "NewResolution", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VPAssetThumbnailWrapperWidget_eventSetEditorThumbnailResolution_Parms, NewResolution), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVPAssetThumbnailWrapperWidget_SetEditorThumbnailResolution_Statics::NewProp_NewResolution_MetaData), Z_Construct_UFunction_UVPAssetThumbnailWrapperWidget_SetEditorThumbnailResolution_Statics::NewProp_NewResolution_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVPAssetThumbnailWrapperWidget_SetEditorThumbnailResolution_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVPAssetThumbnailWrapperWidget_SetEditorThumbnailResolution_Statics::NewProp_NewResolution,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVPAssetThumbnailWrapperWidget_SetEditorThumbnailResolution_Statics::Function_MetaDataParams[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Sets the resolution of the editor thumbnail */" },
		{ "ModuleRelativePath", "Public/Widgets/VPAssetThumbnailWrapperWidget.h" },
		{ "ToolTip", "Sets the resolution of the editor thumbnail" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVPAssetThumbnailWrapperWidget_SetEditorThumbnailResolution_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVPAssetThumbnailWrapperWidget, nullptr, "SetEditorThumbnailResolution", nullptr, nullptr, Z_Construct_UFunction_UVPAssetThumbnailWrapperWidget_SetEditorThumbnailResolution_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVPAssetThumbnailWrapperWidget_SetEditorThumbnailResolution_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVPAssetThumbnailWrapperWidget_SetEditorThumbnailResolution_Statics::VPAssetThumbnailWrapperWidget_eventSetEditorThumbnailResolution_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVPAssetThumbnailWrapperWidget_SetEditorThumbnailResolution_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVPAssetThumbnailWrapperWidget_SetEditorThumbnailResolution_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVPAssetThumbnailWrapperWidget_SetEditorThumbnailResolution_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UVPAssetThumbnailWrapperWidget_SetEditorThumbnailResolution_Statics::VPAssetThumbnailWrapperWidget_eventSetEditorThumbnailResolution_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UVPAssetThumbnailWrapperWidget_SetEditorThumbnailResolution()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVPAssetThumbnailWrapperWidget_SetEditorThumbnailResolution_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVPAssetThumbnailWrapperWidget_SetFallbackBrush_Statics
	{
		struct VPAssetThumbnailWrapperWidget_eventSetFallbackBrush_Parms
		{
			FSlateBrush NewFallbackBrush;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewFallbackBrush_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewFallbackBrush;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVPAssetThumbnailWrapperWidget_SetFallbackBrush_Statics::NewProp_NewFallbackBrush_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVPAssetThumbnailWrapperWidget_SetFallbackBrush_Statics::NewProp_NewFallbackBrush = { "NewFallbackBrush", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VPAssetThumbnailWrapperWidget_eventSetFallbackBrush_Parms, NewFallbackBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVPAssetThumbnailWrapperWidget_SetFallbackBrush_Statics::NewProp_NewFallbackBrush_MetaData), Z_Construct_UFunction_UVPAssetThumbnailWrapperWidget_SetFallbackBrush_Statics::NewProp_NewFallbackBrush_MetaData) }; // 899956612
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVPAssetThumbnailWrapperWidget_SetFallbackBrush_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVPAssetThumbnailWrapperWidget_SetFallbackBrush_Statics::NewProp_NewFallbackBrush,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVPAssetThumbnailWrapperWidget_SetFallbackBrush_Statics::Function_MetaDataParams[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Sets the fallback image to display. */" },
		{ "ModuleRelativePath", "Public/Widgets/VPAssetThumbnailWrapperWidget.h" },
		{ "ToolTip", "Sets the fallback image to display." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVPAssetThumbnailWrapperWidget_SetFallbackBrush_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVPAssetThumbnailWrapperWidget, nullptr, "SetFallbackBrush", nullptr, nullptr, Z_Construct_UFunction_UVPAssetThumbnailWrapperWidget_SetFallbackBrush_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVPAssetThumbnailWrapperWidget_SetFallbackBrush_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVPAssetThumbnailWrapperWidget_SetFallbackBrush_Statics::VPAssetThumbnailWrapperWidget_eventSetFallbackBrush_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVPAssetThumbnailWrapperWidget_SetFallbackBrush_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVPAssetThumbnailWrapperWidget_SetFallbackBrush_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVPAssetThumbnailWrapperWidget_SetFallbackBrush_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UVPAssetThumbnailWrapperWidget_SetFallbackBrush_Statics::VPAssetThumbnailWrapperWidget_eventSetFallbackBrush_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UVPAssetThumbnailWrapperWidget_SetFallbackBrush()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVPAssetThumbnailWrapperWidget_SetFallbackBrush_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVPAssetThumbnailWrapperWidget);
	UClass* Z_Construct_UClass_UVPAssetThumbnailWrapperWidget_NoRegister()
	{
		return UVPAssetThumbnailWrapperWidget::StaticClass();
	}
	struct Z_Construct_UClass_UVPAssetThumbnailWrapperWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FallbackBrush_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FallbackBrush;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AssetWidget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AssetWidget;
		static const UECodeGen_Private::FBytePropertyParams NewProp_DisplayMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DisplayMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_DisplayMode;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVPAssetThumbnailWrapperWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_VPUtilities,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVPAssetThumbnailWrapperWidget_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UVPAssetThumbnailWrapperWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UVPAssetThumbnailWrapperWidget_GetEditorAssetWidget, "GetEditorAssetWidget" }, // 4231392362
		{ &Z_Construct_UFunction_UVPAssetThumbnailWrapperWidget_GetEditorThumbnailResolution, "GetEditorThumbnailResolution" }, // 2340775226
		{ &Z_Construct_UFunction_UVPAssetThumbnailWrapperWidget_GetFallbackBrush, "GetFallbackBrush" }, // 1035604405
		{ &Z_Construct_UFunction_UVPAssetThumbnailWrapperWidget_SetAsset, "SetAsset" }, // 987014024
		{ &Z_Construct_UFunction_UVPAssetThumbnailWrapperWidget_SetAssetByObject, "SetAssetByObject" }, // 2660715787
		{ &Z_Construct_UFunction_UVPAssetThumbnailWrapperWidget_SetDisplayMode, "SetDisplayMode" }, // 1683885934
		{ &Z_Construct_UFunction_UVPAssetThumbnailWrapperWidget_SetEditorThumbnailResolution, "SetEditorThumbnailResolution" }, // 3810268966
		{ &Z_Construct_UFunction_UVPAssetThumbnailWrapperWidget_SetFallbackBrush, "SetFallbackBrush" }, // 1318722233
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVPAssetThumbnailWrapperWidget_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVPAssetThumbnailWrapperWidget_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Version of UAssetThumbnailWidget that compiles in packaged games.\n * In editor builds, a thumbnail widget is displayed.\n * In packaged builds, a fallback SImage is displayed.\n */" },
		{ "DisplayName", "Asset Thumbnail Widget (Editor & Game)" },
		{ "IncludePath", "Widgets/VPAssetThumbnailWrapperWidget.h" },
		{ "ModuleRelativePath", "Public/Widgets/VPAssetThumbnailWrapperWidget.h" },
		{ "ToolTip", "Version of UAssetThumbnailWidget that compiles in packaged games.\nIn editor builds, a thumbnail widget is displayed.\nIn packaged builds, a fallback SImage is displayed." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVPAssetThumbnailWrapperWidget_Statics::NewProp_FallbackBrush_MetaData[] = {
		{ "BlueprintGetter", "GetFallbackBrush" },
		{ "BlueprintSetter", "SetFallbackBrush" },
		{ "Category", "Appearance" },
		{ "Comment", "/** Fallback brush to draw */" },
		{ "ModuleRelativePath", "Public/Widgets/VPAssetThumbnailWrapperWidget.h" },
		{ "ToolTip", "Fallback brush to draw" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVPAssetThumbnailWrapperWidget_Statics::NewProp_FallbackBrush = { "FallbackBrush", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVPAssetThumbnailWrapperWidget, FallbackBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVPAssetThumbnailWrapperWidget_Statics::NewProp_FallbackBrush_MetaData), Z_Construct_UClass_UVPAssetThumbnailWrapperWidget_Statics::NewProp_FallbackBrush_MetaData) }; // 899956612
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVPAssetThumbnailWrapperWidget_Statics::NewProp_AssetWidget_MetaData[] = {
		{ "Comment", "/** The content for the editor version. Is an instance of UAssetThumbnailWidget but for non-editor builds UHT does not find the type so UObject here. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widgets/VPAssetThumbnailWrapperWidget.h" },
		{ "ToolTip", "The content for the editor version. Is an instance of UAssetThumbnailWidget but for non-editor builds UHT does not find the type so UObject here." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UVPAssetThumbnailWrapperWidget_Statics::NewProp_AssetWidget = { "AssetWidget", nullptr, (EPropertyFlags)0x0046000800080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVPAssetThumbnailWrapperWidget, AssetWidget), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVPAssetThumbnailWrapperWidget_Statics::NewProp_AssetWidget_MetaData), Z_Construct_UClass_UVPAssetThumbnailWrapperWidget_Statics::NewProp_AssetWidget_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UVPAssetThumbnailWrapperWidget_Statics::NewProp_DisplayMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVPAssetThumbnailWrapperWidget_Statics::NewProp_DisplayMode_MetaData[] = {
		{ "BlueprintSetter", "SetDisplayMode" },
		{ "Category", "Appearance" },
		{ "Comment", "/** How the widget is supposed to be displayed. */" },
		{ "ModuleRelativePath", "Public/Widgets/VPAssetThumbnailWrapperWidget.h" },
		{ "ToolTip", "How the widget is supposed to be displayed." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UVPAssetThumbnailWrapperWidget_Statics::NewProp_DisplayMode = { "DisplayMode", nullptr, (EPropertyFlags)0x0040040800000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVPAssetThumbnailWrapperWidget, DisplayMode), Z_Construct_UEnum_VPUtilities_EAssetThumbnailDisplayMode, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVPAssetThumbnailWrapperWidget_Statics::NewProp_DisplayMode_MetaData), Z_Construct_UClass_UVPAssetThumbnailWrapperWidget_Statics::NewProp_DisplayMode_MetaData) }; // 586476563
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVPAssetThumbnailWrapperWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVPAssetThumbnailWrapperWidget_Statics::NewProp_FallbackBrush,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVPAssetThumbnailWrapperWidget_Statics::NewProp_AssetWidget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVPAssetThumbnailWrapperWidget_Statics::NewProp_DisplayMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVPAssetThumbnailWrapperWidget_Statics::NewProp_DisplayMode,
#endif // WITH_EDITORONLY_DATA
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVPAssetThumbnailWrapperWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVPAssetThumbnailWrapperWidget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVPAssetThumbnailWrapperWidget_Statics::ClassParams = {
		&UVPAssetThumbnailWrapperWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UVPAssetThumbnailWrapperWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UVPAssetThumbnailWrapperWidget_Statics::PropPointers),
		0,
		0x00B000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVPAssetThumbnailWrapperWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UVPAssetThumbnailWrapperWidget_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVPAssetThumbnailWrapperWidget_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UVPAssetThumbnailWrapperWidget()
	{
		if (!Z_Registration_Info_UClass_UVPAssetThumbnailWrapperWidget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVPAssetThumbnailWrapperWidget.OuterSingleton, Z_Construct_UClass_UVPAssetThumbnailWrapperWidget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVPAssetThumbnailWrapperWidget.OuterSingleton;
	}
	template<> VPUTILITIES_API UClass* StaticClass<UVPAssetThumbnailWrapperWidget>()
	{
		return UVPAssetThumbnailWrapperWidget::StaticClass();
	}
	UVPAssetThumbnailWrapperWidget::UVPAssetThumbnailWrapperWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVPAssetThumbnailWrapperWidget);
	UVPAssetThumbnailWrapperWidget::~UVPAssetThumbnailWrapperWidget() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_Widgets_VPAssetThumbnailWrapperWidget_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_Widgets_VPAssetThumbnailWrapperWidget_h_Statics::EnumInfo[] = {
		{ EAssetThumbnailDisplayMode_StaticEnum, TEXT("EAssetThumbnailDisplayMode"), &Z_Registration_Info_UEnum_EAssetThumbnailDisplayMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 586476563U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_Widgets_VPAssetThumbnailWrapperWidget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVPAssetThumbnailWrapperWidget, UVPAssetThumbnailWrapperWidget::StaticClass, TEXT("UVPAssetThumbnailWrapperWidget"), &Z_Registration_Info_UClass_UVPAssetThumbnailWrapperWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVPAssetThumbnailWrapperWidget), 3729619366U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_Widgets_VPAssetThumbnailWrapperWidget_h_1599607916(TEXT("/Script/VPUtilities"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_Widgets_VPAssetThumbnailWrapperWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_Widgets_VPAssetThumbnailWrapperWidget_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_Widgets_VPAssetThumbnailWrapperWidget_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_Widgets_VPAssetThumbnailWrapperWidget_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
