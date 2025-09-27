// Copyright Epic Games, Inc. All Rights Reserved.

#include "DIYPlatformService.h"
#include "DIYPlatformServiceProvider.h"
#include "DIY_CommuLog.h"

#define LOCTEXT_NAMESPACE "FDIYPlatformServiceModule"

void FDIYPlatformServiceModule::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module
	
}

void FDIYPlatformServiceModule::ShutdownModule()
{
	ShutdownPlatformProvider();
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.
	
}

void FDIYPlatformServiceModule::WorldTick(UWorld* world, ELevelTick tickType, float deltaTime)
{
}

FDIYPlatformServiceModule& FDIYPlatformServiceModule::Get()
{
	return FModuleManager::LoadModuleChecked<FDIYPlatformServiceModule>("DIYPlatformService");

}

ADIYPlatformServiceProvider* FDIYPlatformServiceModule::GetPlatformProvider(UWorld* world=nullptr)
{
	if (!this->PlatformServiceProviderReady && world != nullptr)
	{
#if PLATFORM_ANDROID
		//this->GeoLocationProvider = NewObject<AGeoLocationAndroidPlatformProvider>();
#elif defined PLATFORM_HTML5 && PLATFORM_HTML5
		//this->GeoLocationProvider = NewObject<AGeoLocationHTML5PlatformProvider>();
#elif PLATFORM_IOS
		//this->GeoLocationProvider = NewObject<AGeoLocationIOSPlatformProvider>();
#else
		//this->GeoLocationProvider = NewObject<AGeoLocationEditorPlatformProvider>();
#endif
		this->DIYPlatformServiceProvider = NewObject<ADIYPlatformServiceProvider>();
		// Stop Unreal from deleting the provider during garbage collection by adding it to the root set
		this->DIYPlatformServiceProvider->AddToRoot();

		this->DIYPlatformServiceProvider->Setup(world);
		this->PlatformServiceProviderReady = true;
	}

	return this->DIYPlatformServiceProvider;
}

void FDIYPlatformServiceModule::ShutdownPlatformProvider()
{
	// Remove the provider from the root set so that Unreal can delete the instance during shutdown
	if(nullptr!= this->DIYPlatformServiceProvider)
	this->DIYPlatformServiceProvider->RemoveFromRoot();
	this->PlatformServiceProviderReady = false;
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FDIYPlatformServiceModule, DIYPlatformService)

DEFINE_LOG_CATEGORY(DIY_CommuLog);