package com.aroundmelib.dbg;


import android.annotation.SuppressLint;
import android.graphics.Bitmap;
import android.graphics.BitmapFactory;
import android.net.wifi.p2p.WifiP2pDeviceList;
import android.os.Bundle;
import android.view.LayoutInflater;
import android.view.MotionEvent;
import android.view.View;
import android.view.ViewGroup;
import android.widget.ArrayAdapter;
import android.widget.Button;
import android.widget.EditText;
import android.widget.HorizontalScrollView;
import android.widget.ImageView;
import android.widget.LinearLayout;
import android.widget.ListView;
import android.widget.ScrollView;
import android.widget.TextView;

import androidx.annotation.NonNull;
import androidx.annotation.Nullable;
import androidx.fragment.app.Fragment;

import com.aroundmelib.DIY_CommuUtils;
import com.aroundmelib.DIY_PassByManager;
import com.aroundmelib.DIY_PassByManagerReportSchema;
import com.aroundmelib.MainActivity;
import com.aroundmelib.R;

import java.io.File;
import java.util.ArrayList;
import java.util.List;

public class WifiDirectDebugFragment extends Fragment implements DIY_PassByManagerReportSchema
{

    public WifiDirectDebugFragment()
    {
    }

    private Button mButton_Pick;
    private EditText mEditTcpPort;

    private TextView mWfdLogText;
    private ScrollView mWfdScroll;
    private HorizontalScrollView mWfdHScroll;
    public View mDeviceList_divider_y2;
    public ImageView Picked_imageView;
    public LinearLayout operationPanel;
    public LinearLayout bypassPanel;
    private Button mButtonScanPeers;
    private ListView mPeerListView;
    private ArrayAdapter<String> mPeerListAdapter;
    private ArrayList<String> mPeerDisplayList;
    EditText editMessage;
    Button btnSend;
    Button resetBtn;


    DIY_PassByManager GetDIY_PassByManagerInstace()
    {
        MainActivity Cur_Activity =
                (MainActivity)getActivity();

        if(null!=Cur_Activity)
        {
            return Cur_Activity.getDIY_PassByManagerInstace();
        }

        return null;

    }

    @Override
    public void onResume()
    {
        super.onResume();

        DIY_PassByManager Cur_PassByManager = GetDIY_PassByManagerInstace();

        if(null!=Cur_PassByManager)
        {
            Cur_PassByManager.onResume();
        }

    }

    @Override
    public void onPause()
    {
        super.onPause();

        DIY_PassByManager Cur_PassByManager = GetDIY_PassByManagerInstace();

        if(null!=Cur_PassByManager)
        {
            Cur_PassByManager.onPause();
        }
    }


    @Override
    public void onDestroy()
    {
        super.onDestroy();
    }




    @Override
    public View onCreateView(LayoutInflater inflater, ViewGroup container,
                             Bundle savedInstanceState) {
        return inflater.inflate(R.layout.diy_frag_debug_wfd, container, false);
    }

    public int getConfiguredPort() {
        int port = 8988;
        try {
            String s = mEditTcpPort.getText().toString().trim();
            if (!s.isEmpty()) port = Integer.parseInt(s);
        } catch (NumberFormatException ignored) {
        }
        return port;
    }

    public void appendWfdLog_UIOperation(String msg)
    {

        if (mWfdLogText == null) return;

        mWfdLogText.append("\n" + msg);

        mWfdScroll.post(() -> {
            mWfdScroll.fullScroll(View.FOCUS_DOWN);
        });
    }

    @SuppressLint("MissingPermission")
    @Override
    public void onViewCreated(@NonNull View view, @Nullable Bundle savedInstanceState) {

        super.onViewCreated(view, savedInstanceState);

        mButton_Pick = view.findViewById(R.id.button_pickpic);
        mDeviceList_divider_y2 = view.findViewById(R.id.divider_y2);
        Picked_imageView = view.findViewById(R.id.image_send);

        operationPanel = view.findViewById(R.id.Operation_Panel);
        bypassPanel = view.findViewById(R.id.bypass_panel);

        mEditTcpPort = view.findViewById(R.id.edit_tcp_port);
        mWfdLogText = view.findViewById(R.id.text_wfd_debug);
        mWfdScroll = view.findViewById(R.id.wfd_vertical_scroll);
        mWfdHScroll = view.findViewById(R.id.wfd_horizontal_scroll);
        mButtonScanPeers = view.findViewById(R.id.button_scan_peers);
        mPeerListView = view.findViewById(R.id.list_peers);
        mPeerDisplayList = new ArrayList<>();
        mPeerListAdapter = new ArrayAdapter<>(
                getActivity(),
                android.R.layout.simple_list_item_1,
                mPeerDisplayList
        );
        mPeerListView.setAdapter(mPeerListAdapter);

        mPeerListView.setOnItemClickListener((parent, view1, position, id) ->
        {

            DIY_PassByManager mgr = GetDIY_PassByManagerInstace();
            if (mgr == null) return;

            DIY_CommuUtils.DIY_WfdPeer peer = mgr.getPeerByIndex(position);
            if (peer == null) return;

            if (mgr.isConnected()
                    && peer.macAddress.equals(mgr.getConnectedDeviceMac()))
            {
                mgr.disconnect();
                return;
            }


            appendWfdLog_UIOperation("Try connect to: " + position);

            mgr.connectToPeer(peer.macAddress);
        });

        resetBtn = view.findViewById(R.id.button_reset_wfd);

        resetBtn.setOnClickListener(v -> {
            DIY_PassByManager mgr = GetDIY_PassByManagerInstace();
            if (mgr != null)
            {
                mgr.resetWifiDirectState();
            }
        });

        mButton_Pick.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View arg0) {
                MainActivity Cur_Activity =
                        (MainActivity) getActivity();

                if (null != Cur_Activity.getDIY_PassByManagerInstace()) {
                    Cur_Activity.getDIY_PassByManagerInstace().openImagePicker();
                }
            }
        });

        mButtonScanPeers.setOnClickListener(v -> {
            appendWfdLog_UIOperation("Start discovering peers...");

            MainActivity Cur_Activity =
                    (MainActivity) getActivity();

            DIY_PassByManager Cur_PassByManager =
                    Cur_Activity.getDIY_PassByManagerInstace();
            Cur_PassByManager.StartScanningPeers();




        });


        mDeviceList_divider_y2.setOnTouchListener(new View.OnTouchListener() {
            float initialY;
            int initialTop, initialBottom;

            @Override
            public boolean onTouch(View v, MotionEvent event) {
                switch (event.getAction()) {

                    case MotionEvent.ACTION_DOWN:
                        initialY = event.getY();
                        initialTop = operationPanel.getHeight();
                        initialBottom = bypassPanel.getHeight();
                        return true;

                    case MotionEvent.ACTION_MOVE:
                        float deltaY = event.getY() - initialY;

                        int newTop = initialTop + (int) deltaY;
                        int newBottom = initialBottom - (int) deltaY;

                        if (newTop < 100) newTop = 100;
                        if (newBottom < 100) newBottom = 100;

                        LinearLayout.LayoutParams topParams =
                                (LinearLayout.LayoutParams) operationPanel.getLayoutParams();
                        topParams.height = newTop;
                        operationPanel.setLayoutParams(topParams);

                        LinearLayout.LayoutParams bottomParams =
                                (LinearLayout.LayoutParams) bypassPanel.getLayoutParams();
                        bottomParams.height = newBottom;
                        bypassPanel.setLayoutParams(bottomParams);
                        return true;
                }
                return false;
            }
        });


        editMessage = view.findViewById(R.id.edit_message);
        btnSend = view.findViewById(R.id.button_send);
        btnSend.setOnClickListener(v ->
        {
            String msg = editMessage.getText().toString().trim();

            DIY_PassByManager mgr = GetDIY_PassByManagerInstace();
            if (mgr == null) return;

            // ① 有文本 → 发送文本
            if (!msg.isEmpty())
            {
                mgr.sendChatMessage(msg);
                editMessage.setText(""); // 清空输入框
                return;
            }

            // ② 无文本 → 尝试发送文件（例如已选中的图片）
            String imgPath = mgr.getLastSelectedImagePath();
            if (imgPath == null)
            {
                appendWfdLog_UIOperation("没有可发送的图片文件，请先选择图片");
                return;
            }

            appendWfdLog_UIOperation("尝试发送图片: " + imgPath);
            mgr.sendImageFile(imgPath);
        });

    }


    @Override
    public void onReportPeersInfo(WifiP2pDeviceList rawPeers, List<DIY_CommuUtils.DIY_WfdPeer> fullPeers)
    {
        mPeerDisplayList.clear();

        for (DIY_CommuUtils.DIY_WfdPeer p : fullPeers) {


            String text =
                    p.deviceName + (p.isConnected ? " [CONNECTED]" : "[NONE]") +
                            (p.isGroupOwner ? " [GO]" : "[NONE]") +
                            "\n" +
                            p.macAddress + "\n" +
                            "status=" + p.statusString();

            mPeerDisplayList.add(text);
        }

        mPeerListAdapter.notifyDataSetChanged();
        appendWfdLog_UIOperation("Peers: " + fullPeers.size());
    }

    @Override
    public void onWIFILogReport(String inText, DIY_CommuUtils.LogLevel inLogLevel)
    {
        DIY_PassByManagerReportSchema.super.onWIFILogReport(inText,inLogLevel);
        appendWfdLog_UIOperation(inText);
    }

    @Override
    public void onImageReceived(File file)
    {
        requireActivity().runOnUiThread(() ->
        {
            appendWfdLog_UIOperation("准备 decode 图片: " + file.getAbsolutePath());

            Bitmap bmp = BitmapFactory.decodeFile(file.getAbsolutePath());
            if (bmp == null)
            {
                appendWfdLog_UIOperation("❌ decodeFile 失败，图片损坏！");
                return;
            }

            appendWfdLog_UIOperation("✔ decodeFile 成功，设置到 UI");

            ImageView recvView = getView().findViewById(R.id.image_receive);
            recvView.setImageBitmap(bmp);

            appendWfdLog_UIOperation("✔ 图片已成功显示在 Receive 区域");
        });
    }


}
