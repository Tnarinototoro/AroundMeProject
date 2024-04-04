// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DisplayClusterConfigurationTypes_Base.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDisplayClusterConfigurationTypes_Base() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	DISPLAYCLUSTERCONFIGURATION_API UClass* Z_Construct_UClass_UDisplayClusterConfigurationData_Base();
	DISPLAYCLUSTERCONFIGURATION_API UClass* Z_Construct_UClass_UDisplayClusterConfigurationData_Base_NoRegister();
	DISPLAYCLUSTERCONFIGURATION_API UScriptStruct* Z_Construct_UScriptStruct_FDisplayClusterConfigurationClusterItemReferenceList();
	DISPLAYCLUSTERCONFIGURATION_API UScriptStruct* Z_Construct_UScriptStruct_FDisplayClusterConfigurationPolymorphicEntity();
	DISPLAYCLUSTERCONFIGURATION_API UScriptStruct* Z_Construct_UScriptStruct_FDisplayClusterConfigurationPostprocess();
	DISPLAYCLUSTERCONFIGURATION_API UScriptStruct* Z_Construct_UScriptStruct_FDisplayClusterConfigurationProjection();
	DISPLAYCLUSTERCONFIGURATION_API UScriptStruct* Z_Construct_UScriptStruct_FDisplayClusterConfigurationRectangle();
	DISPLAYCLUSTERCONFIGURATION_API UScriptStruct* Z_Construct_UScriptStruct_FDisplayClusterReplaceTextureCropRectangle();
	DISPLAYCLUSTERCONFIGURATION_API UScriptStruct* Z_Construct_UScriptStruct_FTextureCropOrigin();
	DISPLAYCLUSTERCONFIGURATION_API UScriptStruct* Z_Construct_UScriptStruct_FTextureCropSize();
	UPackage* Z_Construct_UPackage__Script_DisplayClusterConfiguration();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TextureCropOrigin;
class UScriptStruct* FTextureCropOrigin::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TextureCropOrigin.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TextureCropOrigin.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTextureCropOrigin, (UObject*)Z_Construct_UPackage__Script_DisplayClusterConfiguration(), TEXT("TextureCropOrigin"));
	}
	return Z_Registration_Info_UScriptStruct_TextureCropOrigin.OuterSingleton;
}
template<> DISPLAYCLUSTERCONFIGURATION_API UScriptStruct* StaticStruct<FTextureCropOrigin>()
{
	return FTextureCropOrigin::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTextureCropOrigin_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_X_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_X;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Y_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Y;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTextureCropOrigin_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Texture Replace Crop Origin parameter container\n */" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/DisplayClusterConfigurationTypes_Base.h" },
		{ "ToolTip", "Texture Replace Crop Origin parameter container" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTextureCropOrigin_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTextureCropOrigin>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTextureCropOrigin_Statics::NewProp_X_MetaData[] = {
		{ "Category", "NDisplay" },
		{ "Comment", "// Replace texture origin X location, in pixels\n" },
		{ "DisplayName", "X" },
		{ "ModuleRelativePath", "Public/DisplayClusterConfigurationTypes_Base.h" },
		{ "ToolTip", "Replace texture origin X location, in pixels" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTextureCropOrigin_Statics::NewProp_X = { "X", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTextureCropOrigin, X), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTextureCropOrigin_Statics::NewProp_X_MetaData), Z_Construct_UScriptStruct_FTextureCropOrigin_Statics::NewProp_X_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTextureCropOrigin_Statics::NewProp_Y_MetaData[] = {
		{ "Category", "NDisplay" },
		{ "Comment", "// Replace texture origin Y position, in pixels\n" },
		{ "DisplayName", "Y" },
		{ "ModuleRelativePath", "Public/DisplayClusterConfigurationTypes_Base.h" },
		{ "ToolTip", "Replace texture origin Y position, in pixels" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTextureCropOrigin_Statics::NewProp_Y = { "Y", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTextureCropOrigin, Y), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTextureCropOrigin_Statics::NewProp_Y_MetaData), Z_Construct_UScriptStruct_FTextureCropOrigin_Statics::NewProp_Y_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTextureCropOrigin_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTextureCropOrigin_Statics::NewProp_X,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTextureCropOrigin_Statics::NewProp_Y,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTextureCropOrigin_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DisplayClusterConfiguration,
		nullptr,
		&NewStructOps,
		"TextureCropOrigin",
		Z_Construct_UScriptStruct_FTextureCropOrigin_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTextureCropOrigin_Statics::PropPointers),
		sizeof(FTextureCropOrigin),
		alignof(FTextureCropOrigin),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTextureCropOrigin_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTextureCropOrigin_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTextureCropOrigin_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FTextureCropOrigin()
	{
		if (!Z_Registration_Info_UScriptStruct_TextureCropOrigin.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TextureCropOrigin.InnerSingleton, Z_Construct_UScriptStruct_FTextureCropOrigin_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TextureCropOrigin.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TextureCropSize;
class UScriptStruct* FTextureCropSize::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TextureCropSize.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TextureCropSize.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTextureCropSize, (UObject*)Z_Construct_UPackage__Script_DisplayClusterConfiguration(), TEXT("TextureCropSize"));
	}
	return Z_Registration_Info_UScriptStruct_TextureCropSize.OuterSingleton;
}
template<> DISPLAYCLUSTERCONFIGURATION_API UScriptStruct* StaticStruct<FTextureCropSize>()
{
	return FTextureCropSize::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTextureCropSize_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_W_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_W;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_H_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_H;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTextureCropSize_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Texture Replace Crop Size parameter container\n */" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/DisplayClusterConfigurationTypes_Base.h" },
		{ "ToolTip", "Texture Replace Crop Size parameter container" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTextureCropSize_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTextureCropSize>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTextureCropSize_Statics::NewProp_W_MetaData[] = {
		{ "Category", "NDisplay" },
		{ "Comment", "// Replace texture crop width, in pixels\n" },
		{ "DisplayName", "W" },
		{ "ModuleRelativePath", "Public/DisplayClusterConfigurationTypes_Base.h" },
		{ "ToolTip", "Replace texture crop width, in pixels" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTextureCropSize_Statics::NewProp_W = { "W", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTextureCropSize, W), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTextureCropSize_Statics::NewProp_W_MetaData), Z_Construct_UScriptStruct_FTextureCropSize_Statics::NewProp_W_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTextureCropSize_Statics::NewProp_H_MetaData[] = {
		{ "Category", "NDisplay" },
		{ "Comment", "// Replace texture crop height, in pixels\n" },
		{ "DisplayName", "H" },
		{ "ModuleRelativePath", "Public/DisplayClusterConfigurationTypes_Base.h" },
		{ "ToolTip", "Replace texture crop height, in pixels" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTextureCropSize_Statics::NewProp_H = { "H", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTextureCropSize, H), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTextureCropSize_Statics::NewProp_H_MetaData), Z_Construct_UScriptStruct_FTextureCropSize_Statics::NewProp_H_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTextureCropSize_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTextureCropSize_Statics::NewProp_W,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTextureCropSize_Statics::NewProp_H,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTextureCropSize_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DisplayClusterConfiguration,
		nullptr,
		&NewStructOps,
		"TextureCropSize",
		Z_Construct_UScriptStruct_FTextureCropSize_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTextureCropSize_Statics::PropPointers),
		sizeof(FTextureCropSize),
		alignof(FTextureCropSize),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTextureCropSize_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTextureCropSize_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTextureCropSize_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FTextureCropSize()
	{
		if (!Z_Registration_Info_UScriptStruct_TextureCropSize.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TextureCropSize.InnerSingleton, Z_Construct_UScriptStruct_FTextureCropSize_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TextureCropSize.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DisplayClusterReplaceTextureCropRectangle;
class UScriptStruct* FDisplayClusterReplaceTextureCropRectangle::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DisplayClusterReplaceTextureCropRectangle.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DisplayClusterReplaceTextureCropRectangle.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDisplayClusterReplaceTextureCropRectangle, (UObject*)Z_Construct_UPackage__Script_DisplayClusterConfiguration(), TEXT("DisplayClusterReplaceTextureCropRectangle"));
	}
	return Z_Registration_Info_UScriptStruct_DisplayClusterReplaceTextureCropRectangle.OuterSingleton;
}
template<> DISPLAYCLUSTERCONFIGURATION_API UScriptStruct* StaticStruct<FDisplayClusterReplaceTextureCropRectangle>()
{
	return FDisplayClusterReplaceTextureCropRectangle::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDisplayClusterReplaceTextureCropRectangle_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Origin_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Origin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Size_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Size;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterReplaceTextureCropRectangle_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Texture Replace Crop parameters container\n */" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/DisplayClusterConfigurationTypes_Base.h" },
		{ "ToolTip", "Texture Replace Crop parameters container" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDisplayClusterReplaceTextureCropRectangle_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDisplayClusterReplaceTextureCropRectangle>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterReplaceTextureCropRectangle_Statics::NewProp_Origin_MetaData[] = {
		{ "Category", "NDisplay" },
		{ "Comment", "/** Texture Crop Origin */" },
		{ "DisplayName", "Texture Crop Origin" },
		{ "ModuleRelativePath", "Public/DisplayClusterConfigurationTypes_Base.h" },
		{ "ToolTip", "Texture Crop Origin" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDisplayClusterReplaceTextureCropRectangle_Statics::NewProp_Origin = { "Origin", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDisplayClusterReplaceTextureCropRectangle, Origin), Z_Construct_UScriptStruct_FTextureCropOrigin, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterReplaceTextureCropRectangle_Statics::NewProp_Origin_MetaData), Z_Construct_UScriptStruct_FDisplayClusterReplaceTextureCropRectangle_Statics::NewProp_Origin_MetaData) }; // 2219509913
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterReplaceTextureCropRectangle_Statics::NewProp_Size_MetaData[] = {
		{ "Category", "NDisplay" },
		{ "Comment", "/** Texture Crop Size */" },
		{ "DisplayName", "Texture Crop Size" },
		{ "ModuleRelativePath", "Public/DisplayClusterConfigurationTypes_Base.h" },
		{ "ToolTip", "Texture Crop Size" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDisplayClusterReplaceTextureCropRectangle_Statics::NewProp_Size = { "Size", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDisplayClusterReplaceTextureCropRectangle, Size), Z_Construct_UScriptStruct_FTextureCropSize, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterReplaceTextureCropRectangle_Statics::NewProp_Size_MetaData), Z_Construct_UScriptStruct_FDisplayClusterReplaceTextureCropRectangle_Statics::NewProp_Size_MetaData) }; // 1759201501
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDisplayClusterReplaceTextureCropRectangle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterReplaceTextureCropRectangle_Statics::NewProp_Origin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterReplaceTextureCropRectangle_Statics::NewProp_Size,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDisplayClusterReplaceTextureCropRectangle_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DisplayClusterConfiguration,
		nullptr,
		&NewStructOps,
		"DisplayClusterReplaceTextureCropRectangle",
		Z_Construct_UScriptStruct_FDisplayClusterReplaceTextureCropRectangle_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterReplaceTextureCropRectangle_Statics::PropPointers),
		sizeof(FDisplayClusterReplaceTextureCropRectangle),
		alignof(FDisplayClusterReplaceTextureCropRectangle),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterReplaceTextureCropRectangle_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDisplayClusterReplaceTextureCropRectangle_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterReplaceTextureCropRectangle_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FDisplayClusterReplaceTextureCropRectangle()
	{
		if (!Z_Registration_Info_UScriptStruct_DisplayClusterReplaceTextureCropRectangle.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DisplayClusterReplaceTextureCropRectangle.InnerSingleton, Z_Construct_UScriptStruct_FDisplayClusterReplaceTextureCropRectangle_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DisplayClusterReplaceTextureCropRectangle.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationRectangle;
class UScriptStruct* FDisplayClusterConfigurationRectangle::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationRectangle.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationRectangle.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDisplayClusterConfigurationRectangle, (UObject*)Z_Construct_UPackage__Script_DisplayClusterConfiguration(), TEXT("DisplayClusterConfigurationRectangle"));
	}
	return Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationRectangle.OuterSingleton;
}
template<> DISPLAYCLUSTERCONFIGURATION_API UScriptStruct* StaticStruct<FDisplayClusterConfigurationRectangle>()
{
	return FDisplayClusterConfigurationRectangle::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDisplayClusterConfigurationRectangle_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_X_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_X;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Y_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Y;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_W_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_W;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_H_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_H;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationRectangle_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * All configuration UObjects should inherit from this class.\n */" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/DisplayClusterConfigurationTypes_Base.h" },
		{ "ToolTip", "All configuration UObjects should inherit from this class." },
	};
#endif
	void* Z_Construct_UScriptStruct_FDisplayClusterConfigurationRectangle_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDisplayClusterConfigurationRectangle>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationRectangle_Statics::NewProp_X_MetaData[] = {
		{ "Category", "NDisplay" },
		{ "ModuleRelativePath", "Public/DisplayClusterConfigurationTypes_Base.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationRectangle_Statics::NewProp_X = { "X", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDisplayClusterConfigurationRectangle, X), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationRectangle_Statics::NewProp_X_MetaData), Z_Construct_UScriptStruct_FDisplayClusterConfigurationRectangle_Statics::NewProp_X_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationRectangle_Statics::NewProp_Y_MetaData[] = {
		{ "Category", "NDisplay" },
		{ "ModuleRelativePath", "Public/DisplayClusterConfigurationTypes_Base.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationRectangle_Statics::NewProp_Y = { "Y", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDisplayClusterConfigurationRectangle, Y), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationRectangle_Statics::NewProp_Y_MetaData), Z_Construct_UScriptStruct_FDisplayClusterConfigurationRectangle_Statics::NewProp_Y_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationRectangle_Statics::NewProp_W_MetaData[] = {
		{ "Category", "NDisplay" },
		{ "ModuleRelativePath", "Public/DisplayClusterConfigurationTypes_Base.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationRectangle_Statics::NewProp_W = { "W", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDisplayClusterConfigurationRectangle, W), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationRectangle_Statics::NewProp_W_MetaData), Z_Construct_UScriptStruct_FDisplayClusterConfigurationRectangle_Statics::NewProp_W_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationRectangle_Statics::NewProp_H_MetaData[] = {
		{ "Category", "NDisplay" },
		{ "ModuleRelativePath", "Public/DisplayClusterConfigurationTypes_Base.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationRectangle_Statics::NewProp_H = { "H", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDisplayClusterConfigurationRectangle, H), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationRectangle_Statics::NewProp_H_MetaData), Z_Construct_UScriptStruct_FDisplayClusterConfigurationRectangle_Statics::NewProp_H_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDisplayClusterConfigurationRectangle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationRectangle_Statics::NewProp_X,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationRectangle_Statics::NewProp_Y,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationRectangle_Statics::NewProp_W,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationRectangle_Statics::NewProp_H,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationRectangle_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DisplayClusterConfiguration,
		nullptr,
		&NewStructOps,
		"DisplayClusterConfigurationRectangle",
		Z_Construct_UScriptStruct_FDisplayClusterConfigurationRectangle_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationRectangle_Statics::PropPointers),
		sizeof(FDisplayClusterConfigurationRectangle),
		alignof(FDisplayClusterConfigurationRectangle),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationRectangle_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDisplayClusterConfigurationRectangle_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationRectangle_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FDisplayClusterConfigurationRectangle()
	{
		if (!Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationRectangle.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationRectangle.InnerSingleton, Z_Construct_UScriptStruct_FDisplayClusterConfigurationRectangle_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationRectangle.InnerSingleton;
	}
	void UDisplayClusterConfigurationData_Base::StaticRegisterNativesUDisplayClusterConfigurationData_Base()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDisplayClusterConfigurationData_Base);
	UClass* Z_Construct_UClass_UDisplayClusterConfigurationData_Base_NoRegister()
	{
		return UDisplayClusterConfigurationData_Base::StaticClass();
	}
	struct Z_Construct_UClass_UDisplayClusterConfigurationData_Base_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ExportedObjects_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExportedObjects_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ExportedObjects;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDisplayClusterConfigurationData_Base_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DisplayClusterConfiguration,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDisplayClusterConfigurationData_Base_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDisplayClusterConfigurationData_Base_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * All configuration UObjects should inherit from this class.\n */" },
		{ "IncludePath", "DisplayClusterConfigurationTypes_Base.h" },
		{ "ModuleRelativePath", "Public/DisplayClusterConfigurationTypes_Base.h" },
		{ "ToolTip", "All configuration UObjects should inherit from this class." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UDisplayClusterConfigurationData_Base_Statics::NewProp_ExportedObjects_Inner = { "ExportedObjects", nullptr, (EPropertyFlags)0x0004000000000008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDisplayClusterConfigurationData_Base_Statics::NewProp_ExportedObjects_MetaData[] = {
		{ "ModuleRelativePath", "Public/DisplayClusterConfigurationTypes_Base.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDisplayClusterConfigurationData_Base_Statics::NewProp_ExportedObjects = { "ExportedObjects", nullptr, (EPropertyFlags)0x0044000000000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDisplayClusterConfigurationData_Base, ExportedObjects), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDisplayClusterConfigurationData_Base_Statics::NewProp_ExportedObjects_MetaData), Z_Construct_UClass_UDisplayClusterConfigurationData_Base_Statics::NewProp_ExportedObjects_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDisplayClusterConfigurationData_Base_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDisplayClusterConfigurationData_Base_Statics::NewProp_ExportedObjects_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDisplayClusterConfigurationData_Base_Statics::NewProp_ExportedObjects,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDisplayClusterConfigurationData_Base_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDisplayClusterConfigurationData_Base>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDisplayClusterConfigurationData_Base_Statics::ClassParams = {
		&UDisplayClusterConfigurationData_Base::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDisplayClusterConfigurationData_Base_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDisplayClusterConfigurationData_Base_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDisplayClusterConfigurationData_Base_Statics::Class_MetaDataParams), Z_Construct_UClass_UDisplayClusterConfigurationData_Base_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDisplayClusterConfigurationData_Base_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UDisplayClusterConfigurationData_Base()
	{
		if (!Z_Registration_Info_UClass_UDisplayClusterConfigurationData_Base.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDisplayClusterConfigurationData_Base.OuterSingleton, Z_Construct_UClass_UDisplayClusterConfigurationData_Base_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDisplayClusterConfigurationData_Base.OuterSingleton;
	}
	template<> DISPLAYCLUSTERCONFIGURATION_API UClass* StaticClass<UDisplayClusterConfigurationData_Base>()
	{
		return UDisplayClusterConfigurationData_Base::StaticClass();
	}
	UDisplayClusterConfigurationData_Base::UDisplayClusterConfigurationData_Base(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDisplayClusterConfigurationData_Base);
	UDisplayClusterConfigurationData_Base::~UDisplayClusterConfigurationData_Base() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UDisplayClusterConfigurationData_Base)
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationPolymorphicEntity;
class UScriptStruct* FDisplayClusterConfigurationPolymorphicEntity::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationPolymorphicEntity.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationPolymorphicEntity.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDisplayClusterConfigurationPolymorphicEntity, (UObject*)Z_Construct_UPackage__Script_DisplayClusterConfiguration(), TEXT("DisplayClusterConfigurationPolymorphicEntity"));
	}
	return Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationPolymorphicEntity.OuterSingleton;
}
template<> DISPLAYCLUSTERCONFIGURATION_API UScriptStruct* StaticStruct<FDisplayClusterConfigurationPolymorphicEntity>()
{
	return FDisplayClusterConfigurationPolymorphicEntity::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDisplayClusterConfigurationPolymorphicEntity_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Type;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Parameters_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Parameters_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Parameters_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_Parameters;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsCustom_MetaData[];
#endif
		static void NewProp_bIsCustom_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsCustom;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationPolymorphicEntity_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/DisplayClusterConfigurationTypes_Base.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDisplayClusterConfigurationPolymorphicEntity_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDisplayClusterConfigurationPolymorphicEntity>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationPolymorphicEntity_Statics::NewProp_Type_MetaData[] = {
		{ "Category", "NDisplay" },
		{ "Comment", "// Polymorphic entity type\n" },
		{ "ModuleRelativePath", "Public/DisplayClusterConfigurationTypes_Base.h" },
		{ "ToolTip", "Polymorphic entity type" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationPolymorphicEntity_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDisplayClusterConfigurationPolymorphicEntity, Type), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationPolymorphicEntity_Statics::NewProp_Type_MetaData), Z_Construct_UScriptStruct_FDisplayClusterConfigurationPolymorphicEntity_Statics::NewProp_Type_MetaData) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationPolymorphicEntity_Statics::NewProp_Parameters_ValueProp = { "Parameters", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationPolymorphicEntity_Statics::NewProp_Parameters_Key_KeyProp = { "Parameters_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationPolymorphicEntity_Statics::NewProp_Parameters_MetaData[] = {
		{ "Category", "NDisplay" },
		{ "Comment", "// Generic parameters map\n" },
		{ "ModuleRelativePath", "Public/DisplayClusterConfigurationTypes_Base.h" },
		{ "ToolTip", "Generic parameters map" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationPolymorphicEntity_Statics::NewProp_Parameters = { "Parameters", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDisplayClusterConfigurationPolymorphicEntity, Parameters), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationPolymorphicEntity_Statics::NewProp_Parameters_MetaData), Z_Construct_UScriptStruct_FDisplayClusterConfigurationPolymorphicEntity_Statics::NewProp_Parameters_MetaData) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationPolymorphicEntity_Statics::NewProp_bIsCustom_MetaData[] = {
		{ "Category", "NDisplay" },
		{ "Comment", "/**\n\x09 * When a custom policy is selected from the details panel.\n\x09 * This is needed in the event a custom policy is selected\n\x09 * but the custom type is a default policy. This allows users\n\x09 * to further customize default policies if necessary.\n\x09 *\n\x09 * EditAnywhere is required so we can manipulate the property\n\x09 * through a handle. Details will hide it from showing.\n\x09 */" },
		{ "ModuleRelativePath", "Public/DisplayClusterConfigurationTypes_Base.h" },
		{ "ToolTip", "When a custom policy is selected from the details panel.\nThis is needed in the event a custom policy is selected\nbut the custom type is a default policy. This allows users\nto further customize default policies if necessary.\n\nEditAnywhere is required so we can manipulate the property\nthrough a handle. Details will hide it from showing." },
	};
#endif
	void Z_Construct_UScriptStruct_FDisplayClusterConfigurationPolymorphicEntity_Statics::NewProp_bIsCustom_SetBit(void* Obj)
	{
		((FDisplayClusterConfigurationPolymorphicEntity*)Obj)->bIsCustom = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationPolymorphicEntity_Statics::NewProp_bIsCustom = { "bIsCustom", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FDisplayClusterConfigurationPolymorphicEntity), &Z_Construct_UScriptStruct_FDisplayClusterConfigurationPolymorphicEntity_Statics::NewProp_bIsCustom_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationPolymorphicEntity_Statics::NewProp_bIsCustom_MetaData), Z_Construct_UScriptStruct_FDisplayClusterConfigurationPolymorphicEntity_Statics::NewProp_bIsCustom_MetaData) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDisplayClusterConfigurationPolymorphicEntity_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationPolymorphicEntity_Statics::NewProp_Type,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationPolymorphicEntity_Statics::NewProp_Parameters_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationPolymorphicEntity_Statics::NewProp_Parameters_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationPolymorphicEntity_Statics::NewProp_Parameters,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationPolymorphicEntity_Statics::NewProp_bIsCustom,
#endif // WITH_EDITORONLY_DATA
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationPolymorphicEntity_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DisplayClusterConfiguration,
		nullptr,
		&NewStructOps,
		"DisplayClusterConfigurationPolymorphicEntity",
		Z_Construct_UScriptStruct_FDisplayClusterConfigurationPolymorphicEntity_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationPolymorphicEntity_Statics::PropPointers),
		sizeof(FDisplayClusterConfigurationPolymorphicEntity),
		alignof(FDisplayClusterConfigurationPolymorphicEntity),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationPolymorphicEntity_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDisplayClusterConfigurationPolymorphicEntity_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationPolymorphicEntity_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FDisplayClusterConfigurationPolymorphicEntity()
	{
		if (!Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationPolymorphicEntity.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationPolymorphicEntity.InnerSingleton, Z_Construct_UScriptStruct_FDisplayClusterConfigurationPolymorphicEntity_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationPolymorphicEntity.InnerSingleton;
	}

static_assert(std::is_polymorphic<FDisplayClusterConfigurationProjection>() == std::is_polymorphic<FDisplayClusterConfigurationPolymorphicEntity>(), "USTRUCT FDisplayClusterConfigurationProjection cannot be polymorphic unless super FDisplayClusterConfigurationPolymorphicEntity is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationProjection;
class UScriptStruct* FDisplayClusterConfigurationProjection::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationProjection.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationProjection.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDisplayClusterConfigurationProjection, (UObject*)Z_Construct_UPackage__Script_DisplayClusterConfiguration(), TEXT("DisplayClusterConfigurationProjection"));
	}
	return Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationProjection.OuterSingleton;
}
template<> DISPLAYCLUSTERCONFIGURATION_API UScriptStruct* StaticStruct<FDisplayClusterConfigurationProjection>()
{
	return FDisplayClusterConfigurationProjection::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDisplayClusterConfigurationProjection_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationProjection_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/DisplayClusterConfigurationTypes_Base.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDisplayClusterConfigurationProjection_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDisplayClusterConfigurationProjection>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationProjection_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DisplayClusterConfiguration,
		Z_Construct_UScriptStruct_FDisplayClusterConfigurationPolymorphicEntity,
		&NewStructOps,
		"DisplayClusterConfigurationProjection",
		nullptr,
		0,
		sizeof(FDisplayClusterConfigurationProjection),
		alignof(FDisplayClusterConfigurationProjection),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationProjection_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDisplayClusterConfigurationProjection_Statics::Struct_MetaDataParams)
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDisplayClusterConfigurationProjection()
	{
		if (!Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationProjection.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationProjection.InnerSingleton, Z_Construct_UScriptStruct_FDisplayClusterConfigurationProjection_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationProjection.InnerSingleton;
	}

static_assert(std::is_polymorphic<FDisplayClusterConfigurationPostprocess>() == std::is_polymorphic<FDisplayClusterConfigurationPolymorphicEntity>(), "USTRUCT FDisplayClusterConfigurationPostprocess cannot be polymorphic unless super FDisplayClusterConfigurationPolymorphicEntity is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationPostprocess;
class UScriptStruct* FDisplayClusterConfigurationPostprocess::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationPostprocess.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationPostprocess.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDisplayClusterConfigurationPostprocess, (UObject*)Z_Construct_UPackage__Script_DisplayClusterConfiguration(), TEXT("DisplayClusterConfigurationPostprocess"));
	}
	return Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationPostprocess.OuterSingleton;
}
template<> DISPLAYCLUSTERCONFIGURATION_API UScriptStruct* StaticStruct<FDisplayClusterConfigurationPostprocess>()
{
	return FDisplayClusterConfigurationPostprocess::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDisplayClusterConfigurationPostprocess_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Order_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Order;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationPostprocess_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/DisplayClusterConfigurationTypes_Base.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDisplayClusterConfigurationPostprocess_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDisplayClusterConfigurationPostprocess>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationPostprocess_Statics::NewProp_Order_MetaData[] = {
		{ "Category", "NDisplay" },
		{ "Comment", "// Control postprocess rendering order. Bigger value rendered last\n" },
		{ "ModuleRelativePath", "Public/DisplayClusterConfigurationTypes_Base.h" },
		{ "ToolTip", "Control postprocess rendering order. Bigger value rendered last" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationPostprocess_Statics::NewProp_Order = { "Order", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDisplayClusterConfigurationPostprocess, Order), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationPostprocess_Statics::NewProp_Order_MetaData), Z_Construct_UScriptStruct_FDisplayClusterConfigurationPostprocess_Statics::NewProp_Order_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDisplayClusterConfigurationPostprocess_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationPostprocess_Statics::NewProp_Order,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationPostprocess_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DisplayClusterConfiguration,
		Z_Construct_UScriptStruct_FDisplayClusterConfigurationPolymorphicEntity,
		&NewStructOps,
		"DisplayClusterConfigurationPostprocess",
		Z_Construct_UScriptStruct_FDisplayClusterConfigurationPostprocess_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationPostprocess_Statics::PropPointers),
		sizeof(FDisplayClusterConfigurationPostprocess),
		alignof(FDisplayClusterConfigurationPostprocess),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationPostprocess_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDisplayClusterConfigurationPostprocess_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationPostprocess_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FDisplayClusterConfigurationPostprocess()
	{
		if (!Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationPostprocess.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationPostprocess.InnerSingleton, Z_Construct_UScriptStruct_FDisplayClusterConfigurationPostprocess_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationPostprocess.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationClusterItemReferenceList;
class UScriptStruct* FDisplayClusterConfigurationClusterItemReferenceList::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationClusterItemReferenceList.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationClusterItemReferenceList.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDisplayClusterConfigurationClusterItemReferenceList, (UObject*)Z_Construct_UPackage__Script_DisplayClusterConfiguration(), TEXT("DisplayClusterConfigurationClusterItemReferenceList"));
	}
	return Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationClusterItemReferenceList.OuterSingleton;
}
template<> DISPLAYCLUSTERCONFIGURATION_API UScriptStruct* StaticStruct<FDisplayClusterConfigurationClusterItemReferenceList>()
{
	return FDisplayClusterConfigurationClusterItemReferenceList::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDisplayClusterConfigurationClusterItemReferenceList_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStrPropertyParams NewProp_ItemNames_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ItemNames_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ItemNames;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationClusterItemReferenceList_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DisplayClusterConfigurationTypes_Base.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDisplayClusterConfigurationClusterItemReferenceList_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDisplayClusterConfigurationClusterItemReferenceList>();
	}
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationClusterItemReferenceList_Statics::NewProp_ItemNames_Inner = { "ItemNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationClusterItemReferenceList_Statics::NewProp_ItemNames_MetaData[] = {
		{ "Category", "NDisplay" },
		{ "ModuleRelativePath", "Public/DisplayClusterConfigurationTypes_Base.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationClusterItemReferenceList_Statics::NewProp_ItemNames = { "ItemNames", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDisplayClusterConfigurationClusterItemReferenceList, ItemNames), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationClusterItemReferenceList_Statics::NewProp_ItemNames_MetaData), Z_Construct_UScriptStruct_FDisplayClusterConfigurationClusterItemReferenceList_Statics::NewProp_ItemNames_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDisplayClusterConfigurationClusterItemReferenceList_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationClusterItemReferenceList_Statics::NewProp_ItemNames_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationClusterItemReferenceList_Statics::NewProp_ItemNames,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationClusterItemReferenceList_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DisplayClusterConfiguration,
		nullptr,
		&NewStructOps,
		"DisplayClusterConfigurationClusterItemReferenceList",
		Z_Construct_UScriptStruct_FDisplayClusterConfigurationClusterItemReferenceList_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationClusterItemReferenceList_Statics::PropPointers),
		sizeof(FDisplayClusterConfigurationClusterItemReferenceList),
		alignof(FDisplayClusterConfigurationClusterItemReferenceList),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationClusterItemReferenceList_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDisplayClusterConfigurationClusterItemReferenceList_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationClusterItemReferenceList_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FDisplayClusterConfigurationClusterItemReferenceList()
	{
		if (!Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationClusterItemReferenceList.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationClusterItemReferenceList.InnerSingleton, Z_Construct_UScriptStruct_FDisplayClusterConfigurationClusterItemReferenceList_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationClusterItemReferenceList.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterConfiguration_Public_DisplayClusterConfigurationTypes_Base_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterConfiguration_Public_DisplayClusterConfigurationTypes_Base_h_Statics::ScriptStructInfo[] = {
		{ FTextureCropOrigin::StaticStruct, Z_Construct_UScriptStruct_FTextureCropOrigin_Statics::NewStructOps, TEXT("TextureCropOrigin"), &Z_Registration_Info_UScriptStruct_TextureCropOrigin, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTextureCropOrigin), 2219509913U) },
		{ FTextureCropSize::StaticStruct, Z_Construct_UScriptStruct_FTextureCropSize_Statics::NewStructOps, TEXT("TextureCropSize"), &Z_Registration_Info_UScriptStruct_TextureCropSize, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTextureCropSize), 1759201501U) },
		{ FDisplayClusterReplaceTextureCropRectangle::StaticStruct, Z_Construct_UScriptStruct_FDisplayClusterReplaceTextureCropRectangle_Statics::NewStructOps, TEXT("DisplayClusterReplaceTextureCropRectangle"), &Z_Registration_Info_UScriptStruct_DisplayClusterReplaceTextureCropRectangle, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDisplayClusterReplaceTextureCropRectangle), 1029601502U) },
		{ FDisplayClusterConfigurationRectangle::StaticStruct, Z_Construct_UScriptStruct_FDisplayClusterConfigurationRectangle_Statics::NewStructOps, TEXT("DisplayClusterConfigurationRectangle"), &Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationRectangle, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDisplayClusterConfigurationRectangle), 3384028425U) },
		{ FDisplayClusterConfigurationPolymorphicEntity::StaticStruct, Z_Construct_UScriptStruct_FDisplayClusterConfigurationPolymorphicEntity_Statics::NewStructOps, TEXT("DisplayClusterConfigurationPolymorphicEntity"), &Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationPolymorphicEntity, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDisplayClusterConfigurationPolymorphicEntity), 2433691855U) },
		{ FDisplayClusterConfigurationProjection::StaticStruct, Z_Construct_UScriptStruct_FDisplayClusterConfigurationProjection_Statics::NewStructOps, TEXT("DisplayClusterConfigurationProjection"), &Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationProjection, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDisplayClusterConfigurationProjection), 409755187U) },
		{ FDisplayClusterConfigurationPostprocess::StaticStruct, Z_Construct_UScriptStruct_FDisplayClusterConfigurationPostprocess_Statics::NewStructOps, TEXT("DisplayClusterConfigurationPostprocess"), &Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationPostprocess, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDisplayClusterConfigurationPostprocess), 2684948724U) },
		{ FDisplayClusterConfigurationClusterItemReferenceList::StaticStruct, Z_Construct_UScriptStruct_FDisplayClusterConfigurationClusterItemReferenceList_Statics::NewStructOps, TEXT("DisplayClusterConfigurationClusterItemReferenceList"), &Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationClusterItemReferenceList, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDisplayClusterConfigurationClusterItemReferenceList), 2884719261U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterConfiguration_Public_DisplayClusterConfigurationTypes_Base_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDisplayClusterConfigurationData_Base, UDisplayClusterConfigurationData_Base::StaticClass, TEXT("UDisplayClusterConfigurationData_Base"), &Z_Registration_Info_UClass_UDisplayClusterConfigurationData_Base, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDisplayClusterConfigurationData_Base), 2335028703U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterConfiguration_Public_DisplayClusterConfigurationTypes_Base_h_2720268757(TEXT("/Script/DisplayClusterConfiguration"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterConfiguration_Public_DisplayClusterConfigurationTypes_Base_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterConfiguration_Public_DisplayClusterConfigurationTypes_Base_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterConfiguration_Public_DisplayClusterConfigurationTypes_Base_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterConfiguration_Public_DisplayClusterConfigurationTypes_Base_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
