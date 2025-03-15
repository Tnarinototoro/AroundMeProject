#include "DIY_MainBaseManager.h"
#include "Components/StaticMeshComponent.h"
#include "Engine/StaticMesh.h"
#include "GameFramework/Controller.h"
#include "GameFramework/PlayerController.h"
#include "GameFramework/Pawn.h"
#include "Kismet/GameplayStatics.h"
#include "Components/BoxComponent.h" 
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"
#include "DIY_MainCamDefines.h"
#include "Components/PointLightComponent.h" 
#include "../../GameUtilities/Logs/DIY_LogHelper.h"
#include "Components/CapsuleComponent.h"
// Sets default values
ADIY_MainBaseManager::ADIY_MainBaseManager()
{
    // Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
    PrimaryActorTick.bCanEverTick = true;
#if 1
// 创建并设置BaseMesh
BaseMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BaseMesh"));
RootComponent = BaseMesh;
BaseCameras.Init(nullptr,(int)EDIY_MainBaseCamLocType::Count);
BaseLights.Init(nullptr, (int)EDIY_MainBaseLightLocType::Count);



EntranceCollisionCheckVolume = CreateDefaultSubobject<UBoxComponent>(TEXT("EntranceCollisionCheckVolume"));
EntranceCollisionCheckVolume->SetupAttachment(RootComponent);

  // Create CameraBoom (Spring Arm component)
  CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));


  CameraBoom->SetupAttachment(RootComponent);
  CameraBoom->TargetArmLength = 600.f;
  CameraBoom->bUsePawnControlRotation = true; // Rotate arm based on controller

  // Create FollowCamera
  BaseCameras[0] = CreateDefaultSubobject<UCameraComponent>(TEXT("ARound_Camera"));
  BaseCameras[0]->SetupAttachment(CameraBoom, USpringArmComponent::SocketName); // Attach camera to end of boom
  BaseCameras[0]->bUsePawnControlRotation = false;                              // Let the arm control the rotation
  BaseCameras[0]->SetActive(false);
  BaseCameras[0]->SetAutoActivate(false);
  

  for(uint8 cam_loc_index=(uint8)EDIY_MainBaseCamLocType::Type_0_Lobby; cam_loc_index < (uint8)EDIY_MainBaseCamLocType::Count; cam_loc_index++)
  {
      BaseCameras[cam_loc_index]=CreateDefaultSubobject<UCameraComponent>(FName("BaseCamera_" +UEnum::GetValueAsString((EDIY_MainBaseCamLocType)cam_loc_index)));
      BaseCameras[cam_loc_index]->SetupAttachment(RootComponent);
      BaseCameras[cam_loc_index]->SetRelativeLocation(FVector(cam_loc_index, 0, 0));
      BaseCameras[cam_loc_index]->SetActive(false);
      BaseCameras[cam_loc_index]->SetAutoActivate(false);
  }


  
  for (uint8 light_loc_index = 0; light_loc_index < (uint8)EDIY_MainBaseLightLocType::Count; light_loc_index++)
  {
      BaseLights[light_loc_index] = CreateDefaultSubobject<UPointLightComponent>(FName("BaseLight_" + UEnum::GetValueAsString((EDIY_MainBaseLightLocType)light_loc_index)));
      BaseLights[light_loc_index]->SetupAttachment(RootComponent);
      BaseLights[light_loc_index]->SetRelativeLocation(FVector(0, 0, 0));
  }

 
  
#endif 
    
}

// Called when the game starts or when spawned
void ADIY_MainBaseManager::BeginPlay()
{
    Super::BeginPlay();
    if (EntranceCollisionCheckVolume!=nullptr)
    {
        EASY_LOG_MAINPLAYER("EntranceCollisionCheckVolume->OnComponentBeginOverlap.AddDynamic(this, &ADIY_MainBaseManager::CheckPawnEntrance);")
        EntranceCollisionCheckVolume->OnComponentBeginOverlap.AddDynamic(this, &ADIY_MainBaseManager::CheckPawnEntrance);
    }
}

// Called every frame
void ADIY_MainBaseManager::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
}

void ADIY_MainBaseManager::CheckPawnEntrance(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
    
    if (OtherActor && OtherActor->ActorHasTag(TEXT("Watcher"))&&Cast<UCapsuleComponent>(OtherComp)!=nullptr)
    {

        if(is_watcher_inside)
        {
            EASY_LOG_MAINPLAYER("Watcher left the gate!");
            SwitchToPawnCamera();
            is_watcher_inside=false;
        }
        else
        {
            EASY_LOG_MAINPLAYER("Watcher entered the gate!");

            SwitchToBaseCamera();
            is_watcher_inside = true;
        }
       
    }
    
}

void ADIY_MainBaseManager::SwitchBaseCamToType(EDIY_MainBaseCamLocType inType)
{
    
    checkf(BaseCameras.Num() > 0, TEXT("BaseCameras.Num() > 0"));

    if((int32)inType==CurCameraIndex)
    return;

    if(CurCameraIndex>=0)
    {
        BaseCameras[CurCameraIndex]->SetActive(false);
    }

    BaseCameras[(uint8)inType]->SetActive(true);
   

    CurCameraIndex = (uint8)inType;
    
    GetWorld()->GetFirstPlayerController()->SetViewTargetWithBlend(this, 0.5f);

    EASY_LOG_MAINPLAYER("SwitchBaseCamToType: %s",*UEnum::GetValueAsString(inType));
}
void ADIY_MainBaseManager::SwitchToBaseCamera()
{
#if 1
if (BaseCameras.Num() > 0 )
    {
        GetWorld()->GetFirstPlayerController()->SetViewTargetWithBlend(this, 0.5f);
        SwitchBaseCamToType(EDIY_MainBaseCamLocType::Type_Around_Cam_outSide);

    }
#endif
    
}

void ADIY_MainBaseManager::SwitchToPawnCamera()
{
    GetWorld()->GetFirstPlayerController()->SetViewTargetWithBlend(GetWorld()->GetFirstPlayerController()->GetPawn(), 0.5f);
}

void ADIY_MainBaseManager::SwitchCamType_Delta(int32 inStep)
{
    if (inStep == 0)
    {
        return;
    }

    int32 total_type_num=BaseCameras.Num();
    int32 new_index = CurCameraIndex + inStep;
    new_index = new_index % total_type_num;
    new_index = new_index < 0 ? total_type_num + new_index : new_index;
    EASY_LOG_MAINPLAYER("SwitchCamType_Delta: %d cam num %d", new_index,total_type_num);
    SwitchBaseCamToType((EDIY_MainBaseCamLocType)new_index);
    
}