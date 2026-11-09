// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "DIY_PaperZDTestTool.generated.h"

/**
 * 仅用于 HD-2D 风格试验的编辑器工具。
 *
 * PaperZD 的 AnimSequence 把 AnimSource 声明成 VisibleAnywhere，编辑器外的脚本
 * 无法写；AnimData 是私有 UPROPERTY。这里用反射补上，避免走会崩溃的 Factory 路径。
 */
UCLASS()
class AROUNDMEEDITOR_API UDIY_PaperZDTestTool : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	/** 给文件夹下 ASQ_Squid_Walk_<Dir> 这四张序列填 AnimSource 与 AnimData。 */
	UFUNCTION(BlueprintCallable, Category = "DIY|PaperZD")
	static bool FillSquidSequences(const FString& SequenceFolder, const FString& FlipbookFolder, const FString& SourcePath);

	/** 基于 AnimationSource 创建 PaperZD AnimBP，并建好动画图、编译、存盘。 */
	UFUNCTION(BlueprintCallable, Category = "DIY|PaperZD")
	static bool CreateSquidAnimBP(const FString& SourcePath, const FString& PackagePath, const FString& AssetName);
};
