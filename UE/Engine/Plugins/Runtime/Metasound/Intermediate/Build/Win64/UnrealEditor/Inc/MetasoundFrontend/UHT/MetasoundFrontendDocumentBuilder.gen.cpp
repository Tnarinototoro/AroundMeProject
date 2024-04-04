// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MetasoundFrontendDocumentBuilder.h"
#include "MetasoundFrontendDocument.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMetasoundFrontendDocumentBuilder() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	METASOUNDFRONTEND_API UClass* Z_Construct_UClass_UMetaSoundBuilderDocument();
	METASOUNDFRONTEND_API UClass* Z_Construct_UClass_UMetaSoundBuilderDocument_NoRegister();
	METASOUNDFRONTEND_API UClass* Z_Construct_UClass_UMetaSoundDocumentInterface_NoRegister();
	METASOUNDFRONTEND_API UScriptStruct* Z_Construct_UScriptStruct_FMetasoundFrontendDocument();
	METASOUNDFRONTEND_API UScriptStruct* Z_Construct_UScriptStruct_FMetaSoundFrontendDocumentBuilder();
	UPackage* Z_Construct_UPackage__Script_MetasoundFrontend();
// End Cross Module References
	void UMetaSoundBuilderDocument::StaticRegisterNativesUMetaSoundBuilderDocument()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMetaSoundBuilderDocument);
	UClass* Z_Construct_UClass_UMetaSoundBuilderDocument_NoRegister()
	{
		return UMetaSoundBuilderDocument::StaticClass();
	}
	struct Z_Construct_UClass_UMetaSoundBuilderDocument_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Document_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Document;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MetaSoundUClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPtrPropertyParams NewProp_MetaSoundUClass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMetaSoundBuilderDocument_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_MetasoundFrontend,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMetaSoundBuilderDocument_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMetaSoundBuilderDocument_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// namespace Metasound::Frontend\n" },
		{ "IncludePath", "MetasoundFrontendDocumentBuilder.h" },
		{ "ModuleRelativePath", "Public/MetasoundFrontendDocumentBuilder.h" },
		{ "ToolTip", "namespace Metasound::Frontend" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMetaSoundBuilderDocument_Statics::NewProp_Document_MetaData[] = {
		{ "ModuleRelativePath", "Public/MetasoundFrontendDocumentBuilder.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMetaSoundBuilderDocument_Statics::NewProp_Document = { "Document", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMetaSoundBuilderDocument, Document), Z_Construct_UScriptStruct_FMetasoundFrontendDocument, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMetaSoundBuilderDocument_Statics::NewProp_Document_MetaData), Z_Construct_UClass_UMetaSoundBuilderDocument_Statics::NewProp_Document_MetaData) }; // 2447661564
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMetaSoundBuilderDocument_Statics::NewProp_MetaSoundUClass_MetaData[] = {
		{ "ModuleRelativePath", "Public/MetasoundFrontendDocumentBuilder.h" },
		{ "NativeConstTemplateArg", "" },
	};
#endif
	const UECodeGen_Private::FClassPtrPropertyParams Z_Construct_UClass_UMetaSoundBuilderDocument_Statics::NewProp_MetaSoundUClass = { "MetaSoundUClass", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::Class | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMetaSoundBuilderDocument, MetaSoundUClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMetaSoundBuilderDocument_Statics::NewProp_MetaSoundUClass_MetaData), Z_Construct_UClass_UMetaSoundBuilderDocument_Statics::NewProp_MetaSoundUClass_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMetaSoundBuilderDocument_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMetaSoundBuilderDocument_Statics::NewProp_Document,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMetaSoundBuilderDocument_Statics::NewProp_MetaSoundUClass,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UMetaSoundBuilderDocument_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UMetaSoundDocumentInterface_NoRegister, (int32)VTABLE_OFFSET(UMetaSoundBuilderDocument, IMetaSoundDocumentInterface), false },  // 384454978
		};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMetaSoundBuilderDocument_Statics::InterfaceParams) < 64);
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMetaSoundBuilderDocument_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMetaSoundBuilderDocument>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMetaSoundBuilderDocument_Statics::ClassParams = {
		&UMetaSoundBuilderDocument::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMetaSoundBuilderDocument_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMetaSoundBuilderDocument_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMetaSoundBuilderDocument_Statics::Class_MetaDataParams), Z_Construct_UClass_UMetaSoundBuilderDocument_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMetaSoundBuilderDocument_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UMetaSoundBuilderDocument()
	{
		if (!Z_Registration_Info_UClass_UMetaSoundBuilderDocument.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMetaSoundBuilderDocument.OuterSingleton, Z_Construct_UClass_UMetaSoundBuilderDocument_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMetaSoundBuilderDocument.OuterSingleton;
	}
	template<> METASOUNDFRONTEND_API UClass* StaticClass<UMetaSoundBuilderDocument>()
	{
		return UMetaSoundBuilderDocument::StaticClass();
	}
	UMetaSoundBuilderDocument::UMetaSoundBuilderDocument(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMetaSoundBuilderDocument);
	UMetaSoundBuilderDocument::~UMetaSoundBuilderDocument() {}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MetaSoundFrontendDocumentBuilder;
class UScriptStruct* FMetaSoundFrontendDocumentBuilder::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MetaSoundFrontendDocumentBuilder.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MetaSoundFrontendDocumentBuilder.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMetaSoundFrontendDocumentBuilder, (UObject*)Z_Construct_UPackage__Script_MetasoundFrontend(), TEXT("MetaSoundFrontendDocumentBuilder"));
	}
	return Z_Registration_Info_UScriptStruct_MetaSoundFrontendDocumentBuilder.OuterSingleton;
}
template<> METASOUNDFRONTEND_API UScriptStruct* StaticStruct<FMetaSoundFrontendDocumentBuilder>()
{
	return FMetaSoundFrontendDocumentBuilder::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMetaSoundFrontendDocumentBuilder_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DocumentInterface_MetaData[];
#endif
		static const UECodeGen_Private::FInterfacePropertyParams NewProp_DocumentInterface;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMetaSoundFrontendDocumentBuilder_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// Builder used to support dynamically generating MetaSound documents at runtime. Builder contains caches that speed up\n// common search and modification operations on a given document, which may result in slower performance on construction,\n// but faster manipulation of its managed document.  The builder's managed copy of a document is expected to not be modified\n// by any external system to avoid cache becoming stale.\n" },
		{ "ModuleRelativePath", "Public/MetasoundFrontendDocumentBuilder.h" },
		{ "ToolTip", "Builder used to support dynamically generating MetaSound documents at runtime. Builder contains caches that speed up\ncommon search and modification operations on a given document, which may result in slower performance on construction,\nbut faster manipulation of its managed document.  The builder's managed copy of a document is expected to not be modified\nby any external system to avoid cache becoming stale." },
	};
#endif
	void* Z_Construct_UScriptStruct_FMetaSoundFrontendDocumentBuilder_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMetaSoundFrontendDocumentBuilder>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMetaSoundFrontendDocumentBuilder_Statics::NewProp_DocumentInterface_MetaData[] = {
		{ "ModuleRelativePath", "Public/MetasoundFrontendDocumentBuilder.h" },
	};
#endif
	const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UScriptStruct_FMetaSoundFrontendDocumentBuilder_Statics::NewProp_DocumentInterface = { "DocumentInterface", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMetaSoundFrontendDocumentBuilder, DocumentInterface), Z_Construct_UClass_UMetaSoundDocumentInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMetaSoundFrontendDocumentBuilder_Statics::NewProp_DocumentInterface_MetaData), Z_Construct_UScriptStruct_FMetaSoundFrontendDocumentBuilder_Statics::NewProp_DocumentInterface_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMetaSoundFrontendDocumentBuilder_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMetaSoundFrontendDocumentBuilder_Statics::NewProp_DocumentInterface,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMetaSoundFrontendDocumentBuilder_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MetasoundFrontend,
		nullptr,
		&NewStructOps,
		"MetaSoundFrontendDocumentBuilder",
		Z_Construct_UScriptStruct_FMetaSoundFrontendDocumentBuilder_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMetaSoundFrontendDocumentBuilder_Statics::PropPointers),
		sizeof(FMetaSoundFrontendDocumentBuilder),
		alignof(FMetaSoundFrontendDocumentBuilder),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMetaSoundFrontendDocumentBuilder_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMetaSoundFrontendDocumentBuilder_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMetaSoundFrontendDocumentBuilder_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FMetaSoundFrontendDocumentBuilder()
	{
		if (!Z_Registration_Info_UScriptStruct_MetaSoundFrontendDocumentBuilder.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MetaSoundFrontendDocumentBuilder.InnerSingleton, Z_Construct_UScriptStruct_FMetaSoundFrontendDocumentBuilder_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MetaSoundFrontendDocumentBuilder.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundFrontend_Public_MetasoundFrontendDocumentBuilder_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundFrontend_Public_MetasoundFrontendDocumentBuilder_h_Statics::ScriptStructInfo[] = {
		{ FMetaSoundFrontendDocumentBuilder::StaticStruct, Z_Construct_UScriptStruct_FMetaSoundFrontendDocumentBuilder_Statics::NewStructOps, TEXT("MetaSoundFrontendDocumentBuilder"), &Z_Registration_Info_UScriptStruct_MetaSoundFrontendDocumentBuilder, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMetaSoundFrontendDocumentBuilder), 3797730004U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundFrontend_Public_MetasoundFrontendDocumentBuilder_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMetaSoundBuilderDocument, UMetaSoundBuilderDocument::StaticClass, TEXT("UMetaSoundBuilderDocument"), &Z_Registration_Info_UClass_UMetaSoundBuilderDocument, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMetaSoundBuilderDocument), 1341066494U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundFrontend_Public_MetasoundFrontendDocumentBuilder_h_2004486147(TEXT("/Script/MetasoundFrontend"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundFrontend_Public_MetasoundFrontendDocumentBuilder_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundFrontend_Public_MetasoundFrontendDocumentBuilder_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundFrontend_Public_MetasoundFrontendDocumentBuilder_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundFrontend_Public_MetasoundFrontendDocumentBuilder_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
