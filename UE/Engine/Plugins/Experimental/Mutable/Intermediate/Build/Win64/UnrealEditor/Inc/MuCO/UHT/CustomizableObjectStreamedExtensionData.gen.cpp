// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MuCO/CustomizableObjectStreamedExtensionData.h"
#include "MuCO/CustomizableObjectExtensionData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCustomizableObjectStreamedExtensionData() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	CUSTOMIZABLEOBJECT_API UClass* Z_Construct_UClass_UCustomizableObjectExtensionDataContainer();
	CUSTOMIZABLEOBJECT_API UClass* Z_Construct_UClass_UCustomizableObjectExtensionDataContainer_NoRegister();
	CUSTOMIZABLEOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FCustomizableObjectExtensionData();
	CUSTOMIZABLEOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FCustomizableObjectStreamedExtensionData();
	UPackage* Z_Construct_UPackage__Script_CustomizableObject();
// End Cross Module References
	void UCustomizableObjectExtensionDataContainer::StaticRegisterNativesUCustomizableObjectExtensionDataContainer()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCustomizableObjectExtensionDataContainer);
	UClass* Z_Construct_UClass_UCustomizableObjectExtensionDataContainer_NoRegister()
	{
		return UCustomizableObjectExtensionDataContainer::StaticClass();
	}
	struct Z_Construct_UClass_UCustomizableObjectExtensionDataContainer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCustomizableObjectExtensionDataContainer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_CustomizableObject,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectExtensionDataContainer_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectExtensionDataContainer_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** A simple container that's used to store the FCustomizableObjectStreamedExtensionData in a package */" },
		{ "IncludePath", "MuCO/CustomizableObjectStreamedExtensionData.h" },
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableObjectStreamedExtensionData.h" },
		{ "ToolTip", "A simple container that's used to store the FCustomizableObjectStreamedExtensionData in a package" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectExtensionDataContainer_Statics::NewProp_Data_MetaData[] = {
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableObjectStreamedExtensionData.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCustomizableObjectExtensionDataContainer_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCustomizableObjectExtensionDataContainer, Data), Z_Construct_UScriptStruct_FCustomizableObjectExtensionData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectExtensionDataContainer_Statics::NewProp_Data_MetaData), Z_Construct_UClass_UCustomizableObjectExtensionDataContainer_Statics::NewProp_Data_MetaData) }; // 2589010811
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCustomizableObjectExtensionDataContainer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectExtensionDataContainer_Statics::NewProp_Data,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCustomizableObjectExtensionDataContainer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCustomizableObjectExtensionDataContainer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCustomizableObjectExtensionDataContainer_Statics::ClassParams = {
		&UCustomizableObjectExtensionDataContainer::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCustomizableObjectExtensionDataContainer_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectExtensionDataContainer_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectExtensionDataContainer_Statics::Class_MetaDataParams), Z_Construct_UClass_UCustomizableObjectExtensionDataContainer_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectExtensionDataContainer_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UCustomizableObjectExtensionDataContainer()
	{
		if (!Z_Registration_Info_UClass_UCustomizableObjectExtensionDataContainer.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCustomizableObjectExtensionDataContainer.OuterSingleton, Z_Construct_UClass_UCustomizableObjectExtensionDataContainer_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCustomizableObjectExtensionDataContainer.OuterSingleton;
	}
	template<> CUSTOMIZABLEOBJECT_API UClass* StaticClass<UCustomizableObjectExtensionDataContainer>()
	{
		return UCustomizableObjectExtensionDataContainer::StaticClass();
	}
	UCustomizableObjectExtensionDataContainer::UCustomizableObjectExtensionDataContainer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCustomizableObjectExtensionDataContainer);
	UCustomizableObjectExtensionDataContainer::~UCustomizableObjectExtensionDataContainer() {}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CustomizableObjectStreamedExtensionData;
class UScriptStruct* FCustomizableObjectStreamedExtensionData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CustomizableObjectStreamedExtensionData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CustomizableObjectStreamedExtensionData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCustomizableObjectStreamedExtensionData, (UObject*)Z_Construct_UPackage__Script_CustomizableObject(), TEXT("CustomizableObjectStreamedExtensionData"));
	}
	return Z_Registration_Info_UScriptStruct_CustomizableObjectStreamedExtensionData.OuterSingleton;
}
template<> CUSTOMIZABLEOBJECT_API UScriptStruct* StaticStruct<FCustomizableObjectStreamedExtensionData>()
{
	return FCustomizableObjectStreamedExtensionData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCustomizableObjectStreamedExtensionData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ContainerPath_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_ContainerPath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Container_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Container;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomizableObjectStreamedExtensionData_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Used to store extension data that can be streamed in and out from an external package.\n *\n * This allows you to load large extension data on demand, instead of having it always loaded.\n */" },
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableObjectStreamedExtensionData.h" },
		{ "ToolTip", "Used to store extension data that can be streamed in and out from an external package.\n\nThis allows you to load large extension data on demand, instead of having it always loaded." },
	};
#endif
	void* Z_Construct_UScriptStruct_FCustomizableObjectStreamedExtensionData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCustomizableObjectStreamedExtensionData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomizableObjectStreamedExtensionData_Statics::NewProp_ContainerPath_MetaData[] = {
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableObjectStreamedExtensionData.h" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FCustomizableObjectStreamedExtensionData_Statics::NewProp_ContainerPath = { "ContainerPath", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCustomizableObjectStreamedExtensionData, ContainerPath), Z_Construct_UClass_UCustomizableObjectExtensionDataContainer_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizableObjectStreamedExtensionData_Statics::NewProp_ContainerPath_MetaData), Z_Construct_UScriptStruct_FCustomizableObjectStreamedExtensionData_Statics::NewProp_ContainerPath_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomizableObjectStreamedExtensionData_Statics::NewProp_Container_MetaData[] = {
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableObjectStreamedExtensionData.h" },
		{ "NativeConstTemplateArg", "" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FCustomizableObjectStreamedExtensionData_Statics::NewProp_Container = { "Container", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCustomizableObjectStreamedExtensionData, Container), Z_Construct_UClass_UCustomizableObjectExtensionDataContainer_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizableObjectStreamedExtensionData_Statics::NewProp_Container_MetaData), Z_Construct_UScriptStruct_FCustomizableObjectStreamedExtensionData_Statics::NewProp_Container_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCustomizableObjectStreamedExtensionData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizableObjectStreamedExtensionData_Statics::NewProp_ContainerPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizableObjectStreamedExtensionData_Statics::NewProp_Container,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCustomizableObjectStreamedExtensionData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CustomizableObject,
		nullptr,
		&NewStructOps,
		"CustomizableObjectStreamedExtensionData",
		Z_Construct_UScriptStruct_FCustomizableObjectStreamedExtensionData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizableObjectStreamedExtensionData_Statics::PropPointers),
		sizeof(FCustomizableObjectStreamedExtensionData),
		alignof(FCustomizableObjectStreamedExtensionData),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizableObjectStreamedExtensionData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCustomizableObjectStreamedExtensionData_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizableObjectStreamedExtensionData_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FCustomizableObjectStreamedExtensionData()
	{
		if (!Z_Registration_Info_UScriptStruct_CustomizableObjectStreamedExtensionData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CustomizableObjectStreamedExtensionData.InnerSingleton, Z_Construct_UScriptStruct_FCustomizableObjectStreamedExtensionData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CustomizableObjectStreamedExtensionData.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObject_Classes_MuCO_CustomizableObjectStreamedExtensionData_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObject_Classes_MuCO_CustomizableObjectStreamedExtensionData_h_Statics::ScriptStructInfo[] = {
		{ FCustomizableObjectStreamedExtensionData::StaticStruct, Z_Construct_UScriptStruct_FCustomizableObjectStreamedExtensionData_Statics::NewStructOps, TEXT("CustomizableObjectStreamedExtensionData"), &Z_Registration_Info_UScriptStruct_CustomizableObjectStreamedExtensionData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCustomizableObjectStreamedExtensionData), 3856977773U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObject_Classes_MuCO_CustomizableObjectStreamedExtensionData_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCustomizableObjectExtensionDataContainer, UCustomizableObjectExtensionDataContainer::StaticClass, TEXT("UCustomizableObjectExtensionDataContainer"), &Z_Registration_Info_UClass_UCustomizableObjectExtensionDataContainer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCustomizableObjectExtensionDataContainer), 1789344056U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObject_Classes_MuCO_CustomizableObjectStreamedExtensionData_h_2685667018(TEXT("/Script/CustomizableObject"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObject_Classes_MuCO_CustomizableObjectStreamedExtensionData_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObject_Classes_MuCO_CustomizableObjectStreamedExtensionData_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObject_Classes_MuCO_CustomizableObjectStreamedExtensionData_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObject_Classes_MuCO_CustomizableObjectStreamedExtensionData_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
