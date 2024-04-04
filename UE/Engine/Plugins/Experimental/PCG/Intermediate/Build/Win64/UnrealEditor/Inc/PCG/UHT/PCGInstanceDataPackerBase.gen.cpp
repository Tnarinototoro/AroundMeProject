// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InstanceDataPackers/PCGInstanceDataPackerBase.h"
#include "MeshSelectors/PCGMeshSelectorBase.h"
#include "PCGContext.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePCGInstanceDataPackerBase() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	PCG_API UClass* Z_Construct_UClass_UPCGInstanceDataPackerBase();
	PCG_API UClass* Z_Construct_UClass_UPCGInstanceDataPackerBase_NoRegister();
	PCG_API UClass* Z_Construct_UClass_UPCGMetadata_NoRegister();
	PCG_API UClass* Z_Construct_UClass_UPCGSpatialData_NoRegister();
	PCG_API UScriptStruct* Z_Construct_UScriptStruct_FPCGContext();
	PCG_API UScriptStruct* Z_Construct_UScriptStruct_FPCGMeshInstanceList();
	PCG_API UScriptStruct* Z_Construct_UScriptStruct_FPCGPackedCustomData();
	UPackage* Z_Construct_UPackage__Script_PCG();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PCGPackedCustomData;
class UScriptStruct* FPCGPackedCustomData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PCGPackedCustomData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PCGPackedCustomData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPCGPackedCustomData, (UObject*)Z_Construct_UPackage__Script_PCG(), TEXT("PCGPackedCustomData"));
	}
	return Z_Registration_Info_UScriptStruct_PCGPackedCustomData.OuterSingleton;
}
template<> PCG_API UScriptStruct* StaticStruct<FPCGPackedCustomData>()
{
	return FPCGPackedCustomData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPCGPackedCustomData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumCustomDataFloats_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumCustomDataFloats;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CustomData_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CustomData_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CustomData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPCGPackedCustomData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/InstanceDataPackers/PCGInstanceDataPackerBase.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPCGPackedCustomData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPCGPackedCustomData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPCGPackedCustomData_Statics::NewProp_NumCustomDataFloats_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/InstanceDataPackers/PCGInstanceDataPackerBase.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPCGPackedCustomData_Statics::NewProp_NumCustomDataFloats = { "NumCustomDataFloats", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGPackedCustomData, NumCustomDataFloats), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGPackedCustomData_Statics::NewProp_NumCustomDataFloats_MetaData), Z_Construct_UScriptStruct_FPCGPackedCustomData_Statics::NewProp_NumCustomDataFloats_MetaData) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPCGPackedCustomData_Statics::NewProp_CustomData_Inner = { "CustomData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPCGPackedCustomData_Statics::NewProp_CustomData_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/InstanceDataPackers/PCGInstanceDataPackerBase.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPCGPackedCustomData_Statics::NewProp_CustomData = { "CustomData", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGPackedCustomData, CustomData), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGPackedCustomData_Statics::NewProp_CustomData_MetaData), Z_Construct_UScriptStruct_FPCGPackedCustomData_Statics::NewProp_CustomData_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPCGPackedCustomData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGPackedCustomData_Statics::NewProp_NumCustomDataFloats,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGPackedCustomData_Statics::NewProp_CustomData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGPackedCustomData_Statics::NewProp_CustomData,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPCGPackedCustomData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PCG,
		nullptr,
		&NewStructOps,
		"PCGPackedCustomData",
		Z_Construct_UScriptStruct_FPCGPackedCustomData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGPackedCustomData_Statics::PropPointers),
		sizeof(FPCGPackedCustomData),
		alignof(FPCGPackedCustomData),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGPackedCustomData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPCGPackedCustomData_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGPackedCustomData_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FPCGPackedCustomData()
	{
		if (!Z_Registration_Info_UScriptStruct_PCGPackedCustomData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PCGPackedCustomData.InnerSingleton, Z_Construct_UScriptStruct_FPCGPackedCustomData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PCGPackedCustomData.InnerSingleton;
	}
	DEFINE_FUNCTION(UPCGInstanceDataPackerBase::execPackCustomDataFromAttributes)
	{
		P_GET_STRUCT_REF(FPCGMeshInstanceList,Z_Param_Out_InstanceList);
		P_GET_OBJECT(UPCGMetadata,Z_Param_Metadata);
		P_GET_TARRAY_REF(FName,Z_Param_Out_AttributeNames);
		P_GET_STRUCT_REF(FPCGPackedCustomData,Z_Param_Out_OutPackedCustomData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PackCustomDataFromAttributes(Z_Param_Out_InstanceList,Z_Param_Metadata,Z_Param_Out_AttributeNames,Z_Param_Out_OutPackedCustomData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPCGInstanceDataPackerBase::execAddTypeToPacking)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_TypeId);
		P_GET_STRUCT_REF(FPCGPackedCustomData,Z_Param_Out_OutPackedCustomData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->AddTypeToPacking(Z_Param_TypeId,Z_Param_Out_OutPackedCustomData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPCGInstanceDataPackerBase::execPackInstances)
	{
		P_GET_STRUCT_REF(FPCGContext,Z_Param_Out_Context);
		P_GET_OBJECT(UPCGSpatialData,Z_Param_InSpatialData);
		P_GET_STRUCT_REF(FPCGMeshInstanceList,Z_Param_Out_InstanceList);
		P_GET_STRUCT_REF(FPCGPackedCustomData,Z_Param_Out_OutPackedCustomData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PackInstances_Implementation(Z_Param_Out_Context,Z_Param_InSpatialData,Z_Param_Out_InstanceList,Z_Param_Out_OutPackedCustomData);
		P_NATIVE_END;
	}
	struct PCGInstanceDataPackerBase_eventPackInstances_Parms
	{
		FPCGContext Context;
		const UPCGSpatialData* InSpatialData;
		FPCGMeshInstanceList InstanceList;
		FPCGPackedCustomData OutPackedCustomData;
	};
	static FName NAME_UPCGInstanceDataPackerBase_PackInstances = FName(TEXT("PackInstances"));
	void UPCGInstanceDataPackerBase::PackInstances(FPCGContext& Context, const UPCGSpatialData* InSpatialData, FPCGMeshInstanceList const& InstanceList, FPCGPackedCustomData& OutPackedCustomData) const
	{
		PCGInstanceDataPackerBase_eventPackInstances_Parms Parms;
		Parms.Context=Context;
		Parms.InSpatialData=InSpatialData;
		Parms.InstanceList=InstanceList;
		Parms.OutPackedCustomData=OutPackedCustomData;
		const_cast<UPCGInstanceDataPackerBase*>(this)->ProcessEvent(FindFunctionChecked(NAME_UPCGInstanceDataPackerBase_PackInstances),&Parms);
		Context=Parms.Context;
		OutPackedCustomData=Parms.OutPackedCustomData;
	}
	void UPCGInstanceDataPackerBase::StaticRegisterNativesUPCGInstanceDataPackerBase()
	{
		UClass* Class = UPCGInstanceDataPackerBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddTypeToPacking", &UPCGInstanceDataPackerBase::execAddTypeToPacking },
			{ "PackCustomDataFromAttributes", &UPCGInstanceDataPackerBase::execPackCustomDataFromAttributes },
			{ "PackInstances", &UPCGInstanceDataPackerBase::execPackInstances },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPCGInstanceDataPackerBase_AddTypeToPacking_Statics
	{
		struct PCGInstanceDataPackerBase_eventAddTypeToPacking_Parms
		{
			int32 TypeId;
			FPCGPackedCustomData OutPackedCustomData;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_TypeId;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutPackedCustomData;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPCGInstanceDataPackerBase_AddTypeToPacking_Statics::NewProp_TypeId = { "TypeId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGInstanceDataPackerBase_eventAddTypeToPacking_Parms, TypeId), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPCGInstanceDataPackerBase_AddTypeToPacking_Statics::NewProp_OutPackedCustomData = { "OutPackedCustomData", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGInstanceDataPackerBase_eventAddTypeToPacking_Parms, OutPackedCustomData), Z_Construct_UScriptStruct_FPCGPackedCustomData, METADATA_PARAMS(0, nullptr) }; // 2192424354
	void Z_Construct_UFunction_UPCGInstanceDataPackerBase_AddTypeToPacking_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PCGInstanceDataPackerBase_eventAddTypeToPacking_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPCGInstanceDataPackerBase_AddTypeToPacking_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PCGInstanceDataPackerBase_eventAddTypeToPacking_Parms), &Z_Construct_UFunction_UPCGInstanceDataPackerBase_AddTypeToPacking_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGInstanceDataPackerBase_AddTypeToPacking_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGInstanceDataPackerBase_AddTypeToPacking_Statics::NewProp_TypeId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGInstanceDataPackerBase_AddTypeToPacking_Statics::NewProp_OutPackedCustomData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGInstanceDataPackerBase_AddTypeToPacking_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGInstanceDataPackerBase_AddTypeToPacking_Statics::Function_MetaDataParams[] = {
		{ "Category", "InstancePacking" },
		{ "Comment", "/** Interprets Metadata TypeId and increments OutPackedCustomData.NumCustomDataFloats appropriately. Returns false if the type could not be interpreted. */" },
		{ "ModuleRelativePath", "Public/InstanceDataPackers/PCGInstanceDataPackerBase.h" },
		{ "ToolTip", "Interprets Metadata TypeId and increments OutPackedCustomData.NumCustomDataFloats appropriately. Returns false if the type could not be interpreted." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGInstanceDataPackerBase_AddTypeToPacking_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPCGInstanceDataPackerBase, nullptr, "AddTypeToPacking", nullptr, nullptr, Z_Construct_UFunction_UPCGInstanceDataPackerBase_AddTypeToPacking_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGInstanceDataPackerBase_AddTypeToPacking_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPCGInstanceDataPackerBase_AddTypeToPacking_Statics::PCGInstanceDataPackerBase_eventAddTypeToPacking_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGInstanceDataPackerBase_AddTypeToPacking_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPCGInstanceDataPackerBase_AddTypeToPacking_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGInstanceDataPackerBase_AddTypeToPacking_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UPCGInstanceDataPackerBase_AddTypeToPacking_Statics::PCGInstanceDataPackerBase_eventAddTypeToPacking_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPCGInstanceDataPackerBase_AddTypeToPacking()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGInstanceDataPackerBase_AddTypeToPacking_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPCGInstanceDataPackerBase_PackCustomDataFromAttributes_Statics
	{
		struct PCGInstanceDataPackerBase_eventPackCustomDataFromAttributes_Parms
		{
			FPCGMeshInstanceList InstanceList;
			const UPCGMetadata* Metadata;
			TArray<FName> AttributeNames;
			FPCGPackedCustomData OutPackedCustomData;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InstanceList_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InstanceList;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Metadata_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Metadata;
		static const UECodeGen_Private::FNamePropertyParams NewProp_AttributeNames_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeNames_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AttributeNames;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutPackedCustomData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGInstanceDataPackerBase_PackCustomDataFromAttributes_Statics::NewProp_InstanceList_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPCGInstanceDataPackerBase_PackCustomDataFromAttributes_Statics::NewProp_InstanceList = { "InstanceList", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGInstanceDataPackerBase_eventPackCustomDataFromAttributes_Parms, InstanceList), Z_Construct_UScriptStruct_FPCGMeshInstanceList, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGInstanceDataPackerBase_PackCustomDataFromAttributes_Statics::NewProp_InstanceList_MetaData), Z_Construct_UFunction_UPCGInstanceDataPackerBase_PackCustomDataFromAttributes_Statics::NewProp_InstanceList_MetaData) }; // 76445548
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGInstanceDataPackerBase_PackCustomDataFromAttributes_Statics::NewProp_Metadata_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPCGInstanceDataPackerBase_PackCustomDataFromAttributes_Statics::NewProp_Metadata = { "Metadata", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGInstanceDataPackerBase_eventPackCustomDataFromAttributes_Parms, Metadata), Z_Construct_UClass_UPCGMetadata_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGInstanceDataPackerBase_PackCustomDataFromAttributes_Statics::NewProp_Metadata_MetaData), Z_Construct_UFunction_UPCGInstanceDataPackerBase_PackCustomDataFromAttributes_Statics::NewProp_Metadata_MetaData) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPCGInstanceDataPackerBase_PackCustomDataFromAttributes_Statics::NewProp_AttributeNames_Inner = { "AttributeNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGInstanceDataPackerBase_PackCustomDataFromAttributes_Statics::NewProp_AttributeNames_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UPCGInstanceDataPackerBase_PackCustomDataFromAttributes_Statics::NewProp_AttributeNames = { "AttributeNames", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGInstanceDataPackerBase_eventPackCustomDataFromAttributes_Parms, AttributeNames), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGInstanceDataPackerBase_PackCustomDataFromAttributes_Statics::NewProp_AttributeNames_MetaData), Z_Construct_UFunction_UPCGInstanceDataPackerBase_PackCustomDataFromAttributes_Statics::NewProp_AttributeNames_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPCGInstanceDataPackerBase_PackCustomDataFromAttributes_Statics::NewProp_OutPackedCustomData = { "OutPackedCustomData", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGInstanceDataPackerBase_eventPackCustomDataFromAttributes_Parms, OutPackedCustomData), Z_Construct_UScriptStruct_FPCGPackedCustomData, METADATA_PARAMS(0, nullptr) }; // 2192424354
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGInstanceDataPackerBase_PackCustomDataFromAttributes_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGInstanceDataPackerBase_PackCustomDataFromAttributes_Statics::NewProp_InstanceList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGInstanceDataPackerBase_PackCustomDataFromAttributes_Statics::NewProp_Metadata,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGInstanceDataPackerBase_PackCustomDataFromAttributes_Statics::NewProp_AttributeNames_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGInstanceDataPackerBase_PackCustomDataFromAttributes_Statics::NewProp_AttributeNames,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGInstanceDataPackerBase_PackCustomDataFromAttributes_Statics::NewProp_OutPackedCustomData,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGInstanceDataPackerBase_PackCustomDataFromAttributes_Statics::Function_MetaDataParams[] = {
		{ "Category", "InstancePacking" },
		{ "Comment", "/** Build a PackedCustomData by processing each attribute in order for each point in the InstanceList */" },
		{ "ModuleRelativePath", "Public/InstanceDataPackers/PCGInstanceDataPackerBase.h" },
		{ "ToolTip", "Build a PackedCustomData by processing each attribute in order for each point in the InstanceList" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGInstanceDataPackerBase_PackCustomDataFromAttributes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPCGInstanceDataPackerBase, nullptr, "PackCustomDataFromAttributes", nullptr, nullptr, Z_Construct_UFunction_UPCGInstanceDataPackerBase_PackCustomDataFromAttributes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGInstanceDataPackerBase_PackCustomDataFromAttributes_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPCGInstanceDataPackerBase_PackCustomDataFromAttributes_Statics::PCGInstanceDataPackerBase_eventPackCustomDataFromAttributes_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGInstanceDataPackerBase_PackCustomDataFromAttributes_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPCGInstanceDataPackerBase_PackCustomDataFromAttributes_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGInstanceDataPackerBase_PackCustomDataFromAttributes_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UPCGInstanceDataPackerBase_PackCustomDataFromAttributes_Statics::PCGInstanceDataPackerBase_eventPackCustomDataFromAttributes_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPCGInstanceDataPackerBase_PackCustomDataFromAttributes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGInstanceDataPackerBase_PackCustomDataFromAttributes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPCGInstanceDataPackerBase_PackInstances_Statics
	{
		static const UECodeGen_Private::FStructPropertyParams NewProp_Context;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InSpatialData_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InSpatialData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InstanceList_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InstanceList;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutPackedCustomData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPCGInstanceDataPackerBase_PackInstances_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGInstanceDataPackerBase_eventPackInstances_Parms, Context), Z_Construct_UScriptStruct_FPCGContext, METADATA_PARAMS(0, nullptr) }; // 1659575695
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGInstanceDataPackerBase_PackInstances_Statics::NewProp_InSpatialData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPCGInstanceDataPackerBase_PackInstances_Statics::NewProp_InSpatialData = { "InSpatialData", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGInstanceDataPackerBase_eventPackInstances_Parms, InSpatialData), Z_Construct_UClass_UPCGSpatialData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGInstanceDataPackerBase_PackInstances_Statics::NewProp_InSpatialData_MetaData), Z_Construct_UFunction_UPCGInstanceDataPackerBase_PackInstances_Statics::NewProp_InSpatialData_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGInstanceDataPackerBase_PackInstances_Statics::NewProp_InstanceList_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPCGInstanceDataPackerBase_PackInstances_Statics::NewProp_InstanceList = { "InstanceList", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGInstanceDataPackerBase_eventPackInstances_Parms, InstanceList), Z_Construct_UScriptStruct_FPCGMeshInstanceList, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGInstanceDataPackerBase_PackInstances_Statics::NewProp_InstanceList_MetaData), Z_Construct_UFunction_UPCGInstanceDataPackerBase_PackInstances_Statics::NewProp_InstanceList_MetaData) }; // 76445548
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPCGInstanceDataPackerBase_PackInstances_Statics::NewProp_OutPackedCustomData = { "OutPackedCustomData", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGInstanceDataPackerBase_eventPackInstances_Parms, OutPackedCustomData), Z_Construct_UScriptStruct_FPCGPackedCustomData, METADATA_PARAMS(0, nullptr) }; // 2192424354
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGInstanceDataPackerBase_PackInstances_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGInstanceDataPackerBase_PackInstances_Statics::NewProp_Context,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGInstanceDataPackerBase_PackInstances_Statics::NewProp_InSpatialData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGInstanceDataPackerBase_PackInstances_Statics::NewProp_InstanceList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGInstanceDataPackerBase_PackInstances_Statics::NewProp_OutPackedCustomData,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGInstanceDataPackerBase_PackInstances_Statics::Function_MetaDataParams[] = {
		{ "Category", "InstancePacking" },
		{ "Comment", "/** Defines the strategy for (H)ISM custom float data packing */" },
		{ "ModuleRelativePath", "Public/InstanceDataPackers/PCGInstanceDataPackerBase.h" },
		{ "ToolTip", "Defines the strategy for (H)ISM custom float data packing" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGInstanceDataPackerBase_PackInstances_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPCGInstanceDataPackerBase, nullptr, "PackInstances", nullptr, nullptr, Z_Construct_UFunction_UPCGInstanceDataPackerBase_PackInstances_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGInstanceDataPackerBase_PackInstances_Statics::PropPointers), sizeof(PCGInstanceDataPackerBase_eventPackInstances_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGInstanceDataPackerBase_PackInstances_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPCGInstanceDataPackerBase_PackInstances_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGInstanceDataPackerBase_PackInstances_Statics::PropPointers) < 2048);
	static_assert(sizeof(PCGInstanceDataPackerBase_eventPackInstances_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPCGInstanceDataPackerBase_PackInstances()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGInstanceDataPackerBase_PackInstances_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPCGInstanceDataPackerBase);
	UClass* Z_Construct_UClass_UPCGInstanceDataPackerBase_NoRegister()
	{
		return UPCGInstanceDataPackerBase::StaticClass();
	}
	struct Z_Construct_UClass_UPCGInstanceDataPackerBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPCGInstanceDataPackerBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_PCG,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGInstanceDataPackerBase_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UPCGInstanceDataPackerBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPCGInstanceDataPackerBase_AddTypeToPacking, "AddTypeToPacking" }, // 116986505
		{ &Z_Construct_UFunction_UPCGInstanceDataPackerBase_PackCustomDataFromAttributes, "PackCustomDataFromAttributes" }, // 2284457752
		{ &Z_Construct_UFunction_UPCGInstanceDataPackerBase_PackInstances, "PackInstances" }, // 1305538404
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGInstanceDataPackerBase_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGInstanceDataPackerBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Procedural" },
		{ "IncludePath", "InstanceDataPackers/PCGInstanceDataPackerBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/InstanceDataPackers/PCGInstanceDataPackerBase.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPCGInstanceDataPackerBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGInstanceDataPackerBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGInstanceDataPackerBase_Statics::ClassParams = {
		&UPCGInstanceDataPackerBase::StaticClass,
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
		0x001000A1u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGInstanceDataPackerBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGInstanceDataPackerBase_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UPCGInstanceDataPackerBase()
	{
		if (!Z_Registration_Info_UClass_UPCGInstanceDataPackerBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGInstanceDataPackerBase.OuterSingleton, Z_Construct_UClass_UPCGInstanceDataPackerBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPCGInstanceDataPackerBase.OuterSingleton;
	}
	template<> PCG_API UClass* StaticClass<UPCGInstanceDataPackerBase>()
	{
		return UPCGInstanceDataPackerBase::StaticClass();
	}
	UPCGInstanceDataPackerBase::UPCGInstanceDataPackerBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPCGInstanceDataPackerBase);
	UPCGInstanceDataPackerBase::~UPCGInstanceDataPackerBase() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_InstanceDataPackers_PCGInstanceDataPackerBase_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_InstanceDataPackers_PCGInstanceDataPackerBase_h_Statics::ScriptStructInfo[] = {
		{ FPCGPackedCustomData::StaticStruct, Z_Construct_UScriptStruct_FPCGPackedCustomData_Statics::NewStructOps, TEXT("PCGPackedCustomData"), &Z_Registration_Info_UScriptStruct_PCGPackedCustomData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPCGPackedCustomData), 2192424354U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_InstanceDataPackers_PCGInstanceDataPackerBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPCGInstanceDataPackerBase, UPCGInstanceDataPackerBase::StaticClass, TEXT("UPCGInstanceDataPackerBase"), &Z_Registration_Info_UClass_UPCGInstanceDataPackerBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGInstanceDataPackerBase), 2266589U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_InstanceDataPackers_PCGInstanceDataPackerBase_h_3968285902(TEXT("/Script/PCG"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_InstanceDataPackers_PCGInstanceDataPackerBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_InstanceDataPackers_PCGInstanceDataPackerBase_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_InstanceDataPackers_PCGInstanceDataPackerBase_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_InstanceDataPackers_PCGInstanceDataPackerBase_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
