// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MVVMBlueprintViewBinding.h"
#include "../../Source/Runtime/Engine/Classes/Engine/MemberReference.h"
#include "MVVMPropertyPath.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMVVMBlueprintViewBinding() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMemberReference();
	MODELVIEWVIEWMODEL_API UEnum* Z_Construct_UEnum_ModelViewViewModel_EMVVMBindingMode();
	MODELVIEWVIEWMODEL_API UEnum* Z_Construct_UEnum_ModelViewViewModel_EMVVMExecutionMode();
	MODELVIEWVIEWMODELBLUEPRINT_API UClass* Z_Construct_UClass_UMVVMBlueprintViewConversionFunction_NoRegister();
	MODELVIEWVIEWMODELBLUEPRINT_API UScriptStruct* Z_Construct_UScriptStruct_FMVVMBlueprintPropertyPath();
	MODELVIEWVIEWMODELBLUEPRINT_API UScriptStruct* Z_Construct_UScriptStruct_FMVVMBlueprintViewBinding();
	MODELVIEWVIEWMODELBLUEPRINT_API UScriptStruct* Z_Construct_UScriptStruct_FMVVMBlueprintViewConversionPath();
	UPackage* Z_Construct_UPackage__Script_ModelViewViewModelBlueprint();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MVVMBlueprintViewConversionPath;
class UScriptStruct* FMVVMBlueprintViewConversionPath::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MVVMBlueprintViewConversionPath.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MVVMBlueprintViewConversionPath.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMVVMBlueprintViewConversionPath, (UObject*)Z_Construct_UPackage__Script_ModelViewViewModelBlueprint(), TEXT("MVVMBlueprintViewConversionPath"));
	}
	return Z_Registration_Info_UScriptStruct_MVVMBlueprintViewConversionPath.OuterSingleton;
}
template<> MODELVIEWVIEWMODELBLUEPRINT_API UScriptStruct* StaticStruct<FMVVMBlueprintViewConversionPath>()
{
	return FMVVMBlueprintViewConversionPath::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMVVMBlueprintViewConversionPath_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DestinationToSourceFunction_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DestinationToSourceFunction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DestinationToSourceWrapper_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_DestinationToSourceWrapper;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceToDestinationFunction_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SourceToDestinationFunction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceToDestinationWrapper_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_SourceToDestinationWrapper;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DestinationToSourceConversion_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DestinationToSourceConversion;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceToDestinationConversion_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SourceToDestinationConversion;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMVVMBlueprintViewConversionPath_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n*\n*/" },
		{ "ModuleRelativePath", "Public/MVVMBlueprintViewBinding.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMVVMBlueprintViewConversionPath_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMVVMBlueprintViewConversionPath>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMVVMBlueprintViewConversionPath_Statics::NewProp_DestinationToSourceFunction_MetaData[] = {
		{ "Comment", "/**\n\x09 * The Conversion function when converting the value from the destination to the source.\n\x09 * @note if a wrapper is needed, this is the function that is wrapped.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MVVMBlueprintViewBinding.h" },
		{ "ToolTip", "The Conversion function when converting the value from the destination to the source.\n@note if a wrapper is needed, this is the function that is wrapped." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMVVMBlueprintViewConversionPath_Statics::NewProp_DestinationToSourceFunction = { "DestinationToSourceFunction", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMVVMBlueprintViewConversionPath, DestinationToSourceFunction_DEPRECATED), Z_Construct_UScriptStruct_FMemberReference, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMVVMBlueprintViewConversionPath_Statics::NewProp_DestinationToSourceFunction_MetaData), Z_Construct_UScriptStruct_FMVVMBlueprintViewConversionPath_Statics::NewProp_DestinationToSourceFunction_MetaData) }; // 544905968
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMVVMBlueprintViewConversionPath_Statics::NewProp_DestinationToSourceWrapper_MetaData[] = {
		{ "Comment", "/**\n\x09 * The name of the graph that contains the conversion function when converting the value from the destination to the source.\n\x09 * Valid when the function needs a wrapper and when the graph is generated on the fly.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MVVMBlueprintViewBinding.h" },
		{ "ToolTip", "The name of the graph that contains the conversion function when converting the value from the destination to the source.\nValid when the function needs a wrapper and when the graph is generated on the fly." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FMVVMBlueprintViewConversionPath_Statics::NewProp_DestinationToSourceWrapper = { "DestinationToSourceWrapper", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMVVMBlueprintViewConversionPath, DestinationToSourceWrapper_DEPRECATED), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMVVMBlueprintViewConversionPath_Statics::NewProp_DestinationToSourceWrapper_MetaData), Z_Construct_UScriptStruct_FMVVMBlueprintViewConversionPath_Statics::NewProp_DestinationToSourceWrapper_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMVVMBlueprintViewConversionPath_Statics::NewProp_SourceToDestinationFunction_MetaData[] = {
		{ "Comment", "/**\n\x09 * The Conversion function when converting the value from the source to the destination.\n\x09 * @note if a wrapper is needed, this is the function that is wrapped.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MVVMBlueprintViewBinding.h" },
		{ "ToolTip", "The Conversion function when converting the value from the source to the destination.\n@note if a wrapper is needed, this is the function that is wrapped." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMVVMBlueprintViewConversionPath_Statics::NewProp_SourceToDestinationFunction = { "SourceToDestinationFunction", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMVVMBlueprintViewConversionPath, SourceToDestinationFunction_DEPRECATED), Z_Construct_UScriptStruct_FMemberReference, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMVVMBlueprintViewConversionPath_Statics::NewProp_SourceToDestinationFunction_MetaData), Z_Construct_UScriptStruct_FMVVMBlueprintViewConversionPath_Statics::NewProp_SourceToDestinationFunction_MetaData) }; // 544905968
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMVVMBlueprintViewConversionPath_Statics::NewProp_SourceToDestinationWrapper_MetaData[] = {
		{ "Comment", "/**\n\x09 * The name of the graph that contains the conversion function when converting the value from the source to the destination.\n\x09 * When the function needs a wrapper. Valid also when the graph is generated on the fly.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MVVMBlueprintViewBinding.h" },
		{ "ToolTip", "The name of the graph that contains the conversion function when converting the value from the source to the destination.\nWhen the function needs a wrapper. Valid also when the graph is generated on the fly." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FMVVMBlueprintViewConversionPath_Statics::NewProp_SourceToDestinationWrapper = { "SourceToDestinationWrapper", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMVVMBlueprintViewConversionPath, SourceToDestinationWrapper_DEPRECATED), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMVVMBlueprintViewConversionPath_Statics::NewProp_SourceToDestinationWrapper_MetaData), Z_Construct_UScriptStruct_FMVVMBlueprintViewConversionPath_Statics::NewProp_SourceToDestinationWrapper_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMVVMBlueprintViewConversionPath_Statics::NewProp_DestinationToSourceConversion_MetaData[] = {
		{ "Comment", "/**\n\x09 * The graph that contains the conversion function when converting the value from the destination to the source.\n\x09 * When the function doesn't need a wrapper.\n\x09 */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MVVMBlueprintViewBinding.h" },
		{ "ToolTip", "The graph that contains the conversion function when converting the value from the destination to the source.\nWhen the function doesn't need a wrapper." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FMVVMBlueprintViewConversionPath_Statics::NewProp_DestinationToSourceConversion = { "DestinationToSourceConversion", nullptr, (EPropertyFlags)0x0016000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMVVMBlueprintViewConversionPath, DestinationToSourceConversion), Z_Construct_UClass_UMVVMBlueprintViewConversionFunction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMVVMBlueprintViewConversionPath_Statics::NewProp_DestinationToSourceConversion_MetaData), Z_Construct_UScriptStruct_FMVVMBlueprintViewConversionPath_Statics::NewProp_DestinationToSourceConversion_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMVVMBlueprintViewConversionPath_Statics::NewProp_SourceToDestinationConversion_MetaData[] = {
		{ "Comment", "/**\n\x09 * The graph that contains the conversion function when converting the value from the source to the destination.\n\x09 * When the function doesn't need a wrapper.\n\x09 */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MVVMBlueprintViewBinding.h" },
		{ "ToolTip", "The graph that contains the conversion function when converting the value from the source to the destination.\nWhen the function doesn't need a wrapper." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FMVVMBlueprintViewConversionPath_Statics::NewProp_SourceToDestinationConversion = { "SourceToDestinationConversion", nullptr, (EPropertyFlags)0x0016000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMVVMBlueprintViewConversionPath, SourceToDestinationConversion), Z_Construct_UClass_UMVVMBlueprintViewConversionFunction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMVVMBlueprintViewConversionPath_Statics::NewProp_SourceToDestinationConversion_MetaData), Z_Construct_UScriptStruct_FMVVMBlueprintViewConversionPath_Statics::NewProp_SourceToDestinationConversion_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMVVMBlueprintViewConversionPath_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMVVMBlueprintViewConversionPath_Statics::NewProp_DestinationToSourceFunction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMVVMBlueprintViewConversionPath_Statics::NewProp_DestinationToSourceWrapper,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMVVMBlueprintViewConversionPath_Statics::NewProp_SourceToDestinationFunction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMVVMBlueprintViewConversionPath_Statics::NewProp_SourceToDestinationWrapper,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMVVMBlueprintViewConversionPath_Statics::NewProp_DestinationToSourceConversion,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMVVMBlueprintViewConversionPath_Statics::NewProp_SourceToDestinationConversion,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMVVMBlueprintViewConversionPath_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ModelViewViewModelBlueprint,
		nullptr,
		&NewStructOps,
		"MVVMBlueprintViewConversionPath",
		Z_Construct_UScriptStruct_FMVVMBlueprintViewConversionPath_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMVVMBlueprintViewConversionPath_Statics::PropPointers),
		sizeof(FMVVMBlueprintViewConversionPath),
		alignof(FMVVMBlueprintViewConversionPath),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000205),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMVVMBlueprintViewConversionPath_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMVVMBlueprintViewConversionPath_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMVVMBlueprintViewConversionPath_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FMVVMBlueprintViewConversionPath()
	{
		if (!Z_Registration_Info_UScriptStruct_MVVMBlueprintViewConversionPath.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MVVMBlueprintViewConversionPath.InnerSingleton, Z_Construct_UScriptStruct_FMVVMBlueprintViewConversionPath_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MVVMBlueprintViewConversionPath.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MVVMBlueprintViewBinding;
class UScriptStruct* FMVVMBlueprintViewBinding::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MVVMBlueprintViewBinding.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MVVMBlueprintViewBinding.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMVVMBlueprintViewBinding, (UObject*)Z_Construct_UPackage__Script_ModelViewViewModelBlueprint(), TEXT("MVVMBlueprintViewBinding"));
	}
	return Z_Registration_Info_UScriptStruct_MVVMBlueprintViewBinding.OuterSingleton;
}
template<> MODELVIEWVIEWMODELBLUEPRINT_API UScriptStruct* StaticStruct<FMVVMBlueprintViewBinding>()
{
	return FMVVMBlueprintViewBinding::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMVVMBlueprintViewBinding_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourcePath_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SourcePath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DestinationPath_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DestinationPath;
		static const UECodeGen_Private::FBytePropertyParams NewProp_BindingType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BindingType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_BindingType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideExecutionMode_MetaData[];
#endif
		static void NewProp_bOverrideExecutionMode_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideExecutionMode;
		static const UECodeGen_Private::FBytePropertyParams NewProp_OverrideExecutionMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverrideExecutionMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_OverrideExecutionMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Conversion_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Conversion;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BindingId_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BindingId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[];
#endif
		static void NewProp_bEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCompile_MetaData[];
#endif
		static void NewProp_bCompile_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCompile;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMVVMBlueprintViewBinding_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n*\n*/" },
		{ "ModuleRelativePath", "Public/MVVMBlueprintViewBinding.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMVVMBlueprintViewBinding_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMVVMBlueprintViewBinding>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMVVMBlueprintViewBinding_Statics::NewProp_SourcePath_MetaData[] = {
		{ "Category", "Viewmodel" },
		{ "ModuleRelativePath", "Public/MVVMBlueprintViewBinding.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMVVMBlueprintViewBinding_Statics::NewProp_SourcePath = { "SourcePath", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMVVMBlueprintViewBinding, SourcePath), Z_Construct_UScriptStruct_FMVVMBlueprintPropertyPath, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMVVMBlueprintViewBinding_Statics::NewProp_SourcePath_MetaData), Z_Construct_UScriptStruct_FMVVMBlueprintViewBinding_Statics::NewProp_SourcePath_MetaData) }; // 2041684757
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMVVMBlueprintViewBinding_Statics::NewProp_DestinationPath_MetaData[] = {
		{ "Category", "Viewmodel" },
		{ "ModuleRelativePath", "Public/MVVMBlueprintViewBinding.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMVVMBlueprintViewBinding_Statics::NewProp_DestinationPath = { "DestinationPath", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMVVMBlueprintViewBinding, DestinationPath), Z_Construct_UScriptStruct_FMVVMBlueprintPropertyPath, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMVVMBlueprintViewBinding_Statics::NewProp_DestinationPath_MetaData), Z_Construct_UScriptStruct_FMVVMBlueprintViewBinding_Statics::NewProp_DestinationPath_MetaData) }; // 2041684757
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMVVMBlueprintViewBinding_Statics::NewProp_BindingType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMVVMBlueprintViewBinding_Statics::NewProp_BindingType_MetaData[] = {
		{ "Category", "Viewmodel" },
		{ "Comment", "/** */" },
		{ "ModuleRelativePath", "Public/MVVMBlueprintViewBinding.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FMVVMBlueprintViewBinding_Statics::NewProp_BindingType = { "BindingType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMVVMBlueprintViewBinding, BindingType), Z_Construct_UEnum_ModelViewViewModel_EMVVMBindingMode, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMVVMBlueprintViewBinding_Statics::NewProp_BindingType_MetaData), Z_Construct_UScriptStruct_FMVVMBlueprintViewBinding_Statics::NewProp_BindingType_MetaData) }; // 156309925
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMVVMBlueprintViewBinding_Statics::NewProp_bOverrideExecutionMode_MetaData[] = {
		{ "ModuleRelativePath", "Public/MVVMBlueprintViewBinding.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FMVVMBlueprintViewBinding_Statics::NewProp_bOverrideExecutionMode_SetBit(void* Obj)
	{
		((FMVVMBlueprintViewBinding*)Obj)->bOverrideExecutionMode = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMVVMBlueprintViewBinding_Statics::NewProp_bOverrideExecutionMode = { "bOverrideExecutionMode", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FMVVMBlueprintViewBinding), &Z_Construct_UScriptStruct_FMVVMBlueprintViewBinding_Statics::NewProp_bOverrideExecutionMode_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMVVMBlueprintViewBinding_Statics::NewProp_bOverrideExecutionMode_MetaData), Z_Construct_UScriptStruct_FMVVMBlueprintViewBinding_Statics::NewProp_bOverrideExecutionMode_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMVVMBlueprintViewBinding_Statics::NewProp_OverrideExecutionMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMVVMBlueprintViewBinding_Statics::NewProp_OverrideExecutionMode_MetaData[] = {
		{ "Category", "Viewmodel" },
		{ "EditCondition", "bOverrideExecutionMode" },
		{ "ModuleRelativePath", "Public/MVVMBlueprintViewBinding.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FMVVMBlueprintViewBinding_Statics::NewProp_OverrideExecutionMode = { "OverrideExecutionMode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMVVMBlueprintViewBinding, OverrideExecutionMode), Z_Construct_UEnum_ModelViewViewModel_EMVVMExecutionMode, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMVVMBlueprintViewBinding_Statics::NewProp_OverrideExecutionMode_MetaData), Z_Construct_UScriptStruct_FMVVMBlueprintViewBinding_Statics::NewProp_OverrideExecutionMode_MetaData) }; // 4090638343
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMVVMBlueprintViewBinding_Statics::NewProp_Conversion_MetaData[] = {
		{ "Category", "Viewmodel" },
		{ "Comment", "/** */" },
		{ "ModuleRelativePath", "Public/MVVMBlueprintViewBinding.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMVVMBlueprintViewBinding_Statics::NewProp_Conversion = { "Conversion", nullptr, (EPropertyFlags)0x0010008000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMVVMBlueprintViewBinding, Conversion), Z_Construct_UScriptStruct_FMVVMBlueprintViewConversionPath, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMVVMBlueprintViewBinding_Statics::NewProp_Conversion_MetaData), Z_Construct_UScriptStruct_FMVVMBlueprintViewBinding_Statics::NewProp_Conversion_MetaData) }; // 509386452
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMVVMBlueprintViewBinding_Statics::NewProp_BindingId_MetaData[] = {
		{ "Category", "Viewmodel" },
		{ "Comment", "/** The unique ID of this binding. */" },
		{ "ModuleRelativePath", "Public/MVVMBlueprintViewBinding.h" },
		{ "ToolTip", "The unique ID of this binding." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMVVMBlueprintViewBinding_Statics::NewProp_BindingId = { "BindingId", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMVVMBlueprintViewBinding, BindingId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMVVMBlueprintViewBinding_Statics::NewProp_BindingId_MetaData), Z_Construct_UScriptStruct_FMVVMBlueprintViewBinding_Statics::NewProp_BindingId_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMVVMBlueprintViewBinding_Statics::NewProp_bEnabled_MetaData[] = {
		{ "Category", "Viewmodel" },
		{ "Comment", "/** Whether the binding is enabled or disabled by default. The instance may enable the binding at runtime. */" },
		{ "ModuleRelativePath", "Public/MVVMBlueprintViewBinding.h" },
		{ "ToolTip", "Whether the binding is enabled or disabled by default. The instance may enable the binding at runtime." },
	};
#endif
	void Z_Construct_UScriptStruct_FMVVMBlueprintViewBinding_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((FMVVMBlueprintViewBinding*)Obj)->bEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMVVMBlueprintViewBinding_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FMVVMBlueprintViewBinding), &Z_Construct_UScriptStruct_FMVVMBlueprintViewBinding_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMVVMBlueprintViewBinding_Statics::NewProp_bEnabled_MetaData), Z_Construct_UScriptStruct_FMVVMBlueprintViewBinding_Statics::NewProp_bEnabled_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMVVMBlueprintViewBinding_Statics::NewProp_bCompile_MetaData[] = {
		{ "Category", "Viewmodel" },
		{ "Comment", "/** The binding is visible in the editor, but is not compiled and cannot be used at runtime. */" },
		{ "ModuleRelativePath", "Public/MVVMBlueprintViewBinding.h" },
		{ "ToolTip", "The binding is visible in the editor, but is not compiled and cannot be used at runtime." },
	};
#endif
	void Z_Construct_UScriptStruct_FMVVMBlueprintViewBinding_Statics::NewProp_bCompile_SetBit(void* Obj)
	{
		((FMVVMBlueprintViewBinding*)Obj)->bCompile = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMVVMBlueprintViewBinding_Statics::NewProp_bCompile = { "bCompile", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FMVVMBlueprintViewBinding), &Z_Construct_UScriptStruct_FMVVMBlueprintViewBinding_Statics::NewProp_bCompile_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMVVMBlueprintViewBinding_Statics::NewProp_bCompile_MetaData), Z_Construct_UScriptStruct_FMVVMBlueprintViewBinding_Statics::NewProp_bCompile_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMVVMBlueprintViewBinding_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMVVMBlueprintViewBinding_Statics::NewProp_SourcePath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMVVMBlueprintViewBinding_Statics::NewProp_DestinationPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMVVMBlueprintViewBinding_Statics::NewProp_BindingType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMVVMBlueprintViewBinding_Statics::NewProp_BindingType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMVVMBlueprintViewBinding_Statics::NewProp_bOverrideExecutionMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMVVMBlueprintViewBinding_Statics::NewProp_OverrideExecutionMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMVVMBlueprintViewBinding_Statics::NewProp_OverrideExecutionMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMVVMBlueprintViewBinding_Statics::NewProp_Conversion,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMVVMBlueprintViewBinding_Statics::NewProp_BindingId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMVVMBlueprintViewBinding_Statics::NewProp_bEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMVVMBlueprintViewBinding_Statics::NewProp_bCompile,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMVVMBlueprintViewBinding_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ModelViewViewModelBlueprint,
		nullptr,
		&NewStructOps,
		"MVVMBlueprintViewBinding",
		Z_Construct_UScriptStruct_FMVVMBlueprintViewBinding_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMVVMBlueprintViewBinding_Statics::PropPointers),
		sizeof(FMVVMBlueprintViewBinding),
		alignof(FMVVMBlueprintViewBinding),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000205),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMVVMBlueprintViewBinding_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMVVMBlueprintViewBinding_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMVVMBlueprintViewBinding_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FMVVMBlueprintViewBinding()
	{
		if (!Z_Registration_Info_UScriptStruct_MVVMBlueprintViewBinding.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MVVMBlueprintViewBinding.InnerSingleton, Z_Construct_UScriptStruct_FMVVMBlueprintViewBinding_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MVVMBlueprintViewBinding.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModelBlueprint_Public_MVVMBlueprintViewBinding_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModelBlueprint_Public_MVVMBlueprintViewBinding_h_Statics::ScriptStructInfo[] = {
		{ FMVVMBlueprintViewConversionPath::StaticStruct, Z_Construct_UScriptStruct_FMVVMBlueprintViewConversionPath_Statics::NewStructOps, TEXT("MVVMBlueprintViewConversionPath"), &Z_Registration_Info_UScriptStruct_MVVMBlueprintViewConversionPath, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMVVMBlueprintViewConversionPath), 509386452U) },
		{ FMVVMBlueprintViewBinding::StaticStruct, Z_Construct_UScriptStruct_FMVVMBlueprintViewBinding_Statics::NewStructOps, TEXT("MVVMBlueprintViewBinding"), &Z_Registration_Info_UScriptStruct_MVVMBlueprintViewBinding, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMVVMBlueprintViewBinding), 2952208364U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModelBlueprint_Public_MVVMBlueprintViewBinding_h_2185519097(TEXT("/Script/ModelViewViewModelBlueprint"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModelBlueprint_Public_MVVMBlueprintViewBinding_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModelBlueprint_Public_MVVMBlueprintViewBinding_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
