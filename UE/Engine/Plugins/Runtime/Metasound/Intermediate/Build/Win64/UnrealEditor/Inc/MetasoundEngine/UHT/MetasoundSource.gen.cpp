// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MetasoundSource.h"
#include "MetasoundFrontendDocument.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMetasoundSource() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
	ENGINE_API UClass* Z_Construct_UClass_USoundWaveProcedural();
	METASOUNDENGINE_API UClass* Z_Construct_UClass_UMetasoundEditorGraphBase_NoRegister();
	METASOUNDENGINE_API UClass* Z_Construct_UClass_UMetaSoundSource();
	METASOUNDENGINE_API UClass* Z_Construct_UClass_UMetaSoundSource_NoRegister();
	METASOUNDENGINE_API UEnum* Z_Construct_UEnum_MetasoundEngine_EMetaSoundOutputAudioFormat();
	METASOUNDFRONTEND_API UClass* Z_Construct_UClass_UMetaSoundDocumentInterface_NoRegister();
	METASOUNDFRONTEND_API UScriptStruct* Z_Construct_UScriptStruct_FMetasoundFrontendDocument();
	UPackage* Z_Construct_UPackage__Script_MetasoundEngine();
// End Cross Module References
	void UMetaSoundSource::StaticRegisterNativesUMetaSoundSource()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMetaSoundSource);
	UClass* Z_Construct_UClass_UMetaSoundSource_NoRegister()
	{
		return UMetaSoundSource::StaticClass();
	}
	struct Z_Construct_UClass_UMetaSoundSource_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RootMetasoundDocument_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RootMetasoundDocument;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReferencedAssetClassKeys_ElementProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReferencedAssetClassKeys_MetaData[];
#endif
		static const UECodeGen_Private::FSetPropertyParams NewProp_ReferencedAssetClassKeys;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ReferencedAssetClassObjects_ElementProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReferencedAssetClassObjects_MetaData[];
#endif
		static const UECodeGen_Private::FSetPropertyParams NewProp_ReferencedAssetClassObjects;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReferenceAssetClassCache_ElementProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReferenceAssetClassCache_MetaData[];
#endif
		static const UECodeGen_Private::FSetPropertyParams NewProp_ReferenceAssetClassCache;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Graph_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Graph;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FBytePropertyParams NewProp_OutputFormat_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OutputFormat_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_OutputFormat;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AssetClassID_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AssetClassID;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RegistryInputTypes_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_RegistryInputTypes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RegistryOutputTypes_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_RegistryOutputTypes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RegistryVersionMajor_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_RegistryVersionMajor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RegistryVersionMinor_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_RegistryVersionMinor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsPreset_MetaData[];
#endif
		static void NewProp_bIsPreset_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsPreset;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMetaSoundSource_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USoundWaveProcedural,
		(UObject* (*)())Z_Construct_UPackage__Script_MetasoundEngine,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMetaSoundSource_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMetaSoundSource_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * This Metasound type can be played as an audio source.\n */" },
		{ "HideCategories", "object Object Object" },
		{ "IncludePath", "MetasoundSource.h" },
		{ "ModuleRelativePath", "Public/MetasoundSource.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "This Metasound type can be played as an audio source." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMetaSoundSource_Statics::NewProp_RootMetasoundDocument_MetaData[] = {
		{ "Category", "CustomView" },
		{ "ModuleRelativePath", "Public/MetasoundSource.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMetaSoundSource_Statics::NewProp_RootMetasoundDocument = { "RootMetasoundDocument", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMetaSoundSource, RootMetasoundDocument), Z_Construct_UScriptStruct_FMetasoundFrontendDocument, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMetaSoundSource_Statics::NewProp_RootMetasoundDocument_MetaData), Z_Construct_UClass_UMetaSoundSource_Statics::NewProp_RootMetasoundDocument_MetaData) }; // 2447661564
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMetaSoundSource_Statics::NewProp_ReferencedAssetClassKeys_ElementProp = { "ReferencedAssetClassKeys", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMetaSoundSource_Statics::NewProp_ReferencedAssetClassKeys_MetaData[] = {
		{ "ModuleRelativePath", "Public/MetasoundSource.h" },
	};
#endif
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_UMetaSoundSource_Statics::NewProp_ReferencedAssetClassKeys = { "ReferencedAssetClassKeys", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMetaSoundSource, ReferencedAssetClassKeys), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMetaSoundSource_Statics::NewProp_ReferencedAssetClassKeys_MetaData), Z_Construct_UClass_UMetaSoundSource_Statics::NewProp_ReferencedAssetClassKeys_MetaData) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMetaSoundSource_Statics::NewProp_ReferencedAssetClassObjects_ElementProp = { "ReferencedAssetClassObjects", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMetaSoundSource_Statics::NewProp_ReferencedAssetClassObjects_MetaData[] = {
		{ "ModuleRelativePath", "Public/MetasoundSource.h" },
	};
#endif
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_UMetaSoundSource_Statics::NewProp_ReferencedAssetClassObjects = { "ReferencedAssetClassObjects", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMetaSoundSource, ReferencedAssetClassObjects), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMetaSoundSource_Statics::NewProp_ReferencedAssetClassObjects_MetaData), Z_Construct_UClass_UMetaSoundSource_Statics::NewProp_ReferencedAssetClassObjects_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMetaSoundSource_Statics::NewProp_ReferenceAssetClassCache_ElementProp = { "ReferenceAssetClassCache", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMetaSoundSource_Statics::NewProp_ReferenceAssetClassCache_MetaData[] = {
		{ "ModuleRelativePath", "Public/MetasoundSource.h" },
	};
#endif
	static_assert(TModels_V<CGetTypeHashable, FSoftObjectPath>, "The structure 'FSoftObjectPath' is used in a TSet but does not have a GetValueTypeHash defined");
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_UMetaSoundSource_Statics::NewProp_ReferenceAssetClassCache = { "ReferenceAssetClassCache", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMetaSoundSource, ReferenceAssetClassCache), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMetaSoundSource_Statics::NewProp_ReferenceAssetClassCache_MetaData), Z_Construct_UClass_UMetaSoundSource_Statics::NewProp_ReferenceAssetClassCache_MetaData) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMetaSoundSource_Statics::NewProp_Graph_MetaData[] = {
		{ "ModuleRelativePath", "Public/MetasoundSource.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMetaSoundSource_Statics::NewProp_Graph = { "Graph", nullptr, (EPropertyFlags)0x0024080800000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMetaSoundSource, Graph), Z_Construct_UClass_UMetasoundEditorGraphBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMetaSoundSource_Statics::NewProp_Graph_MetaData), Z_Construct_UClass_UMetaSoundSource_Statics::NewProp_Graph_MetaData) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMetaSoundSource_Statics::NewProp_OutputFormat_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMetaSoundSource_Statics::NewProp_OutputFormat_MetaData[] = {
		{ "Category", "Metasound" },
		{ "Comment", "// The output audio format of the metasound source.\n" },
		{ "ModuleRelativePath", "Public/MetasoundSource.h" },
		{ "ToolTip", "The output audio format of the metasound source." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMetaSoundSource_Statics::NewProp_OutputFormat = { "OutputFormat", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMetaSoundSource, OutputFormat), Z_Construct_UEnum_MetasoundEngine_EMetaSoundOutputAudioFormat, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMetaSoundSource_Statics::NewProp_OutputFormat_MetaData), Z_Construct_UClass_UMetaSoundSource_Statics::NewProp_OutputFormat_MetaData) }; // 2487386805
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMetaSoundSource_Statics::NewProp_AssetClassID_MetaData[] = {
		{ "ModuleRelativePath", "Public/MetasoundSource.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMetaSoundSource_Statics::NewProp_AssetClassID = { "AssetClassID", nullptr, (EPropertyFlags)0x0010010000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMetaSoundSource, AssetClassID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMetaSoundSource_Statics::NewProp_AssetClassID_MetaData), Z_Construct_UClass_UMetaSoundSource_Statics::NewProp_AssetClassID_MetaData) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMetaSoundSource_Statics::NewProp_RegistryInputTypes_MetaData[] = {
		{ "ModuleRelativePath", "Public/MetasoundSource.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMetaSoundSource_Statics::NewProp_RegistryInputTypes = { "RegistryInputTypes", nullptr, (EPropertyFlags)0x0010010800000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMetaSoundSource, RegistryInputTypes), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMetaSoundSource_Statics::NewProp_RegistryInputTypes_MetaData), Z_Construct_UClass_UMetaSoundSource_Statics::NewProp_RegistryInputTypes_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMetaSoundSource_Statics::NewProp_RegistryOutputTypes_MetaData[] = {
		{ "ModuleRelativePath", "Public/MetasoundSource.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMetaSoundSource_Statics::NewProp_RegistryOutputTypes = { "RegistryOutputTypes", nullptr, (EPropertyFlags)0x0010010800000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMetaSoundSource, RegistryOutputTypes), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMetaSoundSource_Statics::NewProp_RegistryOutputTypes_MetaData), Z_Construct_UClass_UMetaSoundSource_Statics::NewProp_RegistryOutputTypes_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMetaSoundSource_Statics::NewProp_RegistryVersionMajor_MetaData[] = {
		{ "ModuleRelativePath", "Public/MetasoundSource.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMetaSoundSource_Statics::NewProp_RegistryVersionMajor = { "RegistryVersionMajor", nullptr, (EPropertyFlags)0x0010010800000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMetaSoundSource, RegistryVersionMajor), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMetaSoundSource_Statics::NewProp_RegistryVersionMajor_MetaData), Z_Construct_UClass_UMetaSoundSource_Statics::NewProp_RegistryVersionMajor_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMetaSoundSource_Statics::NewProp_RegistryVersionMinor_MetaData[] = {
		{ "ModuleRelativePath", "Public/MetasoundSource.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMetaSoundSource_Statics::NewProp_RegistryVersionMinor = { "RegistryVersionMinor", nullptr, (EPropertyFlags)0x0010010800000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMetaSoundSource, RegistryVersionMinor), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMetaSoundSource_Statics::NewProp_RegistryVersionMinor_MetaData), Z_Construct_UClass_UMetaSoundSource_Statics::NewProp_RegistryVersionMinor_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMetaSoundSource_Statics::NewProp_bIsPreset_MetaData[] = {
		{ "ModuleRelativePath", "Public/MetasoundSource.h" },
	};
#endif
	void Z_Construct_UClass_UMetaSoundSource_Statics::NewProp_bIsPreset_SetBit(void* Obj)
	{
		((UMetaSoundSource*)Obj)->bIsPreset = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMetaSoundSource_Statics::NewProp_bIsPreset = { "bIsPreset", nullptr, (EPropertyFlags)0x0010010800000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMetaSoundSource), &Z_Construct_UClass_UMetaSoundSource_Statics::NewProp_bIsPreset_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMetaSoundSource_Statics::NewProp_bIsPreset_MetaData), Z_Construct_UClass_UMetaSoundSource_Statics::NewProp_bIsPreset_MetaData) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMetaSoundSource_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMetaSoundSource_Statics::NewProp_RootMetasoundDocument,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMetaSoundSource_Statics::NewProp_ReferencedAssetClassKeys_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMetaSoundSource_Statics::NewProp_ReferencedAssetClassKeys,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMetaSoundSource_Statics::NewProp_ReferencedAssetClassObjects_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMetaSoundSource_Statics::NewProp_ReferencedAssetClassObjects,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMetaSoundSource_Statics::NewProp_ReferenceAssetClassCache_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMetaSoundSource_Statics::NewProp_ReferenceAssetClassCache,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMetaSoundSource_Statics::NewProp_Graph,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMetaSoundSource_Statics::NewProp_OutputFormat_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMetaSoundSource_Statics::NewProp_OutputFormat,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMetaSoundSource_Statics::NewProp_AssetClassID,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMetaSoundSource_Statics::NewProp_RegistryInputTypes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMetaSoundSource_Statics::NewProp_RegistryOutputTypes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMetaSoundSource_Statics::NewProp_RegistryVersionMajor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMetaSoundSource_Statics::NewProp_RegistryVersionMinor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMetaSoundSource_Statics::NewProp_bIsPreset,
#endif // WITH_EDITORONLY_DATA
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UMetaSoundSource_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UMetaSoundDocumentInterface_NoRegister, (int32)VTABLE_OFFSET(UMetaSoundSource, IMetaSoundDocumentInterface), false },  // 384454978
		};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMetaSoundSource_Statics::InterfaceParams) < 64);
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMetaSoundSource_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMetaSoundSource>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMetaSoundSource_Statics::ClassParams = {
		&UMetaSoundSource::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMetaSoundSource_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMetaSoundSource_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009010A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMetaSoundSource_Statics::Class_MetaDataParams), Z_Construct_UClass_UMetaSoundSource_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMetaSoundSource_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UMetaSoundSource()
	{
		if (!Z_Registration_Info_UClass_UMetaSoundSource.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMetaSoundSource.OuterSingleton, Z_Construct_UClass_UMetaSoundSource_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMetaSoundSource.OuterSingleton;
	}
	template<> METASOUNDENGINE_API UClass* StaticClass<UMetaSoundSource>()
	{
		return UMetaSoundSource::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMetaSoundSource);
	UMetaSoundSource::~UMetaSoundSource() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UMetaSoundSource)
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundSource_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundSource_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMetaSoundSource, UMetaSoundSource::StaticClass, TEXT("UMetaSoundSource"), &Z_Registration_Info_UClass_UMetaSoundSource, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMetaSoundSource), 831742045U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundSource_h_915711047(TEXT("/Script/MetasoundEngine"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundSource_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundSource_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
