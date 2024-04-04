// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Graph/PCGStackContext.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePCGStackContext() {}
// Cross Module References
	PCG_API UScriptStruct* Z_Construct_UScriptStruct_FPCGStack();
	PCG_API UScriptStruct* Z_Construct_UScriptStruct_FPCGStackFrame();
	UPackage* Z_Construct_UPackage__Script_PCG();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PCGStackFrame;
class UScriptStruct* FPCGStackFrame::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PCGStackFrame.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PCGStackFrame.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPCGStackFrame, (UObject*)Z_Construct_UPackage__Script_PCG(), TEXT("PCGStackFrame"));
	}
	return Z_Registration_Info_UScriptStruct_PCGStackFrame.OuterSingleton;
}
template<> PCG_API UScriptStruct* StaticStruct<FPCGStackFrame>()
{
	return FPCGStackFrame::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPCGStackFrame_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPCGStackFrame_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** A single frame of a call stack, represented as a pointer to the associated object (graph/subgraph or node) or a loop index. */" },
		{ "ModuleRelativePath", "Public/Graph/PCGStackContext.h" },
		{ "ToolTip", "A single frame of a call stack, represented as a pointer to the associated object (graph/subgraph or node) or a loop index." },
	};
#endif
	void* Z_Construct_UScriptStruct_FPCGStackFrame_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPCGStackFrame>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPCGStackFrame_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PCG,
		nullptr,
		&NewStructOps,
		"PCGStackFrame",
		nullptr,
		0,
		sizeof(FPCGStackFrame),
		alignof(FPCGStackFrame),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGStackFrame_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPCGStackFrame_Statics::Struct_MetaDataParams)
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPCGStackFrame()
	{
		if (!Z_Registration_Info_UScriptStruct_PCGStackFrame.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PCGStackFrame.InnerSingleton, Z_Construct_UScriptStruct_FPCGStackFrame_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PCGStackFrame.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PCGStack;
class UScriptStruct* FPCGStack::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PCGStack.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PCGStack.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPCGStack, (UObject*)Z_Construct_UPackage__Script_PCG(), TEXT("PCGStack"));
	}
	return Z_Registration_Info_UScriptStruct_PCGStack.OuterSingleton;
}
template<> PCG_API UScriptStruct* StaticStruct<FPCGStack>()
{
	return FPCGStack::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPCGStack_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPCGStack_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** A call stack, represented as an array of stack frames. */" },
		{ "ModuleRelativePath", "Public/Graph/PCGStackContext.h" },
		{ "ToolTip", "A call stack, represented as an array of stack frames." },
	};
#endif
	void* Z_Construct_UScriptStruct_FPCGStack_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPCGStack>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPCGStack_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PCG,
		nullptr,
		&NewStructOps,
		"PCGStack",
		nullptr,
		0,
		sizeof(FPCGStack),
		alignof(FPCGStack),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGStack_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPCGStack_Statics::Struct_MetaDataParams)
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPCGStack()
	{
		if (!Z_Registration_Info_UScriptStruct_PCGStack.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PCGStack.InnerSingleton, Z_Construct_UScriptStruct_FPCGStack_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PCGStack.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Graph_PCGStackContext_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Graph_PCGStackContext_h_Statics::ScriptStructInfo[] = {
		{ FPCGStackFrame::StaticStruct, Z_Construct_UScriptStruct_FPCGStackFrame_Statics::NewStructOps, TEXT("PCGStackFrame"), &Z_Registration_Info_UScriptStruct_PCGStackFrame, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPCGStackFrame), 298940437U) },
		{ FPCGStack::StaticStruct, Z_Construct_UScriptStruct_FPCGStack_Statics::NewStructOps, TEXT("PCGStack"), &Z_Registration_Info_UScriptStruct_PCGStack, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPCGStack), 4246342065U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Graph_PCGStackContext_h_1771628792(TEXT("/Script/PCG"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Graph_PCGStackContext_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Graph_PCGStackContext_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
