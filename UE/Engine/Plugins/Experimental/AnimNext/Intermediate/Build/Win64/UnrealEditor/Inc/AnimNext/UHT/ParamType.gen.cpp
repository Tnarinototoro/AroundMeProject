// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Param/ParamType.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParamType() {}
// Cross Module References
	ANIMNEXT_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNextParamType();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	STRUCTUTILS_API UEnum* Z_Construct_UEnum_StructUtils_EPropertyBagContainerType();
	STRUCTUTILS_API UEnum* Z_Construct_UEnum_StructUtils_EPropertyBagPropertyType();
	UPackage* Z_Construct_UPackage__Script_AnimNext();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimNextParamType;
class UScriptStruct* FAnimNextParamType::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNextParamType.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimNextParamType.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNextParamType, (UObject*)Z_Construct_UPackage__Script_AnimNext(), TEXT("AnimNextParamType"));
	}
	return Z_Registration_Info_UScriptStruct_AnimNextParamType.OuterSingleton;
}
template<> ANIMNEXT_API UScriptStruct* StaticStruct<FAnimNextParamType>()
{
	return FAnimNextParamType::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAnimNextParamType_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ValueTypeObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ValueTypeObject;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ValueType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ValueType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ValueType;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ContainerType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ContainerType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ContainerType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNextParamType_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Representation of a parameter's type. Serializable, but fairly heavyweight to pass around and compare.\n * Faster comparisons and other operations can be performed on UE::AnimNext::FTypeHandle, but they cannot be\n * serialized as they are not stable across runs.\n */" },
		{ "ModuleRelativePath", "Public/Param/ParamType.h" },
		{ "ToolTip", "Representation of a parameter's type. Serializable, but fairly heavyweight to pass around and compare.\nFaster comparisons and other operations can be performed on UE::AnimNext::FTypeHandle, but they cannot be\nserialized as they are not stable across runs." },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimNextParamType_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNextParamType>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNextParamType_Statics::NewProp_ValueTypeObject_MetaData[] = {
		{ "Comment", "/** Pointer to object that defines the Enum, Struct, or Class. */" },
		{ "ModuleRelativePath", "Public/Param/ParamType.h" },
		{ "NativeConstTemplateArg", "" },
		{ "ToolTip", "Pointer to object that defines the Enum, Struct, or Class." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FAnimNextParamType_Statics::NewProp_ValueTypeObject = { "ValueTypeObject", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNextParamType, ValueTypeObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNextParamType_Statics::NewProp_ValueTypeObject_MetaData), Z_Construct_UScriptStruct_FAnimNextParamType_Statics::NewProp_ValueTypeObject_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimNextParamType_Statics::NewProp_ValueType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNextParamType_Statics::NewProp_ValueType_MetaData[] = {
		{ "Comment", "/** Type of the value described by this parameter. */" },
		{ "ModuleRelativePath", "Public/Param/ParamType.h" },
		{ "ToolTip", "Type of the value described by this parameter." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAnimNextParamType_Statics::NewProp_ValueType = { "ValueType", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNextParamType, ValueType), Z_Construct_UEnum_StructUtils_EPropertyBagPropertyType, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNextParamType_Statics::NewProp_ValueType_MetaData), Z_Construct_UScriptStruct_FAnimNextParamType_Statics::NewProp_ValueType_MetaData) }; // 2322204152
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimNextParamType_Statics::NewProp_ContainerType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNextParamType_Statics::NewProp_ContainerType_MetaData[] = {
		{ "Comment", "/** Type of the container described by this parameter. */" },
		{ "ModuleRelativePath", "Public/Param/ParamType.h" },
		{ "ToolTip", "Type of the container described by this parameter." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAnimNextParamType_Statics::NewProp_ContainerType = { "ContainerType", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNextParamType, ContainerType), Z_Construct_UEnum_StructUtils_EPropertyBagContainerType, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNextParamType_Statics::NewProp_ContainerType_MetaData), Z_Construct_UScriptStruct_FAnimNextParamType_Statics::NewProp_ContainerType_MetaData) }; // 3910950316
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNextParamType_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNextParamType_Statics::NewProp_ValueTypeObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNextParamType_Statics::NewProp_ValueType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNextParamType_Statics::NewProp_ValueType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNextParamType_Statics::NewProp_ContainerType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNextParamType_Statics::NewProp_ContainerType,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNextParamType_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AnimNext,
		nullptr,
		&NewStructOps,
		"AnimNextParamType",
		Z_Construct_UScriptStruct_FAnimNextParamType_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNextParamType_Statics::PropPointers),
		sizeof(FAnimNextParamType),
		alignof(FAnimNextParamType),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNextParamType_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAnimNextParamType_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNextParamType_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNextParamType()
	{
		if (!Z_Registration_Info_UScriptStruct_AnimNextParamType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimNextParamType.InnerSingleton, Z_Construct_UScriptStruct_FAnimNextParamType_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AnimNextParamType.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNext_Public_Param_ParamType_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNext_Public_Param_ParamType_h_Statics::ScriptStructInfo[] = {
		{ FAnimNextParamType::StaticStruct, Z_Construct_UScriptStruct_FAnimNextParamType_Statics::NewStructOps, TEXT("AnimNextParamType"), &Z_Registration_Info_UScriptStruct_AnimNextParamType, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimNextParamType), 2379401833U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNext_Public_Param_ParamType_h_2640229585(TEXT("/Script/AnimNext"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNext_Public_Param_ParamType_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNext_Public_Param_ParamType_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
