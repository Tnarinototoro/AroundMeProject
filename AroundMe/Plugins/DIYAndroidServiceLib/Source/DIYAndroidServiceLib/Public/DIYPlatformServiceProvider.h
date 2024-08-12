#pragma once

#include "CoreMinimal.h"
#include "Delegates/Delegate.h"
#include "UObject/NoExportTypes.h"
#include "UObject/ObjectMacros.h"

#if PLATFORM_ANDROID
#include "Runtime/Launch/Public/Android/AndroidJNI.h"
#include "Runtime/ApplicationCore/Public/Android/AndroidApplication.h"
#endif

#include "DIYPlatformServiceProvider.generated.h"

UCLASS()
class DIYPLATFORMSERVICE_API ADIYPlatformServiceProvider : public AActor
{

    GENERATED_BODY()

public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnAroundMeService_SimpleTrigger);

    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnAroundMeService_WithStringMsg, const FString &, inMsg);

    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnAroundMeService_WithIntMsg, int, inIntMsg);
    ADIYPlatformServiceProvider();
    ~ADIYPlatformServiceProvider();

    static void StartProvidingService();
    static void StopProvidingService();

    static void RequestAddGiveTask(int item_id);
    UFUNCTION()
    virtual void Setup(UWorld *validWorld);

    UPROPERTY()
    FOnAroundMeService_SimpleTrigger OnDeviceDetected_Delegate_GarbageName_Provider;
    UPROPERTY()
    FOnAroundMeService_WithStringMsg OnDeviceDetected_Delegate_WithName_Provider;

    UPROPERTY()
    FOnAroundMeService_WithStringMsg OnMessageReceivedFromOtherPDevices_Delegate_Provider;

    UPROPERTY()
    FOnAroundMeService_WithIntMsg OnSubmittingBaypassData_GarbageNamesCount_Delegate_Provider;

    UPROPERTY()
    FOnAroundMeService_WithIntMsg OnSubmittingBaypassData_WithNamesCount_Delegate_Provider;

    UPROPERTY()
    FOnAroundMeService_WithIntMsg OnSubmittingBaypassData_GameUserCount_Delegate_Provider;

    UPROPERTY()
    FOnAroundMeService_WithIntMsg OnItemGiftReceived_Delegate_Provider;

    /* UWorld reference */
    UPROPERTY()
    UWorld *world;
};
