// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "Modules/ModuleManager.h"

class FDIYPlatformServiceModule : public IModuleInterface 
{
public:
  /** IModuleInterface implementation */
  virtual void StartupModule() override;
  virtual void ShutdownModule() override;


  /**
	 * World Tick
	 */
  UFUNCTION()
	  void WorldTick(UWorld* world, ELevelTick tickType, float deltaTime);
  UFUNCTION()
	  static FDIYPlatformServiceModule& Get();
  /* Boolean for if the Geo Location Provider is ready to be used */
  UPROPERTY()
	  bool PlatformServiceProviderReady = false;
  /**
	 * Get the Platform Provider
	 */
  UFUNCTION()
	  class ADIYPlatformServiceProvider* GetPlatformProvider(UWorld* world);

  /**
   * Shutdown the Platform Provider
   */
  UFUNCTION()
	  void ShutdownPlatformProvider();
  /* Geo Location Provider */
  UPROPERTY()
	  class ADIYPlatformServiceProvider* DIYPlatformServiceProvider;
};
