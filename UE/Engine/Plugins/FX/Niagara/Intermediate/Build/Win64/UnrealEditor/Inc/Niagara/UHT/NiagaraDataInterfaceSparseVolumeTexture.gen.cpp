// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NiagaraDataInterfaceSparseVolumeTexture.h"
#include "../Public/NiagaraCommon.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraDataInterfaceSparseVolumeTexture() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_USparseVolumeTexture_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterface();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceSparseVolumeTexture();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceSparseVolumeTexture_NoRegister();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraUserParameterBinding();
	UPackage* Z_Construct_UPackage__Script_Niagara();
// End Cross Module References
	void UNiagaraDataInterfaceSparseVolumeTexture::StaticRegisterNativesUNiagaraDataInterfaceSparseVolumeTexture()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraDataInterfaceSparseVolumeTexture);
	UClass* Z_Construct_UClass_UNiagaraDataInterfaceSparseVolumeTexture_NoRegister()
	{
		return UNiagaraDataInterfaceSparseVolumeTexture::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraDataInterfaceSparseVolumeTexture_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SparseVolumeTexture_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SparseVolumeTexture;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SparseVolumeTextureUserParameter_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SparseVolumeTextureUserParameter;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraDataInterfaceSparseVolumeTexture_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNiagaraDataInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceSparseVolumeTexture_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceSparseVolumeTexture_Statics::Class_MetaDataParams[] = {
		{ "Category", "Texture" },
		{ "Comment", "/** Data Interface allowing sampling of a sparse volume texture */" },
		{ "DisplayName", "Sparse Volume Texture Sample" },
		{ "IncludePath", "NiagaraDataInterfaceSparseVolumeTexture.h" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceSparseVolumeTexture.h" },
		{ "ToolTip", "Data Interface allowing sampling of a sparse volume texture" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceSparseVolumeTexture_Statics::NewProp_SparseVolumeTexture_MetaData[] = {
		{ "Category", "SparseVolumeTexture" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceSparseVolumeTexture.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceSparseVolumeTexture_Statics::NewProp_SparseVolumeTexture = { "SparseVolumeTexture", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraDataInterfaceSparseVolumeTexture, SparseVolumeTexture), Z_Construct_UClass_USparseVolumeTexture_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceSparseVolumeTexture_Statics::NewProp_SparseVolumeTexture_MetaData), Z_Construct_UClass_UNiagaraDataInterfaceSparseVolumeTexture_Statics::NewProp_SparseVolumeTexture_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceSparseVolumeTexture_Statics::NewProp_SparseVolumeTextureUserParameter_MetaData[] = {
		{ "Category", "SparseVolumeTexture" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceSparseVolumeTexture.h" },
		{ "ToolTip", "When valid the user parameter is used as the texture rather than the one on the data interface" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceSparseVolumeTexture_Statics::NewProp_SparseVolumeTextureUserParameter = { "SparseVolumeTextureUserParameter", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraDataInterfaceSparseVolumeTexture, SparseVolumeTextureUserParameter), Z_Construct_UScriptStruct_FNiagaraUserParameterBinding, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceSparseVolumeTexture_Statics::NewProp_SparseVolumeTextureUserParameter_MetaData), Z_Construct_UClass_UNiagaraDataInterfaceSparseVolumeTexture_Statics::NewProp_SparseVolumeTextureUserParameter_MetaData) }; // 4146958699
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraDataInterfaceSparseVolumeTexture_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceSparseVolumeTexture_Statics::NewProp_SparseVolumeTexture,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceSparseVolumeTexture_Statics::NewProp_SparseVolumeTextureUserParameter,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraDataInterfaceSparseVolumeTexture_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraDataInterfaceSparseVolumeTexture>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraDataInterfaceSparseVolumeTexture_Statics::ClassParams = {
		&UNiagaraDataInterfaceSparseVolumeTexture::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UNiagaraDataInterfaceSparseVolumeTexture_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceSparseVolumeTexture_Statics::PropPointers),
		0,
		0x000830A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceSparseVolumeTexture_Statics::Class_MetaDataParams), Z_Construct_UClass_UNiagaraDataInterfaceSparseVolumeTexture_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceSparseVolumeTexture_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UNiagaraDataInterfaceSparseVolumeTexture()
	{
		if (!Z_Registration_Info_UClass_UNiagaraDataInterfaceSparseVolumeTexture.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraDataInterfaceSparseVolumeTexture.OuterSingleton, Z_Construct_UClass_UNiagaraDataInterfaceSparseVolumeTexture_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNiagaraDataInterfaceSparseVolumeTexture.OuterSingleton;
	}
	template<> NIAGARA_API UClass* StaticClass<UNiagaraDataInterfaceSparseVolumeTexture>()
	{
		return UNiagaraDataInterfaceSparseVolumeTexture::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraDataInterfaceSparseVolumeTexture);
	UNiagaraDataInterfaceSparseVolumeTexture::~UNiagaraDataInterfaceSparseVolumeTexture() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UNiagaraDataInterfaceSparseVolumeTexture)
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceSparseVolumeTexture_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceSparseVolumeTexture_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNiagaraDataInterfaceSparseVolumeTexture, UNiagaraDataInterfaceSparseVolumeTexture::StaticClass, TEXT("UNiagaraDataInterfaceSparseVolumeTexture"), &Z_Registration_Info_UClass_UNiagaraDataInterfaceSparseVolumeTexture, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraDataInterfaceSparseVolumeTexture), 601737484U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceSparseVolumeTexture_h_2370269052(TEXT("/Script/Niagara"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceSparseVolumeTexture_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceSparseVolumeTexture_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
