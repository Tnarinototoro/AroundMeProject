// All rights reserved to ShadowCandle Studio

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "DIYPlatformServiceProvider.h"

#include "DIY_PlatFormServiceComponent.generated.h"

UCLASS(ClassGroup = (DIY), meta = (BlueprintSpawnableComponent))
class DIYPLATFORMSERVICE_API UDIY_PlatFormServiceComponent : public UActorComponent
{
    GENERATED_BODY()

public:
    // Sets default values for this actor's properties
    UDIY_PlatFormServiceComponent();

protected:
    // Called when the game starts or when spawned
    virtual void BeginPlay() override;

    virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;

    UFUNCTION()
    virtual void OnGarbageDeviceDetected_NotifyEvent();
    UFUNCTION()
    virtual void OnWithNameDeviceDetected_NotifyEvent(const FString &inDeviceInfo);

    UFUNCTION()
    virtual void OnMessageReceivedFromOtherPDevices_NotifyEvent(const FString &inpDeviceInfo);



    UFUNCTION()
    virtual void OnSubmittingBaypassData_GarbageNamesCount_NotifyEvent(int inCount);

    UFUNCTION()
    virtual void OnSubmittingBaypassData_WithNamesCount_NotifyEvent(int inCount);

    UFUNCTION()
    virtual void OnSubmittingBaypassData_GameUserCount_NotifyEvent(int inCount);

    UFUNCTION()
    virtual void OnItemGiftReceived_NotifyEvent(int inGiftItemID);


public:
    // those delegates are used to offer convenience when customizing logic after receiving the notify
    UPROPERTY(BlueprintAssignable, Category = "PlatformService")
    ADIYPlatformServiceProvider::FOnAroundMeService_SimpleTrigger DeviceDetectedDelegate_GarbageName_Compo;

    UPROPERTY(BlueprintAssignable, Category = "PlatformService")
    ADIYPlatformServiceProvider::FOnAroundMeService_WithStringMsg DeviceDetectedDelegate_WithName_Compo;

    UPROPERTY(BlueprintAssignable, Category = "PlatformService")
    ADIYPlatformServiceProvider::FOnAroundMeService_WithStringMsg OnMessageReceivedFromOtherPDevicesDelegate_Compo;



    UPROPERTY(BlueprintAssignable, Category = "PlatformService")
    ADIYPlatformServiceProvider::FOnAroundMeService_WithIntMsg OnSubmittingBaypassData_GarbageNamesCount_Delegate_Compo;

    UPROPERTY(BlueprintAssignable, Category = "PlatformService")
    ADIYPlatformServiceProvider::FOnAroundMeService_WithIntMsg OnSubmittingBaypassData_WithNamesCount_Delegate_Compo;

    UPROPERTY(BlueprintAssignable, Category = "PlatformService")
    ADIYPlatformServiceProvider::FOnAroundMeService_WithIntMsg OnSubmittingBaypassData_GameUserCount_Delegate_Compo;

    UPROPERTY(BlueprintAssignable, Category = "PlatformService")
    ADIYPlatformServiceProvider::FOnAroundMeService_WithIntMsg OnItemGiftReceived_Delegate_Compo;
};
