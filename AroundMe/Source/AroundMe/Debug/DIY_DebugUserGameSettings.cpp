// Fill out your copyright notice in the Description page of Project Settings.

#include "DIY_DebugUserGameSettings.h"

UDIY_DebugGameSettings::UDIY_DebugGameSettings()
    : Super(),
      EnableImGuiShortcuts({FDIY_DebugComboKey({EKeys::LeftShift, EKeys::O, EKeys::LeftControl}),
                            FDIY_DebugComboKey({EKeys::Gamepad_LeftShoulder, EKeys::Gamepad_RightShoulder, EKeys::Gamepad_LeftTrigger, EKeys::Gamepad_RightTrigger})}),
      EnableWindowsShortcuts({FDIY_DebugComboKey({EKeys::LeftShift, EKeys::P, EKeys::LeftControl})}),
      CaptureKeyMouseShortcuts({FDIY_DebugComboKey({EKeys::LeftShift, EKeys::I, EKeys::LeftControl})}),
      CaptureGamepadShortcuts({FDIY_DebugComboKey({EKeys::LeftShift, EKeys::J, EKeys::LeftControl}),
                               FDIY_DebugComboKey({EKeys::Gamepad_Special_Left, EKeys::Gamepad_LeftShoulder})})
{
}