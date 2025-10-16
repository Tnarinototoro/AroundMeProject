package com.aroundmelib;
import android.annotation.SuppressLint;
import android.app.Activity;
        import android.bluetooth.BluetoothAdapter;
        import android.bluetooth.BluetoothDevice;
import android.bluetooth.BluetoothManager;
import android.bluetooth.le.BluetoothLeScanner;
        import android.bluetooth.le.ScanCallback;
        import android.bluetooth.le.ScanFilter;
        import android.bluetooth.le.ScanRecord;
        import android.bluetooth.le.ScanResult;
        import android.bluetooth.le.ScanSettings;
import android.content.BroadcastReceiver;
import android.content.Context;
import android.content.Intent;
import android.content.IntentFilter;
import android.content.pm.PackageManager;
        import android.os.ParcelUuid;
import android.util.SparseArray;

        import java.util.ArrayList;
import java.util.HashMap;
import java.util.HashSet;
        import java.util.List;
import java.util.Map;

public class DIY_CommuManager
{

    public static native void onDeviceFound(long callbackAddr, DIY_CommuDevice device);
    public static native void onAdvertisement(long callbackAddr, String deviceName, byte[] bytes);
    public static native void onScanError(String errorMessage);

    private BluetoothAdapter mBluetoothAdapter = null;
    private Activity mActivity = null;
    private Context mContext=null;
    private long mCallbackAddr = 0;
    private boolean mScanningForAdvertisements = false;

    private HashSet<String> mFoundDevices_old = new HashSet<String>();

    //temp to make it public
    public Map<String, DIY_CommuDevice> mFoundDevices = new HashMap<>();
    private DIY_CommuManagerReportSchema mReportSchema=null;

    private int mDeviceCountEncountered_WithName = 0;

    private int mDeviceCountEncountered_WithGarbageName = 0;
    public void setCommuManagerReportSchema(DIY_CommuManagerReportSchema inSchema) {
        mReportSchema = inSchema;
    }
    public int GetDeviceCountEncountered_WithName()
    {
        return mDeviceCountEncountered_WithName;
    }
    public void AddDeltaToDeviceCountEncountered_WithName(int delta)
    {
        mDeviceCountEncountered_WithName+=delta;
    }
    public void SetDeviceCountEncountered_WithName(int inCount)
    {
        mDeviceCountEncountered_WithName = inCount;
    }
    public int GetDeviceCountEncountered_WithGarbageName()
    {
        return mDeviceCountEncountered_WithGarbageName;
    }
    public void AddDeltaToDeviceCountEncountered_WithGarbageName(int delta)
    {
        mDeviceCountEncountered_WithGarbageName+=delta;
    }
    public void SetDeviceCountEncountered_WithGarbageName(int inCount)
    {
        mDeviceCountEncountered_WithGarbageName = inCount;
    }
    
    @SuppressLint("MissingPermission")
    public void stopClassicBluetoothDiscovery()
    {
        if (mBluetoothAdapter.isDiscovering())
        {
            mBluetoothAdapter.cancelDiscovery();
        }

    }

    @SuppressLint("MissingPermission")
    public void startClassicBluetoothDiscovery()
    {
        if (!mBluetoothAdapter.isDiscovering())
        {
            mBluetoothAdapter.startDiscovery();

            if(mReportSchema!=null)
            {
                mReportSchema.onLogReport("经典蓝牙 搜索 开始~");
            }






        }

    }
    public void onDestroy()
    {
        mContext.unregisterReceiver(mClassicBluetoothReceiver);
    }
    private final BroadcastReceiver mClassicBluetoothReceiver = new BroadcastReceiver()
    {
        public void onReceive(Context context, Intent intent)
        {
            String action = intent.getAction();
            if (BluetoothDevice.ACTION_FOUND.equals(action))
            {
                BluetoothDevice device = intent.getParcelableExtra(BluetoothDevice.EXTRA_DEVICE);
                @SuppressLint("MissingPermission")
                String deviceName = device.getName();
                String deviceAddress = device.getAddress();


                //if good  name exists
                if (deviceName != null && !deviceName.equals("null"))
                {
                    if (!mFoundDevices.containsKey(deviceAddress))
                    {
                        short rssi = intent.getShortExtra(BluetoothDevice.EXTRA_RSSI, Short.MIN_VALUE);
                        double estimatedDistance = DIY_CommuUtils.calculateDistance(rssi);
                        DIY_CommuDevice player_info = new DIY_CommuDevice(mActivity,device);
                        player_info.mDeviceGatt = null;
                        player_info.mDeviceName = deviceName;
                        player_info.mRegisteredPlayerDeviceMacAddr = deviceAddress;
                        player_info.misRandomDeivce = true;
                        player_info.mDistance = estimatedDistance;
                        mFoundDevices.put(deviceAddress, player_info);




                        //if ui exists!
                        if(mReportSchema!=null)
                        {
                            if (mReportSchema.GetRandom_deviceDisplayArrayList() != null)
                            {
                                player_info.mIndex = mReportSchema.GetRandom_deviceDisplayArrayList().size();
                                mReportSchema.GetRandom_deviceDisplayArrayList().add(player_info.GenerateDisplayString());
                                
                            }


                        }

                        mDeviceCountEncountered_WithName++;

                        // OnNewMacAddressEncountered();

                        //if schema exists
                        if(mReportSchema!=null)
                        {
                            mReportSchema.OnCallBack_NewRandomDeviceEncountered_WithName(player_info.GenerateDisplayString());
                        }


                    }
                    else
                    {
                        DIY_CommuDevice cur_player_info = mFoundDevices.get(deviceAddress);

                        if (null != cur_player_info && cur_player_info.misRandomDeivce)
                        {
                            short rssi = intent.getShortExtra(BluetoothDevice.EXTRA_RSSI, Short.MIN_VALUE);
                            double estimatedDistance_new = DIY_CommuUtils.calculateDistance(rssi);
                            cur_player_info.mDistance = estimatedDistance_new;

                            //if ui exists
                            if(mReportSchema!=null&&mReportSchema.GetRandom_deviceDisplayArrayList()!=null)
                            {
                                mReportSchema.GetRandom_deviceDisplayArrayList().set(cur_player_info.mIndex,cur_player_info.GenerateDisplayString());
                                mReportSchema.OnCallBack_OldRandomDeviceEncountered_WithName(cur_player_info.GenerateDisplayString());

                            }

                        }
                    }
                }
                else
                {

                    mDeviceCountEncountered_WithGarbageName++;

                    if(mReportSchema!=null)
                    {
                        mReportSchema.OnCallBack_NewRandomDeviceEncountered_GarbageName();
                    }

                }

            }
            else if (action.equals(BluetoothAdapter.ACTION_DISCOVERY_FINISHED))
            {
                if(mReportSchema!=null)
                {
                    mReportSchema.onLogReport("经典蓝牙 搜索结束");
                }
            }

        }
    };





    private ScanCallback mScanCallback = new ScanCallback() {
        @Override
        public void onScanResult(int callbackType, final ScanResult result) {
            if (mScanningForAdvertisements) {
                ScanRecord record = result.getScanRecord();
                if (record != null) {
                    SparseArray<byte[]> manufacturerData = record.getManufacturerSpecificData();
                    for (int i = 0; i < manufacturerData.size(); i++) {
                        DIY_CommuUtils.log("Record found: " + record);
                        onAdvertisement(mCallbackAddr, record.getDeviceName(), manufacturerData.valueAt(i));
                    }
                }
            }
            else {
                BluetoothDevice device = result.getDevice();
                if (!mFoundDevices_old.contains(device.getAddress())) {
                    mFoundDevices_old.add(device.getAddress());
                    DIY_CommuUtils.log(String.format("Device found: %s, name: %s, alias: %s", device, device.getName(), device.getAlias()));
                    onDeviceFound(mCallbackAddr, new DIY_CommuDevice(mActivity, device));
                }
            }
        }
        @Override
        public void onScanFailed(int errorCode) {
            onScanError("Failed to start scan: " + errorCode);
        }
    };

    public DIY_CommuManager(Activity activity, long callbackAddr) {
        mActivity = activity;
        mCallbackAddr = callbackAddr;
    }
    public DIY_CommuManager(Activity activity, Context inContext) {
        mActivity = activity;

        mContext=inContext;


        BluetoothManager BluetoothManager = (BluetoothManager) mContext.getSystemService(Context.BLUETOOTH_SERVICE);
        mBluetoothAdapter = BluetoothManager.getAdapter();

        // classic bluetooth device finder intent setting
        {
            IntentFilter filter = new IntentFilter();
            filter.addAction(BluetoothDevice.ACTION_FOUND);
            filter.addAction(BluetoothAdapter.ACTION_DISCOVERY_FINISHED);
            mContext.registerReceiver(mClassicBluetoothReceiver, filter);
        }
    }
    public boolean isBleSupported() {
        return mActivity.getPackageManager().hasSystemFeature(PackageManager.FEATURE_BLUETOOTH_LE);
    }

    public boolean isBluetoothEnabled() {
        return mBluetoothAdapter != null && mBluetoothAdapter.isEnabled();
    }

    public void setBluetoothState(boolean isEnabled) {
        if (mBluetoothAdapter == null) return;
        if (isEnabled) {
            mBluetoothAdapter.enable();
        } else {
            mBluetoothAdapter.disable();
        }
    }


    public void startScanForDevices(String[] uuids) {
        if (mBluetoothAdapter == null) return;

        mScanningForAdvertisements = false;
        BluetoothLeScanner scanner =  mBluetoothAdapter.getBluetoothLeScanner();
        try {
            if (uuids.length == 0) {
                scanner.startScan(mScanCallback);
            } else {
                List<ScanFilter> filters = new ArrayList<>();
                for (String uuid : uuids) {
                    filters.add(new ScanFilter.Builder().setServiceUuid(ParcelUuid.fromString(uuid)).build());
                }

                ScanSettings settings = new ScanSettings.Builder().setScanMode(ScanSettings.SCAN_MODE_LOW_LATENCY).build();
                mFoundDevices.clear();
                scanner.startScan(filters, settings, mScanCallback);
            }
        }
        catch (Exception e) {
            onScanError("Failed to start scan: " +  e.toString());
        }
    }

    public void startScanForAdvertisements(String[] nameFilters) {
        if (mBluetoothAdapter == null) return;
        mScanningForAdvertisements = true;
        BluetoothLeScanner scanner =  mBluetoothAdapter.getBluetoothLeScanner();
        try {
            if (nameFilters.length == 0) {
                scanner.startScan(mScanCallback);
            } else {
                List<ScanFilter> filters = new ArrayList<>();
                for (String nameFilter : nameFilters) {
                    filters.add(new ScanFilter.Builder().setDeviceName(nameFilter).build());
                }

                ScanSettings settings = new ScanSettings.Builder().setScanMode(ScanSettings.SCAN_MODE_LOW_LATENCY).build();
                scanner.startScan(filters, settings, mScanCallback);
            }
        }
        catch (Exception e) {
            onScanError("Failed to start scan: " +  e.toString());
        }
    }

    public void stopScan() {
        if (mBluetoothAdapter == null) return;

        BluetoothLeScanner scanner =  mBluetoothAdapter.getBluetoothLeScanner();
        scanner.stopScan(mScanCallback);
    }

}
