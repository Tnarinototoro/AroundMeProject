// Fill out your copyright notice in the Description page of Project Settings.

#include "DIYBFL_PlatformService.h"
//#include "DIYPlatformService.h"
#include "DIYPlatformServiceProvider.h"
void UDIYBFL_PlatformService::StartPlatformService()
{
	DIYPlatformServiceProvider::StartProvidingService();
}

void UDIYBFL_PlatformService::StopPlatformService()
{
	DIYPlatformServiceProvider::StopProvidingService();
}

void UDIYBFL_PlatformService::TestPlatformService()
{
	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, FString("I love you"));
	}
}
