// All rights reserved to ShadowCandle Studio


#include "DIY_PlatFormServiceComponent.h"


// Sets default values
UDIY_PlatFormServiceComponent::UDIY_PlatFormServiceComponent()
{
	
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.


}

// Called when the game starts or when spawned
void UDIY_PlatFormServiceComponent::BeginPlay()
{
	Super::BeginPlay();

	FDIYPlatformServiceModule::Get().GetPlatformProvider(GetWorld())->DeviceDetectedDelegate_GarbageName.AddUniqueDynamic(this, &UDIY_PlatFormServiceComponent::OnGarbageDeviceDetectedNotifyEvent);
	FDIYPlatformServiceModule::Get().GetPlatformProvider(GetWorld())->DeviceDetectedDelegate_WithName.AddUniqueDynamic(this, &UDIY_PlatFormServiceComponent::OnWithNameDeviceDetectedNotifyEvent);

	/*ADIYPlatformServiceProvider::Garbage_Test.AddUniqueDynamic(this, &UDIY_PlatFormServiceComponent::OnGarbageDeviceDetectedNotifyEvent);
	ADIYPlatformServiceProvider::With_Test.AddUniqueDynamic(this, &UDIY_PlatFormServiceComponent::OnWithNameDeviceDetectedNotifyEvent);*/
}

void UDIY_PlatFormServiceComponent::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	if (FDIYPlatformServiceModule::Get().GetPlatformProvider(GetWorld())->DeviceDetectedDelegate_GarbageName.IsAlreadyBound(this, &UDIY_PlatFormServiceComponent::OnGarbageDeviceDetectedNotifyEvent))
	{
		FDIYPlatformServiceModule::Get().GetPlatformProvider(GetWorld())->DeviceDetectedDelegate_GarbageName.RemoveDynamic(this, &UDIY_PlatFormServiceComponent::OnGarbageDeviceDetectedNotifyEvent);
	}

	if (FDIYPlatformServiceModule::Get().GetPlatformProvider(GetWorld())->DeviceDetectedDelegate_WithName.IsAlreadyBound(this, &UDIY_PlatFormServiceComponent::OnWithNameDeviceDetectedNotifyEvent))
	{
		FDIYPlatformServiceModule::Get().GetPlatformProvider(GetWorld())->DeviceDetectedDelegate_WithName.RemoveDynamic(this, &UDIY_PlatFormServiceComponent::OnWithNameDeviceDetectedNotifyEvent);
	}

	/*if (ADIYPlatformServiceProvider::Garbage_Test.IsAlreadyBound(this, &UDIY_PlatFormServiceComponent::OnGarbageDeviceDetectedNotifyEvent))
	ADIYPlatformServiceProvider::Garbage_Test.RemoveDynamic(this, &UDIY_PlatFormServiceComponent::OnGarbageDeviceDetectedNotifyEvent);
	if (ADIYPlatformServiceProvider::With_Test.IsAlreadyBound(this, &UDIY_PlatFormServiceComponent::OnWithNameDeviceDetectedNotifyEvent))
	ADIYPlatformServiceProvider::With_Test.RemoveDynamic(this, &UDIY_PlatFormServiceComponent::OnWithNameDeviceDetectedNotifyEvent);*/

}

void UDIY_PlatFormServiceComponent::OnGarbageDeviceDetectedNotifyEvent()
{
	
	TriggerDeviceDetectedNotify_GarbageName.Broadcast();
}

void UDIY_PlatFormServiceComponent::OnWithNameDeviceDetectedNotifyEvent(const FString& inDeviceInfo)
{
	TriggerDeviceDetectedNotify_WithName.Broadcast(inDeviceInfo);
}





