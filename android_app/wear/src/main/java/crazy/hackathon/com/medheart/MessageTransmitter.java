package crazy.hackathon.com.medheart;

import android.app.IntentService;
import android.content.Intent;
import android.os.Build;
import android.util.Log;

import com.google.android.gms.common.api.GoogleApiClient;
import com.google.android.gms.wearable.DataMap;
import com.google.android.gms.wearable.Node;
import com.google.android.gms.wearable.NodeApi;
import com.google.android.gms.wearable.Wearable;

import java.io.ByteArrayOutputStream;
import java.io.IOException;
import java.io.ObjectOutputStream;
import java.util.ArrayList;
import java.util.List;

/**
 * Created by sahmad on 10/9/2016.
 */

// (C) https://gist.github.com/mauimauer/c6f40ec89863906e3b7a

public class MessageTransmitter extends IntentService {




    private List<String> getNodes(GoogleApiClient mGoogleApiClient) {


        ArrayList<String> results= new ArrayList<String>();
        NodeApi.GetConnectedNodesResult nodes =
                Wearable.NodeApi.getConnectedNodes(mGoogleApiClient).await();
        for (Node node : nodes.getNodes()) {
            results.add(node.getId());
        }
        return results;
    }


    public  MessageTransmitter() {
    super("HeartRateTransmitter");
    }


    @Override
    public void onCreate() {
        super.onCreate();
    }

//    @Override
//    public int onStartCommand(Intent intent, int flags, int startId) {
//        super.onStartCommand(intent, flags, startId);
//
//        Log.i("LocalService", "Received start id " + startId + ": " + intent);
//
//        return START_STICKY;
//
//    }

    @Override
    protected void onHandleIntent(Intent intent) {

        GoogleApiClient mGoogleAppiClient = new GoogleApiClient.Builder(MessageTransmitter.this)
                .addApi(Wearable.API)
                .build();
        mGoogleAppiClient.blockingConnect();

        List<String> nodes = getNodes(mGoogleAppiClient);

        try {

            DataMap dataMap = new DataMap();

            // Add a bit of information on the Wear Device to pass a long with the exception
            dataMap.putInt("board", intent.getExtras().getInt("HeartRate"));

            // "Fire and forget" send to connected Smartphone/Tablet using the Wearable Message API
            Wearable.MessageApi.sendMessage(mGoogleAppiClient, nodes.get(0), "/wear/heart_rate_event", dataMap.toByteArray());

        } catch (Exception e) {
            e.printStackTrace();
        } finally {

        }
    }
}
