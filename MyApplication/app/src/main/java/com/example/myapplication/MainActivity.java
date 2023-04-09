package com.example.myapplication;


import android.Manifest;
import android.bluetooth.BluetoothAdapter;
import android.bluetooth.BluetoothDevice;
import android.bluetooth.BluetoothManager;
import android.bluetooth.le.BluetoothLeScanner;
import android.bluetooth.le.ScanCallback;
import android.bluetooth.le.ScanResult;
import android.content.BroadcastReceiver;
import android.content.Context;
import android.content.Intent;
import android.content.IntentFilter;
import android.content.pm.PackageManager;
import android.os.Build;
import android.os.Bundle;
import android.os.Handler;
import android.util.Log;
import android.view.View;
import android.widget.ArrayAdapter;
import android.widget.Button;
import android.widget.ListView;
import android.widget.TextView;
import android.widget.Toast;

import androidx.appcompat.app.AppCompatActivity;
import androidx.core.app.ActivityCompat;
import androidx.core.content.ContextCompat;

import java.lang.reflect.Array;
import java.util.ArrayList;
import java.util.List;


public class MainActivity extends AppCompatActivity {

    //定义
    private static final int PERMISSION_REQUEST_FINE_LOCATION = 1;
    private static final int PERMISSION_REQUEST_BLUETOOTH = 2;
    private BluetoothAdapter mBluetoothAdapter;
    private TextView text2;
    private Button botton;
    private ListView listView;
    private ArrayAdapter<String> deviceArrayAdapter;
    private ArrayList<String> deviceArrayList;
    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        listView = findViewById(R.id.device_list);
        deviceArrayList = new ArrayList<>();
        deviceArrayAdapter = new ArrayAdapter<>(this, android.R.layout.simple_list_item_1, deviceArrayList);
        listView.setAdapter(deviceArrayAdapter);


        text2= (TextView) this.findViewById(R.id.textView2); //状态信息
        botton=(Button) this.findViewById(R.id.button_scan);

        checkBluetoothPermissions();
        checkLocationPermission();

        mBluetoothAdapter=BluetoothAdapter.getDefaultAdapter();

        IntentFilter filter=new IntentFilter(BluetoothDevice.ACTION_FOUND);
        registerReceiver(mReceiver,filter);
        IntentFilter filter2=new IntentFilter(BluetoothAdapter.ACTION_DISCOVERY_FINISHED);
        registerReceiver(mReceiver,filter2);

        botton.setOnClickListener(new View.OnClickListener(){

            @Override
            public void onClick(View arg0) {

                if(!mBluetoothAdapter.isEnabled())
                {
                    mBluetoothAdapter.enable();

                }

                mBluetoothAdapter.startDiscovery();
                text2.setText("正在搜索...");

            }


        });


    }
    private void checkLocationPermission()
    {
        if (Build.VERSION.SDK_INT >= Build.VERSION_CODES.M)
        {
            if (ContextCompat.checkSelfPermission(this, Manifest.permission.ACCESS_FINE_LOCATION)
                    != PackageManager.PERMISSION_GRANTED) {
                ActivityCompat.requestPermissions(this,
                        new String[]{Manifest.permission.ACCESS_FINE_LOCATION},
                        PERMISSION_REQUEST_FINE_LOCATION);
            }
        }
    }
    private void checkBluetoothPermissions() {
        if (Build.VERSION.SDK_INT >= Build.VERSION_CODES.S) {
            if (ContextCompat.checkSelfPermission(this, Manifest.permission.BLUETOOTH_SCAN)
                    != PackageManager.PERMISSION_GRANTED
                    || ContextCompat.checkSelfPermission(this, Manifest.permission.BLUETOOTH_CONNECT)
                    != PackageManager.PERMISSION_GRANTED) {
                ActivityCompat.requestPermissions(this, new String[]{
                                Manifest.permission.BLUETOOTH_SCAN,
                                Manifest.permission.BLUETOOTH_CONNECT},
                        PERMISSION_REQUEST_BLUETOOTH);
            }
        }
    }
    public void onRequestPermissionsResult(int requestCode, String[] permissions, int[] grantResults)
    {
        if (requestCode == PERMISSION_REQUEST_BLUETOOTH) {
            if (grantResults.length > 1
                    && grantResults[0] == PackageManager.PERMISSION_GRANTED
                    && grantResults[1] == PackageManager.PERMISSION_GRANTED) {
                Toast.makeText(this, "Bluetooth permissions granted", Toast.LENGTH_SHORT).show();
            } else {
                Toast.makeText(this, "Bluetooth permissions denied", Toast.LENGTH_SHORT).show();
                finish();
            }
        }
        else if (requestCode ==PERMISSION_REQUEST_FINE_LOCATION)
        {
            if (grantResults[0] == PackageManager.PERMISSION_GRANTED) {
                Toast.makeText(this, "Location permission granted", Toast.LENGTH_SHORT).show();
            } else {
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



        @Override
        public void onReceive(Context context, Intent intent) {

            String action=intent.getAction();

            Log.e("meToo", action);
            if(action.equals(BluetoothDevice.ACTION_FOUND))
            {
                BluetoothDevice device=intent.getParcelableExtra(BluetoothDevice.EXTRA_DEVICE);
                String name=intent.getStringExtra(BluetoothDevice.EXTRA_NAME);
                if(name==null)
                {
                    name="unknown device";
                }
                Log.e("DEvice name is "+name, action);


                String deviceAddress =name+device.getAddress();
                if (!deviceArrayList.contains(deviceAddress)) {
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

            }else if(action.equals(BluetoothAdapter.ACTION_DISCOVERY_FINISHED)){

                text2.setText("搜索完成...");


            }

        }


    };

}
