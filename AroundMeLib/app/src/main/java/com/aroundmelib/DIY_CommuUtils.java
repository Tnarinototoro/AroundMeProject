package com.aroundmelib;
import android.bluetooth.BluetoothDevice;
import android.content.Context;
import android.net.wifi.p2p.WifiP2pDevice;
import android.os.Looper;
import android.util.Log;
import java.util.UUID;
import android.os.Handler;
import android.widget.Toast;


public class DIY_CommuUtils
{
    public enum LogLevel {
        INFO,       // 一般信息
        WARNING,    // 警告
        ERROR,      // 错误
        DEBUG,      // 调试信息
        SUCCESS     // 成功或确认信息
    }

    public static class DIY_WfdPeer {

        public String deviceName;
        public String macAddress;
        public int status;  // WifiP2pDevice status
        public boolean isConnected;
        public boolean isGroupOwner;
        public long lastSeenTime;

        public DIY_WfdPeer(WifiP2pDevice dev) {
            update(dev);
        }

        public void update(WifiP2pDevice dev) {
            deviceName = dev.deviceName;
            macAddress = dev.deviceAddress;
            status = dev.status;
            isConnected = (dev.status == WifiP2pDevice.CONNECTED);
            isGroupOwner = dev.isGroupOwner();
        }

        public String statusString() {
            switch (status) {
                case WifiP2pDevice.AVAILABLE: return "AVAILABLE";
                case WifiP2pDevice.CONNECTED: return "CONNECTED";
                case WifiP2pDevice.INVITED: return "INVITED";
                case WifiP2pDevice.FAILED: return "FAILED";
                case WifiP2pDevice.UNAVAILABLE: return "UNAVAILABLE";
            }
            return "UNKNOWN";
        }
    }



    // Base UUID 按照标准定义
    private static final long MSB = 0x0000000000001000L;
    private static final long LSB = 0x800000805f9b34fbL;
    private static final String TAG = "DIY_CommuUtils";

    public static final UUID mAroundMeIdentify_UUID = intToUUID(0xDE1FABE1);
    public static final UUID mAroundMe_CONNECT_CHARACTERISTIC_UUID = intToUUID(0xDE1FABE2);
    public static final UUID CLIENT_CHARACTERISTIC_CONFIG_UUID = intToUUID(0x2902);


    public static final int REQUEST_ENABLE_BT = 999;

    public static final int REQUEST_OPEN_PIC=1002;

    public static double calculateDistance(double rssi) {
        double RSSI_BASE = -69.0;
        double ENVIRONMENT_FACTOR = 2.0;
        return Math.pow(10, (RSSI_BASE - rssi) / (10 * ENVIRONMENT_FACTOR));
    }
    public static double calculateDistance(int rssi, int txPower)
    {
        if (rssi == 0)
        {
            return -1.0; // if we cannot determine accuracy, return -1.
        }
        double ratio = rssi * 1.0 / txPower;
        if (ratio < 1.0)
        {
            return Math.pow(ratio, 10);
        }
        else
        {
            double distance = 0.89976 * Math.pow(ratio, 7.7095) + 0.111;
            return distance;
        }
    }
    public static UUID intToUUID(int i)
    {
        return new UUID(MSB | ((long) i << 32), LSB);
    }

    public static void log(String message)
    {
        Log.d(TAG, message);
    }
    public static void PushToast(Context context, String message) {
        if (context == null) return;

        new Handler(Looper.getMainLooper()).post(() -> {
            Toast.makeText(context.getApplicationContext(), "🔧 " + message, Toast.LENGTH_SHORT).show();
        });
    }
}
