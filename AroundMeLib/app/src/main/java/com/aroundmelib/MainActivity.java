
package com.aroundmelib;


import android.Manifest;
import android.annotation.SuppressLint;
import android.bluetooth.BluetoothAdapter;
import android.bluetooth.BluetoothDevice;
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
import android.util.Log;
import android.view.MotionEvent;
import android.view.View;
import android.widget.ArrayAdapter;
import android.widget.Button;
import android.widget.EditText;
import android.widget.LinearLayout;
import android.widget.ListView;
import android.widget.ScrollView;
import android.widget.TextView;

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
import com.aroundmelib.DIY_CommuManagerReportSchema;


@SuppressLint("MissingPermission")
public class MainActivity extends AppCompatActivity implements DIY_CommuManagerReportSchema
{

    // Debug ui part starts ----------------------------------------------------------------------
    private View mLog_button_divider;
    private static final boolean mDebug_With_UI = true;
    private View mUtility_DeviceList_divider;
    private LinearLayout mbuttonPanel;
    private LinearLayout mlogPanel;

    private LinearLayout mUtilityPanel;
    private LinearLayout mDeviceListPanel;
    private EditText mInputMessage;
    private Button mButton_StartScan;
    private Button mButton_CancelScan;
    private boolean mLogViewautoScroll = true;
    private ListView mSp_Device_listView;
    private ListView mRandom_Device_listView;
    private TextView mLogTextView;

    private TextView mMacAddrCountView;
    private ScrollView mLogScrollView;
    private ArrayAdapter<String> mSp_deviceArrayAdapter;
    private ArrayAdapter<String> mRandom_deviceArrayAdapter;

    private void ToggleButtons() {
        if (mButton_CancelScan != null && mButton_StartScan != null) {

            mButton_StartScan.setEnabled(!mButton_StartScan.isEnabled());
            mButton_CancelScan.setEnabled(!mButton_CancelScan.isEnabled());
        }
    }

    private void scrollToBottom() {
        mLogScrollView.post(() -> mLogScrollView.fullScroll(View.FOCUS_DOWN));
    }



    // Debug ui part ends----------------------------------------------------------------------

    private String GetCurrentNumStatus()
    {
        return String.format("Name:%d, Null:%d, User:%d",
                mDIY_CommuManagerInstace.GetDeviceCountEncountered_WithName(),
                mDIY_CommuManagerInstace.GetDeviceCountEncountered_WithGarbageName(),
                mSp_deviceDisplayArrayList.size());
    }

    // call from java implemented in UE5
    public static native void OnNewRandomDeviceEncountered_GarbageName();

    public static native void OnNewLogGenerated(String in_string);

    public static native void OnNewRandomDeviceEncountered_WithName(String in_string);
    public static native void OnMessageReceivedFromOtherPDevices(String in_string);

    public static native void OnSubmittingBypassData_WithNames(int in_withname_device_count);

    public static native void OnSubmittingBypassData_GarbageNames(int in_withoutname_device_count);

    public static native void OnSubmittingBaypassData_GameUser(int in_User_Coount);



    public static native void OnItemGiftReceived(int received_item_id);



    WifiP2pManager manager;
    WifiP2pManager.Channel channel;

    // 定义

    BluetoothManager mBluetoothManager;

    private BluetoothAdapter mBluetoothAdapter;

    private BluetoothLeScanner mBluetoothLeScanner;

    private BluetoothLeAdvertiser mBluetoothLeAdvertiser;

    private BluetoothGattServer mBluetoothGattServer;
    private Handler mHandler = new Handler();

    private ArrayList<String> mSp_deviceDisplayArrayList;

    private ArrayList<String> mRandom_deviceDisplayArrayList;


    private ArrayList<Integer> mRequestedToGiveItems=new ArrayList<Integer>();


    private DIY_CommuManager mDIY_CommuManagerInstace=null;


    private boolean mIsAroundMeServiceRunning = false;



    protected void NotifyLeScanStopped()
    {
        appendToLog("BLE搜索结束...");
        ToggleButtons();

    }

    public void appendToLog(String text)
    {
        runOnUiThread(() -> {
            mLogTextView.append(text + "\n");
            // 自动滚动到底部
            if (mLogViewautoScroll)
            {
                scrollToBottom();
            }

            if(!mDebug_With_UI)
            {
                OnNewLogGenerated(text);
            }

        });


    }

    private void SubmitInfoToUE5()
    {
        if(!mDebug_With_UI)
        {
            OnSubmittingBypassData_GarbageNames(mDIY_CommuManagerInstace.GetDeviceCountEncountered_WithGarbageName());


            OnSubmittingBypassData_WithNames(mDIY_CommuManagerInstace.GetDeviceCountEncountered_WithName());

            OnSubmittingBaypassData_GameUser(mSp_deviceDisplayArrayList.size());
        }

        appendToLog("SubmitInfoToUE5 once"+ GetCurrentNumStatus());

    }
    private void ResetAroundMeBluetoothServiceResults()
    {
        mDIY_CommuManagerInstace.SetDeviceCountEncountered_WithName(0);
        mDIY_CommuManagerInstace.SetDeviceCountEncountered_WithGarbageName(0);


        mSp_deviceDisplayArrayList.clear();
        mRandom_deviceDisplayArrayList.clear();

        mRandom_deviceArrayAdapter.notifyDataSetChanged();
        mSp_deviceArrayAdapter.notifyDataSetChanged();
        mMacAddrCountView.setText(GetCurrentNumStatus());

        if (mDIY_CommuManagerInstace.mFoundDevices != null)
        {
            for (String mac_addr : mDIY_CommuManagerInstace.mFoundDevices.keySet())
            {
                BluetoothGatt gatt_got_now = mDIY_CommuManagerInstace.mFoundDevices.get(mac_addr).mDeviceGatt;

                if (null != gatt_got_now)
                {
                    gatt_got_now.close();
                }
            }
            mDIY_CommuManagerInstace.mFoundDevices.clear();
        }
    }

    private void OnRequestAddGiveTask(int inItemID)
    {
        mRequestedToGiveItems.add(inItemID);
    }
    private void StopAroundMeService()
    {


        if (DIY_PermissionHelper.ensureBluetoothEnabled(this))
        {
            DIY_CommuUtils.PushToast(this, "蓝牙可用，可以启动服务");
        }
        else
        {
            DIY_CommuUtils.PushToast(this, "请开启蓝牙后再试");

            return;
        }

        Log.d("MainActivity", "Stopping DIY_Service...");
        Intent intent = new Intent(this, DIY_Service.class);
        stopService(intent);
        // BLE process
        {

            if (mBluetoothLeAdvertiser != null && mAdvertiseCallback != null)
            {
                mBluetoothLeAdvertiser.stopAdvertising(mAdvertiseCallback);

                appendToLog("Stop BroadCasting your service");
            }

            if (mBluetoothLeScanner != null && mBLEScanCallback != null)
            {
                mBluetoothLeScanner.stopScan(mBLEScanCallback);
            }

            NotifyLeScanStopped();

            mBluetoothGattServer.close();

            ResetAroundMeBluetoothServiceResults();




        }

        // classic bluetooth process
        {

            mDIY_CommuManagerInstace.stopClassicBluetoothDiscovery();

        }

        mHandler.removeCallbacks(communicationRunnable);

        mIsAroundMeServiceRunning = false;
    }

    private void StartAroundMeService()
    {





        if (!DIY_PermissionHelper.ensureAllPermissions(this))
        {
            return; // 等权限回调后再继续
        }

        if (DIY_PermissionHelper.ensureBluetoothEnabled(this))
        {
            DIY_CommuUtils.PushToast(this, "蓝牙可用，可以启动服务");
        }
        else
        {
            DIY_CommuUtils.PushToast(this, "请开启蓝牙后再试");
        }








        //Test Service
        {
            Intent intent = new Intent(this, DIY_Service.class);
            if (Build.VERSION.SDK_INT >= Build.VERSION_CODES.O)
            {

                startForegroundService(intent);
            }
            else
            {

                startService(intent);
            }
        }


        mDIY_CommuManagerInstace.SetDeviceCountEncountered_WithName(0);
        mDIY_CommuManagerInstace.SetDeviceCountEncountered_WithGarbageName(0);


        mDIY_CommuManagerInstace.startClassicBluetoothDiscovery();



        StartBLE_DIYServiceBroadcast();

        StartBLE_DIYServiceScanning();



        ToggleButtons();

        mHandler.post(communicationRunnable);

        mIsAroundMeServiceRunning = true;
    }



    private void StartBLE_DIYServiceScanning()
    {
        ScanFilter scanFilter = new ScanFilter.Builder()
                .setServiceUuid(new ParcelUuid(DIY_CommuUtils.mAroundMeIdentify_UUID))
                .build();

        ScanSettings scanSettings = new ScanSettings.Builder()
                .setScanMode(ScanSettings.SCAN_MODE_LOW_LATENCY)
                .build();

        mBluetoothLeScanner.startScan(Arrays.asList(scanFilter), scanSettings, mBLEScanCallback);
        appendToLog("BLE Scanning started!");
    }

    private void StartBLE_DIYServiceBroadcast()
    {

        //Configure service server profile!
        {
            mBluetoothGattServer = mBluetoothManager.openGattServer(getApplicationContext(), gattServerCallback);

            if (mBluetoothGattServer == null) {
                appendToLog("mBluetoothGattServer not started well");

            } else {
                appendToLog("mBluetoothGattServer started well");
            }

            BluetoothGattService service = new BluetoothGattService(DIY_CommuUtils.mAroundMeIdentify_UUID,
                    BluetoothGattService.SERVICE_TYPE_PRIMARY);

            BluetoothGattCharacteristic writeCharacteristic = new BluetoothGattCharacteristic(
                    DIY_CommuUtils.mAroundMe_CONNECT_CHARACTERISTIC_UUID,
                    BluetoothGattCharacteristic.PROPERTY_NOTIFY |
                            BluetoothGattCharacteristic.PROPERTY_READ |
                            BluetoothGattCharacteristic.PROPERTY_WRITE,
                    BluetoothGattCharacteristic.PERMISSION_READ |
                            BluetoothGattCharacteristic.PERMISSION_WRITE |
                            BluetoothGattCharacteristic.PROPERTY_NOTIFY);

            service.addCharacteristic(writeCharacteristic);

            mBluetoothGattServer.addService(service);
        }



        //start actual advertise
        {
            AdvertiseSettings settings = new AdvertiseSettings.Builder()
                    .setAdvertiseMode(AdvertiseSettings.ADVERTISE_MODE_BALANCED)
                    .setConnectable(true)
                    .setTimeout(0)
                    .setTxPowerLevel(AdvertiseSettings.ADVERTISE_TX_POWER_LOW)
                    .build();

            AdvertiseData advdata = new AdvertiseData.Builder()
                    .setIncludeDeviceName(true)
                    .addServiceUuid(new ParcelUuid(DIY_CommuUtils.mAroundMeIdentify_UUID))
                    .build();
            mBluetoothLeAdvertiser.startAdvertising(settings, advdata, mAdvertiseCallback);
        }



    }

    private ScanCallback mBLEScanCallback = new ScanCallback() {
        @Override
        public void onScanResult(int callbackType, ScanResult result) {
            super.onScanResult(callbackType, result);

            BluetoothDevice result_device = result.getDevice();

            String result_device_mac_addr = result_device.getAddress();

            if (result_device.getName() != null && !result_device.getName().equals("null")) {
                // 处理带有特定服务UUID的设备
                if (mDIY_CommuManagerInstace.mFoundDevices.containsKey(result_device_mac_addr)) {

                    DIY_CommuDevice cur_player_info = mDIY_CommuManagerInstace.mFoundDevices.get(result_device_mac_addr);

                    if (null != cur_player_info && !cur_player_info.misRandomDeivce) {
                        int rssi = result.getRssi();
                        // TODO: Replace with the actual TX Power value for your beacon or BLE device
                        int txPower = -59; // This is just an example value, you need the actual TX Power for accurate
                        // results

                        double estimatedDistance_new = DIY_CommuUtils.calculateDistance(rssi, txPower);

                        cur_player_info.mDistance = estimatedDistance_new;

                        mSp_deviceDisplayArrayList.set(cur_player_info.mIndex, cur_player_info.GenerateDisplayString());

                        mSp_deviceArrayAdapter.notifyDataSetChanged();

                    }

                }
                else
                {
                    BluetoothGatt got_gatt = result_device.connectGatt(getApplicationContext(), false,
                            mConnection_GattCallback);

                    if (got_gatt != null)
                    {
                        appendToLog("connected successfully");

                    }
                    else
                    {
                        appendToLog("connected failed!");

                    }

                    int rssi = result.getRssi();
                    // TODO: Replace with the actual TX Power value for your beacon or BLE device
                    int txPower = -59; // This is just an example value, you need the actual TX Power for accurate
                    // results

                    double estimatedDistance = DIY_CommuUtils.calculateDistance(rssi, txPower);

                    DIY_CommuDevice player_info = new DIY_CommuDevice(MainActivity.this,result_device);
                    player_info.mDeviceGatt = got_gatt;
                    player_info.mDeviceName = result_device.getName();
                    player_info.misRandomDeivce = false;
                    player_info.mDistance = estimatedDistance;
                    player_info.mRegisteredPlayerDeviceMacAddr = result_device_mac_addr;
                    player_info.mIndex = mSp_deviceDisplayArrayList.size();
                    mDIY_CommuManagerInstace.mFoundDevices.put(result_device_mac_addr, player_info);

                    mSp_deviceDisplayArrayList.add(player_info.GenerateDisplayString());

                    mDIY_CommuManagerInstace.AddDeltaToDeviceCountEncountered_WithName(1);


                    // OnNewMacAddressEncountered();
                    mSp_deviceArrayAdapter.notifyDataSetChanged();

                    if(!mDebug_With_UI)
                    {
                        OnNewRandomDeviceEncountered_WithName(player_info.GenerateDisplayString());
                    }


                }
            }
            else
            {
                mDIY_CommuManagerInstace.AddDeltaToDeviceCountEncountered_WithGarbageName(1);

                if(!mDebug_With_UI)
                {
                    OnNewRandomDeviceEncountered_GarbageName();
                }

            }

        }

        @Override
        public void onScanFailed(int errorCode) {
            super.onScanFailed(errorCode);
            appendToLog("BLE Scan Started Failed! with error code: " + errorCode);

            // Scanning failed. Handle error.
        }

    };
    private AdvertiseCallback mAdvertiseCallback = new AdvertiseCallback() {
        @Override
        public void onStartSuccess(AdvertiseSettings settingsInEffect) {
            super.onStartSuccess(settingsInEffect);

            appendToLog("BLE BroadCast Started successfully");

        }

        @Override
        public void onStartFailure(int errorCode) {
            super.onStartFailure(errorCode);

            appendToLog("BLE BroadCast Started Failed! with error code " + errorCode);

            // Failed to start broadcasting
        }
    };

    // a client callback receiving msg from p devices
    private BluetoothGattCallback mConnection_GattCallback = new BluetoothGattCallback() {

        @Override
        public void onConnectionStateChange(BluetoothGatt gatt, int status, int newState) {
            // connect to p device
            if (newState == BluetoothProfile.STATE_CONNECTED) {

                appendToLog(
                        "connected with p-device:" + gatt.getDevice().getName() + "@" + gatt.getDevice().getAddress());

                gatt.discoverServices();
            }
        }

        @Override
        public void onServicesDiscovered(BluetoothGatt gatt, int status) {
            if (status == BluetoothGatt.GATT_SUCCESS) {
                BluetoothGattService service = gatt.getService(DIY_CommuUtils.mAroundMeIdentify_UUID);
                if (service != null) {
                    BluetoothGattCharacteristic characteristic = service
                            .getCharacteristic(DIY_CommuUtils.mAroundMe_CONNECT_CHARACTERISTIC_UUID);
                    if (characteristic != null) {
                        gatt.setCharacteristicNotification(characteristic, true);

                        BluetoothGattDescriptor descriptor = characteristic
                                .getDescriptor(DIY_CommuUtils.CLIENT_CHARACTERISTIC_CONFIG_UUID);
                        if (descriptor != null) {
                            // activate notify functionality
                            descriptor.setValue(BluetoothGattDescriptor.ENABLE_NOTIFICATION_VALUE);
                            gatt.writeDescriptor(descriptor);
                        }
                    }
                }
            }
        }

        @Override
        public void onCharacteristicRead(BluetoothGatt gatt, BluetoothGattCharacteristic characteristic, int status) {
            if (status == BluetoothGatt.GATT_SUCCESS) {

            }
        }

        // 接受外围设备的消息变更 这个地方能收到外围设备的mac的
        @Override
        public void onCharacteristicChanged(BluetoothGatt gatt, BluetoothGattCharacteristic characteristic) {

            byte[] data = characteristic.getValue();
            String receivedString = new String(data, Charset.forName("UTF-8"));
            appendToLog("msg from p device:" + gatt.getDevice().getName() + "@" + gatt.getDevice().getAddress()
                    + "@mgs:" + receivedString);
            if(!mDebug_With_UI)
            {
                OnMessageReceivedFromOtherPDevices(receivedString);
            }

            if(receivedString.startsWith("X")||receivedString.startsWith("x"))
            {

            }
            else
            {
                if(!mDebug_With_UI)
                {
                    OnItemGiftReceived(Integer.parseInt(receivedString));
                }

            }


        }
    };

    private final BluetoothGattServerCallback gattServerCallback = new BluetoothGattServerCallback() {

        // receive msg from c device
        @Override
        public void onCharacteristicWriteRequest(BluetoothDevice device, int requestId,
                                                 BluetoothGattCharacteristic characteristic, boolean preparedWrite, boolean responseNeeded, int offset,
                                                 byte[] value) {
            super.onCharacteristicWriteRequest(device, requestId, characteristic, preparedWrite, responseNeeded, offset,
                    value);

            if (DIY_CommuUtils.mAroundMe_CONNECT_CHARACTERISTIC_UUID.equals(characteristic.getUuid()) && device.getName() != "null") {
                mBluetoothGattServer.sendResponse(device, requestId, BluetoothGatt.GATT_SUCCESS, 0, null);

                String receivedData = new String(value, StandardCharsets.UTF_8);

                appendToLog("Received msg from c device: " + device.getName() + "@" + device.getAddress() + "msg:"
                        + receivedData);

            }
        }

        public void onCharacteristicReadRequest(BluetoothDevice device, int requestId, int offset,
                                                BluetoothGattCharacteristic characteristic) {
            super.onCharacteristicReadRequest(device, requestId, offset, characteristic);
            mBluetoothGattServer.sendResponse(device, requestId, BluetoothGatt.GATT_SUCCESS, offset,
                    characteristic.getValue());
        }

        public void onConnectionStateChange(BluetoothDevice device, int status, int newState) {
            super.onConnectionStateChange(device, status, newState);
            if (newState == BluetoothProfile.STATE_CONNECTED) {
                // connect to c device, me as p device
                appendToLog("Connected with c-device: " + device.getName() + "@" + device.getAddress());

                if (mDIY_CommuManagerInstace.mFoundDevices.containsKey(device.getAddress())) {
                    appendToLog("Already connected with  p-device:  " + device.getName() + "@" + device.getAddress());

                }

                // Do something, e.g., allocate resources, save the device reference, etc.
            } else if (newState == BluetoothProfile.STATE_DISCONNECTED) {
                appendToLog("disconnected with c-device: " + device.getName() + "@" + device.getAddress());

                // Cleanup or reset as needed.
            }
        }

    };

    private Runnable communicationRunnable = new Runnable() {

        @Override
        public void run() {

            if (mBluetoothGattServer != null)
            {
                // Here, we simulate sending data as peripheral every 2 seconds.
                List<BluetoothDevice> connectedDevices = mBluetoothManager.getConnectedDevices(BluetoothProfile.GATT);
                for (BluetoothDevice device : connectedDevices)
                {
                    if (true)
                    {
                        String messageToSend = "TestString";
                        messageToSend = mInputMessage.getText().toString();

                        if(mRequestedToGiveItems.size()>0)
                        {
                            messageToSend=String.format("%d",mRequestedToGiveItems.get(mRequestedToGiveItems.size()-1));
                            mRequestedToGiveItems.remove(mRequestedToGiveItems.size()-1);

                            appendToLog(String.format("XXXXXXXX left gifts to give %d",mRequestedToGiveItems.size()));
                        }
                        BluetoothGattCharacteristic characteristic = mBluetoothGattServer
                                .getService(DIY_CommuUtils.mAroundMeIdentify_UUID)
                                .getCharacteristic(DIY_CommuUtils.mAroundMe_CONNECT_CHARACTERISTIC_UUID);
                        characteristic.setValue(messageToSend.getBytes(StandardCharsets.UTF_8));
                        mBluetoothGattServer.notifyCharacteristicChanged(device, characteristic, false);

                        appendToLog("msg sent to c device :" + device.getName() + "@" + device.getAddress()+"msg: "+messageToSend);


                    }

                }
            }

            if (mBluetoothAdapter.isEnabled())
            {


                if (mBluetoothAdapter.isDiscovering())
                {
                    appendToLog("经典蓝牙搜索设备ing");
                }
                else
                {
                    SubmitInfoToUE5();
                    mDIY_CommuManagerInstace.startClassicBluetoothDiscovery();
                    ResetAroundMeBluetoothServiceResults();

                }

            }

            mHandler.postDelayed(communicationRunnable, 2000); // Schedule the next message in 2 seconds

            mMacAddrCountView.setText(GetCurrentNumStatus());

        }
    };








    // activity events start
    @Override
    protected void onCreate(Bundle savedInstanceState)
    {
        super.onCreate(savedInstanceState);

        // UI gadgets fixing
        {

            // layout setting
            setContentView(R.layout.activity_main);

            // sp device list view init
            {
                // device array list\adaptor init
                mSp_deviceDisplayArrayList = new ArrayList<>();

                mSp_deviceArrayAdapter = new ArrayAdapter<>(this, android.R.layout.simple_list_item_1,
                        mSp_deviceDisplayArrayList);

                // list view set the adaptor and view
                mSp_Device_listView = findViewById(R.id.sp_device_list);
                mSp_Device_listView.setAdapter(mSp_deviceArrayAdapter);

            }

            // random device list view init
            {
                // device array list\adaptor init
                mRandom_deviceDisplayArrayList = new ArrayList<>();

                mRandom_deviceArrayAdapter = new ArrayAdapter<>(this, android.R.layout.simple_list_item_1,
                        mRandom_deviceDisplayArrayList);
                // list view set the adaptor and view
                mRandom_Device_listView = findViewById(R.id.random_device_list);
                mRandom_Device_listView.setAdapter(mRandom_deviceArrayAdapter);

            }

            //ui init
            {
                // text and button binding
                mButton_StartScan = this.findViewById(R.id.button_start);
                mButton_CancelScan = this.findViewById(R.id.button_stop);

                mButton_StartScan.setEnabled(true);
                mButton_CancelScan.setEnabled(false);

                mLogTextView = findViewById(R.id.log_text_view);
                mLogScrollView = findViewById(R.id.log_scroll_view);
                mInputMessage = findViewById(R.id.input_message);
                mMacAddrCountView = findViewById(R.id.Mac_Addr_Count);
                mLog_button_divider = findViewById(R.id.divider);
                mUtility_DeviceList_divider = findViewById(R.id.divider_y);
                mbuttonPanel = findViewById(R.id.button_panel);
                mlogPanel = findViewById(R.id.log_panel);

                mUtilityPanel = findViewById(R.id.utility_panel);
                mDeviceListPanel = findViewById(R.id.Device_list_panel);
                mLog_button_divider.setOnTouchListener(new View.OnTouchListener() {
                    private float initialX;
                    private int initialButtonPanelWidth;

                    @Override
                    public boolean onTouch(View v, MotionEvent event) {
                        switch (event.getAction()) {
                            case MotionEvent.ACTION_DOWN:
                                initialX = event.getX();
                                initialButtonPanelWidth = mbuttonPanel.getWidth();
                                return true;
                            case MotionEvent.ACTION_MOVE:
                                float deltaX = event.getX() - initialX;
                                int newButtonPanelWidth = initialButtonPanelWidth + (int) deltaX;

                                LinearLayout.LayoutParams params = (LinearLayout.LayoutParams) mbuttonPanel
                                        .getLayoutParams();
                                params.width = newButtonPanelWidth;
                                mbuttonPanel.setLayoutParams(params);

                                params = (LinearLayout.LayoutParams) mlogPanel.getLayoutParams();
                                params.width = mlogPanel.getWidth() - (int) deltaX;
                                mlogPanel.setLayoutParams(params);
                                return true;
                        }
                        return false;
                    }
                });

                mUtility_DeviceList_divider.setOnTouchListener(new View.OnTouchListener() {
                    private float initialY;
                    private int initialTopPanelHeight, initialBottomPanelHeight;

                    @Override
                    public boolean onTouch(View v, MotionEvent event) {
                        switch (event.getAction()) {
                            case MotionEvent.ACTION_DOWN:
                                initialY = event.getY();
                                initialTopPanelHeight = mUtilityPanel.getHeight();
                                initialBottomPanelHeight = mDeviceListPanel.getHeight();
                                return true;
                            case MotionEvent.ACTION_MOVE:
                                float deltaY = event.getY() - initialY;
                                int newTopPanelHeight = initialTopPanelHeight + (int) deltaY;
                                int newBottomPanelHeight = initialBottomPanelHeight - (int) deltaY;

                                LinearLayout.LayoutParams params = (LinearLayout.LayoutParams) mUtilityPanel
                                        .getLayoutParams();
                                params.height = newTopPanelHeight;
                                mUtilityPanel.setLayoutParams(params);

                                params = (LinearLayout.LayoutParams) mDeviceListPanel.getLayoutParams();
                                params.height = newBottomPanelHeight;
                                mDeviceListPanel.setLayoutParams(params);
                                return true;
                        }
                        return false;
                    }
                });

            }




            {
                mLogScrollView.setOnTouchListener(new View.OnTouchListener() {

                    @Override
                    public boolean onTouch(View v, MotionEvent event) {
                        switch (event.getAction()) {
                            case MotionEvent.ACTION_DOWN:
                                // 用户开始触摸，暂停自动滚动
                                mLogViewautoScroll = false;
                                break;
                            case MotionEvent.ACTION_UP:
                                break;
                            case MotionEvent.ACTION_CANCEL:
                                // 用户停止触摸，开始自动滚动
                                mLogViewautoScroll = true;
                                scrollToBottom(); // 立即滚动到底部
                                break;
                        }
                        return false; // 这里返回 false 以允许 ScrollView 的默认滚动行为
                    }
                });

                mButton_StartScan.setOnClickListener(new View.OnClickListener() {

                    @Override
                    public void onClick(View arg0) {
                        StartAroundMeService();
                        mDIY_CommuManagerInstace.SetDeviceCountEncountered_WithName(0);
                        mDIY_CommuManagerInstace.SetDeviceCountEncountered_WithGarbageName(0);
                    }
                });

                mButton_CancelScan.setOnClickListener(new View.OnClickListener() {

                    @Override
                    public void onClick(View arg0) {
                        StopAroundMeService();
                        mDIY_CommuManagerInstace.SetDeviceCountEncountered_WithName(0);
                        mDIY_CommuManagerInstace.SetDeviceCountEncountered_WithGarbageName(0);
                    }

                });
            }

        }

        // permission check
        {
            DIY_PermissionHelper.initializeBluetoothLauncher(this);
        }

        // bluetooth utility init
        {
            mBluetoothManager = (BluetoothManager) getSystemService(Context.BLUETOOTH_SERVICE);
            mBluetoothAdapter = mBluetoothManager.getAdapter();

            mBluetoothLeScanner = mBluetoothAdapter.getBluetoothLeScanner();
            mBluetoothLeAdvertiser = mBluetoothAdapter.getBluetoothLeAdvertiser();


            mDIY_CommuManagerInstace=new DIY_CommuManager(this,getApplicationContext());
            mDIY_CommuManagerInstace.setCommuManagerReportSchema(this);
            if (mBluetoothLeAdvertiser == null)
            {
                appendToLog("硬件不支持 BLE 广播");

            }
            if (!getPackageManager().hasSystemFeature(PackageManager.FEATURE_BLUETOOTH_LE))
            {
                appendToLog("硬件不支持 BLE机能");

            }
        }

        // wifi direct is not in use now, we are still discussing the usability of it
        {

        }

    }

    public void onDestroy() {

        super.onDestroy();
        mDIY_CommuManagerInstace.onDestroy();
    }

    protected void onResume()
    {
        super.onResume();
        if (mIsAroundMeServiceRunning)
        {
            mHandler.post(communicationRunnable); // Start sending messages
        }

    }

    @Override
    protected void onPause()
    {
        super.onPause();

        if (mIsAroundMeServiceRunning)
        {
            mHandler.removeCallbacks(communicationRunnable); // Stop sending messages
        }

    }

    @Override
    protected void onActivityResult(int requestCode, int resultCode, Intent data)
    {
        super.onActivityResult(requestCode, resultCode, data);
        /*if (requestCode == DIY_CommuUtils.REQUEST_ENABLE_BT)
        {
            if (resultCode == RESULT_OK)
            {
                // Bluetooth is now enabled, you can proceed with your functionality
            } else if (resultCode == RESULT_CANCELED)
            {
                // User denied enabling Bluetooth, you might want to handle accordingly
            }
        }*/
    }

    public void onRequestPermissionsResult(int requestCode, String[] permissions, int[] grantResults)
    {




      super.onRequestPermissionsResult(requestCode, permissions, grantResults);

        if (DIY_PermissionHelper.handlePermissionsResult(this, requestCode, permissions, grantResults))
        {

            StartAroundMeService();
        }






    }

    @Override
    public void OnCallBack_NewRandomDeviceEncountered_WithName(String inText)
    {
        if(!mDebug_With_UI)
        {
            OnNewRandomDeviceEncountered_WithName(inText);
        }

        mRandom_deviceArrayAdapter.notifyDataSetChanged();

    }

    @Override
    public void OnCallBack_OldRandomDeviceEncountered_WithName(String inText)
    {
        mRandom_deviceArrayAdapter.notifyDataSetChanged();


    }

    @Override
    public void OnCallBack_NewRandomDeviceEncountered_GarbageName()
    {
        if(!mDebug_With_UI)
        {
            OnNewRandomDeviceEncountered_GarbageName();
        }

    }

    @Override
    public void onLogReport(String inText)
    {
        appendToLog(inText);

    }

    @Override
    public ArrayList<String> GetSp_deviceDisplayArrayList() {
        return mSp_deviceDisplayArrayList;
    }

    @Override
    public ArrayList<String> GetRandom_deviceDisplayArrayList() {
        return mRandom_deviceDisplayArrayList;
    }
    // activity events end
}
