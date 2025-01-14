// Fill out your copyright notice in the Description page of Project Settings.

#include "DIYBFL_PlatformService.h"

void UDIYBFL_PlatformService::StartPlatformService()
{
    ADIYPlatformServiceProvider::StartProvidingService();
}

void UDIYBFL_PlatformService::StopPlatformService()
{
    ADIYPlatformServiceProvider::StopProvidingService();
}

void UDIYBFL_PlatformService::RequestAddGiveTask(int item_id)
{
    ADIYPlatformServiceProvider::RequestAddGiveTask(item_id);
}