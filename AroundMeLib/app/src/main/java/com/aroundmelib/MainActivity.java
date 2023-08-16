package com.aroundmelib;


import static androidx.constraintlayout.helper.widget.MotionEffect.TAG;

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
import android.content.Context;
import android.content.Intent;
import android.content.pm.PackageManager;
import android.net.wifi.p2p.WifiP2pManager;
import android.os.Build;
import android.os.Bundle;
import android.os.Handler;
import android.os.ParcelUuid;
import android.util.Log;
import android.view.View;
import android.widget.ArrayAdapter;
import android.widget.Button;
import android.widget.ListView;
import android.widget.ScrollView;
import android.widget.TextView;
import android.widget.Toast;

import androidx.activity.result.ActivityResultLauncher;
import androidx.activity.result.contract.ActivityResultContracts;
import androidx.appcompat.app.AppCompatActivity;
import androidx.core.app.ActivityCompat;
import androidx.core.content.ContextCompat;


import com.example.com.aroundmelib.R;

import java.nio.charset.Charset;
import java.nio.charset.StandardCharsets;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.HashMap;
import java.util.List;
import java.util.Map;
import java.util.UUID;


@SuppressLint("MissingPermission")
public class MainActivity extends AppCompatActivity
{

    public class PlayerDeviceInfo
    {
        public BluetoothGatt mDeviceGatt=null;
        public String mDeviceName=null;
        public String mRegisteredPlayerDeviceMacAddr=null;


        public int mIndex=0;
        public String VersionToString()
        {
            return mDeviceName+"@"+mRegisteredPlayerDeviceMacAddr;
        }
    };
    WifiP2pManager manager;
    WifiP2pManager.Channel channel;
    //定义
    private static final int PERMISSION_REQUEST_FINE_LOCATION = 1;
    private static final int PERMISSION_REQUEST_BLUETOOTH = 2;
    BluetoothManager mBluetoothManager;
    private final UUID mAroundMeIdentify_UUID=UUID.fromString("fd4e1f57-110a-4d52-9a5b-fe97e0dcf7bb");
    private static final UUID CLIENT_CHARACTERISTIC_CONFIG_UUID = UUID.fromString("00002902-0000-1000-8000-00805f9b34fb");
    public final UUID mAroundMe_CONNECT_CHARACTERISTIC_UUID = UUID.fromString("0C136FCC-3381-4F1E-9602-E2A3F8B70CEB");
    //public static final String mAroundMe_READ_CHARACTERISTIC_UUID = "1BE31CB9-9E07-4892-AA26-30E87ABE9F70";
    private BluetoothAdapter mBluetoothAdapter;

    private BluetoothLeScanner mBluetoothLeScanner;

    private BluetoothLeAdvertiser mBluetoothLeAdvertiser;

    private BluetoothGattServer mBluetoothGattServer;
    private Handler mHandler = new Handler();

    private double mTimeSinceCreation=0.0f;


    private Button mButton_StartScan;
    private Button mButton_CancelScan;

    private ListView mSp_Device_listView;
    private ArrayAdapter<String> mSp_deviceArrayAdapter;
    private ArrayList<String> mSp_deviceArrayList;

    private ListView mRandom_Device_listView;
    private ArrayAdapter<String> mRandom_deviceArrayAdapter;
    private ArrayList<String> mRandom_deviceArrayList;


    private TextView mLogTextView;
    private ScrollView mLogScrollView;
    private Map<String, PlayerDeviceInfo> mDeviceConnections=new HashMap<>();


    private void ToggleButtons()
    {
        if(mButton_CancelScan!=null&&mButton_StartScan!=null)
        {

            mButton_StartScan.setEnabled(!mButton_StartScan.isEnabled());
            mButton_CancelScan.setEnabled(!mButton_CancelScan.isEnabled());
        }
    }
    private final ActivityResultLauncher<Intent> enableBluetoothLauncher =
            registerForActivityResult(new ActivityResultContracts.StartActivityForResult(),
                    result -> {
                        if (result.getResultCode() == RESULT_OK)
                        {
                            mButton_StartScan.callOnClick();
                            appendToLog("BluetoothStatus"+"User enabled Bluetooth.");

                        } else
                        {
                            appendToLog("BluetoothStatus"+"User declined to enable Bluetooth.");

                        }
                    });



    protected void NotifyLeScanStopped()
    {
        appendToLog("搜索结束...");
        ToggleButtons();
    }


    protected void onResume()
    {
        super.onResume();
        mHandler.post(communicationRunnable);  // Start sending messages
    }

    @Override
    protected void onPause()
    {
        super.onPause();
        mHandler.removeCallbacks(communicationRunnable);  // Stop sending messages
    }

    public void appendToLog(String text)
    {
        runOnUiThread(() -> {
            mLogTextView.append(text + "\n");
            // 自动滚动到底部
            mLogScrollView.post(() -> mLogScrollView.fullScroll(View.FOCUS_DOWN));
        });
    }
    @Override
    protected void onCreate(Bundle savedInstanceState)
    {
        super.onCreate(savedInstanceState);

        //UI gadgets fixing
        {
            //layout setting
            setContentView(R.layout.activity_main);


            //sp device list view init
            {
                //device array list\adaptor init
                mSp_deviceArrayList = new ArrayList<>();
                mSp_deviceArrayAdapter = new ArrayAdapter<>(this, android.R.layout.simple_list_item_1, mSp_deviceArrayList);

                //list view set the adaptor and view
                mSp_Device_listView = findViewById(R.id.sp_device_list);
                mSp_Device_listView.setAdapter(mSp_deviceArrayAdapter);
            }


            //random device list view init
            {
                //device array list\adaptor init
                mRandom_deviceArrayList = new ArrayList<>();
                mRandom_deviceArrayAdapter = new ArrayAdapter<>(this, android.R.layout.simple_list_item_1, mRandom_deviceArrayList);

                //list view set the adaptor and view
                mRandom_Device_listView = findViewById(R.id.random_device_list);
                mRandom_Device_listView.setAdapter(mRandom_deviceArrayAdapter);
            }



            //text and button binding
            mButton_StartScan = this.findViewById(R.id.button_start);
            mButton_CancelScan = this.findViewById(R.id.button_stop);

            mButton_StartScan.setEnabled(true);
            mButton_CancelScan.setEnabled(false);

            mLogTextView = findViewById(R.id.log_text_view);
            mLogScrollView = findViewById(R.id.log_scroll_view);




            mButton_StartScan.setOnClickListener(new View.OnClickListener() {


                @Override
                public void onClick(View arg0) {

                    if (!mBluetoothAdapter.isEnabled())
                    {


                        Intent enableBtIntent = new Intent(BluetoothAdapter.ACTION_REQUEST_ENABLE);
                        enableBluetoothLauncher.launch(enableBtIntent);


                    } else
                    {



                        setupServer();


                        StartScanning();

                        StartAdvertising();


                       ToggleButtons();
                    }

                }


            });

            mButton_CancelScan.setOnClickListener(new View.OnClickListener()
            {


                @Override
                public void onClick(View arg0)
                {



                    if(!mBluetoothAdapter.isEnabled())
                    {
                        Intent enableBtIntent = new Intent(BluetoothAdapter.ACTION_REQUEST_ENABLE);
                        enableBluetoothLauncher.launch(enableBtIntent);
                    }
                    else
                    {

                        if (mBluetoothLeAdvertiser != null && mAdvertiseCallback != null)
                        {
                            mBluetoothLeAdvertiser.stopAdvertising(mAdvertiseCallback);

                            appendToLog("Stop BroadCasting!");
                        }


                        if (mBluetoothLeScanner != null && mScanCallback != null)
                        {
                            mBluetoothLeScanner.stopScan(mScanCallback);
                        }

                        NotifyLeScanStopped();

                        mBluetoothGattServer.close();
                        mSp_deviceArrayList.clear();
                        mRandom_deviceArrayList.clear();
                        if(mDeviceConnections!=null)
                        {
                            for(String mac_addr:mDeviceConnections.keySet())
                            {
                                BluetoothGatt gatt_got_now = mDeviceConnections.get(mac_addr).mDeviceGatt;

                                if (null != gatt_got_now) {
                                    gatt_got_now.close();
                                }
                            }
                            mDeviceConnections.clear();
                        }



                    }

                }


            });
        }



        //permission check
        {
            checkBluetoothPermissions();
            checkLocationPermission();
        }



        //bluetooth utility init
        {
            mBluetoothManager =
                    (BluetoothManager) getSystemService(Context.BLUETOOTH_SERVICE);
            mBluetoothAdapter = mBluetoothManager.getAdapter();


            mBluetoothLeScanner=mBluetoothAdapter.getBluetoothLeScanner();
            mBluetoothLeAdvertiser = mBluetoothAdapter.getBluetoothLeAdvertiser();


            if (mBluetoothLeAdvertiser == null)
            {
                appendToLog("硬件不支持 BLE 广播");

            }
            if (!getPackageManager().hasSystemFeature(PackageManager.FEATURE_BLUETOOTH_LE))
            {
                appendToLog("硬件不支持 BLE机能");

            }
        }

        //wifi direct is not in use now, we are still discussing the usability of it
        {

        }



    }


    private void setupServer()
    {
        mBluetoothGattServer = mBluetoothManager.openGattServer(getApplicationContext(), gattServerCallback);


        if(mBluetoothGattServer==null)
        {
            appendToLog("mBluetoothGattServer not started well");

        }
        else
        {
            appendToLog("mBluetoothGattServer started well");
        }

        BluetoothGattService service = new BluetoothGattService(mAroundMeIdentify_UUID, BluetoothGattService.SERVICE_TYPE_PRIMARY);

        BluetoothGattCharacteristic writeCharacteristic = new BluetoothGattCharacteristic(
                mAroundMe_CONNECT_CHARACTERISTIC_UUID,
                BluetoothGattCharacteristic.PROPERTY_NOTIFY |
                        BluetoothGattCharacteristic.PROPERTY_READ |
                        BluetoothGattCharacteristic.PROPERTY_WRITE,
                BluetoothGattCharacteristic.PERMISSION_READ |
                        BluetoothGattCharacteristic.PERMISSION_WRITE |
                        BluetoothGattCharacteristic.PROPERTY_NOTIFY
        );

        service.addCharacteristic(writeCharacteristic);

        mBluetoothGattServer.addService(service);
    }




    private void StartScanning()
    {
        ScanFilter scanFilter = new ScanFilter.Builder()
                .setServiceUuid(new ParcelUuid(mAroundMeIdentify_UUID))
                .build();

        ScanSettings scanSettings = new ScanSettings.Builder()
                .setScanMode(ScanSettings.SCAN_MODE_LOW_LATENCY)
                .build();


        mBluetoothLeScanner.startScan(Arrays.asList(scanFilter), scanSettings,mScanCallback);
        appendToLog("Now Receiving/Scanning...");
    }


    private void StartAdvertising()
    {
        AdvertiseSettings settings = new AdvertiseSettings.Builder()
                .setAdvertiseMode(AdvertiseSettings.ADVERTISE_MODE_BALANCED)
                .setConnectable(true)
                .setTimeout(0)
                .setTxPowerLevel(AdvertiseSettings.ADVERTISE_TX_POWER_MEDIUM)
                .build();

        AdvertiseData advdata = new AdvertiseData.Builder()
                .setIncludeDeviceName(true)
                .addServiceUuid(new ParcelUuid(mAroundMeIdentify_UUID))
                .build();
        mBluetoothLeAdvertiser.startAdvertising(settings, advdata, mAdvertiseCallback);
        appendToLog("Advertising");

    }
    private boolean checkLocationPermission()
    {
        if (Build.VERSION.SDK_INT >= Build.VERSION_CODES.M)
        {
            if (ContextCompat.checkSelfPermission(this, Manifest.permission.ACCESS_FINE_LOCATION)
                    != PackageManager.PERMISSION_GRANTED) {
                ActivityCompat.requestPermissions(this,
                        new String[]{Manifest.permission.ACCESS_FINE_LOCATION},
                        PERMISSION_REQUEST_FINE_LOCATION);


                return false;
            }
        }

        return true;
    }
    private boolean checkBluetoothPermissions()
    {
        if (Build.VERSION.SDK_INT >= Build.VERSION_CODES.S)
        {
            if (ContextCompat.checkSelfPermission(this, Manifest.permission.BLUETOOTH_SCAN)
                    != PackageManager.PERMISSION_GRANTED
                    || ContextCompat.checkSelfPermission(this, Manifest.permission.BLUETOOTH_CONNECT)
                    != PackageManager.PERMISSION_GRANTED
                    ||
                    ContextCompat.checkSelfPermission(this, Manifest.permission.BLUETOOTH_ADVERTISE)
                            != PackageManager.PERMISSION_GRANTED
            )
            {
                ActivityCompat.requestPermissions(this, new String[]
                                {
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
    public void onRequestPermissionsResult(int requestCode, String[] permissions, int[] grantResults) {

        super.onRequestPermissionsResult(requestCode, permissions, grantResults);
        if (requestCode == PERMISSION_REQUEST_BLUETOOTH)
        {
            if (grantResults.length > 1
                    && grantResults[0] == PackageManager.PERMISSION_GRANTED
                    && grantResults[1] == PackageManager.PERMISSION_GRANTED
                    &&grantResults[2]==PackageManager.PERMISSION_GRANTED)
            {
                appendToLog("Bluetooth permissions granted");

            }
            else
            {
                appendToLog("Bluetooth permissions denied");

                finish();
            }
        }
        else if (requestCode == PERMISSION_REQUEST_FINE_LOCATION)
        {
            if (grantResults[0] == PackageManager.PERMISSION_GRANTED)
            {
                appendToLog("Location permission granted");

            }
            else
            {
                appendToLog("Location permission denied");

                finish();
            }
        }
    }
    public void onDestroy()
    {

        super.onDestroy();


    }



    //定义广播接

    private ScanCallback mScanCallback=new ScanCallback()
    {
        @Override
        public void onScanResult(int callbackType, ScanResult result)
        {
            super.onScanResult(callbackType, result);

            BluetoothDevice result_device=result.getDevice();

            String result_device_mac_addr=result_device.getAddress();

            // 处理带有特定服务UUID的设备
            if(mDeviceConnections.containsKey(result_device_mac_addr))
            {
                //do nothing
            }
            else
            {
                BluetoothGatt got_gatt= result_device.connectGatt(getApplicationContext(), false, mConnection_GattCallback);


                if(got_gatt!=null)
                {
                    appendToLog("connected successfully");

                }
                else
                {
                    appendToLog("connected failed!");

                }

                PlayerDeviceInfo player_info= new PlayerDeviceInfo();
                player_info.mDeviceGatt=got_gatt;
                player_info.mDeviceName=result_device.getName();

                player_info.mRegisteredPlayerDeviceMacAddr=result_device_mac_addr;
                player_info.mIndex= mSp_deviceArrayList.size();
                mDeviceConnections.put(result_device_mac_addr,player_info);
                String device_display_info =player_info.VersionToString();


                mSp_deviceArrayList.add(device_display_info);
                mSp_deviceArrayAdapter.notifyDataSetChanged();

            }










        }

        @Override
        public void onScanFailed(int errorCode)
        {
            super.onScanFailed(errorCode);
            appendToLog("BLE Scan Started Failed! with error code: "+errorCode);

            // Scanning failed. Handle error.
        }


        // 其他回调方法，如onBatchScanResults, onScanFailed等
    };
    private AdvertiseCallback mAdvertiseCallback = new AdvertiseCallback() {
        @Override
        public void onStartSuccess(AdvertiseSettings settingsInEffect)
        {
            super.onStartSuccess(settingsInEffect);

            appendToLog("BLE BroadCast Started successfully");

        }

        @Override
        public void onStartFailure(int errorCode)
        {
            super.onStartFailure(errorCode);

            appendToLog("BLE BroadCast Started Failed! with error code "+errorCode);

            // Failed to start broadcasting
        }
    };

    private BluetoothGattCallback mConnection_GattCallback = new BluetoothGattCallback() {

        @Override
        public void onConnectionStateChange(BluetoothGatt gatt, int status, int newState)
        {
            //connect to p device
            if (newState == BluetoothProfile.STATE_CONNECTED)
            {


                appendToLog("XXXXXXXXXXXXXX first connected with p-device:"+gatt.getDevice().getName()+"@"+gatt.getDevice().getAddress());

                gatt.discoverServices();
            }
        }

        @Override
        public void onServicesDiscovered(BluetoothGatt gatt, int status) {
            if (status == BluetoothGatt.GATT_SUCCESS)
            {
                BluetoothGattService service = gatt.getService(mAroundMeIdentify_UUID);
                if (service != null) {
                    BluetoothGattCharacteristic characteristic = service.getCharacteristic(mAroundMe_CONNECT_CHARACTERISTIC_UUID);
                    if (characteristic != null) {
                        gatt.setCharacteristicNotification(characteristic, true);

                        BluetoothGattDescriptor descriptor = characteristic.getDescriptor(CLIENT_CHARACTERISTIC_CONFIG_UUID);
                        if (descriptor != null) {
                            descriptor.setValue(BluetoothGattDescriptor.ENABLE_NOTIFICATION_VALUE);
                            gatt.writeDescriptor(descriptor);
                        }
                    }
                }
            }
        }

        @Override
        public void onCharacteristicRead(BluetoothGatt gatt, BluetoothGattCharacteristic characteristic, int status)
        {
            if (status == BluetoothGatt.GATT_SUCCESS)
            {
                // 输出或显示接收到的消息
                String receivedMessage = new String(characteristic.getValue(), Charset.forName("UTF-8"));
                appendToLog("ReceivedMessage"+receivedMessage);

            }
        }

        //接受外围设备的消息变更 这个地方能收到外围设备的mac的
        @Override
        public void onCharacteristicChanged(BluetoothGatt gatt, BluetoothGattCharacteristic characteristic)
        {

            byte[] data = characteristic.getValue();
            String receivedString = new String(data, Charset.forName("UTF-8"));
            appendToLog("ReceivedMessage from @"+gatt.getDevice().getName()+"@"+gatt.getDevice().getAddress()+"Received: " + receivedString);

        }
    };




    private final BluetoothGattServerCallback gattServerCallback = new BluetoothGattServerCallback()
    {


        //接收中央设备的消息
        @Override
        public void onCharacteristicWriteRequest(BluetoothDevice device, int requestId, BluetoothGattCharacteristic characteristic,
                                                 boolean preparedWrite, boolean responseNeeded, int offset, byte[] value) {
            super.onCharacteristicWriteRequest(device, requestId, characteristic, preparedWrite, responseNeeded, offset, value);

            if (mAroundMe_CONNECT_CHARACTERISTIC_UUID.equals(characteristic.getUuid())&&device.getName()!="null")
            {
                mBluetoothGattServer.sendResponse(device, requestId, BluetoothGatt.GATT_SUCCESS, 0, null);

                String receivedData = new String(value, StandardCharsets.UTF_8);

                appendToLog("ReceivedFromCentral"+"Received data from central device: "+device.getName()+"@"+device.getAddress() +"And data is "+ receivedData);

            }
        }

        public void onCharacteristicReadRequest(BluetoothDevice device, int requestId, int offset, BluetoothGattCharacteristic characteristic)
        {
            super.onCharacteristicReadRequest(device, requestId, offset, characteristic);
            mBluetoothGattServer.sendResponse(device, requestId, BluetoothGatt.GATT_SUCCESS, offset, characteristic.getValue());
        }

        public void onConnectionStateChange(BluetoothDevice device, int status, int newState) {
            super.onConnectionStateChange(device, status, newState);
            if (newState == BluetoothProfile.STATE_CONNECTED)
            {
                //connect to c device, me as p device
                appendToLog("YYYYYYYYYY Device connected with c-device: " +device.getName()+"@"+ device.getAddress());

                if(mDeviceConnections.containsKey(device.getAddress()))
                {
                    appendToLog("MMMMMMMMMMM my Device already connected with  p-device:  " +device.getName()+"@"+ device.getAddress());

                }



                // Do something, e.g., allocate resources, save the device reference, etc.
            } else if (newState == BluetoothProfile.STATE_DISCONNECTED)
            {
                appendToLog("YYYYYYYYYY  Device disconnected with c-device: " + device.getName()+"@"+device.getAddress());

                // Cleanup or reset as needed.
            }
        }

    };


    private Runnable communicationRunnable = new Runnable() {

        @Override
        public void run()
        {
            for(String device_mac:mDeviceConnections.keySet())
            {
                BluetoothGatt cur_gatt=mDeviceConnections.get(device_mac).mDeviceGatt;
                if (cur_gatt != null)
                {
                    BluetoothGattService cur_service=cur_gatt.getService(mAroundMeIdentify_UUID);

                    if(cur_service!=null)
                    {
                        BluetoothGattCharacteristic characteristic =
                                cur_service.getCharacteristic(mAroundMe_CONNECT_CHARACTERISTIC_UUID);

                        if(characteristic!=null)
                        {
                            String messageToSend = device_mac;
                            characteristic.setValue(messageToSend.getBytes(StandardCharsets.UTF_8));
                            cur_gatt.writeCharacteristic(characteristic);
                            appendToLog("msg sent to p device :"+cur_gatt.getDevice().getName());


                        }
                    }



                }
            }



            if (mBluetoothGattServer != null)
            {
                // Here, we simulate sending data as peripheral every 2 seconds.
                List<BluetoothDevice> connectedDevices = mBluetoothManager.getConnectedDevices(BluetoothProfile.GATT);
                for (BluetoothDevice device : connectedDevices)
                {





                    String messageToSend = "hxhxhx";
                    BluetoothGattCharacteristic characteristic = mBluetoothGattServer.getService(mAroundMeIdentify_UUID).getCharacteristic(mAroundMe_CONNECT_CHARACTERISTIC_UUID);
                    characteristic.setValue(messageToSend.getBytes(StandardCharsets.UTF_8));
                    mBluetoothGattServer.notifyCharacteristicChanged(device, characteristic, false);
                    appendToLog("msg sent to c device :"+device.getName()+"@"+device.getAddress());


                }
            }


            mHandler.postDelayed(communicationRunnable, 2000);  // Schedule the next message in 2 seconds
        }
    };
}
