// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OpenColorIOColorTransform.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOpenColorIOColorTransform() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_UTexture_NoRegister();
	OPENCOLORIO_API UClass* Z_Construct_UClass_UOpenColorIOColorTransform();
	OPENCOLORIO_API UClass* Z_Construct_UClass_UOpenColorIOColorTransform_NoRegister();
	OPENCOLORIO_API UClass* Z_Construct_UClass_UOpenColorIOConfiguration_NoRegister();
	OPENCOLORIO_API UEnum* Z_Construct_UEnum_OpenColorIO_EOpenColorIOViewTransformDirection();
	UPackage* Z_Construct_UPackage__Script_OpenColorIO();
// End Cross Module References
	void UOpenColorIOColorTransform::StaticRegisterNativesUOpenColorIOColorTransform()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOpenColorIOColorTransform);
	UClass* Z_Construct_UClass_UOpenColorIOColorTransform_NoRegister()
	{
		return UOpenColorIOColorTransform::StaticClass();
	}
	struct Z_Construct_UClass_UOpenColorIOColorTransform_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConfigurationOwner_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ConfigurationOwner;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsDisplayViewType_MetaData[];
#endif
		static void NewProp_bIsDisplayViewType_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsDisplayViewType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceColorSpace_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SourceColorSpace;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DestinationColorSpace_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DestinationColorSpace;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Display_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Display;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_View_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_View;
		static const UECodeGen_Private::FBytePropertyParams NewProp_DisplayViewDirection_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DisplayViewDirection_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_DisplayViewDirection;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Textures_ValueProp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Textures_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Textures_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_Textures;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GeneratedShaderHash_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_GeneratedShaderHash;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GeneratedShader_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_GeneratedShader;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOpenColorIOColorTransform_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_OpenColorIO,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOpenColorIOColorTransform_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOpenColorIOColorTransform_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Object used to generate shader and LUTs from OCIO configuration file and contain required resource to make a color space transform.\n */" },
		{ "IncludePath", "OpenColorIOColorTransform.h" },
		{ "ModuleRelativePath", "Public/OpenColorIOColorTransform.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Object used to generate shader and LUTs from OCIO configuration file and contain required resource to make a color space transform." },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOpenColorIOColorTransform_Statics::NewProp_ConfigurationOwner_MetaData[] = {
		{ "DeprecatedProperty", "" },
		{ "ModuleRelativePath", "Public/OpenColorIOColorTransform.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UOpenColorIOColorTransform_Statics::NewProp_ConfigurationOwner = { "ConfigurationOwner", nullptr, (EPropertyFlags)0x0014000820002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOpenColorIOColorTransform, ConfigurationOwner_DEPRECATED), Z_Construct_UClass_UOpenColorIOConfiguration_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOpenColorIOColorTransform_Statics::NewProp_ConfigurationOwner_MetaData), Z_Construct_UClass_UOpenColorIOColorTransform_Statics::NewProp_ConfigurationOwner_MetaData) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOpenColorIOColorTransform_Statics::NewProp_bIsDisplayViewType_MetaData[] = {
		{ "Category", "ColorSpace" },
		{ "ModuleRelativePath", "Public/OpenColorIOColorTransform.h" },
	};
#endif
	void Z_Construct_UClass_UOpenColorIOColorTransform_Statics::NewProp_bIsDisplayViewType_SetBit(void* Obj)
	{
		((UOpenColorIOColorTransform*)Obj)->bIsDisplayViewType = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOpenColorIOColorTransform_Statics::NewProp_bIsDisplayViewType = { "bIsDisplayViewType", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOpenColorIOColorTransform), &Z_Construct_UClass_UOpenColorIOColorTransform_Statics::NewProp_bIsDisplayViewType_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOpenColorIOColorTransform_Statics::NewProp_bIsDisplayViewType_MetaData), Z_Construct_UClass_UOpenColorIOColorTransform_Statics::NewProp_bIsDisplayViewType_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOpenColorIOColorTransform_Statics::NewProp_SourceColorSpace_MetaData[] = {
		{ "Category", "ColorSpace" },
		{ "ModuleRelativePath", "Public/OpenColorIOColorTransform.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UOpenColorIOColorTransform_Statics::NewProp_SourceColorSpace = { "SourceColorSpace", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOpenColorIOColorTransform, SourceColorSpace), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOpenColorIOColorTransform_Statics::NewProp_SourceColorSpace_MetaData), Z_Construct_UClass_UOpenColorIOColorTransform_Statics::NewProp_SourceColorSpace_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOpenColorIOColorTransform_Statics::NewProp_DestinationColorSpace_MetaData[] = {
		{ "Category", "ColorSpace" },
		{ "ModuleRelativePath", "Public/OpenColorIOColorTransform.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UOpenColorIOColorTransform_Statics::NewProp_DestinationColorSpace = { "DestinationColorSpace", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOpenColorIOColorTransform, DestinationColorSpace), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOpenColorIOColorTransform_Statics::NewProp_DestinationColorSpace_MetaData), Z_Construct_UClass_UOpenColorIOColorTransform_Statics::NewProp_DestinationColorSpace_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOpenColorIOColorTransform_Statics::NewProp_Display_MetaData[] = {
		{ "Category", "ColorSpace" },
		{ "ModuleRelativePath", "Public/OpenColorIOColorTransform.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UOpenColorIOColorTransform_Statics::NewProp_Display = { "Display", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOpenColorIOColorTransform, Display), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOpenColorIOColorTransform_Statics::NewProp_Display_MetaData), Z_Construct_UClass_UOpenColorIOColorTransform_Statics::NewProp_Display_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOpenColorIOColorTransform_Statics::NewProp_View_MetaData[] = {
		{ "Category", "ColorSpace" },
		{ "ModuleRelativePath", "Public/OpenColorIOColorTransform.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UOpenColorIOColorTransform_Statics::NewProp_View = { "View", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOpenColorIOColorTransform, View), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOpenColorIOColorTransform_Statics::NewProp_View_MetaData), Z_Construct_UClass_UOpenColorIOColorTransform_Statics::NewProp_View_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UOpenColorIOColorTransform_Statics::NewProp_DisplayViewDirection_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOpenColorIOColorTransform_Statics::NewProp_DisplayViewDirection_MetaData[] = {
		{ "Category", "ColorSpace" },
		{ "ModuleRelativePath", "Public/OpenColorIOColorTransform.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UOpenColorIOColorTransform_Statics::NewProp_DisplayViewDirection = { "DisplayViewDirection", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOpenColorIOColorTransform, DisplayViewDirection), Z_Construct_UEnum_OpenColorIO_EOpenColorIOViewTransformDirection, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOpenColorIOColorTransform_Statics::NewProp_DisplayViewDirection_MetaData), Z_Construct_UClass_UOpenColorIOColorTransform_Statics::NewProp_DisplayViewDirection_MetaData) }; // 2559385136
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UOpenColorIOColorTransform_Statics::NewProp_Textures_ValueProp = { "Textures", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UOpenColorIOColorTransform_Statics::NewProp_Textures_Key_KeyProp = { "Textures_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOpenColorIOColorTransform_Statics::NewProp_Textures_MetaData[] = {
		{ "Comment", "/** If the color space requires textures, this will contains the data to do the transform */" },
		{ "ModuleRelativePath", "Public/OpenColorIOColorTransform.h" },
		{ "ToolTip", "If the color space requires textures, this will contains the data to do the transform" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UOpenColorIOColorTransform_Statics::NewProp_Textures = { "Textures", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOpenColorIOColorTransform, Textures), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOpenColorIOColorTransform_Statics::NewProp_Textures_MetaData), Z_Construct_UClass_UOpenColorIOColorTransform_Statics::NewProp_Textures_MetaData) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOpenColorIOColorTransform_Statics::NewProp_GeneratedShaderHash_MetaData[] = {
		{ "Comment", "/** Generated transform shader hash. */" },
		{ "ModuleRelativePath", "Public/OpenColorIOColorTransform.h" },
		{ "ToolTip", "Generated transform shader hash." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UOpenColorIOColorTransform_Statics::NewProp_GeneratedShaderHash = { "GeneratedShaderHash", nullptr, (EPropertyFlags)0x0040000800000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOpenColorIOColorTransform, GeneratedShaderHash), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOpenColorIOColorTransform_Statics::NewProp_GeneratedShaderHash_MetaData), Z_Construct_UClass_UOpenColorIOColorTransform_Statics::NewProp_GeneratedShaderHash_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOpenColorIOColorTransform_Statics::NewProp_GeneratedShader_MetaData[] = {
		{ "Comment", "/** Generated transform shader function. */" },
		{ "ModuleRelativePath", "Public/OpenColorIOColorTransform.h" },
		{ "ToolTip", "Generated transform shader function." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UOpenColorIOColorTransform_Statics::NewProp_GeneratedShader = { "GeneratedShader", nullptr, (EPropertyFlags)0x0040000800000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOpenColorIOColorTransform, GeneratedShader), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOpenColorIOColorTransform_Statics::NewProp_GeneratedShader_MetaData), Z_Construct_UClass_UOpenColorIOColorTransform_Statics::NewProp_GeneratedShader_MetaData) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOpenColorIOColorTransform_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOpenColorIOColorTransform_Statics::NewProp_ConfigurationOwner,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOpenColorIOColorTransform_Statics::NewProp_bIsDisplayViewType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOpenColorIOColorTransform_Statics::NewProp_SourceColorSpace,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOpenColorIOColorTransform_Statics::NewProp_DestinationColorSpace,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOpenColorIOColorTransform_Statics::NewProp_Display,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOpenColorIOColorTransform_Statics::NewProp_View,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOpenColorIOColorTransform_Statics::NewProp_DisplayViewDirection_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOpenColorIOColorTransform_Statics::NewProp_DisplayViewDirection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOpenColorIOColorTransform_Statics::NewProp_Textures_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOpenColorIOColorTransform_Statics::NewProp_Textures_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOpenColorIOColorTransform_Statics::NewProp_Textures,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOpenColorIOColorTransform_Statics::NewProp_GeneratedShaderHash,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOpenColorIOColorTransform_Statics::NewProp_GeneratedShader,
#endif // WITH_EDITORONLY_DATA
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOpenColorIOColorTransform_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOpenColorIOColorTransform>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOpenColorIOColorTransform_Statics::ClassParams = {
		&UOpenColorIOColorTransform::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UOpenColorIOColorTransform_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UOpenColorIOColorTransform_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOpenColorIOColorTransform_Statics::Class_MetaDataParams), Z_Construct_UClass_UOpenColorIOColorTransform_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOpenColorIOColorTransform_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UOpenColorIOColorTransform()
	{
		if (!Z_Registration_Info_UClass_UOpenColorIOColorTransform.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOpenColorIOColorTransform.OuterSingleton, Z_Construct_UClass_UOpenColorIOColorTransform_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOpenColorIOColorTransform.OuterSingleton;
	}
	template<> OPENCOLORIO_API UClass* StaticClass<UOpenColorIOColorTransform>()
	{
		return UOpenColorIOColorTransform::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOpenColorIOColorTransform);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UOpenColorIOColorTransform)
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Compositing_OpenColorIO_Source_OpenColorIO_Public_OpenColorIOColorTransform_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Compositing_OpenColorIO_Source_OpenColorIO_Public_OpenColorIOColorTransform_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UOpenColorIOColorTransform, UOpenColorIOColorTransform::StaticClass, TEXT("UOpenColorIOColorTransform"), &Z_Registration_Info_UClass_UOpenColorIOColorTransform, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOpenColorIOColorTransform), 878681668U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Compositing_OpenColorIO_Source_OpenColorIO_Public_OpenColorIOColorTransform_h_2826087134(TEXT("/Script/OpenColorIO"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Compositing_OpenColorIO_Source_OpenColorIO_Public_OpenColorIOColorTransform_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Compositing_OpenColorIO_Source_OpenColorIO_Public_OpenColorIOColorTransform_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
