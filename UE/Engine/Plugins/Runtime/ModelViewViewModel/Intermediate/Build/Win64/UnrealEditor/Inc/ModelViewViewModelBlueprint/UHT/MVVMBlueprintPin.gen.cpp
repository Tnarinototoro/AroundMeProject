// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MVVMBlueprintPin.h"
#include "MVVMPropertyPath.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMVVMBlueprintPin() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	MODELVIEWVIEWMODELBLUEPRINT_API UScriptStruct* Z_Construct_UScriptStruct_FMVVMBlueprintPin();
	MODELVIEWVIEWMODELBLUEPRINT_API UScriptStruct* Z_Construct_UScriptStruct_FMVVMBlueprintPropertyPath();
	UPackage* Z_Construct_UPackage__Script_ModelViewViewModelBlueprint();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MVVMBlueprintPin;
class UScriptStruct* FMVVMBlueprintPin::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MVVMBlueprintPin.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MVVMBlueprintPin.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMVVMBlueprintPin, (UObject*)Z_Construct_UPackage__Script_ModelViewViewModelBlueprint(), TEXT("MVVMBlueprintPin"));
	}
	return Z_Registration_Info_UScriptStruct_MVVMBlueprintPin.OuterSingleton;
}
template<> MODELVIEWVIEWMODELBLUEPRINT_API UScriptStruct* StaticStruct<FMVVMBlueprintPin>()
{
	return FMVVMBlueprintPin::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMVVMBlueprintPin_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PinName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_PinName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Path_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Path;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultString_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DefaultString;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultText_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_DefaultText;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DefaultObject;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMVVMBlueprintPin_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n*\n*/" },
		{ "ModuleRelativePath", "Public/MVVMBlueprintPin.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMVVMBlueprintPin_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMVVMBlueprintPin>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMVVMBlueprintPin_Statics::NewProp_PinName_MetaData[] = {
		{ "Category", "Viewmodel" },
		{ "ModuleRelativePath", "Public/MVVMBlueprintPin.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FMVVMBlueprintPin_Statics::NewProp_PinName = { "PinName", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMVVMBlueprintPin, PinName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMVVMBlueprintPin_Statics::NewProp_PinName_MetaData), Z_Construct_UScriptStruct_FMVVMBlueprintPin_Statics::NewProp_PinName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMVVMBlueprintPin_Statics::NewProp_Path_MetaData[] = {
		{ "Category", "Viewmodel" },
		{ "ModuleRelativePath", "Public/MVVMBlueprintPin.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMVVMBlueprintPin_Statics::NewProp_Path = { "Path", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMVVMBlueprintPin, Path), Z_Construct_UScriptStruct_FMVVMBlueprintPropertyPath, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMVVMBlueprintPin_Statics::NewProp_Path_MetaData), Z_Construct_UScriptStruct_FMVVMBlueprintPin_Statics::NewProp_Path_MetaData) }; // 2041684757
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMVVMBlueprintPin_Statics::NewProp_DefaultString_MetaData[] = {
		{ "Category", "Viewmodel" },
		{ "Comment", "/** Default value for this pin (used if the pin has no connections), stored as a string */" },
		{ "ModuleRelativePath", "Public/MVVMBlueprintPin.h" },
		{ "ToolTip", "Default value for this pin (used if the pin has no connections), stored as a string" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMVVMBlueprintPin_Statics::NewProp_DefaultString = { "DefaultString", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMVVMBlueprintPin, DefaultString), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMVVMBlueprintPin_Statics::NewProp_DefaultString_MetaData), Z_Construct_UScriptStruct_FMVVMBlueprintPin_Statics::NewProp_DefaultString_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMVVMBlueprintPin_Statics::NewProp_DefaultText_MetaData[] = {
		{ "Category", "Viewmodel" },
		{ "Comment", "/** If the default value for this pin should be an FText, it is stored here. */" },
		{ "ModuleRelativePath", "Public/MVVMBlueprintPin.h" },
		{ "ToolTip", "If the default value for this pin should be an FText, it is stored here." },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FMVVMBlueprintPin_Statics::NewProp_DefaultText = { "DefaultText", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMVVMBlueprintPin, DefaultText), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMVVMBlueprintPin_Statics::NewProp_DefaultText_MetaData), Z_Construct_UScriptStruct_FMVVMBlueprintPin_Statics::NewProp_DefaultText_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMVVMBlueprintPin_Statics::NewProp_DefaultObject_MetaData[] = {
		{ "Category", "Viewmodel" },
		{ "Comment", "/** If the default value for this pin should be an object, we store a pointer to it */" },
		{ "ModuleRelativePath", "Public/MVVMBlueprintPin.h" },
		{ "ToolTip", "If the default value for this pin should be an object, we store a pointer to it" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FMVVMBlueprintPin_Statics::NewProp_DefaultObject = { "DefaultObject", nullptr, (EPropertyFlags)0x0044000000020001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMVVMBlueprintPin, DefaultObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMVVMBlueprintPin_Statics::NewProp_DefaultObject_MetaData), Z_Construct_UScriptStruct_FMVVMBlueprintPin_Statics::NewProp_DefaultObject_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMVVMBlueprintPin_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMVVMBlueprintPin_Statics::NewProp_PinName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMVVMBlueprintPin_Statics::NewProp_Path,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMVVMBlueprintPin_Statics::NewProp_DefaultString,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMVVMBlueprintPin_Statics::NewProp_DefaultText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMVVMBlueprintPin_Statics::NewProp_DefaultObject,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMVVMBlueprintPin_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ModelViewViewModelBlueprint,
		nullptr,
		&NewStructOps,
		"MVVMBlueprintPin",
		Z_Construct_UScriptStruct_FMVVMBlueprintPin_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMVVMBlueprintPin_Statics::PropPointers),
		sizeof(FMVVMBlueprintPin),
		alignof(FMVVMBlueprintPin),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMVVMBlueprintPin_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMVVMBlueprintPin_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMVVMBlueprintPin_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FMVVMBlueprintPin()
	{
		if (!Z_Registration_Info_UScriptStruct_MVVMBlueprintPin.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MVVMBlueprintPin.InnerSingleton, Z_Construct_UScriptStruct_FMVVMBlueprintPin_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MVVMBlueprintPin.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModelBlueprint_Public_MVVMBlueprintPin_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModelBlueprint_Public_MVVMBlueprintPin_h_Statics::ScriptStructInfo[] = {
		{ FMVVMBlueprintPin::StaticStruct, Z_Construct_UScriptStruct_FMVVMBlueprintPin_Statics::NewStructOps, TEXT("MVVMBlueprintPin"), &Z_Registration_Info_UScriptStruct_MVVMBlueprintPin, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMVVMBlueprintPin), 3618881798U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModelBlueprint_Public_MVVMBlueprintPin_h_3450496228(TEXT("/Script/ModelViewViewModelBlueprint"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModelBlueprint_Public_MVVMBlueprintPin_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModelBlueprint_Public_MVVMBlueprintPin_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
