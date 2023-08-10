package com.aroundmelib;


import android.Manifest;
import android.annotation.SuppressLint;
import android.bluetooth.BluetoothAdapter;
import android.bluetooth.BluetoothDevice;
import android.bluetooth.BluetoothManager;
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

import java.util.ArrayList;
import java.util.Arrays;
import java.util.UUID;


public class MainActivity extends AppCompatActivity {

    WifiP2pManager manager;
    WifiP2pManager.Channel channel;
    //定义
    private static final int PERMISSION_REQUEST_FINE_LOCATION = 1;
    private static final int PERMISSION_REQUEST_BLUETOOTH = 2;

    private static final String mAroundMeAdvertise_UUID="fd4e1f57-110a-4d52-9a5b-fe97e0dcf7bb";
    private BluetoothAdapter mBluetoothAdapter;

    private BluetoothLeScanner mBluetoothLeScanner;


    private BluetoothLeAdvertiser mBluetoothLeAdvertiser;

    private Switch mFindOrAdvertise_ModeSwitch;

    private TextView mText_State_info;
    private Button mButton_StartScan;
    private Button mButton_CancelScan;
    private ListView listView;
    private ArrayAdapter<String> deviceArrayAdapter;
    private ArrayList<String> deviceArrayList;


    private final ActivityResultLauncher<Intent> enableBluetoothLauncher =
            registerForActivityResult(new ActivityResultContracts.StartActivityForResult(),
                    result -> {
                        if (result.getResultCode() == RESULT_OK) {
                            mButton_StartScan.callOnClick();
                            Log.i("BluetoothStatus", "User enabled Bluetooth.");
                        } else {
                            Log.i("BluetoothStatus", "User declined to enable Bluetooth.");
                        }
                    });



    protected void NotifyLeScanStopped()
    {
        mText_State_info.setText("搜索结束...");
    }


    @Override
    protected void onCreate(Bundle savedInstanceState) {
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
            mButton_StartScan = (Button) this.findViewById(R.id.button_start_scan);
            mButton_CancelScan = (Button) this.findViewById(R.id.button_stop_scan);
            mButton_StartScan.setText("Start Receive/Scan");
            mButton_CancelScan.setText("Stop Receive/Scan");


            mFindOrAdvertise_ModeSwitch=(Switch)this.findViewById(R.id.receive_or_Advertise);
            mFindOrAdvertise_ModeSwitch.setText("ReceiverMode");



            mButton_StartScan.setOnClickListener(new View.OnClickListener() {

                @SuppressLint("MissingPermission")
                @Override
                public void onClick(View arg0) {

                    if (!mBluetoothAdapter.isEnabled())
                    {


                        Intent enableBtIntent = new Intent(BluetoothAdapter.ACTION_REQUEST_ENABLE);
                        enableBluetoothLauncher.launch(enableBtIntent);


                    } else
                    {


                        if(mFindOrAdvertise_ModeSwitch.isChecked())
                        {
                            AdvertiseSettings settings = new AdvertiseSettings.Builder()
                                    .setAdvertiseMode(AdvertiseSettings.ADVERTISE_MODE_BALANCED)
                                    .setConnectable(false)
                                    .setTimeout(0)
                                    .setTxPowerLevel(AdvertiseSettings.ADVERTISE_TX_POWER_MEDIUM)
                                    .build();

                            AdvertiseData advdata = new AdvertiseData.Builder()
                                    .setIncludeDeviceName(true)
                                    .addServiceUuid(new ParcelUuid(UUID.fromString(mAroundMeAdvertise_UUID)))
                                    .build();



                            mBluetoothLeAdvertiser.startAdvertising(settings, advdata, mAdvertiseCallback);
                            mText_State_info.setText("Broad casting...");
                        }
                        else
                        {

                            ScanFilter scanFilter = new ScanFilter.Builder()
                                    .setServiceUuid(new ParcelUuid(UUID.fromString(mAroundMeAdvertise_UUID)))
                                    .build();

                            ScanSettings scanSettings = new ScanSettings.Builder()
                                    .setScanMode(ScanSettings.SCAN_MODE_LOW_LATENCY)
                                    .build();



                            mBluetoothLeScanner.startScan(Arrays.asList(scanFilter), scanSettings, mScanCallback);
                            //mBluetoothLeScanner.startScan(mScanCallback);
                            //mBluetoothAdapter.startDiscovery();
                            mText_State_info.setText("Now Receiving/Scanning...");
                        }

                    }

                }


            });

            mButton_CancelScan.setOnClickListener(new View.OnClickListener() {

                @SuppressLint("MissingPermission")
                @Override
                public void onClick(View arg0) {



                    if(!mBluetoothAdapter.isEnabled())
                    {
                        Intent enableBtIntent = new Intent(BluetoothAdapter.ACTION_REQUEST_ENABLE);
                        enableBluetoothLauncher.launch(enableBtIntent);
                    }
                    else
                    {
                        if(mFindOrAdvertise_ModeSwitch.isChecked())
                        {
                            if (mBluetoothLeAdvertiser != null && mAdvertiseCallback != null)
                            {
                                mBluetoothLeAdvertiser.stopAdvertising(mAdvertiseCallback);

                                mText_State_info.setText("Stop BroadCasting!");
                            }


                        }
                        else
                        {
                            if (mBluetoothLeScanner != null && mScanCallback != null)
                            {
                                mBluetoothLeScanner.stopScan(mScanCallback);
                            }
                            //mBluetoothLeScanner.stopScan(mScanCallback);
                            NotifyLeScanStopped();
                            //mBluetoothAdapter.cancelDiscovery();
                        }



                    }

                }


            });


            mFindOrAdvertise_ModeSwitch.setOnCheckedChangeListener(new CompoundButton.OnCheckedChangeListener()
            {
                @Override
                public void onCheckedChanged(CompoundButton buttonView, boolean isChecked) {
                    if (isChecked)
                    {
                        mFindOrAdvertise_ModeSwitch.setText("BroadCastMode");
                        mButton_StartScan.setText("Start BroadCast");
                        mButton_CancelScan.setText("Stop BroadCast");
                        // Handle switch being turned on
                    }
                    else
                    {
                        mFindOrAdvertise_ModeSwitch.setText("ReceiverMode");
                        mButton_StartScan.setText("Start Receive/Scan");
                        mButton_CancelScan.setText("Stop Receive/Scan");
                        // Handle switch being turned off
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
            final BluetoothManager bluetoothManager =
                    (BluetoothManager) getSystemService(Context.BLUETOOTH_SERVICE);
            mBluetoothAdapter = bluetoothManager.getAdapter();
            //mBluetoothAdapter = BluetoothAdapter.getDefaultAdapter();

            mBluetoothLeScanner=mBluetoothAdapter.getBluetoothLeScanner();
            mBluetoothLeAdvertiser = mBluetoothAdapter.getBluetoothLeAdvertiser();


            if (mBluetoothLeAdvertiser == null) {
                Toast.makeText(this, "BLE Advertise not supported", Toast.LENGTH_SHORT).show();

            }
            if (!getPackageManager().hasSystemFeature(PackageManager.FEATURE_BLUETOOTH_LE)) {
                Toast.makeText(this, "BLE not supported", Toast.LENGTH_SHORT).show();

            }
        }



        //intent registration
        {
            IntentFilter filter_bluetooth_action_found = new IntentFilter(BluetoothDevice.ACTION_FOUND);
            registerReceiver(mReceiver, filter_bluetooth_action_found);
            IntentFilter filter_bluetooth_action_discovery_finished = new IntentFilter(BluetoothAdapter.ACTION_DISCOVERY_FINISHED);
            registerReceiver(mReceiver, filter_bluetooth_action_discovery_finished);
        }



        //wifi direct is not in use now, we are still discussing the usability of it
        {

        }



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
    public void onDestroy() {

        super.onDestroy();
        //解除注册
        unregisterReceiver(mReceiver);
        Log.e("destory","解除注册");
    }



    //定义广播接收
    private BroadcastReceiver mReceiver=new BroadcastReceiver(){



        @SuppressLint("MissingPermission")
        @Override
        public void onReceive(Context context, Intent intent) {

            String action=intent.getAction();


            if(action.equals(BluetoothDevice.ACTION_FOUND))
            {
                BluetoothDevice device=intent.getParcelableExtra(BluetoothDevice.EXTRA_DEVICE);
                String name=intent.getStringExtra(BluetoothDevice.EXTRA_NAME);
                if(name==null)
                {
                    name="unknown device";
                }
                Log.e("Device name is "+name, action);
                name+="@";


                String deviceAddress =name+device.getAddress();
                if (!deviceArrayList.contains(deviceAddress))
                {
                    deviceArrayList.add(deviceAddress);
                    deviceArrayAdapter.notifyDataSetChanged();
                }



                if(device.getBondState()==BluetoothDevice.BOND_BONDED)
                {    //显示已配对设备
                   // text.append("\n"+device.getName()+"==>"+device.getAddress()+"\n");
                }else if(device.getBondState()!=BluetoothDevice.BOND_BONDED)
                {
                    //text3.append("\n"+device.getName()+"==>"+device.getAddress()+"\n");
                }

            }else if(action.equals(BluetoothAdapter.ACTION_DISCOVERY_FINISHED))
            {
                mText_State_info.setText("搜索结束...");
            }

        }


    };

    private ScanCallback mScanCallback=new ScanCallback()
    {
        @Override
        @SuppressLint("MissingPermission")
        public void onScanResult(int callbackType, ScanResult result)
        {
            super.onScanResult(callbackType, result);

            BluetoothDevice device_got=result.getDevice();
            String deviceAddress =device_got.getName()+device_got.getAddress();
            if (!deviceArrayList.contains(deviceAddress))
            {
                deviceArrayList.add(deviceAddress);
                deviceArrayAdapter.notifyDataSetChanged();
            }
            //Toast.makeText(getApplicationContext(), "greate we got something!!", Toast.LENGTH_SHORT).show();
            // 在此处理扫描结果，例如获取设备信息
            // result.getDevice().getAddress() 获取设备地址


        }

        @Override
        public void onScanFailed(int errorCode)
        {
            super.onScanFailed(errorCode);
            Toast.makeText(getApplicationContext(), "BLE Scan Started Failed! permissions denied", Toast.LENGTH_SHORT).show();
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


}
