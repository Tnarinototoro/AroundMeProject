// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PCGData.h"
#include "PCGPin.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePCGData() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	PCG_API UClass* Z_Construct_UClass_UPCGData();
	PCG_API UClass* Z_Construct_UClass_UPCGData_NoRegister();
	PCG_API UClass* Z_Construct_UClass_UPCGDataFunctionLibrary();
	PCG_API UClass* Z_Construct_UClass_UPCGDataFunctionLibrary_NoRegister();
	PCG_API UScriptStruct* Z_Construct_UScriptStruct_FPCGDataCollection();
	PCG_API UScriptStruct* Z_Construct_UScriptStruct_FPCGPinProperties();
	PCG_API UScriptStruct* Z_Construct_UScriptStruct_FPCGTaggedData();
	UPackage* Z_Construct_UPackage__Script_PCG();
// End Cross Module References
	void UPCGData::StaticRegisterNativesUPCGData()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPCGData);
	UClass* Z_Construct_UClass_UPCGData_NoRegister()
	{
		return UPCGData::StaticClass();
	}
	struct Z_Construct_UClass_UPCGData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UID_MetaData[];
#endif
		static const UECodeGen_Private::FUInt64PropertyParams NewProp_UID;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPCGData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_PCG,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGData_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Procedural" },
		{ "Comment", "/**\n* Base class for any \"data\" class in the PCG framework.\n* This is an intentionally vague base class so we can have the required\n* flexibility to pass in various concrete data types, settings, and more.\n*/" },
		{ "IncludePath", "PCGData.h" },
		{ "ModuleRelativePath", "Public/PCGData.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Base class for any \"data\" class in the PCG framework.\nThis is an intentionally vague base class so we can have the required\nflexibility to pass in various concrete data types, settings, and more." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGData_Statics::NewProp_UID_MetaData[] = {
		{ "Comment", "/** Unique ID for this object instance. */" },
		{ "ModuleRelativePath", "Public/PCGData.h" },
		{ "ToolTip", "Unique ID for this object instance." },
	};
#endif
	const UECodeGen_Private::FUInt64PropertyParams Z_Construct_UClass_UPCGData_Statics::NewProp_UID = { "UID", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::UInt64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGData, UID), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGData_Statics::NewProp_UID_MetaData), Z_Construct_UClass_UPCGData_Statics::NewProp_UID_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGData_Statics::NewProp_UID,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPCGData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGData>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGData_Statics::ClassParams = {
		&UPCGData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPCGData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPCGData_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGData_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGData_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGData_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UPCGData()
	{
		if (!Z_Registration_Info_UClass_UPCGData.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGData.OuterSingleton, Z_Construct_UClass_UPCGData_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPCGData.OuterSingleton;
	}
	template<> PCG_API UClass* StaticClass<UPCGData>()
	{
		return UPCGData::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPCGData);
	UPCGData::~UPCGData() {}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PCGTaggedData;
class UScriptStruct* FPCGTaggedData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PCGTaggedData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PCGTaggedData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPCGTaggedData, (UObject*)Z_Construct_UPackage__Script_PCG(), TEXT("PCGTaggedData"));
	}
	return Z_Registration_Info_UScriptStruct_PCGTaggedData.OuterSingleton;
}
template<> PCG_API UScriptStruct* StaticStruct<FPCGTaggedData>()
{
	return FPCGTaggedData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPCGTaggedData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Data;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Tags_ElementProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Tags_MetaData[];
#endif
		static const UECodeGen_Private::FSetPropertyParams NewProp_Tags;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Pin_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Pin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPinlessData_MetaData[];
#endif
		static void NewProp_bPinlessData_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPinlessData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPCGTaggedData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PCGData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPCGTaggedData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPCGTaggedData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPCGTaggedData_Statics::NewProp_Data_MetaData[] = {
		{ "Category", "Data" },
		{ "ModuleRelativePath", "Public/PCGData.h" },
		{ "NativeConstTemplateArg", "" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FPCGTaggedData_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGTaggedData, Data), Z_Construct_UClass_UPCGData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGTaggedData_Statics::NewProp_Data_MetaData), Z_Construct_UScriptStruct_FPCGTaggedData_Statics::NewProp_Data_MetaData) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPCGTaggedData_Statics::NewProp_Tags_ElementProp = { "Tags", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPCGTaggedData_Statics::NewProp_Tags_MetaData[] = {
		{ "Category", "Data" },
		{ "ModuleRelativePath", "Public/PCGData.h" },
	};
#endif
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UScriptStruct_FPCGTaggedData_Statics::NewProp_Tags = { "Tags", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGTaggedData, Tags), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGTaggedData_Statics::NewProp_Tags_MetaData), Z_Construct_UScriptStruct_FPCGTaggedData_Statics::NewProp_Tags_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPCGTaggedData_Statics::NewProp_Pin_MetaData[] = {
		{ "Category", "Data" },
		{ "ModuleRelativePath", "Public/PCGData.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FPCGTaggedData_Statics::NewProp_Pin = { "Pin", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGTaggedData, Pin), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGTaggedData_Statics::NewProp_Pin_MetaData), Z_Construct_UScriptStruct_FPCGTaggedData_Statics::NewProp_Pin_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPCGTaggedData_Statics::NewProp_bPinlessData_MetaData[] = {
		{ "Comment", "// Special flag for data that are forwarded to other nodes, but without a pin. Useful for internal data.\n" },
		{ "ModuleRelativePath", "Public/PCGData.h" },
		{ "ToolTip", "Special flag for data that are forwarded to other nodes, but without a pin. Useful for internal data." },
	};
#endif
	void Z_Construct_UScriptStruct_FPCGTaggedData_Statics::NewProp_bPinlessData_SetBit(void* Obj)
	{
		((FPCGTaggedData*)Obj)->bPinlessData = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGTaggedData_Statics::NewProp_bPinlessData = { "bPinlessData", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPCGTaggedData), &Z_Construct_UScriptStruct_FPCGTaggedData_Statics::NewProp_bPinlessData_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGTaggedData_Statics::NewProp_bPinlessData_MetaData), Z_Construct_UScriptStruct_FPCGTaggedData_Statics::NewProp_bPinlessData_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPCGTaggedData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGTaggedData_Statics::NewProp_Data,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGTaggedData_Statics::NewProp_Tags_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGTaggedData_Statics::NewProp_Tags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGTaggedData_Statics::NewProp_Pin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGTaggedData_Statics::NewProp_bPinlessData,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPCGTaggedData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PCG,
		nullptr,
		&NewStructOps,
		"PCGTaggedData",
		Z_Construct_UScriptStruct_FPCGTaggedData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGTaggedData_Statics::PropPointers),
		sizeof(FPCGTaggedData),
		alignof(FPCGTaggedData),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGTaggedData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPCGTaggedData_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGTaggedData_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FPCGTaggedData()
	{
		if (!Z_Registration_Info_UScriptStruct_PCGTaggedData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PCGTaggedData.InnerSingleton, Z_Construct_UScriptStruct_FPCGTaggedData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PCGTaggedData.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PCGDataCollection;
class UScriptStruct* FPCGDataCollection::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PCGDataCollection.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PCGDataCollection.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPCGDataCollection, (UObject*)Z_Construct_UPackage__Script_PCG(), TEXT("PCGDataCollection"));
	}
	return Z_Registration_Info_UScriptStruct_PCGDataCollection.OuterSingleton;
}
template<> PCG_API UScriptStruct* StaticStruct<FPCGDataCollection>()
{
	return FPCGDataCollection::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPCGDataCollection_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_TaggedData_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TaggedData_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TaggedData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCancelExecutionOnEmpty_MetaData[];
#endif
		static void NewProp_bCancelExecutionOnEmpty_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCancelExecutionOnEmpty;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPCGDataCollection_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PCGData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPCGDataCollection_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPCGDataCollection>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPCGDataCollection_Statics::NewProp_TaggedData_Inner = { "TaggedData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FPCGTaggedData, METADATA_PARAMS(0, nullptr) }; // 3988270987
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPCGDataCollection_Statics::NewProp_TaggedData_MetaData[] = {
		{ "Category", "Data" },
		{ "ModuleRelativePath", "Public/PCGData.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPCGDataCollection_Statics::NewProp_TaggedData = { "TaggedData", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGDataCollection, TaggedData), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGDataCollection_Statics::NewProp_TaggedData_MetaData), Z_Construct_UScriptStruct_FPCGDataCollection_Statics::NewProp_TaggedData_MetaData) }; // 3988270987
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPCGDataCollection_Statics::NewProp_bCancelExecutionOnEmpty_MetaData[] = {
		{ "Category", "Data" },
		{ "ModuleRelativePath", "Public/PCGData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FPCGDataCollection_Statics::NewProp_bCancelExecutionOnEmpty_SetBit(void* Obj)
	{
		((FPCGDataCollection*)Obj)->bCancelExecutionOnEmpty = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGDataCollection_Statics::NewProp_bCancelExecutionOnEmpty = { "bCancelExecutionOnEmpty", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPCGDataCollection), &Z_Construct_UScriptStruct_FPCGDataCollection_Statics::NewProp_bCancelExecutionOnEmpty_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGDataCollection_Statics::NewProp_bCancelExecutionOnEmpty_MetaData), Z_Construct_UScriptStruct_FPCGDataCollection_Statics::NewProp_bCancelExecutionOnEmpty_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPCGDataCollection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGDataCollection_Statics::NewProp_TaggedData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGDataCollection_Statics::NewProp_TaggedData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGDataCollection_Statics::NewProp_bCancelExecutionOnEmpty,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPCGDataCollection_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PCG,
		nullptr,
		&NewStructOps,
		"PCGDataCollection",
		Z_Construct_UScriptStruct_FPCGDataCollection_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGDataCollection_Statics::PropPointers),
		sizeof(FPCGDataCollection),
		alignof(FPCGDataCollection),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGDataCollection_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPCGDataCollection_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGDataCollection_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FPCGDataCollection()
	{
		if (!Z_Registration_Info_UScriptStruct_PCGDataCollection.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PCGDataCollection.InnerSingleton, Z_Construct_UScriptStruct_FPCGDataCollection_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PCGDataCollection.InnerSingleton;
	}
	DEFINE_FUNCTION(UPCGDataFunctionLibrary::execGetAllSettings)
	{
		P_GET_STRUCT_REF(FPCGDataCollection,Z_Param_Out_InCollection);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FPCGTaggedData>*)Z_Param__Result=UPCGDataFunctionLibrary::GetAllSettings(Z_Param_Out_InCollection);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPCGDataFunctionLibrary::execGetParamsByTag)
	{
		P_GET_STRUCT_REF(FPCGDataCollection,Z_Param_Out_InCollection);
		P_GET_PROPERTY(FStrProperty,Z_Param_InTag);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FPCGTaggedData>*)Z_Param__Result=UPCGDataFunctionLibrary::GetParamsByTag(Z_Param_Out_InCollection,Z_Param_InTag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPCGDataFunctionLibrary::execGetParamsByPinLabel)
	{
		P_GET_STRUCT_REF(FPCGDataCollection,Z_Param_Out_InCollection);
		P_GET_PROPERTY(FNameProperty,Z_Param_InPinLabel);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FPCGTaggedData>*)Z_Param__Result=UPCGDataFunctionLibrary::GetParamsByPinLabel(Z_Param_Out_InCollection,Z_Param_InPinLabel);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPCGDataFunctionLibrary::execGetParams)
	{
		P_GET_STRUCT_REF(FPCGDataCollection,Z_Param_Out_InCollection);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FPCGTaggedData>*)Z_Param__Result=UPCGDataFunctionLibrary::GetParams(Z_Param_Out_InCollection);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPCGDataFunctionLibrary::execGetInputsByTag)
	{
		P_GET_STRUCT_REF(FPCGDataCollection,Z_Param_Out_InCollection);
		P_GET_PROPERTY(FStrProperty,Z_Param_InTag);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FPCGTaggedData>*)Z_Param__Result=UPCGDataFunctionLibrary::GetInputsByTag(Z_Param_Out_InCollection,Z_Param_InTag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPCGDataFunctionLibrary::execGetInputsByPinLabel)
	{
		P_GET_STRUCT_REF(FPCGDataCollection,Z_Param_Out_InCollection);
		P_GET_PROPERTY(FNameProperty,Z_Param_InPinLabel);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FPCGTaggedData>*)Z_Param__Result=UPCGDataFunctionLibrary::GetInputsByPinLabel(Z_Param_Out_InCollection,Z_Param_InPinLabel);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPCGDataFunctionLibrary::execGetInputs)
	{
		P_GET_STRUCT_REF(FPCGDataCollection,Z_Param_Out_InCollection);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FPCGTaggedData>*)Z_Param__Result=UPCGDataFunctionLibrary::GetInputs(Z_Param_Out_InCollection);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPCGDataFunctionLibrary::execAddToCollection)
	{
		P_GET_STRUCT_REF(FPCGDataCollection,Z_Param_Out_InCollection);
		P_GET_OBJECT(UPCGData,Z_Param_InData);
		P_GET_PROPERTY(FNameProperty,Z_Param_InPinLabel);
		P_GET_TARRAY(FString,Z_Param_InTags);
		P_FINISH;
		P_NATIVE_BEGIN;
		UPCGDataFunctionLibrary::AddToCollection(Z_Param_Out_InCollection,Z_Param_InData,Z_Param_InPinLabel,Z_Param_InTags);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPCGDataFunctionLibrary::execGetTypedInputsByTag)
	{
		P_GET_STRUCT_REF(FPCGDataCollection,Z_Param_Out_InCollection);
		P_GET_PROPERTY(FStrProperty,Z_Param_InTag);
		P_GET_TARRAY_REF(FPCGTaggedData,Z_Param_Out_OutTaggedData);
		P_GET_OBJECT(UClass,Z_Param_InDataTypeClass);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UPCGData*>*)Z_Param__Result=UPCGDataFunctionLibrary::GetTypedInputsByTag(Z_Param_Out_InCollection,Z_Param_InTag,Z_Param_Out_OutTaggedData,Z_Param_InDataTypeClass);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPCGDataFunctionLibrary::execGetTypedInputsByPinLabel)
	{
		P_GET_STRUCT_REF(FPCGDataCollection,Z_Param_Out_InCollection);
		P_GET_PROPERTY(FNameProperty,Z_Param_InPinLabel);
		P_GET_TARRAY_REF(FPCGTaggedData,Z_Param_Out_OutTaggedData);
		P_GET_OBJECT(UClass,Z_Param_InDataTypeClass);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UPCGData*>*)Z_Param__Result=UPCGDataFunctionLibrary::GetTypedInputsByPinLabel(Z_Param_Out_InCollection,Z_Param_InPinLabel,Z_Param_Out_OutTaggedData,Z_Param_InDataTypeClass);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPCGDataFunctionLibrary::execGetTypedInputsByPin)
	{
		P_GET_STRUCT_REF(FPCGDataCollection,Z_Param_Out_InCollection);
		P_GET_STRUCT_REF(FPCGPinProperties,Z_Param_Out_InPin);
		P_GET_TARRAY_REF(FPCGTaggedData,Z_Param_Out_OutTaggedData);
		P_GET_OBJECT(UClass,Z_Param_InDataTypeClass);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UPCGData*>*)Z_Param__Result=UPCGDataFunctionLibrary::GetTypedInputsByPin(Z_Param_Out_InCollection,Z_Param_Out_InPin,Z_Param_Out_OutTaggedData,Z_Param_InDataTypeClass);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPCGDataFunctionLibrary::execGetTypedInputs)
	{
		P_GET_STRUCT_REF(FPCGDataCollection,Z_Param_Out_InCollection);
		P_GET_TARRAY_REF(FPCGTaggedData,Z_Param_Out_OutTaggedData);
		P_GET_OBJECT(UClass,Z_Param_InDataTypeClass);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UPCGData*>*)Z_Param__Result=UPCGDataFunctionLibrary::GetTypedInputs(Z_Param_Out_InCollection,Z_Param_Out_OutTaggedData,Z_Param_InDataTypeClass);
		P_NATIVE_END;
	}
	void UPCGDataFunctionLibrary::StaticRegisterNativesUPCGDataFunctionLibrary()
	{
		UClass* Class = UPCGDataFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddToCollection", &UPCGDataFunctionLibrary::execAddToCollection },
			{ "GetAllSettings", &UPCGDataFunctionLibrary::execGetAllSettings },
			{ "GetInputs", &UPCGDataFunctionLibrary::execGetInputs },
			{ "GetInputsByPinLabel", &UPCGDataFunctionLibrary::execGetInputsByPinLabel },
			{ "GetInputsByTag", &UPCGDataFunctionLibrary::execGetInputsByTag },
			{ "GetParams", &UPCGDataFunctionLibrary::execGetParams },
			{ "GetParamsByPinLabel", &UPCGDataFunctionLibrary::execGetParamsByPinLabel },
			{ "GetParamsByTag", &UPCGDataFunctionLibrary::execGetParamsByTag },
			{ "GetTypedInputs", &UPCGDataFunctionLibrary::execGetTypedInputs },
			{ "GetTypedInputsByPin", &UPCGDataFunctionLibrary::execGetTypedInputsByPin },
			{ "GetTypedInputsByPinLabel", &UPCGDataFunctionLibrary::execGetTypedInputsByPinLabel },
			{ "GetTypedInputsByTag", &UPCGDataFunctionLibrary::execGetTypedInputsByTag },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPCGDataFunctionLibrary_AddToCollection_Statics
	{
		struct PCGDataFunctionLibrary_eventAddToCollection_Parms
		{
			FPCGDataCollection InCollection;
			const UPCGData* InData;
			FName InPinLabel;
			TArray<FString> InTags;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InCollection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InData_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InData;
		static const UECodeGen_Private::FNamePropertyParams NewProp_InPinLabel;
		static const UECodeGen_Private::FStrPropertyParams NewProp_InTags_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InTags;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPCGDataFunctionLibrary_AddToCollection_Statics::NewProp_InCollection = { "InCollection", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGDataFunctionLibrary_eventAddToCollection_Parms, InCollection), Z_Construct_UScriptStruct_FPCGDataCollection, METADATA_PARAMS(0, nullptr) }; // 3944208025
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGDataFunctionLibrary_AddToCollection_Statics::NewProp_InData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPCGDataFunctionLibrary_AddToCollection_Statics::NewProp_InData = { "InData", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGDataFunctionLibrary_eventAddToCollection_Parms, InData), Z_Construct_UClass_UPCGData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGDataFunctionLibrary_AddToCollection_Statics::NewProp_InData_MetaData), Z_Construct_UFunction_UPCGDataFunctionLibrary_AddToCollection_Statics::NewProp_InData_MetaData) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPCGDataFunctionLibrary_AddToCollection_Statics::NewProp_InPinLabel = { "InPinLabel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGDataFunctionLibrary_eventAddToCollection_Parms, InPinLabel), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPCGDataFunctionLibrary_AddToCollection_Statics::NewProp_InTags_Inner = { "InTags", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UPCGDataFunctionLibrary_AddToCollection_Statics::NewProp_InTags = { "InTags", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGDataFunctionLibrary_eventAddToCollection_Parms, InTags), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGDataFunctionLibrary_AddToCollection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGDataFunctionLibrary_AddToCollection_Statics::NewProp_InCollection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGDataFunctionLibrary_AddToCollection_Statics::NewProp_InData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGDataFunctionLibrary_AddToCollection_Statics::NewProp_InPinLabel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGDataFunctionLibrary_AddToCollection_Statics::NewProp_InTags_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGDataFunctionLibrary_AddToCollection_Statics::NewProp_InTags,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGDataFunctionLibrary_AddToCollection_Statics::Function_MetaDataParams[] = {
		{ "Category", "Data" },
		{ "Comment", "/** Adds a data object to a given collection, simpler usage than making a PCGTaggedData object */" },
		{ "ModuleRelativePath", "Public/PCGData.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Adds a data object to a given collection, simpler usage than making a PCGTaggedData object" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGDataFunctionLibrary_AddToCollection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPCGDataFunctionLibrary, nullptr, "AddToCollection", nullptr, nullptr, Z_Construct_UFunction_UPCGDataFunctionLibrary_AddToCollection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGDataFunctionLibrary_AddToCollection_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPCGDataFunctionLibrary_AddToCollection_Statics::PCGDataFunctionLibrary_eventAddToCollection_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGDataFunctionLibrary_AddToCollection_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPCGDataFunctionLibrary_AddToCollection_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGDataFunctionLibrary_AddToCollection_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UPCGDataFunctionLibrary_AddToCollection_Statics::PCGDataFunctionLibrary_eventAddToCollection_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPCGDataFunctionLibrary_AddToCollection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGDataFunctionLibrary_AddToCollection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPCGDataFunctionLibrary_GetAllSettings_Statics
	{
		struct PCGDataFunctionLibrary_eventGetAllSettings_Parms
		{
			FPCGDataCollection InCollection;
			TArray<FPCGTaggedData> ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InCollection_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InCollection;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGDataFunctionLibrary_GetAllSettings_Statics::NewProp_InCollection_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPCGDataFunctionLibrary_GetAllSettings_Statics::NewProp_InCollection = { "InCollection", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGDataFunctionLibrary_eventGetAllSettings_Parms, InCollection), Z_Construct_UScriptStruct_FPCGDataCollection, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGDataFunctionLibrary_GetAllSettings_Statics::NewProp_InCollection_MetaData), Z_Construct_UFunction_UPCGDataFunctionLibrary_GetAllSettings_Statics::NewProp_InCollection_MetaData) }; // 3944208025
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPCGDataFunctionLibrary_GetAllSettings_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FPCGTaggedData, METADATA_PARAMS(0, nullptr) }; // 3988270987
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UPCGDataFunctionLibrary_GetAllSettings_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGDataFunctionLibrary_eventGetAllSettings_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 3988270987
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGDataFunctionLibrary_GetAllSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGDataFunctionLibrary_GetAllSettings_Statics::NewProp_InCollection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGDataFunctionLibrary_GetAllSettings_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGDataFunctionLibrary_GetAllSettings_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGDataFunctionLibrary_GetAllSettings_Statics::Function_MetaDataParams[] = {
		{ "Category", "Data" },
		{ "ModuleRelativePath", "Public/PCGData.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGDataFunctionLibrary_GetAllSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPCGDataFunctionLibrary, nullptr, "GetAllSettings", nullptr, nullptr, Z_Construct_UFunction_UPCGDataFunctionLibrary_GetAllSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGDataFunctionLibrary_GetAllSettings_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPCGDataFunctionLibrary_GetAllSettings_Statics::PCGDataFunctionLibrary_eventGetAllSettings_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGDataFunctionLibrary_GetAllSettings_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPCGDataFunctionLibrary_GetAllSettings_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGDataFunctionLibrary_GetAllSettings_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UPCGDataFunctionLibrary_GetAllSettings_Statics::PCGDataFunctionLibrary_eventGetAllSettings_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPCGDataFunctionLibrary_GetAllSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGDataFunctionLibrary_GetAllSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPCGDataFunctionLibrary_GetInputs_Statics
	{
		struct PCGDataFunctionLibrary_eventGetInputs_Parms
		{
			FPCGDataCollection InCollection;
			TArray<FPCGTaggedData> ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InCollection_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InCollection;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGDataFunctionLibrary_GetInputs_Statics::NewProp_InCollection_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPCGDataFunctionLibrary_GetInputs_Statics::NewProp_InCollection = { "InCollection", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGDataFunctionLibrary_eventGetInputs_Parms, InCollection), Z_Construct_UScriptStruct_FPCGDataCollection, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGDataFunctionLibrary_GetInputs_Statics::NewProp_InCollection_MetaData), Z_Construct_UFunction_UPCGDataFunctionLibrary_GetInputs_Statics::NewProp_InCollection_MetaData) }; // 3944208025
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPCGDataFunctionLibrary_GetInputs_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FPCGTaggedData, METADATA_PARAMS(0, nullptr) }; // 3988270987
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UPCGDataFunctionLibrary_GetInputs_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGDataFunctionLibrary_eventGetInputs_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 3988270987
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGDataFunctionLibrary_GetInputs_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGDataFunctionLibrary_GetInputs_Statics::NewProp_InCollection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGDataFunctionLibrary_GetInputs_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGDataFunctionLibrary_GetInputs_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGDataFunctionLibrary_GetInputs_Statics::Function_MetaDataParams[] = {
		{ "Category", "Data" },
		{ "Comment", "// Blueprint methods to support interaction with FPCGDataCollection\n" },
		{ "ModuleRelativePath", "Public/PCGData.h" },
		{ "ToolTip", "Blueprint methods to support interaction with FPCGDataCollection" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGDataFunctionLibrary_GetInputs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPCGDataFunctionLibrary, nullptr, "GetInputs", nullptr, nullptr, Z_Construct_UFunction_UPCGDataFunctionLibrary_GetInputs_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGDataFunctionLibrary_GetInputs_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPCGDataFunctionLibrary_GetInputs_Statics::PCGDataFunctionLibrary_eventGetInputs_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGDataFunctionLibrary_GetInputs_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPCGDataFunctionLibrary_GetInputs_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGDataFunctionLibrary_GetInputs_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UPCGDataFunctionLibrary_GetInputs_Statics::PCGDataFunctionLibrary_eventGetInputs_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPCGDataFunctionLibrary_GetInputs()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGDataFunctionLibrary_GetInputs_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPCGDataFunctionLibrary_GetInputsByPinLabel_Statics
	{
		struct PCGDataFunctionLibrary_eventGetInputsByPinLabel_Parms
		{
			FPCGDataCollection InCollection;
			FName InPinLabel;
			TArray<FPCGTaggedData> ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InCollection_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InCollection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InPinLabel_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_InPinLabel;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGDataFunctionLibrary_GetInputsByPinLabel_Statics::NewProp_InCollection_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPCGDataFunctionLibrary_GetInputsByPinLabel_Statics::NewProp_InCollection = { "InCollection", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGDataFunctionLibrary_eventGetInputsByPinLabel_Parms, InCollection), Z_Construct_UScriptStruct_FPCGDataCollection, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGDataFunctionLibrary_GetInputsByPinLabel_Statics::NewProp_InCollection_MetaData), Z_Construct_UFunction_UPCGDataFunctionLibrary_GetInputsByPinLabel_Statics::NewProp_InCollection_MetaData) }; // 3944208025
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGDataFunctionLibrary_GetInputsByPinLabel_Statics::NewProp_InPinLabel_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPCGDataFunctionLibrary_GetInputsByPinLabel_Statics::NewProp_InPinLabel = { "InPinLabel", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGDataFunctionLibrary_eventGetInputsByPinLabel_Parms, InPinLabel), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGDataFunctionLibrary_GetInputsByPinLabel_Statics::NewProp_InPinLabel_MetaData), Z_Construct_UFunction_UPCGDataFunctionLibrary_GetInputsByPinLabel_Statics::NewProp_InPinLabel_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPCGDataFunctionLibrary_GetInputsByPinLabel_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FPCGTaggedData, METADATA_PARAMS(0, nullptr) }; // 3988270987
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UPCGDataFunctionLibrary_GetInputsByPinLabel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGDataFunctionLibrary_eventGetInputsByPinLabel_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 3988270987
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGDataFunctionLibrary_GetInputsByPinLabel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGDataFunctionLibrary_GetInputsByPinLabel_Statics::NewProp_InCollection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGDataFunctionLibrary_GetInputsByPinLabel_Statics::NewProp_InPinLabel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGDataFunctionLibrary_GetInputsByPinLabel_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGDataFunctionLibrary_GetInputsByPinLabel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGDataFunctionLibrary_GetInputsByPinLabel_Statics::Function_MetaDataParams[] = {
		{ "Category", "Data" },
		{ "ModuleRelativePath", "Public/PCGData.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGDataFunctionLibrary_GetInputsByPinLabel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPCGDataFunctionLibrary, nullptr, "GetInputsByPinLabel", nullptr, nullptr, Z_Construct_UFunction_UPCGDataFunctionLibrary_GetInputsByPinLabel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGDataFunctionLibrary_GetInputsByPinLabel_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPCGDataFunctionLibrary_GetInputsByPinLabel_Statics::PCGDataFunctionLibrary_eventGetInputsByPinLabel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGDataFunctionLibrary_GetInputsByPinLabel_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPCGDataFunctionLibrary_GetInputsByPinLabel_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGDataFunctionLibrary_GetInputsByPinLabel_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UPCGDataFunctionLibrary_GetInputsByPinLabel_Statics::PCGDataFunctionLibrary_eventGetInputsByPinLabel_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPCGDataFunctionLibrary_GetInputsByPinLabel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGDataFunctionLibrary_GetInputsByPinLabel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPCGDataFunctionLibrary_GetInputsByTag_Statics
	{
		struct PCGDataFunctionLibrary_eventGetInputsByTag_Parms
		{
			FPCGDataCollection InCollection;
			FString InTag;
			TArray<FPCGTaggedData> ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InCollection_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InCollection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InTag_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InTag;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGDataFunctionLibrary_GetInputsByTag_Statics::NewProp_InCollection_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPCGDataFunctionLibrary_GetInputsByTag_Statics::NewProp_InCollection = { "InCollection", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGDataFunctionLibrary_eventGetInputsByTag_Parms, InCollection), Z_Construct_UScriptStruct_FPCGDataCollection, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGDataFunctionLibrary_GetInputsByTag_Statics::NewProp_InCollection_MetaData), Z_Construct_UFunction_UPCGDataFunctionLibrary_GetInputsByTag_Statics::NewProp_InCollection_MetaData) }; // 3944208025
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGDataFunctionLibrary_GetInputsByTag_Statics::NewProp_InTag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPCGDataFunctionLibrary_GetInputsByTag_Statics::NewProp_InTag = { "InTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGDataFunctionLibrary_eventGetInputsByTag_Parms, InTag), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGDataFunctionLibrary_GetInputsByTag_Statics::NewProp_InTag_MetaData), Z_Construct_UFunction_UPCGDataFunctionLibrary_GetInputsByTag_Statics::NewProp_InTag_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPCGDataFunctionLibrary_GetInputsByTag_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FPCGTaggedData, METADATA_PARAMS(0, nullptr) }; // 3988270987
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UPCGDataFunctionLibrary_GetInputsByTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGDataFunctionLibrary_eventGetInputsByTag_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 3988270987
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGDataFunctionLibrary_GetInputsByTag_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGDataFunctionLibrary_GetInputsByTag_Statics::NewProp_InCollection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGDataFunctionLibrary_GetInputsByTag_Statics::NewProp_InTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGDataFunctionLibrary_GetInputsByTag_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGDataFunctionLibrary_GetInputsByTag_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGDataFunctionLibrary_GetInputsByTag_Statics::Function_MetaDataParams[] = {
		{ "Category", "Data" },
		{ "ModuleRelativePath", "Public/PCGData.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGDataFunctionLibrary_GetInputsByTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPCGDataFunctionLibrary, nullptr, "GetInputsByTag", nullptr, nullptr, Z_Construct_UFunction_UPCGDataFunctionLibrary_GetInputsByTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGDataFunctionLibrary_GetInputsByTag_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPCGDataFunctionLibrary_GetInputsByTag_Statics::PCGDataFunctionLibrary_eventGetInputsByTag_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGDataFunctionLibrary_GetInputsByTag_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPCGDataFunctionLibrary_GetInputsByTag_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGDataFunctionLibrary_GetInputsByTag_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UPCGDataFunctionLibrary_GetInputsByTag_Statics::PCGDataFunctionLibrary_eventGetInputsByTag_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPCGDataFunctionLibrary_GetInputsByTag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGDataFunctionLibrary_GetInputsByTag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPCGDataFunctionLibrary_GetParams_Statics
	{
		struct PCGDataFunctionLibrary_eventGetParams_Parms
		{
			FPCGDataCollection InCollection;
			TArray<FPCGTaggedData> ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InCollection_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InCollection;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGDataFunctionLibrary_GetParams_Statics::NewProp_InCollection_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPCGDataFunctionLibrary_GetParams_Statics::NewProp_InCollection = { "InCollection", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGDataFunctionLibrary_eventGetParams_Parms, InCollection), Z_Construct_UScriptStruct_FPCGDataCollection, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGDataFunctionLibrary_GetParams_Statics::NewProp_InCollection_MetaData), Z_Construct_UFunction_UPCGDataFunctionLibrary_GetParams_Statics::NewProp_InCollection_MetaData) }; // 3944208025
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPCGDataFunctionLibrary_GetParams_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FPCGTaggedData, METADATA_PARAMS(0, nullptr) }; // 3988270987
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UPCGDataFunctionLibrary_GetParams_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGDataFunctionLibrary_eventGetParams_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 3988270987
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGDataFunctionLibrary_GetParams_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGDataFunctionLibrary_GetParams_Statics::NewProp_InCollection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGDataFunctionLibrary_GetParams_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGDataFunctionLibrary_GetParams_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGDataFunctionLibrary_GetParams_Statics::Function_MetaDataParams[] = {
		{ "Category", "Data" },
		{ "ModuleRelativePath", "Public/PCGData.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGDataFunctionLibrary_GetParams_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPCGDataFunctionLibrary, nullptr, "GetParams", nullptr, nullptr, Z_Construct_UFunction_UPCGDataFunctionLibrary_GetParams_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGDataFunctionLibrary_GetParams_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPCGDataFunctionLibrary_GetParams_Statics::PCGDataFunctionLibrary_eventGetParams_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGDataFunctionLibrary_GetParams_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPCGDataFunctionLibrary_GetParams_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGDataFunctionLibrary_GetParams_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UPCGDataFunctionLibrary_GetParams_Statics::PCGDataFunctionLibrary_eventGetParams_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPCGDataFunctionLibrary_GetParams()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGDataFunctionLibrary_GetParams_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPCGDataFunctionLibrary_GetParamsByPinLabel_Statics
	{
		struct PCGDataFunctionLibrary_eventGetParamsByPinLabel_Parms
		{
			FPCGDataCollection InCollection;
			FName InPinLabel;
			TArray<FPCGTaggedData> ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InCollection_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InCollection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InPinLabel_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_InPinLabel;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGDataFunctionLibrary_GetParamsByPinLabel_Statics::NewProp_InCollection_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPCGDataFunctionLibrary_GetParamsByPinLabel_Statics::NewProp_InCollection = { "InCollection", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGDataFunctionLibrary_eventGetParamsByPinLabel_Parms, InCollection), Z_Construct_UScriptStruct_FPCGDataCollection, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGDataFunctionLibrary_GetParamsByPinLabel_Statics::NewProp_InCollection_MetaData), Z_Construct_UFunction_UPCGDataFunctionLibrary_GetParamsByPinLabel_Statics::NewProp_InCollection_MetaData) }; // 3944208025
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGDataFunctionLibrary_GetParamsByPinLabel_Statics::NewProp_InPinLabel_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPCGDataFunctionLibrary_GetParamsByPinLabel_Statics::NewProp_InPinLabel = { "InPinLabel", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGDataFunctionLibrary_eventGetParamsByPinLabel_Parms, InPinLabel), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGDataFunctionLibrary_GetParamsByPinLabel_Statics::NewProp_InPinLabel_MetaData), Z_Construct_UFunction_UPCGDataFunctionLibrary_GetParamsByPinLabel_Statics::NewProp_InPinLabel_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPCGDataFunctionLibrary_GetParamsByPinLabel_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FPCGTaggedData, METADATA_PARAMS(0, nullptr) }; // 3988270987
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UPCGDataFunctionLibrary_GetParamsByPinLabel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGDataFunctionLibrary_eventGetParamsByPinLabel_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 3988270987
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGDataFunctionLibrary_GetParamsByPinLabel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGDataFunctionLibrary_GetParamsByPinLabel_Statics::NewProp_InCollection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGDataFunctionLibrary_GetParamsByPinLabel_Statics::NewProp_InPinLabel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGDataFunctionLibrary_GetParamsByPinLabel_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGDataFunctionLibrary_GetParamsByPinLabel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGDataFunctionLibrary_GetParamsByPinLabel_Statics::Function_MetaDataParams[] = {
		{ "Category", "Data" },
		{ "ModuleRelativePath", "Public/PCGData.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGDataFunctionLibrary_GetParamsByPinLabel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPCGDataFunctionLibrary, nullptr, "GetParamsByPinLabel", nullptr, nullptr, Z_Construct_UFunction_UPCGDataFunctionLibrary_GetParamsByPinLabel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGDataFunctionLibrary_GetParamsByPinLabel_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPCGDataFunctionLibrary_GetParamsByPinLabel_Statics::PCGDataFunctionLibrary_eventGetParamsByPinLabel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGDataFunctionLibrary_GetParamsByPinLabel_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPCGDataFunctionLibrary_GetParamsByPinLabel_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGDataFunctionLibrary_GetParamsByPinLabel_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UPCGDataFunctionLibrary_GetParamsByPinLabel_Statics::PCGDataFunctionLibrary_eventGetParamsByPinLabel_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPCGDataFunctionLibrary_GetParamsByPinLabel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGDataFunctionLibrary_GetParamsByPinLabel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPCGDataFunctionLibrary_GetParamsByTag_Statics
	{
		struct PCGDataFunctionLibrary_eventGetParamsByTag_Parms
		{
			FPCGDataCollection InCollection;
			FString InTag;
			TArray<FPCGTaggedData> ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InCollection_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InCollection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InTag_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InTag;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGDataFunctionLibrary_GetParamsByTag_Statics::NewProp_InCollection_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPCGDataFunctionLibrary_GetParamsByTag_Statics::NewProp_InCollection = { "InCollection", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGDataFunctionLibrary_eventGetParamsByTag_Parms, InCollection), Z_Construct_UScriptStruct_FPCGDataCollection, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGDataFunctionLibrary_GetParamsByTag_Statics::NewProp_InCollection_MetaData), Z_Construct_UFunction_UPCGDataFunctionLibrary_GetParamsByTag_Statics::NewProp_InCollection_MetaData) }; // 3944208025
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGDataFunctionLibrary_GetParamsByTag_Statics::NewProp_InTag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPCGDataFunctionLibrary_GetParamsByTag_Statics::NewProp_InTag = { "InTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGDataFunctionLibrary_eventGetParamsByTag_Parms, InTag), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGDataFunctionLibrary_GetParamsByTag_Statics::NewProp_InTag_MetaData), Z_Construct_UFunction_UPCGDataFunctionLibrary_GetParamsByTag_Statics::NewProp_InTag_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPCGDataFunctionLibrary_GetParamsByTag_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FPCGTaggedData, METADATA_PARAMS(0, nullptr) }; // 3988270987
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UPCGDataFunctionLibrary_GetParamsByTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGDataFunctionLibrary_eventGetParamsByTag_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 3988270987
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGDataFunctionLibrary_GetParamsByTag_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGDataFunctionLibrary_GetParamsByTag_Statics::NewProp_InCollection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGDataFunctionLibrary_GetParamsByTag_Statics::NewProp_InTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGDataFunctionLibrary_GetParamsByTag_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGDataFunctionLibrary_GetParamsByTag_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGDataFunctionLibrary_GetParamsByTag_Statics::Function_MetaDataParams[] = {
		{ "Category", "Data" },
		{ "ModuleRelativePath", "Public/PCGData.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGDataFunctionLibrary_GetParamsByTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPCGDataFunctionLibrary, nullptr, "GetParamsByTag", nullptr, nullptr, Z_Construct_UFunction_UPCGDataFunctionLibrary_GetParamsByTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGDataFunctionLibrary_GetParamsByTag_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPCGDataFunctionLibrary_GetParamsByTag_Statics::PCGDataFunctionLibrary_eventGetParamsByTag_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGDataFunctionLibrary_GetParamsByTag_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPCGDataFunctionLibrary_GetParamsByTag_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGDataFunctionLibrary_GetParamsByTag_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UPCGDataFunctionLibrary_GetParamsByTag_Statics::PCGDataFunctionLibrary_eventGetParamsByTag_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPCGDataFunctionLibrary_GetParamsByTag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGDataFunctionLibrary_GetParamsByTag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPCGDataFunctionLibrary_GetTypedInputs_Statics
	{
		struct PCGDataFunctionLibrary_eventGetTypedInputs_Parms
		{
			FPCGDataCollection InCollection;
			TArray<FPCGTaggedData> OutTaggedData;
			TSubclassOf<UPCGData>  InDataTypeClass;
			TArray<UPCGData*> ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InCollection_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InCollection;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutTaggedData_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutTaggedData;
		static const UECodeGen_Private::FClassPropertyParams NewProp_InDataTypeClass;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGDataFunctionLibrary_GetTypedInputs_Statics::NewProp_InCollection_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPCGDataFunctionLibrary_GetTypedInputs_Statics::NewProp_InCollection = { "InCollection", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGDataFunctionLibrary_eventGetTypedInputs_Parms, InCollection), Z_Construct_UScriptStruct_FPCGDataCollection, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGDataFunctionLibrary_GetTypedInputs_Statics::NewProp_InCollection_MetaData), Z_Construct_UFunction_UPCGDataFunctionLibrary_GetTypedInputs_Statics::NewProp_InCollection_MetaData) }; // 3944208025
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPCGDataFunctionLibrary_GetTypedInputs_Statics::NewProp_OutTaggedData_Inner = { "OutTaggedData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FPCGTaggedData, METADATA_PARAMS(0, nullptr) }; // 3988270987
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UPCGDataFunctionLibrary_GetTypedInputs_Statics::NewProp_OutTaggedData = { "OutTaggedData", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGDataFunctionLibrary_eventGetTypedInputs_Parms, OutTaggedData), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 3988270987
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UPCGDataFunctionLibrary_GetTypedInputs_Statics::NewProp_InDataTypeClass = { "InDataTypeClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGDataFunctionLibrary_eventGetTypedInputs_Parms, InDataTypeClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UPCGData_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPCGDataFunctionLibrary_GetTypedInputs_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UPCGData_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UPCGDataFunctionLibrary_GetTypedInputs_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGDataFunctionLibrary_eventGetTypedInputs_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGDataFunctionLibrary_GetTypedInputs_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGDataFunctionLibrary_GetTypedInputs_Statics::NewProp_InCollection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGDataFunctionLibrary_GetTypedInputs_Statics::NewProp_OutTaggedData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGDataFunctionLibrary_GetTypedInputs_Statics::NewProp_OutTaggedData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGDataFunctionLibrary_GetTypedInputs_Statics::NewProp_InDataTypeClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGDataFunctionLibrary_GetTypedInputs_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGDataFunctionLibrary_GetTypedInputs_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGDataFunctionLibrary_GetTypedInputs_Statics::Function_MetaDataParams[] = {
		{ "Category", "Data" },
		{ "Comment", "/** Gets all inputs of the given class type, returning matching tagged data in the OutTaggedData value too */" },
		{ "CPP_Default_InDataTypeClass", "None" },
		{ "DeterminesOutputType", "InDataTypeClass" },
		{ "ModuleRelativePath", "Public/PCGData.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Gets all inputs of the given class type, returning matching tagged data in the OutTaggedData value too" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGDataFunctionLibrary_GetTypedInputs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPCGDataFunctionLibrary, nullptr, "GetTypedInputs", nullptr, nullptr, Z_Construct_UFunction_UPCGDataFunctionLibrary_GetTypedInputs_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGDataFunctionLibrary_GetTypedInputs_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPCGDataFunctionLibrary_GetTypedInputs_Statics::PCGDataFunctionLibrary_eventGetTypedInputs_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGDataFunctionLibrary_GetTypedInputs_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPCGDataFunctionLibrary_GetTypedInputs_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGDataFunctionLibrary_GetTypedInputs_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UPCGDataFunctionLibrary_GetTypedInputs_Statics::PCGDataFunctionLibrary_eventGetTypedInputs_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPCGDataFunctionLibrary_GetTypedInputs()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGDataFunctionLibrary_GetTypedInputs_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPCGDataFunctionLibrary_GetTypedInputsByPin_Statics
	{
		struct PCGDataFunctionLibrary_eventGetTypedInputsByPin_Parms
		{
			FPCGDataCollection InCollection;
			FPCGPinProperties InPin;
			TArray<FPCGTaggedData> OutTaggedData;
			TSubclassOf<UPCGData>  InDataTypeClass;
			TArray<UPCGData*> ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InCollection_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InCollection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InPin_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InPin;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutTaggedData_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutTaggedData;
		static const UECodeGen_Private::FClassPropertyParams NewProp_InDataTypeClass;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGDataFunctionLibrary_GetTypedInputsByPin_Statics::NewProp_InCollection_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPCGDataFunctionLibrary_GetTypedInputsByPin_Statics::NewProp_InCollection = { "InCollection", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGDataFunctionLibrary_eventGetTypedInputsByPin_Parms, InCollection), Z_Construct_UScriptStruct_FPCGDataCollection, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGDataFunctionLibrary_GetTypedInputsByPin_Statics::NewProp_InCollection_MetaData), Z_Construct_UFunction_UPCGDataFunctionLibrary_GetTypedInputsByPin_Statics::NewProp_InCollection_MetaData) }; // 3944208025
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGDataFunctionLibrary_GetTypedInputsByPin_Statics::NewProp_InPin_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPCGDataFunctionLibrary_GetTypedInputsByPin_Statics::NewProp_InPin = { "InPin", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGDataFunctionLibrary_eventGetTypedInputsByPin_Parms, InPin), Z_Construct_UScriptStruct_FPCGPinProperties, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGDataFunctionLibrary_GetTypedInputsByPin_Statics::NewProp_InPin_MetaData), Z_Construct_UFunction_UPCGDataFunctionLibrary_GetTypedInputsByPin_Statics::NewProp_InPin_MetaData) }; // 1976663911
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPCGDataFunctionLibrary_GetTypedInputsByPin_Statics::NewProp_OutTaggedData_Inner = { "OutTaggedData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FPCGTaggedData, METADATA_PARAMS(0, nullptr) }; // 3988270987
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UPCGDataFunctionLibrary_GetTypedInputsByPin_Statics::NewProp_OutTaggedData = { "OutTaggedData", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGDataFunctionLibrary_eventGetTypedInputsByPin_Parms, OutTaggedData), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 3988270987
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UPCGDataFunctionLibrary_GetTypedInputsByPin_Statics::NewProp_InDataTypeClass = { "InDataTypeClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGDataFunctionLibrary_eventGetTypedInputsByPin_Parms, InDataTypeClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UPCGData_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPCGDataFunctionLibrary_GetTypedInputsByPin_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UPCGData_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UPCGDataFunctionLibrary_GetTypedInputsByPin_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGDataFunctionLibrary_eventGetTypedInputsByPin_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGDataFunctionLibrary_GetTypedInputsByPin_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGDataFunctionLibrary_GetTypedInputsByPin_Statics::NewProp_InCollection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGDataFunctionLibrary_GetTypedInputsByPin_Statics::NewProp_InPin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGDataFunctionLibrary_GetTypedInputsByPin_Statics::NewProp_OutTaggedData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGDataFunctionLibrary_GetTypedInputsByPin_Statics::NewProp_OutTaggedData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGDataFunctionLibrary_GetTypedInputsByPin_Statics::NewProp_InDataTypeClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGDataFunctionLibrary_GetTypedInputsByPin_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGDataFunctionLibrary_GetTypedInputsByPin_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGDataFunctionLibrary_GetTypedInputsByPin_Statics::Function_MetaDataParams[] = {
		{ "Category", "Data" },
		{ "Comment", "/** Gets all inputs of the given class type and on the given pin, returning matching tagged data in the OutTaggedData value too */" },
		{ "CPP_Default_InDataTypeClass", "None" },
		{ "DeterminesOutputType", "InDataTypeClass" },
		{ "ModuleRelativePath", "Public/PCGData.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Gets all inputs of the given class type and on the given pin, returning matching tagged data in the OutTaggedData value too" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGDataFunctionLibrary_GetTypedInputsByPin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPCGDataFunctionLibrary, nullptr, "GetTypedInputsByPin", nullptr, nullptr, Z_Construct_UFunction_UPCGDataFunctionLibrary_GetTypedInputsByPin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGDataFunctionLibrary_GetTypedInputsByPin_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPCGDataFunctionLibrary_GetTypedInputsByPin_Statics::PCGDataFunctionLibrary_eventGetTypedInputsByPin_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGDataFunctionLibrary_GetTypedInputsByPin_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPCGDataFunctionLibrary_GetTypedInputsByPin_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGDataFunctionLibrary_GetTypedInputsByPin_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UPCGDataFunctionLibrary_GetTypedInputsByPin_Statics::PCGDataFunctionLibrary_eventGetTypedInputsByPin_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPCGDataFunctionLibrary_GetTypedInputsByPin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGDataFunctionLibrary_GetTypedInputsByPin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPCGDataFunctionLibrary_GetTypedInputsByPinLabel_Statics
	{
		struct PCGDataFunctionLibrary_eventGetTypedInputsByPinLabel_Parms
		{
			FPCGDataCollection InCollection;
			FName InPinLabel;
			TArray<FPCGTaggedData> OutTaggedData;
			TSubclassOf<UPCGData>  InDataTypeClass;
			TArray<UPCGData*> ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InCollection_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InCollection;
		static const UECodeGen_Private::FNamePropertyParams NewProp_InPinLabel;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutTaggedData_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutTaggedData;
		static const UECodeGen_Private::FClassPropertyParams NewProp_InDataTypeClass;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGDataFunctionLibrary_GetTypedInputsByPinLabel_Statics::NewProp_InCollection_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPCGDataFunctionLibrary_GetTypedInputsByPinLabel_Statics::NewProp_InCollection = { "InCollection", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGDataFunctionLibrary_eventGetTypedInputsByPinLabel_Parms, InCollection), Z_Construct_UScriptStruct_FPCGDataCollection, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGDataFunctionLibrary_GetTypedInputsByPinLabel_Statics::NewProp_InCollection_MetaData), Z_Construct_UFunction_UPCGDataFunctionLibrary_GetTypedInputsByPinLabel_Statics::NewProp_InCollection_MetaData) }; // 3944208025
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPCGDataFunctionLibrary_GetTypedInputsByPinLabel_Statics::NewProp_InPinLabel = { "InPinLabel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGDataFunctionLibrary_eventGetTypedInputsByPinLabel_Parms, InPinLabel), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPCGDataFunctionLibrary_GetTypedInputsByPinLabel_Statics::NewProp_OutTaggedData_Inner = { "OutTaggedData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FPCGTaggedData, METADATA_PARAMS(0, nullptr) }; // 3988270987
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UPCGDataFunctionLibrary_GetTypedInputsByPinLabel_Statics::NewProp_OutTaggedData = { "OutTaggedData", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGDataFunctionLibrary_eventGetTypedInputsByPinLabel_Parms, OutTaggedData), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 3988270987
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UPCGDataFunctionLibrary_GetTypedInputsByPinLabel_Statics::NewProp_InDataTypeClass = { "InDataTypeClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGDataFunctionLibrary_eventGetTypedInputsByPinLabel_Parms, InDataTypeClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UPCGData_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPCGDataFunctionLibrary_GetTypedInputsByPinLabel_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UPCGData_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UPCGDataFunctionLibrary_GetTypedInputsByPinLabel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGDataFunctionLibrary_eventGetTypedInputsByPinLabel_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGDataFunctionLibrary_GetTypedInputsByPinLabel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGDataFunctionLibrary_GetTypedInputsByPinLabel_Statics::NewProp_InCollection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGDataFunctionLibrary_GetTypedInputsByPinLabel_Statics::NewProp_InPinLabel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGDataFunctionLibrary_GetTypedInputsByPinLabel_Statics::NewProp_OutTaggedData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGDataFunctionLibrary_GetTypedInputsByPinLabel_Statics::NewProp_OutTaggedData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGDataFunctionLibrary_GetTypedInputsByPinLabel_Statics::NewProp_InDataTypeClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGDataFunctionLibrary_GetTypedInputsByPinLabel_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGDataFunctionLibrary_GetTypedInputsByPinLabel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGDataFunctionLibrary_GetTypedInputsByPinLabel_Statics::Function_MetaDataParams[] = {
		{ "Category", "Data" },
		{ "Comment", "/** Gets all inputs of the given class type and on the given pin label, returning matching tagged data in the OutTaggedData value too */" },
		{ "CPP_Default_InDataTypeClass", "None" },
		{ "DeterminesOutputType", "InDataTypeClass" },
		{ "ModuleRelativePath", "Public/PCGData.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Gets all inputs of the given class type and on the given pin label, returning matching tagged data in the OutTaggedData value too" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGDataFunctionLibrary_GetTypedInputsByPinLabel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPCGDataFunctionLibrary, nullptr, "GetTypedInputsByPinLabel", nullptr, nullptr, Z_Construct_UFunction_UPCGDataFunctionLibrary_GetTypedInputsByPinLabel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGDataFunctionLibrary_GetTypedInputsByPinLabel_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPCGDataFunctionLibrary_GetTypedInputsByPinLabel_Statics::PCGDataFunctionLibrary_eventGetTypedInputsByPinLabel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGDataFunctionLibrary_GetTypedInputsByPinLabel_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPCGDataFunctionLibrary_GetTypedInputsByPinLabel_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGDataFunctionLibrary_GetTypedInputsByPinLabel_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UPCGDataFunctionLibrary_GetTypedInputsByPinLabel_Statics::PCGDataFunctionLibrary_eventGetTypedInputsByPinLabel_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPCGDataFunctionLibrary_GetTypedInputsByPinLabel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGDataFunctionLibrary_GetTypedInputsByPinLabel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPCGDataFunctionLibrary_GetTypedInputsByTag_Statics
	{
		struct PCGDataFunctionLibrary_eventGetTypedInputsByTag_Parms
		{
			FPCGDataCollection InCollection;
			FString InTag;
			TArray<FPCGTaggedData> OutTaggedData;
			TSubclassOf<UPCGData>  InDataTypeClass;
			TArray<UPCGData*> ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InCollection_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InCollection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InTag_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InTag;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutTaggedData_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutTaggedData;
		static const UECodeGen_Private::FClassPropertyParams NewProp_InDataTypeClass;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGDataFunctionLibrary_GetTypedInputsByTag_Statics::NewProp_InCollection_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPCGDataFunctionLibrary_GetTypedInputsByTag_Statics::NewProp_InCollection = { "InCollection", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGDataFunctionLibrary_eventGetTypedInputsByTag_Parms, InCollection), Z_Construct_UScriptStruct_FPCGDataCollection, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGDataFunctionLibrary_GetTypedInputsByTag_Statics::NewProp_InCollection_MetaData), Z_Construct_UFunction_UPCGDataFunctionLibrary_GetTypedInputsByTag_Statics::NewProp_InCollection_MetaData) }; // 3944208025
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGDataFunctionLibrary_GetTypedInputsByTag_Statics::NewProp_InTag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPCGDataFunctionLibrary_GetTypedInputsByTag_Statics::NewProp_InTag = { "InTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGDataFunctionLibrary_eventGetTypedInputsByTag_Parms, InTag), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGDataFunctionLibrary_GetTypedInputsByTag_Statics::NewProp_InTag_MetaData), Z_Construct_UFunction_UPCGDataFunctionLibrary_GetTypedInputsByTag_Statics::NewProp_InTag_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPCGDataFunctionLibrary_GetTypedInputsByTag_Statics::NewProp_OutTaggedData_Inner = { "OutTaggedData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FPCGTaggedData, METADATA_PARAMS(0, nullptr) }; // 3988270987
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UPCGDataFunctionLibrary_GetTypedInputsByTag_Statics::NewProp_OutTaggedData = { "OutTaggedData", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGDataFunctionLibrary_eventGetTypedInputsByTag_Parms, OutTaggedData), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 3988270987
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UPCGDataFunctionLibrary_GetTypedInputsByTag_Statics::NewProp_InDataTypeClass = { "InDataTypeClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGDataFunctionLibrary_eventGetTypedInputsByTag_Parms, InDataTypeClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UPCGData_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPCGDataFunctionLibrary_GetTypedInputsByTag_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UPCGData_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UPCGDataFunctionLibrary_GetTypedInputsByTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGDataFunctionLibrary_eventGetTypedInputsByTag_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGDataFunctionLibrary_GetTypedInputsByTag_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGDataFunctionLibrary_GetTypedInputsByTag_Statics::NewProp_InCollection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGDataFunctionLibrary_GetTypedInputsByTag_Statics::NewProp_InTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGDataFunctionLibrary_GetTypedInputsByTag_Statics::NewProp_OutTaggedData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGDataFunctionLibrary_GetTypedInputsByTag_Statics::NewProp_OutTaggedData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGDataFunctionLibrary_GetTypedInputsByTag_Statics::NewProp_InDataTypeClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGDataFunctionLibrary_GetTypedInputsByTag_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGDataFunctionLibrary_GetTypedInputsByTag_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGDataFunctionLibrary_GetTypedInputsByTag_Statics::Function_MetaDataParams[] = {
		{ "Category", "Data" },
		{ "Comment", "/** Gets all inputs of the given class type and having the provided tag, returning matching tagged data in the OutTaggedData value too */" },
		{ "CPP_Default_InDataTypeClass", "None" },
		{ "DeterminesOutputType", "InDataTypeClass" },
		{ "ModuleRelativePath", "Public/PCGData.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Gets all inputs of the given class type and having the provided tag, returning matching tagged data in the OutTaggedData value too" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGDataFunctionLibrary_GetTypedInputsByTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPCGDataFunctionLibrary, nullptr, "GetTypedInputsByTag", nullptr, nullptr, Z_Construct_UFunction_UPCGDataFunctionLibrary_GetTypedInputsByTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGDataFunctionLibrary_GetTypedInputsByTag_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPCGDataFunctionLibrary_GetTypedInputsByTag_Statics::PCGDataFunctionLibrary_eventGetTypedInputsByTag_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGDataFunctionLibrary_GetTypedInputsByTag_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPCGDataFunctionLibrary_GetTypedInputsByTag_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGDataFunctionLibrary_GetTypedInputsByTag_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UPCGDataFunctionLibrary_GetTypedInputsByTag_Statics::PCGDataFunctionLibrary_eventGetTypedInputsByTag_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPCGDataFunctionLibrary_GetTypedInputsByTag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGDataFunctionLibrary_GetTypedInputsByTag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPCGDataFunctionLibrary);
	UClass* Z_Construct_UClass_UPCGDataFunctionLibrary_NoRegister()
	{
		return UPCGDataFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UPCGDataFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPCGDataFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_PCG,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGDataFunctionLibrary_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UPCGDataFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPCGDataFunctionLibrary_AddToCollection, "AddToCollection" }, // 1055321678
		{ &Z_Construct_UFunction_UPCGDataFunctionLibrary_GetAllSettings, "GetAllSettings" }, // 1489108438
		{ &Z_Construct_UFunction_UPCGDataFunctionLibrary_GetInputs, "GetInputs" }, // 3447616068
		{ &Z_Construct_UFunction_UPCGDataFunctionLibrary_GetInputsByPinLabel, "GetInputsByPinLabel" }, // 3679884341
		{ &Z_Construct_UFunction_UPCGDataFunctionLibrary_GetInputsByTag, "GetInputsByTag" }, // 3081820649
		{ &Z_Construct_UFunction_UPCGDataFunctionLibrary_GetParams, "GetParams" }, // 2770483206
		{ &Z_Construct_UFunction_UPCGDataFunctionLibrary_GetParamsByPinLabel, "GetParamsByPinLabel" }, // 4019116894
		{ &Z_Construct_UFunction_UPCGDataFunctionLibrary_GetParamsByTag, "GetParamsByTag" }, // 2267832273
		{ &Z_Construct_UFunction_UPCGDataFunctionLibrary_GetTypedInputs, "GetTypedInputs" }, // 829342529
		{ &Z_Construct_UFunction_UPCGDataFunctionLibrary_GetTypedInputsByPin, "GetTypedInputsByPin" }, // 3533110029
		{ &Z_Construct_UFunction_UPCGDataFunctionLibrary_GetTypedInputsByPinLabel, "GetTypedInputsByPinLabel" }, // 1924215178
		{ &Z_Construct_UFunction_UPCGDataFunctionLibrary_GetTypedInputsByTag, "GetTypedInputsByTag" }, // 1420960871
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGDataFunctionLibrary_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGDataFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PCGData.h" },
		{ "ModuleRelativePath", "Public/PCGData.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPCGDataFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGDataFunctionLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGDataFunctionLibrary_Statics::ClassParams = {
		&UPCGDataFunctionLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGDataFunctionLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGDataFunctionLibrary_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UPCGDataFunctionLibrary()
	{
		if (!Z_Registration_Info_UClass_UPCGDataFunctionLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGDataFunctionLibrary.OuterSingleton, Z_Construct_UClass_UPCGDataFunctionLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPCGDataFunctionLibrary.OuterSingleton;
	}
	template<> PCG_API UClass* StaticClass<UPCGDataFunctionLibrary>()
	{
		return UPCGDataFunctionLibrary::StaticClass();
	}
	UPCGDataFunctionLibrary::UPCGDataFunctionLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPCGDataFunctionLibrary);
	UPCGDataFunctionLibrary::~UPCGDataFunctionLibrary() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_PCGData_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_PCGData_h_Statics::ScriptStructInfo[] = {
		{ FPCGTaggedData::StaticStruct, Z_Construct_UScriptStruct_FPCGTaggedData_Statics::NewStructOps, TEXT("PCGTaggedData"), &Z_Registration_Info_UScriptStruct_PCGTaggedData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPCGTaggedData), 3988270987U) },
		{ FPCGDataCollection::StaticStruct, Z_Construct_UScriptStruct_FPCGDataCollection_Statics::NewStructOps, TEXT("PCGDataCollection"), &Z_Registration_Info_UScriptStruct_PCGDataCollection, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPCGDataCollection), 3944208025U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_PCGData_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPCGData, UPCGData::StaticClass, TEXT("UPCGData"), &Z_Registration_Info_UClass_UPCGData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGData), 367033712U) },
		{ Z_Construct_UClass_UPCGDataFunctionLibrary, UPCGDataFunctionLibrary::StaticClass, TEXT("UPCGDataFunctionLibrary"), &Z_Registration_Info_UClass_UPCGDataFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGDataFunctionLibrary), 3427787114U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_PCGData_h_999681622(TEXT("/Script/PCG"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_PCGData_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_PCGData_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_PCGData_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_PCGData_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
