package com.aroundmelib;

import android.bluetooth.BluetoothDevice;

import java.util.ArrayList;

public interface DIY_CommuManagerReportSchema
{
    default void OnCallBack_NewRandomDeviceEncountered_WithName(String inText)
    {
        return;
    }

    default void OnCallBack_OldRandomDeviceEncountered_WithName(String inText)
    {
        return;
    }
    default void OnCallBack_NewRandomDeviceEncountered_GarbageName()
    {
        return;
    }
    default void onLogReport(String inText)
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


}
