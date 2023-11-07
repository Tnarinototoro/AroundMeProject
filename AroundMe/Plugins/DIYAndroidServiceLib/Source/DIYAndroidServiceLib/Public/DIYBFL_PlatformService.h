// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "DIYPlatformServiceProvider.h"
#include "DIYBFL_PlatformService.generated.h"

/**
 * 
 */
UCLASS()
class DIYPLATFORMSERVICE_API UDIYBFL_PlatformService : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
public:
	UFUNCTION(BlueprintCallable, Category = "PlatFormService")
		static void StartPlatformService();
	UFUNCTION(BlueprintCallable, Category = "PlatFormService")
		static void StopPlatformService();
};
