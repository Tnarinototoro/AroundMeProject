package com.aroundmelib;

import android.net.wifi.p2p.WifiP2pDeviceList;

import java.io.File;
import java.util.List;

public interface DIY_PassByManagerReportSchema
{
    default void onReportPeersInfo(
            WifiP2pDeviceList rawPeers,
            List<DIY_CommuUtils.DIY_WfdPeer> fullPeerList) {return;}

    default void onWIFILogReport(String inText, DIY_CommuUtils.LogLevel inLogLevel)
    {
        return;
    }
    default void onTextMessage(String text){}
    default void onImageReceived(File file){}
}
