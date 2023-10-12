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
    public class PlayerDeviceInfo
    {
        public BluetoothGatt mDeviceGatt=null;
        public String mDeviceName=null;
        public String mRegisteredPlayerDeviceMacAddr=null;

        public boolean misRandomDeivce=true;
        public double mDistance=-1.0f;
        public int mIndex=0;
        public String GenerateDisplayString()
        {
            return mDeviceName+"@Mac:"+mRegisteredPlayerDeviceMacAddr+"@Dist:"+String.format("%.2f", mDistance);
        }
    };
    private double calculateDistance(double rssi)
    {
        double RSSI_BASE = -69.0;
        double ENVIRONMENT_FACTOR = 2.0;
        return Math.pow(10, (RSSI_BASE - rssi) / (10 * ENVIRONMENT_FACTOR));
    }
    private double calculateDistance(int rssi, int txPower)
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
    private String GetCurrentNumStatus()
    {
        return String.format("Lv1:%d, Lv0:%d", mDeviceCountEncountered_WithName,mDeviceCountEncountered_WithGarbageName);
    }

    private  View mLog_button_divider;
    private LinearLayout mbuttonPanel;
    private LinearLayout mlogPanel;



    public static void OnNewLogGenerated(String in_string)
    {
        ;
    }


    WifiP2pManager manager;
    WifiP2pManager.Channel channel;

    private static final boolean mDebug_With_UI=true;
    //定义
    private static final int PERMISSION_REQUEST_FINE_LOCATION = 1;
    private static final int PERMISSION_REQUEST_BLUETOOTH = 2;

    private static final int REQUEST_ENABLE_BT = 999;
    BluetoothManager mBluetoothManager;
    private final UUID mAroundMeIdentify_UUID=UUID.fromString("fd4e1f57-110a-4d52-9a5b-fe97e0dcf7bb");
    private static final UUID CLIENT_CHARACTERISTIC_CONFIG_UUID = UUID.fromString("00002902-0000-1000-8000-00805f9b34fb");
    public final UUID mAroundMe_CONNECT_CHARACTERISTIC_UUID = UUID.fromString("0C136FCC-3381-4F1E-9602-E2A3F8B70CEB");
    //public static final String mAroundMe_READ_CHARACTERISTIC_UUID = "1BE31CB9-9E07-4892-AA26-30E87ABE9F70";
    private BluetoothAdapter mBluetoothAdapter;

    private BluetoothLeScanner mBluetoothLeScanner;
    private boolean mLogViewautoScroll = true;
    private BluetoothLeAdvertiser mBluetoothLeAdvertiser;

    private BluetoothGattServer mBluetoothGattServer;
    private Handler mHandler = new Handler();

    private EditText mInputMessage;
    private Button mButton_StartScan;
    private Button mButton_CancelScan;

    private ListView mSp_Device_listView;
    private ArrayAdapter<String> mSp_deviceArrayAdapter;
    private ArrayList<String> mSp_deviceDisplayArrayList;

    private ListView mRandom_Device_listView;
    private ArrayAdapter<String> mRandom_deviceArrayAdapter;

    private ArrayList<String> mRandom_deviceDisplayArrayList;

    private TextView mLogTextView;

    private TextView mMacAddrCountView;
    private ScrollView mLogScrollView;
    private Map<String, PlayerDeviceInfo> mDeviceInfoAll=new HashMap<>();

    private int mDeviceCountEncountered_WithName=0;

    private int mDeviceCountEncountered_WithGarbageName=0;

    private void ToggleButtons()
    {
        if(mButton_CancelScan!=null&&mButton_StartScan!=null)
        {

            mButton_StartScan.setEnabled(!mButton_StartScan.isEnabled());
            mButton_CancelScan.setEnabled(!mButton_CancelScan.isEnabled());
        }
    }


    private void stopClassicBluetoothDiscovery()
    {
        if (mBluetoothAdapter.isDiscovering())
        {
            mBluetoothAdapter.cancelDiscovery();
        }

    }

    private void startClassicBluetoothDiscovery()
    {
        if(!mBluetoothAdapter.isDiscovering())
        {
            mBluetoothAdapter.startDiscovery();
            appendToLog("经典蓝牙 搜索 开始~");
        }

    }
   /* private final ActivityResultLauncher<Intent> enableBluetoothLauncher =
            registerForActivityResult(new ActivityResultContracts.StartActivityForResult(),
                    result ->
                    {
                        if (result.getResultCode() == RESULT_OK)
                        {
                            mButton_StartScan.callOnClick();
                            appendToLog("BluetoothStatus"+"User enabled Bluetooth.");

                        } else
                        {
                            appendToLog("BluetoothStatus"+"User declined to enable Bluetooth.");

                        }
                    });


*/
    protected void NotifyLeScanStopped()
    {
        appendToLog("BLE搜索结束...");
        ToggleButtons();
    }




    public void appendToLog(String text)
    {
        if(mDebug_With_UI)
        {
            runOnUiThread(() -> {
                mLogTextView.append(text + "\n");
                // 自动滚动到底部
                if (mLogViewautoScroll) {
                    scrollToBottom();
                }
            });
        }

        OnNewLogGenerated(text);

    }

    private void scrollToBottom()
    {
        mLogScrollView.post(() -> mLogScrollView.fullScroll(View.FOCUS_DOWN));
    }

    private void StopAroundMeService()
    {
        if(!mBluetoothAdapter.isEnabled())
        {

            Intent enableBtIntent = new Intent(BluetoothAdapter.ACTION_REQUEST_ENABLE);
            startActivityForResult(enableBtIntent, REQUEST_ENABLE_BT);
        }
        else
        {

            //BLE process
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
                mSp_deviceDisplayArrayList.clear();
                mRandom_deviceDisplayArrayList.clear();
                mRandom_deviceArrayAdapter.notifyDataSetChanged();
                mSp_deviceArrayAdapter.notifyDataSetChanged();
                if(mDeviceInfoAll!=null)
                {
                    for(String mac_addr:mDeviceInfoAll.keySet())
                    {
                        BluetoothGatt gatt_got_now = mDeviceInfoAll.get(mac_addr).mDeviceGatt;

                        if (null != gatt_got_now) {
                            gatt_got_now.close();
                        }
                    }
                    mDeviceInfoAll.clear();
                }
            }

//classic bluetooth process
            {

                stopClassicBluetoothDiscovery();


            }


        }
        mRandom_deviceDisplayArrayList.clear();
        mHandler.removeCallbacks(communicationRunnable);
    }

    private void StartAroundMeService()
    {
        if (!mBluetoothAdapter.isEnabled())
        {


            Intent enableBtIntent = new Intent(BluetoothAdapter.ACTION_REQUEST_ENABLE);
            startActivityForResult(enableBtIntent, REQUEST_ENABLE_BT);

        }
        else
        {


            startClassicBluetoothDiscovery();

            setupServer();


            StartScanning();

            StartAdvertising();


            ToggleButtons();

            mHandler.post(communicationRunnable);



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
        appendToLog("BLE Scanning started!");
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

    }
    private boolean checkLocationPermission()
    {
        if (Build.VERSION.SDK_INT >= Build.VERSION_CODES.M)
        {
            if (ActivityCompat.checkSelfPermission(this, Manifest.permission.ACCESS_FINE_LOCATION)
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


    //定义广播接

    private ScanCallback mScanCallback=new ScanCallback()
    {
        @Override
        public void onScanResult(int callbackType, ScanResult result)
        {
            super.onScanResult(callbackType, result);

            BluetoothDevice result_device=result.getDevice();

            String result_device_mac_addr=result_device.getAddress();


            if(result_device.getName()!=null&&!result_device.getName().equals("null"))
            {
                // 处理带有特定服务UUID的设备
                if(mDeviceInfoAll.containsKey(result_device_mac_addr))
                {

                    PlayerDeviceInfo cur_player_info=mDeviceInfoAll.get(result_device_mac_addr);

                    if(null!=cur_player_info&&!cur_player_info.misRandomDeivce)
                    {
                        int rssi = result.getRssi();
                        // TODO: Replace with the actual TX Power value for your beacon or BLE device
                        int txPower = -59; // This is just an example value, you need the actual TX Power for accurate results

                        double estimatedDistance_new = calculateDistance(rssi, txPower);


                        cur_player_info.mDistance=estimatedDistance_new;

                        mSp_deviceDisplayArrayList.set(cur_player_info.mIndex,cur_player_info.GenerateDisplayString());


                        if(mDebug_With_UI)
                        {
                            mSp_deviceArrayAdapter.notifyDataSetChanged();
                        }

                    }

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

                    int rssi = result.getRssi();
                    // TODO: Replace with the actual TX Power value for your beacon or BLE device
                    int txPower = -59; // This is just an example value, you need the actual TX Power for accurate results

                    double estimatedDistance = calculateDistance(rssi, txPower);


                    PlayerDeviceInfo player_info= new PlayerDeviceInfo();
                    player_info.mDeviceGatt=got_gatt;
                    player_info.mDeviceName=result_device.getName();
                    player_info.misRandomDeivce=false;
                    player_info.mDistance=estimatedDistance;
                    player_info.mRegisteredPlayerDeviceMacAddr=result_device_mac_addr;
                    player_info.mIndex= mSp_deviceDisplayArrayList.size();
                    mDeviceInfoAll.put(result_device_mac_addr,player_info);

                    mSp_deviceDisplayArrayList.add(player_info.GenerateDisplayString());
                    mDeviceCountEncountered_WithName++;

                    //OnNewMacAddressEncountered();
                    if(mDebug_With_UI)
                    {
                        mSp_deviceArrayAdapter.notifyDataSetChanged();

                    }

                }
            }
            else
            {
                mDeviceCountEncountered_WithGarbageName++;
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


    //a client callback receiving msg from p devices
    private BluetoothGattCallback mConnection_GattCallback = new BluetoothGattCallback() {

        @Override
        public void onConnectionStateChange(BluetoothGatt gatt, int status, int newState)
        {
            //connect to p device
            if (newState == BluetoothProfile.STATE_CONNECTED)
            {


                appendToLog("connected with p-device:"+gatt.getDevice().getName()+"@"+gatt.getDevice().getAddress());

                gatt.discoverServices();
            }
        }

        @Override
        public void onServicesDiscovered(BluetoothGatt gatt, int status)
        {
            if (status == BluetoothGatt.GATT_SUCCESS)
            {
                BluetoothGattService service = gatt.getService(mAroundMeIdentify_UUID);
                if (service != null)
                {
                    BluetoothGattCharacteristic characteristic = service.getCharacteristic(mAroundMe_CONNECT_CHARACTERISTIC_UUID);
                    if (characteristic != null)
                    {
                        gatt.setCharacteristicNotification(characteristic, true);

                        BluetoothGattDescriptor descriptor = characteristic.getDescriptor(CLIENT_CHARACTERISTIC_CONFIG_UUID);
                        if (descriptor != null)
                        {
                            //activate notify functionality
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

            }
        }

        //接受外围设备的消息变更 这个地方能收到外围设备的mac的
        @Override
        public void onCharacteristicChanged(BluetoothGatt gatt, BluetoothGattCharacteristic characteristic)
        {

            byte[] data = characteristic.getValue();
            String receivedString = new String(data, Charset.forName("UTF-8"));
            appendToLog("msg from p device:"+gatt.getDevice().getName()+"@"+gatt.getDevice().getAddress()+"@mgs:" + receivedString);

        }
    };




    private final BluetoothGattServerCallback gattServerCallback = new BluetoothGattServerCallback()
    {


        //receive msg from c device
        @Override
        public void onCharacteristicWriteRequest(BluetoothDevice device, int requestId, BluetoothGattCharacteristic characteristic,
                                                 boolean preparedWrite, boolean responseNeeded, int offset, byte[] value) {
            super.onCharacteristicWriteRequest(device, requestId, characteristic, preparedWrite, responseNeeded, offset, value);

            if (mAroundMe_CONNECT_CHARACTERISTIC_UUID.equals(characteristic.getUuid())&&device.getName()!="null")
            {
                mBluetoothGattServer.sendResponse(device, requestId, BluetoothGatt.GATT_SUCCESS, 0, null);

                String receivedData = new String(value, StandardCharsets.UTF_8);

                appendToLog("Received msg from c device: "+device.getName()+"@"+device.getAddress() +"msg:"+ receivedData);

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
                appendToLog("Connected with c-device: " +device.getName()+"@"+ device.getAddress());

                if(mDeviceInfoAll.containsKey(device.getAddress()))
                {
                    appendToLog("Already connected with  p-device:  " +device.getName()+"@"+ device.getAddress());

                }



                // Do something, e.g., allocate resources, save the device reference, etc.
            }
            else if (newState == BluetoothProfile.STATE_DISCONNECTED)
            {
                appendToLog("disconnected with c-device: " + device.getName()+"@"+device.getAddress());

                // Cleanup or reset as needed.
            }
        }

    };


    private Runnable communicationRunnable = new Runnable()
    {

        @Override
        public void run()
        {
            /*for(String device_mac:mDeviceConnections.keySet())
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
            }*/



            if (mBluetoothGattServer != null)
            {
                // Here, we simulate sending data as peripheral every 2 seconds.
                List<BluetoothDevice> connectedDevices = mBluetoothManager.getConnectedDevices(BluetoothProfile.GATT);
                for (BluetoothDevice device : connectedDevices)
                {





                    if (true)
                    {
                        String messageToSend = mInputMessage.getText().toString();
                        BluetoothGattCharacteristic characteristic = mBluetoothGattServer.getService(mAroundMeIdentify_UUID).getCharacteristic(mAroundMe_CONNECT_CHARACTERISTIC_UUID);
                        characteristic.setValue(messageToSend.getBytes(StandardCharsets.UTF_8));
                        mBluetoothGattServer.notifyCharacteristicChanged(device, characteristic, false);
                        appendToLog("msg sent to c device :"+device.getName()+"@"+device.getAddress());
                    }



                }
            }


            if(mBluetoothAdapter.isEnabled())
            {
                startClassicBluetoothDiscovery();


                if(mBluetoothAdapter.isDiscovering())
                {
                    appendToLog("经典蓝牙搜索设备ing");
                }
            }

            mHandler.postDelayed(communicationRunnable, 2000);  // Schedule the next message in 2 seconds
            mMacAddrCountView.setText(GetCurrentNumStatus());
        }
    };


    private final BroadcastReceiver mClassicBluetoothReceiver = new BroadcastReceiver()
    {
        public void onReceive(Context context, Intent intent)
        {
            String action = intent.getAction();
            if (BluetoothDevice.ACTION_FOUND.equals(action))
            {
                BluetoothDevice device = intent.getParcelableExtra(BluetoothDevice.EXTRA_DEVICE);
                String deviceName = device.getName();
                String deviceAddress = device.getAddress();


                if(deviceName!=null&&!deviceName.equals("null"))
                {
                    if(!mDeviceInfoAll.containsKey(deviceAddress))
                    {

                        short rssi = intent.getShortExtra(BluetoothDevice.EXTRA_RSSI, Short.MIN_VALUE);
                        double estimatedDistance = calculateDistance(rssi);
                        PlayerDeviceInfo player_info= new PlayerDeviceInfo();
                        player_info.mDeviceGatt=null;
                        player_info.mDeviceName=deviceName;
                        player_info.mRegisteredPlayerDeviceMacAddr=deviceAddress;
                        player_info.misRandomDeivce=true;
                        player_info.mIndex=mRandom_deviceDisplayArrayList.size();
                        player_info.mDistance=estimatedDistance;
                        mDeviceInfoAll.put(deviceAddress,player_info);
                        mRandom_deviceDisplayArrayList.add(player_info.GenerateDisplayString());
                        mDeviceCountEncountered_WithName++;

                        //OnNewMacAddressEncountered();
                        if(mDebug_With_UI)
                        {
                            mRandom_deviceArrayAdapter.notifyDataSetChanged();


                        }

                    }
                    else
                    {
                        PlayerDeviceInfo cur_player_info=mDeviceInfoAll.get(deviceAddress);



                        if(null!=cur_player_info&&cur_player_info.misRandomDeivce)
                        {
                            short rssi = intent.getShortExtra(BluetoothDevice.EXTRA_RSSI, Short.MIN_VALUE);
                            double estimatedDistance_new = calculateDistance(rssi);
                            cur_player_info.mDistance=estimatedDistance_new;
                            mRandom_deviceDisplayArrayList.set(cur_player_info.mIndex,cur_player_info.GenerateDisplayString());

                            if(mDebug_With_UI)
                            {
                                mRandom_deviceArrayAdapter.notifyDataSetChanged();
                            }

                        }
                    }
                }
                else
                {
                    mDeviceCountEncountered_WithGarbageName++;
                }




            }
            else if(action.equals(BluetoothAdapter.ACTION_DISCOVERY_FINISHED))
            {
                appendToLog("经典蓝牙 搜索结束");
            }


        }
    };



    //activity events start
    @Override
    protected void onCreate(Bundle savedInstanceState)
    {
        super.onCreate(savedInstanceState);

        //UI gadgets fixing
        {

            if(mDebug_With_UI)
            {
                //layout setting
                setContentView(R.layout.activity_main);
            }



            //sp device list view init
            {
                //device array list\adaptor init
                mSp_deviceDisplayArrayList = new ArrayList<>();


                if(mDebug_With_UI)
                {
                    mSp_deviceArrayAdapter = new ArrayAdapter<>(this, android.R.layout.simple_list_item_1, mSp_deviceDisplayArrayList);

                    //list view set the adaptor and view
                    mSp_Device_listView = findViewById(R.id.sp_device_list);
                    mSp_Device_listView.setAdapter(mSp_deviceArrayAdapter);
                }

            }


            //random device list view init
            {
                //device array list\adaptor init
                mRandom_deviceDisplayArrayList = new ArrayList<>();

                if(mDebug_With_UI)
                {
                    mRandom_deviceArrayAdapter = new ArrayAdapter<>(this, android.R.layout.simple_list_item_1, mRandom_deviceDisplayArrayList);
                    //list view set the adaptor and view
                    mRandom_Device_listView = findViewById(R.id.random_device_list);
                    mRandom_Device_listView.setAdapter(mRandom_deviceArrayAdapter);
                }

            }



            if(mDebug_With_UI)
            {
                //text and button binding
                mButton_StartScan = this.findViewById(R.id.button_start);
                mButton_CancelScan = this.findViewById(R.id.button_stop);

                mButton_StartScan.setEnabled(true);
                mButton_CancelScan.setEnabled(false);

                mLogTextView = findViewById(R.id.log_text_view);
                mLogScrollView = findViewById(R.id.log_scroll_view);
                mInputMessage=findViewById(R.id.input_message);
                mMacAddrCountView=findViewById(R.id.Mac_Addr_Count);
                mLog_button_divider = findViewById(R.id.divider);
                mbuttonPanel = findViewById(R.id.button_panel);
                mlogPanel = findViewById(R.id.log_panel);

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

                                LinearLayout.LayoutParams params = (LinearLayout.LayoutParams) mbuttonPanel.getLayoutParams();
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
            }





            //classic bluetooth device finder intent setting
            {
                IntentFilter filter = new IntentFilter(BluetoothDevice.ACTION_FOUND);
                registerReceiver(mClassicBluetoothReceiver, filter);


                IntentFilter filter2=new IntentFilter(BluetoothAdapter.ACTION_DISCOVERY_FINISHED);
                registerReceiver(mClassicBluetoothReceiver,filter2);
            }



            if(mDebug_With_UI)
            {
                mLogScrollView.setOnTouchListener(new View.OnTouchListener()
                {
                    @Override
                    public boolean onTouch(View v, MotionEvent event)
                    {
                        switch (event.getAction())
                        {
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

                mButton_StartScan.setOnClickListener(new View.OnClickListener()
                {


                    @Override
                    public void onClick(View arg0)
                    {
                        StartAroundMeService();
                        mDeviceCountEncountered_WithName=0;
                        mDeviceCountEncountered_WithGarbageName=0;
                    }
                });

                mButton_CancelScan.setOnClickListener(new View.OnClickListener()
                {


                    @Override
                    public void onClick(View arg0)
                    {
                        StopAroundMeService();
                        mDeviceCountEncountered_WithName=0;
                        mDeviceCountEncountered_WithGarbageName=0;
                    }


                });
            }



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
    @Override
    protected void onActivityResult(int requestCode, int resultCode, Intent data)
    {
        super.onActivityResult(requestCode, resultCode, data);
        if (requestCode == REQUEST_ENABLE_BT)
        {
            if (resultCode == RESULT_OK)
            {
                // Bluetooth is now enabled, you can proceed with your functionality
            } else if (resultCode == RESULT_CANCELED)
            {
                // User denied enabling Bluetooth, you might want to handle accordingly
            }
        }
    }
    public void onDestroy()
    {

        super.onDestroy();
        unregisterReceiver(mClassicBluetoothReceiver);
    }

    protected void onResume()
    {
        super.onResume();
        //mHandler.post(communicationRunnable);  // Start sending messages
    }

    @Override
    protected void onPause()
    {
        super.onPause();
        mHandler.removeCallbacks(communicationRunnable);  // Stop sending messages
    }

    public void onRequestPermissionsResult(int requestCode, String[] permissions, int[] grantResults)
    {

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
    //activity events end
}
