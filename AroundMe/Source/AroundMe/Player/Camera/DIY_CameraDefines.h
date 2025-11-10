// All rights reserved to ShadowCandle Studio

#pragma once

#include "CoreMinimal.h"
#include "DIY_CameraDefines.generated.h"







UENUM(BlueprintType)
enum class EDIY_CameraType : uint8
{
    CamType_FixedPoint UMETA(Description = "Like a Surveillance Camera"),
    CamType_AroundDrone UMETA(Description = "A Kind Of Drone Camera surrounding the main castle"),
    CamType_DbgMainPlayer UMETA(Description = "Debug Camera for the from villager Main Player"),
    CamType_Count UMETA(Hidden)
};


USTRUCT(BlueprintType)
struct FDIY_CameraEntry
{
    GENERATED_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FName CameraName{TEXT("None")};

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    EDIY_CameraType CamType{EDIY_CameraType::CamType_Count};

    UPROPERTY()
    TWeakObjectPtr<class AActor> CameraActor{nullptr};




    

    
};
