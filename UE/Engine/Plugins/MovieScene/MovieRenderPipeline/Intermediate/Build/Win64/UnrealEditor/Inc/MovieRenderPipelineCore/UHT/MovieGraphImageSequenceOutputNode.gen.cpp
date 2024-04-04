// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Graph/Nodes/MovieGraphImageSequenceOutputNode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieGraphImageSequenceOutputNode() {}
// Cross Module References
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMovieGraphFileOutputNode();
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMovieGraphImageSequenceOutputNode();
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMovieGraphImageSequenceOutputNode_BMP();
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMovieGraphImageSequenceOutputNode_BMP_NoRegister();
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMovieGraphImageSequenceOutputNode_JPG();
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMovieGraphImageSequenceOutputNode_JPG_NoRegister();
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMovieGraphImageSequenceOutputNode_NoRegister();
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMovieGraphImageSequenceOutputNode_PNG();
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMovieGraphImageSequenceOutputNode_PNG_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MovieRenderPipelineCore();
// End Cross Module References
	void UMovieGraphImageSequenceOutputNode::StaticRegisterNativesUMovieGraphImageSequenceOutputNode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieGraphImageSequenceOutputNode);
	UClass* Z_Construct_UClass_UMovieGraphImageSequenceOutputNode_NoRegister()
	{
		return UMovieGraphImageSequenceOutputNode::StaticClass();
	}
	struct Z_Construct_UClass_UMovieGraphImageSequenceOutputNode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieGraphImageSequenceOutputNode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieGraphFileOutputNode,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieRenderPipelineCore,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieGraphImageSequenceOutputNode_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieGraphImageSequenceOutputNode_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n* The UMovieGraphImageSequenceOutputNode node is the base class for all image sequence outputs, such as \n* a series of jpeg, png, bmp, or .exr images. Create an instance of the appropriate class (such as \n* UMovieGraphImageSequenceOutputNode_JPG) instead of this abstract base class.\n*/" },
		{ "IncludePath", "Graph/Nodes/MovieGraphImageSequenceOutputNode.h" },
		{ "ModuleRelativePath", "Public/Graph/Nodes/MovieGraphImageSequenceOutputNode.h" },
		{ "ToolTip", "The UMovieGraphImageSequenceOutputNode node is the base class for all image sequence outputs, such as\na series of jpeg, png, bmp, or .exr images. Create an instance of the appropriate class (such as\nUMovieGraphImageSequenceOutputNode_JPG) instead of this abstract base class." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieGraphImageSequenceOutputNode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieGraphImageSequenceOutputNode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieGraphImageSequenceOutputNode_Statics::ClassParams = {
		&UMovieGraphImageSequenceOutputNode::StaticClass,
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
		0x000000A1u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieGraphImageSequenceOutputNode_Statics::Class_MetaDataParams), Z_Construct_UClass_UMovieGraphImageSequenceOutputNode_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UMovieGraphImageSequenceOutputNode()
	{
		if (!Z_Registration_Info_UClass_UMovieGraphImageSequenceOutputNode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieGraphImageSequenceOutputNode.OuterSingleton, Z_Construct_UClass_UMovieGraphImageSequenceOutputNode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMovieGraphImageSequenceOutputNode.OuterSingleton;
	}
	template<> MOVIERENDERPIPELINECORE_API UClass* StaticClass<UMovieGraphImageSequenceOutputNode>()
	{
		return UMovieGraphImageSequenceOutputNode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieGraphImageSequenceOutputNode);
	UMovieGraphImageSequenceOutputNode::~UMovieGraphImageSequenceOutputNode() {}
	void UMovieGraphImageSequenceOutputNode_BMP::StaticRegisterNativesUMovieGraphImageSequenceOutputNode_BMP()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieGraphImageSequenceOutputNode_BMP);
	UClass* Z_Construct_UClass_UMovieGraphImageSequenceOutputNode_BMP_NoRegister()
	{
		return UMovieGraphImageSequenceOutputNode_BMP::StaticClass();
	}
	struct Z_Construct_UClass_UMovieGraphImageSequenceOutputNode_BMP_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieGraphImageSequenceOutputNode_BMP_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieGraphImageSequenceOutputNode,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieRenderPipelineCore,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieGraphImageSequenceOutputNode_BMP_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieGraphImageSequenceOutputNode_BMP_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n* Save the images generated by the Movie Graph Pipeline as an lossless 8 bit bmp format. This can\n* be useful in rare occasions (bmp files are uncompressed but larger). sRGB is applied.\n* No metadata is supported.\n*/" },
		{ "IncludePath", "Graph/Nodes/MovieGraphImageSequenceOutputNode.h" },
		{ "ModuleRelativePath", "Public/Graph/Nodes/MovieGraphImageSequenceOutputNode.h" },
		{ "ToolTip", "Save the images generated by the Movie Graph Pipeline as an lossless 8 bit bmp format. This can\nbe useful in rare occasions (bmp files are uncompressed but larger). sRGB is applied.\nNo metadata is supported." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieGraphImageSequenceOutputNode_BMP_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieGraphImageSequenceOutputNode_BMP>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieGraphImageSequenceOutputNode_BMP_Statics::ClassParams = {
		&UMovieGraphImageSequenceOutputNode_BMP::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieGraphImageSequenceOutputNode_BMP_Statics::Class_MetaDataParams), Z_Construct_UClass_UMovieGraphImageSequenceOutputNode_BMP_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UMovieGraphImageSequenceOutputNode_BMP()
	{
		if (!Z_Registration_Info_UClass_UMovieGraphImageSequenceOutputNode_BMP.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieGraphImageSequenceOutputNode_BMP.OuterSingleton, Z_Construct_UClass_UMovieGraphImageSequenceOutputNode_BMP_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMovieGraphImageSequenceOutputNode_BMP.OuterSingleton;
	}
	template<> MOVIERENDERPIPELINECORE_API UClass* StaticClass<UMovieGraphImageSequenceOutputNode_BMP>()
	{
		return UMovieGraphImageSequenceOutputNode_BMP::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieGraphImageSequenceOutputNode_BMP);
	UMovieGraphImageSequenceOutputNode_BMP::~UMovieGraphImageSequenceOutputNode_BMP() {}
	void UMovieGraphImageSequenceOutputNode_JPG::StaticRegisterNativesUMovieGraphImageSequenceOutputNode_JPG()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieGraphImageSequenceOutputNode_JPG);
	UClass* Z_Construct_UClass_UMovieGraphImageSequenceOutputNode_JPG_NoRegister()
	{
		return UMovieGraphImageSequenceOutputNode_JPG::StaticClass();
	}
	struct Z_Construct_UClass_UMovieGraphImageSequenceOutputNode_JPG_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieGraphImageSequenceOutputNode_JPG_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieGraphImageSequenceOutputNode,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieRenderPipelineCore,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieGraphImageSequenceOutputNode_JPG_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieGraphImageSequenceOutputNode_JPG_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n* Save the images generated by the Movie Graph Pipeline as an 8 bit jpg format. JPEG image files\n* are lossy, but a good balance between compression speed and final filesize. sRGB is applied.\n* No metadata is supported.\n*/" },
		{ "IncludePath", "Graph/Nodes/MovieGraphImageSequenceOutputNode.h" },
		{ "ModuleRelativePath", "Public/Graph/Nodes/MovieGraphImageSequenceOutputNode.h" },
		{ "ToolTip", "Save the images generated by the Movie Graph Pipeline as an 8 bit jpg format. JPEG image files\nare lossy, but a good balance between compression speed and final filesize. sRGB is applied.\nNo metadata is supported." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieGraphImageSequenceOutputNode_JPG_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieGraphImageSequenceOutputNode_JPG>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieGraphImageSequenceOutputNode_JPG_Statics::ClassParams = {
		&UMovieGraphImageSequenceOutputNode_JPG::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieGraphImageSequenceOutputNode_JPG_Statics::Class_MetaDataParams), Z_Construct_UClass_UMovieGraphImageSequenceOutputNode_JPG_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UMovieGraphImageSequenceOutputNode_JPG()
	{
		if (!Z_Registration_Info_UClass_UMovieGraphImageSequenceOutputNode_JPG.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieGraphImageSequenceOutputNode_JPG.OuterSingleton, Z_Construct_UClass_UMovieGraphImageSequenceOutputNode_JPG_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMovieGraphImageSequenceOutputNode_JPG.OuterSingleton;
	}
	template<> MOVIERENDERPIPELINECORE_API UClass* StaticClass<UMovieGraphImageSequenceOutputNode_JPG>()
	{
		return UMovieGraphImageSequenceOutputNode_JPG::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieGraphImageSequenceOutputNode_JPG);
	UMovieGraphImageSequenceOutputNode_JPG::~UMovieGraphImageSequenceOutputNode_JPG() {}
	void UMovieGraphImageSequenceOutputNode_PNG::StaticRegisterNativesUMovieGraphImageSequenceOutputNode_PNG()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieGraphImageSequenceOutputNode_PNG);
	UClass* Z_Construct_UClass_UMovieGraphImageSequenceOutputNode_PNG_NoRegister()
	{
		return UMovieGraphImageSequenceOutputNode_PNG::StaticClass();
	}
	struct Z_Construct_UClass_UMovieGraphImageSequenceOutputNode_PNG_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieGraphImageSequenceOutputNode_PNG_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieGraphImageSequenceOutputNode,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieRenderPipelineCore,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieGraphImageSequenceOutputNode_PNG_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieGraphImageSequenceOutputNode_PNG_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n* Save the images generated by the Movie Graph Pipeline as an 8 bit png format. PNG image files\n* are lossless but slow to compress and have a larger final filesize than JPEG. sRGB is applied.\n* No metadata is supported.\n*/" },
		{ "IncludePath", "Graph/Nodes/MovieGraphImageSequenceOutputNode.h" },
		{ "ModuleRelativePath", "Public/Graph/Nodes/MovieGraphImageSequenceOutputNode.h" },
		{ "ToolTip", "Save the images generated by the Movie Graph Pipeline as an 8 bit png format. PNG image files\nare lossless but slow to compress and have a larger final filesize than JPEG. sRGB is applied.\nNo metadata is supported." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieGraphImageSequenceOutputNode_PNG_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieGraphImageSequenceOutputNode_PNG>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieGraphImageSequenceOutputNode_PNG_Statics::ClassParams = {
		&UMovieGraphImageSequenceOutputNode_PNG::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieGraphImageSequenceOutputNode_PNG_Statics::Class_MetaDataParams), Z_Construct_UClass_UMovieGraphImageSequenceOutputNode_PNG_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UMovieGraphImageSequenceOutputNode_PNG()
	{
		if (!Z_Registration_Info_UClass_UMovieGraphImageSequenceOutputNode_PNG.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieGraphImageSequenceOutputNode_PNG.OuterSingleton, Z_Construct_UClass_UMovieGraphImageSequenceOutputNode_PNG_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMovieGraphImageSequenceOutputNode_PNG.OuterSingleton;
	}
	template<> MOVIERENDERPIPELINECORE_API UClass* StaticClass<UMovieGraphImageSequenceOutputNode_PNG>()
	{
		return UMovieGraphImageSequenceOutputNode_PNG::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieGraphImageSequenceOutputNode_PNG);
	UMovieGraphImageSequenceOutputNode_PNG::~UMovieGraphImageSequenceOutputNode_PNG() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_Nodes_MovieGraphImageSequenceOutputNode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_Nodes_MovieGraphImageSequenceOutputNode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMovieGraphImageSequenceOutputNode, UMovieGraphImageSequenceOutputNode::StaticClass, TEXT("UMovieGraphImageSequenceOutputNode"), &Z_Registration_Info_UClass_UMovieGraphImageSequenceOutputNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieGraphImageSequenceOutputNode), 907076423U) },
		{ Z_Construct_UClass_UMovieGraphImageSequenceOutputNode_BMP, UMovieGraphImageSequenceOutputNode_BMP::StaticClass, TEXT("UMovieGraphImageSequenceOutputNode_BMP"), &Z_Registration_Info_UClass_UMovieGraphImageSequenceOutputNode_BMP, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieGraphImageSequenceOutputNode_BMP), 3100336662U) },
		{ Z_Construct_UClass_UMovieGraphImageSequenceOutputNode_JPG, UMovieGraphImageSequenceOutputNode_JPG::StaticClass, TEXT("UMovieGraphImageSequenceOutputNode_JPG"), &Z_Registration_Info_UClass_UMovieGraphImageSequenceOutputNode_JPG, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieGraphImageSequenceOutputNode_JPG), 3380935355U) },
		{ Z_Construct_UClass_UMovieGraphImageSequenceOutputNode_PNG, UMovieGraphImageSequenceOutputNode_PNG::StaticClass, TEXT("UMovieGraphImageSequenceOutputNode_PNG"), &Z_Registration_Info_UClass_UMovieGraphImageSequenceOutputNode_PNG, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieGraphImageSequenceOutputNode_PNG), 2254657313U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_Nodes_MovieGraphImageSequenceOutputNode_h_2243255443(TEXT("/Script/MovieRenderPipelineCore"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_Nodes_MovieGraphImageSequenceOutputNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_Nodes_MovieGraphImageSequenceOutputNode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
