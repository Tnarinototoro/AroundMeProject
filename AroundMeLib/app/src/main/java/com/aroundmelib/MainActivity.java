package com.aroundmelib;

import android.Manifest;
import android.annotation.SuppressLint;
import android.app.Activity;
import android.bluetooth.BluetoothAdapter;
import android.bluetooth.BluetoothDevice;
import android.app.Notification;
import android.app.NotificationChannel;
import android.app.NotificationManager;
import android.app.Service;
import android.content.Context;
import android.content.Intent;
import android.os.Build;
import android.os.IBinder;
import android.util.Log;

import androidx.annotation.Nullable;
import androidx.appcompat.app.AppCompatActivity;
import androidx.core.app.NotificationCompat;
import android.bluetooth.BluetoothGatt;
import android.bluetooth.BluetoothGattCallback;
import android.bluetooth.BluetoothGattCharacteristic;
import android.bluetooth.BluetoothGattDescriptor;
import android.bluetooth.BluetoothGattServer;
import android.bluetooth.BluetoothGattServerCallback;
import android.bluetooth.BluetoothGattService;
import android.bluetooth.BluetoothManager;
import android.bluetooth.BluetoothProfile;
import android.bluetooth.le.AdvertiseCallback;
import android.bluetooth.le.AdvertiseData;
import android.bluetooth.le.AdvertiseSettings;
import android.bluetooth.le.BluetoothLeAdvertiser;
import android.bluetooth.le.BluetoothLeScanner;
import android.bluetooth.le.ScanCallback;
import android.bluetooth.le.ScanFilter;
import android.bluetooth.le.ScanResult;
import android.bluetooth.le.ScanSettings;
import android.content.BroadcastReceiver;
import android.content.Context;
import android.content.Intent;
import android.content.IntentFilter;
import android.content.pm.PackageManager;
import android.net.wifi.p2p.WifiP2pManager;
import android.os.Build;
import android.os.Bundle;
import android.os.Handler;
import android.os.ParcelUuid;
import android.view.MotionEvent;
import android.view.View;
import android.widget.ArrayAdapter;
import android.widget.Button;
import android.widget.EditText;
import android.widget.LinearLayout;
import android.widget.ListView;
import android.widget.ScrollView;
import android.widget.TextView;

import androidx.activity.result.ActivityResultLauncher;
import androidx.activity.result.contract.ActivityResultContracts;
import androidx.appcompat.app.AppCompatActivity;
import androidx.core.app.ActivityCompat;
import androidx.core.content.ContextCompat;

import java.nio.charset.Charset;
import java.nio.charset.StandardCharsets;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.HashMap;
import java.util.List;
import java.util.Map;
import java.util.UUID;

import com.example.com.aroundmelib.R;

@SuppressLint("MissingPermission")
public class MainActivity extends AppCompatActivity
{


    //Class Definitions
    public class DIY_DebugUIUtility {
        public static final boolean mDebug_With_UI = true;

        public View mLog_button_divider = null;

        public View mUtility_DeviceList_divider = null;
        public LinearLayout mbuttonPanel = null;
        public LinearLayout mlogPanel = null;

        public LinearLayout mUtilityPanel = null;
        public LinearLayout mDeviceListPanel = null;


        public EditText mInputMessage = null;
        public Button mButton_StartScan = null;
        public Button mButton_CancelScan = null;
        public boolean mLogViewautoScroll = true;
        public ListView mSp_Device_listView = null;
        public ListView mRandom_Device_listView = null;
        public TextView mLogTextView = null;

        public TextView mMacAddrCountView = null;
        public ScrollView mLogScrollView = null;
        public ArrayAdapter<String> mSp_deviceArrayAdapter = null;
        public ArrayAdapter<String> mRandom_deviceArrayAdapter = null;

        public void ToggleButtons()
        {
            if (mButton_CancelScan != null && mButton_StartScan != null) {

                mButton_StartScan.setEnabled(!mButton_StartScan.isEnabled());
                mButton_CancelScan.setEnabled(!mButton_CancelScan.isEnabled());
            }
        }

        public void scrollToBottom()
        {
            mLogScrollView.post(() -> mLogScrollView.fullScroll(View.FOCUS_DOWN));
        }


    }

    ;

    public class DIY_GameUtility
    {

        public double calculateDistance(double rssi)
        {

            double RSSI_BASE = -69.0;
            double ENVIRONMENT_FACTOR = 2.0;
            return Math.pow(10, (RSSI_BASE - rssi) / (10 * ENVIRONMENT_FACTOR));
        }

        public double calculateDistance(int rssi, int txPower)
        {

            if (rssi == 0)
            {
                return -1.0; // if we cannot determine accuracy, return -1.
            }
            double ratio = rssi * 1.0 / txPower;
            if (ratio < 1.0)
            {
                return Math.pow(ratio, 10);
            } else
            {
                double distance = 0.89976 * Math.pow(ratio, 7.7095) + 0.111;
                return distance;
            }
        }


    }

    ;

    public class PlayerDeviceInfo
    {
        public String mDeviceName = null;
        public String mRegisteredPlayerDeviceMacAddr = null;

        public int mDeviceType = 0;
        public double mDistance = -1.0f;
        public int mIndex = 0;

        public String GenerateDisplayString()
        {
            return mDeviceName + "@Mac:" + mRegisteredPlayerDeviceMacAddr + "@Dist:" + String.format("%.2f", mDistance);
        }
    };










    //Simple Variables
    private static final int PERMISSION_REQUEST_FINE_LOCATION = 1;
    private static final int PERMISSION_REQUEST_BLUETOOTH = 2;

    private static final int REQUEST_ENABLE_BT = 999;
    BluetoothManager mBluetoothManager;
    private final UUID mAroundMeIdentify_UUID = UUID.fromString("fd4e1f57-110a-4d52-9a5b-fe97e0dcf7bb");
    private static final UUID CLIENT_CHARACTERISTIC_CONFIG_UUID = UUID
            .fromString("00002902-0000-1000-8000-00805f9b34fb");
    public final UUID mAroundMe_CONNECT_CHARACTERISTIC_UUID = UUID.fromString("0C136FCC-3381-4F1E-9602-E2A3F8B70CEB");
    /**
     * public static final String mAroundMe_READ_CHARACTERISTIC_UUID =
     * "1BE31CB9-9E07-4892-AA26-30E87ABE9F70";
     */
    private BluetoothAdapter mBluetoothAdapter;

    private BluetoothLeScanner mBluetoothLeScanner;

    private BluetoothGattServer mBluetoothGattServer;
    private Handler mHandler = new Handler();

    private ArrayList<String> mSp_deviceDisplayArrayList;

    private ArrayList<String> mRandom_deviceDisplayArrayList;

    private Map<String, PlayerDeviceInfo> mDeviceInfoAll = new HashMap<>();



    private float mDeviceEmergingSpeed=0.f;

    private boolean mIsAroundMeServiceRunning = false;



    public DIY_DebugUIUtility gDIY_DebugUIUtility=new DIY_DebugUIUtility();
    public DIY_GameUtility gDIY_GameUtility = new DIY_GameUtility();
    WifiP2pManager manager;
    WifiP2pManager.Channel channel;
    public static final long mTimeIntervalToSendLastDeviceEmergingSpeed=5000;














    // Complicated variable or callbacks
    private ScanCallback mBLEScanCallback = new ScanCallback()
    {
        @Override
        public void onScanResult(int callbackType, ScanResult result)
        {
            super.onScanResult(callbackType, result);

            BluetoothDevice result_device = result.getDevice();
            result_device.getType();
            String result_device_mac_addr = result_device.getAddress();

            if (result_device.getName() != null && !result_device.getName().equals("null"))
            {

                if (mDeviceInfoAll.containsKey(result_device.getName()))
                {


                    PlayerDeviceInfo cur_player_info = mDeviceInfoAll.get(result_device.getName());

                    if (null != cur_player_info)
                    {
                        int rssi = result.getRssi();
                        // TODO: Replace with the actual TX Power value for your beacon or BLE device
                        int txPower = -59; // This is just an example value, you need the actual TX Power for accurate
                        // results

                        double estimatedDistance_new = gDIY_GameUtility.calculateDistance(rssi, txPower);


                        cur_player_info.mDistance = (estimatedDistance_new+cur_player_info.mDistance)/2.0f;
                        cur_player_info.mRegisteredPlayerDeviceMacAddr=result_device_mac_addr;
                        mSp_deviceDisplayArrayList.set(cur_player_info.mIndex, cur_player_info.GenerateDisplayString());

                        if (gDIY_DebugUIUtility.mDebug_With_UI)
                        {
                            gDIY_DebugUIUtility.mSp_deviceArrayAdapter.notifyDataSetChanged();
                        }

                    }

                }
                else
                {


                    int rssi = result.getRssi();
                    // TODO: Replace with the actual TX Power value for your beacon or BLE device
                    int txPower = -59; // This is just an example value, you need the actual TX Power for accurate
                    // results

                    double estimatedDistance = gDIY_GameUtility.calculateDistance(rssi, txPower);

                    PlayerDeviceInfo player_info = new PlayerDeviceInfo();

                    player_info.mDeviceName = result_device.getName();
                    player_info.mDeviceType = result_device.getType();
                    player_info.mDistance = estimatedDistance;
                    player_info.mRegisteredPlayerDeviceMacAddr = result_device_mac_addr;
                    player_info.mIndex = mSp_deviceDisplayArrayList.size();
                    mDeviceInfoAll.put(player_info.mDeviceName, player_info);


                    mSp_deviceDisplayArrayList.add(player_info.GenerateDisplayString());

                    // OnNewMacAddressEncountered();
                    if (gDIY_DebugUIUtility.mDebug_With_UI)
                    {
                        gDIY_DebugUIUtility.mSp_deviceArrayAdapter.notifyDataSetChanged();

                    } else
                    {
                        OnNewRandomDeviceEncountered_WithName(player_info.GenerateDisplayString());
                    }

                }
            }


        }

        @Override
        public void onScanFailed(int errorCode) {
            super.onScanFailed(errorCode);
            appendToLog("BLE Scan Started Failed! with error code: " + errorCode);

            // Scanning failed. Handle error.
        }

        // 其他回调方法，如onBatchScanResults, onScanFailed等
    };



    private Runnable UpdatesBTScanning_Runnable_UI = new Runnable()
    {

        @Override
        public void run()
        {


            //@TODO change interval
            mHandler.postDelayed(UpdatesBTScanning_Runnable_UI, 2000); // Schedule the next message in 2 seconds
            if (gDIY_DebugUIUtility.mDebug_With_UI)
                gDIY_DebugUIUtility.mMacAddrCountView.setText(GetCurrentNumStatus());
        }
    };
    private Runnable MonitorDeviceEmergingSpeed = new Runnable()
    {

        @Override
        public void run()
        {
            appendToLog("running MonitorDeviceEmergingSpeed");
            //@TODO change interval
            mHandler.postDelayed(MonitorDeviceEmergingSpeed, mTimeIntervalToSendLastDeviceEmergingSpeed); // Schedule the next message in 2 seconds
            mDeviceEmergingSpeed=(float)mDeviceInfoAll.size()/((float)mTimeIntervalToSendLastDeviceEmergingSpeed/1000);
            mDeviceInfoAll.clear();
            mSp_deviceDisplayArrayList.clear();
            gDIY_DebugUIUtility.mSp_deviceArrayAdapter.notifyDataSetChanged();
            if(!gDIY_DebugUIUtility.mDebug_With_UI)
            {
                OnUploadNewDeviceEmergingSpeed(mDeviceEmergingSpeed);
            }

        }
    };



public void PostAllUpdatings()
{
    mHandler.post(UpdatesBTScanning_Runnable_UI);
    mHandler.post(MonitorDeviceEmergingSpeed);
}


public void RemoveAllUpdatings()
{
    mHandler.removeCallbacks(UpdatesBTScanning_Runnable_UI);
    mHandler.removeCallbacks(MonitorDeviceEmergingSpeed);
}

















    protected void NotifyLeScanStopped() {
        appendToLog("BLE搜索结束...");
        if (gDIY_DebugUIUtility.mDebug_With_UI) {
            gDIY_DebugUIUtility.ToggleButtons();
        }

    }

    private void StopAroundMeService()
    {
        if (!mBluetoothAdapter.isEnabled())
        {

            Intent enableBtIntent = new Intent(BluetoothAdapter.ACTION_REQUEST_ENABLE);
            startActivityForResult(enableBtIntent, REQUEST_ENABLE_BT);
        } else
        {




            if (mBluetoothLeScanner != null && mBLEScanCallback != null) {
                mBluetoothLeScanner.stopScan(mBLEScanCallback);
            }

            NotifyLeScanStopped();


            mSp_deviceDisplayArrayList.clear();
            mRandom_deviceDisplayArrayList.clear();
            if (gDIY_DebugUIUtility.mDebug_With_UI)
            {
                gDIY_DebugUIUtility.mRandom_deviceArrayAdapter.notifyDataSetChanged();
                gDIY_DebugUIUtility.mSp_deviceArrayAdapter.notifyDataSetChanged();
            }

            if (mDeviceInfoAll != null)
            {
                mDeviceInfoAll.clear();
            }



        }
        mRandom_deviceDisplayArrayList.clear();

        RemoveAllUpdatings();
        mIsAroundMeServiceRunning = false;
    }

    private void StartAroundMeService() {
        if (!mBluetoothAdapter.isEnabled()) {

            Intent enableBtIntent = new Intent(BluetoothAdapter.ACTION_REQUEST_ENABLE);
            startActivityForResult(enableBtIntent, REQUEST_ENABLE_BT);

        } else
        {





           StartScanning();

            if (gDIY_DebugUIUtility.mDebug_With_UI)
            {
                gDIY_DebugUIUtility.ToggleButtons();
            }

            PostAllUpdatings();
            mIsAroundMeServiceRunning = true;

        }
    }


    private void StartScanning()
    {
        ScanFilter scanFilter = new ScanFilter.Builder().build();
//                .Builder()
//                .setServiceUuid(new ParcelUuid(mAroundMeIdentify_UUID))
//                .build();

        ScanSettings scanSettings = new ScanSettings.Builder()
                .setScanMode(ScanSettings.SCAN_MODE_LOW_LATENCY)
                .build();

        mBluetoothLeScanner.startScan(Arrays.asList(scanFilter), scanSettings, mBLEScanCallback);
        appendToLog("BLE Scanning started!");
    }
























    //Activity events
    @Override
    protected void onCreate(Bundle savedInstanceState)
    {
        super.onCreate(savedInstanceState);

        // UI gadgets fixing
        {


            if (gDIY_DebugUIUtility.mDebug_With_UI)
            {
                // layout setting
                setContentView(R.layout.activity_main);
            }

            // sp device list view init
            {
                // device array list\adaptor init
                mSp_deviceDisplayArrayList = new ArrayList<>();

                if (gDIY_DebugUIUtility.mDebug_With_UI)
                {
                    gDIY_DebugUIUtility.mSp_deviceArrayAdapter = new ArrayAdapter<>(this, android.R.layout.simple_list_item_1,
                            mSp_deviceDisplayArrayList);

                    // list view set the adaptor and view
                    gDIY_DebugUIUtility.mSp_Device_listView = findViewById(R.id.sp_device_list);
                    gDIY_DebugUIUtility.mSp_Device_listView.setAdapter(gDIY_DebugUIUtility.mSp_deviceArrayAdapter);
                }

            }

            // random device list view init
            {
                // device array list\adaptor init
                mRandom_deviceDisplayArrayList = new ArrayList<>();

                if (gDIY_DebugUIUtility.mDebug_With_UI) {
                    gDIY_DebugUIUtility.mRandom_deviceArrayAdapter = new ArrayAdapter<>(this, android.R.layout.simple_list_item_1,
                            mRandom_deviceDisplayArrayList);
                    // list view set the adaptor and view
                    gDIY_DebugUIUtility.mRandom_Device_listView = findViewById(R.id.random_device_list);
                    gDIY_DebugUIUtility.mRandom_Device_listView.setAdapter(gDIY_DebugUIUtility.mRandom_deviceArrayAdapter);
                }

            }

            if (gDIY_DebugUIUtility.mDebug_With_UI) {
                // text and button binding
                gDIY_DebugUIUtility.mButton_StartScan = this.findViewById(R.id.button_start);
                gDIY_DebugUIUtility.mButton_CancelScan = this.findViewById(R.id.button_stop);

                gDIY_DebugUIUtility.mButton_StartScan.setEnabled(true);
                gDIY_DebugUIUtility.mButton_CancelScan.setEnabled(false);

                gDIY_DebugUIUtility.mLogTextView = findViewById(R.id.log_text_view);
                gDIY_DebugUIUtility.mLogScrollView = findViewById(R.id.log_scroll_view);
                gDIY_DebugUIUtility.mInputMessage = findViewById(R.id.input_message);
                gDIY_DebugUIUtility.mMacAddrCountView = findViewById(R.id.Mac_Addr_Count);
                gDIY_DebugUIUtility.mLog_button_divider = findViewById(R.id.divider);
                gDIY_DebugUIUtility.mUtility_DeviceList_divider = findViewById(R.id.divider_y);
                gDIY_DebugUIUtility.mbuttonPanel = findViewById(R.id.button_panel);
                gDIY_DebugUIUtility.mlogPanel = findViewById(R.id.log_panel);

                gDIY_DebugUIUtility.mUtilityPanel = findViewById(R.id.utility_panel);
                gDIY_DebugUIUtility.mDeviceListPanel = findViewById(R.id.Device_list_panel);
                gDIY_DebugUIUtility.mLog_button_divider.setOnTouchListener(new View.OnTouchListener() {
                    private float initialX;
                    private int initialButtonPanelWidth;

                    @Override
                    public boolean onTouch(View v, MotionEvent event) {
                        switch (event.getAction()) {
                            case MotionEvent.ACTION_DOWN:
                                initialX = event.getX();
                                initialButtonPanelWidth = gDIY_DebugUIUtility.mbuttonPanel.getWidth();
                                return true;
                            case MotionEvent.ACTION_MOVE:
                                float deltaX = event.getX() - initialX;
                                int newButtonPanelWidth = initialButtonPanelWidth + (int) deltaX;

                                LinearLayout.LayoutParams params = (LinearLayout.LayoutParams) gDIY_DebugUIUtility.mbuttonPanel
                                        .getLayoutParams();
                                params.width = newButtonPanelWidth;
                                gDIY_DebugUIUtility.mbuttonPanel.setLayoutParams(params);

                                params = (LinearLayout.LayoutParams) gDIY_DebugUIUtility.mlogPanel.getLayoutParams();
                                params.width = gDIY_DebugUIUtility.mlogPanel.getWidth() - (int) deltaX;
                                gDIY_DebugUIUtility.mlogPanel.setLayoutParams(params);
                                return true;
                        }
                        return false;
                    }
                });

                gDIY_DebugUIUtility.mUtility_DeviceList_divider.setOnTouchListener(new View.OnTouchListener()
                {
                    private float initialY;
                    private int initialTopPanelHeight, initialBottomPanelHeight;

                    @Override
                    public boolean onTouch(View v, MotionEvent event)
                    {
                        switch (event.getAction())
                        {
                            case MotionEvent.ACTION_DOWN:
                                initialY = event.getY();
                                initialTopPanelHeight = gDIY_DebugUIUtility.mUtilityPanel.getHeight();
                                initialBottomPanelHeight = gDIY_DebugUIUtility.mDeviceListPanel.getHeight();
                                return true;
                            case MotionEvent.ACTION_MOVE:
                                float deltaY = event.getY() - initialY;
                                int newTopPanelHeight = initialTopPanelHeight + (int) deltaY;
                                int newBottomPanelHeight = initialBottomPanelHeight - (int) deltaY;

                                LinearLayout.LayoutParams params = (LinearLayout.LayoutParams) gDIY_DebugUIUtility.mUtilityPanel
                                        .getLayoutParams();
                                params.height = newTopPanelHeight;
                                gDIY_DebugUIUtility.mUtilityPanel.setLayoutParams(params);

                                params = (LinearLayout.LayoutParams) gDIY_DebugUIUtility.mDeviceListPanel.getLayoutParams();
                                params.height = newBottomPanelHeight;
                                gDIY_DebugUIUtility.mDeviceListPanel.setLayoutParams(params);
                                return true;
                        }
                        return false;
                    }
                });

            }



            if (gDIY_DebugUIUtility.mDebug_With_UI)
            {
                gDIY_DebugUIUtility.mLogScrollView.setOnTouchListener(new View.OnTouchListener()
                {

                    @Override
                    public boolean onTouch(View v, MotionEvent event)
                    {
                        switch (event.getAction())
                        {
                            case MotionEvent.ACTION_DOWN:
                                // 用户开始触摸，暂停自动滚动
                                gDIY_DebugUIUtility.mLogViewautoScroll = false;
                                break;
                            case MotionEvent.ACTION_UP:
                                break;
                            case MotionEvent.ACTION_CANCEL:
                                // 用户停止触摸，开始自动滚动
                                gDIY_DebugUIUtility.mLogViewautoScroll = true;
                                gDIY_DebugUIUtility.scrollToBottom(); // 立即滚动到底部
                                break;
                        }
                        return false; // 这里返回 false 以允许 ScrollView 的默认滚动行为
                    }
                });

                gDIY_DebugUIUtility.mButton_StartScan.setOnClickListener(new View.OnClickListener()
                {

                    @Override
                    public void onClick(View arg0)
                    {
                        StartAroundMeService();


                    }
                });

                gDIY_DebugUIUtility.mButton_CancelScan.setOnClickListener(new View.OnClickListener()
                {

                    @Override
                    public void onClick(View arg0)
                    {
                        StopAroundMeService();


                    }

                });
            }

        }

        // permission check
        {
            checkBluetoothPermissions();
            checkLocationPermission();
        }

        // bluetooth utility init
        {
            mBluetoothManager = (BluetoothManager) getSystemService(Context.BLUETOOTH_SERVICE);
            mBluetoothAdapter = mBluetoothManager.getAdapter();

            mBluetoothLeScanner = mBluetoothAdapter.getBluetoothLeScanner();


            if (mBluetoothLeScanner == null)
            {
                appendToLog("硬件不支持 BLE Scanner");
            }
            if (!getPackageManager().hasSystemFeature(PackageManager.FEATURE_BLUETOOTH_LE))
            {
                appendToLog("硬件不支持 BLE机能");

            }
        }

        // wifi direct is not in use now, we are still discussing the usability of it


    }

    public void onDestroy()
    {

        super.onDestroy();

    }

    protected void onResume()
    {
        super.onResume();
        if (mIsAroundMeServiceRunning)
        {
            PostAllUpdatings();
        }

    }

    @Override
    protected void onPause()
    {
        super.onPause();

        if (mIsAroundMeServiceRunning)
        {
            RemoveAllUpdatings();
        }

    }

    @Override
    protected void onActivityResult(int requestCode, int resultCode, Intent data) {
        super.onActivityResult(requestCode, resultCode, data);
        if (requestCode == REQUEST_ENABLE_BT) {
            if (resultCode == RESULT_OK) {
                // Bluetooth is now enabled, you can proceed with your functionality
            } else if (resultCode == RESULT_CANCELED) {
                // User denied enabling Bluetooth, you might want to handle accordingly
            }
        }
    }

    public void onRequestPermissionsResult(int requestCode, String[] permissions, int[] grantResults) {

        super.onRequestPermissionsResult(requestCode, permissions, grantResults);
        if (requestCode == PERMISSION_REQUEST_BLUETOOTH) {
            if (grantResults.length > 1
                    && grantResults[0] == PackageManager.PERMISSION_GRANTED
                    && grantResults[1] == PackageManager.PERMISSION_GRANTED
                    && grantResults[2] == PackageManager.PERMISSION_GRANTED)
            {
                appendToLog("Bluetooth permissions granted");

            } else {
                appendToLog("Bluetooth permissions denied");

                finish();
            }
        } else if (requestCode == PERMISSION_REQUEST_FINE_LOCATION) {
            if (grantResults[0] == PackageManager.PERMISSION_GRANTED) {
                appendToLog("Location permission granted");

            } else {
                appendToLog("Location permission denied");

                finish();
            }
        }
    }

    private boolean checkLocationPermission() {
        if (Build.VERSION.SDK_INT >= Build.VERSION_CODES.M) {
            if (ActivityCompat.checkSelfPermission(this,
                    Manifest.permission.ACCESS_FINE_LOCATION) != PackageManager.PERMISSION_GRANTED) {
                ActivityCompat.requestPermissions(this,
                        new String[]{Manifest.permission.ACCESS_FINE_LOCATION},
                        PERMISSION_REQUEST_FINE_LOCATION);

                return false;
            }
        }

        return true;
    }

    private boolean checkBluetoothPermissions() {
        if (Build.VERSION.SDK_INT >= Build.VERSION_CODES.S) {
            if (ContextCompat.checkSelfPermission(this,
                    Manifest.permission.BLUETOOTH_SCAN) != PackageManager.PERMISSION_GRANTED
                    || ContextCompat.checkSelfPermission(this,
                    Manifest.permission.BLUETOOTH_CONNECT) != PackageManager.PERMISSION_GRANTED
                    ||
                    ContextCompat.checkSelfPermission(this,
                            Manifest.permission.BLUETOOTH_ADVERTISE) != PackageManager.PERMISSION_GRANTED) {
                ActivityCompat.requestPermissions(this, new String[]{
                                Manifest.permission.BLUETOOTH_SCAN,
                                Manifest.permission.BLUETOOTH_CONNECT,

                                Manifest.permission.BLUETOOTH_ADVERTISE
                        },
                        PERMISSION_REQUEST_BLUETOOTH);
                return false;
            }

        }

        return true;
    }



















    //Utilities for developing this app
    private String GetCurrentNumStatus()
    {
        return String.format("byPassert:%d, DeviceEmergingSpeed:%f", mDeviceInfoAll.size(),
                mDeviceEmergingSpeed);
    }

    public void appendToLog(String text)
    {

        if (gDIY_DebugUIUtility.mDebug_With_UI) {
            runOnUiThread(() -> {
                gDIY_DebugUIUtility.mLogTextView.append(text + "\n");
                // 自动滚动到底部
                if (gDIY_DebugUIUtility.mLogViewautoScroll) {
                    gDIY_DebugUIUtility.scrollToBottom();
                }
            });
        } else {
            runOnUiThread(new Runnable() {
                @Override
                public void run() {
                    OnNewLogGenerated(text);
                    // Toast.makeText(GameActivity.this, message, Toast.LENGTH_SHORT).show();
                }
            });
        }

    }










    //UE5 cross-platform API
    public static native void OnNewLogGenerated(String in_string);
    public static native void OnNewRandomDeviceEncountered_WithName(String in_string);

    public static native void OnUploadNewDeviceEmergingSpeed(float inSpeed);

}
