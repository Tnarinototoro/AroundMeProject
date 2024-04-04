// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Sequencer/ControlRigSequenceObjectReference.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeControlRigSequenceObjectReference() {}
// Cross Module References
	CONTROLRIG_API UClass* Z_Construct_UClass_UControlRig_NoRegister();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FControlRigSequenceObjectReference();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FControlRigSequenceObjectReferenceMap();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FControlRigSequenceObjectReferences();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	UPackage* Z_Construct_UPackage__Script_ControlRig();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ControlRigSequenceObjectReference;
class UScriptStruct* FControlRigSequenceObjectReference::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ControlRigSequenceObjectReference.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ControlRigSequenceObjectReference.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FControlRigSequenceObjectReference, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("ControlRigSequenceObjectReference"));
	}
	return Z_Registration_Info_UScriptStruct_ControlRigSequenceObjectReference.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FControlRigSequenceObjectReference>()
{
	return FControlRigSequenceObjectReference::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FControlRigSequenceObjectReference_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ControlRigClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_ControlRigClass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FControlRigSequenceObjectReference_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * An external reference to an level sequence object, resolvable through an arbitrary context.\n */" },
		{ "ModuleRelativePath", "Public/Sequencer/ControlRigSequenceObjectReference.h" },
		{ "ToolTip", "An external reference to an level sequence object, resolvable through an arbitrary context." },
	};
#endif
	void* Z_Construct_UScriptStruct_FControlRigSequenceObjectReference_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FControlRigSequenceObjectReference>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FControlRigSequenceObjectReference_Statics::NewProp_ControlRigClass_MetaData[] = {
		{ "Comment", "/** The type of this animation ControlRig */" },
		{ "ModuleRelativePath", "Public/Sequencer/ControlRigSequenceObjectReference.h" },
		{ "ToolTip", "The type of this animation ControlRig" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FControlRigSequenceObjectReference_Statics::NewProp_ControlRigClass = { "ControlRigClass", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FControlRigSequenceObjectReference, ControlRigClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UControlRig_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FControlRigSequenceObjectReference_Statics::NewProp_ControlRigClass_MetaData), Z_Construct_UScriptStruct_FControlRigSequenceObjectReference_Statics::NewProp_ControlRigClass_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FControlRigSequenceObjectReference_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FControlRigSequenceObjectReference_Statics::NewProp_ControlRigClass,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FControlRigSequenceObjectReference_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		nullptr,
		&NewStructOps,
		"ControlRigSequenceObjectReference",
		Z_Construct_UScriptStruct_FControlRigSequenceObjectReference_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FControlRigSequenceObjectReference_Statics::PropPointers),
		sizeof(FControlRigSequenceObjectReference),
		alignof(FControlRigSequenceObjectReference),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FControlRigSequenceObjectReference_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FControlRigSequenceObjectReference_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FControlRigSequenceObjectReference_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FControlRigSequenceObjectReference()
	{
		if (!Z_Registration_Info_UScriptStruct_ControlRigSequenceObjectReference.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ControlRigSequenceObjectReference.InnerSingleton, Z_Construct_UScriptStruct_FControlRigSequenceObjectReference_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ControlRigSequenceObjectReference.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ControlRigSequenceObjectReferences;
class UScriptStruct* FControlRigSequenceObjectReferences::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ControlRigSequenceObjectReferences.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ControlRigSequenceObjectReferences.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FControlRigSequenceObjectReferences, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("ControlRigSequenceObjectReferences"));
	}
	return Z_Registration_Info_UScriptStruct_ControlRigSequenceObjectReferences.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FControlRigSequenceObjectReferences>()
{
	return FControlRigSequenceObjectReferences::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FControlRigSequenceObjectReferences_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_Array_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Array_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Array;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FControlRigSequenceObjectReferences_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Sequencer/ControlRigSequenceObjectReference.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FControlRigSequenceObjectReferences_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FControlRigSequenceObjectReferences>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FControlRigSequenceObjectReferences_Statics::NewProp_Array_Inner = { "Array", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FControlRigSequenceObjectReference, METADATA_PARAMS(0, nullptr) }; // 2630171004
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FControlRigSequenceObjectReferences_Statics::NewProp_Array_MetaData[] = {
		{ "ModuleRelativePath", "Public/Sequencer/ControlRigSequenceObjectReference.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FControlRigSequenceObjectReferences_Statics::NewProp_Array = { "Array", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FControlRigSequenceObjectReferences, Array), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FControlRigSequenceObjectReferences_Statics::NewProp_Array_MetaData), Z_Construct_UScriptStruct_FControlRigSequenceObjectReferences_Statics::NewProp_Array_MetaData) }; // 2630171004
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FControlRigSequenceObjectReferences_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FControlRigSequenceObjectReferences_Statics::NewProp_Array_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FControlRigSequenceObjectReferences_Statics::NewProp_Array,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FControlRigSequenceObjectReferences_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		nullptr,
		&NewStructOps,
		"ControlRigSequenceObjectReferences",
		Z_Construct_UScriptStruct_FControlRigSequenceObjectReferences_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FControlRigSequenceObjectReferences_Statics::PropPointers),
		sizeof(FControlRigSequenceObjectReferences),
		alignof(FControlRigSequenceObjectReferences),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FControlRigSequenceObjectReferences_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FControlRigSequenceObjectReferences_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FControlRigSequenceObjectReferences_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FControlRigSequenceObjectReferences()
	{
		if (!Z_Registration_Info_UScriptStruct_ControlRigSequenceObjectReferences.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ControlRigSequenceObjectReferences.InnerSingleton, Z_Construct_UScriptStruct_FControlRigSequenceObjectReferences_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ControlRigSequenceObjectReferences.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ControlRigSequenceObjectReferenceMap;
class UScriptStruct* FControlRigSequenceObjectReferenceMap::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ControlRigSequenceObjectReferenceMap.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ControlRigSequenceObjectReferenceMap.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FControlRigSequenceObjectReferenceMap, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("ControlRigSequenceObjectReferenceMap"));
	}
	return Z_Registration_Info_UScriptStruct_ControlRigSequenceObjectReferenceMap.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FControlRigSequenceObjectReferenceMap>()
{
	return FControlRigSequenceObjectReferenceMap::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FControlRigSequenceObjectReferenceMap_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_BindingIds_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BindingIds_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_BindingIds;
		static const UECodeGen_Private::FStructPropertyParams NewProp_References_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_References_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_References;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FControlRigSequenceObjectReferenceMap_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Sequencer/ControlRigSequenceObjectReference.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FControlRigSequenceObjectReferenceMap_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FControlRigSequenceObjectReferenceMap>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FControlRigSequenceObjectReferenceMap_Statics::NewProp_BindingIds_Inner = { "BindingIds", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FControlRigSequenceObjectReferenceMap_Statics::NewProp_BindingIds_MetaData[] = {
		{ "ModuleRelativePath", "Public/Sequencer/ControlRigSequenceObjectReference.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FControlRigSequenceObjectReferenceMap_Statics::NewProp_BindingIds = { "BindingIds", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FControlRigSequenceObjectReferenceMap, BindingIds), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FControlRigSequenceObjectReferenceMap_Statics::NewProp_BindingIds_MetaData), Z_Construct_UScriptStruct_FControlRigSequenceObjectReferenceMap_Statics::NewProp_BindingIds_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FControlRigSequenceObjectReferenceMap_Statics::NewProp_References_Inner = { "References", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FControlRigSequenceObjectReferences, METADATA_PARAMS(0, nullptr) }; // 3432767342
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FControlRigSequenceObjectReferenceMap_Statics::NewProp_References_MetaData[] = {
		{ "ModuleRelativePath", "Public/Sequencer/ControlRigSequenceObjectReference.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FControlRigSequenceObjectReferenceMap_Statics::NewProp_References = { "References", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FControlRigSequenceObjectReferenceMap, References), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FControlRigSequenceObjectReferenceMap_Statics::NewProp_References_MetaData), Z_Construct_UScriptStruct_FControlRigSequenceObjectReferenceMap_Statics::NewProp_References_MetaData) }; // 3432767342
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FControlRigSequenceObjectReferenceMap_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FControlRigSequenceObjectReferenceMap_Statics::NewProp_BindingIds_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FControlRigSequenceObjectReferenceMap_Statics::NewProp_BindingIds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FControlRigSequenceObjectReferenceMap_Statics::NewProp_References_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FControlRigSequenceObjectReferenceMap_Statics::NewProp_References,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FControlRigSequenceObjectReferenceMap_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		nullptr,
		&NewStructOps,
		"ControlRigSequenceObjectReferenceMap",
		Z_Construct_UScriptStruct_FControlRigSequenceObjectReferenceMap_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FControlRigSequenceObjectReferenceMap_Statics::PropPointers),
		sizeof(FControlRigSequenceObjectReferenceMap),
		alignof(FControlRigSequenceObjectReferenceMap),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FControlRigSequenceObjectReferenceMap_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FControlRigSequenceObjectReferenceMap_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FControlRigSequenceObjectReferenceMap_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FControlRigSequenceObjectReferenceMap()
	{
		if (!Z_Registration_Info_UScriptStruct_ControlRigSequenceObjectReferenceMap.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ControlRigSequenceObjectReferenceMap.InnerSingleton, Z_Construct_UScriptStruct_FControlRigSequenceObjectReferenceMap_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ControlRigSequenceObjectReferenceMap.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Sequencer_ControlRigSequenceObjectReference_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Sequencer_ControlRigSequenceObjectReference_h_Statics::ScriptStructInfo[] = {
		{ FControlRigSequenceObjectReference::StaticStruct, Z_Construct_UScriptStruct_FControlRigSequenceObjectReference_Statics::NewStructOps, TEXT("ControlRigSequenceObjectReference"), &Z_Registration_Info_UScriptStruct_ControlRigSequenceObjectReference, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FControlRigSequenceObjectReference), 2630171004U) },
		{ FControlRigSequenceObjectReferences::StaticStruct, Z_Construct_UScriptStruct_FControlRigSequenceObjectReferences_Statics::NewStructOps, TEXT("ControlRigSequenceObjectReferences"), &Z_Registration_Info_UScriptStruct_ControlRigSequenceObjectReferences, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FControlRigSequenceObjectReferences), 3432767342U) },
		{ FControlRigSequenceObjectReferenceMap::StaticStruct, Z_Construct_UScriptStruct_FControlRigSequenceObjectReferenceMap_Statics::NewStructOps, TEXT("ControlRigSequenceObjectReferenceMap"), &Z_Registration_Info_UScriptStruct_ControlRigSequenceObjectReferenceMap, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FControlRigSequenceObjectReferenceMap), 3655278919U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Sequencer_ControlRigSequenceObjectReference_h_2496416608(TEXT("/Script/ControlRig"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Sequencer_ControlRigSequenceObjectReference_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Sequencer_ControlRigSequenceObjectReference_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
