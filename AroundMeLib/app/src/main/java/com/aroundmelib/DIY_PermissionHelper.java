package com.aroundmelib;

import android.Manifest;
import android.app.Activity;
import android.app.AlertDialog;
import android.content.Intent;
import android.content.pm.PackageManager;
import android.net.Uri;
import android.os.Build;
import android.provider.Settings;
import android.util.Log;

import androidx.core.app.ActivityCompat;
import androidx.core.content.ContextCompat;

import java.util.ArrayList;
import java.util.List;

public class DIY_PermissionHelper {

    private static final String TAG = "DIY_PermissionHelper";
    public static final int REQUEST_CODE_PERMISSIONS = 1001;
    // 删除 onBluetoothEnabledCallback，不再需要
    private static androidx.activity.result.ActivityResultLauncher<android.content.Intent> enableBluetoothLauncher = null;


    // 新增：在 Activity.onCreate 里调用一次
    public static void initializeBluetoothLauncher(final android.app.Activity activity) {
        if (activity == null) return;

        enableBluetoothLauncher = ((androidx.activity.ComponentActivity) activity)
                .registerForActivityResult(
                        new androidx.activity.result.contract.ActivityResultContracts.StartActivityForResult(),
                        result -> {
                            if (result.getResultCode() == android.app.Activity.RESULT_OK) {
                                DIY_CommuUtils.PushToast(activity, "✅ 蓝牙已开启");
                            } else {
                                DIY_CommuUtils.PushToast(activity, "❌ 必须开启蓝牙才能使用 AroundMe");
                                showEnableBluetoothDialog(activity);
                            }
                        }
                );
    }

    public static boolean ensureBluetoothEnabled(final android.app.Activity activity) {
        android.bluetooth.BluetoothAdapter adapter = android.bluetooth.BluetoothAdapter.getDefaultAdapter();

        if (adapter == null) {
            DIY_CommuUtils.PushToast(activity, "此设备不支持蓝牙功能");
            return false;
        }

        if (!adapter.isEnabled()) {
            android.content.Intent enableBtIntent = new android.content.Intent(android.bluetooth.BluetoothAdapter.ACTION_REQUEST_ENABLE);
            if (enableBluetoothLauncher != null) {
                enableBluetoothLauncher.launch(enableBtIntent);
            } else {
                // 兼容旧式 GameActivity
                activity.startActivityForResult(enableBtIntent, DIY_CommuUtils.REQUEST_ENABLE_BT);
            }
            return false;
        }

        // 蓝牙已经是开的
        return true;
    }

    private static void showEnableBluetoothDialog(final android.app.Activity activity) {
        new android.app.AlertDialog.Builder(activity)
                .setTitle("蓝牙未开启")
                .setMessage("AroundMe 需要蓝牙以搜索附近设备，请开启蓝牙后重试。")
                .setPositiveButton("开启蓝牙", (d, w) -> {
                    android.content.Intent enableBtIntent =
                            new android.content.Intent(android.bluetooth.BluetoothAdapter.ACTION_REQUEST_ENABLE);
                    if (enableBluetoothLauncher != null) enableBluetoothLauncher.launch(enableBtIntent);
                    else activity.startActivity(enableBtIntent);
                })
                .setNegativeButton("取消", (d, w) -> d.dismiss())
                .show();
    }

    /** 根据当前系统版本，动态返回需要的权限清单 */
    public static String[] getRequiredPermissions() {
        List<String> perms = new ArrayList<>();

        // Android 13+ 通知需要运行时权限
        perms.add(Manifest.permission.POST_NOTIFICATIONS);
        perms.add(Manifest.permission.BLUETOOTH_SCAN);
        perms.add(Manifest.permission.BLUETOOTH_CONNECT);
        perms.add(Manifest.permission.BLUETOOTH_ADVERTISE);
        perms.add(Manifest.permission.ACCESS_FINE_LOCATION);
        return perms.toArray(new String[0]);
    }

    /** 首次/再次检查并请求权限
     *  返回 true 表示已经全部具备；false 表示发起了请求或仍有缺失
     */
    public static boolean ensureAllPermissions(Activity activity) {
        if (activity == null) return false;
        if (Build.VERSION.SDK_INT < Build.VERSION_CODES.M) return true;

        String[] required = getRequiredPermissions();
        List<String> missing = new ArrayList<>();
        for (String p : required) {
            if (ContextCompat.checkSelfPermission(activity, p) != PackageManager.PERMISSION_GRANTED) {
                missing.add(p);
            }
        }
        if (missing.isEmpty()) {
            Log.d(TAG, "✅ 所有权限已具备");
            return true;
        }

        // ⚠️ 这里不要用 shouldShow.. 来判断永久拒绝（第一次也是 false）
        // 直接请求即可；是否永久拒绝放到 onRequestPermissionsResult 里判断
        ActivityCompat.requestPermissions(
                activity,
                missing.toArray(new String[0]),
                REQUEST_CODE_PERMISSIONS
        );
        return false;
    }

    /** 在 Activity.onRequestPermissionsResult 里调用 */
    public static boolean handlePermissionsResult(Activity activity,
                                                  int requestCode,
                                                  String[] permissions,
                                                  int[] grantResults) {
        if (requestCode != REQUEST_CODE_PERMISSIONS) return false;

        List<String> denied = new ArrayList<>();
        List<String> deniedAndDontAsk = new ArrayList<>();

        for (int i = 0; i < permissions.length; i++) {
            boolean granted = grantResults.length > i
                    && grantResults[i] == PackageManager.PERMISSION_GRANTED;
            if (!granted) {
                denied.add(permissions[i]);
                // 只有在“已经请求过一次”后的回调中，判断不再询问才有意义
                if (!ActivityCompat.shouldShowRequestPermissionRationale(activity, permissions[i])) {
                    deniedAndDontAsk.add(permissions[i]);
                }
            }
        }

        if (denied.isEmpty()) {
            Log.d(TAG, "✅ 用户授予了所有权限");
            return true;
        }

        // 存在永久拒绝 -> 引导去设置
        if (!deniedAndDontAsk.isEmpty()) {
            DIY_CommuUtils.PushToast(activity, "部分权限被永久拒绝，请到设置中开启");
            showGoToSettingsDialog(activity);
            return false;
        }

        // 普通拒绝 -> 给个提示，用户可再次点击“开始”按钮触发 ensureAllPermissions 再请求
        DIY_CommuUtils.PushToast(activity, "请授予必要权限以使用 AroundMe");
        return false;
    }

    private static void showGoToSettingsDialog(Activity activity) {
        new AlertDialog.Builder(activity)
                .setTitle("需要权限")
                .setMessage("请前往系统设置中手动开启蓝牙/定位/通知权限，否则功能无法使用。")
                .setPositiveButton("去设置", (d, w) -> openAppSettings(activity))
                .setNegativeButton("取消", (d, w) -> d.dismiss())
                .setCancelable(true)
                .show();
    }

    private static void openAppSettings(Activity activity) {
        try {
            Intent intent = new Intent(Settings.ACTION_APPLICATION_DETAILS_SETTINGS);
            intent.setData(Uri.fromParts("package", activity.getPackageName(), null));
            activity.startActivity(intent);
        } catch (Exception e) {
            Log.e(TAG, "无法打开设置页: " + e.getMessage());
        }
    }
}
