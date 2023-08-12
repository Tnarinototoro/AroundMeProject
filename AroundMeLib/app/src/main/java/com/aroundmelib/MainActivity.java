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
import android.view.View;
import android.widget.ArrayAdapter;
import android.widget.Button;
import android.widget.CompoundButton;
import android.widget.ListView;
import android.widget.Switch;
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


    private TextView mText_State_info;
    private Button mButton_StartScan;
    private Button mButton_CancelScan;
    private ListView listView;
    private ArrayAdapter<String> deviceArrayAdapter;
    private ArrayList<String> deviceArrayList;


    private Map<String, BluetoothGatt> mDeviceConnections=new HashMap<>();


    private final ActivityResultLauncher<Intent> enableBluetoothLauncher =
            registerForActivityResult(new ActivityResultContracts.StartActivityForResult(),
                    result -> {
                        if (result.getResultCode() == RESULT_OK)
                        {
                            mButton_StartScan.callOnClick();
                            Log.i("BluetoothStatus", "User enabled Bluetooth.");
                        } else {
                            Log.i("BluetoothStatus", "User declined to enable Bluetooth.");
                        }
                    });



    protected void NotifyLeScanStopped()
    {
        mText_State_info.setText("搜索结束...");
        mButton_StartScan.setClickable(true);

        mButton_CancelScan.setClickable(false);
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
    @Override
    protected void onCreate(Bundle savedInstanceState)
    {
        super.onCreate(savedInstanceState);

        //UI gadgets fixing
        {
            //layout setting
            setContentView(R.layout.activity_main);

            //device array list\adaptor init
            deviceArrayList = new ArrayList<>();
            deviceArrayAdapter = new ArrayAdapter<>(this, android.R.layout.simple_list_item_1, deviceArrayList);

            //list view set the adaptor and view
            listView = findViewById(R.id.device_list);
            listView.setAdapter(deviceArrayAdapter);

            //text and button binding
            mText_State_info = (TextView) this.findViewById(R.id.Text_State_info); //状态信息
            mButton_StartScan = (Button) this.findViewById(R.id.button_start_aroundme_service);
            mButton_CancelScan = (Button) this.findViewById(R.id.button_stop_aroundme_service);
            mButton_StartScan.setText("Start Service");
            mButton_CancelScan.setText("Stop Service");
            mButton_CancelScan.setClickable(false);





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


                        mButton_StartScan.setClickable(false);
                        mButton_CancelScan.setClickable(true);
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

                            mText_State_info.setText("Stop BroadCasting!");
                        }


                        if (mBluetoothLeScanner != null && mScanCallback != null)
                        {
                            mBluetoothLeScanner.stopScan(mScanCallback);
                        }

                        NotifyLeScanStopped();

                        mBluetoothGattServer.close();
                        deviceArrayList.clear();
                        if(mDeviceConnections!=null)
                        {
                            for(String mac_addr:mDeviceConnections.keySet())
                            {
                                BluetoothGatt gatt_got_now = mDeviceConnections.get(mac_addr);

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
                Toast.makeText(this, "硬件不支持 BLE 广播", Toast.LENGTH_SHORT).show();

            }
            if (!getPackageManager().hasSystemFeature(PackageManager.FEATURE_BLUETOOTH_LE))
            {
                Toast.makeText(this, "硬件不支持 BLE机能", Toast.LENGTH_SHORT).show();

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
            Toast.makeText(getApplicationContext(), "mBluetoothGattServer not started well", Toast.LENGTH_SHORT).show();
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


        mBluetoothLeScanner.startScan(Arrays.asList(scanFilter), scanSettings, mScanCallback);
        mText_State_info.setText("Now Receiving/Scanning...");
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
        mText_State_info.setText("Advertising");

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
                Toast.makeText(this, "Bluetooth permissions granted", Toast.LENGTH_SHORT).show();
            }
            else
            {
                Toast.makeText(this, "Bluetooth permissions denied", Toast.LENGTH_SHORT).show();
                finish();
            }
        }
        else if (requestCode == PERMISSION_REQUEST_FINE_LOCATION)
        {
            if (grantResults[0] == PackageManager.PERMISSION_GRANTED) {
                Toast.makeText(this, "Location permission granted", Toast.LENGTH_SHORT).show();
            }
            else
            {
                Toast.makeText(this, "Location permission denied", Toast.LENGTH_SHORT).show();
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

            BluetoothDevice device_got=result.getDevice();

            String device_mac_addr=device_got.getAddress();

            String device_display_info =device_got.getName()+" @ "+ device_mac_addr;

            if(mDeviceConnections.containsKey(device_mac_addr))
            {
                //do nothing
            }
            else
            {
                BluetoothGatt got_gatt= device_got.connectGatt(getApplicationContext(), false, mConnection_GattCallback);


                if(got_gatt!=null)
                {
                    Toast.makeText(getApplicationContext(), "connected successfully", Toast.LENGTH_SHORT).show();
                }
                else
                {
                    Toast.makeText(getApplicationContext(), "connected failed!", Toast.LENGTH_SHORT).show();
                }
                mDeviceConnections.put(device_mac_addr,got_gatt);
                if (!deviceArrayList.contains(device_display_info))
                {
                    deviceArrayList.add(device_display_info);
                    deviceArrayAdapter.notifyDataSetChanged();
                }
            }


            //Toast.makeText(getApplicationContext(), "greate we got something!!", Toast.LENGTH_SHORT).show();
            // 在此处理扫描结果，例如获取设备信息
            // result.getDevice().getAddress() 获取设备地址


        }

        @Override
        public void onScanFailed(int errorCode)
        {
            super.onScanFailed(errorCode);
            Toast.makeText(getApplicationContext(), "BLE Scan Started Failed! with error code: "+errorCode, Toast.LENGTH_SHORT).show();
            // Scanning failed. Handle error.
        }


        // 其他回调方法，如onBatchScanResults, onScanFailed等
    };
    private AdvertiseCallback mAdvertiseCallback = new AdvertiseCallback() {
        @Override
        public void onStartSuccess(AdvertiseSettings settingsInEffect)
        {
            super.onStartSuccess(settingsInEffect);

            Toast.makeText(getApplicationContext(), "BLE BroadCast Started successfully", Toast.LENGTH_SHORT).show();
            // Broadcast started successfully
        }

        @Override
        public void onStartFailure(int errorCode)
        {
            super.onStartFailure(errorCode);

            Toast.makeText(getApplicationContext(), "BLE BroadCast Started Failed! with error code "+errorCode, Toast.LENGTH_SHORT).show();
            // Failed to start broadcasting
        }
    };

    private BluetoothGattCallback mConnection_GattCallback = new BluetoothGattCallback() {

        @Override
        public void onConnectionStateChange(BluetoothGatt gatt, int status, int newState)
        {
            if (newState == BluetoothProfile.STATE_CONNECTED)
            {

                Log.i("BluetoothStatus", "XXXXXXXXXXXXXX first connected with p-device:"+gatt.getDevice().getName()+"@"+gatt.getDevice().getAddress() );
                //Toast.makeText(getApplicationContext(), "first connected!!!!", Toast.LENGTH_SHORT).show();
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
                Log.d("ReceivedMessage", receivedMessage);
            }
        }

        //接受外围设备的消息变更
        @Override
        public void onCharacteristicChanged(BluetoothGatt gatt, BluetoothGattCharacteristic characteristic)
        {

            byte[] data = characteristic.getValue();
            String receivedString = new String(data, Charset.forName("UTF-8"));
            Log.d("ReceivedMessage from @"+gatt.getDevice().getName(), "Received: " + receivedString);
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
                Log.d("ReceivedFromCentral", "Received data from central device: "+device.getName()+"@"+device.getAddress() +"And data is "+ receivedData);
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
                Log.d(TAG, "YYYYYYYYYY Device connected with c-device: " +device.getName()+"@"+ device.getAddress());
                // Do something, e.g., allocate resources, save the device reference, etc.
            } else if (newState == BluetoothProfile.STATE_DISCONNECTED) {
                Log.d(TAG, "YYYYYYYYYY  Device disconnected with c-device: " + device.getName()+"@"+device.getAddress());
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
                BluetoothGatt cur_gatt=mDeviceConnections.get(device_mac);
                if (cur_gatt != null)
                {
                    BluetoothGattService cur_service=cur_gatt.getService(mAroundMeIdentify_UUID);

                    if(cur_service!=null)
                    {
                        BluetoothGattCharacteristic characteristic =
                                cur_service.getCharacteristic(mAroundMe_CONNECT_CHARACTERISTIC_UUID);

                        if(characteristic!=null)
                        {
                            String messageToSend = "from central!"+mBluetoothAdapter.getName();
                            characteristic.setValue(messageToSend.getBytes(StandardCharsets.UTF_8));
                            cur_gatt.writeCharacteristic(characteristic);
                            Log.d(TAG, "msg sent to p device :"+cur_gatt.getDevice().getName());

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
                    BluetoothGattCharacteristic characteristic = mBluetoothGattServer.getService(mAroundMeIdentify_UUID).getCharacteristic(mAroundMe_CONNECT_CHARACTERISTIC_UUID);
                    String messageToSend = "Hello from peripheral!";
                    characteristic.setValue(messageToSend.getBytes(StandardCharsets.UTF_8));
                    mBluetoothGattServer.notifyCharacteristicChanged(device, characteristic, false);

                    Log.d(TAG, "msg sent to c device :"+device.getName());
                }
            }

            Log.d(TAG, "running message process ");
            mHandler.postDelayed(communicationRunnable, 2000);  // Schedule the next message in 2 seconds
        }
    };
}
