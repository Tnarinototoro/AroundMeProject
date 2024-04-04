// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MetasoundEditorSubsystem.h"
#include "MetasoundBuilderSubsystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMetasoundEditorSubsystem() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	EDITORSUBSYSTEM_API UClass* Z_Construct_UClass_UEditorSubsystem();
	ENGINE_API UClass* Z_Construct_UClass_USoundWave_NoRegister();
	METASOUNDEDITOR_API UClass* Z_Construct_UClass_UMetaSoundEditorSubsystem();
	METASOUNDEDITOR_API UClass* Z_Construct_UClass_UMetaSoundEditorSubsystem_NoRegister();
	METASOUNDENGINE_API UClass* Z_Construct_UClass_UMetaSoundBuilderBase_NoRegister();
	METASOUNDENGINE_API UEnum* Z_Construct_UEnum_MetasoundEngine_EMetaSoundBuilderResult();
	METASOUNDENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMetaSoundNodeHandle();
	METASOUNDFRONTEND_API UClass* Z_Construct_UClass_UMetaSoundDocumentInterface_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MetasoundEditor();
// End Cross Module References
	DEFINE_FUNCTION(UMetaSoundEditorSubsystem::execSetNodeLocation)
	{
		P_GET_OBJECT(UMetaSoundBuilderBase,Z_Param_InBuilder);
		P_GET_STRUCT_REF(FMetaSoundNodeHandle,Z_Param_Out_InNode);
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_InLocation);
		P_GET_ENUM_REF(EMetaSoundBuilderResult,Z_Param_Out_OutResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetNodeLocation(Z_Param_InBuilder,Z_Param_Out_InNode,Z_Param_Out_InLocation,(EMetaSoundBuilderResult&)(Z_Param_Out_OutResult));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMetaSoundEditorSubsystem::execBuildToAsset)
	{
		P_GET_OBJECT(UMetaSoundBuilderBase,Z_Param_InBuilder);
		P_GET_PROPERTY(FStrProperty,Z_Param_Author);
		P_GET_PROPERTY(FStrProperty,Z_Param_AssetName);
		P_GET_PROPERTY(FStrProperty,Z_Param_PackagePath);
		P_GET_ENUM_REF(EMetaSoundBuilderResult,Z_Param_Out_OutResult);
		P_GET_OBJECT(USoundWave,Z_Param_TemplateSoundWave);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TScriptInterface<IMetaSoundDocumentInterface>*)Z_Param__Result=P_THIS->BuildToAsset(Z_Param_InBuilder,Z_Param_Author,Z_Param_AssetName,Z_Param_PackagePath,(EMetaSoundBuilderResult&)(Z_Param_Out_OutResult),Z_Param_TemplateSoundWave);
		P_NATIVE_END;
	}
	void UMetaSoundEditorSubsystem::StaticRegisterNativesUMetaSoundEditorSubsystem()
	{
		UClass* Class = UMetaSoundEditorSubsystem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BuildToAsset", &UMetaSoundEditorSubsystem::execBuildToAsset },
			{ "SetNodeLocation", &UMetaSoundEditorSubsystem::execSetNodeLocation },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMetaSoundEditorSubsystem_BuildToAsset_Statics
	{
		struct MetaSoundEditorSubsystem_eventBuildToAsset_Parms
		{
			UMetaSoundBuilderBase* InBuilder;
			FString Author;
			FString AssetName;
			FString PackagePath;
			EMetaSoundBuilderResult OutResult;
			const USoundWave* TemplateSoundWave;
			TScriptInterface<IMetaSoundDocumentInterface> ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InBuilder_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InBuilder;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Author_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Author;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AssetName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_AssetName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PackagePath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_PackagePath;
		static const UECodeGen_Private::FBytePropertyParams NewProp_OutResult_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_OutResult;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TemplateSoundWave_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TemplateSoundWave;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FInterfacePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMetaSoundEditorSubsystem_BuildToAsset_Statics::NewProp_InBuilder_MetaData[] = {
		{ "DisplayName", "Builder" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMetaSoundEditorSubsystem_BuildToAsset_Statics::NewProp_InBuilder = { "InBuilder", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundEditorSubsystem_eventBuildToAsset_Parms, InBuilder), Z_Construct_UClass_UMetaSoundBuilderBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundEditorSubsystem_BuildToAsset_Statics::NewProp_InBuilder_MetaData), Z_Construct_UFunction_UMetaSoundEditorSubsystem_BuildToAsset_Statics::NewProp_InBuilder_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMetaSoundEditorSubsystem_BuildToAsset_Statics::NewProp_Author_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMetaSoundEditorSubsystem_BuildToAsset_Statics::NewProp_Author = { "Author", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundEditorSubsystem_eventBuildToAsset_Parms, Author), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundEditorSubsystem_BuildToAsset_Statics::NewProp_Author_MetaData), Z_Construct_UFunction_UMetaSoundEditorSubsystem_BuildToAsset_Statics::NewProp_Author_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMetaSoundEditorSubsystem_BuildToAsset_Statics::NewProp_AssetName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMetaSoundEditorSubsystem_BuildToAsset_Statics::NewProp_AssetName = { "AssetName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundEditorSubsystem_eventBuildToAsset_Parms, AssetName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundEditorSubsystem_BuildToAsset_Statics::NewProp_AssetName_MetaData), Z_Construct_UFunction_UMetaSoundEditorSubsystem_BuildToAsset_Statics::NewProp_AssetName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMetaSoundEditorSubsystem_BuildToAsset_Statics::NewProp_PackagePath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMetaSoundEditorSubsystem_BuildToAsset_Statics::NewProp_PackagePath = { "PackagePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundEditorSubsystem_eventBuildToAsset_Parms, PackagePath), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundEditorSubsystem_BuildToAsset_Statics::NewProp_PackagePath_MetaData), Z_Construct_UFunction_UMetaSoundEditorSubsystem_BuildToAsset_Statics::NewProp_PackagePath_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMetaSoundEditorSubsystem_BuildToAsset_Statics::NewProp_OutResult_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMetaSoundEditorSubsystem_BuildToAsset_Statics::NewProp_OutResult = { "OutResult", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundEditorSubsystem_eventBuildToAsset_Parms, OutResult), Z_Construct_UEnum_MetasoundEngine_EMetaSoundBuilderResult, METADATA_PARAMS(0, nullptr) }; // 436237091
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMetaSoundEditorSubsystem_BuildToAsset_Statics::NewProp_TemplateSoundWave_MetaData[] = {
		{ "DisplayName", "Template SoundWave" },
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMetaSoundEditorSubsystem_BuildToAsset_Statics::NewProp_TemplateSoundWave = { "TemplateSoundWave", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundEditorSubsystem_eventBuildToAsset_Parms, TemplateSoundWave), Z_Construct_UClass_USoundWave_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundEditorSubsystem_BuildToAsset_Statics::NewProp_TemplateSoundWave_MetaData), Z_Construct_UFunction_UMetaSoundEditorSubsystem_BuildToAsset_Statics::NewProp_TemplateSoundWave_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMetaSoundEditorSubsystem_BuildToAsset_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "MetaSound Asset" },
	};
#endif
	const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UMetaSoundEditorSubsystem_BuildToAsset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundEditorSubsystem_eventBuildToAsset_Parms, ReturnValue), Z_Construct_UClass_UMetaSoundDocumentInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundEditorSubsystem_BuildToAsset_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_UMetaSoundEditorSubsystem_BuildToAsset_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMetaSoundEditorSubsystem_BuildToAsset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundEditorSubsystem_BuildToAsset_Statics::NewProp_InBuilder,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundEditorSubsystem_BuildToAsset_Statics::NewProp_Author,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundEditorSubsystem_BuildToAsset_Statics::NewProp_AssetName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundEditorSubsystem_BuildToAsset_Statics::NewProp_PackagePath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundEditorSubsystem_BuildToAsset_Statics::NewProp_OutResult_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundEditorSubsystem_BuildToAsset_Statics::NewProp_OutResult,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundEditorSubsystem_BuildToAsset_Statics::NewProp_TemplateSoundWave,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundEditorSubsystem_BuildToAsset_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMetaSoundEditorSubsystem_BuildToAsset_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|MetaSound|Builder|Editor" },
		{ "Comment", "// Build the given builder to a MetaSound asset\n// @param Author - Sets the author on the given builder's document.\n// @param AssetName - Name of the asset to build.\n// @param PackagePath - Path of package to build asset to.\n// @param TemplateSoundWave - SoundWave settings such as attenuation, modulation, and sound class will be copied from the optional TemplateSoundWave.\n// For preset builders, TemplateSoundWave will override the template values from the referenced asset.\n" },
		{ "CPP_Default_TemplateSoundWave", "None" },
		{ "ExpandEnumAsExecs", "OutResult" },
		{ "ModuleRelativePath", "Public/MetasoundEditorSubsystem.h" },
		{ "ToolTip", "Build the given builder to a MetaSound asset\n@param Author - Sets the author on the given builder's document.\n@param AssetName - Name of the asset to build.\n@param PackagePath - Path of package to build asset to.\n@param TemplateSoundWave - SoundWave settings such as attenuation, modulation, and sound class will be copied from the optional TemplateSoundWave.\nFor preset builders, TemplateSoundWave will override the template values from the referenced asset." },
		{ "WorldContext", "Parent" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMetaSoundEditorSubsystem_BuildToAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMetaSoundEditorSubsystem, nullptr, "BuildToAsset", nullptr, nullptr, Z_Construct_UFunction_UMetaSoundEditorSubsystem_BuildToAsset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundEditorSubsystem_BuildToAsset_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMetaSoundEditorSubsystem_BuildToAsset_Statics::MetaSoundEditorSubsystem_eventBuildToAsset_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundEditorSubsystem_BuildToAsset_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMetaSoundEditorSubsystem_BuildToAsset_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundEditorSubsystem_BuildToAsset_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMetaSoundEditorSubsystem_BuildToAsset_Statics::MetaSoundEditorSubsystem_eventBuildToAsset_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMetaSoundEditorSubsystem_BuildToAsset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMetaSoundEditorSubsystem_BuildToAsset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMetaSoundEditorSubsystem_SetNodeLocation_Statics
	{
		struct MetaSoundEditorSubsystem_eventSetNodeLocation_Parms
		{
			UMetaSoundBuilderBase* InBuilder;
			FMetaSoundNodeHandle InNode;
			FVector2D InLocation;
			EMetaSoundBuilderResult OutResult;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InBuilder_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InBuilder;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InNode_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InNode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InLocation;
		static const UECodeGen_Private::FBytePropertyParams NewProp_OutResult_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_OutResult;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMetaSoundEditorSubsystem_SetNodeLocation_Statics::NewProp_InBuilder_MetaData[] = {
		{ "DisplayName", "Builder" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMetaSoundEditorSubsystem_SetNodeLocation_Statics::NewProp_InBuilder = { "InBuilder", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundEditorSubsystem_eventSetNodeLocation_Parms, InBuilder), Z_Construct_UClass_UMetaSoundBuilderBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundEditorSubsystem_SetNodeLocation_Statics::NewProp_InBuilder_MetaData), Z_Construct_UFunction_UMetaSoundEditorSubsystem_SetNodeLocation_Statics::NewProp_InBuilder_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMetaSoundEditorSubsystem_SetNodeLocation_Statics::NewProp_InNode_MetaData[] = {
		{ "DisplayName", "Node" },
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMetaSoundEditorSubsystem_SetNodeLocation_Statics::NewProp_InNode = { "InNode", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundEditorSubsystem_eventSetNodeLocation_Parms, InNode), Z_Construct_UScriptStruct_FMetaSoundNodeHandle, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundEditorSubsystem_SetNodeLocation_Statics::NewProp_InNode_MetaData), Z_Construct_UFunction_UMetaSoundEditorSubsystem_SetNodeLocation_Statics::NewProp_InNode_MetaData) }; // 1204278858
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMetaSoundEditorSubsystem_SetNodeLocation_Statics::NewProp_InLocation_MetaData[] = {
		{ "DisplayName", "Location" },
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMetaSoundEditorSubsystem_SetNodeLocation_Statics::NewProp_InLocation = { "InLocation", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundEditorSubsystem_eventSetNodeLocation_Parms, InLocation), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundEditorSubsystem_SetNodeLocation_Statics::NewProp_InLocation_MetaData), Z_Construct_UFunction_UMetaSoundEditorSubsystem_SetNodeLocation_Statics::NewProp_InLocation_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMetaSoundEditorSubsystem_SetNodeLocation_Statics::NewProp_OutResult_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMetaSoundEditorSubsystem_SetNodeLocation_Statics::NewProp_OutResult = { "OutResult", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundEditorSubsystem_eventSetNodeLocation_Parms, OutResult), Z_Construct_UEnum_MetasoundEngine_EMetaSoundBuilderResult, METADATA_PARAMS(0, nullptr) }; // 436237091
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMetaSoundEditorSubsystem_SetNodeLocation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundEditorSubsystem_SetNodeLocation_Statics::NewProp_InBuilder,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundEditorSubsystem_SetNodeLocation_Statics::NewProp_InNode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundEditorSubsystem_SetNodeLocation_Statics::NewProp_InLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundEditorSubsystem_SetNodeLocation_Statics::NewProp_OutResult_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundEditorSubsystem_SetNodeLocation_Statics::NewProp_OutResult,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMetaSoundEditorSubsystem_SetNodeLocation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|MetaSound|Builder|Editor" },
		{ "Comment", "// Sets the visual location to InLocation of a given node InNode of a given builder's document.\n" },
		{ "ExpandEnumAsExecs", "OutResult" },
		{ "ModuleRelativePath", "Public/MetasoundEditorSubsystem.h" },
		{ "ToolTip", "Sets the visual location to InLocation of a given node InNode of a given builder's document." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMetaSoundEditorSubsystem_SetNodeLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMetaSoundEditorSubsystem, nullptr, "SetNodeLocation", nullptr, nullptr, Z_Construct_UFunction_UMetaSoundEditorSubsystem_SetNodeLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundEditorSubsystem_SetNodeLocation_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMetaSoundEditorSubsystem_SetNodeLocation_Statics::MetaSoundEditorSubsystem_eventSetNodeLocation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundEditorSubsystem_SetNodeLocation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMetaSoundEditorSubsystem_SetNodeLocation_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundEditorSubsystem_SetNodeLocation_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMetaSoundEditorSubsystem_SetNodeLocation_Statics::MetaSoundEditorSubsystem_eventSetNodeLocation_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMetaSoundEditorSubsystem_SetNodeLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMetaSoundEditorSubsystem_SetNodeLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMetaSoundEditorSubsystem);
	UClass* Z_Construct_UClass_UMetaSoundEditorSubsystem_NoRegister()
	{
		return UMetaSoundEditorSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UMetaSoundEditorSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMetaSoundEditorSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEditorSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_MetasoundEditor,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMetaSoundEditorSubsystem_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UMetaSoundEditorSubsystem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMetaSoundEditorSubsystem_BuildToAsset, "BuildToAsset" }, // 3649417197
		{ &Z_Construct_UFunction_UMetaSoundEditorSubsystem_SetNodeLocation, "SetNodeLocation" }, // 2483538268
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMetaSoundEditorSubsystem_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMetaSoundEditorSubsystem_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** The subsystem in charge of editor MetaSound functionality */" },
		{ "IncludePath", "MetasoundEditorSubsystem.h" },
		{ "ModuleRelativePath", "Public/MetasoundEditorSubsystem.h" },
		{ "ToolTip", "The subsystem in charge of editor MetaSound functionality" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMetaSoundEditorSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMetaSoundEditorSubsystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMetaSoundEditorSubsystem_Statics::ClassParams = {
		&UMetaSoundEditorSubsystem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMetaSoundEditorSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UMetaSoundEditorSubsystem_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UMetaSoundEditorSubsystem()
	{
		if (!Z_Registration_Info_UClass_UMetaSoundEditorSubsystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMetaSoundEditorSubsystem.OuterSingleton, Z_Construct_UClass_UMetaSoundEditorSubsystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMetaSoundEditorSubsystem.OuterSingleton;
	}
	template<> METASOUNDEDITOR_API UClass* StaticClass<UMetaSoundEditorSubsystem>()
	{
		return UMetaSoundEditorSubsystem::StaticClass();
	}
	UMetaSoundEditorSubsystem::UMetaSoundEditorSubsystem() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMetaSoundEditorSubsystem);
	UMetaSoundEditorSubsystem::~UMetaSoundEditorSubsystem() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEditor_Public_MetasoundEditorSubsystem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEditor_Public_MetasoundEditorSubsystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMetaSoundEditorSubsystem, UMetaSoundEditorSubsystem::StaticClass, TEXT("UMetaSoundEditorSubsystem"), &Z_Registration_Info_UClass_UMetaSoundEditorSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMetaSoundEditorSubsystem), 1571027966U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEditor_Public_MetasoundEditorSubsystem_h_536707895(TEXT("/Script/MetasoundEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEditor_Public_MetasoundEditorSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEditor_Public_MetasoundEditorSubsystem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
