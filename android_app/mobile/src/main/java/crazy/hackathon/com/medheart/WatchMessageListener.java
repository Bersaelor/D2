package crazy.hackathon.com.medheart;

import android.app.IntentService;
import android.content.Intent;
import android.net.Uri;
import android.nfc.Tag;
import android.os.Bundle;
import android.util.Log;

import com.google.android.gms.analytics.HitBuilders;
import com.google.android.gms.analytics.Tracker;
import com.google.android.gms.wearable.DataMap;
import com.google.android.gms.wearable.MessageEvent;
import com.google.android.gms.wearable.Wearable;
import com.google.android.gms.common.api.GoogleApiClient;
import com.google.android.gms.wearable.WearableListenerService;

import java.io.ByteArrayInputStream;
import java.io.IOException;
import java.io.ObjectInputStream;

/**
 * Created by sahmad on 10/9/2016.
 */

public class WatchMessageListener extends WearableListenerService {


    private final String TAG = WatchMessageListener.class.getSimpleName();

    MedHeartApplication application;
    private GoogleApiClient mGoogleApiClient;

    public WatchMessageListener(){
        super();

        MedHeartApplication application = (MedHeartApplication) getApplication();

        //application.getDefaultTracker()
    }



    @Override
    public void onDestroy() {


        super.onDestroy();
    }

    @Override
    public void onMessageReceived(MessageEvent messageEvent) {

        Tracker tracker = application.getDefaultTracker();



        if(!mGoogleApiClient.isConnected())
            mGoogleApiClient.blockingConnect();

        final Uri url = Uri.parse(messageEvent.getPath());

        if(messageEvent.getPath().equals("/wear/heart_rate_event")) {

            DataMap map = DataMap.fromByteArray(messageEvent.getData());

            try {

//                tracker.send(new HitBuilders.EventBuilder()
//                        .setCategory("Action")
//                        .setAction("Share")
//                        .setLabel("")
//                        .setValue(0)
//                        .build());


                int hearRate = map.getInt("HeartRate");


                if(hearRate !=0 ) {

                    tracker.send(new HitBuilders.EventBuilder()
                            .setCategory("HeartRate")
                            .setAction("HeartRateValue")
                            .setValue(hearRate)
                            .build());
                }


            } catch (Exception e) {
                e.printStackTrace();
            }
        }
        else {
            Log.i(TAG,"Un handled event" + messageEvent.getPath() );
        }






    }

    @Override
    public void onCreate() {
        super.onCreate();

        mGoogleApiClient = new GoogleApiClient.Builder(this)
                .addApi(Wearable.API)
                .build();
    }


}
