// Copyright Epic Games, Inc. All Rights Reserved.

#include "AroundMeGameModeBase.h"
#include "Essentials/DIY_SmartViewportClient.h"
#include "GameUtilities/Logs/DIY_LogHelper.h"
AAroundMeGameModeBase::AAroundMeGameModeBase()
{
}

void AAroundMeGameModeBase::BeginPlay()
{
    Super::BeginPlay();

    if (GEngine && GEngine->GameViewport)
    {
        // 获取当前的 GameViewportClient 并检查是否为自定义的类
        UGameViewportClient *GameViewportClient = GEngine->GameViewport;
        if (GameViewportClient && GameViewportClient->IsA<UDIY_SmartViewportClient>())
        {
            EASY_LOG_MAINPLAYER("using customized viewport client xxxx");
        }

        
    }
}