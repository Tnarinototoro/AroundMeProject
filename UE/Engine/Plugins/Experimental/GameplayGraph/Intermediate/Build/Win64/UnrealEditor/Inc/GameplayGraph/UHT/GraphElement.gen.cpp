// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Graph/GraphElement.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGraphElement() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	GAMEPLAYGRAPH_API UClass* Z_Construct_UClass_UGraph_NoRegister();
	GAMEPLAYGRAPH_API UClass* Z_Construct_UClass_UGraphElement();
	GAMEPLAYGRAPH_API UClass* Z_Construct_UClass_UGraphElement_NoRegister();
	GAMEPLAYGRAPH_API UEnum* Z_Construct_UEnum_GameplayGraph_EGraphElementType();
	UPackage* Z_Construct_UPackage__Script_GameplayGraph();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGraphElementType;
	static UEnum* EGraphElementType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EGraphElementType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EGraphElementType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GameplayGraph_EGraphElementType, (UObject*)Z_Construct_UPackage__Script_GameplayGraph(), TEXT("EGraphElementType"));
		}
		return Z_Registration_Info_UEnum_EGraphElementType.OuterSingleton;
	}
	template<> GAMEPLAYGRAPH_API UEnum* StaticEnum<EGraphElementType>()
	{
		return EGraphElementType_StaticEnum();
	}
	struct Z_Construct_UEnum_GameplayGraph_EGraphElementType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_GameplayGraph_EGraphElementType_Statics::Enumerators[] = {
		{ "EGraphElementType::Node", (int64)EGraphElementType::Node },
		{ "EGraphElementType::Edge", (int64)EGraphElementType::Edge },
		{ "EGraphElementType::Island", (int64)EGraphElementType::Island },
		{ "EGraphElementType::Unknown", (int64)EGraphElementType::Unknown },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_GameplayGraph_EGraphElementType_Statics::Enum_MetaDataParams[] = {
		{ "Edge.Name", "EGraphElementType::Edge" },
		{ "Island.Name", "EGraphElementType::Island" },
		{ "ModuleRelativePath", "Public/Graph/GraphElement.h" },
		{ "Node.Name", "EGraphElementType::Node" },
		{ "Unknown.Name", "EGraphElementType::Unknown" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GameplayGraph_EGraphElementType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_GameplayGraph,
		nullptr,
		"EGraphElementType",
		"EGraphElementType",
		Z_Construct_UEnum_GameplayGraph_EGraphElementType_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_GameplayGraph_EGraphElementType_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_GameplayGraph_EGraphElementType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_GameplayGraph_EGraphElementType_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_GameplayGraph_EGraphElementType()
	{
		if (!Z_Registration_Info_UEnum_EGraphElementType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGraphElementType.InnerSingleton, Z_Construct_UEnum_GameplayGraph_EGraphElementType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EGraphElementType.InnerSingleton;
	}
	void UGraphElement::StaticRegisterNativesUGraphElement()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGraphElement);
	UClass* Z_Construct_UClass_UGraphElement_NoRegister()
	{
		return UGraphElement::StaticClass();
	}
	struct Z_Construct_UClass_UGraphElement_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ElementType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ElementType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ElementType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UniqueIndex_MetaData[];
#endif
		static const UECodeGen_Private::FInt64PropertyParams NewProp_UniqueIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParentGraph_MetaData[];
#endif
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_ParentGraph;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGraphElement_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayGraph,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGraphElement_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGraphElement_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Graph/GraphElement.h" },
		{ "ModuleRelativePath", "Public/Graph/GraphElement.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGraphElement_Statics::NewProp_ElementType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGraphElement_Statics::NewProp_ElementType_MetaData[] = {
		{ "ModuleRelativePath", "Public/Graph/GraphElement.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UGraphElement_Statics::NewProp_ElementType = { "ElementType", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGraphElement, ElementType), Z_Construct_UEnum_GameplayGraph_EGraphElementType, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGraphElement_Statics::NewProp_ElementType_MetaData), Z_Construct_UClass_UGraphElement_Statics::NewProp_ElementType_MetaData) }; // 4176938858
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGraphElement_Statics::NewProp_UniqueIndex_MetaData[] = {
		{ "Comment", "/** Will match the UniqueIndex in the UGraphHandle that references this element. */" },
		{ "ModuleRelativePath", "Public/Graph/GraphElement.h" },
		{ "ToolTip", "Will match the UniqueIndex in the UGraphHandle that references this element." },
	};
#endif
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UClass_UGraphElement_Statics::NewProp_UniqueIndex = { "UniqueIndex", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGraphElement, UniqueIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGraphElement_Statics::NewProp_UniqueIndex_MetaData), Z_Construct_UClass_UGraphElement_Statics::NewProp_UniqueIndex_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGraphElement_Statics::NewProp_ParentGraph_MetaData[] = {
		{ "ModuleRelativePath", "Public/Graph/GraphElement.h" },
	};
#endif
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UGraphElement_Statics::NewProp_ParentGraph = { "ParentGraph", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGraphElement, ParentGraph), Z_Construct_UClass_UGraph_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGraphElement_Statics::NewProp_ParentGraph_MetaData), Z_Construct_UClass_UGraphElement_Statics::NewProp_ParentGraph_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGraphElement_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGraphElement_Statics::NewProp_ElementType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGraphElement_Statics::NewProp_ElementType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGraphElement_Statics::NewProp_UniqueIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGraphElement_Statics::NewProp_ParentGraph,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGraphElement_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGraphElement>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGraphElement_Statics::ClassParams = {
		&UGraphElement::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGraphElement_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGraphElement_Statics::PropPointers),
		0,
		0x001000A1u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGraphElement_Statics::Class_MetaDataParams), Z_Construct_UClass_UGraphElement_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGraphElement_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UGraphElement()
	{
		if (!Z_Registration_Info_UClass_UGraphElement.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGraphElement.OuterSingleton, Z_Construct_UClass_UGraphElement_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGraphElement.OuterSingleton;
	}
	template<> GAMEPLAYGRAPH_API UClass* StaticClass<UGraphElement>()
	{
		return UGraphElement::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGraphElement);
	UGraphElement::~UGraphElement() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GameplayGraph_Source_GameplayGraph_Public_Graph_GraphElement_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GameplayGraph_Source_GameplayGraph_Public_Graph_GraphElement_h_Statics::EnumInfo[] = {
		{ EGraphElementType_StaticEnum, TEXT("EGraphElementType"), &Z_Registration_Info_UEnum_EGraphElementType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4176938858U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GameplayGraph_Source_GameplayGraph_Public_Graph_GraphElement_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGraphElement, UGraphElement::StaticClass, TEXT("UGraphElement"), &Z_Registration_Info_UClass_UGraphElement, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGraphElement), 3806353269U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GameplayGraph_Source_GameplayGraph_Public_Graph_GraphElement_h_1083263412(TEXT("/Script/GameplayGraph"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GameplayGraph_Source_GameplayGraph_Public_Graph_GraphElement_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GameplayGraph_Source_GameplayGraph_Public_Graph_GraphElement_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GameplayGraph_Source_GameplayGraph_Public_Graph_GraphElement_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GameplayGraph_Source_GameplayGraph_Public_Graph_GraphElement_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
