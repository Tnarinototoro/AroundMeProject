// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "Modules/ModuleManager.h"

class FDIYPlatformServiceModule : public IModuleInterface 
{
public:
  virtual void StartupModule() override;
  virtual void ShutdownModule() override;


  UFUNCTION()
	  void WorldTick(UWorld* world, ELevelTick tickType, float deltaTime);
  UFUNCTION()
	  static FDIYPlatformServiceModule& Get();
};
