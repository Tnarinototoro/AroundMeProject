package com.aroundmelib;

import android.annotation.SuppressLint;
import android.app.Activity;
import android.content.BroadcastReceiver;
import android.content.ContentUris;
import android.content.Context;
import android.content.Intent;
import android.content.IntentFilter;
import android.database.Cursor;
import android.net.NetworkInfo;
import android.net.Uri;
import android.net.wifi.WpsInfo;
import android.net.wifi.p2p.WifiP2pConfig;
import android.net.wifi.p2p.WifiP2pDevice;
import android.net.wifi.p2p.WifiP2pDeviceList;
import android.net.wifi.p2p.WifiP2pManager;
import android.os.Build;
import android.os.Environment;
import android.provider.DocumentsContract;
import android.provider.MediaStore;
import android.util.Log;

import java.io.BufferedOutputStream;
import java.io.BufferedReader;
import java.io.File;
import java.io.FileInputStream;
import java.io.FileOutputStream;
import java.io.InputStream;
import java.io.InputStreamReader;
import java.io.OutputStream;
import java.io.PrintWriter;
import java.net.InetSocketAddress;
import java.net.ServerSocket;
import java.net.Socket;
import java.util.ArrayList;
import java.util.HashMap;


public class DIY_PassByManager
{
    private static final String TAG = "DIY_PassByManager";
    private boolean isConnected = false;
    private String connectedDeviceMac = null;
    // === 长连接通信用 ===
    private Socket connSocket = null;          // 当前使用的长连接（无论 GO/Client）
    private PrintWriter connWriter = null;
    private BufferedReader connReader = null;
    private Thread connReadThread = null;
    private String lastSelectedImagePath = null;

    public String getLastSelectedImagePath()
    {
        return lastSelectedImagePath;
    }
    private boolean isGroupOwner = false;      // 当前角色：GO = true, Client = false


    public boolean isConnected() { return isConnected; }
    public String getConnectedDeviceMac() { return connectedDeviceMac; }
    public void setConnectedDeviceMac(String mac) { connectedDeviceMac = mac; }
    public void setConnected(boolean v) { isConnected = v; }
    private DIY_PassByManagerReportSchema mReportSchema=null;

    public void setPassByManagerReportSchema(DIY_PassByManagerReportSchema inSchema)
    {
        mReportSchema = inSchema;
    }
    WifiP2pManager manager;
    WifiP2pManager.Channel channel;
    private void logSafe(String msg, DIY_CommuUtils.LogLevel level)
    {
        if (activity != null)
        {
            activity.runOnUiThread(() ->
            {
                if (mReportSchema != null)
                {
                    mReportSchema.onWIFILogReport(msg, level);
                }
            });
        } else
        {
            // fallback
            if (mReportSchema != null)
            {
                mReportSchema.onWIFILogReport(msg, level);
            }
        }
    }
    // JNI 回调（在 C++ 侧实现）
    private native void nativeOnImageSelected(String path);
    private Activity activity;
    private Uri Chosen_Uri;
    private ArrayList<DIY_CommuUtils.DIY_WfdPeer> wfdPeerListCache;

    private final HashMap<String, DIY_CommuUtils.DIY_WfdPeer> wfdPeerMap = new HashMap<>();
    public DIY_PassByManager(Activity activity)
    {

        this.activity = activity;
        manager = (WifiP2pManager) activity.getSystemService(Context.WIFI_P2P_SERVICE);
        channel = manager.initialize(activity, activity.getMainLooper(), null);
    }
    public WifiP2pManager GetWifiP2pManager()
    {
        return manager;
    }

    public WifiP2pManager.Channel GetChannel()
    {
        return channel;
    }

    public Uri GetChosen_Uri()
    {
        return Chosen_Uri;
    }


    public DIY_CommuUtils.DIY_WfdPeer getPeerByIndex(int idx)
    {
        if (idx < 0 || idx >= wfdPeerListCache.size()) return null;
        return wfdPeerListCache.get(idx);
    }
    // 从 Service 或 Activity 被调用以打开图片选择器
    public void openImagePicker()
    {

        if (activity == null)
        {
            logSafe("DIY_PassByManager: openImagePicker: activity is null", DIY_CommuUtils.LogLevel.ERROR);


            return;
        }
        Intent intent = new Intent(Intent.ACTION_GET_CONTENT);
        intent.setType("image/*");
        activity.startActivityForResult(Intent.createChooser(intent, "Select Image"), DIY_CommuUtils.REQUEST_OPEN_PIC);
    }
    @SuppressLint("MissingPermission")
    public void disconnect() {

        // ① 取消正在进行的连接（避免卡 invited）
        manager.cancelConnect(channel, new WifiP2pManager.ActionListener() {
            @Override
            public void onSuccess()
            {
                logSafe("DIY_PassByManager: cancelConnect OK", DIY_CommuUtils.LogLevel.WARNING);
                // ② 再 removeGroup
                manager.removeGroup(channel, new WifiP2pManager.ActionListener()
                {
                    @Override
                    public void onSuccess()
                    {
                        isConnected = false;
                        connectedDeviceMac = null;


                        logSafe("Disconnected!", DIY_CommuUtils.LogLevel.SUCCESS);

                    }

                    @Override
                    public void onFailure(int reason)
                    {

                        logSafe("removeGroup failed: " + reason, DIY_CommuUtils.LogLevel.ERROR);

                    }
                });
            }

            @Override
            public void onFailure(int reason)
            {
                // 即便 cancel 失败，也要尝试 removeGroup
                manager.removeGroup(channel, new WifiP2pManager.ActionListener()
                {
                    @Override
                    public void onSuccess() {
                        isConnected = false;
                        connectedDeviceMac = null;

                        logSafe("Disconnected (remove only)", DIY_CommuUtils.LogLevel.SUCCESS);

                    }

                    @Override
                    public void onFailure(int reason)
                    {
                        logSafe("Disconnect failed: " + reason, DIY_CommuUtils.LogLevel.ERROR);

                    }
                });
            }
        });
    }


    @SuppressLint("MissingPermission")
    public void connectToPeer(String mac)
    {
        // ✔ 记录当前正在连接的对象
        connectedDeviceMac = mac;
        isConnected = false;   // 防止旧状态残留


        WifiP2pConfig config = new WifiP2pConfig();
        config.deviceAddress = mac;
        config.wps.setup = WpsInfo.PBC;

        manager.connect(channel, config, new WifiP2pManager.ActionListener() {
            @Override
            public void onSuccess()
            {

                logSafe("DIY_PassByManager: connectToPeer success: " + mac, DIY_CommuUtils.LogLevel.WARNING);


                logSafe("Connect success, waiting group formation...", DIY_CommuUtils.LogLevel.WARNING);

            }

            @Override
            public void onFailure(int reason)
            {

                logSafe("connectToPeer FAILED: " + reason,DIY_CommuUtils.LogLevel.ERROR);


                logSafe("Connect failed: " + reason, DIY_CommuUtils.LogLevel.WARNING);

            }
        });

    }


    @SuppressLint("MissingPermission")
    public void resetWifiDirectState()
    {


        logSafe("==== RESET WiFi Direct ====", DIY_CommuUtils.LogLevel.WARNING);


        // 1. 取消正在进行的连接
        manager.cancelConnect(channel, new WifiP2pManager.ActionListener()
        {
            @Override
            public void onSuccess()
            {

                logSafe("DIY_PassByManager: cancelConnect OK", DIY_CommuUtils.LogLevel.WARNING);


                // 2. 移除 group
                manager.removeGroup(channel, new WifiP2pManager.ActionListener()
                {
                    @Override
                    public void onSuccess()
                    {

                        logSafe("removeGroup OK", DIY_CommuUtils.LogLevel.WARNING);


                        // 3. 停止 peer 扫描
                        stopDiscoveryAndReset();
                    }

                    @Override
                    public void onFailure(int reason)
                    {

                        logSafe("removeGroup FAILED: " + reason, DIY_CommuUtils.LogLevel.ERROR);


                        stopDiscoveryAndReset();
                    }
                });
            }

            @Override
            public void onFailure(int reason)
            {
                logSafe("DIY_PassByManager: cancelConnect FAILED: " + reason, DIY_CommuUtils.LogLevel.ERROR);


                // 不管 cancel 成功与否，都继续 reset
                stopDiscoveryAndReset();
            }
        });
    }

    @SuppressLint("MissingPermission")
    private void stopDiscoveryAndReset() {

        manager.stopPeerDiscovery(channel, new WifiP2pManager.ActionListener()
        {
            @Override
            public void onSuccess()
            {
                logSafe("stopPeerDiscovery OK", DIY_CommuUtils.LogLevel.WARNING);

                finishReset();
            }

            @Override
            public void onFailure(int reason)
            {


                logSafe("stopPeerDiscovery FAILED: " + reason, DIY_CommuUtils.LogLevel.ERROR);

                finishReset();
            }
        });
    }

    private void finishReset() {

        // 清空状态
        isConnected = false;
        connectedDeviceMac = null;

        // 清空缓存
        wfdPeerMap.clear();
        if (wfdPeerListCache != null) {
            wfdPeerListCache.clear();
        }

        // 通知 UI 更新
        if (mReportSchema != null)
        {
            logSafe("WiFi Direct State RESET done.", DIY_CommuUtils.LogLevel.SUCCESS);
            mReportSchema.onReportPeersInfo(null, new ArrayList<>());
        }
    }

    @SuppressLint("MissingPermission")
    public void StartScanningPeers()
    {
        manager.discoverPeers(channel, new WifiP2pManager.ActionListener()
        {

            @Override
            public void onSuccess()
            {


                logSafe("DiscoverPeers started.", DIY_CommuUtils.LogLevel.WARNING);

            }

            @Override
            public void onFailure(int reason)
            {

                logSafe("DiscoverPeers failed: " + reason, DIY_CommuUtils.LogLevel.ERROR);

            }
        });
    }
    WifiP2pManager.PeerListListener peerListListener =
            new WifiP2pManager.PeerListListener()
            {



                @Override
                public void onPeersAvailable(WifiP2pDeviceList peers)
                {

                    long now = System.currentTimeMillis();

                    for (WifiP2pDevice dev : peers.getDeviceList())
                    {

                        DIY_CommuUtils.DIY_WfdPeer p = wfdPeerMap.get(dev.deviceAddress);
                        if (p == null)
                        {
                            p = new DIY_CommuUtils.DIY_WfdPeer(dev);
                            wfdPeerMap.put(dev.deviceAddress, p);
                        }
                        else
                        {
                            p.update(dev);
                        }

                        p.lastSeenTime = now;
                    }

                    // 清理 30 秒没有刷新过的设备
                    if (Build.VERSION.SDK_INT >= Build.VERSION_CODES.N)
                    {
                        wfdPeerMap.values().removeIf(p -> now - p.lastSeenTime > 30000);
                    }

                    // 关键：传给 UI 层！
                    if (mReportSchema != null)
                    {
                        wfdPeerListCache=new ArrayList<>(wfdPeerMap.values());
                        mReportSchema.onReportPeersInfo(
                                peers,
                                wfdPeerListCache
                        );
                    }
                }

            };
    BroadcastReceiver receiver = new BroadcastReceiver()
    {
        @SuppressLint("MissingPermission")
        @Override
        public void onReceive(Context context, Intent intent)
        {
            String action = intent.getAction();

            if (WifiP2pManager.WIFI_P2P_PEERS_CHANGED_ACTION.equals(action))
            {
                manager.requestPeers(channel, peerListListener);




            }

            if (WifiP2pManager.WIFI_P2P_STATE_CHANGED_ACTION.equals(action))
            {
                int state = intent.getIntExtra(WifiP2pManager.EXTRA_WIFI_STATE, -1);
                if (state == WifiP2pManager.WIFI_P2P_STATE_ENABLED)
                {


                    logSafe("WiFi Direct ENABLED", DIY_CommuUtils.LogLevel.WARNING);
                }
                else
                {


                    logSafe("WiFi Direct DISABLED", DIY_CommuUtils.LogLevel.WARNING);
                }
            }
            else if (WifiP2pManager.WIFI_P2P_THIS_DEVICE_CHANGED_ACTION.equals(action))
            {
                WifiP2pDevice device = intent.getParcelableExtra(WifiP2pManager.EXTRA_WIFI_P2P_DEVICE);

                logSafe("This device status changed: " + device.deviceName, DIY_CommuUtils.LogLevel.WARNING);

            }
            else if (WifiP2pManager.WIFI_P2P_CONNECTION_CHANGED_ACTION.equals(action))
            {
                NetworkInfo networkInfo =
                        intent.getParcelableExtra(WifiP2pManager.EXTRA_NETWORK_INFO);

                if (networkInfo != null && networkInfo.isConnected())
                {
                    isConnected = true;
                    manager.requestConnectionInfo(channel, info ->
                    {
                        isConnected = true;
                        boolean isGO = info.isGroupOwner;
                        String groupOwnerIp = info.groupOwnerAddress.getHostAddress();


                        logSafe("Connected! isGO=" + isGO + " GO_IP=" + groupOwnerIp, DIY_CommuUtils.LogLevel.SUCCESS );

                        if (isGO)
                        {

                            logSafe("[Server] I'm GO",  DIY_CommuUtils.LogLevel.SUCCESS);
                            startServerSocket();  // GO 当 Server
                        }
                        else
                        {

                            logSafe("[Client] I'm Client", DIY_CommuUtils.LogLevel.SUCCESS);

                            startClientSocket(groupOwnerIp); // Client 主动连接 GO
                        }
                    });
                }
            }


        }
    };

    public void sendFile(String filePath, String mimeType)
    {
        if (connSocket == null || !connSocket.isConnected())
        {
            logSafe("[SendFile] Socket 未连接", DIY_CommuUtils.LogLevel.ERROR);
            return;
        }

        new Thread(() ->
        {
            try
            {
                File file = new File(filePath);
                if (!file.exists())
                {
                    logSafe("[SendFile] 文件不存在：" + filePath, DIY_CommuUtils.LogLevel.ERROR);
                    return;
                }

                long fileSize = file.length();
                String fileName = file.getName();

                logSafe("[SendFile] 开始发送: " + fileName + " size=" + fileSize,
                        DIY_CommuUtils.LogLevel.INFO);

                OutputStream os = connSocket.getOutputStream();
                BufferedOutputStream bos = new BufferedOutputStream(os);

                // 发送 header
                PrintWriter pw = new PrintWriter(bos);
                pw.println("TYPE:FILE");
                pw.println("MIME:" + mimeType);
                pw.println("FILENAME:" + fileName);
                pw.println("FILESIZE:" + fileSize);
                pw.println(); // header end
                pw.flush();

                // 发送文件内容
                FileInputStream fis = new FileInputStream(file);
                byte[] buffer = new byte[4096];
                int len;

                while ((len = fis.read(buffer)) > 0)
                {
                    bos.write(buffer, 0, len);
                }

                bos.flush();
                fis.close();

                logSafe("[SendFile] 发送结束: " + fileName, DIY_CommuUtils.LogLevel.SUCCESS);

            }
            catch (Exception e)
            {
                logSafe("[SendFile] 发送失败：" + e.getMessage(), DIY_CommuUtils.LogLevel.ERROR);
            }

        }).start();
    }

    public void sendImageFile(String imgPath)
    {
        sendFile(imgPath, "image/jpeg");
    }
    private File receiveFile(InputStream is, String filename, long fileSize) throws Exception
    {
        File outFile = new File(activity.getCacheDir(), filename);
        FileOutputStream fos = new FileOutputStream(outFile);
        BufferedOutputStream bos = new BufferedOutputStream(fos);

        long remaining = fileSize;
        byte[] buffer = new byte[4096];

        while (remaining > 0)
        {
            int bytesRead = is.read(buffer, 0, (int)Math.min(buffer.length, remaining));
            if (bytesRead == -1) break;

            bos.write(buffer, 0, bytesRead);
            remaining -= bytesRead;
        }

        bos.flush();
        bos.close();
        fos.close();

        logSafe("[RecvFile] 保存成功 path=" + outFile.getAbsolutePath(),
                DIY_CommuUtils.LogLevel.SUCCESS);

        return outFile;
    }
    private void startReceiveLoop(Socket socket)
    {
        new Thread(() ->
        {
            try
            {
                InputStream is = socket.getInputStream();
                BufferedReader reader = new BufferedReader(new InputStreamReader(is));

                String header;

                while ((header = reader.readLine()) != null)
                {
                    if (header.startsWith("TYPE:TEXT"))
                    {
                        String jsonMsg = reader.readLine();
                        logSafe("[RecvText] " + jsonMsg, DIY_CommuUtils.LogLevel.SUCCESS);

                        if (mReportSchema != null)
                            mReportSchema.onTextMessage(jsonMsg);
                    }
                    else if (header.startsWith("TYPE:FILE"))
                    {
                        String mime = reader.readLine().split(":",2)[1];
                        String filename = reader.readLine().split(":",2)[1];
                        long fileSize = Long.parseLong(reader.readLine().split(":",2)[1]);

                        reader.readLine(); // 跳空行

                        logSafe("[RecvFile] mime=" + mime + " name=" + filename + " size=" + fileSize,
                                DIY_CommuUtils.LogLevel.INFO);

                        File file = receiveFile(is, filename, fileSize);

                        if (mime.startsWith("image") && mReportSchema != null)
                            mReportSchema.onImageReceived(file);
                    }
                }
            }
            catch (Exception e)
            {
                logSafe("[RecvLoop] 错误: " + e.getMessage(), DIY_CommuUtils.LogLevel.ERROR);
            }
        }).start();
    }

    public void sendChatMessage(String msg)
    {
        if (connWriter == null)
        {
            logSafe("[SendText] 连接未建立", DIY_CommuUtils.LogLevel.ERROR);
            return;
        }

        String json = "{ \"text\": \"" + msg + "\" }\n";

        new Thread(() ->
        {
            connWriter.println("TYPE:TEXT");
            connWriter.println(json);
            connWriter.flush();

            logSafe("[SendText] → " + msg, DIY_CommuUtils.LogLevel.SUCCESS);

        }).start();
    }



    public void startServerSocket()
    {
        new Thread(() ->
        {
            try
            {
                logSafe("[Server] 启动 ServerSocket 8988", DIY_CommuUtils.LogLevel.INFO);
                ServerSocket ss = new ServerSocket(8988);
                Socket client = ss.accept();

                connSocket = client;
                connWriter = new PrintWriter(client.getOutputStream(), true);

                logSafe("[Server] Client 已连接", DIY_CommuUtils.LogLevel.SUCCESS);

                startReceiveLoop(client);

            }
            catch(Exception e)
            {
                logSafe("[Server] 错误: " + e.getMessage(), DIY_CommuUtils.LogLevel.ERROR);
            }
        }).start();
    }




    public void startClientSocket(String goIp)
    {
        new Thread(() ->
        {
            try
            {
                Socket socket = new Socket();
                socket.bind(null);
                socket.connect(new InetSocketAddress(goIp, 8988), 5000);

                connSocket = socket;
                connWriter = new PrintWriter(socket.getOutputStream(), true);

                logSafe("[Client] 连接 GO 成功", DIY_CommuUtils.LogLevel.SUCCESS);

                startReceiveLoop(socket); // 必须添加

            }
            catch(Exception e)
            {
                logSafe("[Client] 错误: " + e.getMessage(), DIY_CommuUtils.LogLevel.ERROR);
            }

        }).start();
    }

    private String buildSimpleMsg(String extra) {
        long ts = System.currentTimeMillis();

        return "{"
                + "\"deviceName\":\"" + android.os.Build.MODEL + "\","
                + "\"timestamp\":" + ts + ","
                + "\"extra\":\"" + extra + "\""
                + "}\n";
    }
    private void setupLongConnection(Socket socket, boolean isGO) {
        try {
            this.isGroupOwner = isGO;
            connSocket = socket;
            connWriter = new PrintWriter(socket.getOutputStream(), true);
            connReader = new BufferedReader(new InputStreamReader(socket.getInputStream()));

            logSafe("[LongConn] 已建立长连接，角色 = " + (isGO ? "GO" : "Client"),
                    DIY_CommuUtils.LogLevel.SUCCESS);

            connReadThread = new Thread(() -> {
                try {
                    String line;
                    while ((line = connReader.readLine()) != null) {
                        logSafe("[Recv] " + line, DIY_CommuUtils.LogLevel.SUCCESS);
                    }
                    logSafe("[LongConn] 对端已断开连接", DIY_CommuUtils.LogLevel.WARNING);
                }
                catch (Exception e) {
                    logSafe("[LongConn] 接收线程异常: " + e.getMessage(),
                            DIY_CommuUtils.LogLevel.ERROR);
                }
            });

            connReadThread.start();

        } catch (Exception e) {
            logSafe("[LongConn] 初始化失败: " + e.getMessage(), DIY_CommuUtils.LogLevel.ERROR);
        }
    }

    private void sendMsgThroughSocket(Socket socket, String msg)
    {
        try
        {
            PrintWriter out = new PrintWriter(socket.getOutputStream(), true);
            out.println(msg);
        } catch (Exception e)
        {

            logSafe("sendMsg error: " + e.getMessage(), DIY_CommuUtils.LogLevel.ERROR);
        }
    }
    // 必须由持有的 Activity 的 onActivityResult 转发过来
    public void onActivityResult(int requestCode, int resultCode, Intent data)
    {
        if (requestCode != DIY_CommuUtils.REQUEST_OPEN_PIC) return;
        if (resultCode != Activity.RESULT_OK) return;
        if (data == null) return;

        Chosen_Uri = data.getData();
        if (Chosen_Uri == null) return;

        String path = getPathFromUri(activity, Chosen_Uri);
        if (path == null)
        {
            // 取不到物理路径时，可以先传 URI 字符串回去（UE端再处理），或实现流拷贝到缓存后传路径
            path = Chosen_Uri.toString();
        }
        logSafe("Selected image path/uri: " + path, DIY_CommuUtils.LogLevel.WARNING);

        lastSelectedImagePath = path;   // <-- 新增
        //nativeOnImageSelected(path);
    }


    public static String getPathFromUri(final Context context, final Uri uri) {
        // DocumentProvider
        if (Build.VERSION.SDK_INT >= Build.VERSION_CODES.KITKAT && DocumentsContract.isDocumentUri(context, uri)) {
            // ExternalStorageProvider
            if ("com.android.externalstorage.documents".equals(uri.getAuthority())) {
                final String docId = DocumentsContract.getDocumentId(uri);
                final String[] split = docId.split(":");
                final String type = split.length > 0 ? split[0] : null;
                if ("primary".equalsIgnoreCase(type)) {
                    return Environment.getExternalStorageDirectory() + "/" + split[1];
                }
            }
            // DownloadsProvider
            else if ("com.android.providers.downloads.documents".equals(uri.getAuthority())) {
                final String id = DocumentsContract.getDocumentId(uri);
                if (id != null && id.startsWith("raw:")) {
                    return id.replaceFirst("raw:", "");
                }
                try {
                    final Uri contentUri = ContentUris.withAppendedId(
                            Uri.parse("content://downloads/public_downloads"), Long.valueOf(id));
                    return queryColumn(context, contentUri, null, null);
                } catch (Exception e) {
                    e.printStackTrace();
                }
            }
            // MediaProvider
            else if ("com.android.providers.media.documents".equals(uri.getAuthority())) {
                final String docId = DocumentsContract.getDocumentId(uri);
                final String[] split = docId.split(":");
                final String type = split[0];
                Uri contentUri = null;
                if ("image".equals(type)) {
                    contentUri = MediaStore.Images.Media.EXTERNAL_CONTENT_URI;
                } else if ("video".equals(type)) {
                    contentUri = MediaStore.Video.Media.EXTERNAL_CONTENT_URI;
                } else if ("audio".equals(type)) {
                    contentUri = MediaStore.Audio.Media.EXTERNAL_CONTENT_URI;
                }
                final String selection = "_id=?";
                final String[] selectionArgs = new String[]{ split[1] };
                return queryColumn(context, contentUri, selection, selectionArgs);
            }
        }
        // MediaStore (and general)
        if ("content".equalsIgnoreCase(uri.getScheme())) {
            return queryColumn(context, uri, null, null);
        }
        // File
        if ("file".equalsIgnoreCase(uri.getScheme())) {
            return uri.getPath();
        }
        return null;
    }

    private static String queryColumn(Context context, Uri uri, String selection, String[] selectionArgs) {
        Cursor cursor = null;
        final String column = MediaStore.Images.Media.DATA;
        final String[] projection = { column };
        try {
            cursor = context.getContentResolver().query(uri, projection, selection, selectionArgs, null);
            if (cursor != null && cursor.moveToFirst()) {
                final int index = cursor.getColumnIndexOrThrow(column);
                return cursor.getString(index);
            }
        }
        catch (Exception e)
        {

        } finally
        {
            if (cursor != null) cursor.close();
        }
        return null;
    }

    public void onResume()
    {

        IntentFilter filter = new IntentFilter();
        filter.addAction(WifiP2pManager.WIFI_P2P_PEERS_CHANGED_ACTION);
        filter.addAction(WifiP2pManager.WIFI_P2P_STATE_CHANGED_ACTION);
        filter.addAction(WifiP2pManager.WIFI_P2P_CONNECTION_CHANGED_ACTION);
        filter.addAction(WifiP2pManager.WIFI_P2P_THIS_DEVICE_CHANGED_ACTION);
        activity.registerReceiver(receiver, filter);

    }


    public void onPause()
    {

        activity.unregisterReceiver(receiver);
    }

    /** 初始化 WiFi Direct 连接模块 */
    public void initialize() {
        // TODO: 初始化 P2P 连接管理器、注册广播等
    }

    /** 发送文件（图片、音频等） */
    public void sendFile(File file) {
        // TODO: 建立 socket 连接并发送
    }

    /** 接收文件并保存 */
    public void startReceive() {
        // TODO: 开启 socket server 等待对方连接
    }

    /** 接收完成后的回调 */
    private void onFileReceived(File file) {
        // TODO: 通知 UI 或 DIY_Service 更新 ReceivedImageView
    }

    /** 清理资源 */
    public void release() {
        // TODO: 关闭 socket、注销广播
    }
}
