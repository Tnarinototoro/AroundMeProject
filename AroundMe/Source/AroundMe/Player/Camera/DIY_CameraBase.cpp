#include "DIY_CameraBase.h"
#include "DIY_CameraManager.h"

void ADIY_CameraBase::BeginPlay()
{
    Super::BeginPlay();

    CameraEntry.CameraActor = this;

    if(UDIY_CameraManager* CM=UDIY_CameraManager::Get(this))
    {
        ensureAlwaysMsgf(CameraEntry.CameraActor.IsValid(),TEXT("Camera Entry Failed with empty camera actor with name %s"),*CameraEntry.CameraName.ToString());
        CM->AddCameraEntry(CameraEntry);
        if(!CM->OnCameraInUseChanged.IsAlreadyBound(this,&ADIY_CameraBase::OnCameraInUseChanged))
        {
            CM->OnCameraInUseChanged.AddDynamic(this,&ADIY_CameraBase::OnCameraInUseChanged);
        }
        
    }
    

}

void ADIY_CameraBase::EndPlay(const EEndPlayReason::Type EndPlayReason)
{

    if (UDIY_CameraManager *CM = UDIY_CameraManager::Get(this))
    {
        CM->RemoveCameraEntry(CameraEntry.CameraName);
        if (CM->OnCameraInUseChanged.IsAlreadyBound(this, &ADIY_CameraBase::OnCameraInUseChanged))
        {
            CM->OnCameraInUseChanged.RemoveDynamic(this, &ADIY_CameraBase::OnCameraInUseChanged);
        }
    }

    Super::EndPlay(EndPlayReason);

}

void ADIY_CameraBase::Destroyed()
{
    if(UDIY_CameraManager* CM=UDIY_CameraManager::Get(this))
    {
        CM->RemoveCameraEntry(CameraEntry.CameraName);
        if (CM->OnCameraInUseChanged.IsAlreadyBound(this, &ADIY_CameraBase::OnCameraInUseChanged))
        {
            CM->OnCameraInUseChanged.RemoveDynamic(this, &ADIY_CameraBase::OnCameraInUseChanged);
        }
    }
    
    Super::Destroyed();
}

void ADIY_CameraBase::OnCameraInUseChanged(AActor *NewCameraActor)
{
    if (nullptr == NewCameraActor)
        return;
    
    if(nullptr!=InputComponent)
    {
        if(NewCameraActor==this)
        {
            EnableInput(GetWorld()->GetFirstPlayerController());
        }
        else
        {
            DisableInput(GetWorld()->GetFirstPlayerController());
        }
        
    }
    

}

ADIY_CameraBase::ADIY_CameraBase()
{

}

ADIY_CameraBase::~ADIY_CameraBase()
{

}
