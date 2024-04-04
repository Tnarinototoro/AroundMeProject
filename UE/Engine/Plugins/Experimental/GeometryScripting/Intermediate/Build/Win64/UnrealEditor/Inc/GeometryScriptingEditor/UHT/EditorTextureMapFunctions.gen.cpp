// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GeometryScript/EditorTextureMapFunctions.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEditorTextureMapFunctions() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	GEOMETRYSCRIPTINGCORE_API UClass* Z_Construct_UClass_UGeometryScriptDebug_NoRegister();
	GEOMETRYSCRIPTINGEDITOR_API UClass* Z_Construct_UClass_UGeometryScriptLibrary_EditorTextureMapFunctions();
	GEOMETRYSCRIPTINGEDITOR_API UClass* Z_Construct_UClass_UGeometryScriptLibrary_EditorTextureMapFunctions_NoRegister();
	GEOMETRYSCRIPTINGEDITOR_API UEnum* Z_Construct_UEnum_GeometryScriptingEditor_EGeometryScriptReadGammaSpace();
	GEOMETRYSCRIPTINGEDITOR_API UEnum* Z_Construct_UEnum_GeometryScriptingEditor_EGeometryScriptRGBAChannel();
	GEOMETRYSCRIPTINGEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FGeometryScriptChannelPackResult();
	GEOMETRYSCRIPTINGEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FGeometryScriptChannelPackSource();
	UPackage* Z_Construct_UPackage__Script_GeometryScriptingEditor();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGeometryScriptRGBAChannel;
	static UEnum* EGeometryScriptRGBAChannel_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EGeometryScriptRGBAChannel.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EGeometryScriptRGBAChannel.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GeometryScriptingEditor_EGeometryScriptRGBAChannel, (UObject*)Z_Construct_UPackage__Script_GeometryScriptingEditor(), TEXT("EGeometryScriptRGBAChannel"));
		}
		return Z_Registration_Info_UEnum_EGeometryScriptRGBAChannel.OuterSingleton;
	}
	template<> GEOMETRYSCRIPTINGEDITOR_API UEnum* StaticEnum<EGeometryScriptRGBAChannel>()
	{
		return EGeometryScriptRGBAChannel_StaticEnum();
	}
	struct Z_Construct_UEnum_GeometryScriptingEditor_EGeometryScriptRGBAChannel_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_GeometryScriptingEditor_EGeometryScriptRGBAChannel_Statics::Enumerators[] = {
		{ "EGeometryScriptRGBAChannel::R", (int64)EGeometryScriptRGBAChannel::R },
		{ "EGeometryScriptRGBAChannel::G", (int64)EGeometryScriptRGBAChannel::G },
		{ "EGeometryScriptRGBAChannel::B", (int64)EGeometryScriptRGBAChannel::B },
		{ "EGeometryScriptRGBAChannel::A", (int64)EGeometryScriptRGBAChannel::A },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_GeometryScriptingEditor_EGeometryScriptRGBAChannel_Statics::Enum_MetaDataParams[] = {
		{ "A.Name", "EGeometryScriptRGBAChannel::A" },
		{ "B.Name", "EGeometryScriptRGBAChannel::B" },
		{ "BlueprintType", "true" },
		{ "G.Name", "EGeometryScriptRGBAChannel::G" },
		{ "ModuleRelativePath", "Public/GeometryScript/EditorTextureMapFunctions.h" },
		{ "R.Name", "EGeometryScriptRGBAChannel::R" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GeometryScriptingEditor_EGeometryScriptRGBAChannel_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_GeometryScriptingEditor,
		nullptr,
		"EGeometryScriptRGBAChannel",
		"EGeometryScriptRGBAChannel",
		Z_Construct_UEnum_GeometryScriptingEditor_EGeometryScriptRGBAChannel_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_GeometryScriptingEditor_EGeometryScriptRGBAChannel_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_GeometryScriptingEditor_EGeometryScriptRGBAChannel_Statics::Enum_MetaDataParams), Z_Construct_UEnum_GeometryScriptingEditor_EGeometryScriptRGBAChannel_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_GeometryScriptingEditor_EGeometryScriptRGBAChannel()
	{
		if (!Z_Registration_Info_UEnum_EGeometryScriptRGBAChannel.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGeometryScriptRGBAChannel.InnerSingleton, Z_Construct_UEnum_GeometryScriptingEditor_EGeometryScriptRGBAChannel_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EGeometryScriptRGBAChannel.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGeometryScriptReadGammaSpace;
	static UEnum* EGeometryScriptReadGammaSpace_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EGeometryScriptReadGammaSpace.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EGeometryScriptReadGammaSpace.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GeometryScriptingEditor_EGeometryScriptReadGammaSpace, (UObject*)Z_Construct_UPackage__Script_GeometryScriptingEditor(), TEXT("EGeometryScriptReadGammaSpace"));
		}
		return Z_Registration_Info_UEnum_EGeometryScriptReadGammaSpace.OuterSingleton;
	}
	template<> GEOMETRYSCRIPTINGEDITOR_API UEnum* StaticEnum<EGeometryScriptReadGammaSpace>()
	{
		return EGeometryScriptReadGammaSpace_StaticEnum();
	}
	struct Z_Construct_UEnum_GeometryScriptingEditor_EGeometryScriptReadGammaSpace_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_GeometryScriptingEditor_EGeometryScriptReadGammaSpace_Statics::Enumerators[] = {
		{ "EGeometryScriptReadGammaSpace::FromTextureSettings", (int64)EGeometryScriptReadGammaSpace::FromTextureSettings },
		{ "EGeometryScriptReadGammaSpace::Linear", (int64)EGeometryScriptReadGammaSpace::Linear },
		{ "EGeometryScriptReadGammaSpace::SRGB", (int64)EGeometryScriptReadGammaSpace::SRGB },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_GeometryScriptingEditor_EGeometryScriptReadGammaSpace_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "FromTextureSettings.Comment", "/* Read color data from Texture directly, without any conversion */" },
		{ "FromTextureSettings.Name", "EGeometryScriptReadGammaSpace::FromTextureSettings" },
		{ "FromTextureSettings.ToolTip", "Read color data from Texture directly, without any conversion" },
		{ "Linear.Comment", "/* Read linear color data from Texture, converting if needed */" },
		{ "Linear.Name", "EGeometryScriptReadGammaSpace::Linear" },
		{ "Linear.ToolTip", "Read linear color data from Texture, converting if needed" },
		{ "ModuleRelativePath", "Public/GeometryScript/EditorTextureMapFunctions.h" },
		{ "SRGB.Comment", "/* Read sRGB color data from Texture, converting if needed */" },
		{ "SRGB.Name", "EGeometryScriptReadGammaSpace::SRGB" },
		{ "SRGB.ToolTip", "Read sRGB color data from Texture, converting if needed" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GeometryScriptingEditor_EGeometryScriptReadGammaSpace_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_GeometryScriptingEditor,
		nullptr,
		"EGeometryScriptReadGammaSpace",
		"EGeometryScriptReadGammaSpace",
		Z_Construct_UEnum_GeometryScriptingEditor_EGeometryScriptReadGammaSpace_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_GeometryScriptingEditor_EGeometryScriptReadGammaSpace_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_GeometryScriptingEditor_EGeometryScriptReadGammaSpace_Statics::Enum_MetaDataParams), Z_Construct_UEnum_GeometryScriptingEditor_EGeometryScriptReadGammaSpace_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_GeometryScriptingEditor_EGeometryScriptReadGammaSpace()
	{
		if (!Z_Registration_Info_UEnum_EGeometryScriptReadGammaSpace.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGeometryScriptReadGammaSpace.InnerSingleton, Z_Construct_UEnum_GeometryScriptingEditor_EGeometryScriptReadGammaSpace_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EGeometryScriptReadGammaSpace.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GeometryScriptChannelPackSource;
class UScriptStruct* FGeometryScriptChannelPackSource::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GeometryScriptChannelPackSource.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GeometryScriptChannelPackSource.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGeometryScriptChannelPackSource, (UObject*)Z_Construct_UPackage__Script_GeometryScriptingEditor(), TEXT("GeometryScriptChannelPackSource"));
	}
	return Z_Registration_Info_UScriptStruct_GeometryScriptChannelPackSource.OuterSingleton;
}
template<> GEOMETRYSCRIPTINGEDITOR_API UScriptStruct* StaticStruct<FGeometryScriptChannelPackSource>()
{
	return FGeometryScriptChannelPackSource::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGeometryScriptChannelPackSource_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Texture_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Texture;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReadGammaSpace_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReadGammaSpace_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReadGammaSpace;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Channel_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Channel_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Channel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultValue_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DefaultValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptChannelPackSource_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GeometryScript/EditorTextureMapFunctions.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGeometryScriptChannelPackSource_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGeometryScriptChannelPackSource>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptChannelPackSource_Statics::NewProp_Texture_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/** The Texture which should be read/sourced. If null then the DefaultValue is used instead */" },
		{ "ModuleRelativePath", "Public/GeometryScript/EditorTextureMapFunctions.h" },
		{ "ToolTip", "The Texture which should be read/sourced. If null then the DefaultValue is used instead" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FGeometryScriptChannelPackSource_Statics::NewProp_Texture = { "Texture", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGeometryScriptChannelPackSource, Texture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptChannelPackSource_Statics::NewProp_Texture_MetaData), Z_Construct_UScriptStruct_FGeometryScriptChannelPackSource_Statics::NewProp_Texture_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGeometryScriptChannelPackSource_Statics::NewProp_ReadGammaSpace_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptChannelPackSource_Statics::NewProp_ReadGammaSpace_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/** If Texture is not null, this determines how the color data will be read/sourced */" },
		{ "ModuleRelativePath", "Public/GeometryScript/EditorTextureMapFunctions.h" },
		{ "ToolTip", "If Texture is not null, this determines how the color data will be read/sourced" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGeometryScriptChannelPackSource_Statics::NewProp_ReadGammaSpace = { "ReadGammaSpace", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGeometryScriptChannelPackSource, ReadGammaSpace), Z_Construct_UEnum_GeometryScriptingEditor_EGeometryScriptReadGammaSpace, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptChannelPackSource_Statics::NewProp_ReadGammaSpace_MetaData), Z_Construct_UScriptStruct_FGeometryScriptChannelPackSource_Statics::NewProp_ReadGammaSpace_MetaData) }; // 597787797
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGeometryScriptChannelPackSource_Statics::NewProp_Channel_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptChannelPackSource_Statics::NewProp_Channel_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/** If Texture is not null, this determines which channel is read/sourced */" },
		{ "ModuleRelativePath", "Public/GeometryScript/EditorTextureMapFunctions.h" },
		{ "ToolTip", "If Texture is not null, this determines which channel is read/sourced" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGeometryScriptChannelPackSource_Statics::NewProp_Channel = { "Channel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGeometryScriptChannelPackSource, Channel), Z_Construct_UEnum_GeometryScriptingEditor_EGeometryScriptRGBAChannel, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptChannelPackSource_Statics::NewProp_Channel_MetaData), Z_Construct_UScriptStruct_FGeometryScriptChannelPackSource_Statics::NewProp_Channel_MetaData) }; // 1453107169
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptChannelPackSource_Statics::NewProp_DefaultValue_MetaData[] = {
		{ "Category", "Advanced" },
		{ "Comment", "/** If Texture is null, this value is read/sourced and the Channel and ReadGammaSpace values are ignored */" },
		{ "ModuleRelativePath", "Public/GeometryScript/EditorTextureMapFunctions.h" },
		{ "ToolTip", "If Texture is null, this value is read/sourced and the Channel and ReadGammaSpace values are ignored" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGeometryScriptChannelPackSource_Statics::NewProp_DefaultValue = { "DefaultValue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGeometryScriptChannelPackSource, DefaultValue), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptChannelPackSource_Statics::NewProp_DefaultValue_MetaData), Z_Construct_UScriptStruct_FGeometryScriptChannelPackSource_Statics::NewProp_DefaultValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGeometryScriptChannelPackSource_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptChannelPackSource_Statics::NewProp_Texture,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptChannelPackSource_Statics::NewProp_ReadGammaSpace_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptChannelPackSource_Statics::NewProp_ReadGammaSpace,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptChannelPackSource_Statics::NewProp_Channel_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptChannelPackSource_Statics::NewProp_Channel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptChannelPackSource_Statics::NewProp_DefaultValue,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGeometryScriptChannelPackSource_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryScriptingEditor,
		nullptr,
		&NewStructOps,
		"GeometryScriptChannelPackSource",
		Z_Construct_UScriptStruct_FGeometryScriptChannelPackSource_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptChannelPackSource_Statics::PropPointers),
		sizeof(FGeometryScriptChannelPackSource),
		alignof(FGeometryScriptChannelPackSource),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptChannelPackSource_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGeometryScriptChannelPackSource_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptChannelPackSource_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FGeometryScriptChannelPackSource()
	{
		if (!Z_Registration_Info_UScriptStruct_GeometryScriptChannelPackSource.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GeometryScriptChannelPackSource.InnerSingleton, Z_Construct_UScriptStruct_FGeometryScriptChannelPackSource_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GeometryScriptChannelPackSource.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GeometryScriptChannelPackResult;
class UScriptStruct* FGeometryScriptChannelPackResult::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GeometryScriptChannelPackResult.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GeometryScriptChannelPackResult.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGeometryScriptChannelPackResult, (UObject*)Z_Construct_UPackage__Script_GeometryScriptingEditor(), TEXT("GeometryScriptChannelPackResult"));
	}
	return Z_Registration_Info_UScriptStruct_GeometryScriptChannelPackResult.OuterSingleton;
}
template<> GEOMETRYSCRIPTINGEDITOR_API UScriptStruct* StaticStruct<FGeometryScriptChannelPackResult>()
{
	return FGeometryScriptChannelPackResult::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGeometryScriptChannelPackResult_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Output_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Output;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptChannelPackResult_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GeometryScript/EditorTextureMapFunctions.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGeometryScriptChannelPackResult_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGeometryScriptChannelPackResult>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptChannelPackResult_Statics::NewProp_Output_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/GeometryScript/EditorTextureMapFunctions.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FGeometryScriptChannelPackResult_Statics::NewProp_Output = { "Output", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGeometryScriptChannelPackResult, Output), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptChannelPackResult_Statics::NewProp_Output_MetaData), Z_Construct_UScriptStruct_FGeometryScriptChannelPackResult_Statics::NewProp_Output_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGeometryScriptChannelPackResult_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptChannelPackResult_Statics::NewProp_Output,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGeometryScriptChannelPackResult_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryScriptingEditor,
		nullptr,
		&NewStructOps,
		"GeometryScriptChannelPackResult",
		Z_Construct_UScriptStruct_FGeometryScriptChannelPackResult_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptChannelPackResult_Statics::PropPointers),
		sizeof(FGeometryScriptChannelPackResult),
		alignof(FGeometryScriptChannelPackResult),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptChannelPackResult_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGeometryScriptChannelPackResult_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptChannelPackResult_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FGeometryScriptChannelPackResult()
	{
		if (!Z_Registration_Info_UScriptStruct_GeometryScriptChannelPackResult.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GeometryScriptChannelPackResult.InnerSingleton, Z_Construct_UScriptStruct_FGeometryScriptChannelPackResult_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GeometryScriptChannelPackResult.InnerSingleton;
	}
#if WITH_EDITOR
	DEFINE_FUNCTION(UGeometryScriptLibrary_EditorTextureMapFunctions::execChannelPack)
	{
		P_GET_STRUCT(FGeometryScriptChannelPackSource,Z_Param_RChannelSource);
		P_GET_STRUCT(FGeometryScriptChannelPackSource,Z_Param_GChannelSource);
		P_GET_STRUCT(FGeometryScriptChannelPackSource,Z_Param_BChannelSource);
		P_GET_STRUCT(FGeometryScriptChannelPackSource,Z_Param_AChannelSource);
		P_GET_UBOOL(Z_Param_OutputSRGB);
		P_GET_OBJECT(UGeometryScriptDebug,Z_Param_Debug);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FGeometryScriptChannelPackResult*)Z_Param__Result=UGeometryScriptLibrary_EditorTextureMapFunctions::ChannelPack(Z_Param_RChannelSource,Z_Param_GChannelSource,Z_Param_BChannelSource,Z_Param_AChannelSource,Z_Param_OutputSRGB,Z_Param_Debug);
		P_NATIVE_END;
	}
#endif //WITH_EDITOR
	void UGeometryScriptLibrary_EditorTextureMapFunctions::StaticRegisterNativesUGeometryScriptLibrary_EditorTextureMapFunctions()
	{
#if WITH_EDITOR
		UClass* Class = UGeometryScriptLibrary_EditorTextureMapFunctions::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ChannelPack", &UGeometryScriptLibrary_EditorTextureMapFunctions::execChannelPack },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
#endif // WITH_EDITOR
	}
#if WITH_EDITOR
	struct Z_Construct_UFunction_UGeometryScriptLibrary_EditorTextureMapFunctions_ChannelPack_Statics
	{
		struct GeometryScriptLibrary_EditorTextureMapFunctions_eventChannelPack_Parms
		{
			FGeometryScriptChannelPackSource RChannelSource;
			FGeometryScriptChannelPackSource GChannelSource;
			FGeometryScriptChannelPackSource BChannelSource;
			FGeometryScriptChannelPackSource AChannelSource;
			bool OutputSRGB;
			UGeometryScriptDebug* Debug;
			FGeometryScriptChannelPackResult ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_RChannelSource;
		static const UECodeGen_Private::FStructPropertyParams NewProp_GChannelSource;
		static const UECodeGen_Private::FStructPropertyParams NewProp_BChannelSource;
		static const UECodeGen_Private::FStructPropertyParams NewProp_AChannelSource;
		static void NewProp_OutputSRGB_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_OutputSRGB;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Debug;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_EditorTextureMapFunctions_ChannelPack_Statics::NewProp_RChannelSource = { "RChannelSource", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_EditorTextureMapFunctions_eventChannelPack_Parms, RChannelSource), Z_Construct_UScriptStruct_FGeometryScriptChannelPackSource, METADATA_PARAMS(0, nullptr) }; // 2708674762
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_EditorTextureMapFunctions_ChannelPack_Statics::NewProp_GChannelSource = { "GChannelSource", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_EditorTextureMapFunctions_eventChannelPack_Parms, GChannelSource), Z_Construct_UScriptStruct_FGeometryScriptChannelPackSource, METADATA_PARAMS(0, nullptr) }; // 2708674762
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_EditorTextureMapFunctions_ChannelPack_Statics::NewProp_BChannelSource = { "BChannelSource", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_EditorTextureMapFunctions_eventChannelPack_Parms, BChannelSource), Z_Construct_UScriptStruct_FGeometryScriptChannelPackSource, METADATA_PARAMS(0, nullptr) }; // 2708674762
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_EditorTextureMapFunctions_ChannelPack_Statics::NewProp_AChannelSource = { "AChannelSource", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_EditorTextureMapFunctions_eventChannelPack_Parms, AChannelSource), Z_Construct_UScriptStruct_FGeometryScriptChannelPackSource, METADATA_PARAMS(0, nullptr) }; // 2708674762
	void Z_Construct_UFunction_UGeometryScriptLibrary_EditorTextureMapFunctions_ChannelPack_Statics::NewProp_OutputSRGB_SetBit(void* Obj)
	{
		((GeometryScriptLibrary_EditorTextureMapFunctions_eventChannelPack_Parms*)Obj)->OutputSRGB = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_EditorTextureMapFunctions_ChannelPack_Statics::NewProp_OutputSRGB = { "OutputSRGB", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GeometryScriptLibrary_EditorTextureMapFunctions_eventChannelPack_Parms), &Z_Construct_UFunction_UGeometryScriptLibrary_EditorTextureMapFunctions_ChannelPack_Statics::NewProp_OutputSRGB_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_EditorTextureMapFunctions_ChannelPack_Statics::NewProp_Debug = { "Debug", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_EditorTextureMapFunctions_eventChannelPack_Parms, Debug), Z_Construct_UClass_UGeometryScriptDebug_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_EditorTextureMapFunctions_ChannelPack_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_EditorTextureMapFunctions_eventChannelPack_Parms, ReturnValue), Z_Construct_UScriptStruct_FGeometryScriptChannelPackResult, METADATA_PARAMS(0, nullptr) }; // 1783242011
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_EditorTextureMapFunctions_ChannelPack_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_EditorTextureMapFunctions_ChannelPack_Statics::NewProp_RChannelSource,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_EditorTextureMapFunctions_ChannelPack_Statics::NewProp_GChannelSource,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_EditorTextureMapFunctions_ChannelPack_Statics::NewProp_BChannelSource,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_EditorTextureMapFunctions_ChannelPack_Statics::NewProp_AChannelSource,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_EditorTextureMapFunctions_ChannelPack_Statics::NewProp_OutputSRGB,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_EditorTextureMapFunctions_ChannelPack_Statics::NewProp_Debug,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_EditorTextureMapFunctions_ChannelPack_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_EditorTextureMapFunctions_ChannelPack_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|TextureUtils" },
		{ "CPP_Default_Debug", "None" },
		{ "ModuleRelativePath", "Public/GeometryScript/EditorTextureMapFunctions.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_EditorTextureMapFunctions_ChannelPack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_EditorTextureMapFunctions, nullptr, "ChannelPack", nullptr, nullptr, Z_Construct_UFunction_UGeometryScriptLibrary_EditorTextureMapFunctions_ChannelPack_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_EditorTextureMapFunctions_ChannelPack_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_EditorTextureMapFunctions_ChannelPack_Statics::GeometryScriptLibrary_EditorTextureMapFunctions_eventChannelPack_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x24022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_EditorTextureMapFunctions_ChannelPack_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGeometryScriptLibrary_EditorTextureMapFunctions_ChannelPack_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_EditorTextureMapFunctions_ChannelPack_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_EditorTextureMapFunctions_ChannelPack_Statics::GeometryScriptLibrary_EditorTextureMapFunctions_eventChannelPack_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_EditorTextureMapFunctions_ChannelPack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_EditorTextureMapFunctions_ChannelPack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#endif //WITH_EDITOR
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGeometryScriptLibrary_EditorTextureMapFunctions);
	UClass* Z_Construct_UClass_UGeometryScriptLibrary_EditorTextureMapFunctions_NoRegister()
	{
		return UGeometryScriptLibrary_EditorTextureMapFunctions::StaticClass();
	}
	struct Z_Construct_UClass_UGeometryScriptLibrary_EditorTextureMapFunctions_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_EDITOR
		static const FClassFunctionLinkInfo FuncInfo[];
#endif //WITH_EDITOR
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGeometryScriptLibrary_EditorTextureMapFunctions_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryScriptingEditor,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryScriptLibrary_EditorTextureMapFunctions_Statics::DependentSingletons) < 16);
#if WITH_EDITOR
	const FClassFunctionLinkInfo Z_Construct_UClass_UGeometryScriptLibrary_EditorTextureMapFunctions_Statics::FuncInfo[] = {
#if WITH_EDITOR
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_EditorTextureMapFunctions_ChannelPack, "ChannelPack" }, // 2093347704
#endif //WITH_EDITOR
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryScriptLibrary_EditorTextureMapFunctions_Statics::FuncInfo) < 2048);
#endif //WITH_EDITOR
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeometryScriptLibrary_EditorTextureMapFunctions_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GeometryScript/EditorTextureMapFunctions.h" },
		{ "ModuleRelativePath", "Public/GeometryScript/EditorTextureMapFunctions.h" },
		{ "ScriptName", "GeometryScript_EditorTextureUtils" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGeometryScriptLibrary_EditorTextureMapFunctions_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGeometryScriptLibrary_EditorTextureMapFunctions>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGeometryScriptLibrary_EditorTextureMapFunctions_Statics::ClassParams = {
		&UGeometryScriptLibrary_EditorTextureMapFunctions::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		IF_WITH_EDITOR(FuncInfo, nullptr),
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		IF_WITH_EDITOR(UE_ARRAY_COUNT(FuncInfo), 0),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryScriptLibrary_EditorTextureMapFunctions_Statics::Class_MetaDataParams), Z_Construct_UClass_UGeometryScriptLibrary_EditorTextureMapFunctions_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UGeometryScriptLibrary_EditorTextureMapFunctions()
	{
		if (!Z_Registration_Info_UClass_UGeometryScriptLibrary_EditorTextureMapFunctions.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGeometryScriptLibrary_EditorTextureMapFunctions.OuterSingleton, Z_Construct_UClass_UGeometryScriptLibrary_EditorTextureMapFunctions_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGeometryScriptLibrary_EditorTextureMapFunctions.OuterSingleton;
	}
	template<> GEOMETRYSCRIPTINGEDITOR_API UClass* StaticClass<UGeometryScriptLibrary_EditorTextureMapFunctions>()
	{
		return UGeometryScriptLibrary_EditorTextureMapFunctions::StaticClass();
	}
	UGeometryScriptLibrary_EditorTextureMapFunctions::UGeometryScriptLibrary_EditorTextureMapFunctions(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGeometryScriptLibrary_EditorTextureMapFunctions);
	UGeometryScriptLibrary_EditorTextureMapFunctions::~UGeometryScriptLibrary_EditorTextureMapFunctions() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingEditor_Public_GeometryScript_EditorTextureMapFunctions_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingEditor_Public_GeometryScript_EditorTextureMapFunctions_h_Statics::EnumInfo[] = {
		{ EGeometryScriptRGBAChannel_StaticEnum, TEXT("EGeometryScriptRGBAChannel"), &Z_Registration_Info_UEnum_EGeometryScriptRGBAChannel, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1453107169U) },
		{ EGeometryScriptReadGammaSpace_StaticEnum, TEXT("EGeometryScriptReadGammaSpace"), &Z_Registration_Info_UEnum_EGeometryScriptReadGammaSpace, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 597787797U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingEditor_Public_GeometryScript_EditorTextureMapFunctions_h_Statics::ScriptStructInfo[] = {
		{ FGeometryScriptChannelPackSource::StaticStruct, Z_Construct_UScriptStruct_FGeometryScriptChannelPackSource_Statics::NewStructOps, TEXT("GeometryScriptChannelPackSource"), &Z_Registration_Info_UScriptStruct_GeometryScriptChannelPackSource, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGeometryScriptChannelPackSource), 2708674762U) },
		{ FGeometryScriptChannelPackResult::StaticStruct, Z_Construct_UScriptStruct_FGeometryScriptChannelPackResult_Statics::NewStructOps, TEXT("GeometryScriptChannelPackResult"), &Z_Registration_Info_UScriptStruct_GeometryScriptChannelPackResult, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGeometryScriptChannelPackResult), 1783242011U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingEditor_Public_GeometryScript_EditorTextureMapFunctions_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGeometryScriptLibrary_EditorTextureMapFunctions, UGeometryScriptLibrary_EditorTextureMapFunctions::StaticClass, TEXT("UGeometryScriptLibrary_EditorTextureMapFunctions"), &Z_Registration_Info_UClass_UGeometryScriptLibrary_EditorTextureMapFunctions, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGeometryScriptLibrary_EditorTextureMapFunctions), 2083846892U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingEditor_Public_GeometryScript_EditorTextureMapFunctions_h_55969173(TEXT("/Script/GeometryScriptingEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingEditor_Public_GeometryScript_EditorTextureMapFunctions_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingEditor_Public_GeometryScript_EditorTextureMapFunctions_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingEditor_Public_GeometryScript_EditorTextureMapFunctions_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingEditor_Public_GeometryScript_EditorTextureMapFunctions_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingEditor_Public_GeometryScript_EditorTextureMapFunctions_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingEditor_Public_GeometryScript_EditorTextureMapFunctions_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
