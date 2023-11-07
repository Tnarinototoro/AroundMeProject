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


	// �ಥί��
	DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnDeviceDetectedDelegate_GarbageName);

	// �����ಥί��
	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnDeviceDetectedDelegate_WithName, const FString&, inDeviceInfo);

public:	
	// Sets default values for this actor's properties
	UDIY_PlatFormServiceComponent();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	// ������������ĺ���
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;
	
	UFUNCTION()
	virtual void OnGarbageDeviceDetectedNotifyEvent();
	UFUNCTION()
	virtual void OnWithNameDeviceDetectedNotifyEvent(const FString& inDeviceInfo);
	
public:	

	//those delegates are used to offer convenience when customizing logic after receiving the notify
	UPROPERTY(BlueprintAssignable, Category = "PlatformService")
		FOnDeviceDetectedDelegate_GarbageName TriggerDeviceDetectedNotify_GarbageName;
	UPROPERTY(BlueprintAssignable, Category = "PlatformService")
		FOnDeviceDetectedDelegate_WithName TriggerDeviceDetectedNotify_WithName;

};
