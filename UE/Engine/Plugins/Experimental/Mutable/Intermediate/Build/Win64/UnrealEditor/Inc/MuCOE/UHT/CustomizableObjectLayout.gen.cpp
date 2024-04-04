// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MuCOE/CustomizableObjectLayout.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCustomizableObjectLayout() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
	CUSTOMIZABLEOBJECTEDITOR_API UClass* Z_Construct_UClass_UCustomizableObjectLayout();
	CUSTOMIZABLEOBJECTEDITOR_API UClass* Z_Construct_UClass_UCustomizableObjectLayout_NoRegister();
	CUSTOMIZABLEOBJECTEDITOR_API UEnum* Z_Construct_UEnum_CustomizableObjectEditor_ECustomizableObjectLayoutBlockReductionMethod();
	CUSTOMIZABLEOBJECTEDITOR_API UEnum* Z_Construct_UEnum_CustomizableObjectEditor_ECustomizableObjectTextureLayoutPackingStrategy();
	CUSTOMIZABLEOBJECTEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FCustomizableObjectLayoutBlock();
	UPackage* Z_Construct_UPackage__Script_CustomizableObjectEditor();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECustomizableObjectTextureLayoutPackingStrategy;
	static UEnum* ECustomizableObjectTextureLayoutPackingStrategy_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ECustomizableObjectTextureLayoutPackingStrategy.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ECustomizableObjectTextureLayoutPackingStrategy.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CustomizableObjectEditor_ECustomizableObjectTextureLayoutPackingStrategy, (UObject*)Z_Construct_UPackage__Script_CustomizableObjectEditor(), TEXT("ECustomizableObjectTextureLayoutPackingStrategy"));
		}
		return Z_Registration_Info_UEnum_ECustomizableObjectTextureLayoutPackingStrategy.OuterSingleton;
	}
	template<> CUSTOMIZABLEOBJECTEDITOR_API UEnum* StaticEnum<ECustomizableObjectTextureLayoutPackingStrategy>()
	{
		return ECustomizableObjectTextureLayoutPackingStrategy_StaticEnum();
	}
	struct Z_Construct_UEnum_CustomizableObjectEditor_ECustomizableObjectTextureLayoutPackingStrategy_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_CustomizableObjectEditor_ECustomizableObjectTextureLayoutPackingStrategy_Statics::Enumerators[] = {
		{ "ECustomizableObjectTextureLayoutPackingStrategy::Resizable", (int64)ECustomizableObjectTextureLayoutPackingStrategy::Resizable },
		{ "ECustomizableObjectTextureLayoutPackingStrategy::Fixed", (int64)ECustomizableObjectTextureLayoutPackingStrategy::Fixed },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_CustomizableObjectEditor_ECustomizableObjectTextureLayoutPackingStrategy_Statics::Enum_MetaDataParams[] = {
		{ "Fixed.Comment", "// The layout resizes the blocks to keep its size.\n" },
		{ "Fixed.DisplayName", "Fixed Layout" },
		{ "Fixed.Name", "ECustomizableObjectTextureLayoutPackingStrategy::Fixed" },
		{ "Fixed.ToolTip", "The layout resizes the blocks to keep its size." },
		{ "ModuleRelativePath", "Classes/MuCOE/CustomizableObjectLayout.h" },
		{ "Resizable.Comment", "// The layout increases its size to fit all the blocks.\n" },
		{ "Resizable.DisplayName", "Resizable Layout" },
		{ "Resizable.Name", "ECustomizableObjectTextureLayoutPackingStrategy::Resizable" },
		{ "Resizable.ToolTip", "The layout increases its size to fit all the blocks." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CustomizableObjectEditor_ECustomizableObjectTextureLayoutPackingStrategy_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_CustomizableObjectEditor,
		nullptr,
		"ECustomizableObjectTextureLayoutPackingStrategy",
		"ECustomizableObjectTextureLayoutPackingStrategy",
		Z_Construct_UEnum_CustomizableObjectEditor_ECustomizableObjectTextureLayoutPackingStrategy_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_CustomizableObjectEditor_ECustomizableObjectTextureLayoutPackingStrategy_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_CustomizableObjectEditor_ECustomizableObjectTextureLayoutPackingStrategy_Statics::Enum_MetaDataParams), Z_Construct_UEnum_CustomizableObjectEditor_ECustomizableObjectTextureLayoutPackingStrategy_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_CustomizableObjectEditor_ECustomizableObjectTextureLayoutPackingStrategy()
	{
		if (!Z_Registration_Info_UEnum_ECustomizableObjectTextureLayoutPackingStrategy.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECustomizableObjectTextureLayoutPackingStrategy.InnerSingleton, Z_Construct_UEnum_CustomizableObjectEditor_ECustomizableObjectTextureLayoutPackingStrategy_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ECustomizableObjectTextureLayoutPackingStrategy.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECustomizableObjectLayoutBlockReductionMethod;
	static UEnum* ECustomizableObjectLayoutBlockReductionMethod_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ECustomizableObjectLayoutBlockReductionMethod.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ECustomizableObjectLayoutBlockReductionMethod.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CustomizableObjectEditor_ECustomizableObjectLayoutBlockReductionMethod, (UObject*)Z_Construct_UPackage__Script_CustomizableObjectEditor(), TEXT("ECustomizableObjectLayoutBlockReductionMethod"));
		}
		return Z_Registration_Info_UEnum_ECustomizableObjectLayoutBlockReductionMethod.OuterSingleton;
	}
	template<> CUSTOMIZABLEOBJECTEDITOR_API UEnum* StaticEnum<ECustomizableObjectLayoutBlockReductionMethod>()
	{
		return ECustomizableObjectLayoutBlockReductionMethod_StaticEnum();
	}
	struct Z_Construct_UEnum_CustomizableObjectEditor_ECustomizableObjectLayoutBlockReductionMethod_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_CustomizableObjectEditor_ECustomizableObjectLayoutBlockReductionMethod_Statics::Enumerators[] = {
		{ "ECustomizableObjectLayoutBlockReductionMethod::Halve", (int64)ECustomizableObjectLayoutBlockReductionMethod::Halve },
		{ "ECustomizableObjectLayoutBlockReductionMethod::Unitary", (int64)ECustomizableObjectLayoutBlockReductionMethod::Unitary },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_CustomizableObjectEditor_ECustomizableObjectLayoutBlockReductionMethod_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "// Fixed Layout reduction methods\n" },
		{ "Halve.Comment", "// Layout blocks will be reduced by halves\n" },
		{ "Halve.DisplayName", "Reduce by Half" },
		{ "Halve.Name", "ECustomizableObjectLayoutBlockReductionMethod::Halve" },
		{ "Halve.ToolTip", "Layout blocks will be reduced by halves" },
		{ "ModuleRelativePath", "Classes/MuCOE/CustomizableObjectLayout.h" },
		{ "ToolTip", "Fixed Layout reduction methods" },
		{ "Unitary.Comment", "// LAyout blocks will be reduced by a grid unit\n" },
		{ "Unitary.DisplayName", "Reduce by Unit" },
		{ "Unitary.Name", "ECustomizableObjectLayoutBlockReductionMethod::Unitary" },
		{ "Unitary.ToolTip", "LAyout blocks will be reduced by a grid unit" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CustomizableObjectEditor_ECustomizableObjectLayoutBlockReductionMethod_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_CustomizableObjectEditor,
		nullptr,
		"ECustomizableObjectLayoutBlockReductionMethod",
		"ECustomizableObjectLayoutBlockReductionMethod",
		Z_Construct_UEnum_CustomizableObjectEditor_ECustomizableObjectLayoutBlockReductionMethod_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_CustomizableObjectEditor_ECustomizableObjectLayoutBlockReductionMethod_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_CustomizableObjectEditor_ECustomizableObjectLayoutBlockReductionMethod_Statics::Enum_MetaDataParams), Z_Construct_UEnum_CustomizableObjectEditor_ECustomizableObjectLayoutBlockReductionMethod_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_CustomizableObjectEditor_ECustomizableObjectLayoutBlockReductionMethod()
	{
		if (!Z_Registration_Info_UEnum_ECustomizableObjectLayoutBlockReductionMethod.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECustomizableObjectLayoutBlockReductionMethod.InnerSingleton, Z_Construct_UEnum_CustomizableObjectEditor_ECustomizableObjectLayoutBlockReductionMethod_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ECustomizableObjectLayoutBlockReductionMethod.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CustomizableObjectLayoutBlock;
class UScriptStruct* FCustomizableObjectLayoutBlock::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CustomizableObjectLayoutBlock.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CustomizableObjectLayoutBlock.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCustomizableObjectLayoutBlock, (UObject*)Z_Construct_UPackage__Script_CustomizableObjectEditor(), TEXT("CustomizableObjectLayoutBlock"));
	}
	return Z_Registration_Info_UScriptStruct_CustomizableObjectLayoutBlock.OuterSingleton;
}
template<> CUSTOMIZABLEOBJECTEDITOR_API UScriptStruct* StaticStruct<FCustomizableObjectLayoutBlock>()
{
	return FCustomizableObjectLayoutBlock::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCustomizableObjectLayoutBlock_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Min_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Min;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Max_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Max;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Priority_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_Priority;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Id_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Id;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseSymmetry_MetaData[];
#endif
		static void NewProp_bUseSymmetry_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseSymmetry;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomizableObjectLayoutBlock_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/MuCOE/CustomizableObjectLayout.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCustomizableObjectLayoutBlock_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCustomizableObjectLayoutBlock>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomizableObjectLayoutBlock_Statics::NewProp_Min_MetaData[] = {
		{ "Category", "CustomizableObject" },
		{ "ModuleRelativePath", "Classes/MuCOE/CustomizableObjectLayout.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCustomizableObjectLayoutBlock_Statics::NewProp_Min = { "Min", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCustomizableObjectLayoutBlock, Min), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizableObjectLayoutBlock_Statics::NewProp_Min_MetaData), Z_Construct_UScriptStruct_FCustomizableObjectLayoutBlock_Statics::NewProp_Min_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomizableObjectLayoutBlock_Statics::NewProp_Max_MetaData[] = {
		{ "Category", "CustomizableObject" },
		{ "ModuleRelativePath", "Classes/MuCOE/CustomizableObjectLayout.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCustomizableObjectLayoutBlock_Statics::NewProp_Max = { "Max", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCustomizableObjectLayoutBlock, Max), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizableObjectLayoutBlock_Statics::NewProp_Max_MetaData), Z_Construct_UScriptStruct_FCustomizableObjectLayoutBlock_Statics::NewProp_Max_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomizableObjectLayoutBlock_Statics::NewProp_Priority_MetaData[] = {
		{ "Category", "CustomizableObject" },
		{ "ModuleRelativePath", "Classes/MuCOE/CustomizableObjectLayout.h" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FCustomizableObjectLayoutBlock_Statics::NewProp_Priority = { "Priority", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCustomizableObjectLayoutBlock, Priority), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizableObjectLayoutBlock_Statics::NewProp_Priority_MetaData), Z_Construct_UScriptStruct_FCustomizableObjectLayoutBlock_Statics::NewProp_Priority_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomizableObjectLayoutBlock_Statics::NewProp_Id_MetaData[] = {
		{ "Comment", "//! Unique unchangeable id used to reference this block from other nodes.\n" },
		{ "ModuleRelativePath", "Classes/MuCOE/CustomizableObjectLayout.h" },
		{ "ToolTip", "! Unique unchangeable id used to reference this block from other nodes." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCustomizableObjectLayoutBlock_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCustomizableObjectLayoutBlock, Id), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizableObjectLayoutBlock_Statics::NewProp_Id_MetaData), Z_Construct_UScriptStruct_FCustomizableObjectLayoutBlock_Statics::NewProp_Id_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomizableObjectLayoutBlock_Statics::NewProp_bUseSymmetry_MetaData[] = {
		{ "Category", "CustomizableObject" },
		{ "ModuleRelativePath", "Classes/MuCOE/CustomizableObjectLayout.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FCustomizableObjectLayoutBlock_Statics::NewProp_bUseSymmetry_SetBit(void* Obj)
	{
		((FCustomizableObjectLayoutBlock*)Obj)->bUseSymmetry = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCustomizableObjectLayoutBlock_Statics::NewProp_bUseSymmetry = { "bUseSymmetry", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FCustomizableObjectLayoutBlock), &Z_Construct_UScriptStruct_FCustomizableObjectLayoutBlock_Statics::NewProp_bUseSymmetry_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizableObjectLayoutBlock_Statics::NewProp_bUseSymmetry_MetaData), Z_Construct_UScriptStruct_FCustomizableObjectLayoutBlock_Statics::NewProp_bUseSymmetry_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCustomizableObjectLayoutBlock_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizableObjectLayoutBlock_Statics::NewProp_Min,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizableObjectLayoutBlock_Statics::NewProp_Max,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizableObjectLayoutBlock_Statics::NewProp_Priority,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizableObjectLayoutBlock_Statics::NewProp_Id,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizableObjectLayoutBlock_Statics::NewProp_bUseSymmetry,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCustomizableObjectLayoutBlock_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CustomizableObjectEditor,
		nullptr,
		&NewStructOps,
		"CustomizableObjectLayoutBlock",
		Z_Construct_UScriptStruct_FCustomizableObjectLayoutBlock_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizableObjectLayoutBlock_Statics::PropPointers),
		sizeof(FCustomizableObjectLayoutBlock),
		alignof(FCustomizableObjectLayoutBlock),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizableObjectLayoutBlock_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCustomizableObjectLayoutBlock_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizableObjectLayoutBlock_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FCustomizableObjectLayoutBlock()
	{
		if (!Z_Registration_Info_UScriptStruct_CustomizableObjectLayoutBlock.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CustomizableObjectLayoutBlock.InnerSingleton, Z_Construct_UScriptStruct_FCustomizableObjectLayoutBlock_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CustomizableObjectLayoutBlock.InnerSingleton;
	}
	void UCustomizableObjectLayout::StaticRegisterNativesUCustomizableObjectLayout()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCustomizableObjectLayout);
	UClass* Z_Construct_UClass_UCustomizableObjectLayout_NoRegister()
	{
		return UCustomizableObjectLayout::StaticClass();
	}
	struct Z_Construct_UClass_UCustomizableObjectLayout_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Blocks_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Blocks_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Blocks;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Mesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LOD_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_LOD;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Material_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Material;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UVChannel_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_UVChannel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GridSize_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GridSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxGridSize_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MaxGridSize;
		static const UECodeGen_Private::FBytePropertyParams NewProp_PackingStrategy_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PackingStrategy_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_PackingStrategy;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LayoutName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_LayoutName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIgnoreUnassignedVertexWarning_MetaData[];
#endif
		static void NewProp_bIgnoreUnassignedVertexWarning_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIgnoreUnassignedVertexWarning;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FirstLODToIgnore_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_FirstLODToIgnore;
		static const UECodeGen_Private::FBytePropertyParams NewProp_BlockReductionMethod_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlockReductionMethod_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_BlockReductionMethod;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCustomizableObjectLayout_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_CustomizableObjectEditor,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectLayout_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectLayout_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MuCOE/CustomizableObjectLayout.h" },
		{ "ModuleRelativePath", "Classes/MuCOE/CustomizableObjectLayout.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCustomizableObjectLayout_Statics::NewProp_Blocks_Inner = { "Blocks", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FCustomizableObjectLayoutBlock, METADATA_PARAMS(0, nullptr) }; // 2707352597
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectLayout_Statics::NewProp_Blocks_MetaData[] = {
		{ "ModuleRelativePath", "Classes/MuCOE/CustomizableObjectLayout.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCustomizableObjectLayout_Statics::NewProp_Blocks = { "Blocks", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCustomizableObjectLayout, Blocks), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectLayout_Statics::NewProp_Blocks_MetaData), Z_Construct_UClass_UCustomizableObjectLayout_Statics::NewProp_Blocks_MetaData) }; // 2707352597
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectLayout_Statics::NewProp_Mesh_MetaData[] = {
		{ "ModuleRelativePath", "Classes/MuCOE/CustomizableObjectLayout.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UCustomizableObjectLayout_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCustomizableObjectLayout, Mesh), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectLayout_Statics::NewProp_Mesh_MetaData), Z_Construct_UClass_UCustomizableObjectLayout_Statics::NewProp_Mesh_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectLayout_Statics::NewProp_LOD_MetaData[] = {
		{ "ModuleRelativePath", "Classes/MuCOE/CustomizableObjectLayout.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCustomizableObjectLayout_Statics::NewProp_LOD = { "LOD", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCustomizableObjectLayout, LOD), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectLayout_Statics::NewProp_LOD_MetaData), Z_Construct_UClass_UCustomizableObjectLayout_Statics::NewProp_LOD_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectLayout_Statics::NewProp_Material_MetaData[] = {
		{ "ModuleRelativePath", "Classes/MuCOE/CustomizableObjectLayout.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCustomizableObjectLayout_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCustomizableObjectLayout, Material), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectLayout_Statics::NewProp_Material_MetaData), Z_Construct_UClass_UCustomizableObjectLayout_Statics::NewProp_Material_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectLayout_Statics::NewProp_UVChannel_MetaData[] = {
		{ "ModuleRelativePath", "Classes/MuCOE/CustomizableObjectLayout.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCustomizableObjectLayout_Statics::NewProp_UVChannel = { "UVChannel", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCustomizableObjectLayout, UVChannel), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectLayout_Statics::NewProp_UVChannel_MetaData), Z_Construct_UClass_UCustomizableObjectLayout_Statics::NewProp_UVChannel_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectLayout_Statics::NewProp_GridSize_MetaData[] = {
		{ "ModuleRelativePath", "Classes/MuCOE/CustomizableObjectLayout.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCustomizableObjectLayout_Statics::NewProp_GridSize = { "GridSize", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCustomizableObjectLayout, GridSize), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectLayout_Statics::NewProp_GridSize_MetaData), Z_Construct_UClass_UCustomizableObjectLayout_Statics::NewProp_GridSize_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectLayout_Statics::NewProp_MaxGridSize_MetaData[] = {
		{ "Comment", "/** Used with the fixed layout strategy. */" },
		{ "ModuleRelativePath", "Classes/MuCOE/CustomizableObjectLayout.h" },
		{ "ToolTip", "Used with the fixed layout strategy." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCustomizableObjectLayout_Statics::NewProp_MaxGridSize = { "MaxGridSize", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCustomizableObjectLayout, MaxGridSize), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectLayout_Statics::NewProp_MaxGridSize_MetaData), Z_Construct_UClass_UCustomizableObjectLayout_Statics::NewProp_MaxGridSize_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCustomizableObjectLayout_Statics::NewProp_PackingStrategy_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectLayout_Statics::NewProp_PackingStrategy_MetaData[] = {
		{ "ModuleRelativePath", "Classes/MuCOE/CustomizableObjectLayout.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UCustomizableObjectLayout_Statics::NewProp_PackingStrategy = { "PackingStrategy", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCustomizableObjectLayout, PackingStrategy), Z_Construct_UEnum_CustomizableObjectEditor_ECustomizableObjectTextureLayoutPackingStrategy, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectLayout_Statics::NewProp_PackingStrategy_MetaData), Z_Construct_UClass_UCustomizableObjectLayout_Statics::NewProp_PackingStrategy_MetaData) }; // 1552623229
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectLayout_Statics::NewProp_LayoutName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/MuCOE/CustomizableObjectLayout.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UCustomizableObjectLayout_Statics::NewProp_LayoutName = { "LayoutName", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCustomizableObjectLayout, LayoutName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectLayout_Statics::NewProp_LayoutName_MetaData), Z_Construct_UClass_UCustomizableObjectLayout_Statics::NewProp_LayoutName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectLayout_Statics::NewProp_bIgnoreUnassignedVertexWarning_MetaData[] = {
		{ "Comment", "/* If true, vertex warning messages will be ignored */" },
		{ "ModuleRelativePath", "Classes/MuCOE/CustomizableObjectLayout.h" },
		{ "ToolTip", "If true, vertex warning messages will be ignored" },
	};
#endif
	void Z_Construct_UClass_UCustomizableObjectLayout_Statics::NewProp_bIgnoreUnassignedVertexWarning_SetBit(void* Obj)
	{
		((UCustomizableObjectLayout*)Obj)->bIgnoreUnassignedVertexWarning = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCustomizableObjectLayout_Statics::NewProp_bIgnoreUnassignedVertexWarning = { "bIgnoreUnassignedVertexWarning", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCustomizableObjectLayout), &Z_Construct_UClass_UCustomizableObjectLayout_Statics::NewProp_bIgnoreUnassignedVertexWarning_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectLayout_Statics::NewProp_bIgnoreUnassignedVertexWarning_MetaData), Z_Construct_UClass_UCustomizableObjectLayout_Statics::NewProp_bIgnoreUnassignedVertexWarning_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectLayout_Statics::NewProp_FirstLODToIgnore_MetaData[] = {
		{ "Comment", "/* First LOD from which unassigned vertices warning will be ignored */" },
		{ "ModuleRelativePath", "Classes/MuCOE/CustomizableObjectLayout.h" },
		{ "ToolTip", "First LOD from which unassigned vertices warning will be ignored" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCustomizableObjectLayout_Statics::NewProp_FirstLODToIgnore = { "FirstLODToIgnore", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCustomizableObjectLayout, FirstLODToIgnore), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectLayout_Statics::NewProp_FirstLODToIgnore_MetaData), Z_Construct_UClass_UCustomizableObjectLayout_Statics::NewProp_FirstLODToIgnore_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCustomizableObjectLayout_Statics::NewProp_BlockReductionMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectLayout_Statics::NewProp_BlockReductionMethod_MetaData[] = {
		{ "ModuleRelativePath", "Classes/MuCOE/CustomizableObjectLayout.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UCustomizableObjectLayout_Statics::NewProp_BlockReductionMethod = { "BlockReductionMethod", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCustomizableObjectLayout, BlockReductionMethod), Z_Construct_UEnum_CustomizableObjectEditor_ECustomizableObjectLayoutBlockReductionMethod, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectLayout_Statics::NewProp_BlockReductionMethod_MetaData), Z_Construct_UClass_UCustomizableObjectLayout_Statics::NewProp_BlockReductionMethod_MetaData) }; // 3943171935
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCustomizableObjectLayout_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectLayout_Statics::NewProp_Blocks_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectLayout_Statics::NewProp_Blocks,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectLayout_Statics::NewProp_Mesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectLayout_Statics::NewProp_LOD,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectLayout_Statics::NewProp_Material,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectLayout_Statics::NewProp_UVChannel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectLayout_Statics::NewProp_GridSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectLayout_Statics::NewProp_MaxGridSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectLayout_Statics::NewProp_PackingStrategy_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectLayout_Statics::NewProp_PackingStrategy,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectLayout_Statics::NewProp_LayoutName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectLayout_Statics::NewProp_bIgnoreUnassignedVertexWarning,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectLayout_Statics::NewProp_FirstLODToIgnore,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectLayout_Statics::NewProp_BlockReductionMethod_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectLayout_Statics::NewProp_BlockReductionMethod,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCustomizableObjectLayout_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCustomizableObjectLayout>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCustomizableObjectLayout_Statics::ClassParams = {
		&UCustomizableObjectLayout::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCustomizableObjectLayout_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectLayout_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectLayout_Statics::Class_MetaDataParams), Z_Construct_UClass_UCustomizableObjectLayout_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectLayout_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UCustomizableObjectLayout()
	{
		if (!Z_Registration_Info_UClass_UCustomizableObjectLayout.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCustomizableObjectLayout.OuterSingleton, Z_Construct_UClass_UCustomizableObjectLayout_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCustomizableObjectLayout.OuterSingleton;
	}
	template<> CUSTOMIZABLEOBJECTEDITOR_API UClass* StaticClass<UCustomizableObjectLayout>()
	{
		return UCustomizableObjectLayout::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCustomizableObjectLayout);
	UCustomizableObjectLayout::~UCustomizableObjectLayout() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_CustomizableObjectLayout_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_CustomizableObjectLayout_h_Statics::EnumInfo[] = {
		{ ECustomizableObjectTextureLayoutPackingStrategy_StaticEnum, TEXT("ECustomizableObjectTextureLayoutPackingStrategy"), &Z_Registration_Info_UEnum_ECustomizableObjectTextureLayoutPackingStrategy, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1552623229U) },
		{ ECustomizableObjectLayoutBlockReductionMethod_StaticEnum, TEXT("ECustomizableObjectLayoutBlockReductionMethod"), &Z_Registration_Info_UEnum_ECustomizableObjectLayoutBlockReductionMethod, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3943171935U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_CustomizableObjectLayout_h_Statics::ScriptStructInfo[] = {
		{ FCustomizableObjectLayoutBlock::StaticStruct, Z_Construct_UScriptStruct_FCustomizableObjectLayoutBlock_Statics::NewStructOps, TEXT("CustomizableObjectLayoutBlock"), &Z_Registration_Info_UScriptStruct_CustomizableObjectLayoutBlock, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCustomizableObjectLayoutBlock), 2707352597U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_CustomizableObjectLayout_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCustomizableObjectLayout, UCustomizableObjectLayout::StaticClass, TEXT("UCustomizableObjectLayout"), &Z_Registration_Info_UClass_UCustomizableObjectLayout, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCustomizableObjectLayout), 43689214U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_CustomizableObjectLayout_h_131783545(TEXT("/Script/CustomizableObjectEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_CustomizableObjectLayout_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_CustomizableObjectLayout_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_CustomizableObjectLayout_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_CustomizableObjectLayout_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_CustomizableObjectLayout_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_CustomizableObjectLayout_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
