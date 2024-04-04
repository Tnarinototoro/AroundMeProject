// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "K2Node_MakeRequestHeader.h"
#include "../../Source/Runtime/Engine/Classes/EdGraph/EdGraphPin.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeK2Node_MakeRequestHeader() {}
// Cross Module References
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_AddPinInterface_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FEdGraphPinReference();
	HTTPBLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_MakeRequestHeader();
	HTTPBLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_MakeRequestHeader_NoRegister();
	HTTPBLUEPRINTGRAPH_API UScriptStruct* Z_Construct_UScriptStruct_FOptionalPin();
	UPackage* Z_Construct_UPackage__Script_HttpBlueprintGraph();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OptionalPin;
class UScriptStruct* FOptionalPin::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OptionalPin.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OptionalPin.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOptionalPin, (UObject*)Z_Construct_UPackage__Script_HttpBlueprintGraph(), TEXT("OptionalPin"));
	}
	return Z_Registration_Info_UScriptStruct_OptionalPin.OuterSingleton;
}
template<> HTTPBLUEPRINTGRAPH_API UScriptStruct* StaticStruct<FOptionalPin>()
{
	return FOptionalPin::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FOptionalPin_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PinName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_PinName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PinDefaultValue_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_PinDefaultValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LinkedTo_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LinkedTo;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOptionalPin_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Stores pin connections to restore after a node rebuild. */" },
		{ "ModuleRelativePath", "Private/K2Node_MakeRequestHeader.h" },
		{ "ToolTip", "Stores pin connections to restore after a node rebuild." },
	};
#endif
	void* Z_Construct_UScriptStruct_FOptionalPin_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOptionalPin>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOptionalPin_Statics::NewProp_PinName_MetaData[] = {
		{ "Comment", "/** Pin Name. */" },
		{ "ModuleRelativePath", "Private/K2Node_MakeRequestHeader.h" },
		{ "ToolTip", "Pin Name." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FOptionalPin_Statics::NewProp_PinName = { "PinName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOptionalPin, PinName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOptionalPin_Statics::NewProp_PinName_MetaData), Z_Construct_UScriptStruct_FOptionalPin_Statics::NewProp_PinName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOptionalPin_Statics::NewProp_PinDefaultValue_MetaData[] = {
		{ "Comment", "/** Default value, stored as a string. */" },
		{ "ModuleRelativePath", "Private/K2Node_MakeRequestHeader.h" },
		{ "ToolTip", "Default value, stored as a string." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FOptionalPin_Statics::NewProp_PinDefaultValue = { "PinDefaultValue", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOptionalPin, PinDefaultValue), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOptionalPin_Statics::NewProp_PinDefaultValue_MetaData), Z_Construct_UScriptStruct_FOptionalPin_Statics::NewProp_PinDefaultValue_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOptionalPin_Statics::NewProp_LinkedTo_MetaData[] = {
		{ "Comment", "/** Optional, use if something was previously linked to the pin. */" },
		{ "ModuleRelativePath", "Private/K2Node_MakeRequestHeader.h" },
		{ "ToolTip", "Optional, use if something was previously linked to the pin." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOptionalPin_Statics::NewProp_LinkedTo = { "LinkedTo", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOptionalPin, LinkedTo), Z_Construct_UScriptStruct_FEdGraphPinReference, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOptionalPin_Statics::NewProp_LinkedTo_MetaData), Z_Construct_UScriptStruct_FOptionalPin_Statics::NewProp_LinkedTo_MetaData) }; // 3793911982
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOptionalPin_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOptionalPin_Statics::NewProp_PinName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOptionalPin_Statics::NewProp_PinDefaultValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOptionalPin_Statics::NewProp_LinkedTo,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOptionalPin_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_HttpBlueprintGraph,
		nullptr,
		&NewStructOps,
		"OptionalPin",
		Z_Construct_UScriptStruct_FOptionalPin_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOptionalPin_Statics::PropPointers),
		sizeof(FOptionalPin),
		alignof(FOptionalPin),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOptionalPin_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FOptionalPin_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOptionalPin_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FOptionalPin()
	{
		if (!Z_Registration_Info_UScriptStruct_OptionalPin.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OptionalPin.InnerSingleton, Z_Construct_UScriptStruct_FOptionalPin_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_OptionalPin.InnerSingleton;
	}
	void UK2Node_MakeRequestHeader::StaticRegisterNativesUK2Node_MakeRequestHeader()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UK2Node_MakeRequestHeader);
	UClass* Z_Construct_UClass_UK2Node_MakeRequestHeader_NoRegister()
	{
		return UK2Node_MakeRequestHeader::StaticClass();
	}
	struct Z_Construct_UClass_UK2Node_MakeRequestHeader_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PresetEnumIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_PresetEnumIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumInputs_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumInputs;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OptionalPins_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OptionalPins_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OptionalPins;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UK2Node_MakeRequestHeader_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UK2Node,
		(UObject* (*)())Z_Construct_UPackage__Script_HttpBlueprintGraph,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_MakeRequestHeader_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_MakeRequestHeader_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Node to create an Http header, with presets. */" },
		{ "IncludePath", "K2Node_MakeRequestHeader.h" },
		{ "ModuleRelativePath", "Private/K2Node_MakeRequestHeader.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Node to create an Http header, with presets." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_MakeRequestHeader_Statics::NewProp_PresetEnumIndex_MetaData[] = {
		{ "Comment", "/** The currently selected preset index. */" },
		{ "ModuleRelativePath", "Private/K2Node_MakeRequestHeader.h" },
		{ "ToolTip", "The currently selected preset index." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UK2Node_MakeRequestHeader_Statics::NewProp_PresetEnumIndex = { "PresetEnumIndex", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UK2Node_MakeRequestHeader, PresetEnumIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_MakeRequestHeader_Statics::NewProp_PresetEnumIndex_MetaData), Z_Construct_UClass_UK2Node_MakeRequestHeader_Statics::NewProp_PresetEnumIndex_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_MakeRequestHeader_Statics::NewProp_NumInputs_MetaData[] = {
		{ "Comment", "/** Number of key/value inputs. */" },
		{ "ModuleRelativePath", "Private/K2Node_MakeRequestHeader.h" },
		{ "ToolTip", "Number of key/value inputs." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UK2Node_MakeRequestHeader_Statics::NewProp_NumInputs = { "NumInputs", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UK2Node_MakeRequestHeader, NumInputs), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_MakeRequestHeader_Statics::NewProp_NumInputs_MetaData), Z_Construct_UClass_UK2Node_MakeRequestHeader_Statics::NewProp_NumInputs_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UK2Node_MakeRequestHeader_Statics::NewProp_OptionalPins_Inner = { "OptionalPins", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FOptionalPin, METADATA_PARAMS(0, nullptr) }; // 2945308183
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_MakeRequestHeader_Statics::NewProp_OptionalPins_MetaData[] = {
		{ "Comment", "/** Used to store hidden or pins to be later restored. */" },
		{ "ModuleRelativePath", "Private/K2Node_MakeRequestHeader.h" },
		{ "ToolTip", "Used to store hidden or pins to be later restored." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UK2Node_MakeRequestHeader_Statics::NewProp_OptionalPins = { "OptionalPins", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UK2Node_MakeRequestHeader, OptionalPins), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_MakeRequestHeader_Statics::NewProp_OptionalPins_MetaData), Z_Construct_UClass_UK2Node_MakeRequestHeader_Statics::NewProp_OptionalPins_MetaData) }; // 2945308183
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UK2Node_MakeRequestHeader_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_MakeRequestHeader_Statics::NewProp_PresetEnumIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_MakeRequestHeader_Statics::NewProp_NumInputs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_MakeRequestHeader_Statics::NewProp_OptionalPins_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_MakeRequestHeader_Statics::NewProp_OptionalPins,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UK2Node_MakeRequestHeader_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UK2Node_AddPinInterface_NoRegister, (int32)VTABLE_OFFSET(UK2Node_MakeRequestHeader, IK2Node_AddPinInterface), false },  // 236974593
		};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_MakeRequestHeader_Statics::InterfaceParams) < 64);
	const FCppClassTypeInfoStatic Z_Construct_UClass_UK2Node_MakeRequestHeader_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UK2Node_MakeRequestHeader>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UK2Node_MakeRequestHeader_Statics::ClassParams = {
		&UK2Node_MakeRequestHeader::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UK2Node_MakeRequestHeader_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_MakeRequestHeader_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x000800A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_MakeRequestHeader_Statics::Class_MetaDataParams), Z_Construct_UClass_UK2Node_MakeRequestHeader_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_MakeRequestHeader_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UK2Node_MakeRequestHeader()
	{
		if (!Z_Registration_Info_UClass_UK2Node_MakeRequestHeader.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UK2Node_MakeRequestHeader.OuterSingleton, Z_Construct_UClass_UK2Node_MakeRequestHeader_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UK2Node_MakeRequestHeader.OuterSingleton;
	}
	template<> HTTPBLUEPRINTGRAPH_API UClass* StaticClass<UK2Node_MakeRequestHeader>()
	{
		return UK2Node_MakeRequestHeader::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UK2Node_MakeRequestHeader);
	UK2Node_MakeRequestHeader::~UK2Node_MakeRequestHeader() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Web_HttpBlueprint_Source_HttpBlueprintGraph_Private_K2Node_MakeRequestHeader_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Web_HttpBlueprint_Source_HttpBlueprintGraph_Private_K2Node_MakeRequestHeader_h_Statics::ScriptStructInfo[] = {
		{ FOptionalPin::StaticStruct, Z_Construct_UScriptStruct_FOptionalPin_Statics::NewStructOps, TEXT("OptionalPin"), &Z_Registration_Info_UScriptStruct_OptionalPin, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOptionalPin), 2945308183U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Web_HttpBlueprint_Source_HttpBlueprintGraph_Private_K2Node_MakeRequestHeader_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UK2Node_MakeRequestHeader, UK2Node_MakeRequestHeader::StaticClass, TEXT("UK2Node_MakeRequestHeader"), &Z_Registration_Info_UClass_UK2Node_MakeRequestHeader, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UK2Node_MakeRequestHeader), 2786611282U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Web_HttpBlueprint_Source_HttpBlueprintGraph_Private_K2Node_MakeRequestHeader_h_3396198066(TEXT("/Script/HttpBlueprintGraph"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Web_HttpBlueprint_Source_HttpBlueprintGraph_Private_K2Node_MakeRequestHeader_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Web_HttpBlueprint_Source_HttpBlueprintGraph_Private_K2Node_MakeRequestHeader_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Web_HttpBlueprint_Source_HttpBlueprintGraph_Private_K2Node_MakeRequestHeader_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Web_HttpBlueprint_Source_HttpBlueprintGraph_Private_K2Node_MakeRequestHeader_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
