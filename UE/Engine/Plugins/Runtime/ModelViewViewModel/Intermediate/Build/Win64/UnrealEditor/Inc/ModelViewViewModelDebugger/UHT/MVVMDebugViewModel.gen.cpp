// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MVVMDebugViewModel.h"
#include "FieldNotificationId.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMVVMDebugViewModel() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FAssetData();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	FIELDNOTIFICATION_API UScriptStruct* Z_Construct_UScriptStruct_FFieldNotificationId();
	MODELVIEWVIEWMODELDEBUGGER_API UScriptStruct* Z_Construct_UScriptStruct_FMVVMViewModelDebugEntry();
	MODELVIEWVIEWMODELDEBUGGER_API UScriptStruct* Z_Construct_UScriptStruct_FMVVMViewModelFieldBoundDebugEntry();
	UPackage* Z_Construct_UPackage__Script_ModelViewViewModelDebugger();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MVVMViewModelFieldBoundDebugEntry;
class UScriptStruct* FMVVMViewModelFieldBoundDebugEntry::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MVVMViewModelFieldBoundDebugEntry.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MVVMViewModelFieldBoundDebugEntry.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMVVMViewModelFieldBoundDebugEntry, (UObject*)Z_Construct_UPackage__Script_ModelViewViewModelDebugger(), TEXT("MVVMViewModelFieldBoundDebugEntry"));
	}
	return Z_Registration_Info_UScriptStruct_MVVMViewModelFieldBoundDebugEntry.OuterSingleton;
}
template<> MODELVIEWVIEWMODELDEBUGGER_API UScriptStruct* StaticStruct<FMVVMViewModelFieldBoundDebugEntry>()
{
	return FMVVMViewModelFieldBoundDebugEntry::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMVVMViewModelFieldBoundDebugEntry_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_KeyObjectName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_KeyObjectName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_KeyFieldId_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_KeyFieldId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BindingObjectPathName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_BindingObjectPathName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BindingFunctionName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_BindingFunctionName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMVVMViewModelFieldBoundDebugEntry_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MVVMDebugViewModel.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMVVMViewModelFieldBoundDebugEntry_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMVVMViewModelFieldBoundDebugEntry>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMVVMViewModelFieldBoundDebugEntry_Statics::NewProp_KeyObjectName_MetaData[] = {
		{ "Category", "Viewmodel" },
		{ "ModuleRelativePath", "Public/MVVMDebugViewModel.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FMVVMViewModelFieldBoundDebugEntry_Statics::NewProp_KeyObjectName = { "KeyObjectName", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMVVMViewModelFieldBoundDebugEntry, KeyObjectName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMVVMViewModelFieldBoundDebugEntry_Statics::NewProp_KeyObjectName_MetaData), Z_Construct_UScriptStruct_FMVVMViewModelFieldBoundDebugEntry_Statics::NewProp_KeyObjectName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMVVMViewModelFieldBoundDebugEntry_Statics::NewProp_KeyFieldId_MetaData[] = {
		{ "Category", "Viewmodel" },
		{ "ModuleRelativePath", "Public/MVVMDebugViewModel.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMVVMViewModelFieldBoundDebugEntry_Statics::NewProp_KeyFieldId = { "KeyFieldId", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMVVMViewModelFieldBoundDebugEntry, KeyFieldId), Z_Construct_UScriptStruct_FFieldNotificationId, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMVVMViewModelFieldBoundDebugEntry_Statics::NewProp_KeyFieldId_MetaData), Z_Construct_UScriptStruct_FMVVMViewModelFieldBoundDebugEntry_Statics::NewProp_KeyFieldId_MetaData) }; // 4137445925
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMVVMViewModelFieldBoundDebugEntry_Statics::NewProp_BindingObjectPathName_MetaData[] = {
		{ "Category", "Viewmodel" },
		{ "ModuleRelativePath", "Public/MVVMDebugViewModel.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMVVMViewModelFieldBoundDebugEntry_Statics::NewProp_BindingObjectPathName = { "BindingObjectPathName", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMVVMViewModelFieldBoundDebugEntry, BindingObjectPathName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMVVMViewModelFieldBoundDebugEntry_Statics::NewProp_BindingObjectPathName_MetaData), Z_Construct_UScriptStruct_FMVVMViewModelFieldBoundDebugEntry_Statics::NewProp_BindingObjectPathName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMVVMViewModelFieldBoundDebugEntry_Statics::NewProp_BindingFunctionName_MetaData[] = {
		{ "Category", "Viewmodel" },
		{ "ModuleRelativePath", "Public/MVVMDebugViewModel.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FMVVMViewModelFieldBoundDebugEntry_Statics::NewProp_BindingFunctionName = { "BindingFunctionName", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMVVMViewModelFieldBoundDebugEntry, BindingFunctionName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMVVMViewModelFieldBoundDebugEntry_Statics::NewProp_BindingFunctionName_MetaData), Z_Construct_UScriptStruct_FMVVMViewModelFieldBoundDebugEntry_Statics::NewProp_BindingFunctionName_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMVVMViewModelFieldBoundDebugEntry_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMVVMViewModelFieldBoundDebugEntry_Statics::NewProp_KeyObjectName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMVVMViewModelFieldBoundDebugEntry_Statics::NewProp_KeyFieldId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMVVMViewModelFieldBoundDebugEntry_Statics::NewProp_BindingObjectPathName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMVVMViewModelFieldBoundDebugEntry_Statics::NewProp_BindingFunctionName,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMVVMViewModelFieldBoundDebugEntry_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ModelViewViewModelDebugger,
		nullptr,
		&NewStructOps,
		"MVVMViewModelFieldBoundDebugEntry",
		Z_Construct_UScriptStruct_FMVVMViewModelFieldBoundDebugEntry_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMVVMViewModelFieldBoundDebugEntry_Statics::PropPointers),
		sizeof(FMVVMViewModelFieldBoundDebugEntry),
		alignof(FMVVMViewModelFieldBoundDebugEntry),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMVVMViewModelFieldBoundDebugEntry_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMVVMViewModelFieldBoundDebugEntry_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMVVMViewModelFieldBoundDebugEntry_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FMVVMViewModelFieldBoundDebugEntry()
	{
		if (!Z_Registration_Info_UScriptStruct_MVVMViewModelFieldBoundDebugEntry.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MVVMViewModelFieldBoundDebugEntry.InnerSingleton, Z_Construct_UScriptStruct_FMVVMViewModelFieldBoundDebugEntry_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MVVMViewModelFieldBoundDebugEntry.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MVVMViewModelDebugEntry;
class UScriptStruct* FMVVMViewModelDebugEntry::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MVVMViewModelDebugEntry.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MVVMViewModelDebugEntry.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMVVMViewModelDebugEntry, (UObject*)Z_Construct_UPackage__Script_ModelViewViewModelDebugger(), TEXT("MVVMViewModelDebugEntry"));
	}
	return Z_Registration_Info_UScriptStruct_MVVMViewModelDebugEntry.OuterSingleton;
}
template<> MODELVIEWVIEWMODELDEBUGGER_API UScriptStruct* StaticStruct<FMVVMViewModelDebugEntry>()
{
	return FMVVMViewModelDebugEntry::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMVVMViewModelDebugEntry_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PathName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_PathName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ViewModelAsset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ViewModelAsset;
		static const UECodeGen_Private::FStructPropertyParams NewProp_FieldBound_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FieldBound_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_FieldBound;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ViewModelDebugId_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ViewModelDebugId;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMVVMViewModelDebugEntry_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MVVMDebugViewModel.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMVVMViewModelDebugEntry_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMVVMViewModelDebugEntry>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMVVMViewModelDebugEntry_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Viewmodel" },
		{ "ModuleRelativePath", "Public/MVVMDebugViewModel.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FMVVMViewModelDebugEntry_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMVVMViewModelDebugEntry, Name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMVVMViewModelDebugEntry_Statics::NewProp_Name_MetaData), Z_Construct_UScriptStruct_FMVVMViewModelDebugEntry_Statics::NewProp_Name_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMVVMViewModelDebugEntry_Statics::NewProp_PathName_MetaData[] = {
		{ "Category", "Viewmodel" },
		{ "ModuleRelativePath", "Public/MVVMDebugViewModel.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMVVMViewModelDebugEntry_Statics::NewProp_PathName = { "PathName", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMVVMViewModelDebugEntry, PathName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMVVMViewModelDebugEntry_Statics::NewProp_PathName_MetaData), Z_Construct_UScriptStruct_FMVVMViewModelDebugEntry_Statics::NewProp_PathName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMVVMViewModelDebugEntry_Statics::NewProp_ViewModelAsset_MetaData[] = {
		{ "Category", "Viewmodel" },
		{ "ModuleRelativePath", "Public/MVVMDebugViewModel.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMVVMViewModelDebugEntry_Statics::NewProp_ViewModelAsset = { "ViewModelAsset", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMVVMViewModelDebugEntry, ViewModelAsset), Z_Construct_UScriptStruct_FAssetData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMVVMViewModelDebugEntry_Statics::NewProp_ViewModelAsset_MetaData), Z_Construct_UScriptStruct_FMVVMViewModelDebugEntry_Statics::NewProp_ViewModelAsset_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMVVMViewModelDebugEntry_Statics::NewProp_FieldBound_Inner = { "FieldBound", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FMVVMViewModelFieldBoundDebugEntry, METADATA_PARAMS(0, nullptr) }; // 418861993
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMVVMViewModelDebugEntry_Statics::NewProp_FieldBound_MetaData[] = {
		{ "Category", "Viewmodel" },
		{ "ModuleRelativePath", "Public/MVVMDebugViewModel.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMVVMViewModelDebugEntry_Statics::NewProp_FieldBound = { "FieldBound", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMVVMViewModelDebugEntry, FieldBound), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMVVMViewModelDebugEntry_Statics::NewProp_FieldBound_MetaData), Z_Construct_UScriptStruct_FMVVMViewModelDebugEntry_Statics::NewProp_FieldBound_MetaData) }; // 418861993
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMVVMViewModelDebugEntry_Statics::NewProp_ViewModelDebugId_MetaData[] = {
		{ "Category", "Viewmodel" },
		{ "Comment", "//UPROPERTY(VisibleAnywhere, Category = \"Viewmodel\")\n//FInstancedPropertyBag PropertyBag;\n" },
		{ "ModuleRelativePath", "Public/MVVMDebugViewModel.h" },
		{ "ToolTip", "UPROPERTY(VisibleAnywhere, Category = \"Viewmodel\")\nFInstancedPropertyBag PropertyBag;" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMVVMViewModelDebugEntry_Statics::NewProp_ViewModelDebugId = { "ViewModelDebugId", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMVVMViewModelDebugEntry, ViewModelDebugId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMVVMViewModelDebugEntry_Statics::NewProp_ViewModelDebugId_MetaData), Z_Construct_UScriptStruct_FMVVMViewModelDebugEntry_Statics::NewProp_ViewModelDebugId_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMVVMViewModelDebugEntry_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMVVMViewModelDebugEntry_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMVVMViewModelDebugEntry_Statics::NewProp_PathName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMVVMViewModelDebugEntry_Statics::NewProp_ViewModelAsset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMVVMViewModelDebugEntry_Statics::NewProp_FieldBound_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMVVMViewModelDebugEntry_Statics::NewProp_FieldBound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMVVMViewModelDebugEntry_Statics::NewProp_ViewModelDebugId,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMVVMViewModelDebugEntry_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ModelViewViewModelDebugger,
		nullptr,
		&NewStructOps,
		"MVVMViewModelDebugEntry",
		Z_Construct_UScriptStruct_FMVVMViewModelDebugEntry_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMVVMViewModelDebugEntry_Statics::PropPointers),
		sizeof(FMVVMViewModelDebugEntry),
		alignof(FMVVMViewModelDebugEntry),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMVVMViewModelDebugEntry_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMVVMViewModelDebugEntry_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMVVMViewModelDebugEntry_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FMVVMViewModelDebugEntry()
	{
		if (!Z_Registration_Info_UScriptStruct_MVVMViewModelDebugEntry.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MVVMViewModelDebugEntry.InnerSingleton, Z_Construct_UScriptStruct_FMVVMViewModelDebugEntry_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MVVMViewModelDebugEntry.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModelDebugger_Public_MVVMDebugViewModel_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModelDebugger_Public_MVVMDebugViewModel_h_Statics::ScriptStructInfo[] = {
		{ FMVVMViewModelFieldBoundDebugEntry::StaticStruct, Z_Construct_UScriptStruct_FMVVMViewModelFieldBoundDebugEntry_Statics::NewStructOps, TEXT("MVVMViewModelFieldBoundDebugEntry"), &Z_Registration_Info_UScriptStruct_MVVMViewModelFieldBoundDebugEntry, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMVVMViewModelFieldBoundDebugEntry), 418861993U) },
		{ FMVVMViewModelDebugEntry::StaticStruct, Z_Construct_UScriptStruct_FMVVMViewModelDebugEntry_Statics::NewStructOps, TEXT("MVVMViewModelDebugEntry"), &Z_Registration_Info_UScriptStruct_MVVMViewModelDebugEntry, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMVVMViewModelDebugEntry), 1949623700U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModelDebugger_Public_MVVMDebugViewModel_h_3078779870(TEXT("/Script/ModelViewViewModelDebugger"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModelDebugger_Public_MVVMDebugViewModel_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModelDebugger_Public_MVVMDebugViewModel_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
