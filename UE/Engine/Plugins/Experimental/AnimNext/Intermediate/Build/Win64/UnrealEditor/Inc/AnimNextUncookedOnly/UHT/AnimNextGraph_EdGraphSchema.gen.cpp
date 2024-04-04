// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Internal/Graph/AnimNextGraph_EdGraphSchema.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNextGraph_EdGraphSchema() {}
// Cross Module References
	ANIMNEXTUNCOOKEDONLY_API UClass* Z_Construct_UClass_UAnimNextGraph_EdGraphSchema();
	ANIMNEXTUNCOOKEDONLY_API UClass* Z_Construct_UClass_UAnimNextGraph_EdGraphSchema_NoRegister();
	CONTROLRIGDEVELOPER_API UClass* Z_Construct_UClass_UControlRigGraphSchema();
	UPackage* Z_Construct_UPackage__Script_AnimNextUncookedOnly();
// End Cross Module References
	void UAnimNextGraph_EdGraphSchema::StaticRegisterNativesUAnimNextGraph_EdGraphSchema()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimNextGraph_EdGraphSchema);
	UClass* Z_Construct_UClass_UAnimNextGraph_EdGraphSchema_NoRegister()
	{
		return UAnimNextGraph_EdGraphSchema::StaticClass();
	}
	struct Z_Construct_UClass_UAnimNextGraph_EdGraphSchema_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimNextGraph_EdGraphSchema_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UControlRigGraphSchema,
		(UObject* (*)())Z_Construct_UPackage__Script_AnimNextUncookedOnly,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNextGraph_EdGraphSchema_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimNextGraph_EdGraphSchema_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Graph/AnimNextGraph_EdGraphSchema.h" },
		{ "ModuleRelativePath", "Internal/Graph/AnimNextGraph_EdGraphSchema.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimNextGraph_EdGraphSchema_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimNextGraph_EdGraphSchema>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimNextGraph_EdGraphSchema_Statics::ClassParams = {
		&UAnimNextGraph_EdGraphSchema::StaticClass,
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
		0x000800A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNextGraph_EdGraphSchema_Statics::Class_MetaDataParams), Z_Construct_UClass_UAnimNextGraph_EdGraphSchema_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UAnimNextGraph_EdGraphSchema()
	{
		if (!Z_Registration_Info_UClass_UAnimNextGraph_EdGraphSchema.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimNextGraph_EdGraphSchema.OuterSingleton, Z_Construct_UClass_UAnimNextGraph_EdGraphSchema_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAnimNextGraph_EdGraphSchema.OuterSingleton;
	}
	template<> ANIMNEXTUNCOOKEDONLY_API UClass* StaticClass<UAnimNextGraph_EdGraphSchema>()
	{
		return UAnimNextGraph_EdGraphSchema::StaticClass();
	}
	UAnimNextGraph_EdGraphSchema::UAnimNextGraph_EdGraphSchema() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimNextGraph_EdGraphSchema);
	UAnimNextGraph_EdGraphSchema::~UAnimNextGraph_EdGraphSchema() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNextUncookedOnly_Internal_Graph_AnimNextGraph_EdGraphSchema_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNextUncookedOnly_Internal_Graph_AnimNextGraph_EdGraphSchema_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAnimNextGraph_EdGraphSchema, UAnimNextGraph_EdGraphSchema::StaticClass, TEXT("UAnimNextGraph_EdGraphSchema"), &Z_Registration_Info_UClass_UAnimNextGraph_EdGraphSchema, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimNextGraph_EdGraphSchema), 2959008492U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNextUncookedOnly_Internal_Graph_AnimNextGraph_EdGraphSchema_h_703871500(TEXT("/Script/AnimNextUncookedOnly"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNextUncookedOnly_Internal_Graph_AnimNextGraph_EdGraphSchema_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNextUncookedOnly_Internal_Graph_AnimNextGraph_EdGraphSchema_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
