// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Internal/Param/AnimNextParameterBlockBindingReference.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNextParameterBlockBindingReference() {}
// Cross Module References
	ANIMNEXT_API UClass* Z_Construct_UClass_UAnimNextParameterBlock_NoRegister();
	ANIMNEXTUNCOOKEDONLY_API UClass* Z_Construct_UClass_UAnimNextParameterBlockBindingInterface_NoRegister();
	ANIMNEXTUNCOOKEDONLY_API UClass* Z_Construct_UClass_UAnimNextParameterBlockBindingReference();
	ANIMNEXTUNCOOKEDONLY_API UClass* Z_Construct_UClass_UAnimNextParameterBlockBindingReference_NoRegister();
	ANIMNEXTUNCOOKEDONLY_API UClass* Z_Construct_UClass_UAnimNextParameterBlockEntry();
	ANIMNEXTUNCOOKEDONLY_API UClass* Z_Construct_UClass_UAnimNextParameterBlockReferenceInterface_NoRegister();
	ANIMNEXTUNCOOKEDONLY_API UClass* Z_Construct_UClass_UAnimNextParameterLibrary_NoRegister();
	UPackage* Z_Construct_UPackage__Script_AnimNextUncookedOnly();
// End Cross Module References
	void UAnimNextParameterBlockBindingReference::StaticRegisterNativesUAnimNextParameterBlockBindingReference()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimNextParameterBlockBindingReference);
	UClass* Z_Construct_UClass_UAnimNextParameterBlockBindingReference_NoRegister()
	{
		return UAnimNextParameterBlockBindingReference::StaticClass();
	}
	struct Z_Construct_UClass_UAnimNextParameterBlockBindingReference_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParameterName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ParameterName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Library_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Library;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Block_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Block;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimNextParameterBlockBindingReference_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimNextParameterBlockEntry,
		(UObject* (*)())Z_Construct_UPackage__Script_AnimNextUncookedOnly,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNextParameterBlockBindingReference_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimNextParameterBlockBindingReference_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Parameter binding block entry */" },
		{ "IncludePath", "Param/AnimNextParameterBlockBindingReference.h" },
		{ "ModuleRelativePath", "Internal/Param/AnimNextParameterBlockBindingReference.h" },
		{ "ToolTip", "Parameter binding block entry" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimNextParameterBlockBindingReference_Statics::NewProp_ParameterName_MetaData[] = {
		{ "Category", "Parameter" },
		{ "Comment", "/** Parameter name we reference */" },
		{ "ModuleRelativePath", "Internal/Param/AnimNextParameterBlockBindingReference.h" },
		{ "ToolTip", "Parameter name we reference" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UAnimNextParameterBlockBindingReference_Statics::NewProp_ParameterName = { "ParameterName", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimNextParameterBlockBindingReference, ParameterName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNextParameterBlockBindingReference_Statics::NewProp_ParameterName_MetaData), Z_Construct_UClass_UAnimNextParameterBlockBindingReference_Statics::NewProp_ParameterName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimNextParameterBlockBindingReference_Statics::NewProp_Library_MetaData[] = {
		{ "Category", "Parameter" },
		{ "Comment", "/** Parameter library we reference */" },
		{ "ModuleRelativePath", "Internal/Param/AnimNextParameterBlockBindingReference.h" },
		{ "ToolTip", "Parameter library we reference" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UAnimNextParameterBlockBindingReference_Statics::NewProp_Library = { "Library", nullptr, (EPropertyFlags)0x0044000000020001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimNextParameterBlockBindingReference, Library), Z_Construct_UClass_UAnimNextParameterLibrary_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNextParameterBlockBindingReference_Statics::NewProp_Library_MetaData), Z_Construct_UClass_UAnimNextParameterBlockBindingReference_Statics::NewProp_Library_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimNextParameterBlockBindingReference_Statics::NewProp_Block_MetaData[] = {
		{ "Comment", "/** Parameter block we reference */" },
		{ "ModuleRelativePath", "Internal/Param/AnimNextParameterBlockBindingReference.h" },
		{ "ToolTip", "Parameter block we reference" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UAnimNextParameterBlockBindingReference_Statics::NewProp_Block = { "Block", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimNextParameterBlockBindingReference, Block), Z_Construct_UClass_UAnimNextParameterBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNextParameterBlockBindingReference_Statics::NewProp_Block_MetaData), Z_Construct_UClass_UAnimNextParameterBlockBindingReference_Statics::NewProp_Block_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimNextParameterBlockBindingReference_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNextParameterBlockBindingReference_Statics::NewProp_ParameterName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNextParameterBlockBindingReference_Statics::NewProp_Library,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNextParameterBlockBindingReference_Statics::NewProp_Block,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UAnimNextParameterBlockBindingReference_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UAnimNextParameterBlockBindingInterface_NoRegister, (int32)VTABLE_OFFSET(UAnimNextParameterBlockBindingReference, IAnimNextParameterBlockBindingInterface), false },  // 3576219340
			{ Z_Construct_UClass_UAnimNextParameterBlockReferenceInterface_NoRegister, (int32)VTABLE_OFFSET(UAnimNextParameterBlockBindingReference, IAnimNextParameterBlockReferenceInterface), false },  // 2472258722
		};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNextParameterBlockBindingReference_Statics::InterfaceParams) < 64);
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimNextParameterBlockBindingReference_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimNextParameterBlockBindingReference>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimNextParameterBlockBindingReference_Statics::ClassParams = {
		&UAnimNextParameterBlockBindingReference::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAnimNextParameterBlockBindingReference_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNextParameterBlockBindingReference_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x000800A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNextParameterBlockBindingReference_Statics::Class_MetaDataParams), Z_Construct_UClass_UAnimNextParameterBlockBindingReference_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNextParameterBlockBindingReference_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UAnimNextParameterBlockBindingReference()
	{
		if (!Z_Registration_Info_UClass_UAnimNextParameterBlockBindingReference.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimNextParameterBlockBindingReference.OuterSingleton, Z_Construct_UClass_UAnimNextParameterBlockBindingReference_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAnimNextParameterBlockBindingReference.OuterSingleton;
	}
	template<> ANIMNEXTUNCOOKEDONLY_API UClass* StaticClass<UAnimNextParameterBlockBindingReference>()
	{
		return UAnimNextParameterBlockBindingReference::StaticClass();
	}
	UAnimNextParameterBlockBindingReference::UAnimNextParameterBlockBindingReference(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimNextParameterBlockBindingReference);
	UAnimNextParameterBlockBindingReference::~UAnimNextParameterBlockBindingReference() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNextUncookedOnly_Internal_Param_AnimNextParameterBlockBindingReference_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNextUncookedOnly_Internal_Param_AnimNextParameterBlockBindingReference_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAnimNextParameterBlockBindingReference, UAnimNextParameterBlockBindingReference::StaticClass, TEXT("UAnimNextParameterBlockBindingReference"), &Z_Registration_Info_UClass_UAnimNextParameterBlockBindingReference, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimNextParameterBlockBindingReference), 3359625370U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNextUncookedOnly_Internal_Param_AnimNextParameterBlockBindingReference_h_1320431240(TEXT("/Script/AnimNextUncookedOnly"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNextUncookedOnly_Internal_Param_AnimNextParameterBlockBindingReference_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNextUncookedOnly_Internal_Param_AnimNextParameterBlockBindingReference_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
