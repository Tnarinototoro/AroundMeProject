// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SharedMemoryMediaCapture.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSharedMemoryMediaCapture() {}
// Cross Module References
	MEDIAIOCORE_API UClass* Z_Construct_UClass_UMediaCapture();
	SHAREDMEMORYMEDIA_API UClass* Z_Construct_UClass_USharedMemoryMediaCapture();
	SHAREDMEMORYMEDIA_API UClass* Z_Construct_UClass_USharedMemoryMediaCapture_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SharedMemoryMedia();
// End Cross Module References
	void USharedMemoryMediaCapture::StaticRegisterNativesUSharedMemoryMediaCapture()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USharedMemoryMediaCapture);
	UClass* Z_Construct_UClass_USharedMemoryMediaCapture_NoRegister()
	{
		return USharedMemoryMediaCapture::StaticClass();
	}
	struct Z_Construct_UClass_USharedMemoryMediaCapture_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USharedMemoryMediaCapture_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMediaCapture,
		(UObject* (*)())Z_Construct_UPackage__Script_SharedMemoryMedia,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USharedMemoryMediaCapture_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USharedMemoryMediaCapture_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Output Media for SharedMemory.\n * \n * The pixels are captured into shared cross gpu textures, that a player can read.\n * Inter-process communication happens via shared system memory. The metadata exchanged is documented \n * in the FSharedMemoryMediaFrameMetadata structure. The shared memory can be located via a UniqueName\n * that must match in the Media Output and corresponding Media Source settings.\n * \n * It is mostly intended for use in nDisplay render nodes, which are designed to be frame-locked.\n */" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "SharedMemoryMediaCapture.h" },
		{ "ModuleRelativePath", "Public/SharedMemoryMediaCapture.h" },
		{ "ToolTip", "Output Media for SharedMemory.\n\nThe pixels are captured into shared cross gpu textures, that a player can read.\nInter-process communication happens via shared system memory. The metadata exchanged is documented\nin the FSharedMemoryMediaFrameMetadata structure. The shared memory can be located via a UniqueName\nthat must match in the Media Output and corresponding Media Source settings.\n\nIt is mostly intended for use in nDisplay render nodes, which are designed to be frame-locked." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USharedMemoryMediaCapture_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USharedMemoryMediaCapture>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USharedMemoryMediaCapture_Statics::ClassParams = {
		&USharedMemoryMediaCapture::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009010A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USharedMemoryMediaCapture_Statics::Class_MetaDataParams), Z_Construct_UClass_USharedMemoryMediaCapture_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_USharedMemoryMediaCapture()
	{
		if (!Z_Registration_Info_UClass_USharedMemoryMediaCapture.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USharedMemoryMediaCapture.OuterSingleton, Z_Construct_UClass_USharedMemoryMediaCapture_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USharedMemoryMediaCapture.OuterSingleton;
	}
	template<> SHAREDMEMORYMEDIA_API UClass* StaticClass<USharedMemoryMediaCapture>()
	{
		return USharedMemoryMediaCapture::StaticClass();
	}
	USharedMemoryMediaCapture::USharedMemoryMediaCapture() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USharedMemoryMediaCapture);
	USharedMemoryMediaCapture::~USharedMemoryMediaCapture() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_SharedMemoryMedia_Public_SharedMemoryMediaCapture_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_SharedMemoryMedia_Public_SharedMemoryMediaCapture_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USharedMemoryMediaCapture, USharedMemoryMediaCapture::StaticClass, TEXT("USharedMemoryMediaCapture"), &Z_Registration_Info_UClass_USharedMemoryMediaCapture, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USharedMemoryMediaCapture), 98220706U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_SharedMemoryMedia_Public_SharedMemoryMediaCapture_h_1140409689(TEXT("/Script/SharedMemoryMedia"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_SharedMemoryMedia_Public_SharedMemoryMediaCapture_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_SharedMemoryMedia_Public_SharedMemoryMediaCapture_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
