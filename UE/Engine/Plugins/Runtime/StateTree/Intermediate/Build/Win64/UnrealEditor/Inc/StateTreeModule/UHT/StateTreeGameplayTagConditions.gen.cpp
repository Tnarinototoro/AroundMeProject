// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Conditions/StateTreeGameplayTagConditions.h"
#include "GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStateTreeGameplayTagConditions() {}
// Cross Module References
	GAMEPLAYTAGS_API UEnum* Z_Construct_UEnum_GameplayTags_EGameplayContainerMatchType();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagQuery();
	STATETREEMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainerMatchCondition();
	STATETREEMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainerMatchConditionInstanceData();
	STATETREEMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagMatchCondition();
	STATETREEMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagMatchConditionInstanceData();
	STATETREEMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagQueryCondition();
	STATETREEMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagQueryConditionInstanceData();
	STATETREEMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FStateTreeConditionCommonBase();
	UPackage* Z_Construct_UPackage__Script_StateTreeModule();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GameplayTagMatchConditionInstanceData;
class UScriptStruct* FGameplayTagMatchConditionInstanceData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GameplayTagMatchConditionInstanceData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GameplayTagMatchConditionInstanceData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameplayTagMatchConditionInstanceData, (UObject*)Z_Construct_UPackage__Script_StateTreeModule(), TEXT("GameplayTagMatchConditionInstanceData"));
	}
	return Z_Registration_Info_UScriptStruct_GameplayTagMatchConditionInstanceData.OuterSingleton;
}
template<> STATETREEMODULE_API UScriptStruct* StaticStruct<FGameplayTagMatchConditionInstanceData>()
{
	return FGameplayTagMatchConditionInstanceData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGameplayTagMatchConditionInstanceData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TagContainer_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TagContainer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Tag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Tag;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayTagMatchConditionInstanceData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Conditions/StateTreeGameplayTagConditions.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGameplayTagMatchConditionInstanceData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameplayTagMatchConditionInstanceData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayTagMatchConditionInstanceData_Statics::NewProp_TagContainer_MetaData[] = {
		{ "Category", "Parameter" },
		{ "Comment", "/** Container to check for the tag. */" },
		{ "ModuleRelativePath", "Public/Conditions/StateTreeGameplayTagConditions.h" },
		{ "ToolTip", "Container to check for the tag." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameplayTagMatchConditionInstanceData_Statics::NewProp_TagContainer = { "TagContainer", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameplayTagMatchConditionInstanceData, TagContainer), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayTagMatchConditionInstanceData_Statics::NewProp_TagContainer_MetaData), Z_Construct_UScriptStruct_FGameplayTagMatchConditionInstanceData_Statics::NewProp_TagContainer_MetaData) }; // 405371792
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayTagMatchConditionInstanceData_Statics::NewProp_Tag_MetaData[] = {
		{ "Category", "Parameter" },
		{ "Comment", "/** Tag to check for in the container. */" },
		{ "ModuleRelativePath", "Public/Conditions/StateTreeGameplayTagConditions.h" },
		{ "ToolTip", "Tag to check for in the container." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameplayTagMatchConditionInstanceData_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameplayTagMatchConditionInstanceData, Tag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayTagMatchConditionInstanceData_Statics::NewProp_Tag_MetaData), Z_Construct_UScriptStruct_FGameplayTagMatchConditionInstanceData_Statics::NewProp_Tag_MetaData) }; // 2083603574
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGameplayTagMatchConditionInstanceData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayTagMatchConditionInstanceData_Statics::NewProp_TagContainer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayTagMatchConditionInstanceData_Statics::NewProp_Tag,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameplayTagMatchConditionInstanceData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_StateTreeModule,
		nullptr,
		&NewStructOps,
		"GameplayTagMatchConditionInstanceData",
		Z_Construct_UScriptStruct_FGameplayTagMatchConditionInstanceData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayTagMatchConditionInstanceData_Statics::PropPointers),
		sizeof(FGameplayTagMatchConditionInstanceData),
		alignof(FGameplayTagMatchConditionInstanceData),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayTagMatchConditionInstanceData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGameplayTagMatchConditionInstanceData_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayTagMatchConditionInstanceData_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagMatchConditionInstanceData()
	{
		if (!Z_Registration_Info_UScriptStruct_GameplayTagMatchConditionInstanceData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GameplayTagMatchConditionInstanceData.InnerSingleton, Z_Construct_UScriptStruct_FGameplayTagMatchConditionInstanceData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GameplayTagMatchConditionInstanceData.InnerSingleton;
	}

static_assert(std::is_polymorphic<FGameplayTagMatchCondition>() == std::is_polymorphic<FStateTreeConditionCommonBase>(), "USTRUCT FGameplayTagMatchCondition cannot be polymorphic unless super FStateTreeConditionCommonBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GameplayTagMatchCondition;
class UScriptStruct* FGameplayTagMatchCondition::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GameplayTagMatchCondition.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GameplayTagMatchCondition.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameplayTagMatchCondition, (UObject*)Z_Construct_UPackage__Script_StateTreeModule(), TEXT("GameplayTagMatchCondition"));
	}
	return Z_Registration_Info_UScriptStruct_GameplayTagMatchCondition.OuterSingleton;
}
template<> STATETREEMODULE_API UScriptStruct* StaticStruct<FGameplayTagMatchCondition>()
{
	return FGameplayTagMatchCondition::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGameplayTagMatchCondition_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bExactMatch_MetaData[];
#endif
		static void NewProp_bExactMatch_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bExactMatch;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bInvert_MetaData[];
#endif
		static void NewProp_bInvert_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInvert;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayTagMatchCondition_Statics::Struct_MetaDataParams[] = {
		{ "Category", "Gameplay Tags" },
		{ "Comment", "/**\n * HasTag condition\n * Succeeds if the tag container has the specified tag.\n * \n * Condition can be used with multiple configurations:\n *\x09""Does TagContainer {\"A.1\"} has Tag \"A\" ?\n *\x09\x09""exact match 'false' will SUCCEED\n *\x09\x09""exact match 'true' will FAIL\n */" },
		{ "DisplayName", "Has Tag" },
		{ "ModuleRelativePath", "Public/Conditions/StateTreeGameplayTagConditions.h" },
		{ "ToolTip", "HasTag condition\nSucceeds if the tag container has the specified tag.\n\nCondition can be used with multiple configurations:\n    Does TagContainer {\"A.1\"} has Tag \"A\" ?\n            exact match 'false' will SUCCEED\n            exact match 'true' will FAIL" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGameplayTagMatchCondition_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameplayTagMatchCondition>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayTagMatchCondition_Statics::NewProp_bExactMatch_MetaData[] = {
		{ "Category", "Condition" },
		{ "Comment", "/** If true, the tag has to be exactly present, if false then TagContainer will include it's parent tags while matching */" },
		{ "ModuleRelativePath", "Public/Conditions/StateTreeGameplayTagConditions.h" },
		{ "ToolTip", "If true, the tag has to be exactly present, if false then TagContainer will include it's parent tags while matching" },
	};
#endif
	void Z_Construct_UScriptStruct_FGameplayTagMatchCondition_Statics::NewProp_bExactMatch_SetBit(void* Obj)
	{
		((FGameplayTagMatchCondition*)Obj)->bExactMatch = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGameplayTagMatchCondition_Statics::NewProp_bExactMatch = { "bExactMatch", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FGameplayTagMatchCondition), &Z_Construct_UScriptStruct_FGameplayTagMatchCondition_Statics::NewProp_bExactMatch_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayTagMatchCondition_Statics::NewProp_bExactMatch_MetaData), Z_Construct_UScriptStruct_FGameplayTagMatchCondition_Statics::NewProp_bExactMatch_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayTagMatchCondition_Statics::NewProp_bInvert_MetaData[] = {
		{ "Category", "Condition" },
		{ "ModuleRelativePath", "Public/Conditions/StateTreeGameplayTagConditions.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FGameplayTagMatchCondition_Statics::NewProp_bInvert_SetBit(void* Obj)
	{
		((FGameplayTagMatchCondition*)Obj)->bInvert = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGameplayTagMatchCondition_Statics::NewProp_bInvert = { "bInvert", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FGameplayTagMatchCondition), &Z_Construct_UScriptStruct_FGameplayTagMatchCondition_Statics::NewProp_bInvert_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayTagMatchCondition_Statics::NewProp_bInvert_MetaData), Z_Construct_UScriptStruct_FGameplayTagMatchCondition_Statics::NewProp_bInvert_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGameplayTagMatchCondition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayTagMatchCondition_Statics::NewProp_bExactMatch,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayTagMatchCondition_Statics::NewProp_bInvert,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameplayTagMatchCondition_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_StateTreeModule,
		Z_Construct_UScriptStruct_FStateTreeConditionCommonBase,
		&NewStructOps,
		"GameplayTagMatchCondition",
		Z_Construct_UScriptStruct_FGameplayTagMatchCondition_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayTagMatchCondition_Statics::PropPointers),
		sizeof(FGameplayTagMatchCondition),
		alignof(FGameplayTagMatchCondition),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayTagMatchCondition_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGameplayTagMatchCondition_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayTagMatchCondition_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagMatchCondition()
	{
		if (!Z_Registration_Info_UScriptStruct_GameplayTagMatchCondition.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GameplayTagMatchCondition.InnerSingleton, Z_Construct_UScriptStruct_FGameplayTagMatchCondition_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GameplayTagMatchCondition.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GameplayTagContainerMatchConditionInstanceData;
class UScriptStruct* FGameplayTagContainerMatchConditionInstanceData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GameplayTagContainerMatchConditionInstanceData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GameplayTagContainerMatchConditionInstanceData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameplayTagContainerMatchConditionInstanceData, (UObject*)Z_Construct_UPackage__Script_StateTreeModule(), TEXT("GameplayTagContainerMatchConditionInstanceData"));
	}
	return Z_Registration_Info_UScriptStruct_GameplayTagContainerMatchConditionInstanceData.OuterSingleton;
}
template<> STATETREEMODULE_API UScriptStruct* StaticStruct<FGameplayTagContainerMatchConditionInstanceData>()
{
	return FGameplayTagContainerMatchConditionInstanceData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGameplayTagContainerMatchConditionInstanceData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TagContainer_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TagContainer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OtherContainer_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OtherContainer;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayTagContainerMatchConditionInstanceData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Conditions/StateTreeGameplayTagConditions.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGameplayTagContainerMatchConditionInstanceData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameplayTagContainerMatchConditionInstanceData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayTagContainerMatchConditionInstanceData_Statics::NewProp_TagContainer_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "/** Container to check if it matches any of the tags in the other container. */" },
		{ "ModuleRelativePath", "Public/Conditions/StateTreeGameplayTagConditions.h" },
		{ "ToolTip", "Container to check if it matches any of the tags in the other container." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameplayTagContainerMatchConditionInstanceData_Statics::NewProp_TagContainer = { "TagContainer", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameplayTagContainerMatchConditionInstanceData, TagContainer), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayTagContainerMatchConditionInstanceData_Statics::NewProp_TagContainer_MetaData), Z_Construct_UScriptStruct_FGameplayTagContainerMatchConditionInstanceData_Statics::NewProp_TagContainer_MetaData) }; // 405371792
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayTagContainerMatchConditionInstanceData_Statics::NewProp_OtherContainer_MetaData[] = {
		{ "Category", "Parameter" },
		{ "Comment", "/** Container to check against. */" },
		{ "ModuleRelativePath", "Public/Conditions/StateTreeGameplayTagConditions.h" },
		{ "ToolTip", "Container to check against." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameplayTagContainerMatchConditionInstanceData_Statics::NewProp_OtherContainer = { "OtherContainer", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameplayTagContainerMatchConditionInstanceData, OtherContainer), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayTagContainerMatchConditionInstanceData_Statics::NewProp_OtherContainer_MetaData), Z_Construct_UScriptStruct_FGameplayTagContainerMatchConditionInstanceData_Statics::NewProp_OtherContainer_MetaData) }; // 405371792
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGameplayTagContainerMatchConditionInstanceData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayTagContainerMatchConditionInstanceData_Statics::NewProp_TagContainer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayTagContainerMatchConditionInstanceData_Statics::NewProp_OtherContainer,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameplayTagContainerMatchConditionInstanceData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_StateTreeModule,
		nullptr,
		&NewStructOps,
		"GameplayTagContainerMatchConditionInstanceData",
		Z_Construct_UScriptStruct_FGameplayTagContainerMatchConditionInstanceData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayTagContainerMatchConditionInstanceData_Statics::PropPointers),
		sizeof(FGameplayTagContainerMatchConditionInstanceData),
		alignof(FGameplayTagContainerMatchConditionInstanceData),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayTagContainerMatchConditionInstanceData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGameplayTagContainerMatchConditionInstanceData_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayTagContainerMatchConditionInstanceData_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainerMatchConditionInstanceData()
	{
		if (!Z_Registration_Info_UScriptStruct_GameplayTagContainerMatchConditionInstanceData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GameplayTagContainerMatchConditionInstanceData.InnerSingleton, Z_Construct_UScriptStruct_FGameplayTagContainerMatchConditionInstanceData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GameplayTagContainerMatchConditionInstanceData.InnerSingleton;
	}

static_assert(std::is_polymorphic<FGameplayTagContainerMatchCondition>() == std::is_polymorphic<FStateTreeConditionCommonBase>(), "USTRUCT FGameplayTagContainerMatchCondition cannot be polymorphic unless super FStateTreeConditionCommonBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GameplayTagContainerMatchCondition;
class UScriptStruct* FGameplayTagContainerMatchCondition::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GameplayTagContainerMatchCondition.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GameplayTagContainerMatchCondition.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameplayTagContainerMatchCondition, (UObject*)Z_Construct_UPackage__Script_StateTreeModule(), TEXT("GameplayTagContainerMatchCondition"));
	}
	return Z_Registration_Info_UScriptStruct_GameplayTagContainerMatchCondition.OuterSingleton;
}
template<> STATETREEMODULE_API UScriptStruct* StaticStruct<FGameplayTagContainerMatchCondition>()
{
	return FGameplayTagContainerMatchCondition::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGameplayTagContainerMatchCondition_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_MatchType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MatchType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_MatchType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bExactMatch_MetaData[];
#endif
		static void NewProp_bExactMatch_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bExactMatch;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bInvert_MetaData[];
#endif
		static void NewProp_bInvert_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInvert;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayTagContainerMatchCondition_Statics::Struct_MetaDataParams[] = {
		{ "Category", "Gameplay Tags" },
		{ "Comment", "/**\n * HasAnyTags / HasAllTags condition\n * Succeeds  if the specified tag container has ANY or ALL of the tags in the other container.\n *\n * Condition can be used with multiple configurations:\n * \n *\x09Has ANY Tags:\n *\x09\x09""exact match 'false':\n *\x09\x09\x09TagContainer {\"A.1\"} has any of OtherContainer {\"A\",\"B\"} will SUCCEED\n * \x09\x09\x09TagContainer {\"A\"} has any of OtherContainer {\"A.1\",\"B\"} will FAIL\n *\x09\x09\n *\x09\x09""exact match 'true':\n* \x09\x09\x09TagContainer {\"A\",\"B\"} has any of OtherContainer {\"A.1\"} will FAIL\n *\n *\x09\x09If TagContainer is empty/invalid it will always fail.\n *\n *\x09Has ALL Tags:\n *\x09\x09""exact match 'false':\n *\x09\x09\x09TagContainer {\"A.1\",\"B.1\"} has all of OtherContainer {\"A\",\"B\"} will SUCCEED\n *\x09\x09\x09TagContainer {\"A\",\"B\"} has all of OtherContainer {\"A.1\",\"B.1\"} will FAIL\n *\n *\x09\x09""exact match 'true':\n *\x09\x09\x09TagContainer {\"A.1\",\"B.1\"} has all of OtherContainer {\"A\",\"B\"} will FAIL\n *\n *\x09\x09If TagContainer is empty/invalid it will always SUCCEED, because there were no failed checks.\n */" },
		{ "DisplayName", "Has Tags" },
		{ "ModuleRelativePath", "Public/Conditions/StateTreeGameplayTagConditions.h" },
		{ "ToolTip", "HasAnyTags / HasAllTags condition\nSucceeds  if the specified tag container has ANY or ALL of the tags in the other container.\n\nCondition can be used with multiple configurations:\n\n    Has ANY Tags:\n            exact match 'false':\n                    TagContainer {\"A.1\"} has any of OtherContainer {\"A\",\"B\"} will SUCCEED\n                    TagContainer {\"A\"} has any of OtherContainer {\"A.1\",\"B\"} will FAIL\n\n            exact match 'true':\n                     TagContainer {\"A\",\"B\"} has any of OtherContainer {\"A.1\"} will FAIL\n\n            If TagContainer is empty/invalid it will always fail.\n\n    Has ALL Tags:\n            exact match 'false':\n                    TagContainer {\"A.1\",\"B.1\"} has all of OtherContainer {\"A\",\"B\"} will SUCCEED\n                    TagContainer {\"A\",\"B\"} has all of OtherContainer {\"A.1\",\"B.1\"} will FAIL\n\n            exact match 'true':\n                    TagContainer {\"A.1\",\"B.1\"} has all of OtherContainer {\"A\",\"B\"} will FAIL\n\n            If TagContainer is empty/invalid it will always SUCCEED, because there were no failed checks." },
	};
#endif
	void* Z_Construct_UScriptStruct_FGameplayTagContainerMatchCondition_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameplayTagContainerMatchCondition>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGameplayTagContainerMatchCondition_Statics::NewProp_MatchType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayTagContainerMatchCondition_Statics::NewProp_MatchType_MetaData[] = {
		{ "Category", "Condition" },
		{ "ModuleRelativePath", "Public/Conditions/StateTreeGameplayTagConditions.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGameplayTagContainerMatchCondition_Statics::NewProp_MatchType = { "MatchType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameplayTagContainerMatchCondition, MatchType), Z_Construct_UEnum_GameplayTags_EGameplayContainerMatchType, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayTagContainerMatchCondition_Statics::NewProp_MatchType_MetaData), Z_Construct_UScriptStruct_FGameplayTagContainerMatchCondition_Statics::NewProp_MatchType_MetaData) }; // 215982815
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayTagContainerMatchCondition_Statics::NewProp_bExactMatch_MetaData[] = {
		{ "Category", "Condition" },
		{ "Comment", "/** If true, the tag has to be exactly present, if false then TagContainer will include it's parent tags while matching */" },
		{ "ModuleRelativePath", "Public/Conditions/StateTreeGameplayTagConditions.h" },
		{ "ToolTip", "If true, the tag has to be exactly present, if false then TagContainer will include it's parent tags while matching" },
	};
#endif
	void Z_Construct_UScriptStruct_FGameplayTagContainerMatchCondition_Statics::NewProp_bExactMatch_SetBit(void* Obj)
	{
		((FGameplayTagContainerMatchCondition*)Obj)->bExactMatch = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGameplayTagContainerMatchCondition_Statics::NewProp_bExactMatch = { "bExactMatch", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FGameplayTagContainerMatchCondition), &Z_Construct_UScriptStruct_FGameplayTagContainerMatchCondition_Statics::NewProp_bExactMatch_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayTagContainerMatchCondition_Statics::NewProp_bExactMatch_MetaData), Z_Construct_UScriptStruct_FGameplayTagContainerMatchCondition_Statics::NewProp_bExactMatch_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayTagContainerMatchCondition_Statics::NewProp_bInvert_MetaData[] = {
		{ "Category", "Condition" },
		{ "ModuleRelativePath", "Public/Conditions/StateTreeGameplayTagConditions.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FGameplayTagContainerMatchCondition_Statics::NewProp_bInvert_SetBit(void* Obj)
	{
		((FGameplayTagContainerMatchCondition*)Obj)->bInvert = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGameplayTagContainerMatchCondition_Statics::NewProp_bInvert = { "bInvert", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FGameplayTagContainerMatchCondition), &Z_Construct_UScriptStruct_FGameplayTagContainerMatchCondition_Statics::NewProp_bInvert_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayTagContainerMatchCondition_Statics::NewProp_bInvert_MetaData), Z_Construct_UScriptStruct_FGameplayTagContainerMatchCondition_Statics::NewProp_bInvert_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGameplayTagContainerMatchCondition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayTagContainerMatchCondition_Statics::NewProp_MatchType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayTagContainerMatchCondition_Statics::NewProp_MatchType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayTagContainerMatchCondition_Statics::NewProp_bExactMatch,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayTagContainerMatchCondition_Statics::NewProp_bInvert,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameplayTagContainerMatchCondition_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_StateTreeModule,
		Z_Construct_UScriptStruct_FStateTreeConditionCommonBase,
		&NewStructOps,
		"GameplayTagContainerMatchCondition",
		Z_Construct_UScriptStruct_FGameplayTagContainerMatchCondition_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayTagContainerMatchCondition_Statics::PropPointers),
		sizeof(FGameplayTagContainerMatchCondition),
		alignof(FGameplayTagContainerMatchCondition),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayTagContainerMatchCondition_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGameplayTagContainerMatchCondition_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayTagContainerMatchCondition_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainerMatchCondition()
	{
		if (!Z_Registration_Info_UScriptStruct_GameplayTagContainerMatchCondition.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GameplayTagContainerMatchCondition.InnerSingleton, Z_Construct_UScriptStruct_FGameplayTagContainerMatchCondition_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GameplayTagContainerMatchCondition.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GameplayTagQueryConditionInstanceData;
class UScriptStruct* FGameplayTagQueryConditionInstanceData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GameplayTagQueryConditionInstanceData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GameplayTagQueryConditionInstanceData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameplayTagQueryConditionInstanceData, (UObject*)Z_Construct_UPackage__Script_StateTreeModule(), TEXT("GameplayTagQueryConditionInstanceData"));
	}
	return Z_Registration_Info_UScriptStruct_GameplayTagQueryConditionInstanceData.OuterSingleton;
}
template<> STATETREEMODULE_API UScriptStruct* StaticStruct<FGameplayTagQueryConditionInstanceData>()
{
	return FGameplayTagQueryConditionInstanceData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGameplayTagQueryConditionInstanceData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TagContainer_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TagContainer;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayTagQueryConditionInstanceData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Conditions/StateTreeGameplayTagConditions.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGameplayTagQueryConditionInstanceData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameplayTagQueryConditionInstanceData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayTagQueryConditionInstanceData_Statics::NewProp_TagContainer_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "/** Container that needs to match the query. */" },
		{ "ModuleRelativePath", "Public/Conditions/StateTreeGameplayTagConditions.h" },
		{ "ToolTip", "Container that needs to match the query." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameplayTagQueryConditionInstanceData_Statics::NewProp_TagContainer = { "TagContainer", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameplayTagQueryConditionInstanceData, TagContainer), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayTagQueryConditionInstanceData_Statics::NewProp_TagContainer_MetaData), Z_Construct_UScriptStruct_FGameplayTagQueryConditionInstanceData_Statics::NewProp_TagContainer_MetaData) }; // 405371792
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGameplayTagQueryConditionInstanceData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayTagQueryConditionInstanceData_Statics::NewProp_TagContainer,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameplayTagQueryConditionInstanceData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_StateTreeModule,
		nullptr,
		&NewStructOps,
		"GameplayTagQueryConditionInstanceData",
		Z_Construct_UScriptStruct_FGameplayTagQueryConditionInstanceData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayTagQueryConditionInstanceData_Statics::PropPointers),
		sizeof(FGameplayTagQueryConditionInstanceData),
		alignof(FGameplayTagQueryConditionInstanceData),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayTagQueryConditionInstanceData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGameplayTagQueryConditionInstanceData_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayTagQueryConditionInstanceData_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagQueryConditionInstanceData()
	{
		if (!Z_Registration_Info_UScriptStruct_GameplayTagQueryConditionInstanceData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GameplayTagQueryConditionInstanceData.InnerSingleton, Z_Construct_UScriptStruct_FGameplayTagQueryConditionInstanceData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GameplayTagQueryConditionInstanceData.InnerSingleton;
	}

static_assert(std::is_polymorphic<FGameplayTagQueryCondition>() == std::is_polymorphic<FStateTreeConditionCommonBase>(), "USTRUCT FGameplayTagQueryCondition cannot be polymorphic unless super FStateTreeConditionCommonBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GameplayTagQueryCondition;
class UScriptStruct* FGameplayTagQueryCondition::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GameplayTagQueryCondition.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GameplayTagQueryCondition.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameplayTagQueryCondition, (UObject*)Z_Construct_UPackage__Script_StateTreeModule(), TEXT("GameplayTagQueryCondition"));
	}
	return Z_Registration_Info_UScriptStruct_GameplayTagQueryCondition.OuterSingleton;
}
template<> STATETREEMODULE_API UScriptStruct* StaticStruct<FGameplayTagQueryCondition>()
{
	return FGameplayTagQueryCondition::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGameplayTagQueryCondition_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TagQuery_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TagQuery;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bInvert_MetaData[];
#endif
		static void NewProp_bInvert_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInvert;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayTagQueryCondition_Statics::Struct_MetaDataParams[] = {
		{ "Category", "Gameplay Tags" },
		{ "Comment", "/**\n * DoesContainerMatchTagQuery condition\n * Succeeds if the specified tag container matches the given Tag Query.\n */" },
		{ "DisplayName", "Does Container Match Tag Query" },
		{ "ModuleRelativePath", "Public/Conditions/StateTreeGameplayTagConditions.h" },
		{ "ToolTip", "DoesContainerMatchTagQuery condition\nSucceeds if the specified tag container matches the given Tag Query." },
	};
#endif
	void* Z_Construct_UScriptStruct_FGameplayTagQueryCondition_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameplayTagQueryCondition>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayTagQueryCondition_Statics::NewProp_TagQuery_MetaData[] = {
		{ "Category", "Condition" },
		{ "Comment", "/** Query to match against */" },
		{ "ModuleRelativePath", "Public/Conditions/StateTreeGameplayTagConditions.h" },
		{ "ToolTip", "Query to match against" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameplayTagQueryCondition_Statics::NewProp_TagQuery = { "TagQuery", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameplayTagQueryCondition, TagQuery), Z_Construct_UScriptStruct_FGameplayTagQuery, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayTagQueryCondition_Statics::NewProp_TagQuery_MetaData), Z_Construct_UScriptStruct_FGameplayTagQueryCondition_Statics::NewProp_TagQuery_MetaData) }; // 1191468383
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayTagQueryCondition_Statics::NewProp_bInvert_MetaData[] = {
		{ "Category", "Condition" },
		{ "ModuleRelativePath", "Public/Conditions/StateTreeGameplayTagConditions.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FGameplayTagQueryCondition_Statics::NewProp_bInvert_SetBit(void* Obj)
	{
		((FGameplayTagQueryCondition*)Obj)->bInvert = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGameplayTagQueryCondition_Statics::NewProp_bInvert = { "bInvert", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FGameplayTagQueryCondition), &Z_Construct_UScriptStruct_FGameplayTagQueryCondition_Statics::NewProp_bInvert_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayTagQueryCondition_Statics::NewProp_bInvert_MetaData), Z_Construct_UScriptStruct_FGameplayTagQueryCondition_Statics::NewProp_bInvert_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGameplayTagQueryCondition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayTagQueryCondition_Statics::NewProp_TagQuery,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayTagQueryCondition_Statics::NewProp_bInvert,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameplayTagQueryCondition_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_StateTreeModule,
		Z_Construct_UScriptStruct_FStateTreeConditionCommonBase,
		&NewStructOps,
		"GameplayTagQueryCondition",
		Z_Construct_UScriptStruct_FGameplayTagQueryCondition_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayTagQueryCondition_Statics::PropPointers),
		sizeof(FGameplayTagQueryCondition),
		alignof(FGameplayTagQueryCondition),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayTagQueryCondition_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGameplayTagQueryCondition_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayTagQueryCondition_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagQueryCondition()
	{
		if (!Z_Registration_Info_UScriptStruct_GameplayTagQueryCondition.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GameplayTagQueryCondition.InnerSingleton, Z_Construct_UScriptStruct_FGameplayTagQueryCondition_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GameplayTagQueryCondition.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_Conditions_StateTreeGameplayTagConditions_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_Conditions_StateTreeGameplayTagConditions_h_Statics::ScriptStructInfo[] = {
		{ FGameplayTagMatchConditionInstanceData::StaticStruct, Z_Construct_UScriptStruct_FGameplayTagMatchConditionInstanceData_Statics::NewStructOps, TEXT("GameplayTagMatchConditionInstanceData"), &Z_Registration_Info_UScriptStruct_GameplayTagMatchConditionInstanceData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGameplayTagMatchConditionInstanceData), 3994654528U) },
		{ FGameplayTagMatchCondition::StaticStruct, Z_Construct_UScriptStruct_FGameplayTagMatchCondition_Statics::NewStructOps, TEXT("GameplayTagMatchCondition"), &Z_Registration_Info_UScriptStruct_GameplayTagMatchCondition, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGameplayTagMatchCondition), 2431944247U) },
		{ FGameplayTagContainerMatchConditionInstanceData::StaticStruct, Z_Construct_UScriptStruct_FGameplayTagContainerMatchConditionInstanceData_Statics::NewStructOps, TEXT("GameplayTagContainerMatchConditionInstanceData"), &Z_Registration_Info_UScriptStruct_GameplayTagContainerMatchConditionInstanceData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGameplayTagContainerMatchConditionInstanceData), 3097481808U) },
		{ FGameplayTagContainerMatchCondition::StaticStruct, Z_Construct_UScriptStruct_FGameplayTagContainerMatchCondition_Statics::NewStructOps, TEXT("GameplayTagContainerMatchCondition"), &Z_Registration_Info_UScriptStruct_GameplayTagContainerMatchCondition, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGameplayTagContainerMatchCondition), 1690145545U) },
		{ FGameplayTagQueryConditionInstanceData::StaticStruct, Z_Construct_UScriptStruct_FGameplayTagQueryConditionInstanceData_Statics::NewStructOps, TEXT("GameplayTagQueryConditionInstanceData"), &Z_Registration_Info_UScriptStruct_GameplayTagQueryConditionInstanceData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGameplayTagQueryConditionInstanceData), 2581022891U) },
		{ FGameplayTagQueryCondition::StaticStruct, Z_Construct_UScriptStruct_FGameplayTagQueryCondition_Statics::NewStructOps, TEXT("GameplayTagQueryCondition"), &Z_Registration_Info_UScriptStruct_GameplayTagQueryCondition, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGameplayTagQueryCondition), 618562946U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_Conditions_StateTreeGameplayTagConditions_h_3726804843(TEXT("/Script/StateTreeModule"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_Conditions_StateTreeGameplayTagConditions_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_Conditions_StateTreeGameplayTagConditions_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
