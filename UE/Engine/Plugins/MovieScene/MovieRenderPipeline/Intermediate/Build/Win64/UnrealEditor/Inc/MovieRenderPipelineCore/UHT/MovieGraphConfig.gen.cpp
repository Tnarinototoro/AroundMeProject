// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Graph/MovieGraphConfig.h"
#include "Graph/MovieGraphTraversalContext.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieGraphConfig() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	ENGINE_API UClass* Z_Construct_UClass_UEdGraph_NoRegister();
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMovieGraphConfig();
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMovieGraphConfig_NoRegister();
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMovieGraphEvaluatedConfig();
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMovieGraphEvaluatedConfig_NoRegister();
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMovieGraphInput();
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMovieGraphInput_NoRegister();
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMovieGraphInterfaceBase();
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMovieGraphInterfaceBase_NoRegister();
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMovieGraphMember();
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMovieGraphMember_NoRegister();
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMovieGraphNode_NoRegister();
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMovieGraphOutput();
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMovieGraphOutput_NoRegister();
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMovieGraphPin_NoRegister();
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMovieGraphSubgraphNode_NoRegister();
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMovieGraphValueContainer();
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMovieGraphVariable();
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMovieGraphVariable_NoRegister();
	MOVIERENDERPIPELINECORE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieGraphEvaluatedBranchConfig();
	MOVIERENDERPIPELINECORE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieGraphEvaluatedSettingsStack();
	MOVIERENDERPIPELINECORE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieGraphEvaluationContext();
	MOVIERENDERPIPELINECORE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieGraphTraversalContext();
	UPackage* Z_Construct_UPackage__Script_MovieRenderPipelineCore();
// End Cross Module References
	void UMovieGraphMember::StaticRegisterNativesUMovieGraphMember()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieGraphMember);
	UClass* Z_Construct_UClass_UMovieGraphMember_NoRegister()
	{
		return UMovieGraphMember::StaticClass();
	}
	struct Z_Construct_UClass_UMovieGraphMember_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Description;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Guid_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Guid;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsEditable_MetaData[];
#endif
		static void NewProp_bIsEditable_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsEditable;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieGraphMember_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieGraphValueContainer,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieRenderPipelineCore,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieGraphMember_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieGraphMember_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Graph/MovieGraphConfig.h" },
		{ "ModuleRelativePath", "Public/Graph/MovieGraphConfig.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieGraphMember_Statics::NewProp_Description_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "/** The optional description of this member, which is user-facing. */" },
		{ "EditCondition", "bIsEditable" },
		{ "HideEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Graph/MovieGraphConfig.h" },
		{ "ToolTip", "The optional description of this member, which is user-facing." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMovieGraphMember_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieGraphMember, Description), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieGraphMember_Statics::NewProp_Description_MetaData), Z_Construct_UClass_UMovieGraphMember_Statics::NewProp_Description_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieGraphMember_Statics::NewProp_Name_MetaData[] = {
		{ "Comment", "/** The name of this member, which is user-facing. */" },
		{ "ModuleRelativePath", "Public/Graph/MovieGraphConfig.h" },
		{ "ToolTip", "The name of this member, which is user-facing." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMovieGraphMember_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieGraphMember, Name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieGraphMember_Statics::NewProp_Name_MetaData), Z_Construct_UClass_UMovieGraphMember_Statics::NewProp_Name_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieGraphMember_Statics::NewProp_Guid_MetaData[] = {
		{ "Comment", "/** A GUID that uniquely identifies this member within its graph. */" },
		{ "ModuleRelativePath", "Public/Graph/MovieGraphConfig.h" },
		{ "ToolTip", "A GUID that uniquely identifies this member within its graph." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieGraphMember_Statics::NewProp_Guid = { "Guid", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieGraphMember, Guid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieGraphMember_Statics::NewProp_Guid_MetaData), Z_Construct_UClass_UMovieGraphMember_Statics::NewProp_Guid_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieGraphMember_Statics::NewProp_bIsEditable_MetaData[] = {
		{ "Comment", "/** Whether this member can be edited in the UI. */" },
		{ "ModuleRelativePath", "Public/Graph/MovieGraphConfig.h" },
		{ "ToolTip", "Whether this member can be edited in the UI." },
	};
#endif
	void Z_Construct_UClass_UMovieGraphMember_Statics::NewProp_bIsEditable_SetBit(void* Obj)
	{
		((UMovieGraphMember*)Obj)->bIsEditable = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMovieGraphMember_Statics::NewProp_bIsEditable = { "bIsEditable", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMovieGraphMember), &Z_Construct_UClass_UMovieGraphMember_Statics::NewProp_bIsEditable_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieGraphMember_Statics::NewProp_bIsEditable_MetaData), Z_Construct_UClass_UMovieGraphMember_Statics::NewProp_bIsEditable_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieGraphMember_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieGraphMember_Statics::NewProp_Description,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieGraphMember_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieGraphMember_Statics::NewProp_Guid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieGraphMember_Statics::NewProp_bIsEditable,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieGraphMember_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieGraphMember>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieGraphMember_Statics::ClassParams = {
		&UMovieGraphMember::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMovieGraphMember_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMovieGraphMember_Statics::PropPointers),
		0,
		0x001000A1u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieGraphMember_Statics::Class_MetaDataParams), Z_Construct_UClass_UMovieGraphMember_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieGraphMember_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UMovieGraphMember()
	{
		if (!Z_Registration_Info_UClass_UMovieGraphMember.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieGraphMember.OuterSingleton, Z_Construct_UClass_UMovieGraphMember_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMovieGraphMember.OuterSingleton;
	}
	template<> MOVIERENDERPIPELINECORE_API UClass* StaticClass<UMovieGraphMember>()
	{
		return UMovieGraphMember::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieGraphMember);
	UMovieGraphMember::~UMovieGraphMember() {}
	void UMovieGraphVariable::StaticRegisterNativesUMovieGraphVariable()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieGraphVariable);
	UClass* Z_Construct_UClass_UMovieGraphVariable_NoRegister()
	{
		return UMovieGraphVariable::StaticClass();
	}
	struct Z_Construct_UClass_UMovieGraphVariable_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsGlobal_MetaData[];
#endif
		static void NewProp_bIsGlobal_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsGlobal;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieGraphVariable_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieGraphMember,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieRenderPipelineCore,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieGraphVariable_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieGraphVariable_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * A variable that can be used inside the graph. Most variables are created by the user, and can have their value\n * changed at the job level. Global variables, however, are not user-created and their values are provided when the\n * graph is evaluated. Overriding them at the job level is not possible.\n */" },
		{ "IncludePath", "Graph/MovieGraphConfig.h" },
		{ "ModuleRelativePath", "Public/Graph/MovieGraphConfig.h" },
		{ "ToolTip", "A variable that can be used inside the graph. Most variables are created by the user, and can have their value\nchanged at the job level. Global variables, however, are not user-created and their values are provided when the\ngraph is evaluated. Overriding them at the job level is not possible." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieGraphVariable_Statics::NewProp_bIsGlobal_MetaData[] = {
		{ "Comment", "/** Whether this variable represents a global variable. */" },
		{ "ModuleRelativePath", "Public/Graph/MovieGraphConfig.h" },
		{ "ToolTip", "Whether this variable represents a global variable." },
	};
#endif
	void Z_Construct_UClass_UMovieGraphVariable_Statics::NewProp_bIsGlobal_SetBit(void* Obj)
	{
		((UMovieGraphVariable*)Obj)->bIsGlobal = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMovieGraphVariable_Statics::NewProp_bIsGlobal = { "bIsGlobal", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMovieGraphVariable), &Z_Construct_UClass_UMovieGraphVariable_Statics::NewProp_bIsGlobal_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieGraphVariable_Statics::NewProp_bIsGlobal_MetaData), Z_Construct_UClass_UMovieGraphVariable_Statics::NewProp_bIsGlobal_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieGraphVariable_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieGraphVariable_Statics::NewProp_bIsGlobal,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieGraphVariable_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieGraphVariable>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieGraphVariable_Statics::ClassParams = {
		&UMovieGraphVariable::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMovieGraphVariable_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMovieGraphVariable_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieGraphVariable_Statics::Class_MetaDataParams), Z_Construct_UClass_UMovieGraphVariable_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieGraphVariable_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UMovieGraphVariable()
	{
		if (!Z_Registration_Info_UClass_UMovieGraphVariable.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieGraphVariable.OuterSingleton, Z_Construct_UClass_UMovieGraphVariable_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMovieGraphVariable.OuterSingleton;
	}
	template<> MOVIERENDERPIPELINECORE_API UClass* StaticClass<UMovieGraphVariable>()
	{
		return UMovieGraphVariable::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieGraphVariable);
	UMovieGraphVariable::~UMovieGraphVariable() {}
	void UMovieGraphInterfaceBase::StaticRegisterNativesUMovieGraphInterfaceBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieGraphInterfaceBase);
	UClass* Z_Construct_UClass_UMovieGraphInterfaceBase_NoRegister()
	{
		return UMovieGraphInterfaceBase::StaticClass();
	}
	struct Z_Construct_UClass_UMovieGraphInterfaceBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsBranch_MetaData[];
#endif
		static void NewProp_bIsBranch_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsBranch;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieGraphInterfaceBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieGraphMember,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieRenderPipelineCore,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieGraphInterfaceBase_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieGraphInterfaceBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Common base class for input/output members on the graph.\n */" },
		{ "IncludePath", "Graph/MovieGraphConfig.h" },
		{ "ModuleRelativePath", "Public/Graph/MovieGraphConfig.h" },
		{ "ToolTip", "Common base class for input/output members on the graph." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieGraphInterfaceBase_Statics::NewProp_bIsBranch_MetaData[] = {
		{ "Category", "Value" },
		{ "Comment", "/** Whether this interface member represents a branch. If not a branch, then a value is associated with it. */" },
		{ "EditCondition", "bIsEditable" },
		{ "HideEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Graph/MovieGraphConfig.h" },
		{ "ToolTip", "Whether this interface member represents a branch. If not a branch, then a value is associated with it." },
	};
#endif
	void Z_Construct_UClass_UMovieGraphInterfaceBase_Statics::NewProp_bIsBranch_SetBit(void* Obj)
	{
		((UMovieGraphInterfaceBase*)Obj)->bIsBranch = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMovieGraphInterfaceBase_Statics::NewProp_bIsBranch = { "bIsBranch", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMovieGraphInterfaceBase), &Z_Construct_UClass_UMovieGraphInterfaceBase_Statics::NewProp_bIsBranch_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieGraphInterfaceBase_Statics::NewProp_bIsBranch_MetaData), Z_Construct_UClass_UMovieGraphInterfaceBase_Statics::NewProp_bIsBranch_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieGraphInterfaceBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieGraphInterfaceBase_Statics::NewProp_bIsBranch,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieGraphInterfaceBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieGraphInterfaceBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieGraphInterfaceBase_Statics::ClassParams = {
		&UMovieGraphInterfaceBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMovieGraphInterfaceBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMovieGraphInterfaceBase_Statics::PropPointers),
		0,
		0x001000A1u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieGraphInterfaceBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UMovieGraphInterfaceBase_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieGraphInterfaceBase_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UMovieGraphInterfaceBase()
	{
		if (!Z_Registration_Info_UClass_UMovieGraphInterfaceBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieGraphInterfaceBase.OuterSingleton, Z_Construct_UClass_UMovieGraphInterfaceBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMovieGraphInterfaceBase.OuterSingleton;
	}
	template<> MOVIERENDERPIPELINECORE_API UClass* StaticClass<UMovieGraphInterfaceBase>()
	{
		return UMovieGraphInterfaceBase::StaticClass();
	}
	UMovieGraphInterfaceBase::UMovieGraphInterfaceBase() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieGraphInterfaceBase);
	UMovieGraphInterfaceBase::~UMovieGraphInterfaceBase() {}
	void UMovieGraphInput::StaticRegisterNativesUMovieGraphInput()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieGraphInput);
	UClass* Z_Construct_UClass_UMovieGraphInput_NoRegister()
	{
		return UMovieGraphInput::StaticClass();
	}
	struct Z_Construct_UClass_UMovieGraphInput_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieGraphInput_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieGraphInterfaceBase,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieRenderPipelineCore,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieGraphInput_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieGraphInput_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * An input exposed on the graph that will be available for nodes to connect to.\n */" },
		{ "IncludePath", "Graph/MovieGraphConfig.h" },
		{ "ModuleRelativePath", "Public/Graph/MovieGraphConfig.h" },
		{ "ToolTip", "An input exposed on the graph that will be available for nodes to connect to." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieGraphInput_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieGraphInput>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieGraphInput_Statics::ClassParams = {
		&UMovieGraphInput::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieGraphInput_Statics::Class_MetaDataParams), Z_Construct_UClass_UMovieGraphInput_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UMovieGraphInput()
	{
		if (!Z_Registration_Info_UClass_UMovieGraphInput.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieGraphInput.OuterSingleton, Z_Construct_UClass_UMovieGraphInput_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMovieGraphInput.OuterSingleton;
	}
	template<> MOVIERENDERPIPELINECORE_API UClass* StaticClass<UMovieGraphInput>()
	{
		return UMovieGraphInput::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieGraphInput);
	UMovieGraphInput::~UMovieGraphInput() {}
	void UMovieGraphOutput::StaticRegisterNativesUMovieGraphOutput()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieGraphOutput);
	UClass* Z_Construct_UClass_UMovieGraphOutput_NoRegister()
	{
		return UMovieGraphOutput::StaticClass();
	}
	struct Z_Construct_UClass_UMovieGraphOutput_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieGraphOutput_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieGraphInterfaceBase,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieRenderPipelineCore,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieGraphOutput_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieGraphOutput_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * An output exposed on the graph that will be available for nodes to connect to.\n */" },
		{ "IncludePath", "Graph/MovieGraphConfig.h" },
		{ "ModuleRelativePath", "Public/Graph/MovieGraphConfig.h" },
		{ "ToolTip", "An output exposed on the graph that will be available for nodes to connect to." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieGraphOutput_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieGraphOutput>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieGraphOutput_Statics::ClassParams = {
		&UMovieGraphOutput::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieGraphOutput_Statics::Class_MetaDataParams), Z_Construct_UClass_UMovieGraphOutput_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UMovieGraphOutput()
	{
		if (!Z_Registration_Info_UClass_UMovieGraphOutput.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieGraphOutput.OuterSingleton, Z_Construct_UClass_UMovieGraphOutput_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMovieGraphOutput.OuterSingleton;
	}
	template<> MOVIERENDERPIPELINECORE_API UClass* StaticClass<UMovieGraphOutput>()
	{
		return UMovieGraphOutput::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieGraphOutput);
	UMovieGraphOutput::~UMovieGraphOutput() {}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieGraphEvaluatedSettingsStack;
class UScriptStruct* FMovieGraphEvaluatedSettingsStack::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieGraphEvaluatedSettingsStack.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieGraphEvaluatedSettingsStack.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieGraphEvaluatedSettingsStack, (UObject*)Z_Construct_UPackage__Script_MovieRenderPipelineCore(), TEXT("MovieGraphEvaluatedSettingsStack"));
	}
	return Z_Registration_Info_UScriptStruct_MovieGraphEvaluatedSettingsStack.OuterSingleton;
}
template<> MOVIERENDERPIPELINECORE_API UScriptStruct* StaticStruct<FMovieGraphEvaluatedSettingsStack>()
{
	return FMovieGraphEvaluatedSettingsStack::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMovieGraphEvaluatedSettingsStack_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_NodeInstances_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NodeInstances_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_NodeInstances;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieGraphEvaluatedSettingsStack_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Graph/MovieGraphConfig.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieGraphEvaluatedSettingsStack_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieGraphEvaluatedSettingsStack>();
	}
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FMovieGraphEvaluatedSettingsStack_Statics::NewProp_NodeInstances_Inner = { "NodeInstances", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UMovieGraphNode_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieGraphEvaluatedSettingsStack_Statics::NewProp_NodeInstances_MetaData[] = {
		{ "ModuleRelativePath", "Public/Graph/MovieGraphConfig.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMovieGraphEvaluatedSettingsStack_Statics::NewProp_NodeInstances = { "NodeInstances", nullptr, (EPropertyFlags)0x0014000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieGraphEvaluatedSettingsStack, NodeInstances), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieGraphEvaluatedSettingsStack_Statics::NewProp_NodeInstances_MetaData), Z_Construct_UScriptStruct_FMovieGraphEvaluatedSettingsStack_Statics::NewProp_NodeInstances_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieGraphEvaluatedSettingsStack_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieGraphEvaluatedSettingsStack_Statics::NewProp_NodeInstances_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieGraphEvaluatedSettingsStack_Statics::NewProp_NodeInstances,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieGraphEvaluatedSettingsStack_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieRenderPipelineCore,
		nullptr,
		&NewStructOps,
		"MovieGraphEvaluatedSettingsStack",
		Z_Construct_UScriptStruct_FMovieGraphEvaluatedSettingsStack_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieGraphEvaluatedSettingsStack_Statics::PropPointers),
		sizeof(FMovieGraphEvaluatedSettingsStack),
		alignof(FMovieGraphEvaluatedSettingsStack),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieGraphEvaluatedSettingsStack_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMovieGraphEvaluatedSettingsStack_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieGraphEvaluatedSettingsStack_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FMovieGraphEvaluatedSettingsStack()
	{
		if (!Z_Registration_Info_UScriptStruct_MovieGraphEvaluatedSettingsStack.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieGraphEvaluatedSettingsStack.InnerSingleton, Z_Construct_UScriptStruct_FMovieGraphEvaluatedSettingsStack_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MovieGraphEvaluatedSettingsStack.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieGraphEvaluatedBranchConfig;
class UScriptStruct* FMovieGraphEvaluatedBranchConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieGraphEvaluatedBranchConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieGraphEvaluatedBranchConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieGraphEvaluatedBranchConfig, (UObject*)Z_Construct_UPackage__Script_MovieRenderPipelineCore(), TEXT("MovieGraphEvaluatedBranchConfig"));
	}
	return Z_Registration_Info_UScriptStruct_MovieGraphEvaluatedBranchConfig.OuterSingleton;
}
template<> MOVIERENDERPIPELINECORE_API UScriptStruct* StaticStruct<FMovieGraphEvaluatedBranchConfig>()
{
	return FMovieGraphEvaluatedBranchConfig::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMovieGraphEvaluatedBranchConfig_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_NamedNodes_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_NamedNodes_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NamedNodes_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_NamedNodes;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieGraphEvaluatedBranchConfig_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n* A flattened list of configuration values for a given Graph Branch. For named branches, this includes the \"Globals\"\n* branch (for any value not also overridden by the named branch).\n* \n*/" },
		{ "ModuleRelativePath", "Public/Graph/MovieGraphConfig.h" },
		{ "ToolTip", "A flattened list of configuration values for a given Graph Branch. For named branches, this includes the \"Globals\"\nbranch (for any value not also overridden by the named branch)." },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieGraphEvaluatedBranchConfig_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieGraphEvaluatedBranchConfig>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieGraphEvaluatedBranchConfig_Statics::NewProp_NamedNodes_ValueProp = { "NamedNodes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FMovieGraphEvaluatedSettingsStack, METADATA_PARAMS(0, nullptr) }; // 2089676963
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMovieGraphEvaluatedBranchConfig_Statics::NewProp_NamedNodes_Key_KeyProp = { "NamedNodes_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieGraphEvaluatedBranchConfig_Statics::NewProp_NamedNodes_MetaData[] = {
		{ "Comment", "/**\n\x09* Nodes that have been evaluated in the branch. Key: the node instance name, value: the nodes that share the\n\x09* instance name. For nodes that do not have an instance name, an empty string is the key.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Graph/MovieGraphConfig.h" },
		{ "ToolTip", "Nodes that have been evaluated in the branch. Key: the node instance name, value: the nodes that share the\ninstance name. For nodes that do not have an instance name, an empty string is the key." },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FMovieGraphEvaluatedBranchConfig_Statics::NewProp_NamedNodes = { "NamedNodes", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieGraphEvaluatedBranchConfig, NamedNodes), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieGraphEvaluatedBranchConfig_Statics::NewProp_NamedNodes_MetaData), Z_Construct_UScriptStruct_FMovieGraphEvaluatedBranchConfig_Statics::NewProp_NamedNodes_MetaData) }; // 2089676963
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieGraphEvaluatedBranchConfig_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieGraphEvaluatedBranchConfig_Statics::NewProp_NamedNodes_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieGraphEvaluatedBranchConfig_Statics::NewProp_NamedNodes_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieGraphEvaluatedBranchConfig_Statics::NewProp_NamedNodes,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieGraphEvaluatedBranchConfig_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieRenderPipelineCore,
		nullptr,
		&NewStructOps,
		"MovieGraphEvaluatedBranchConfig",
		Z_Construct_UScriptStruct_FMovieGraphEvaluatedBranchConfig_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieGraphEvaluatedBranchConfig_Statics::PropPointers),
		sizeof(FMovieGraphEvaluatedBranchConfig),
		alignof(FMovieGraphEvaluatedBranchConfig),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieGraphEvaluatedBranchConfig_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMovieGraphEvaluatedBranchConfig_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieGraphEvaluatedBranchConfig_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FMovieGraphEvaluatedBranchConfig()
	{
		if (!Z_Registration_Info_UScriptStruct_MovieGraphEvaluatedBranchConfig.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieGraphEvaluatedBranchConfig.InnerSingleton, Z_Construct_UScriptStruct_FMovieGraphEvaluatedBranchConfig_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MovieGraphEvaluatedBranchConfig.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieGraphEvaluationContext;
class UScriptStruct* FMovieGraphEvaluationContext::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieGraphEvaluationContext.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieGraphEvaluationContext.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieGraphEvaluationContext, (UObject*)Z_Construct_UPackage__Script_MovieRenderPipelineCore(), TEXT("MovieGraphEvaluationContext"));
	}
	return Z_Registration_Info_UScriptStruct_MovieGraphEvaluationContext.OuterSingleton;
}
template<> MOVIERENDERPIPELINECORE_API UScriptStruct* StaticStruct<FMovieGraphEvaluationContext>()
{
	return FMovieGraphEvaluationContext::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMovieGraphEvaluationContext_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UserContext_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_UserContext;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_VisitedNodes_ElementProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VisitedNodes_MetaData[];
#endif
		static const UECodeGen_Private::FSetPropertyParams NewProp_VisitedNodes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PinBeingFollowed_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PinBeingFollowed;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SubgraphStack_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SubgraphStack_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SubgraphStack;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieGraphEvaluationContext_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n* This stores short-term information needed during traversal of the graph\n* such as disabled nodes, already visited nodes, etc. This information is\n* discarded after traversal.\n*/" },
		{ "ModuleRelativePath", "Public/Graph/MovieGraphConfig.h" },
		{ "ToolTip", "This stores short-term information needed during traversal of the graph\nsuch as disabled nodes, already visited nodes, etc. This information is\ndiscarded after traversal." },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieGraphEvaluationContext_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieGraphEvaluationContext>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieGraphEvaluationContext_Statics::NewProp_UserContext_MetaData[] = {
		{ "Comment", "/** \n\x09* This is the user provided traversal context which specifies high level user decisions. This is the calling\n\x09* context such as what frame you're on, or what the shot name is, stuff generally driven by global variables.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Graph/MovieGraphConfig.h" },
		{ "ToolTip", "This is the user provided traversal context which specifies high level user decisions. This is the calling\ncontext such as what frame you're on, or what the shot name is, stuff generally driven by global variables." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieGraphEvaluationContext_Statics::NewProp_UserContext = { "UserContext", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieGraphEvaluationContext, UserContext), Z_Construct_UScriptStruct_FMovieGraphTraversalContext, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieGraphEvaluationContext_Statics::NewProp_UserContext_MetaData), Z_Construct_UScriptStruct_FMovieGraphEvaluationContext_Statics::NewProp_UserContext_MetaData) }; // 3782139928
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FMovieGraphEvaluationContext_Statics::NewProp_VisitedNodes_ElementProp = { "VisitedNodes", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UMovieGraphNode_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieGraphEvaluationContext_Statics::NewProp_VisitedNodes_MetaData[] = {
		{ "Comment", "/**\n\x09* A list of nodes that have been visited. Used for cycle detection right now.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Graph/MovieGraphConfig.h" },
		{ "ToolTip", "A list of nodes that have been visited. Used for cycle detection right now." },
	};
#endif
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UScriptStruct_FMovieGraphEvaluationContext_Statics::NewProp_VisitedNodes = { "VisitedNodes", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieGraphEvaluationContext, VisitedNodes), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieGraphEvaluationContext_Statics::NewProp_VisitedNodes_MetaData), Z_Construct_UScriptStruct_FMovieGraphEvaluationContext_Statics::NewProp_VisitedNodes_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieGraphEvaluationContext_Statics::NewProp_PinBeingFollowed_MetaData[] = {
		{ "Comment", "/**\n\x09* The pin that is currently being followed in the traversal process.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Graph/MovieGraphConfig.h" },
		{ "ToolTip", "The pin that is currently being followed in the traversal process." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FMovieGraphEvaluationContext_Statics::NewProp_PinBeingFollowed = { "PinBeingFollowed", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieGraphEvaluationContext, PinBeingFollowed), Z_Construct_UClass_UMovieGraphPin_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieGraphEvaluationContext_Statics::NewProp_PinBeingFollowed_MetaData), Z_Construct_UScriptStruct_FMovieGraphEvaluationContext_Statics::NewProp_PinBeingFollowed_MetaData) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FMovieGraphEvaluationContext_Statics::NewProp_SubgraphStack_Inner = { "SubgraphStack", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UMovieGraphSubgraphNode_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieGraphEvaluationContext_Statics::NewProp_SubgraphStack_MetaData[] = {
		{ "Comment", "/**\n\x09* The current stack of subgraphs that are being visited. The last subgraph in the stack is the one currently being\n\x09* visited. If no subgraphs are in this stack, then the parent-most graph is being traversed currently.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Graph/MovieGraphConfig.h" },
		{ "ToolTip", "The current stack of subgraphs that are being visited. The last subgraph in the stack is the one currently being\nvisited. If no subgraphs are in this stack, then the parent-most graph is being traversed currently." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMovieGraphEvaluationContext_Statics::NewProp_SubgraphStack = { "SubgraphStack", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieGraphEvaluationContext, SubgraphStack), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieGraphEvaluationContext_Statics::NewProp_SubgraphStack_MetaData), Z_Construct_UScriptStruct_FMovieGraphEvaluationContext_Statics::NewProp_SubgraphStack_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieGraphEvaluationContext_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieGraphEvaluationContext_Statics::NewProp_UserContext,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieGraphEvaluationContext_Statics::NewProp_VisitedNodes_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieGraphEvaluationContext_Statics::NewProp_VisitedNodes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieGraphEvaluationContext_Statics::NewProp_PinBeingFollowed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieGraphEvaluationContext_Statics::NewProp_SubgraphStack_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieGraphEvaluationContext_Statics::NewProp_SubgraphStack,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieGraphEvaluationContext_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieRenderPipelineCore,
		nullptr,
		&NewStructOps,
		"MovieGraphEvaluationContext",
		Z_Construct_UScriptStruct_FMovieGraphEvaluationContext_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieGraphEvaluationContext_Statics::PropPointers),
		sizeof(FMovieGraphEvaluationContext),
		alignof(FMovieGraphEvaluationContext),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieGraphEvaluationContext_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMovieGraphEvaluationContext_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieGraphEvaluationContext_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FMovieGraphEvaluationContext()
	{
		if (!Z_Registration_Info_UScriptStruct_MovieGraphEvaluationContext.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieGraphEvaluationContext.InnerSingleton, Z_Construct_UScriptStruct_FMovieGraphEvaluationContext_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MovieGraphEvaluationContext.InnerSingleton;
	}
	void UMovieGraphEvaluatedConfig::StaticRegisterNativesUMovieGraphEvaluatedConfig()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieGraphEvaluatedConfig);
	UClass* Z_Construct_UClass_UMovieGraphEvaluatedConfig_NoRegister()
	{
		return UMovieGraphEvaluatedConfig::StaticClass();
	}
	struct Z_Construct_UClass_UMovieGraphEvaluatedConfig_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BranchConfigMapping_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_BranchConfigMapping_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BranchConfigMapping_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_BranchConfigMapping;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieGraphEvaluatedConfig_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieRenderPipelineCore,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieGraphEvaluatedConfig_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieGraphEvaluatedConfig_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n* An evaluated config for the current frame. Each named branch (including Globals) has its own\n* copy of the config, fully resolved (so there is no need to check the Globals branch when\n* looking at a named branch). You can use the functions to fetch a node by type from a given\n* branch and it will return the right object (or the CDO if the node is NOT in the config).\n*/" },
		{ "IncludePath", "Graph/MovieGraphConfig.h" },
		{ "ModuleRelativePath", "Public/Graph/MovieGraphConfig.h" },
		{ "ToolTip", "An evaluated config for the current frame. Each named branch (including Globals) has its own\ncopy of the config, fully resolved (so there is no need to check the Globals branch when\nlooking at a named branch). You can use the functions to fetch a node by type from a given\nbranch and it will return the right object (or the CDO if the node is NOT in the config)." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieGraphEvaluatedConfig_Statics::NewProp_BranchConfigMapping_ValueProp = { "BranchConfigMapping", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FMovieGraphEvaluatedBranchConfig, METADATA_PARAMS(0, nullptr) }; // 2167897963
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UMovieGraphEvaluatedConfig_Statics::NewProp_BranchConfigMapping_Key_KeyProp = { "BranchConfigMapping_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieGraphEvaluatedConfig_Statics::NewProp_BranchConfigMapping_MetaData[] = {
		{ "Comment", "/** Mapping between named branches (at the root of the config) and their evaluated values. */" },
		{ "ModuleRelativePath", "Public/Graph/MovieGraphConfig.h" },
		{ "ToolTip", "Mapping between named branches (at the root of the config) and their evaluated values." },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UMovieGraphEvaluatedConfig_Statics::NewProp_BranchConfigMapping = { "BranchConfigMapping", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieGraphEvaluatedConfig, BranchConfigMapping), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieGraphEvaluatedConfig_Statics::NewProp_BranchConfigMapping_MetaData), Z_Construct_UClass_UMovieGraphEvaluatedConfig_Statics::NewProp_BranchConfigMapping_MetaData) }; // 2167897963
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieGraphEvaluatedConfig_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieGraphEvaluatedConfig_Statics::NewProp_BranchConfigMapping_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieGraphEvaluatedConfig_Statics::NewProp_BranchConfigMapping_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieGraphEvaluatedConfig_Statics::NewProp_BranchConfigMapping,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieGraphEvaluatedConfig_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieGraphEvaluatedConfig>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieGraphEvaluatedConfig_Statics::ClassParams = {
		&UMovieGraphEvaluatedConfig::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMovieGraphEvaluatedConfig_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMovieGraphEvaluatedConfig_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieGraphEvaluatedConfig_Statics::Class_MetaDataParams), Z_Construct_UClass_UMovieGraphEvaluatedConfig_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieGraphEvaluatedConfig_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UMovieGraphEvaluatedConfig()
	{
		if (!Z_Registration_Info_UClass_UMovieGraphEvaluatedConfig.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieGraphEvaluatedConfig.OuterSingleton, Z_Construct_UClass_UMovieGraphEvaluatedConfig_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMovieGraphEvaluatedConfig.OuterSingleton;
	}
	template<> MOVIERENDERPIPELINECORE_API UClass* StaticClass<UMovieGraphEvaluatedConfig>()
	{
		return UMovieGraphEvaluatedConfig::StaticClass();
	}
	UMovieGraphEvaluatedConfig::UMovieGraphEvaluatedConfig(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieGraphEvaluatedConfig);
	UMovieGraphEvaluatedConfig::~UMovieGraphEvaluatedConfig() {}
	DEFINE_FUNCTION(UMovieGraphConfig::execCreateFlattenedGraph)
	{
		P_GET_STRUCT_REF(FMovieGraphTraversalContext,Z_Param_Out_InContext);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UMovieGraphEvaluatedConfig**)Z_Param__Result=P_THIS->CreateFlattenedGraph(Z_Param_Out_InContext);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieGraphConfig::execGetVariables)
	{
		P_GET_UBOOL(Z_Param_bIncludeGlobal);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UMovieGraphVariable*>*)Z_Param__Result=P_THIS->GetVariables(Z_Param_bIncludeGlobal);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieGraphConfig::execAddVariable)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_InCustomBaseName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UMovieGraphVariable**)Z_Param__Result=P_THIS->AddVariable(Z_Param_InCustomBaseName);
		P_NATIVE_END;
	}
	void UMovieGraphConfig::StaticRegisterNativesUMovieGraphConfig()
	{
		UClass* Class = UMovieGraphConfig::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddVariable", &UMovieGraphConfig::execAddVariable },
			{ "CreateFlattenedGraph", &UMovieGraphConfig::execCreateFlattenedGraph },
			{ "GetVariables", &UMovieGraphConfig::execGetVariables },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMovieGraphConfig_AddVariable_Statics
	{
		struct MovieGraphConfig_eventAddVariable_Parms
		{
			FName InCustomBaseName;
			UMovieGraphVariable* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InCustomBaseName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_InCustomBaseName;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieGraphConfig_AddVariable_Statics::NewProp_InCustomBaseName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMovieGraphConfig_AddVariable_Statics::NewProp_InCustomBaseName = { "InCustomBaseName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieGraphConfig_eventAddVariable_Parms, InCustomBaseName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieGraphConfig_AddVariable_Statics::NewProp_InCustomBaseName_MetaData), Z_Construct_UFunction_UMovieGraphConfig_AddVariable_Statics::NewProp_InCustomBaseName_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieGraphConfig_AddVariable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieGraphConfig_eventAddVariable_Parms, ReturnValue), Z_Construct_UClass_UMovieGraphVariable_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieGraphConfig_AddVariable_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieGraphConfig_AddVariable_Statics::NewProp_InCustomBaseName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieGraphConfig_AddVariable_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieGraphConfig_AddVariable_Statics::Function_MetaDataParams[] = {
		{ "Category", "Experimental" },
		{ "Comment", "/**\n\x09 * Adds a new variable member with default values to the graph. The new variable will have a base name of\n\x09 * \"Variable\" unless specified in InCustomBaseName. Returns the new variable on success, else nullptr.\n\x09 */" },
		{ "CPP_Default_InCustomBaseName", "None" },
		{ "ModuleRelativePath", "Public/Graph/MovieGraphConfig.h" },
		{ "ToolTip", "Adds a new variable member with default values to the graph. The new variable will have a base name of\n\"Variable\" unless specified in InCustomBaseName. Returns the new variable on success, else nullptr." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieGraphConfig_AddVariable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieGraphConfig, nullptr, "AddVariable", nullptr, nullptr, Z_Construct_UFunction_UMovieGraphConfig_AddVariable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieGraphConfig_AddVariable_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieGraphConfig_AddVariable_Statics::MovieGraphConfig_eventAddVariable_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieGraphConfig_AddVariable_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieGraphConfig_AddVariable_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieGraphConfig_AddVariable_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMovieGraphConfig_AddVariable_Statics::MovieGraphConfig_eventAddVariable_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMovieGraphConfig_AddVariable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieGraphConfig_AddVariable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieGraphConfig_CreateFlattenedGraph_Statics
	{
		struct MovieGraphConfig_eventCreateFlattenedGraph_Parms
		{
			FMovieGraphTraversalContext InContext;
			UMovieGraphEvaluatedConfig* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InContext_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InContext;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieGraphConfig_CreateFlattenedGraph_Statics::NewProp_InContext_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovieGraphConfig_CreateFlattenedGraph_Statics::NewProp_InContext = { "InContext", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieGraphConfig_eventCreateFlattenedGraph_Parms, InContext), Z_Construct_UScriptStruct_FMovieGraphTraversalContext, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieGraphConfig_CreateFlattenedGraph_Statics::NewProp_InContext_MetaData), Z_Construct_UFunction_UMovieGraphConfig_CreateFlattenedGraph_Statics::NewProp_InContext_MetaData) }; // 3782139928
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieGraphConfig_CreateFlattenedGraph_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieGraphConfig_eventCreateFlattenedGraph_Parms, ReturnValue), Z_Construct_UClass_UMovieGraphEvaluatedConfig_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieGraphConfig_CreateFlattenedGraph_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieGraphConfig_CreateFlattenedGraph_Statics::NewProp_InContext,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieGraphConfig_CreateFlattenedGraph_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieGraphConfig_CreateFlattenedGraph_Statics::Function_MetaDataParams[] = {
		{ "Category", "Experimental" },
		{ "Comment", "/** Given a user-defined evaluation context, evaluate the graph and build a \"flattened\" list of settings for each branch discovered. */" },
		{ "ModuleRelativePath", "Public/Graph/MovieGraphConfig.h" },
		{ "ToolTip", "Given a user-defined evaluation context, evaluate the graph and build a \"flattened\" list of settings for each branch discovered." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieGraphConfig_CreateFlattenedGraph_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieGraphConfig, nullptr, "CreateFlattenedGraph", nullptr, nullptr, Z_Construct_UFunction_UMovieGraphConfig_CreateFlattenedGraph_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieGraphConfig_CreateFlattenedGraph_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieGraphConfig_CreateFlattenedGraph_Statics::MovieGraphConfig_eventCreateFlattenedGraph_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieGraphConfig_CreateFlattenedGraph_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieGraphConfig_CreateFlattenedGraph_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieGraphConfig_CreateFlattenedGraph_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMovieGraphConfig_CreateFlattenedGraph_Statics::MovieGraphConfig_eventCreateFlattenedGraph_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMovieGraphConfig_CreateFlattenedGraph()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieGraphConfig_CreateFlattenedGraph_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieGraphConfig_GetVariables_Statics
	{
		struct MovieGraphConfig_eventGetVariables_Parms
		{
			bool bIncludeGlobal;
			TArray<UMovieGraphVariable*> ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIncludeGlobal_MetaData[];
#endif
		static void NewProp_bIncludeGlobal_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIncludeGlobal;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieGraphConfig_GetVariables_Statics::NewProp_bIncludeGlobal_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UMovieGraphConfig_GetVariables_Statics::NewProp_bIncludeGlobal_SetBit(void* Obj)
	{
		((MovieGraphConfig_eventGetVariables_Parms*)Obj)->bIncludeGlobal = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMovieGraphConfig_GetVariables_Statics::NewProp_bIncludeGlobal = { "bIncludeGlobal", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MovieGraphConfig_eventGetVariables_Parms), &Z_Construct_UFunction_UMovieGraphConfig_GetVariables_Statics::NewProp_bIncludeGlobal_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieGraphConfig_GetVariables_Statics::NewProp_bIncludeGlobal_MetaData), Z_Construct_UFunction_UMovieGraphConfig_GetVariables_Statics::NewProp_bIncludeGlobal_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieGraphConfig_GetVariables_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UMovieGraphVariable_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMovieGraphConfig_GetVariables_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieGraphConfig_eventGetVariables_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieGraphConfig_GetVariables_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieGraphConfig_GetVariables_Statics::NewProp_bIncludeGlobal,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieGraphConfig_GetVariables_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieGraphConfig_GetVariables_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieGraphConfig_GetVariables_Statics::Function_MetaDataParams[] = {
		{ "Category", "Experimental" },
		{ "Comment", "/**\n\x09 * Gets all variables that are available to be used in the graph. Global variables can optionally be included if\n\x09 * bIncludeGlobal is set to true.\n\x09 */" },
		{ "CPP_Default_bIncludeGlobal", "false" },
		{ "ModuleRelativePath", "Public/Graph/MovieGraphConfig.h" },
		{ "ToolTip", "Gets all variables that are available to be used in the graph. Global variables can optionally be included if\nbIncludeGlobal is set to true." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieGraphConfig_GetVariables_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieGraphConfig, nullptr, "GetVariables", nullptr, nullptr, Z_Construct_UFunction_UMovieGraphConfig_GetVariables_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieGraphConfig_GetVariables_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieGraphConfig_GetVariables_Statics::MovieGraphConfig_eventGetVariables_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieGraphConfig_GetVariables_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieGraphConfig_GetVariables_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieGraphConfig_GetVariables_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMovieGraphConfig_GetVariables_Statics::MovieGraphConfig_eventGetVariables_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMovieGraphConfig_GetVariables()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieGraphConfig_GetVariables_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieGraphConfig);
	UClass* Z_Construct_UClass_UMovieGraphConfig_NoRegister()
	{
		return UMovieGraphConfig::StaticClass();
	}
	struct Z_Construct_UClass_UMovieGraphConfig_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AllNodes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AllNodes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AllNodes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputNode_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_InputNode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OutputNode_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_OutputNode;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PipelineEdGraph_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PipelineEdGraph;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Variables_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Variables_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Variables;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Inputs_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Inputs_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Inputs;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Outputs_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Outputs_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Outputs;
#if WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_EditorOnlyNodes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EditorOnlyNodes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_EditorOnlyNodes;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieGraphConfig_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieRenderPipelineCore,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieGraphConfig_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UMovieGraphConfig_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMovieGraphConfig_AddVariable, "AddVariable" }, // 4133861707
		{ &Z_Construct_UFunction_UMovieGraphConfig_CreateFlattenedGraph, "CreateFlattenedGraph" }, // 833072768
		{ &Z_Construct_UFunction_UMovieGraphConfig_GetVariables, "GetVariables" }, // 3171433120
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieGraphConfig_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieGraphConfig_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n* This is the runtime representation of the UMoviePipelineEdGraph which contains the actual strongly\n* typed graph network that is read by the MoviePipeline. There is an editor-only representation of\n* this graph (UMoviePipelineEdGraph).\n*/" },
		{ "IncludePath", "Graph/MovieGraphConfig.h" },
		{ "ModuleRelativePath", "Public/Graph/MovieGraphConfig.h" },
		{ "ToolTip", "This is the runtime representation of the UMoviePipelineEdGraph which contains the actual strongly\ntyped graph network that is read by the MoviePipeline. There is an editor-only representation of\nthis graph (UMoviePipelineEdGraph)." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMovieGraphConfig_Statics::NewProp_AllNodes_Inner = { "AllNodes", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UMovieGraphNode_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieGraphConfig_Statics::NewProp_AllNodes_MetaData[] = {
		{ "ModuleRelativePath", "Public/Graph/MovieGraphConfig.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMovieGraphConfig_Statics::NewProp_AllNodes = { "AllNodes", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieGraphConfig, AllNodes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieGraphConfig_Statics::NewProp_AllNodes_MetaData), Z_Construct_UClass_UMovieGraphConfig_Statics::NewProp_AllNodes_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieGraphConfig_Statics::NewProp_InputNode_MetaData[] = {
		{ "ModuleRelativePath", "Public/Graph/MovieGraphConfig.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMovieGraphConfig_Statics::NewProp_InputNode = { "InputNode", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieGraphConfig, InputNode), Z_Construct_UClass_UMovieGraphNode_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieGraphConfig_Statics::NewProp_InputNode_MetaData), Z_Construct_UClass_UMovieGraphConfig_Statics::NewProp_InputNode_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieGraphConfig_Statics::NewProp_OutputNode_MetaData[] = {
		{ "ModuleRelativePath", "Public/Graph/MovieGraphConfig.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMovieGraphConfig_Statics::NewProp_OutputNode = { "OutputNode", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieGraphConfig, OutputNode), Z_Construct_UClass_UMovieGraphNode_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieGraphConfig_Statics::NewProp_OutputNode_MetaData), Z_Construct_UClass_UMovieGraphConfig_Statics::NewProp_OutputNode_MetaData) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieGraphConfig_Statics::NewProp_PipelineEdGraph_MetaData[] = {
		{ "Comment", "// Not strongly typed to avoid a circular dependency between the editor only module\n// and the runtime module, but it should be a UMoviePipelineEdGraph.\n" },
		{ "ModuleRelativePath", "Public/Graph/MovieGraphConfig.h" },
		{ "ToolTip", "Not strongly typed to avoid a circular dependency between the editor only module\nand the runtime module, but it should be a UMoviePipelineEdGraph." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMovieGraphConfig_Statics::NewProp_PipelineEdGraph = { "PipelineEdGraph", nullptr, (EPropertyFlags)0x0014000800002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieGraphConfig, PipelineEdGraph), Z_Construct_UClass_UEdGraph_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieGraphConfig_Statics::NewProp_PipelineEdGraph_MetaData), Z_Construct_UClass_UMovieGraphConfig_Statics::NewProp_PipelineEdGraph_MetaData) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMovieGraphConfig_Statics::NewProp_Variables_Inner = { "Variables", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UMovieGraphVariable_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieGraphConfig_Statics::NewProp_Variables_MetaData[] = {
		{ "Comment", "/** All variables (user and global) which are available for use in the graph. */" },
		{ "ModuleRelativePath", "Public/Graph/MovieGraphConfig.h" },
		{ "ToolTip", "All variables (user and global) which are available for use in the graph." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMovieGraphConfig_Statics::NewProp_Variables = { "Variables", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieGraphConfig, Variables), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieGraphConfig_Statics::NewProp_Variables_MetaData), Z_Construct_UClass_UMovieGraphConfig_Statics::NewProp_Variables_MetaData) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMovieGraphConfig_Statics::NewProp_Inputs_Inner = { "Inputs", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UMovieGraphInput_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieGraphConfig_Statics::NewProp_Inputs_MetaData[] = {
		{ "Comment", "/** All inputs which have been defined on the graph. */" },
		{ "ModuleRelativePath", "Public/Graph/MovieGraphConfig.h" },
		{ "ToolTip", "All inputs which have been defined on the graph." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMovieGraphConfig_Statics::NewProp_Inputs = { "Inputs", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieGraphConfig, Inputs), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieGraphConfig_Statics::NewProp_Inputs_MetaData), Z_Construct_UClass_UMovieGraphConfig_Statics::NewProp_Inputs_MetaData) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMovieGraphConfig_Statics::NewProp_Outputs_Inner = { "Outputs", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UMovieGraphOutput_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieGraphConfig_Statics::NewProp_Outputs_MetaData[] = {
		{ "Comment", "/** All outputs which have been defined on the graph. */" },
		{ "ModuleRelativePath", "Public/Graph/MovieGraphConfig.h" },
		{ "ToolTip", "All outputs which have been defined on the graph." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMovieGraphConfig_Statics::NewProp_Outputs = { "Outputs", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieGraphConfig, Outputs), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieGraphConfig_Statics::NewProp_Outputs_MetaData), Z_Construct_UClass_UMovieGraphConfig_Statics::NewProp_Outputs_MetaData) };
#if WITH_EDITORONLY_DATA
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMovieGraphConfig_Statics::NewProp_EditorOnlyNodes_Inner = { "EditorOnlyNodes", nullptr, (EPropertyFlags)0x0004000800000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieGraphConfig_Statics::NewProp_EditorOnlyNodes_MetaData[] = {
		{ "Comment", "/** Nodes which are only useful in the editor (like comments) and have no runtime equivalent */" },
		{ "ModuleRelativePath", "Public/Graph/MovieGraphConfig.h" },
		{ "ToolTip", "Nodes which are only useful in the editor (like comments) and have no runtime equivalent" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMovieGraphConfig_Statics::NewProp_EditorOnlyNodes = { "EditorOnlyNodes", nullptr, (EPropertyFlags)0x0044000800000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieGraphConfig, EditorOnlyNodes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieGraphConfig_Statics::NewProp_EditorOnlyNodes_MetaData), Z_Construct_UClass_UMovieGraphConfig_Statics::NewProp_EditorOnlyNodes_MetaData) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieGraphConfig_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieGraphConfig_Statics::NewProp_AllNodes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieGraphConfig_Statics::NewProp_AllNodes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieGraphConfig_Statics::NewProp_InputNode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieGraphConfig_Statics::NewProp_OutputNode,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieGraphConfig_Statics::NewProp_PipelineEdGraph,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieGraphConfig_Statics::NewProp_Variables_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieGraphConfig_Statics::NewProp_Variables,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieGraphConfig_Statics::NewProp_Inputs_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieGraphConfig_Statics::NewProp_Inputs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieGraphConfig_Statics::NewProp_Outputs_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieGraphConfig_Statics::NewProp_Outputs,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieGraphConfig_Statics::NewProp_EditorOnlyNodes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieGraphConfig_Statics::NewProp_EditorOnlyNodes,
#endif // WITH_EDITORONLY_DATA
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieGraphConfig_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieGraphConfig>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieGraphConfig_Statics::ClassParams = {
		&UMovieGraphConfig::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UMovieGraphConfig_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UMovieGraphConfig_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieGraphConfig_Statics::Class_MetaDataParams), Z_Construct_UClass_UMovieGraphConfig_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieGraphConfig_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UMovieGraphConfig()
	{
		if (!Z_Registration_Info_UClass_UMovieGraphConfig.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieGraphConfig.OuterSingleton, Z_Construct_UClass_UMovieGraphConfig_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMovieGraphConfig.OuterSingleton;
	}
	template<> MOVIERENDERPIPELINECORE_API UClass* StaticClass<UMovieGraphConfig>()
	{
		return UMovieGraphConfig::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieGraphConfig);
	UMovieGraphConfig::~UMovieGraphConfig() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphConfig_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphConfig_h_Statics::ScriptStructInfo[] = {
		{ FMovieGraphEvaluatedSettingsStack::StaticStruct, Z_Construct_UScriptStruct_FMovieGraphEvaluatedSettingsStack_Statics::NewStructOps, TEXT("MovieGraphEvaluatedSettingsStack"), &Z_Registration_Info_UScriptStruct_MovieGraphEvaluatedSettingsStack, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieGraphEvaluatedSettingsStack), 2089676963U) },
		{ FMovieGraphEvaluatedBranchConfig::StaticStruct, Z_Construct_UScriptStruct_FMovieGraphEvaluatedBranchConfig_Statics::NewStructOps, TEXT("MovieGraphEvaluatedBranchConfig"), &Z_Registration_Info_UScriptStruct_MovieGraphEvaluatedBranchConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieGraphEvaluatedBranchConfig), 2167897963U) },
		{ FMovieGraphEvaluationContext::StaticStruct, Z_Construct_UScriptStruct_FMovieGraphEvaluationContext_Statics::NewStructOps, TEXT("MovieGraphEvaluationContext"), &Z_Registration_Info_UScriptStruct_MovieGraphEvaluationContext, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieGraphEvaluationContext), 2693401103U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphConfig_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMovieGraphMember, UMovieGraphMember::StaticClass, TEXT("UMovieGraphMember"), &Z_Registration_Info_UClass_UMovieGraphMember, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieGraphMember), 1412231346U) },
		{ Z_Construct_UClass_UMovieGraphVariable, UMovieGraphVariable::StaticClass, TEXT("UMovieGraphVariable"), &Z_Registration_Info_UClass_UMovieGraphVariable, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieGraphVariable), 2682250247U) },
		{ Z_Construct_UClass_UMovieGraphInterfaceBase, UMovieGraphInterfaceBase::StaticClass, TEXT("UMovieGraphInterfaceBase"), &Z_Registration_Info_UClass_UMovieGraphInterfaceBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieGraphInterfaceBase), 1323759751U) },
		{ Z_Construct_UClass_UMovieGraphInput, UMovieGraphInput::StaticClass, TEXT("UMovieGraphInput"), &Z_Registration_Info_UClass_UMovieGraphInput, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieGraphInput), 366959059U) },
		{ Z_Construct_UClass_UMovieGraphOutput, UMovieGraphOutput::StaticClass, TEXT("UMovieGraphOutput"), &Z_Registration_Info_UClass_UMovieGraphOutput, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieGraphOutput), 2790960073U) },
		{ Z_Construct_UClass_UMovieGraphEvaluatedConfig, UMovieGraphEvaluatedConfig::StaticClass, TEXT("UMovieGraphEvaluatedConfig"), &Z_Registration_Info_UClass_UMovieGraphEvaluatedConfig, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieGraphEvaluatedConfig), 3180818697U) },
		{ Z_Construct_UClass_UMovieGraphConfig, UMovieGraphConfig::StaticClass, TEXT("UMovieGraphConfig"), &Z_Registration_Info_UClass_UMovieGraphConfig, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieGraphConfig), 4240458026U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphConfig_h_2078391745(TEXT("/Script/MovieRenderPipelineCore"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphConfig_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphConfig_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphConfig_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphConfig_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
