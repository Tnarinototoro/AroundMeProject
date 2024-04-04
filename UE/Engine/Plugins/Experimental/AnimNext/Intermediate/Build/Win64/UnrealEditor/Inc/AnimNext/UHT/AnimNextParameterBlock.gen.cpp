// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Internal/Param/AnimNextParameterBlock.h"
#include "PropertyBag.h"
#include "RigVMCore/RigVMExecuteContext.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNextParameterBlock() {}
// Cross Module References
	ANIMNEXT_API UClass* Z_Construct_UClass_UAnimNextParameterBlock();
	ANIMNEXT_API UClass* Z_Construct_UClass_UAnimNextParameterBlock_NoRegister();
	ANIMNEXT_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNextParameterBlockAssetRegistryExportEntry();
	ANIMNEXT_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNextParameterBlockAssetRegistryExports();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
	RIGVM_API UClass* Z_Construct_UClass_URigVM_NoRegister();
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMExtendedExecuteContext();
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMRuntimeSettings();
	STRUCTUTILS_API UScriptStruct* Z_Construct_UScriptStruct_FInstancedPropertyBag();
	UPackage* Z_Construct_UPackage__Script_AnimNext();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimNextParameterBlockAssetRegistryExportEntry;
class UScriptStruct* FAnimNextParameterBlockAssetRegistryExportEntry::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNextParameterBlockAssetRegistryExportEntry.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimNextParameterBlockAssetRegistryExportEntry.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNextParameterBlockAssetRegistryExportEntry, (UObject*)Z_Construct_UPackage__Script_AnimNext(), TEXT("AnimNextParameterBlockAssetRegistryExportEntry"));
	}
	return Z_Registration_Info_UScriptStruct_AnimNextParameterBlockAssetRegistryExportEntry.OuterSingleton;
}
template<> ANIMNEXT_API UScriptStruct* StaticStruct<FAnimNextParameterBlockAssetRegistryExportEntry>()
{
	return FAnimNextParameterBlockAssetRegistryExportEntry::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAnimNextParameterBlockAssetRegistryExportEntry_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Library_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Library;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNextParameterBlockAssetRegistryExportEntry_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// Library entry used to export to asset registry\n" },
		{ "ModuleRelativePath", "Internal/Param/AnimNextParameterBlock.h" },
		{ "ToolTip", "Library entry used to export to asset registry" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimNextParameterBlockAssetRegistryExportEntry_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNextParameterBlockAssetRegistryExportEntry>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNextParameterBlockAssetRegistryExportEntry_Statics::NewProp_Name_MetaData[] = {
		{ "ModuleRelativePath", "Internal/Param/AnimNextParameterBlock.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAnimNextParameterBlockAssetRegistryExportEntry_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNextParameterBlockAssetRegistryExportEntry, Name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNextParameterBlockAssetRegistryExportEntry_Statics::NewProp_Name_MetaData), Z_Construct_UScriptStruct_FAnimNextParameterBlockAssetRegistryExportEntry_Statics::NewProp_Name_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNextParameterBlockAssetRegistryExportEntry_Statics::NewProp_Library_MetaData[] = {
		{ "ModuleRelativePath", "Internal/Param/AnimNextParameterBlock.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNextParameterBlockAssetRegistryExportEntry_Statics::NewProp_Library = { "Library", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNextParameterBlockAssetRegistryExportEntry, Library), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNextParameterBlockAssetRegistryExportEntry_Statics::NewProp_Library_MetaData), Z_Construct_UScriptStruct_FAnimNextParameterBlockAssetRegistryExportEntry_Statics::NewProp_Library_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNextParameterBlockAssetRegistryExportEntry_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNextParameterBlockAssetRegistryExportEntry_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNextParameterBlockAssetRegistryExportEntry_Statics::NewProp_Library,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNextParameterBlockAssetRegistryExportEntry_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AnimNext,
		nullptr,
		&NewStructOps,
		"AnimNextParameterBlockAssetRegistryExportEntry",
		Z_Construct_UScriptStruct_FAnimNextParameterBlockAssetRegistryExportEntry_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNextParameterBlockAssetRegistryExportEntry_Statics::PropPointers),
		sizeof(FAnimNextParameterBlockAssetRegistryExportEntry),
		alignof(FAnimNextParameterBlockAssetRegistryExportEntry),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNextParameterBlockAssetRegistryExportEntry_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAnimNextParameterBlockAssetRegistryExportEntry_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNextParameterBlockAssetRegistryExportEntry_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNextParameterBlockAssetRegistryExportEntry()
	{
		if (!Z_Registration_Info_UScriptStruct_AnimNextParameterBlockAssetRegistryExportEntry.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimNextParameterBlockAssetRegistryExportEntry.InnerSingleton, Z_Construct_UScriptStruct_FAnimNextParameterBlockAssetRegistryExportEntry_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AnimNextParameterBlockAssetRegistryExportEntry.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimNextParameterBlockAssetRegistryExports;
class UScriptStruct* FAnimNextParameterBlockAssetRegistryExports::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNextParameterBlockAssetRegistryExports.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimNextParameterBlockAssetRegistryExports.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNextParameterBlockAssetRegistryExports, (UObject*)Z_Construct_UPackage__Script_AnimNext(), TEXT("AnimNextParameterBlockAssetRegistryExports"));
	}
	return Z_Registration_Info_UScriptStruct_AnimNextParameterBlockAssetRegistryExports.OuterSingleton;
}
template<> ANIMNEXT_API UScriptStruct* StaticStruct<FAnimNextParameterBlockAssetRegistryExports>()
{
	return FAnimNextParameterBlockAssetRegistryExports::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAnimNextParameterBlockAssetRegistryExports_Statics
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
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNextParameterBlockAssetRegistryExports_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// Library used to export to asset registry\n" },
		{ "ModuleRelativePath", "Internal/Param/AnimNextParameterBlock.h" },
		{ "ToolTip", "Library used to export to asset registry" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimNextParameterBlockAssetRegistryExports_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNextParameterBlockAssetRegistryExports>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNextParameterBlockAssetRegistryExports_Statics::NewProp_Bindings_Inner = { "Bindings", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FAnimNextParameterBlockAssetRegistryExportEntry, METADATA_PARAMS(0, nullptr) }; // 2819709133
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNextParameterBlockAssetRegistryExports_Statics::NewProp_Bindings_MetaData[] = {
		{ "ModuleRelativePath", "Internal/Param/AnimNextParameterBlock.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimNextParameterBlockAssetRegistryExports_Statics::NewProp_Bindings = { "Bindings", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNextParameterBlockAssetRegistryExports, Bindings), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNextParameterBlockAssetRegistryExports_Statics::NewProp_Bindings_MetaData), Z_Construct_UScriptStruct_FAnimNextParameterBlockAssetRegistryExports_Statics::NewProp_Bindings_MetaData) }; // 2819709133
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNextParameterBlockAssetRegistryExports_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNextParameterBlockAssetRegistryExports_Statics::NewProp_Bindings_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNextParameterBlockAssetRegistryExports_Statics::NewProp_Bindings,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNextParameterBlockAssetRegistryExports_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AnimNext,
		nullptr,
		&NewStructOps,
		"AnimNextParameterBlockAssetRegistryExports",
		Z_Construct_UScriptStruct_FAnimNextParameterBlockAssetRegistryExports_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNextParameterBlockAssetRegistryExports_Statics::PropPointers),
		sizeof(FAnimNextParameterBlockAssetRegistryExports),
		alignof(FAnimNextParameterBlockAssetRegistryExports),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNextParameterBlockAssetRegistryExports_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAnimNextParameterBlockAssetRegistryExports_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNextParameterBlockAssetRegistryExports_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNextParameterBlockAssetRegistryExports()
	{
		if (!Z_Registration_Info_UScriptStruct_AnimNextParameterBlockAssetRegistryExports.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimNextParameterBlockAssetRegistryExports.InnerSingleton, Z_Construct_UScriptStruct_FAnimNextParameterBlockAssetRegistryExports_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AnimNextParameterBlockAssetRegistryExports.InnerSingleton;
	}
	void UAnimNextParameterBlock::StaticRegisterNativesUAnimNextParameterBlock()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimNextParameterBlock);
	UClass* Z_Construct_UClass_UAnimNextParameterBlock_NoRegister()
	{
		return UAnimNextParameterBlock::StaticClass();
	}
	struct Z_Construct_UClass_UAnimNextParameterBlock_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RigVM_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_RigVM;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExtendedExecuteContext_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ExtendedExecuteContext;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VMRuntimeSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_VMRuntimeSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PropertyBag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PropertyBag;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EditorData_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_EditorData;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimNextParameterBlock_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AnimNext,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNextParameterBlock_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimNextParameterBlock_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** An asset used to define AnimNext parameters and their bindings */" },
		{ "IncludePath", "Param/AnimNextParameterBlock.h" },
		{ "ModuleRelativePath", "Internal/Param/AnimNextParameterBlock.h" },
		{ "ToolTip", "An asset used to define AnimNext parameters and their bindings" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimNextParameterBlock_Statics::NewProp_RigVM_MetaData[] = {
		{ "ModuleRelativePath", "Internal/Param/AnimNextParameterBlock.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UAnimNextParameterBlock_Statics::NewProp_RigVM = { "RigVM", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimNextParameterBlock, RigVM), Z_Construct_UClass_URigVM_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNextParameterBlock_Statics::NewProp_RigVM_MetaData), Z_Construct_UClass_UAnimNextParameterBlock_Statics::NewProp_RigVM_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimNextParameterBlock_Statics::NewProp_ExtendedExecuteContext_MetaData[] = {
		{ "ModuleRelativePath", "Internal/Param/AnimNextParameterBlock.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimNextParameterBlock_Statics::NewProp_ExtendedExecuteContext = { "ExtendedExecuteContext", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimNextParameterBlock, ExtendedExecuteContext), Z_Construct_UScriptStruct_FRigVMExtendedExecuteContext, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNextParameterBlock_Statics::NewProp_ExtendedExecuteContext_MetaData), Z_Construct_UClass_UAnimNextParameterBlock_Statics::NewProp_ExtendedExecuteContext_MetaData) }; // 1449618519
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimNextParameterBlock_Statics::NewProp_VMRuntimeSettings_MetaData[] = {
		{ "ModuleRelativePath", "Internal/Param/AnimNextParameterBlock.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimNextParameterBlock_Statics::NewProp_VMRuntimeSettings = { "VMRuntimeSettings", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimNextParameterBlock, VMRuntimeSettings), Z_Construct_UScriptStruct_FRigVMRuntimeSettings, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNextParameterBlock_Statics::NewProp_VMRuntimeSettings_MetaData), Z_Construct_UClass_UAnimNextParameterBlock_Statics::NewProp_VMRuntimeSettings_MetaData) }; // 2055583755
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimNextParameterBlock_Statics::NewProp_PropertyBag_MetaData[] = {
		{ "ModuleRelativePath", "Internal/Param/AnimNextParameterBlock.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimNextParameterBlock_Statics::NewProp_PropertyBag = { "PropertyBag", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimNextParameterBlock, PropertyBag), Z_Construct_UScriptStruct_FInstancedPropertyBag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNextParameterBlock_Statics::NewProp_PropertyBag_MetaData), Z_Construct_UClass_UAnimNextParameterBlock_Statics::NewProp_PropertyBag_MetaData) }; // 4097115139
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimNextParameterBlock_Statics::NewProp_EditorData_MetaData[] = {
		{ "Category", "Parameters" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Internal/Param/AnimNextParameterBlock.h" },
		{ "ShowInnerProperties", "" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UAnimNextParameterBlock_Statics::NewProp_EditorData = { "EditorData", nullptr, (EPropertyFlags)0x00460008000a0009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimNextParameterBlock, EditorData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNextParameterBlock_Statics::NewProp_EditorData_MetaData), Z_Construct_UClass_UAnimNextParameterBlock_Statics::NewProp_EditorData_MetaData) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimNextParameterBlock_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNextParameterBlock_Statics::NewProp_RigVM,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNextParameterBlock_Statics::NewProp_ExtendedExecuteContext,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNextParameterBlock_Statics::NewProp_VMRuntimeSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNextParameterBlock_Statics::NewProp_PropertyBag,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNextParameterBlock_Statics::NewProp_EditorData,
#endif // WITH_EDITORONLY_DATA
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimNextParameterBlock_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimNextParameterBlock>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimNextParameterBlock_Statics::ClassParams = {
		&UAnimNextParameterBlock::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAnimNextParameterBlock_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNextParameterBlock_Statics::PropPointers),
		0,
		0x008800A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNextParameterBlock_Statics::Class_MetaDataParams), Z_Construct_UClass_UAnimNextParameterBlock_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNextParameterBlock_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UAnimNextParameterBlock()
	{
		if (!Z_Registration_Info_UClass_UAnimNextParameterBlock.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimNextParameterBlock.OuterSingleton, Z_Construct_UClass_UAnimNextParameterBlock_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAnimNextParameterBlock.OuterSingleton;
	}
	template<> ANIMNEXT_API UClass* StaticClass<UAnimNextParameterBlock>()
	{
		return UAnimNextParameterBlock::StaticClass();
	}
	UAnimNextParameterBlock::UAnimNextParameterBlock(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimNextParameterBlock);
	UAnimNextParameterBlock::~UAnimNextParameterBlock() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNext_Internal_Param_AnimNextParameterBlock_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNext_Internal_Param_AnimNextParameterBlock_h_Statics::ScriptStructInfo[] = {
		{ FAnimNextParameterBlockAssetRegistryExportEntry::StaticStruct, Z_Construct_UScriptStruct_FAnimNextParameterBlockAssetRegistryExportEntry_Statics::NewStructOps, TEXT("AnimNextParameterBlockAssetRegistryExportEntry"), &Z_Registration_Info_UScriptStruct_AnimNextParameterBlockAssetRegistryExportEntry, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimNextParameterBlockAssetRegistryExportEntry), 2819709133U) },
		{ FAnimNextParameterBlockAssetRegistryExports::StaticStruct, Z_Construct_UScriptStruct_FAnimNextParameterBlockAssetRegistryExports_Statics::NewStructOps, TEXT("AnimNextParameterBlockAssetRegistryExports"), &Z_Registration_Info_UScriptStruct_AnimNextParameterBlockAssetRegistryExports, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimNextParameterBlockAssetRegistryExports), 3474417113U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNext_Internal_Param_AnimNextParameterBlock_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAnimNextParameterBlock, UAnimNextParameterBlock::StaticClass, TEXT("UAnimNextParameterBlock"), &Z_Registration_Info_UClass_UAnimNextParameterBlock, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimNextParameterBlock), 580030305U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNext_Internal_Param_AnimNextParameterBlock_h_4249197527(TEXT("/Script/AnimNext"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNext_Internal_Param_AnimNextParameterBlock_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNext_Internal_Param_AnimNextParameterBlock_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNext_Internal_Param_AnimNextParameterBlock_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNext_Internal_Param_AnimNextParameterBlock_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
