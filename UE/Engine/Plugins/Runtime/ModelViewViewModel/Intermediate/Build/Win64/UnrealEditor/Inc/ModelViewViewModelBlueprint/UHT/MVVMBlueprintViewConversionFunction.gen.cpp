// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MVVMBlueprintViewConversionFunction.h"
#include "../../Source/Runtime/Engine/Classes/Engine/MemberReference.h"
#include "MVVMBlueprintPin.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMVVMBlueprintViewConversionFunction() {}
// Cross Module References
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_UEdGraph_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMemberReference();
	MODELVIEWVIEWMODELBLUEPRINT_API UClass* Z_Construct_UClass_UMVVMBlueprintViewConversionFunction();
	MODELVIEWVIEWMODELBLUEPRINT_API UClass* Z_Construct_UClass_UMVVMBlueprintViewConversionFunction_NoRegister();
	MODELVIEWVIEWMODELBLUEPRINT_API UScriptStruct* Z_Construct_UScriptStruct_FMVVMBlueprintPin();
	UPackage* Z_Construct_UPackage__Script_ModelViewViewModelBlueprint();
// End Cross Module References
	void UMVVMBlueprintViewConversionFunction::StaticRegisterNativesUMVVMBlueprintViewConversionFunction()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMVVMBlueprintViewConversionFunction);
	UClass* Z_Construct_UClass_UMVVMBlueprintViewConversionFunction_NoRegister()
	{
		return UMVVMBlueprintViewConversionFunction::StaticClass();
	}
	struct Z_Construct_UClass_UMVVMBlueprintViewConversionFunction_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FunctionReference_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FunctionReference;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FunctionNode_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_FunctionNode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GraphName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_GraphName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SavedPins_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SavedPins_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SavedPins;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bWrapperGraphTransient_MetaData[];
#endif
		static void NewProp_bWrapperGraphTransient_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bWrapperGraphTransient;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CachedWrapperGraph_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CachedWrapperGraph;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CachedWrapperNode_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CachedWrapperNode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMVVMBlueprintViewConversionFunction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ModelViewViewModelBlueprint,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMVVMBlueprintViewConversionFunction_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMVVMBlueprintViewConversionFunction_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "IncludePath", "MVVMBlueprintViewConversionFunction.h" },
		{ "ModuleRelativePath", "Public/MVVMBlueprintViewConversionFunction.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMVVMBlueprintViewConversionFunction_Statics::NewProp_FunctionReference_MetaData[] = {
		{ "Category", "Viewmodel" },
		{ "Comment", "/**\n\x09 * The conversion UFunction when simple or when it's complex.\n\x09 * @note Only one of FunctionReference or the GraphNode can be valid.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MVVMBlueprintViewConversionFunction.h" },
		{ "ToolTip", "The conversion UFunction when simple or when it's complex.\n@note Only one of FunctionReference or the GraphNode can be valid." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMVVMBlueprintViewConversionFunction_Statics::NewProp_FunctionReference = { "FunctionReference", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMVVMBlueprintViewConversionFunction, FunctionReference), Z_Construct_UScriptStruct_FMemberReference, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMVVMBlueprintViewConversionFunction_Statics::NewProp_FunctionReference_MetaData), Z_Construct_UClass_UMVVMBlueprintViewConversionFunction_Statics::NewProp_FunctionReference_MetaData) }; // 544905968
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMVVMBlueprintViewConversionFunction_Statics::NewProp_FunctionNode_MetaData[] = {
		{ "Category", "Viewmodel" },
		{ "Comment", "/**\n\x09 * The conversion K2Node the graph is generated for.\n\x09 * @note Only one of FunctionReference or the GraphNode can be valid.\n\x09 * @note The conversion is complex.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MVVMBlueprintViewConversionFunction.h" },
		{ "ToolTip", "The conversion K2Node the graph is generated for.\n@note Only one of FunctionReference or the GraphNode can be valid.\n@note The conversion is complex." },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UMVVMBlueprintViewConversionFunction_Statics::NewProp_FunctionNode = { "FunctionNode", nullptr, (EPropertyFlags)0x0044000000020001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMVVMBlueprintViewConversionFunction, FunctionNode), Z_Construct_UClass_UClass, Z_Construct_UClass_UK2Node_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMVVMBlueprintViewConversionFunction_Statics::NewProp_FunctionNode_MetaData), Z_Construct_UClass_UMVVMBlueprintViewConversionFunction_Statics::NewProp_FunctionNode_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMVVMBlueprintViewConversionFunction_Statics::NewProp_GraphName_MetaData[] = {
		{ "Category", "Viewmodel" },
		{ "Comment", "/** Name of the generated graph if a wrapper is needed. */" },
		{ "ModuleRelativePath", "Public/MVVMBlueprintViewConversionFunction.h" },
		{ "ToolTip", "Name of the generated graph if a wrapper is needed." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UMVVMBlueprintViewConversionFunction_Statics::NewProp_GraphName = { "GraphName", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMVVMBlueprintViewConversionFunction, GraphName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMVVMBlueprintViewConversionFunction_Statics::NewProp_GraphName_MetaData), Z_Construct_UClass_UMVVMBlueprintViewConversionFunction_Statics::NewProp_GraphName_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMVVMBlueprintViewConversionFunction_Statics::NewProp_SavedPins_Inner = { "SavedPins", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FMVVMBlueprintPin, METADATA_PARAMS(0, nullptr) }; // 3618881798
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMVVMBlueprintViewConversionFunction_Statics::NewProp_SavedPins_MetaData[] = {
		{ "Category", "Viewmodel" },
		{ "Comment", "/**\n\x09 * The pin that are modified and we saved data.\n\x09 * The data may not be modified. We used the default value of the K2Node in that case.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MVVMBlueprintViewConversionFunction.h" },
		{ "ToolTip", "The pin that are modified and we saved data.\nThe data may not be modified. We used the default value of the K2Node in that case." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMVVMBlueprintViewConversionFunction_Statics::NewProp_SavedPins = { "SavedPins", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMVVMBlueprintViewConversionFunction, SavedPins), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMVVMBlueprintViewConversionFunction_Statics::NewProp_SavedPins_MetaData), Z_Construct_UClass_UMVVMBlueprintViewConversionFunction_Statics::NewProp_SavedPins_MetaData) }; // 3618881798
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMVVMBlueprintViewConversionFunction_Statics::NewProp_bWrapperGraphTransient_MetaData[] = {
		{ "Category", "Viewmodel" },
		{ "ModuleRelativePath", "Public/MVVMBlueprintViewConversionFunction.h" },
	};
#endif
	void Z_Construct_UClass_UMVVMBlueprintViewConversionFunction_Statics::NewProp_bWrapperGraphTransient_SetBit(void* Obj)
	{
		((UMVVMBlueprintViewConversionFunction*)Obj)->bWrapperGraphTransient = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMVVMBlueprintViewConversionFunction_Statics::NewProp_bWrapperGraphTransient = { "bWrapperGraphTransient", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMVVMBlueprintViewConversionFunction), &Z_Construct_UClass_UMVVMBlueprintViewConversionFunction_Statics::NewProp_bWrapperGraphTransient_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMVVMBlueprintViewConversionFunction_Statics::NewProp_bWrapperGraphTransient_MetaData), Z_Construct_UClass_UMVVMBlueprintViewConversionFunction_Statics::NewProp_bWrapperGraphTransient_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMVVMBlueprintViewConversionFunction_Statics::NewProp_CachedWrapperGraph_MetaData[] = {
		{ "ModuleRelativePath", "Public/MVVMBlueprintViewConversionFunction.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMVVMBlueprintViewConversionFunction_Statics::NewProp_CachedWrapperGraph = { "CachedWrapperGraph", nullptr, (EPropertyFlags)0x0044000000202000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMVVMBlueprintViewConversionFunction, CachedWrapperGraph), Z_Construct_UClass_UEdGraph_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMVVMBlueprintViewConversionFunction_Statics::NewProp_CachedWrapperGraph_MetaData), Z_Construct_UClass_UMVVMBlueprintViewConversionFunction_Statics::NewProp_CachedWrapperGraph_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMVVMBlueprintViewConversionFunction_Statics::NewProp_CachedWrapperNode_MetaData[] = {
		{ "ModuleRelativePath", "Public/MVVMBlueprintViewConversionFunction.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMVVMBlueprintViewConversionFunction_Statics::NewProp_CachedWrapperNode = { "CachedWrapperNode", nullptr, (EPropertyFlags)0x0044000000202000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMVVMBlueprintViewConversionFunction, CachedWrapperNode), Z_Construct_UClass_UK2Node_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMVVMBlueprintViewConversionFunction_Statics::NewProp_CachedWrapperNode_MetaData), Z_Construct_UClass_UMVVMBlueprintViewConversionFunction_Statics::NewProp_CachedWrapperNode_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMVVMBlueprintViewConversionFunction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMVVMBlueprintViewConversionFunction_Statics::NewProp_FunctionReference,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMVVMBlueprintViewConversionFunction_Statics::NewProp_FunctionNode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMVVMBlueprintViewConversionFunction_Statics::NewProp_GraphName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMVVMBlueprintViewConversionFunction_Statics::NewProp_SavedPins_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMVVMBlueprintViewConversionFunction_Statics::NewProp_SavedPins,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMVVMBlueprintViewConversionFunction_Statics::NewProp_bWrapperGraphTransient,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMVVMBlueprintViewConversionFunction_Statics::NewProp_CachedWrapperGraph,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMVVMBlueprintViewConversionFunction_Statics::NewProp_CachedWrapperNode,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMVVMBlueprintViewConversionFunction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMVVMBlueprintViewConversionFunction>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMVVMBlueprintViewConversionFunction_Statics::ClassParams = {
		&UMVVMBlueprintViewConversionFunction::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMVVMBlueprintViewConversionFunction_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMVVMBlueprintViewConversionFunction_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMVVMBlueprintViewConversionFunction_Statics::Class_MetaDataParams), Z_Construct_UClass_UMVVMBlueprintViewConversionFunction_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMVVMBlueprintViewConversionFunction_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UMVVMBlueprintViewConversionFunction()
	{
		if (!Z_Registration_Info_UClass_UMVVMBlueprintViewConversionFunction.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMVVMBlueprintViewConversionFunction.OuterSingleton, Z_Construct_UClass_UMVVMBlueprintViewConversionFunction_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMVVMBlueprintViewConversionFunction.OuterSingleton;
	}
	template<> MODELVIEWVIEWMODELBLUEPRINT_API UClass* StaticClass<UMVVMBlueprintViewConversionFunction>()
	{
		return UMVVMBlueprintViewConversionFunction::StaticClass();
	}
	UMVVMBlueprintViewConversionFunction::UMVVMBlueprintViewConversionFunction(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMVVMBlueprintViewConversionFunction);
	UMVVMBlueprintViewConversionFunction::~UMVVMBlueprintViewConversionFunction() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModelBlueprint_Public_MVVMBlueprintViewConversionFunction_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModelBlueprint_Public_MVVMBlueprintViewConversionFunction_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMVVMBlueprintViewConversionFunction, UMVVMBlueprintViewConversionFunction::StaticClass, TEXT("UMVVMBlueprintViewConversionFunction"), &Z_Registration_Info_UClass_UMVVMBlueprintViewConversionFunction, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMVVMBlueprintViewConversionFunction), 639103004U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModelBlueprint_Public_MVVMBlueprintViewConversionFunction_h_922907611(TEXT("/Script/ModelViewViewModelBlueprint"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModelBlueprint_Public_MVVMBlueprintViewConversionFunction_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModelBlueprint_Public_MVVMBlueprintViewConversionFunction_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
