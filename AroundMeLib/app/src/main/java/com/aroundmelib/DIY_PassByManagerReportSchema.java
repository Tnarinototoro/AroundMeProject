package com.aroundmelib;

import android.net.wifi.p2p.WifiP2pDeviceList;

public interface DIY_PassByManagerReportSchema
{
    default public void onPeersAvailable(WifiP2pDeviceList peers)
    {
        return;
    }

}
