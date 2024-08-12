// All rights reserved to ShadowCandle Studio

#include "DIY_PlatFormServiceComponent.h"
#include "DIYPlatformService.h"

// Sets default values
UDIY_PlatFormServiceComponent::UDIY_PlatFormServiceComponent()
{

    // Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
}

// Called when the game starts or when spawned
void UDIY_PlatFormServiceComponent::BeginPlay()
{
    Super::BeginPlay();

    FDIYPlatformServiceModule::Get().GetPlatformProvider(GetWorld())->OnDeviceDetected_Delegate_GarbageName_Provider.AddUniqueDynamic(this, &UDIY_PlatFormServiceComponent::OnGarbageDeviceDetected_NotifyEvent);

    FDIYPlatformServiceModule::Get().GetPlatformProvider(GetWorld())->OnDeviceDetected_Delegate_WithName_Provider.AddUniqueDynamic(this, &UDIY_PlatFormServiceComponent::OnWithNameDeviceDetected_NotifyEvent);

    FDIYPlatformServiceModule::Get().GetPlatformProvider(GetWorld())->OnMessageReceivedFromOtherPDevices_Delegate_Provider.AddUniqueDynamic(this, &UDIY_PlatFormServiceComponent::OnMessageReceivedFromOtherPDevices_NotifyEvent);

    FDIYPlatformServiceModule::Get().GetPlatformProvider(GetWorld())->OnSubmittingBaypassData_GarbageNamesCount_Delegate_Provider.AddUniqueDynamic(this, &UDIY_PlatFormServiceComponent::OnSubmittingBaypassData_GarbageNamesCount_NotifyEvent);
    FDIYPlatformServiceModule::Get().GetPlatformProvider(GetWorld())->OnSubmittingBaypassData_WithNamesCount_Delegate_Provider.AddUniqueDynamic(this, &UDIY_PlatFormServiceComponent::OnSubmittingBaypassData_WithNamesCount_NotifyEvent);
    FDIYPlatformServiceModule::Get().GetPlatformProvider(GetWorld())->OnSubmittingBaypassData_GameUserCount_Delegate_Provider.AddUniqueDynamic(this, &UDIY_PlatFormServiceComponent::OnSubmittingBaypassData_GameUserCount_NotifyEvent);
    FDIYPlatformServiceModule::Get().GetPlatformProvider(GetWorld())->OnItemGiftReceived_Delegate_Provider.AddUniqueDynamic(this, &UDIY_PlatFormServiceComponent::OnItemGiftReceived_NotifyEvent);

    /*ADIYPlatformServiceProvider::Garbage_Test.AddUniqueDynamic(this, &UDIY_PlatFormServiceComponent::OnGarbageDeviceDetectedNotifyEvent);
    ADIYPlatformServiceProvider::With_Test.AddUniqueDynamic(this, &UDIY_PlatFormServiceComponent::OnWithNameDeviceDetectedNotifyEvent);*/
}

void UDIY_PlatFormServiceComponent::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
    if (FDIYPlatformServiceModule::Get().GetPlatformProvider(GetWorld())->OnDeviceDetected_Delegate_GarbageName_Provider.IsAlreadyBound(this, &UDIY_PlatFormServiceComponent::OnGarbageDeviceDetected_NotifyEvent))
    {
        FDIYPlatformServiceModule::Get().GetPlatformProvider(GetWorld())->OnDeviceDetected_Delegate_GarbageName_Provider.RemoveDynamic(this, &UDIY_PlatFormServiceComponent::OnGarbageDeviceDetected_NotifyEvent);
    }

    if (FDIYPlatformServiceModule::Get().GetPlatformProvider(GetWorld())->OnDeviceDetected_Delegate_WithName_Provider.IsAlreadyBound(this, &UDIY_PlatFormServiceComponent::OnWithNameDeviceDetected_NotifyEvent))
    {
        FDIYPlatformServiceModule::Get().GetPlatformProvider(GetWorld())->OnDeviceDetected_Delegate_WithName_Provider.RemoveDynamic(this, &UDIY_PlatFormServiceComponent::OnWithNameDeviceDetected_NotifyEvent);
    }

    if (FDIYPlatformServiceModule::Get().GetPlatformProvider(GetWorld())->OnMessageReceivedFromOtherPDevices_Delegate_Provider.IsAlreadyBound(this, &UDIY_PlatFormServiceComponent::OnMessageReceivedFromOtherPDevices_NotifyEvent))
    {
        FDIYPlatformServiceModule::Get().GetPlatformProvider(GetWorld())->OnMessageReceivedFromOtherPDevices_Delegate_Provider.RemoveDynamic(this, &UDIY_PlatFormServiceComponent::OnMessageReceivedFromOtherPDevices_NotifyEvent);
    }

    if (FDIYPlatformServiceModule::Get().GetPlatformProvider(GetWorld())->OnSubmittingBaypassData_GarbageNamesCount_Delegate_Provider.IsAlreadyBound(this, &UDIY_PlatFormServiceComponent::OnSubmittingBaypassData_GarbageNamesCount_NotifyEvent))
    {
        FDIYPlatformServiceModule::Get().GetPlatformProvider(GetWorld())->OnSubmittingBaypassData_GarbageNamesCount_Delegate_Provider.RemoveDynamic(this, &UDIY_PlatFormServiceComponent::OnSubmittingBaypassData_GarbageNamesCount_NotifyEvent);
    }

    if (FDIYPlatformServiceModule::Get().GetPlatformProvider(GetWorld())->OnSubmittingBaypassData_WithNamesCount_Delegate_Provider.IsAlreadyBound(this, &UDIY_PlatFormServiceComponent::OnSubmittingBaypassData_WithNamesCount_NotifyEvent))
    {
        FDIYPlatformServiceModule::Get().GetPlatformProvider(GetWorld())->OnSubmittingBaypassData_WithNamesCount_Delegate_Provider.RemoveDynamic(this, &UDIY_PlatFormServiceComponent::OnSubmittingBaypassData_WithNamesCount_NotifyEvent);
    }
    if (FDIYPlatformServiceModule::Get().GetPlatformProvider(GetWorld())->OnSubmittingBaypassData_GameUserCount_Delegate_Provider.IsAlreadyBound(this, &UDIY_PlatFormServiceComponent::OnSubmittingBaypassData_GameUserCount_NotifyEvent))
    {
        FDIYPlatformServiceModule::Get().GetPlatformProvider(GetWorld())->OnSubmittingBaypassData_GameUserCount_Delegate_Provider.RemoveDynamic(this, &UDIY_PlatFormServiceComponent::OnSubmittingBaypassData_GameUserCount_NotifyEvent);
    }
    if (FDIYPlatformServiceModule::Get().GetPlatformProvider(GetWorld())->OnItemGiftReceived_Delegate_Provider.IsAlreadyBound(this, &UDIY_PlatFormServiceComponent::OnItemGiftReceived_NotifyEvent))
    {
        FDIYPlatformServiceModule::Get().GetPlatformProvider(GetWorld())->OnItemGiftReceived_Delegate_Provider.RemoveDynamic(this, &UDIY_PlatFormServiceComponent::OnItemGiftReceived_NotifyEvent);
    }
    /*if (ADIYPlatformServiceProvider::Garbage_Test.IsAlreadyBound(this, &UDIY_PlatFormServiceComponent::OnGarbageDeviceDetectedNotifyEvent))
    ADIYPlatformServiceProvider::Garbage_Test.RemoveDynamic(this, &UDIY_PlatFormServiceComponent::OnGarbageDeviceDetectedNotifyEvent);
    if (ADIYPlatformServiceProvider::With_Test.IsAlreadyBound(this, &UDIY_PlatFormServiceComponent::OnWithNameDeviceDetectedNotifyEvent))
    ADIYPlatformServiceProvider::With_Test.RemoveDynamic(this, &UDIY_PlatFormServiceComponent::OnWithNameDeviceDetectedNotifyEvent);*/
}

void UDIY_PlatFormServiceComponent::OnGarbageDeviceDetected_NotifyEvent()
{

    DeviceDetectedDelegate_GarbageName_Compo.Broadcast();
}

void UDIY_PlatFormServiceComponent::OnWithNameDeviceDetected_NotifyEvent(const FString &inMsg)
{
    DeviceDetectedDelegate_WithName_Compo.Broadcast(inMsg);
}

void UDIY_PlatFormServiceComponent::OnMessageReceivedFromOtherPDevices_NotifyEvent(const FString &inPDeviceMsg)
{
    OnMessageReceivedFromOtherPDevicesDelegate_Compo.Broadcast(inPDeviceMsg);
}

void UDIY_PlatFormServiceComponent::OnSubmittingBaypassData_GarbageNamesCount_NotifyEvent(int inCount)
{
    OnSubmittingBaypassData_GarbageNamesCount_Delegate_Compo.Broadcast(inCount);
}

void UDIY_PlatFormServiceComponent::OnSubmittingBaypassData_WithNamesCount_NotifyEvent(int inCount)
{
    OnSubmittingBaypassData_WithNamesCount_Delegate_Compo.Broadcast(inCount);
}

void UDIY_PlatFormServiceComponent::OnSubmittingBaypassData_GameUserCount_NotifyEvent(int inCount)
{
    OnSubmittingBaypassData_GameUserCount_Delegate_Compo.Broadcast(inCount);
}

void UDIY_PlatFormServiceComponent::OnItemGiftReceived_NotifyEvent(int inGiftItemID)
{
    OnItemGiftReceived_Delegate_Compo.Broadcast(inGiftItemID);
}
