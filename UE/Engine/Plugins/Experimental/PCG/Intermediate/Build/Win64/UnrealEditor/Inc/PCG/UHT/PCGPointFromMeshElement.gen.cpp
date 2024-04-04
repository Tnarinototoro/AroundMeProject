// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Elements/PCGPointFromMeshElement.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePCGPointFromMeshElement() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	PCG_API UClass* Z_Construct_UClass_UPCGPointFromMeshSettings();
	PCG_API UClass* Z_Construct_UClass_UPCGPointFromMeshSettings_NoRegister();
	PCG_API UClass* Z_Construct_UClass_UPCGSettings();
	UPackage* Z_Construct_UPackage__Script_PCG();
// End Cross Module References
	void UPCGPointFromMeshSettings::StaticRegisterNativesUPCGPointFromMeshSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPCGPointFromMeshSettings);
	UClass* Z_Construct_UClass_UPCGPointFromMeshSettings_NoRegister()
	{
		return UPCGPointFromMeshSettings::StaticClass();
	}
	struct Z_Construct_UClass_UPCGPointFromMeshSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StaticMesh_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_StaticMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeshPathAttributeName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_MeshPathAttributeName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPCGPointFromMeshSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPCGSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_PCG,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGPointFromMeshSettings_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGPointFromMeshSettings_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Procedural" },
		{ "Comment", "// PointFromMesh creates a single point at the origin with an attribute containing a SoftObjectPath to the selected UStaticMesh\n" },
		{ "IncludePath", "Elements/PCGPointFromMeshElement.h" },
		{ "ModuleRelativePath", "Public/Elements/PCGPointFromMeshElement.h" },
		{ "ToolTip", "PointFromMesh creates a single point at the origin with an attribute containing a SoftObjectPath to the selected UStaticMesh" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGPointFromMeshSettings_Statics::NewProp_StaticMesh_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Elements/PCGPointFromMeshElement.h" },
		{ "PCG_Overridable", "" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UPCGPointFromMeshSettings_Statics::NewProp_StaticMesh = { "StaticMesh", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGPointFromMeshSettings, StaticMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGPointFromMeshSettings_Statics::NewProp_StaticMesh_MetaData), Z_Construct_UClass_UPCGPointFromMeshSettings_Statics::NewProp_StaticMesh_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGPointFromMeshSettings_Statics::NewProp_MeshPathAttributeName_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Name of the string attribute to be created and hold a SoftObjectPath to the StaticMesh */" },
		{ "ModuleRelativePath", "Public/Elements/PCGPointFromMeshElement.h" },
		{ "ToolTip", "Name of the string attribute to be created and hold a SoftObjectPath to the StaticMesh" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGPointFromMeshSettings_Statics::NewProp_MeshPathAttributeName = { "MeshPathAttributeName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGPointFromMeshSettings, MeshPathAttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGPointFromMeshSettings_Statics::NewProp_MeshPathAttributeName_MetaData), Z_Construct_UClass_UPCGPointFromMeshSettings_Statics::NewProp_MeshPathAttributeName_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGPointFromMeshSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGPointFromMeshSettings_Statics::NewProp_StaticMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGPointFromMeshSettings_Statics::NewProp_MeshPathAttributeName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPCGPointFromMeshSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGPointFromMeshSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGPointFromMeshSettings_Statics::ClassParams = {
		&UPCGPointFromMeshSettings::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPCGPointFromMeshSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPCGPointFromMeshSettings_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGPointFromMeshSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGPointFromMeshSettings_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGPointFromMeshSettings_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UPCGPointFromMeshSettings()
	{
		if (!Z_Registration_Info_UClass_UPCGPointFromMeshSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGPointFromMeshSettings.OuterSingleton, Z_Construct_UClass_UPCGPointFromMeshSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPCGPointFromMeshSettings.OuterSingleton;
	}
	template<> PCG_API UClass* StaticClass<UPCGPointFromMeshSettings>()
	{
		return UPCGPointFromMeshSettings::StaticClass();
	}
	UPCGPointFromMeshSettings::UPCGPointFromMeshSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPCGPointFromMeshSettings);
	UPCGPointFromMeshSettings::~UPCGPointFromMeshSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Elements_PCGPointFromMeshElement_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Elements_PCGPointFromMeshElement_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPCGPointFromMeshSettings, UPCGPointFromMeshSettings::StaticClass, TEXT("UPCGPointFromMeshSettings"), &Z_Registration_Info_UClass_UPCGPointFromMeshSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGPointFromMeshSettings), 2599079450U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Elements_PCGPointFromMeshElement_h_3889807519(TEXT("/Script/PCG"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Elements_PCGPointFromMeshElement_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Elements_PCGPointFromMeshElement_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
