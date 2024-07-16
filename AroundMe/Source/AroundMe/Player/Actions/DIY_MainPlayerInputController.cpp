#include "DIY_MainPlayerInputController.h"
#include "EnhancedInputSubsystems.h"
#include "EnhancedInputComponent.h"
#include "InputMappingContext.h"
#include "DIY_MainPlayerActionController.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "DIY_ItemDetector.h"
#include "../../GameUtilities/Logs/DIY_LogHelper.h"
#include "../Camera/DIY_MainPlayerCameraController.h"
#include "../UI/DIY_MainPlayerUIController.h"
#include "../Items/DIY_Item.h"

UDIY_MainPlayerInputController::UDIY_MainPlayerInputController()
{
    // 启用每帧调用Tick()
    PrimaryComponentTick.bCanEverTick = true;
}

void UDIY_MainPlayerInputController::BeginPlay()
{
    Super::BeginPlay();
}

void UDIY_MainPlayerInputController::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction *ThisTickFunction)
{
    Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

    UpdateDesiredDir_ByPlayerInput_FollowCamView(DeltaTime);
}

void UDIY_MainPlayerInputController::SetupPlayerInputComponent(UInputComponent *PlayerInputComponent)
{

    // Enhanced Player Input
    UEnhancedInputComponent *EnhancedInput = Cast<UEnhancedInputComponent>(PlayerInputComponent);

    if (EnhancedInput)
    {
        if (nullptr != MainPlayerInputMappingContext)
        {
            TArray<FString> AlreadyLoadedInPutActionNames;
            const int mapping_num = MainPlayerInputMappingContext->GetMappings().Num();

            for (int mapping_index = 0; mapping_index < mapping_num; ++mapping_index)
            {

                const UInputAction *cur_action = MainPlayerInputMappingContext->GetMapping(mapping_index).Action;
                FString Cur_Action_Name{cur_action->GetName()};
                if (!AlreadyLoadedInPutActionNames.Contains(Cur_Action_Name))
                {
                    AlreadyLoadedInPutActionNames.Add(Cur_Action_Name);
                    EASY_LOG_MAINPLAYER("%s is binded well", *cur_action->GetName());

                    if (Cur_Action_Name == "IA_DIY_Mouse")
                    {
                        EnhancedInput->BindAction(cur_action, ETriggerEvent::Triggered, this, &UDIY_MainPlayerInputController::HandleXYMouseMove);
                    }
                    else if (Cur_Action_Name == "IA_DIY_Move")
                    {

                        EnhancedInput->BindAction(cur_action, ETriggerEvent::Triggered, this, &UDIY_MainPlayerInputController::HandleXYPlayerMove);
                        EnhancedInput->BindAction(cur_action, ETriggerEvent::Completed, this, &UDIY_MainPlayerInputController::HandleXYPlayerMoveInputFinished);
                    }
                    else if (Cur_Action_Name == "IA_DIY_Jump")
                    {

                        EnhancedInput->BindAction(cur_action, ETriggerEvent::Started, this, &UDIY_MainPlayerInputController::HandlePlayerJump);
                    }
                    else if (Cur_Action_Name == "IA_DIY_Interact")
                    {

                        EnhancedInput->BindAction(cur_action, ETriggerEvent::Started, this, &UDIY_MainPlayerInputController::onInteractPressed);
                        EnhancedInput->BindAction(cur_action, ETriggerEvent::Completed, this, &UDIY_MainPlayerInputController::onInteractReleased);
                        EnhancedInput->BindAction(cur_action, ETriggerEvent::Triggered, this, &UDIY_MainPlayerInputController::onInteractTriggered);
                        EnhancedInput->BindAction(cur_action, ETriggerEvent::Ongoing, this, &UDIY_MainPlayerInputController::onInteractPressing);
                    }
                    else if ("IA_DIY_ToggleBackPack" == Cur_Action_Name)
                    {
                        EnhancedInput->BindAction(cur_action, ETriggerEvent::Completed, this, &UDIY_MainPlayerInputController::HandleTabKeyInputProcess);
                    }
                    else if ("IA_DIY_BackPackMoveCursor" == Cur_Action_Name)
                    {
                        EnhancedInput->BindAction(cur_action, ETriggerEvent::Triggered, this, &UDIY_MainPlayerInputController::HandleBackPackUIMoveProcess_Triggered);
                        EnhancedInput->BindAction(cur_action, ETriggerEvent::Completed, this, &UDIY_MainPlayerInputController::HandleBackPackUIMoveProcess_Completed);
                    }
                    else if ("IA_DIY_E_Key" == Cur_Action_Name)
                    {
                        EnhancedInput->BindAction(cur_action, ETriggerEvent::Completed, this, &UDIY_MainPlayerInputController::HandleKey_E_Input);
                    }
                }
            }
        }
    }
}

void UDIY_MainPlayerInputController::HandleXYPlayerMove(const FInputActionValue &Value)
{

    inPutVector2D = Value.Get<FVector2D>();

    // FVector ActorLocation = GetActorLocation();
    // FVector EndLocation = ActorLocation + DesiredDir_ByPlayerInput_FollowCamView * 600.f;
    // DrawDebugLine(GetWorld(), ActorLocation, EndLocation, FColor::Red, false, -1, 0, 10);

    IsInputingMove = true;
}

void UDIY_MainPlayerInputController::HandlePlayerJump(const FInputActionValue &Value)
{
    TriggerProcessJumpInput.Broadcast(Value);
    AcquireOwnerActorOwnedUDIY_MainPlayerActionController()->ProcessJumpInput();
}

void UDIY_MainPlayerInputController::onInteractPressed(const FInputActionValue &Value)
{
    EASY_LOG_MAINPLAYER("onInteractPressed")

    bool is_sub_menu_opened = AcquireOwnerActorOwnedUDIY_MainPlayerUIController()->IsItemSubMenuShown();
    bool is_backpack_opened = AcquireOwnerActorOwnedUDIY_MainPlayerUIController()->IsBackPackUiOpened();

    if (is_sub_menu_opened && is_backpack_opened)
    {
        AcquireOwnerActorOwnedUDIY_MainPlayerUIController()->ExecuteCurrentItemSubMenuCommand();

        return;
    }

    if (!is_sub_menu_opened && !is_backpack_opened)
    {
        AActor *detected_actor = AcquireOwnerActorOwnedUDIY_ItemDetector()->GetDetectedActor();

        ADIY_ItemBase *cur_item = Cast<ADIY_ItemBase>(detected_actor);

        bool is_pickable = false;

        if (cur_item != nullptr)
        {
            is_pickable = cur_item->CheckItemFlag(EDIY_InteractItemFlag::Obey_Physics_Rules);
        }
        static bool execute_pick_up{true};
        if (execute_pick_up)
        {
            if (AcquireOwnerActorOwnedUDIY_MainPlayerActionController()->CurrentActingState == EMainPlayerActingStateType::State_Base_Motion)
            {
                if (nullptr != detected_actor && is_pickable)
                {
                    AcquireOwnerActorOwnedUDIY_MainPlayerActionController()->PicUpDetectedItem(detected_actor, "hand_rSocket");

                    AcquireOwnerActorOwnedUDIY_MainPlayerActionController()->CurrentActingState = EMainPlayerActingStateType::State_PickingUp;
                    EASY_LOG_MAINPLAYER("Picked up the actor yyyyyyyy");
                }
            }

            execute_pick_up = false;
        }
        else
        {
            if (AcquireOwnerActorOwnedUDIY_MainPlayerActionController()->CurrentActingState == EMainPlayerActingStateType::State_PickingUp)
            {
                AcquireOwnerActorOwnedUDIY_MainPlayerActionController()->PlacePickedUpItem();
                AcquireOwnerActorOwnedUDIY_MainPlayerActionController()->CurrentActingState = EMainPlayerActingStateType::State_Base_Motion;
                EASY_LOG_MAINPLAYER("PLaced the actorxxxxxxxx");
            }

            execute_pick_up = true;
        }
    }
}

void UDIY_MainPlayerInputController::onInteractReleased(const FInputActionValue &Value)
{
    EASY_LOG_MAINPLAYER("Holding holding released");
}

void UDIY_MainPlayerInputController::onInteractPressing(const FInputActionValue &Value)
{
    EASY_LOG_MAINPLAYER("onInteractPressing !!!!");
}
void UDIY_MainPlayerInputController::onInteractTriggered(const FInputActionValue &Value)
{
    EASY_LOG_MAINPLAYER("Interct Holding !!!!");
}

void UDIY_MainPlayerInputController::HandleXYPlayerMoveInputFinished(const FInputActionValue &Value)
{

    // EASY_LOG_MAINPLAYER("XY INPUT FINISHED");
    inPutVector2D = inPutVector2D.Zero();
    IsInputingMove = false;
}
void UDIY_MainPlayerInputController::HandleXYMouseMove(const FInputActionValue &Value)
{
    FVector2D Axis2DValue = Value.Get<FVector2D>();
    bool is_backpack_open = AcquireOwnerActorOwnedUDIY_MainPlayerUIController()->IsUISectionVisible(EMainPlayerUISectionID::BackPack);
    if (is_backpack_open)
    {
        if (AcquireOwnerActorOwnedUDIY_MainPlayerUIController()->IsItemSubMenuShown())
        {
            int delta_move = FMath::Clamp<int>((int)Axis2DValue.Y, -1, 1);
            AcquireOwnerActorOwnedUDIY_MainPlayerUIController()->RequestMoveSubMenuChoice(-delta_move);
        }
        else
        {
            int delta_x = FMath::Clamp<int>((int)Axis2DValue.X, -1, 1);
            int delta_y = FMath::Clamp<int>((int)Axis2DValue.Y, -1, 1);

            AcquireOwnerActorOwnedUDIY_MainPlayerUIController()->RequestMoveCurrentSelectedCursor(delta_x, -delta_y);
        }
    }
    else
    {
        AcquireOwnerActorOwnedUDIY_MainPlayerCameraController()->HandleMouseMoveForUpDownCam(Axis2DValue);
    }
}

void UDIY_MainPlayerInputController::RegisterInputMappings(APlayerController *PC)
{

    check(nullptr != PC);
    UEnhancedInputLocalPlayerSubsystem *Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(PC->GetLocalPlayer());
    // PawnClientRestart can run more than once in an Actor's lifetime, so start by clearing out any leftover mappings.
    Subsystem->ClearAllMappings();
    if (nullptr != MainPlayerInputMappingContext)
    {
        EASY_LOG_MAINPLAYER("MainPlayerInputMappingContext added");
        // Add each mapping context, along with their priority values. Higher values outprioritize lower values.
        Subsystem->AddMappingContext(MainPlayerInputMappingContext, 1);
    }
}

void UDIY_MainPlayerInputController::UpdateDesiredDir_ByPlayerInput_FollowCamView(float DeltaTime)
{
    FVector ForwardActorVector = AcquireOwnerActorOwnedUDIY_MainPlayerCameraController()->FollowCamera->GetForwardVector();
    FVector RightActorVector = AcquireOwnerActorOwnedUDIY_MainPlayerCameraController()->FollowCamera->GetRightVector();
    ForwardActorVector.Normalize();
    RightActorVector.Normalize();
    ForwardActorVector.Z = 0;
    RightActorVector.Z = 0;

    DesiredDir_ByPlayerInput_FollowCamView = (ForwardActorVector * inPutVector2D.Y + RightActorVector * inPutVector2D.X);

    if (!DesiredDir_ByPlayerInput_FollowCamView.IsNormalized())
    {
        DesiredDir_ByPlayerInput_FollowCamView.Normalize();
    }
}
void UDIY_MainPlayerInputController::HandleTabKeyInputProcess(const FInputActionValue &Value)
{

    AcquireOwnerActorOwnedUDIY_MainPlayerUIController()->ToggleBackPackUI(!AcquireOwnerActorOwnedUDIY_MainPlayerUIController()->IsUISectionVisible(EMainPlayerUISectionID::BackPack));
}

void UDIY_MainPlayerInputController::HandleBackPackUIMoveProcess_Completed(const FInputActionValue &Value)
{
    FVector2D Axis2DValue = Value.Get<FVector2D>();
    AcquireOwnerActorOwnedUDIY_MainPlayerUIController()->RequestMoveCurrentSelectedCursor((int)(inPutBackPack_CursorMoveDir.X), -(int)(inPutBackPack_CursorMoveDir.Y));
    inPutBackPack_CursorMoveDir = FVector2D::ZeroVector;
    EASY_LOG_MAINPLAYER("HandleBackPackUIMoveProcess completed %f, %f", Axis2DValue.X, Axis2DValue.Y);
}

void UDIY_MainPlayerInputController::HandleBackPackUIMoveProcess_Triggered(const FInputActionValue &Value)
{
    FVector2D Axis2DValue = Value.Get<FVector2D>();
    inPutBackPack_CursorMoveDir.X = FMath::Clamp(Axis2DValue.X, -1.0f, 1.0f);
    inPutBackPack_CursorMoveDir.Y = FMath::Clamp(Axis2DValue.Y, -1.0f, 1.0f);
    EASY_LOG_MAINPLAYER("HandleBackPackUIMoveProcess Triggered %f, %f", Axis2DValue.X, Axis2DValue.Y);
}
void UDIY_MainPlayerInputController::HandleKey_E_Input(const FInputActionValue &Value)
{
    float Value_aixs = Value.Get<FInputActionValue::Axis1D>();
    // EASY_LOG_MAINPLAYER("HandleKey_E_Input Triggered %f ", Value_aixs);

    bool is_sub_menu_opened = AcquireOwnerActorOwnedUDIY_MainPlayerUIController()->IsItemSubMenuShown();
    bool is_backpack_opened = AcquireOwnerActorOwnedUDIY_MainPlayerUIController()->IsBackPackUiOpened();
    AActor *detected_actor = AcquireOwnerActorOwnedUDIY_ItemDetector()->GetDetectedActor();

    if (nullptr != detected_actor)
    {
        AcquireOwnerActorOwnedUDIY_MainPlayerUIController()->RequestAddItemToBackPack(detected_actor);
        AcquireOwnerActorOwnedUDIY_ItemDetector()->ClearDetectedActor();
    }
    else
    {
        if (is_backpack_opened)
        {
            AcquireOwnerActorOwnedUDIY_MainPlayerUIController()->ToggleItemSubMenuAtCurrentSelectedSlot();
        }
    }
}

IMPL_GET_COMPONENT_HELPER_FOR_COMPONENT(UDIY_MainPlayerInputController, UDIY_MainPlayerCameraController)

IMPL_GET_COMPONENT_HELPER_FOR_COMPONENT(UDIY_MainPlayerInputController, UDIY_MainPlayerActionController)

IMPL_GET_COMPONENT_HELPER_FOR_COMPONENT(UDIY_MainPlayerInputController, UDIY_ItemDetector)
IMPL_GET_COMPONENT_HELPER_FOR_COMPONENT(UDIY_MainPlayerInputController, UDIY_MainPlayerUIController)