// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MuCOE/Nodes/CustomizableObjectNodeTextureTransform.h"
#include "../../Source/Runtime/Engine/Classes/EdGraph/EdGraphPin.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCustomizableObjectNodeTextureTransform() {}
// Cross Module References
	CUSTOMIZABLEOBJECTEDITOR_API UClass* Z_Construct_UClass_UCustomizableObjectNode();
	CUSTOMIZABLEOBJECTEDITOR_API UClass* Z_Construct_UClass_UCustomizableObjectNodeTextureTransform();
	CUSTOMIZABLEOBJECTEDITOR_API UClass* Z_Construct_UClass_UCustomizableObjectNodeTextureTransform_NoRegister();
	CUSTOMIZABLEOBJECTEDITOR_API UEnum* Z_Construct_UEnum_CustomizableObjectEditor_ETextureTransformAddressMode();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FEdGraphPinReference();
	UPackage* Z_Construct_UPackage__Script_CustomizableObjectEditor();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ETextureTransformAddressMode;
	static UEnum* ETextureTransformAddressMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ETextureTransformAddressMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ETextureTransformAddressMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CustomizableObjectEditor_ETextureTransformAddressMode, (UObject*)Z_Construct_UPackage__Script_CustomizableObjectEditor(), TEXT("ETextureTransformAddressMode"));
		}
		return Z_Registration_Info_UEnum_ETextureTransformAddressMode.OuterSingleton;
	}
	template<> CUSTOMIZABLEOBJECTEDITOR_API UEnum* StaticEnum<ETextureTransformAddressMode>()
	{
		return ETextureTransformAddressMode_StaticEnum();
	}
	struct Z_Construct_UEnum_CustomizableObjectEditor_ETextureTransformAddressMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_CustomizableObjectEditor_ETextureTransformAddressMode_Statics::Enumerators[] = {
		{ "ETextureTransformAddressMode::Wrap", (int64)ETextureTransformAddressMode::Wrap },
		{ "ETextureTransformAddressMode::ClampToEdge", (int64)ETextureTransformAddressMode::ClampToEdge },
		{ "ETextureTransformAddressMode::ClampToBlack", (int64)ETextureTransformAddressMode::ClampToBlack },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_CustomizableObjectEditor_ETextureTransformAddressMode_Statics::Enum_MetaDataParams[] = {
		{ "ClampToBlack.Name", "ETextureTransformAddressMode::ClampToBlack" },
		{ "ClampToEdge.Name", "ETextureTransformAddressMode::ClampToEdge" },
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeTextureTransform.h" },
		{ "Wrap.Name", "ETextureTransformAddressMode::Wrap" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CustomizableObjectEditor_ETextureTransformAddressMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_CustomizableObjectEditor,
		nullptr,
		"ETextureTransformAddressMode",
		"ETextureTransformAddressMode",
		Z_Construct_UEnum_CustomizableObjectEditor_ETextureTransformAddressMode_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_CustomizableObjectEditor_ETextureTransformAddressMode_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_CustomizableObjectEditor_ETextureTransformAddressMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_CustomizableObjectEditor_ETextureTransformAddressMode_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_CustomizableObjectEditor_ETextureTransformAddressMode()
	{
		if (!Z_Registration_Info_UEnum_ETextureTransformAddressMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ETextureTransformAddressMode.InnerSingleton, Z_Construct_UEnum_CustomizableObjectEditor_ETextureTransformAddressMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ETextureTransformAddressMode.InnerSingleton;
	}
	void UCustomizableObjectNodeTextureTransform::StaticRegisterNativesUCustomizableObjectNodeTextureTransform()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCustomizableObjectNodeTextureTransform);
	UClass* Z_Construct_UClass_UCustomizableObjectNodeTextureTransform_NoRegister()
	{
		return UCustomizableObjectNodeTextureTransform::StaticClass();
	}
	struct Z_Construct_UClass_UCustomizableObjectNodeTextureTransform_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_AddressMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AddressMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_AddressMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BaseImagePinReference_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BaseImagePinReference;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCustomizableObjectNodeTextureTransform_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCustomizableObjectNode,
		(UObject* (*)())Z_Construct_UPackage__Script_CustomizableObjectEditor,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeTextureTransform_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectNodeTextureTransform_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MuCOE/Nodes/CustomizableObjectNodeTextureTransform.h" },
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeTextureTransform.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCustomizableObjectNodeTextureTransform_Statics::NewProp_AddressMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectNodeTextureTransform_Statics::NewProp_AddressMode_MetaData[] = {
		{ "Category", "CustomizableObject" },
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeTextureTransform.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UCustomizableObjectNodeTextureTransform_Statics::NewProp_AddressMode = { "AddressMode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCustomizableObjectNodeTextureTransform, AddressMode), Z_Construct_UEnum_CustomizableObjectEditor_ETextureTransformAddressMode, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeTextureTransform_Statics::NewProp_AddressMode_MetaData), Z_Construct_UClass_UCustomizableObjectNodeTextureTransform_Statics::NewProp_AddressMode_MetaData) }; // 2123501308
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectNodeTextureTransform_Statics::NewProp_BaseImagePinReference_MetaData[] = {
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeTextureTransform.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCustomizableObjectNodeTextureTransform_Statics::NewProp_BaseImagePinReference = { "BaseImagePinReference", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCustomizableObjectNodeTextureTransform, BaseImagePinReference), Z_Construct_UScriptStruct_FEdGraphPinReference, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeTextureTransform_Statics::NewProp_BaseImagePinReference_MetaData), Z_Construct_UClass_UCustomizableObjectNodeTextureTransform_Statics::NewProp_BaseImagePinReference_MetaData) }; // 3793911982
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCustomizableObjectNodeTextureTransform_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectNodeTextureTransform_Statics::NewProp_AddressMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectNodeTextureTransform_Statics::NewProp_AddressMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectNodeTextureTransform_Statics::NewProp_BaseImagePinReference,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCustomizableObjectNodeTextureTransform_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCustomizableObjectNodeTextureTransform>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCustomizableObjectNodeTextureTransform_Statics::ClassParams = {
		&UCustomizableObjectNodeTextureTransform::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCustomizableObjectNodeTextureTransform_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeTextureTransform_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeTextureTransform_Statics::Class_MetaDataParams), Z_Construct_UClass_UCustomizableObjectNodeTextureTransform_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeTextureTransform_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UCustomizableObjectNodeTextureTransform()
	{
		if (!Z_Registration_Info_UClass_UCustomizableObjectNodeTextureTransform.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCustomizableObjectNodeTextureTransform.OuterSingleton, Z_Construct_UClass_UCustomizableObjectNodeTextureTransform_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCustomizableObjectNodeTextureTransform.OuterSingleton;
	}
	template<> CUSTOMIZABLEOBJECTEDITOR_API UClass* StaticClass<UCustomizableObjectNodeTextureTransform>()
	{
		return UCustomizableObjectNodeTextureTransform::StaticClass();
	}
	UCustomizableObjectNodeTextureTransform::UCustomizableObjectNodeTextureTransform(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCustomizableObjectNodeTextureTransform);
	UCustomizableObjectNodeTextureTransform::~UCustomizableObjectNodeTextureTransform() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UCustomizableObjectNodeTextureTransform)
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_Nodes_CustomizableObjectNodeTextureTransform_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_Nodes_CustomizableObjectNodeTextureTransform_h_Statics::EnumInfo[] = {
		{ ETextureTransformAddressMode_StaticEnum, TEXT("ETextureTransformAddressMode"), &Z_Registration_Info_UEnum_ETextureTransformAddressMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2123501308U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_Nodes_CustomizableObjectNodeTextureTransform_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCustomizableObjectNodeTextureTransform, UCustomizableObjectNodeTextureTransform::StaticClass, TEXT("UCustomizableObjectNodeTextureTransform"), &Z_Registration_Info_UClass_UCustomizableObjectNodeTextureTransform, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCustomizableObjectNodeTextureTransform), 4058997135U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_Nodes_CustomizableObjectNodeTextureTransform_h_3604858019(TEXT("/Script/CustomizableObjectEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_Nodes_CustomizableObjectNodeTextureTransform_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_Nodes_CustomizableObjectNodeTextureTransform_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_Nodes_CustomizableObjectNodeTextureTransform_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_Nodes_CustomizableObjectNodeTextureTransform_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
