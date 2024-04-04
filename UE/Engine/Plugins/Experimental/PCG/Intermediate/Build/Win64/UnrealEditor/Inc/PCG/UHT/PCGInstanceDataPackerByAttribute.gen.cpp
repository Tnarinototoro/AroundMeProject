// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InstanceDataPackers/PCGInstanceDataPackerByAttribute.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePCGInstanceDataPackerByAttribute() {}
// Cross Module References
	PCG_API UClass* Z_Construct_UClass_UPCGInstanceDataPackerBase();
	PCG_API UClass* Z_Construct_UClass_UPCGInstanceDataPackerByAttribute();
	PCG_API UClass* Z_Construct_UClass_UPCGInstanceDataPackerByAttribute_NoRegister();
	UPackage* Z_Construct_UPackage__Script_PCG();
// End Cross Module References
	void UPCGInstanceDataPackerByAttribute::StaticRegisterNativesUPCGInstanceDataPackerByAttribute()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPCGInstanceDataPackerByAttribute);
	UClass* Z_Construct_UClass_UPCGInstanceDataPackerByAttribute_NoRegister()
	{
		return UPCGInstanceDataPackerByAttribute::StaticClass();
	}
	struct Z_Construct_UClass_UPCGInstanceDataPackerByAttribute_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_AttributeNames_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeNames_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AttributeNames;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPCGInstanceDataPackerByAttribute_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPCGInstanceDataPackerBase,
		(UObject* (*)())Z_Construct_UPackage__Script_PCG,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGInstanceDataPackerByAttribute_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGInstanceDataPackerByAttribute_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Procedural" },
		{ "IncludePath", "InstanceDataPackers/PCGInstanceDataPackerByAttribute.h" },
		{ "ModuleRelativePath", "Public/InstanceDataPackers/PCGInstanceDataPackerByAttribute.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGInstanceDataPackerByAttribute_Statics::NewProp_AttributeNames_Inner = { "AttributeNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGInstanceDataPackerByAttribute_Statics::NewProp_AttributeNames_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/InstanceDataPackers/PCGInstanceDataPackerByAttribute.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPCGInstanceDataPackerByAttribute_Statics::NewProp_AttributeNames = { "AttributeNames", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGInstanceDataPackerByAttribute, AttributeNames), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGInstanceDataPackerByAttribute_Statics::NewProp_AttributeNames_MetaData), Z_Construct_UClass_UPCGInstanceDataPackerByAttribute_Statics::NewProp_AttributeNames_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGInstanceDataPackerByAttribute_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGInstanceDataPackerByAttribute_Statics::NewProp_AttributeNames_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGInstanceDataPackerByAttribute_Statics::NewProp_AttributeNames,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPCGInstanceDataPackerByAttribute_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGInstanceDataPackerByAttribute>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGInstanceDataPackerByAttribute_Statics::ClassParams = {
		&UPCGInstanceDataPackerByAttribute::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPCGInstanceDataPackerByAttribute_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPCGInstanceDataPackerByAttribute_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGInstanceDataPackerByAttribute_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGInstanceDataPackerByAttribute_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGInstanceDataPackerByAttribute_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UPCGInstanceDataPackerByAttribute()
	{
		if (!Z_Registration_Info_UClass_UPCGInstanceDataPackerByAttribute.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGInstanceDataPackerByAttribute.OuterSingleton, Z_Construct_UClass_UPCGInstanceDataPackerByAttribute_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPCGInstanceDataPackerByAttribute.OuterSingleton;
	}
	template<> PCG_API UClass* StaticClass<UPCGInstanceDataPackerByAttribute>()
	{
		return UPCGInstanceDataPackerByAttribute::StaticClass();
	}
	UPCGInstanceDataPackerByAttribute::UPCGInstanceDataPackerByAttribute(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPCGInstanceDataPackerByAttribute);
	UPCGInstanceDataPackerByAttribute::~UPCGInstanceDataPackerByAttribute() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_InstanceDataPackers_PCGInstanceDataPackerByAttribute_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_InstanceDataPackers_PCGInstanceDataPackerByAttribute_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPCGInstanceDataPackerByAttribute, UPCGInstanceDataPackerByAttribute::StaticClass, TEXT("UPCGInstanceDataPackerByAttribute"), &Z_Registration_Info_UClass_UPCGInstanceDataPackerByAttribute, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGInstanceDataPackerByAttribute), 2752842033U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_InstanceDataPackers_PCGInstanceDataPackerByAttribute_h_353738580(TEXT("/Script/PCG"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_InstanceDataPackers_PCGInstanceDataPackerByAttribute_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_InstanceDataPackers_PCGInstanceDataPackerByAttribute_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
