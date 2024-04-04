// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MuCOE/Nodes/CustomizableObjectNodeTable.h"
#include "../Public/MuCO/CustomizableObjectUIData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCustomizableObjectNodeTable() {}
// Cross Module References
	CUSTOMIZABLEOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FMutableParamUIMetadata();
	CUSTOMIZABLEOBJECTEDITOR_API UClass* Z_Construct_UClass_UCustomizableObjectLayout_NoRegister();
	CUSTOMIZABLEOBJECTEDITOR_API UClass* Z_Construct_UClass_UCustomizableObjectNode();
	CUSTOMIZABLEOBJECTEDITOR_API UClass* Z_Construct_UClass_UCustomizableObjectNodePinData();
	CUSTOMIZABLEOBJECTEDITOR_API UClass* Z_Construct_UClass_UCustomizableObjectNodeRemapPinsByName();
	CUSTOMIZABLEOBJECTEDITOR_API UClass* Z_Construct_UClass_UCustomizableObjectNodeTable();
	CUSTOMIZABLEOBJECTEDITOR_API UClass* Z_Construct_UClass_UCustomizableObjectNodeTable_NoRegister();
	CUSTOMIZABLEOBJECTEDITOR_API UClass* Z_Construct_UClass_UCustomizableObjectNodeTableImagePinData();
	CUSTOMIZABLEOBJECTEDITOR_API UClass* Z_Construct_UClass_UCustomizableObjectNodeTableImagePinData_NoRegister();
	CUSTOMIZABLEOBJECTEDITOR_API UClass* Z_Construct_UClass_UCustomizableObjectNodeTableMeshPinData();
	CUSTOMIZABLEOBJECTEDITOR_API UClass* Z_Construct_UClass_UCustomizableObjectNodeTableMeshPinData_NoRegister();
	CUSTOMIZABLEOBJECTEDITOR_API UClass* Z_Construct_UClass_UCustomizableObjectNodeTableObjectPinData();
	CUSTOMIZABLEOBJECTEDITOR_API UClass* Z_Construct_UClass_UCustomizableObjectNodeTableObjectPinData_NoRegister();
	CUSTOMIZABLEOBJECTEDITOR_API UClass* Z_Construct_UClass_UCustomizableObjectNodeTableRemapPins();
	CUSTOMIZABLEOBJECTEDITOR_API UClass* Z_Construct_UClass_UCustomizableObjectNodeTableRemapPins_NoRegister();
	CUSTOMIZABLEOBJECTEDITOR_API UEnum* Z_Construct_UEnum_CustomizableObjectEditor_ETableTextureType();
	ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
	UPackage* Z_Construct_UPackage__Script_CustomizableObjectEditor();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ETableTextureType;
	static UEnum* ETableTextureType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ETableTextureType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ETableTextureType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CustomizableObjectEditor_ETableTextureType, (UObject*)Z_Construct_UPackage__Script_CustomizableObjectEditor(), TEXT("ETableTextureType"));
		}
		return Z_Registration_Info_UEnum_ETableTextureType.OuterSingleton;
	}
	template<> CUSTOMIZABLEOBJECTEDITOR_API UEnum* StaticEnum<ETableTextureType>()
	{
		return ETableTextureType_StaticEnum();
	}
	struct Z_Construct_UEnum_CustomizableObjectEditor_ETableTextureType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_CustomizableObjectEditor_ETableTextureType_Statics::Enumerators[] = {
		{ "ETableTextureType::PASSTHROUGH_TEXTURE", (int64)ETableTextureType::PASSTHROUGH_TEXTURE },
		{ "ETableTextureType::MUTABLE_TEXTURE", (int64)ETableTextureType::MUTABLE_TEXTURE },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_CustomizableObjectEditor_ETableTextureType_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/** Enum class for the different types of image pins */" },
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeTable.h" },
		{ "MUTABLE_TEXTURE.DisplayName", "Mutable" },
		{ "MUTABLE_TEXTURE.Name", "ETableTextureType::MUTABLE_TEXTURE" },
		{ "PASSTHROUGH_TEXTURE.DisplayName", "Passthrough" },
		{ "PASSTHROUGH_TEXTURE.Name", "ETableTextureType::PASSTHROUGH_TEXTURE" },
		{ "ToolTip", "Enum class for the different types of image pins" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CustomizableObjectEditor_ETableTextureType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_CustomizableObjectEditor,
		nullptr,
		"ETableTextureType",
		"ETableTextureType",
		Z_Construct_UEnum_CustomizableObjectEditor_ETableTextureType_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_CustomizableObjectEditor_ETableTextureType_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_CustomizableObjectEditor_ETableTextureType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_CustomizableObjectEditor_ETableTextureType_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_CustomizableObjectEditor_ETableTextureType()
	{
		if (!Z_Registration_Info_UEnum_ETableTextureType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ETableTextureType.InnerSingleton, Z_Construct_UEnum_CustomizableObjectEditor_ETableTextureType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ETableTextureType.InnerSingleton;
	}
	void UCustomizableObjectNodeTableObjectPinData::StaticRegisterNativesUCustomizableObjectNodeTableObjectPinData()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCustomizableObjectNodeTableObjectPinData);
	UClass* Z_Construct_UClass_UCustomizableObjectNodeTableObjectPinData_NoRegister()
	{
		return UCustomizableObjectNodeTableObjectPinData::StaticClass();
	}
	struct Z_Construct_UClass_UCustomizableObjectNodeTableObjectPinData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ColumnName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ColumnName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCustomizableObjectNodeTableObjectPinData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCustomizableObjectNodePinData,
		(UObject* (*)())Z_Construct_UPackage__Script_CustomizableObjectEditor,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeTableObjectPinData_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectNodeTableObjectPinData_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Base class for all Table Pins. */" },
		{ "IncludePath", "MuCOE/Nodes/CustomizableObjectNodeTable.h" },
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeTable.h" },
		{ "ToolTip", "Base class for all Table Pins." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectNodeTableObjectPinData_Statics::NewProp_ColumnName_MetaData[] = {
		{ "Comment", "/** Name of the data table column related to the pin */" },
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeTable.h" },
		{ "ToolTip", "Name of the data table column related to the pin" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UCustomizableObjectNodeTableObjectPinData_Statics::NewProp_ColumnName = { "ColumnName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCustomizableObjectNodeTableObjectPinData, ColumnName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeTableObjectPinData_Statics::NewProp_ColumnName_MetaData), Z_Construct_UClass_UCustomizableObjectNodeTableObjectPinData_Statics::NewProp_ColumnName_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCustomizableObjectNodeTableObjectPinData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectNodeTableObjectPinData_Statics::NewProp_ColumnName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCustomizableObjectNodeTableObjectPinData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCustomizableObjectNodeTableObjectPinData>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCustomizableObjectNodeTableObjectPinData_Statics::ClassParams = {
		&UCustomizableObjectNodeTableObjectPinData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCustomizableObjectNodeTableObjectPinData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeTableObjectPinData_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeTableObjectPinData_Statics::Class_MetaDataParams), Z_Construct_UClass_UCustomizableObjectNodeTableObjectPinData_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeTableObjectPinData_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UCustomizableObjectNodeTableObjectPinData()
	{
		if (!Z_Registration_Info_UClass_UCustomizableObjectNodeTableObjectPinData.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCustomizableObjectNodeTableObjectPinData.OuterSingleton, Z_Construct_UClass_UCustomizableObjectNodeTableObjectPinData_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCustomizableObjectNodeTableObjectPinData.OuterSingleton;
	}
	template<> CUSTOMIZABLEOBJECTEDITOR_API UClass* StaticClass<UCustomizableObjectNodeTableObjectPinData>()
	{
		return UCustomizableObjectNodeTableObjectPinData::StaticClass();
	}
	UCustomizableObjectNodeTableObjectPinData::UCustomizableObjectNodeTableObjectPinData() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCustomizableObjectNodeTableObjectPinData);
	UCustomizableObjectNodeTableObjectPinData::~UCustomizableObjectNodeTableObjectPinData() {}
	void UCustomizableObjectNodeTableImagePinData::StaticRegisterNativesUCustomizableObjectNodeTableImagePinData()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCustomizableObjectNodeTableImagePinData);
	UClass* Z_Construct_UClass_UCustomizableObjectNodeTableImagePinData_NoRegister()
	{
		return UCustomizableObjectNodeTableImagePinData::StaticClass();
	}
	struct Z_Construct_UClass_UCustomizableObjectNodeTableImagePinData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_ImageMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ImageMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ImageMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsDefault_MetaData[];
#endif
		static void NewProp_bIsDefault_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsDefault;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsArrayTexture_MetaData[];
#endif
		static void NewProp_bIsArrayTexture_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsArrayTexture;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCustomizableObjectNodeTableImagePinData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCustomizableObjectNodeTableObjectPinData,
		(UObject* (*)())Z_Construct_UPackage__Script_CustomizableObjectEditor,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeTableImagePinData_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectNodeTableImagePinData_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Additional data for Image pins. */" },
		{ "IncludePath", "MuCOE/Nodes/CustomizableObjectNodeTable.h" },
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeTable.h" },
		{ "ToolTip", "Additional data for Image pins." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCustomizableObjectNodeTableImagePinData_Statics::NewProp_ImageMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectNodeTableImagePinData_Statics::NewProp_ImageMode_MetaData[] = {
		{ "Comment", "// Pin Type\n" },
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeTable.h" },
		{ "ToolTip", "Pin Type" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UCustomizableObjectNodeTableImagePinData_Statics::NewProp_ImageMode = { "ImageMode", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCustomizableObjectNodeTableImagePinData, ImageMode), Z_Construct_UEnum_CustomizableObjectEditor_ETableTextureType, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeTableImagePinData_Statics::NewProp_ImageMode_MetaData), Z_Construct_UClass_UCustomizableObjectNodeTableImagePinData_Statics::NewProp_ImageMode_MetaData) }; // 3543360521
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectNodeTableImagePinData_Statics::NewProp_bIsDefault_MetaData[] = {
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeTable.h" },
	};
#endif
	void Z_Construct_UClass_UCustomizableObjectNodeTableImagePinData_Statics::NewProp_bIsDefault_SetBit(void* Obj)
	{
		((UCustomizableObjectNodeTableImagePinData*)Obj)->bIsDefault = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCustomizableObjectNodeTableImagePinData_Statics::NewProp_bIsDefault = { "bIsDefault", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCustomizableObjectNodeTableImagePinData), &Z_Construct_UClass_UCustomizableObjectNodeTableImagePinData_Statics::NewProp_bIsDefault_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeTableImagePinData_Statics::NewProp_bIsDefault_MetaData), Z_Construct_UClass_UCustomizableObjectNodeTableImagePinData_Statics::NewProp_bIsDefault_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectNodeTableImagePinData_Statics::NewProp_bIsArrayTexture_MetaData[] = {
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeTable.h" },
	};
#endif
	void Z_Construct_UClass_UCustomizableObjectNodeTableImagePinData_Statics::NewProp_bIsArrayTexture_SetBit(void* Obj)
	{
		((UCustomizableObjectNodeTableImagePinData*)Obj)->bIsArrayTexture = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCustomizableObjectNodeTableImagePinData_Statics::NewProp_bIsArrayTexture = { "bIsArrayTexture", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCustomizableObjectNodeTableImagePinData), &Z_Construct_UClass_UCustomizableObjectNodeTableImagePinData_Statics::NewProp_bIsArrayTexture_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeTableImagePinData_Statics::NewProp_bIsArrayTexture_MetaData), Z_Construct_UClass_UCustomizableObjectNodeTableImagePinData_Statics::NewProp_bIsArrayTexture_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCustomizableObjectNodeTableImagePinData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectNodeTableImagePinData_Statics::NewProp_ImageMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectNodeTableImagePinData_Statics::NewProp_ImageMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectNodeTableImagePinData_Statics::NewProp_bIsDefault,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectNodeTableImagePinData_Statics::NewProp_bIsArrayTexture,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCustomizableObjectNodeTableImagePinData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCustomizableObjectNodeTableImagePinData>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCustomizableObjectNodeTableImagePinData_Statics::ClassParams = {
		&UCustomizableObjectNodeTableImagePinData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCustomizableObjectNodeTableImagePinData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeTableImagePinData_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeTableImagePinData_Statics::Class_MetaDataParams), Z_Construct_UClass_UCustomizableObjectNodeTableImagePinData_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeTableImagePinData_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UCustomizableObjectNodeTableImagePinData()
	{
		if (!Z_Registration_Info_UClass_UCustomizableObjectNodeTableImagePinData.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCustomizableObjectNodeTableImagePinData.OuterSingleton, Z_Construct_UClass_UCustomizableObjectNodeTableImagePinData_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCustomizableObjectNodeTableImagePinData.OuterSingleton;
	}
	template<> CUSTOMIZABLEOBJECTEDITOR_API UClass* StaticClass<UCustomizableObjectNodeTableImagePinData>()
	{
		return UCustomizableObjectNodeTableImagePinData::StaticClass();
	}
	UCustomizableObjectNodeTableImagePinData::UCustomizableObjectNodeTableImagePinData() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCustomizableObjectNodeTableImagePinData);
	UCustomizableObjectNodeTableImagePinData::~UCustomizableObjectNodeTableImagePinData() {}
	void UCustomizableObjectNodeTableMeshPinData::StaticRegisterNativesUCustomizableObjectNodeTableMeshPinData()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCustomizableObjectNodeTableMeshPinData);
	UClass* Z_Construct_UClass_UCustomizableObjectNodeTableMeshPinData_NoRegister()
	{
		return UCustomizableObjectNodeTableMeshPinData::StaticClass();
	}
	struct Z_Construct_UClass_UCustomizableObjectNodeTableMeshPinData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimInstanceColumnName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_AnimInstanceColumnName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimSlotColumnName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_AnimSlotColumnName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimTagColumnName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_AnimTagColumnName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MutableColumnName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_MutableColumnName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LOD_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_LOD;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Material_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Material;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Layouts_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Layouts_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Layouts;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCustomizableObjectNodeTableMeshPinData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCustomizableObjectNodeTableObjectPinData,
		(UObject* (*)())Z_Construct_UPackage__Script_CustomizableObjectEditor,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeTableMeshPinData_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectNodeTableMeshPinData_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Additional data for Mesh pins. */" },
		{ "IncludePath", "MuCOE/Nodes/CustomizableObjectNodeTable.h" },
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeTable.h" },
		{ "ToolTip", "Additional data for Mesh pins." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectNodeTableMeshPinData_Statics::NewProp_AnimInstanceColumnName_MetaData[] = {
		{ "Comment", "/** Anim Instance Column name related to this Mesh pin */" },
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeTable.h" },
		{ "ToolTip", "Anim Instance Column name related to this Mesh pin" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UCustomizableObjectNodeTableMeshPinData_Statics::NewProp_AnimInstanceColumnName = { "AnimInstanceColumnName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCustomizableObjectNodeTableMeshPinData, AnimInstanceColumnName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeTableMeshPinData_Statics::NewProp_AnimInstanceColumnName_MetaData), Z_Construct_UClass_UCustomizableObjectNodeTableMeshPinData_Statics::NewProp_AnimInstanceColumnName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectNodeTableMeshPinData_Statics::NewProp_AnimSlotColumnName_MetaData[] = {
		{ "Comment", "/** Anim Slot Column name related to this Mesh pin */" },
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeTable.h" },
		{ "ToolTip", "Anim Slot Column name related to this Mesh pin" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UCustomizableObjectNodeTableMeshPinData_Statics::NewProp_AnimSlotColumnName = { "AnimSlotColumnName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCustomizableObjectNodeTableMeshPinData, AnimSlotColumnName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeTableMeshPinData_Statics::NewProp_AnimSlotColumnName_MetaData), Z_Construct_UClass_UCustomizableObjectNodeTableMeshPinData_Statics::NewProp_AnimSlotColumnName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectNodeTableMeshPinData_Statics::NewProp_AnimTagColumnName_MetaData[] = {
		{ "Comment", "/** Anim Tag Column name related to this Mesh pin */" },
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeTable.h" },
		{ "ToolTip", "Anim Tag Column name related to this Mesh pin" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UCustomizableObjectNodeTableMeshPinData_Statics::NewProp_AnimTagColumnName = { "AnimTagColumnName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCustomizableObjectNodeTableMeshPinData, AnimTagColumnName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeTableMeshPinData_Statics::NewProp_AnimTagColumnName_MetaData), Z_Construct_UClass_UCustomizableObjectNodeTableMeshPinData_Statics::NewProp_AnimTagColumnName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectNodeTableMeshPinData_Statics::NewProp_MutableColumnName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeTable.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UCustomizableObjectNodeTableMeshPinData_Statics::NewProp_MutableColumnName = { "MutableColumnName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCustomizableObjectNodeTableMeshPinData, MutableColumnName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeTableMeshPinData_Statics::NewProp_MutableColumnName_MetaData), Z_Construct_UClass_UCustomizableObjectNodeTableMeshPinData_Statics::NewProp_MutableColumnName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectNodeTableMeshPinData_Statics::NewProp_LOD_MetaData[] = {
		{ "Comment", "/** LOD of the mesh related to this Mesh pin */" },
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeTable.h" },
		{ "ToolTip", "LOD of the mesh related to this Mesh pin" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCustomizableObjectNodeTableMeshPinData_Statics::NewProp_LOD = { "LOD", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCustomizableObjectNodeTableMeshPinData, LOD), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeTableMeshPinData_Statics::NewProp_LOD_MetaData), Z_Construct_UClass_UCustomizableObjectNodeTableMeshPinData_Statics::NewProp_LOD_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectNodeTableMeshPinData_Statics::NewProp_Material_MetaData[] = {
		{ "Comment", "/** Section Index (Surface Index) of the mesh related to this Mesh pin */" },
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeTable.h" },
		{ "ToolTip", "Section Index (Surface Index) of the mesh related to this Mesh pin" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCustomizableObjectNodeTableMeshPinData_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCustomizableObjectNodeTableMeshPinData, Material), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeTableMeshPinData_Statics::NewProp_Material_MetaData), Z_Construct_UClass_UCustomizableObjectNodeTableMeshPinData_Statics::NewProp_Material_MetaData) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UCustomizableObjectNodeTableMeshPinData_Statics::NewProp_Layouts_Inner = { "Layouts", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UCustomizableObjectLayout_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectNodeTableMeshPinData_Statics::NewProp_Layouts_MetaData[] = {
		{ "Comment", "/** Layouts related to this Mesh pin */" },
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeTable.h" },
		{ "ToolTip", "Layouts related to this Mesh pin" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCustomizableObjectNodeTableMeshPinData_Statics::NewProp_Layouts = { "Layouts", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCustomizableObjectNodeTableMeshPinData, Layouts), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeTableMeshPinData_Statics::NewProp_Layouts_MetaData), Z_Construct_UClass_UCustomizableObjectNodeTableMeshPinData_Statics::NewProp_Layouts_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCustomizableObjectNodeTableMeshPinData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectNodeTableMeshPinData_Statics::NewProp_AnimInstanceColumnName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectNodeTableMeshPinData_Statics::NewProp_AnimSlotColumnName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectNodeTableMeshPinData_Statics::NewProp_AnimTagColumnName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectNodeTableMeshPinData_Statics::NewProp_MutableColumnName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectNodeTableMeshPinData_Statics::NewProp_LOD,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectNodeTableMeshPinData_Statics::NewProp_Material,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectNodeTableMeshPinData_Statics::NewProp_Layouts_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectNodeTableMeshPinData_Statics::NewProp_Layouts,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCustomizableObjectNodeTableMeshPinData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCustomizableObjectNodeTableMeshPinData>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCustomizableObjectNodeTableMeshPinData_Statics::ClassParams = {
		&UCustomizableObjectNodeTableMeshPinData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCustomizableObjectNodeTableMeshPinData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeTableMeshPinData_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeTableMeshPinData_Statics::Class_MetaDataParams), Z_Construct_UClass_UCustomizableObjectNodeTableMeshPinData_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeTableMeshPinData_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UCustomizableObjectNodeTableMeshPinData()
	{
		if (!Z_Registration_Info_UClass_UCustomizableObjectNodeTableMeshPinData.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCustomizableObjectNodeTableMeshPinData.OuterSingleton, Z_Construct_UClass_UCustomizableObjectNodeTableMeshPinData_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCustomizableObjectNodeTableMeshPinData.OuterSingleton;
	}
	template<> CUSTOMIZABLEOBJECTEDITOR_API UClass* StaticClass<UCustomizableObjectNodeTableMeshPinData>()
	{
		return UCustomizableObjectNodeTableMeshPinData::StaticClass();
	}
	UCustomizableObjectNodeTableMeshPinData::UCustomizableObjectNodeTableMeshPinData() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCustomizableObjectNodeTableMeshPinData);
	UCustomizableObjectNodeTableMeshPinData::~UCustomizableObjectNodeTableMeshPinData() {}
	void UCustomizableObjectNodeTableRemapPins::StaticRegisterNativesUCustomizableObjectNodeTableRemapPins()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCustomizableObjectNodeTableRemapPins);
	UClass* Z_Construct_UClass_UCustomizableObjectNodeTableRemapPins_NoRegister()
	{
		return UCustomizableObjectNodeTableRemapPins::StaticClass();
	}
	struct Z_Construct_UClass_UCustomizableObjectNodeTableRemapPins_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCustomizableObjectNodeTableRemapPins_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCustomizableObjectNodeRemapPinsByName,
		(UObject* (*)())Z_Construct_UPackage__Script_CustomizableObjectEditor,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeTableRemapPins_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectNodeTableRemapPins_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MuCOE/Nodes/CustomizableObjectNodeTable.h" },
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeTable.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCustomizableObjectNodeTableRemapPins_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCustomizableObjectNodeTableRemapPins>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCustomizableObjectNodeTableRemapPins_Statics::ClassParams = {
		&UCustomizableObjectNodeTableRemapPins::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeTableRemapPins_Statics::Class_MetaDataParams), Z_Construct_UClass_UCustomizableObjectNodeTableRemapPins_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UCustomizableObjectNodeTableRemapPins()
	{
		if (!Z_Registration_Info_UClass_UCustomizableObjectNodeTableRemapPins.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCustomizableObjectNodeTableRemapPins.OuterSingleton, Z_Construct_UClass_UCustomizableObjectNodeTableRemapPins_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCustomizableObjectNodeTableRemapPins.OuterSingleton;
	}
	template<> CUSTOMIZABLEOBJECTEDITOR_API UClass* StaticClass<UCustomizableObjectNodeTableRemapPins>()
	{
		return UCustomizableObjectNodeTableRemapPins::StaticClass();
	}
	UCustomizableObjectNodeTableRemapPins::UCustomizableObjectNodeTableRemapPins(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCustomizableObjectNodeTableRemapPins);
	UCustomizableObjectNodeTableRemapPins::~UCustomizableObjectNodeTableRemapPins() {}
	void UCustomizableObjectNodeTable::StaticRegisterNativesUCustomizableObjectNodeTable()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCustomizableObjectNodeTable);
	UClass* Z_Construct_UClass_UCustomizableObjectNodeTable_NoRegister()
	{
		return UCustomizableObjectNodeTable::StaticClass();
	}
	struct Z_Construct_UClass_UCustomizableObjectNodeTable_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParameterName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ParameterName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAddNoneOption_MetaData[];
#endif
		static void NewProp_bAddNoneOption_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAddNoneOption;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Table_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Table;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDisableCheckedRows_MetaData[];
#endif
		static void NewProp_bDisableCheckedRows_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDisableCheckedRows;
		static const UECodeGen_Private::FBytePropertyParams NewProp_DefaultImageMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultImageMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_DefaultImageMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParamUIMetadata_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ParamUIMetadata;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumProperties_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumProperties;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCustomizableObjectNodeTable_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCustomizableObjectNode,
		(UObject* (*)())Z_Construct_UPackage__Script_CustomizableObjectEditor,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeTable_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectNodeTable_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MuCOE/Nodes/CustomizableObjectNodeTable.h" },
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeTable.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectNodeTable_Statics::NewProp_ParameterName_MetaData[] = {
		{ "Category", "TableProperties" },
		{ "Comment", "// Name of the property parameter\n" },
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeTable.h" },
		{ "ToolTip", "Name of the property parameter" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UCustomizableObjectNodeTable_Statics::NewProp_ParameterName = { "ParameterName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCustomizableObjectNodeTable, ParameterName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeTable_Statics::NewProp_ParameterName_MetaData), Z_Construct_UClass_UCustomizableObjectNodeTable_Statics::NewProp_ParameterName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectNodeTable_Statics::NewProp_bAddNoneOption_MetaData[] = {
		{ "Category", "TableProperties" },
		{ "Comment", "/** If true, adds a \"None\" parameter option */" },
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeTable.h" },
		{ "ToolTip", "If true, adds a \"None\" parameter option" },
	};
#endif
	void Z_Construct_UClass_UCustomizableObjectNodeTable_Statics::NewProp_bAddNoneOption_SetBit(void* Obj)
	{
		((UCustomizableObjectNodeTable*)Obj)->bAddNoneOption = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCustomizableObjectNodeTable_Statics::NewProp_bAddNoneOption = { "bAddNoneOption", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCustomizableObjectNodeTable), &Z_Construct_UClass_UCustomizableObjectNodeTable_Statics::NewProp_bAddNoneOption_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeTable_Statics::NewProp_bAddNoneOption_MetaData), Z_Construct_UClass_UCustomizableObjectNodeTable_Statics::NewProp_bAddNoneOption_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectNodeTable_Statics::NewProp_Table_MetaData[] = {
		{ "Category", "TableProperties" },
		{ "Comment", "// Pointer to the Data Table Asset represented in this node\n" },
		{ "DontUpdateWhileEditing", "" },
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeTable.h" },
		{ "ToolTip", "Pointer to the Data Table Asset represented in this node" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UCustomizableObjectNodeTable_Statics::NewProp_Table = { "Table", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCustomizableObjectNodeTable, Table), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeTable_Statics::NewProp_Table_MetaData), Z_Construct_UClass_UCustomizableObjectNodeTable_Statics::NewProp_Table_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectNodeTable_Statics::NewProp_bDisableCheckedRows_MetaData[] = {
		{ "Category", "TableProperties" },
		{ "Comment", "/** If there is a bool column in the table, checked rows will not be compiled */" },
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeTable.h" },
		{ "ToolTip", "If there is a bool column in the table, checked rows will not be compiled" },
	};
#endif
	void Z_Construct_UClass_UCustomizableObjectNodeTable_Statics::NewProp_bDisableCheckedRows_SetBit(void* Obj)
	{
		((UCustomizableObjectNodeTable*)Obj)->bDisableCheckedRows = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCustomizableObjectNodeTable_Statics::NewProp_bDisableCheckedRows = { "bDisableCheckedRows", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCustomizableObjectNodeTable), &Z_Construct_UClass_UCustomizableObjectNodeTable_Statics::NewProp_bDisableCheckedRows_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeTable_Statics::NewProp_bDisableCheckedRows_MetaData), Z_Construct_UClass_UCustomizableObjectNodeTable_Statics::NewProp_bDisableCheckedRows_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCustomizableObjectNodeTable_Statics::NewProp_DefaultImageMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectNodeTable_Statics::NewProp_DefaultImageMode_MetaData[] = {
		{ "Category", "TableProperties" },
		{ "Comment", "/** Decides the default type of the texture pins (passtrhough or mutable)\n\x09*   Right click on a non-linked image pin to customize its image mode\n\x09*/" },
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeTable.h" },
		{ "ToolTip", "Decides the default type of the texture pins (passtrhough or mutable)\n Right click on a non-linked image pin to customize its image mode" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UCustomizableObjectNodeTable_Statics::NewProp_DefaultImageMode = { "DefaultImageMode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCustomizableObjectNodeTable, DefaultImageMode), Z_Construct_UEnum_CustomizableObjectEditor_ETableTextureType, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeTable_Statics::NewProp_DefaultImageMode_MetaData), Z_Construct_UClass_UCustomizableObjectNodeTable_Statics::NewProp_DefaultImageMode_MetaData) }; // 3543360521
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectNodeTable_Statics::NewProp_ParamUIMetadata_MetaData[] = {
		{ "Category", "UI" },
		{ "DisplayName", "Parameter UI Metadata" },
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeTable.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCustomizableObjectNodeTable_Statics::NewProp_ParamUIMetadata = { "ParamUIMetadata", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCustomizableObjectNodeTable, ParamUIMetadata), Z_Construct_UScriptStruct_FMutableParamUIMetadata, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeTable_Statics::NewProp_ParamUIMetadata_MetaData), Z_Construct_UClass_UCustomizableObjectNodeTable_Statics::NewProp_ParamUIMetadata_MetaData) }; // 177590584
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectNodeTable_Statics::NewProp_NumProperties_MetaData[] = {
		{ "Comment", "/** Number of properties to know when the node needs an update */" },
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeTable.h" },
		{ "ToolTip", "Number of properties to know when the node needs an update" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCustomizableObjectNodeTable_Statics::NewProp_NumProperties = { "NumProperties", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCustomizableObjectNodeTable, NumProperties), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeTable_Statics::NewProp_NumProperties_MetaData), Z_Construct_UClass_UCustomizableObjectNodeTable_Statics::NewProp_NumProperties_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCustomizableObjectNodeTable_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectNodeTable_Statics::NewProp_ParameterName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectNodeTable_Statics::NewProp_bAddNoneOption,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectNodeTable_Statics::NewProp_Table,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectNodeTable_Statics::NewProp_bDisableCheckedRows,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectNodeTable_Statics::NewProp_DefaultImageMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectNodeTable_Statics::NewProp_DefaultImageMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectNodeTable_Statics::NewProp_ParamUIMetadata,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectNodeTable_Statics::NewProp_NumProperties,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCustomizableObjectNodeTable_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCustomizableObjectNodeTable>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCustomizableObjectNodeTable_Statics::ClassParams = {
		&UCustomizableObjectNodeTable::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCustomizableObjectNodeTable_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeTable_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeTable_Statics::Class_MetaDataParams), Z_Construct_UClass_UCustomizableObjectNodeTable_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeTable_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UCustomizableObjectNodeTable()
	{
		if (!Z_Registration_Info_UClass_UCustomizableObjectNodeTable.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCustomizableObjectNodeTable.OuterSingleton, Z_Construct_UClass_UCustomizableObjectNodeTable_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCustomizableObjectNodeTable.OuterSingleton;
	}
	template<> CUSTOMIZABLEOBJECTEDITOR_API UClass* StaticClass<UCustomizableObjectNodeTable>()
	{
		return UCustomizableObjectNodeTable::StaticClass();
	}
	UCustomizableObjectNodeTable::UCustomizableObjectNodeTable(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCustomizableObjectNodeTable);
	UCustomizableObjectNodeTable::~UCustomizableObjectNodeTable() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_Nodes_CustomizableObjectNodeTable_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_Nodes_CustomizableObjectNodeTable_h_Statics::EnumInfo[] = {
		{ ETableTextureType_StaticEnum, TEXT("ETableTextureType"), &Z_Registration_Info_UEnum_ETableTextureType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3543360521U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_Nodes_CustomizableObjectNodeTable_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCustomizableObjectNodeTableObjectPinData, UCustomizableObjectNodeTableObjectPinData::StaticClass, TEXT("UCustomizableObjectNodeTableObjectPinData"), &Z_Registration_Info_UClass_UCustomizableObjectNodeTableObjectPinData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCustomizableObjectNodeTableObjectPinData), 573605481U) },
		{ Z_Construct_UClass_UCustomizableObjectNodeTableImagePinData, UCustomizableObjectNodeTableImagePinData::StaticClass, TEXT("UCustomizableObjectNodeTableImagePinData"), &Z_Registration_Info_UClass_UCustomizableObjectNodeTableImagePinData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCustomizableObjectNodeTableImagePinData), 3189480941U) },
		{ Z_Construct_UClass_UCustomizableObjectNodeTableMeshPinData, UCustomizableObjectNodeTableMeshPinData::StaticClass, TEXT("UCustomizableObjectNodeTableMeshPinData"), &Z_Registration_Info_UClass_UCustomizableObjectNodeTableMeshPinData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCustomizableObjectNodeTableMeshPinData), 3796243607U) },
		{ Z_Construct_UClass_UCustomizableObjectNodeTableRemapPins, UCustomizableObjectNodeTableRemapPins::StaticClass, TEXT("UCustomizableObjectNodeTableRemapPins"), &Z_Registration_Info_UClass_UCustomizableObjectNodeTableRemapPins, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCustomizableObjectNodeTableRemapPins), 3517798749U) },
		{ Z_Construct_UClass_UCustomizableObjectNodeTable, UCustomizableObjectNodeTable::StaticClass, TEXT("UCustomizableObjectNodeTable"), &Z_Registration_Info_UClass_UCustomizableObjectNodeTable, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCustomizableObjectNodeTable), 3197661992U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_Nodes_CustomizableObjectNodeTable_h_2225337205(TEXT("/Script/CustomizableObjectEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_Nodes_CustomizableObjectNodeTable_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_Nodes_CustomizableObjectNodeTable_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_Nodes_CustomizableObjectNodeTable_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_Nodes_CustomizableObjectNodeTable_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
