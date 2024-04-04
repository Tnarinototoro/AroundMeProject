// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MVVMDebugViewClass.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMVVMDebugViewClass() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	MODELVIEWVIEWMODELDEBUGGER_API UScriptStruct* Z_Construct_UScriptStruct_FMVVMViewBindingDebugEntry();
	MODELVIEWVIEWMODELDEBUGGER_API UScriptStruct* Z_Construct_UScriptStruct_FMVVMViewClassDebugEntry();
	UPackage* Z_Construct_UPackage__Script_ModelViewViewModelDebugger();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MVVMViewBindingDebugEntry;
class UScriptStruct* FMVVMViewBindingDebugEntry::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MVVMViewBindingDebugEntry.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MVVMViewBindingDebugEntry.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMVVMViewBindingDebugEntry, (UObject*)Z_Construct_UPackage__Script_ModelViewViewModelDebugger(), TEXT("MVVMViewBindingDebugEntry"));
	}
	return Z_Registration_Info_UScriptStruct_MVVMViewBindingDebugEntry.OuterSingleton;
}
template<> MODELVIEWVIEWMODELDEBUGGER_API UScriptStruct* StaticStruct<FMVVMViewBindingDebugEntry>()
{
	return FMVVMViewBindingDebugEntry::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMVVMViewBindingDebugEntry_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlueprintViewBindingId_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BlueprintViewBindingId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FieldId_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_FieldId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceFieldPath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SourceFieldPath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DestinationFieldPath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DestinationFieldPath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConversionFunctionFieldPath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ConversionFunctionFieldPath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CompiledBindingIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_CompiledBindingIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMVVMViewBindingDebugEntry_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MVVMDebugViewClass.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMVVMViewBindingDebugEntry_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMVVMViewBindingDebugEntry>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMVVMViewBindingDebugEntry_Statics::NewProp_BlueprintViewBindingId_MetaData[] = {
		{ "Category", "Viewmodel" },
		{ "ModuleRelativePath", "Public/MVVMDebugViewClass.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMVVMViewBindingDebugEntry_Statics::NewProp_BlueprintViewBindingId = { "BlueprintViewBindingId", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMVVMViewBindingDebugEntry, BlueprintViewBindingId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMVVMViewBindingDebugEntry_Statics::NewProp_BlueprintViewBindingId_MetaData), Z_Construct_UScriptStruct_FMVVMViewBindingDebugEntry_Statics::NewProp_BlueprintViewBindingId_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMVVMViewBindingDebugEntry_Statics::NewProp_FieldId_MetaData[] = {
		{ "Category", "Viewmodel" },
		{ "ModuleRelativePath", "Public/MVVMDebugViewClass.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FMVVMViewBindingDebugEntry_Statics::NewProp_FieldId = { "FieldId", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMVVMViewBindingDebugEntry, FieldId), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMVVMViewBindingDebugEntry_Statics::NewProp_FieldId_MetaData), Z_Construct_UScriptStruct_FMVVMViewBindingDebugEntry_Statics::NewProp_FieldId_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMVVMViewBindingDebugEntry_Statics::NewProp_SourceFieldPath_MetaData[] = {
		{ "Category", "Viewmodel" },
		{ "ModuleRelativePath", "Public/MVVMDebugViewClass.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMVVMViewBindingDebugEntry_Statics::NewProp_SourceFieldPath = { "SourceFieldPath", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMVVMViewBindingDebugEntry, SourceFieldPath), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMVVMViewBindingDebugEntry_Statics::NewProp_SourceFieldPath_MetaData), Z_Construct_UScriptStruct_FMVVMViewBindingDebugEntry_Statics::NewProp_SourceFieldPath_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMVVMViewBindingDebugEntry_Statics::NewProp_DestinationFieldPath_MetaData[] = {
		{ "Category", "Viewmodel" },
		{ "ModuleRelativePath", "Public/MVVMDebugViewClass.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMVVMViewBindingDebugEntry_Statics::NewProp_DestinationFieldPath = { "DestinationFieldPath", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMVVMViewBindingDebugEntry, DestinationFieldPath), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMVVMViewBindingDebugEntry_Statics::NewProp_DestinationFieldPath_MetaData), Z_Construct_UScriptStruct_FMVVMViewBindingDebugEntry_Statics::NewProp_DestinationFieldPath_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMVVMViewBindingDebugEntry_Statics::NewProp_ConversionFunctionFieldPath_MetaData[] = {
		{ "Category", "Viewmodel" },
		{ "ModuleRelativePath", "Public/MVVMDebugViewClass.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMVVMViewBindingDebugEntry_Statics::NewProp_ConversionFunctionFieldPath = { "ConversionFunctionFieldPath", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMVVMViewBindingDebugEntry, ConversionFunctionFieldPath), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMVVMViewBindingDebugEntry_Statics::NewProp_ConversionFunctionFieldPath_MetaData), Z_Construct_UScriptStruct_FMVVMViewBindingDebugEntry_Statics::NewProp_ConversionFunctionFieldPath_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMVVMViewBindingDebugEntry_Statics::NewProp_CompiledBindingIndex_MetaData[] = {
		{ "Category", "Viewmodel" },
		{ "ModuleRelativePath", "Public/MVVMDebugViewClass.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMVVMViewBindingDebugEntry_Statics::NewProp_CompiledBindingIndex = { "CompiledBindingIndex", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMVVMViewBindingDebugEntry, CompiledBindingIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMVVMViewBindingDebugEntry_Statics::NewProp_CompiledBindingIndex_MetaData), Z_Construct_UScriptStruct_FMVVMViewBindingDebugEntry_Statics::NewProp_CompiledBindingIndex_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMVVMViewBindingDebugEntry_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMVVMViewBindingDebugEntry_Statics::NewProp_BlueprintViewBindingId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMVVMViewBindingDebugEntry_Statics::NewProp_FieldId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMVVMViewBindingDebugEntry_Statics::NewProp_SourceFieldPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMVVMViewBindingDebugEntry_Statics::NewProp_DestinationFieldPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMVVMViewBindingDebugEntry_Statics::NewProp_ConversionFunctionFieldPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMVVMViewBindingDebugEntry_Statics::NewProp_CompiledBindingIndex,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMVVMViewBindingDebugEntry_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ModelViewViewModelDebugger,
		nullptr,
		&NewStructOps,
		"MVVMViewBindingDebugEntry",
		Z_Construct_UScriptStruct_FMVVMViewBindingDebugEntry_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMVVMViewBindingDebugEntry_Statics::PropPointers),
		sizeof(FMVVMViewBindingDebugEntry),
		alignof(FMVVMViewBindingDebugEntry),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMVVMViewBindingDebugEntry_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMVVMViewBindingDebugEntry_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMVVMViewBindingDebugEntry_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FMVVMViewBindingDebugEntry()
	{
		if (!Z_Registration_Info_UScriptStruct_MVVMViewBindingDebugEntry.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MVVMViewBindingDebugEntry.InnerSingleton, Z_Construct_UScriptStruct_FMVVMViewBindingDebugEntry_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MVVMViewBindingDebugEntry.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MVVMViewClassDebugEntry;
class UScriptStruct* FMVVMViewClassDebugEntry::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MVVMViewClassDebugEntry.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MVVMViewClassDebugEntry.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMVVMViewClassDebugEntry, (UObject*)Z_Construct_UPackage__Script_ModelViewViewModelDebugger(), TEXT("MVVMViewClassDebugEntry"));
	}
	return Z_Registration_Info_UScriptStruct_MVVMViewClassDebugEntry.OuterSingleton;
}
template<> MODELVIEWVIEWMODELDEBUGGER_API UScriptStruct* StaticStruct<FMVVMViewClassDebugEntry>()
{
	return FMVVMViewClassDebugEntry::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMVVMViewClassDebugEntry_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_Bindings_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Bindings_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Bindings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ViewClassDebugId_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ViewClassDebugId;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMVVMViewClassDebugEntry_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MVVMDebugViewClass.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMVVMViewClassDebugEntry_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMVVMViewClassDebugEntry>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMVVMViewClassDebugEntry_Statics::NewProp_Bindings_Inner = { "Bindings", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FMVVMViewBindingDebugEntry, METADATA_PARAMS(0, nullptr) }; // 490555683
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMVVMViewClassDebugEntry_Statics::NewProp_Bindings_MetaData[] = {
		{ "Category", "Viewmodel" },
		{ "ModuleRelativePath", "Public/MVVMDebugViewClass.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMVVMViewClassDebugEntry_Statics::NewProp_Bindings = { "Bindings", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMVVMViewClassDebugEntry, Bindings), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMVVMViewClassDebugEntry_Statics::NewProp_Bindings_MetaData), Z_Construct_UScriptStruct_FMVVMViewClassDebugEntry_Statics::NewProp_Bindings_MetaData) }; // 490555683
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMVVMViewClassDebugEntry_Statics::NewProp_ViewClassDebugId_MetaData[] = {
		{ "ModuleRelativePath", "Public/MVVMDebugViewClass.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMVVMViewClassDebugEntry_Statics::NewProp_ViewClassDebugId = { "ViewClassDebugId", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMVVMViewClassDebugEntry, ViewClassDebugId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMVVMViewClassDebugEntry_Statics::NewProp_ViewClassDebugId_MetaData), Z_Construct_UScriptStruct_FMVVMViewClassDebugEntry_Statics::NewProp_ViewClassDebugId_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMVVMViewClassDebugEntry_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMVVMViewClassDebugEntry_Statics::NewProp_Bindings_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMVVMViewClassDebugEntry_Statics::NewProp_Bindings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMVVMViewClassDebugEntry_Statics::NewProp_ViewClassDebugId,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMVVMViewClassDebugEntry_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ModelViewViewModelDebugger,
		nullptr,
		&NewStructOps,
		"MVVMViewClassDebugEntry",
		Z_Construct_UScriptStruct_FMVVMViewClassDebugEntry_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMVVMViewClassDebugEntry_Statics::PropPointers),
		sizeof(FMVVMViewClassDebugEntry),
		alignof(FMVVMViewClassDebugEntry),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMVVMViewClassDebugEntry_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMVVMViewClassDebugEntry_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMVVMViewClassDebugEntry_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FMVVMViewClassDebugEntry()
	{
		if (!Z_Registration_Info_UScriptStruct_MVVMViewClassDebugEntry.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MVVMViewClassDebugEntry.InnerSingleton, Z_Construct_UScriptStruct_FMVVMViewClassDebugEntry_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MVVMViewClassDebugEntry.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModelDebugger_Public_MVVMDebugViewClass_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModelDebugger_Public_MVVMDebugViewClass_h_Statics::ScriptStructInfo[] = {
		{ FMVVMViewBindingDebugEntry::StaticStruct, Z_Construct_UScriptStruct_FMVVMViewBindingDebugEntry_Statics::NewStructOps, TEXT("MVVMViewBindingDebugEntry"), &Z_Registration_Info_UScriptStruct_MVVMViewBindingDebugEntry, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMVVMViewBindingDebugEntry), 490555683U) },
		{ FMVVMViewClassDebugEntry::StaticStruct, Z_Construct_UScriptStruct_FMVVMViewClassDebugEntry_Statics::NewStructOps, TEXT("MVVMViewClassDebugEntry"), &Z_Registration_Info_UScriptStruct_MVVMViewClassDebugEntry, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMVVMViewClassDebugEntry), 2716870927U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModelDebugger_Public_MVVMDebugViewClass_h_124714424(TEXT("/Script/ModelViewViewModelDebugger"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModelDebugger_Public_MVVMDebugViewClass_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModelDebugger_Public_MVVMDebugViewClass_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
