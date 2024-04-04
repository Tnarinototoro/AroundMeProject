// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnimNextDecoratorInterfacesTest.h"
#include "DecoratorBase/DecoratorHandle.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNextDecoratorInterfacesTest() {}
// Cross Module References
	ANIMNEXT_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNextDecoratorHandle();
	ANIMNEXT_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNextDecoratorSharedData();
	ANIMNEXTTESTSUITE_API UScriptStruct* Z_Construct_UScriptStruct_FDecoratorWithChildrenSharedData();
	ANIMNEXTTESTSUITE_API UScriptStruct* Z_Construct_UScriptStruct_FDecoratorWithOneChildSharedData();
	UPackage* Z_Construct_UPackage__Script_AnimNextTestSuite();
// End Cross Module References

static_assert(std::is_polymorphic<FDecoratorWithOneChildSharedData>() == std::is_polymorphic<FAnimNextDecoratorSharedData>(), "USTRUCT FDecoratorWithOneChildSharedData cannot be polymorphic unless super FAnimNextDecoratorSharedData is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DecoratorWithOneChildSharedData;
class UScriptStruct* FDecoratorWithOneChildSharedData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DecoratorWithOneChildSharedData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DecoratorWithOneChildSharedData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDecoratorWithOneChildSharedData, (UObject*)Z_Construct_UPackage__Script_AnimNextTestSuite(), TEXT("DecoratorWithOneChildSharedData"));
	}
	return Z_Registration_Info_UScriptStruct_DecoratorWithOneChildSharedData.OuterSingleton;
}
template<> ANIMNEXTTESTSUITE_API UScriptStruct* StaticStruct<FDecoratorWithOneChildSharedData>()
{
	return FDecoratorWithOneChildSharedData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDecoratorWithOneChildSharedData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Child_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Child;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDecoratorWithOneChildSharedData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/AnimNextDecoratorInterfacesTest.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDecoratorWithOneChildSharedData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDecoratorWithOneChildSharedData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDecoratorWithOneChildSharedData_Statics::NewProp_Child_MetaData[] = {
		{ "ModuleRelativePath", "Private/AnimNextDecoratorInterfacesTest.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDecoratorWithOneChildSharedData_Statics::NewProp_Child = { "Child", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDecoratorWithOneChildSharedData, Child), Z_Construct_UScriptStruct_FAnimNextDecoratorHandle, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDecoratorWithOneChildSharedData_Statics::NewProp_Child_MetaData), Z_Construct_UScriptStruct_FDecoratorWithOneChildSharedData_Statics::NewProp_Child_MetaData) }; // 2136084323
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDecoratorWithOneChildSharedData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDecoratorWithOneChildSharedData_Statics::NewProp_Child,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDecoratorWithOneChildSharedData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AnimNextTestSuite,
		Z_Construct_UScriptStruct_FAnimNextDecoratorSharedData,
		&NewStructOps,
		"DecoratorWithOneChildSharedData",
		Z_Construct_UScriptStruct_FDecoratorWithOneChildSharedData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDecoratorWithOneChildSharedData_Statics::PropPointers),
		sizeof(FDecoratorWithOneChildSharedData),
		alignof(FDecoratorWithOneChildSharedData),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDecoratorWithOneChildSharedData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDecoratorWithOneChildSharedData_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDecoratorWithOneChildSharedData_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FDecoratorWithOneChildSharedData()
	{
		if (!Z_Registration_Info_UScriptStruct_DecoratorWithOneChildSharedData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DecoratorWithOneChildSharedData.InnerSingleton, Z_Construct_UScriptStruct_FDecoratorWithOneChildSharedData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DecoratorWithOneChildSharedData.InnerSingleton;
	}

static_assert(std::is_polymorphic<FDecoratorWithChildrenSharedData>() == std::is_polymorphic<FAnimNextDecoratorSharedData>(), "USTRUCT FDecoratorWithChildrenSharedData cannot be polymorphic unless super FAnimNextDecoratorSharedData is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DecoratorWithChildrenSharedData;
class UScriptStruct* FDecoratorWithChildrenSharedData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DecoratorWithChildrenSharedData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DecoratorWithChildrenSharedData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDecoratorWithChildrenSharedData, (UObject*)Z_Construct_UPackage__Script_AnimNextTestSuite(), TEXT("DecoratorWithChildrenSharedData"));
	}
	return Z_Registration_Info_UScriptStruct_DecoratorWithChildrenSharedData.OuterSingleton;
}
template<> ANIMNEXTTESTSUITE_API UScriptStruct* StaticStruct<FDecoratorWithChildrenSharedData>()
{
	return FDecoratorWithChildrenSharedData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDecoratorWithChildrenSharedData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Children_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Children;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDecoratorWithChildrenSharedData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/AnimNextDecoratorInterfacesTest.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDecoratorWithChildrenSharedData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDecoratorWithChildrenSharedData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDecoratorWithChildrenSharedData_Statics::NewProp_Children_MetaData[] = {
		{ "ModuleRelativePath", "Private/AnimNextDecoratorInterfacesTest.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDecoratorWithChildrenSharedData_Statics::NewProp_Children = { "Children", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, CPP_ARRAY_DIM(Children, FDecoratorWithChildrenSharedData), STRUCT_OFFSET(FDecoratorWithChildrenSharedData, Children), Z_Construct_UScriptStruct_FAnimNextDecoratorHandle, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDecoratorWithChildrenSharedData_Statics::NewProp_Children_MetaData), Z_Construct_UScriptStruct_FDecoratorWithChildrenSharedData_Statics::NewProp_Children_MetaData) }; // 2136084323
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDecoratorWithChildrenSharedData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDecoratorWithChildrenSharedData_Statics::NewProp_Children,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDecoratorWithChildrenSharedData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AnimNextTestSuite,
		Z_Construct_UScriptStruct_FAnimNextDecoratorSharedData,
		&NewStructOps,
		"DecoratorWithChildrenSharedData",
		Z_Construct_UScriptStruct_FDecoratorWithChildrenSharedData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDecoratorWithChildrenSharedData_Statics::PropPointers),
		sizeof(FDecoratorWithChildrenSharedData),
		alignof(FDecoratorWithChildrenSharedData),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDecoratorWithChildrenSharedData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDecoratorWithChildrenSharedData_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDecoratorWithChildrenSharedData_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FDecoratorWithChildrenSharedData()
	{
		if (!Z_Registration_Info_UScriptStruct_DecoratorWithChildrenSharedData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DecoratorWithChildrenSharedData.InnerSingleton, Z_Construct_UScriptStruct_FDecoratorWithChildrenSharedData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DecoratorWithChildrenSharedData.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNextTestSuite_Private_AnimNextDecoratorInterfacesTest_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNextTestSuite_Private_AnimNextDecoratorInterfacesTest_h_Statics::ScriptStructInfo[] = {
		{ FDecoratorWithOneChildSharedData::StaticStruct, Z_Construct_UScriptStruct_FDecoratorWithOneChildSharedData_Statics::NewStructOps, TEXT("DecoratorWithOneChildSharedData"), &Z_Registration_Info_UScriptStruct_DecoratorWithOneChildSharedData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDecoratorWithOneChildSharedData), 2697484622U) },
		{ FDecoratorWithChildrenSharedData::StaticStruct, Z_Construct_UScriptStruct_FDecoratorWithChildrenSharedData_Statics::NewStructOps, TEXT("DecoratorWithChildrenSharedData"), &Z_Registration_Info_UScriptStruct_DecoratorWithChildrenSharedData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDecoratorWithChildrenSharedData), 4068388793U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNextTestSuite_Private_AnimNextDecoratorInterfacesTest_h_3498405844(TEXT("/Script/AnimNextTestSuite"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNextTestSuite_Private_AnimNextDecoratorInterfacesTest_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNextTestSuite_Private_AnimNextDecoratorInterfacesTest_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
