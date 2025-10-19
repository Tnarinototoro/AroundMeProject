package com.aroundmelib;

import java.util.ArrayList;

public interface DIY_CommuManagerReportSchema
{
    default void OnCallBack_NewClassicDeviceEncountered_WithName(String inText)
    {
        return;
    }

    default void OnCallBack_OldClassicDeviceEncountered_WithName(String inText)
    {
        return;
    }
    default void OnCallBack_BLEDeviceEncountered_GarbageName()
    {
        return;
    }

    default void OnCallBack_NewBLEDeviceEncountered_WithName(String inText)
    {
        return;
    }

    default void OnCallBack_OldBLEDeviceEncountered_WithName(String inText)
    {
        return;
    }
    default void OnCallBack_ClassicDeviceEncountered_GarbageName()
    {
        return;
    }
    default void onLogReport(String inText,DIY_CommuUtils.LogLevel inLogLevel)
    {
        return;
    }

    default ArrayList<String> GetSp_deviceDisplayArrayList()
    {
        return null;
    }
    default ArrayList<String> GetRandom_deviceDisplayArrayList()
    {
        return null;
    }

    default void OnPostMainUpdate()
    {
        return;
    }
    default void OnSubmitInfoToUE5()
    {
        return;
    }

    default void OnPostResetAroundMeBluetoothService()
    {
        return;
    }
    default void PostStopAroundMeService()
    {
        return;
    }

    default void PostStartAroundMeService()
    {
        return;
    }
    default void PostMsgReceivedFromPDevice(String inText)
    {
        return;
    }
    default String GetInputMessage()
    {
        return "null";
    }

}
