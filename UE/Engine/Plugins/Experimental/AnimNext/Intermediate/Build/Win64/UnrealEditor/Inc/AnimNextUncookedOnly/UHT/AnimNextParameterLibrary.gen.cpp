// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Internal/Param/AnimNextParameterLibrary.h"
#include "Param/ParamType.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNextParameterLibrary() {}
// Cross Module References
	ANIMNEXT_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNextParamType();
	ANIMNEXTUNCOOKEDONLY_API UClass* Z_Construct_UClass_UAnimNextParameter_NoRegister();
	ANIMNEXTUNCOOKEDONLY_API UClass* Z_Construct_UClass_UAnimNextParameterLibrary();
	ANIMNEXTUNCOOKEDONLY_API UClass* Z_Construct_UClass_UAnimNextParameterLibrary_NoRegister();
	ANIMNEXTUNCOOKEDONLY_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNextParameterLibraryAssetRegistryExportEntry();
	ANIMNEXTUNCOOKEDONLY_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNextParameterLibraryAssetRegistryExports();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	STRUCTUTILS_API UEnum* Z_Construct_UEnum_StructUtils_EPropertyBagContainerType();
	STRUCTUTILS_API UEnum* Z_Construct_UEnum_StructUtils_EPropertyBagPropertyType();
	UPackage* Z_Construct_UPackage__Script_AnimNextUncookedOnly();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimNextParameterLibraryAssetRegistryExportEntry;
class UScriptStruct* FAnimNextParameterLibraryAssetRegistryExportEntry::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNextParameterLibraryAssetRegistryExportEntry.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimNextParameterLibraryAssetRegistryExportEntry.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNextParameterLibraryAssetRegistryExportEntry, (UObject*)Z_Construct_UPackage__Script_AnimNextUncookedOnly(), TEXT("AnimNextParameterLibraryAssetRegistryExportEntry"));
	}
	return Z_Registration_Info_UScriptStruct_AnimNextParameterLibraryAssetRegistryExportEntry.OuterSingleton;
}
template<> ANIMNEXTUNCOOKEDONLY_API UScriptStruct* StaticStruct<FAnimNextParameterLibraryAssetRegistryExportEntry>()
{
	return FAnimNextParameterLibraryAssetRegistryExportEntry::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAnimNextParameterLibraryAssetRegistryExportEntry_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Type;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNextParameterLibraryAssetRegistryExportEntry_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// Library entry used to export to asset registry\n" },
		{ "ModuleRelativePath", "Internal/Param/AnimNextParameterLibrary.h" },
		{ "ToolTip", "Library entry used to export to asset registry" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimNextParameterLibraryAssetRegistryExportEntry_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNextParameterLibraryAssetRegistryExportEntry>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNextParameterLibraryAssetRegistryExportEntry_Statics::NewProp_Name_MetaData[] = {
		{ "ModuleRelativePath", "Internal/Param/AnimNextParameterLibrary.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAnimNextParameterLibraryAssetRegistryExportEntry_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNextParameterLibraryAssetRegistryExportEntry, Name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNextParameterLibraryAssetRegistryExportEntry_Statics::NewProp_Name_MetaData), Z_Construct_UScriptStruct_FAnimNextParameterLibraryAssetRegistryExportEntry_Statics::NewProp_Name_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNextParameterLibraryAssetRegistryExportEntry_Statics::NewProp_Type_MetaData[] = {
		{ "ModuleRelativePath", "Internal/Param/AnimNextParameterLibrary.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNextParameterLibraryAssetRegistryExportEntry_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNextParameterLibraryAssetRegistryExportEntry, Type), Z_Construct_UScriptStruct_FAnimNextParamType, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNextParameterLibraryAssetRegistryExportEntry_Statics::NewProp_Type_MetaData), Z_Construct_UScriptStruct_FAnimNextParameterLibraryAssetRegistryExportEntry_Statics::NewProp_Type_MetaData) }; // 2379401833
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNextParameterLibraryAssetRegistryExportEntry_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNextParameterLibraryAssetRegistryExportEntry_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNextParameterLibraryAssetRegistryExportEntry_Statics::NewProp_Type,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNextParameterLibraryAssetRegistryExportEntry_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AnimNextUncookedOnly,
		nullptr,
		&NewStructOps,
		"AnimNextParameterLibraryAssetRegistryExportEntry",
		Z_Construct_UScriptStruct_FAnimNextParameterLibraryAssetRegistryExportEntry_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNextParameterLibraryAssetRegistryExportEntry_Statics::PropPointers),
		sizeof(FAnimNextParameterLibraryAssetRegistryExportEntry),
		alignof(FAnimNextParameterLibraryAssetRegistryExportEntry),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNextParameterLibraryAssetRegistryExportEntry_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAnimNextParameterLibraryAssetRegistryExportEntry_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNextParameterLibraryAssetRegistryExportEntry_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNextParameterLibraryAssetRegistryExportEntry()
	{
		if (!Z_Registration_Info_UScriptStruct_AnimNextParameterLibraryAssetRegistryExportEntry.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimNextParameterLibraryAssetRegistryExportEntry.InnerSingleton, Z_Construct_UScriptStruct_FAnimNextParameterLibraryAssetRegistryExportEntry_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AnimNextParameterLibraryAssetRegistryExportEntry.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimNextParameterLibraryAssetRegistryExports;
class UScriptStruct* FAnimNextParameterLibraryAssetRegistryExports::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNextParameterLibraryAssetRegistryExports.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimNextParameterLibraryAssetRegistryExports.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNextParameterLibraryAssetRegistryExports, (UObject*)Z_Construct_UPackage__Script_AnimNextUncookedOnly(), TEXT("AnimNextParameterLibraryAssetRegistryExports"));
	}
	return Z_Registration_Info_UScriptStruct_AnimNextParameterLibraryAssetRegistryExports.OuterSingleton;
}
template<> ANIMNEXTUNCOOKEDONLY_API UScriptStruct* StaticStruct<FAnimNextParameterLibraryAssetRegistryExports>()
{
	return FAnimNextParameterLibraryAssetRegistryExports::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAnimNextParameterLibraryAssetRegistryExports_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_Parameters_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Parameters_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Parameters;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNextParameterLibraryAssetRegistryExports_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// Library used to export to asset registry\n" },
		{ "ModuleRelativePath", "Internal/Param/AnimNextParameterLibrary.h" },
		{ "ToolTip", "Library used to export to asset registry" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimNextParameterLibraryAssetRegistryExports_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNextParameterLibraryAssetRegistryExports>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNextParameterLibraryAssetRegistryExports_Statics::NewProp_Parameters_Inner = { "Parameters", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FAnimNextParameterLibraryAssetRegistryExportEntry, METADATA_PARAMS(0, nullptr) }; // 2049618188
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNextParameterLibraryAssetRegistryExports_Statics::NewProp_Parameters_MetaData[] = {
		{ "ModuleRelativePath", "Internal/Param/AnimNextParameterLibrary.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimNextParameterLibraryAssetRegistryExports_Statics::NewProp_Parameters = { "Parameters", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNextParameterLibraryAssetRegistryExports, Parameters), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNextParameterLibraryAssetRegistryExports_Statics::NewProp_Parameters_MetaData), Z_Construct_UScriptStruct_FAnimNextParameterLibraryAssetRegistryExports_Statics::NewProp_Parameters_MetaData) }; // 2049618188
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNextParameterLibraryAssetRegistryExports_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNextParameterLibraryAssetRegistryExports_Statics::NewProp_Parameters_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNextParameterLibraryAssetRegistryExports_Statics::NewProp_Parameters,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNextParameterLibraryAssetRegistryExports_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AnimNextUncookedOnly,
		nullptr,
		&NewStructOps,
		"AnimNextParameterLibraryAssetRegistryExports",
		Z_Construct_UScriptStruct_FAnimNextParameterLibraryAssetRegistryExports_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNextParameterLibraryAssetRegistryExports_Statics::PropPointers),
		sizeof(FAnimNextParameterLibraryAssetRegistryExports),
		alignof(FAnimNextParameterLibraryAssetRegistryExports),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNextParameterLibraryAssetRegistryExports_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAnimNextParameterLibraryAssetRegistryExports_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNextParameterLibraryAssetRegistryExports_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNextParameterLibraryAssetRegistryExports()
	{
		if (!Z_Registration_Info_UScriptStruct_AnimNextParameterLibraryAssetRegistryExports.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimNextParameterLibraryAssetRegistryExports.InnerSingleton, Z_Construct_UScriptStruct_FAnimNextParameterLibraryAssetRegistryExports_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AnimNextParameterLibraryAssetRegistryExports.InnerSingleton;
	}
	DEFINE_FUNCTION(UAnimNextParameterLibrary::execFindParameter)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_InName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAnimNextParameter**)Z_Param__Result=P_THIS->FindParameter(Z_Param_InName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimNextParameterLibrary::execRemoveParameters)
	{
		P_GET_TARRAY_REF(FName,Z_Param_Out_InNames);
		P_GET_UBOOL(Z_Param_bSetupUndoRedo);
		P_GET_UBOOL(Z_Param_bPrintPythonCommand);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RemoveParameters(Z_Param_Out_InNames,Z_Param_bSetupUndoRedo,Z_Param_bPrintPythonCommand);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimNextParameterLibrary::execRemoveParameter)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_InName);
		P_GET_UBOOL(Z_Param_bSetupUndoRedo);
		P_GET_UBOOL(Z_Param_bPrintPythonCommand);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RemoveParameter(Z_Param_InName,Z_Param_bSetupUndoRedo,Z_Param_bPrintPythonCommand);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimNextParameterLibrary::execAddParameter)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_InName);
		P_GET_ENUM_REF(EPropertyBagPropertyType,Z_Param_Out_InValueType);
		P_GET_ENUM_REF(EPropertyBagContainerType,Z_Param_Out_InContainerType);
		P_GET_OBJECT(UObject,Z_Param_InValueTypeObject);
		P_GET_UBOOL(Z_Param_bSetupUndoRedo);
		P_GET_UBOOL(Z_Param_bPrintPythonCommand);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAnimNextParameter**)Z_Param__Result=P_THIS->AddParameter(Z_Param_InName,(EPropertyBagPropertyType&)(Z_Param_Out_InValueType),(EPropertyBagContainerType&)(Z_Param_Out_InContainerType),Z_Param_InValueTypeObject,Z_Param_bSetupUndoRedo,Z_Param_bPrintPythonCommand);
		P_NATIVE_END;
	}
	void UAnimNextParameterLibrary::StaticRegisterNativesUAnimNextParameterLibrary()
	{
		UClass* Class = UAnimNextParameterLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddParameter", &UAnimNextParameterLibrary::execAddParameter },
			{ "FindParameter", &UAnimNextParameterLibrary::execFindParameter },
			{ "RemoveParameter", &UAnimNextParameterLibrary::execRemoveParameter },
			{ "RemoveParameters", &UAnimNextParameterLibrary::execRemoveParameters },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAnimNextParameterLibrary_AddParameter_Statics
	{
		struct AnimNextParameterLibrary_eventAddParameter_Parms
		{
			FName InName;
			EPropertyBagPropertyType InValueType;
			EPropertyBagContainerType InContainerType;
			const UObject* InValueTypeObject;
			bool bSetupUndoRedo;
			bool bPrintPythonCommand;
			UAnimNextParameter* ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_InName;
		static const UECodeGen_Private::FBytePropertyParams NewProp_InValueType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InValueType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_InValueType;
		static const UECodeGen_Private::FBytePropertyParams NewProp_InContainerType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InContainerType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_InContainerType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InValueTypeObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InValueTypeObject;
		static void NewProp_bSetupUndoRedo_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSetupUndoRedo;
		static void NewProp_bPrintPythonCommand_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPrintPythonCommand;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAnimNextParameterLibrary_AddParameter_Statics::NewProp_InName = { "InName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimNextParameterLibrary_eventAddParameter_Parms, InName), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAnimNextParameterLibrary_AddParameter_Statics::NewProp_InValueType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimNextParameterLibrary_AddParameter_Statics::NewProp_InValueType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAnimNextParameterLibrary_AddParameter_Statics::NewProp_InValueType = { "InValueType", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimNextParameterLibrary_eventAddParameter_Parms, InValueType), Z_Construct_UEnum_StructUtils_EPropertyBagPropertyType, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimNextParameterLibrary_AddParameter_Statics::NewProp_InValueType_MetaData), Z_Construct_UFunction_UAnimNextParameterLibrary_AddParameter_Statics::NewProp_InValueType_MetaData) }; // 2322204152
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAnimNextParameterLibrary_AddParameter_Statics::NewProp_InContainerType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimNextParameterLibrary_AddParameter_Statics::NewProp_InContainerType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAnimNextParameterLibrary_AddParameter_Statics::NewProp_InContainerType = { "InContainerType", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimNextParameterLibrary_eventAddParameter_Parms, InContainerType), Z_Construct_UEnum_StructUtils_EPropertyBagContainerType, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimNextParameterLibrary_AddParameter_Statics::NewProp_InContainerType_MetaData), Z_Construct_UFunction_UAnimNextParameterLibrary_AddParameter_Statics::NewProp_InContainerType_MetaData) }; // 3910950316
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimNextParameterLibrary_AddParameter_Statics::NewProp_InValueTypeObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimNextParameterLibrary_AddParameter_Statics::NewProp_InValueTypeObject = { "InValueTypeObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimNextParameterLibrary_eventAddParameter_Parms, InValueTypeObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimNextParameterLibrary_AddParameter_Statics::NewProp_InValueTypeObject_MetaData), Z_Construct_UFunction_UAnimNextParameterLibrary_AddParameter_Statics::NewProp_InValueTypeObject_MetaData) };
	void Z_Construct_UFunction_UAnimNextParameterLibrary_AddParameter_Statics::NewProp_bSetupUndoRedo_SetBit(void* Obj)
	{
		((AnimNextParameterLibrary_eventAddParameter_Parms*)Obj)->bSetupUndoRedo = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAnimNextParameterLibrary_AddParameter_Statics::NewProp_bSetupUndoRedo = { "bSetupUndoRedo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AnimNextParameterLibrary_eventAddParameter_Parms), &Z_Construct_UFunction_UAnimNextParameterLibrary_AddParameter_Statics::NewProp_bSetupUndoRedo_SetBit, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UAnimNextParameterLibrary_AddParameter_Statics::NewProp_bPrintPythonCommand_SetBit(void* Obj)
	{
		((AnimNextParameterLibrary_eventAddParameter_Parms*)Obj)->bPrintPythonCommand = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAnimNextParameterLibrary_AddParameter_Statics::NewProp_bPrintPythonCommand = { "bPrintPythonCommand", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AnimNextParameterLibrary_eventAddParameter_Parms), &Z_Construct_UFunction_UAnimNextParameterLibrary_AddParameter_Statics::NewProp_bPrintPythonCommand_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimNextParameterLibrary_AddParameter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimNextParameterLibrary_eventAddParameter_Parms, ReturnValue), Z_Construct_UClass_UAnimNextParameter_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimNextParameterLibrary_AddParameter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimNextParameterLibrary_AddParameter_Statics::NewProp_InName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimNextParameterLibrary_AddParameter_Statics::NewProp_InValueType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimNextParameterLibrary_AddParameter_Statics::NewProp_InValueType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimNextParameterLibrary_AddParameter_Statics::NewProp_InContainerType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimNextParameterLibrary_AddParameter_Statics::NewProp_InContainerType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimNextParameterLibrary_AddParameter_Statics::NewProp_InValueTypeObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimNextParameterLibrary_AddParameter_Statics::NewProp_bSetupUndoRedo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimNextParameterLibrary_AddParameter_Statics::NewProp_bPrintPythonCommand,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimNextParameterLibrary_AddParameter_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimNextParameterLibrary_AddParameter_Statics::Function_MetaDataParams[] = {
		{ "Category", "AnimNext|Parameter Library" },
		{ "CPP_Default_bPrintPythonCommand", "true" },
		{ "CPP_Default_bSetupUndoRedo", "true" },
		{ "CPP_Default_InValueTypeObject", "None" },
		{ "ModuleRelativePath", "Internal/Param/AnimNextParameterLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimNextParameterLibrary_AddParameter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimNextParameterLibrary, nullptr, "AddParameter", nullptr, nullptr, Z_Construct_UFunction_UAnimNextParameterLibrary_AddParameter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimNextParameterLibrary_AddParameter_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAnimNextParameterLibrary_AddParameter_Statics::AnimNextParameterLibrary_eventAddParameter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04440403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimNextParameterLibrary_AddParameter_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAnimNextParameterLibrary_AddParameter_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimNextParameterLibrary_AddParameter_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAnimNextParameterLibrary_AddParameter_Statics::AnimNextParameterLibrary_eventAddParameter_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAnimNextParameterLibrary_AddParameter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimNextParameterLibrary_AddParameter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimNextParameterLibrary_FindParameter_Statics
	{
		struct AnimNextParameterLibrary_eventFindParameter_Parms
		{
			FName InName;
			UAnimNextParameter* ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_InName;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAnimNextParameterLibrary_FindParameter_Statics::NewProp_InName = { "InName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimNextParameterLibrary_eventFindParameter_Parms, InName), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimNextParameterLibrary_FindParameter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimNextParameterLibrary_eventFindParameter_Parms, ReturnValue), Z_Construct_UClass_UAnimNextParameter_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimNextParameterLibrary_FindParameter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimNextParameterLibrary_FindParameter_Statics::NewProp_InName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimNextParameterLibrary_FindParameter_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimNextParameterLibrary_FindParameter_Statics::Function_MetaDataParams[] = {
		{ "Category", "AnimNext|Parameter Library" },
		{ "ModuleRelativePath", "Internal/Param/AnimNextParameterLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimNextParameterLibrary_FindParameter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimNextParameterLibrary, nullptr, "FindParameter", nullptr, nullptr, Z_Construct_UFunction_UAnimNextParameterLibrary_FindParameter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimNextParameterLibrary_FindParameter_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAnimNextParameterLibrary_FindParameter_Statics::AnimNextParameterLibrary_eventFindParameter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54040403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimNextParameterLibrary_FindParameter_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAnimNextParameterLibrary_FindParameter_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimNextParameterLibrary_FindParameter_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAnimNextParameterLibrary_FindParameter_Statics::AnimNextParameterLibrary_eventFindParameter_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAnimNextParameterLibrary_FindParameter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimNextParameterLibrary_FindParameter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimNextParameterLibrary_RemoveParameter_Statics
	{
		struct AnimNextParameterLibrary_eventRemoveParameter_Parms
		{
			FName InName;
			bool bSetupUndoRedo;
			bool bPrintPythonCommand;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_InName;
		static void NewProp_bSetupUndoRedo_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSetupUndoRedo;
		static void NewProp_bPrintPythonCommand_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPrintPythonCommand;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAnimNextParameterLibrary_RemoveParameter_Statics::NewProp_InName = { "InName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimNextParameterLibrary_eventRemoveParameter_Parms, InName), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UAnimNextParameterLibrary_RemoveParameter_Statics::NewProp_bSetupUndoRedo_SetBit(void* Obj)
	{
		((AnimNextParameterLibrary_eventRemoveParameter_Parms*)Obj)->bSetupUndoRedo = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAnimNextParameterLibrary_RemoveParameter_Statics::NewProp_bSetupUndoRedo = { "bSetupUndoRedo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AnimNextParameterLibrary_eventRemoveParameter_Parms), &Z_Construct_UFunction_UAnimNextParameterLibrary_RemoveParameter_Statics::NewProp_bSetupUndoRedo_SetBit, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UAnimNextParameterLibrary_RemoveParameter_Statics::NewProp_bPrintPythonCommand_SetBit(void* Obj)
	{
		((AnimNextParameterLibrary_eventRemoveParameter_Parms*)Obj)->bPrintPythonCommand = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAnimNextParameterLibrary_RemoveParameter_Statics::NewProp_bPrintPythonCommand = { "bPrintPythonCommand", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AnimNextParameterLibrary_eventRemoveParameter_Parms), &Z_Construct_UFunction_UAnimNextParameterLibrary_RemoveParameter_Statics::NewProp_bPrintPythonCommand_SetBit, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UAnimNextParameterLibrary_RemoveParameter_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AnimNextParameterLibrary_eventRemoveParameter_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAnimNextParameterLibrary_RemoveParameter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AnimNextParameterLibrary_eventRemoveParameter_Parms), &Z_Construct_UFunction_UAnimNextParameterLibrary_RemoveParameter_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimNextParameterLibrary_RemoveParameter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimNextParameterLibrary_RemoveParameter_Statics::NewProp_InName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimNextParameterLibrary_RemoveParameter_Statics::NewProp_bSetupUndoRedo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimNextParameterLibrary_RemoveParameter_Statics::NewProp_bPrintPythonCommand,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimNextParameterLibrary_RemoveParameter_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimNextParameterLibrary_RemoveParameter_Statics::Function_MetaDataParams[] = {
		{ "Category", "AnimNext|Parameter Library" },
		{ "CPP_Default_bPrintPythonCommand", "true" },
		{ "CPP_Default_bSetupUndoRedo", "true" },
		{ "ModuleRelativePath", "Internal/Param/AnimNextParameterLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimNextParameterLibrary_RemoveParameter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimNextParameterLibrary, nullptr, "RemoveParameter", nullptr, nullptr, Z_Construct_UFunction_UAnimNextParameterLibrary_RemoveParameter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimNextParameterLibrary_RemoveParameter_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAnimNextParameterLibrary_RemoveParameter_Statics::AnimNextParameterLibrary_eventRemoveParameter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimNextParameterLibrary_RemoveParameter_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAnimNextParameterLibrary_RemoveParameter_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimNextParameterLibrary_RemoveParameter_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAnimNextParameterLibrary_RemoveParameter_Statics::AnimNextParameterLibrary_eventRemoveParameter_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAnimNextParameterLibrary_RemoveParameter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimNextParameterLibrary_RemoveParameter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimNextParameterLibrary_RemoveParameters_Statics
	{
		struct AnimNextParameterLibrary_eventRemoveParameters_Parms
		{
			TArray<FName> InNames;
			bool bSetupUndoRedo;
			bool bPrintPythonCommand;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_InNames_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InNames_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InNames;
		static void NewProp_bSetupUndoRedo_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSetupUndoRedo;
		static void NewProp_bPrintPythonCommand_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPrintPythonCommand;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAnimNextParameterLibrary_RemoveParameters_Statics::NewProp_InNames_Inner = { "InNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimNextParameterLibrary_RemoveParameters_Statics::NewProp_InNames_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAnimNextParameterLibrary_RemoveParameters_Statics::NewProp_InNames = { "InNames", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimNextParameterLibrary_eventRemoveParameters_Parms, InNames), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimNextParameterLibrary_RemoveParameters_Statics::NewProp_InNames_MetaData), Z_Construct_UFunction_UAnimNextParameterLibrary_RemoveParameters_Statics::NewProp_InNames_MetaData) };
	void Z_Construct_UFunction_UAnimNextParameterLibrary_RemoveParameters_Statics::NewProp_bSetupUndoRedo_SetBit(void* Obj)
	{
		((AnimNextParameterLibrary_eventRemoveParameters_Parms*)Obj)->bSetupUndoRedo = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAnimNextParameterLibrary_RemoveParameters_Statics::NewProp_bSetupUndoRedo = { "bSetupUndoRedo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AnimNextParameterLibrary_eventRemoveParameters_Parms), &Z_Construct_UFunction_UAnimNextParameterLibrary_RemoveParameters_Statics::NewProp_bSetupUndoRedo_SetBit, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UAnimNextParameterLibrary_RemoveParameters_Statics::NewProp_bPrintPythonCommand_SetBit(void* Obj)
	{
		((AnimNextParameterLibrary_eventRemoveParameters_Parms*)Obj)->bPrintPythonCommand = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAnimNextParameterLibrary_RemoveParameters_Statics::NewProp_bPrintPythonCommand = { "bPrintPythonCommand", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AnimNextParameterLibrary_eventRemoveParameters_Parms), &Z_Construct_UFunction_UAnimNextParameterLibrary_RemoveParameters_Statics::NewProp_bPrintPythonCommand_SetBit, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UAnimNextParameterLibrary_RemoveParameters_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AnimNextParameterLibrary_eventRemoveParameters_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAnimNextParameterLibrary_RemoveParameters_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AnimNextParameterLibrary_eventRemoveParameters_Parms), &Z_Construct_UFunction_UAnimNextParameterLibrary_RemoveParameters_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimNextParameterLibrary_RemoveParameters_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimNextParameterLibrary_RemoveParameters_Statics::NewProp_InNames_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimNextParameterLibrary_RemoveParameters_Statics::NewProp_InNames,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimNextParameterLibrary_RemoveParameters_Statics::NewProp_bSetupUndoRedo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimNextParameterLibrary_RemoveParameters_Statics::NewProp_bPrintPythonCommand,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimNextParameterLibrary_RemoveParameters_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimNextParameterLibrary_RemoveParameters_Statics::Function_MetaDataParams[] = {
		{ "Category", "AnimNext|Parameter Library" },
		{ "CPP_Default_bPrintPythonCommand", "true" },
		{ "CPP_Default_bSetupUndoRedo", "true" },
		{ "ModuleRelativePath", "Internal/Param/AnimNextParameterLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimNextParameterLibrary_RemoveParameters_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimNextParameterLibrary, nullptr, "RemoveParameters", nullptr, nullptr, Z_Construct_UFunction_UAnimNextParameterLibrary_RemoveParameters_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimNextParameterLibrary_RemoveParameters_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAnimNextParameterLibrary_RemoveParameters_Statics::AnimNextParameterLibrary_eventRemoveParameters_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04440403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimNextParameterLibrary_RemoveParameters_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAnimNextParameterLibrary_RemoveParameters_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimNextParameterLibrary_RemoveParameters_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAnimNextParameterLibrary_RemoveParameters_Statics::AnimNextParameterLibrary_eventRemoveParameters_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAnimNextParameterLibrary_RemoveParameters()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimNextParameterLibrary_RemoveParameters_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimNextParameterLibrary);
	UClass* Z_Construct_UClass_UAnimNextParameterLibrary_NoRegister()
	{
		return UAnimNextParameterLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UAnimNextParameterLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Comment_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Comment;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Parameters_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Parameters_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Parameters;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimNextParameterLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AnimNextUncookedOnly,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNextParameterLibrary_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UAnimNextParameterLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAnimNextParameterLibrary_AddParameter, "AddParameter" }, // 982500828
		{ &Z_Construct_UFunction_UAnimNextParameterLibrary_FindParameter, "FindParameter" }, // 1567957938
		{ &Z_Construct_UFunction_UAnimNextParameterLibrary_RemoveParameter, "RemoveParameter" }, // 787364323
		{ &Z_Construct_UFunction_UAnimNextParameterLibrary_RemoveParameters, "RemoveParameters" }, // 3794025791
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNextParameterLibrary_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimNextParameterLibrary_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Defines a single parameter */" },
		{ "IncludePath", "Param/AnimNextParameterLibrary.h" },
		{ "ModuleRelativePath", "Internal/Param/AnimNextParameterLibrary.h" },
		{ "ToolTip", "Defines a single parameter" },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimNextParameterLibrary_Statics::NewProp_Comment_MetaData[] = {
		{ "Category", "Parameter" },
		{ "Comment", "/** Comment to display in editor */" },
		{ "ModuleRelativePath", "Internal/Param/AnimNextParameterLibrary.h" },
		{ "MultiLine", "" },
		{ "ToolTip", "Comment to display in editor" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAnimNextParameterLibrary_Statics::NewProp_Comment = { "Comment", nullptr, (EPropertyFlags)0x0040000800000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimNextParameterLibrary, Comment), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNextParameterLibrary_Statics::NewProp_Comment_MetaData), Z_Construct_UClass_UAnimNextParameterLibrary_Statics::NewProp_Comment_MetaData) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UAnimNextParameterLibrary_Statics::NewProp_Parameters_Inner = { "Parameters", nullptr, (EPropertyFlags)0x0004000800000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UAnimNextParameter_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimNextParameterLibrary_Statics::NewProp_Parameters_MetaData[] = {
		{ "Comment", "/** All parameters contained in this library - not saved, discovered at load time */" },
		{ "ModuleRelativePath", "Internal/Param/AnimNextParameterLibrary.h" },
		{ "ToolTip", "All parameters contained in this library - not saved, discovered at load time" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAnimNextParameterLibrary_Statics::NewProp_Parameters = { "Parameters", nullptr, (EPropertyFlags)0x0044000800002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimNextParameterLibrary, Parameters), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNextParameterLibrary_Statics::NewProp_Parameters_MetaData), Z_Construct_UClass_UAnimNextParameterLibrary_Statics::NewProp_Parameters_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimNextParameterLibrary_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNextParameterLibrary_Statics::NewProp_Comment,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNextParameterLibrary_Statics::NewProp_Parameters_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNextParameterLibrary_Statics::NewProp_Parameters,
	};
#endif // WITH_EDITORONLY_DATA
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimNextParameterLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimNextParameterLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimNextParameterLibrary_Statics::ClassParams = {
		&UAnimNextParameterLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		IF_WITH_EDITORONLY_DATA(Z_Construct_UClass_UAnimNextParameterLibrary_Statics::PropPointers, nullptr),
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		IF_WITH_EDITORONLY_DATA(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNextParameterLibrary_Statics::PropPointers), 0),
		0,
		0x000800A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNextParameterLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UAnimNextParameterLibrary_Statics::Class_MetaDataParams)
	};
#if WITH_EDITORONLY_DATA
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNextParameterLibrary_Statics::PropPointers) < 2048);
#endif
	UClass* Z_Construct_UClass_UAnimNextParameterLibrary()
	{
		if (!Z_Registration_Info_UClass_UAnimNextParameterLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimNextParameterLibrary.OuterSingleton, Z_Construct_UClass_UAnimNextParameterLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAnimNextParameterLibrary.OuterSingleton;
	}
	template<> ANIMNEXTUNCOOKEDONLY_API UClass* StaticClass<UAnimNextParameterLibrary>()
	{
		return UAnimNextParameterLibrary::StaticClass();
	}
	UAnimNextParameterLibrary::UAnimNextParameterLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimNextParameterLibrary);
	UAnimNextParameterLibrary::~UAnimNextParameterLibrary() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNextUncookedOnly_Internal_Param_AnimNextParameterLibrary_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNextUncookedOnly_Internal_Param_AnimNextParameterLibrary_h_Statics::ScriptStructInfo[] = {
		{ FAnimNextParameterLibraryAssetRegistryExportEntry::StaticStruct, Z_Construct_UScriptStruct_FAnimNextParameterLibraryAssetRegistryExportEntry_Statics::NewStructOps, TEXT("AnimNextParameterLibraryAssetRegistryExportEntry"), &Z_Registration_Info_UScriptStruct_AnimNextParameterLibraryAssetRegistryExportEntry, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimNextParameterLibraryAssetRegistryExportEntry), 2049618188U) },
		{ FAnimNextParameterLibraryAssetRegistryExports::StaticStruct, Z_Construct_UScriptStruct_FAnimNextParameterLibraryAssetRegistryExports_Statics::NewStructOps, TEXT("AnimNextParameterLibraryAssetRegistryExports"), &Z_Registration_Info_UScriptStruct_AnimNextParameterLibraryAssetRegistryExports, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimNextParameterLibraryAssetRegistryExports), 3724222752U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNextUncookedOnly_Internal_Param_AnimNextParameterLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAnimNextParameterLibrary, UAnimNextParameterLibrary::StaticClass, TEXT("UAnimNextParameterLibrary"), &Z_Registration_Info_UClass_UAnimNextParameterLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimNextParameterLibrary), 2684269906U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNextUncookedOnly_Internal_Param_AnimNextParameterLibrary_h_2025474581(TEXT("/Script/AnimNextUncookedOnly"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNextUncookedOnly_Internal_Param_AnimNextParameterLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNextUncookedOnly_Internal_Param_AnimNextParameterLibrary_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNextUncookedOnly_Internal_Param_AnimNextParameterLibrary_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNextUncookedOnly_Internal_Param_AnimNextParameterLibrary_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
