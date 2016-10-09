package crazy.hackathon.com.medheart;

import android.Manifest;
import android.app.Activity;
import android.app.AlertDialog;
import android.content.Context;
import android.content.DialogInterface;
import android.content.Intent;
import android.content.pm.PackageManager;
import android.hardware.Sensor;
import android.hardware.SensorEvent;
import android.hardware.SensorEventListener;
import android.hardware.SensorManager;
import android.os.Bundle;
import android.support.v4.app.ActivityCompat;
import android.support.v7.app.AppCompatActivity;
import android.support.wearable.activity.WearableActivity;
import android.support.wearable.view.BoxInsetLayout;
import android.util.Log;
import android.view.View;
import android.widget.TextView;

import com.google.android.gms.common.api.GoogleApiClient;
import com.google.android.gms.wearable.DataMap;
import com.google.android.gms.wearable.Node;
import com.google.android.gms.wearable.NodeApi;
import com.google.android.gms.wearable.Wearable;

import java.text.SimpleDateFormat;
import java.util.ArrayList;
import java.util.Date;
import java.util.List;
import java.util.Locale;


public class watch_screen extends WearableActivity implements SensorEventListener,
        android.support.v4.app.ActivityCompat.OnRequestPermissionsResultCallback {


    public static String TAG = watch_screen.class.getSimpleName();

    private static final SimpleDateFormat AMBIENT_DATE_FORMAT =
            new SimpleDateFormat("HH:mm", Locale.US);

    private BoxInsetLayout mContainerView;
    private TextView mTextView;
    private TextView mClockView;
    private TextView txtHeartRate;

    private final int BODY_SENSOR_GRANTED_CODE = 0x00111;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_watch_screen);
        setAmbientEnabled();

        mContainerView = (BoxInsetLayout) findViewById(R.id.container);
        mTextView = (TextView) findViewById(R.id.text);
        mClockView = (TextView) findViewById(R.id.clock);
        txtHeartRate = (TextView) findViewById(R.id.txtheartrate);

        txtHeartRate.setText("reading heart Rate...");

        SensorManager sensorManager = ((SensorManager) getSystemService(SENSOR_SERVICE));

        if (ActivityCompat.checkSelfPermission(this, android.Manifest.permission.BODY_SENSORS) != PackageManager.PERMISSION_GRANTED) {

            if (ActivityCompat.shouldShowRequestPermissionRationale(this,
                    Manifest.permission.READ_PHONE_STATE)) {
                showExplanation(this, "Permission Needed", "Reading Heart Rate", Manifest.permission.BODY_SENSORS);
            } else {
                ActivityCompat.requestPermissions(this, new String[]{android.Manifest.permission.BODY_SENSORS}, BODY_SENSOR_GRANTED_CODE);
            }
        } else {


            Sensor heartRateSensor = sensorManager.getDefaultSensor(Sensor.TYPE_HEART_RATE);
            if (heartRateSensor != null) {
                sensorManager.registerListener(this, heartRateSensor, SensorManager.SENSOR_DELAY_NORMAL);
            }
            else
                Log.i(TAG,"Heart rate sensor null");
        }


        //TODO: debugging only
        List<Sensor> allSensors = sensorManager.getSensorList(Sensor.TYPE_ALL);
        for (Sensor s : allSensors) {
            Log.i(TAG, "" + s.getName());
        }

    }


    private void showExplanation(final Activity activityContext, String title,
                                 String message, final String permission) {

        AlertDialog.Builder builder = new AlertDialog.Builder(this);

        builder.setTitle(title)
                .setMessage(message)
                .setPositiveButton(android.R.string.ok, new DialogInterface.OnClickListener() {
                    public void onClick(DialogInterface dialog, int id) {

                        ActivityCompat.requestPermissions(activityContext, new String[]{permission}, BODY_SENSOR_GRANTED_CODE);
                    }
                });
        builder.create().show();
    }



    @Override
    public void onEnterAmbient(Bundle ambientDetails) {
        super.onEnterAmbient(ambientDetails);
        updateDisplay();
    }

    @Override
    public void onUpdateAmbient() {
        super.onUpdateAmbient();
        updateDisplay();
    }

    @Override
    public void onExitAmbient() {
        updateDisplay();
        super.onExitAmbient();
    }

    @Override
    public void onAccuracyChanged(Sensor sensor, int accuracy) {

        Log.d(TAG, "onAccuracyChanged - accuracy: " + accuracy);
    }

    @Override
    public void onSensorChanged(SensorEvent event) {

        if (event.sensor.getType() == Sensor.TYPE_HEART_RATE) {

            int hearRateValue = (int) event.values[0];

            String msg = "" + hearRateValue;
            txtHeartRate.setText(msg);
            Log.d(TAG, msg);


            this.runOnUiThread(
            new Runnable(){
                @Override
                public void run() {


                }
            });
//
            Intent newValueIntent = new Intent(getApplication(), MessageTransmitter.class);
            newValueIntent.putExtra("HeartRate", hearRateValue);

            if (startService(newValueIntent) == null)
                Log.i(TAG,"Enable to trigger service");

            //alternate to service as service is not working right now.
            //sendData(newValueIntent.getExtras());



        } else
            Log.d(TAG, "Unknown sensor type");
    }

    private void updateDisplay() {
        if (isAmbient()) {
            mContainerView.setBackgroundColor(getResources().getColor(android.R.color.black));
            mTextView.setTextColor(getResources().getColor(android.R.color.white));
            mClockView.setVisibility(View.VISIBLE);

            mClockView.setText(AMBIENT_DATE_FORMAT.format(new Date()));
        } else {
            mContainerView.setBackground(null);
            mTextView.setTextColor(getResources().getColor(android.R.color.black));
            mClockView.setVisibility(View.GONE);
        }
    }




    private List<String> getNodes(GoogleApiClient mGoogleApiClient) {


        ArrayList<String> results= new ArrayList<String>();
        NodeApi.GetConnectedNodesResult nodes =
                Wearable.NodeApi.getConnectedNodes(mGoogleApiClient).await();
        for (Node node : nodes.getNodes()) {
            results.add(node.getId());
        }
        return results;
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

    protected void sendData(Bundle intent) {

        GoogleApiClient mGoogleAppiClient = new GoogleApiClient.Builder(getApplication())
                .addApi(Wearable.API)
                .build();
        mGoogleAppiClient.blockingConnect();

        List<String> nodes = getNodes(mGoogleAppiClient);

        try {

            DataMap dataMap = new DataMap();

            // Add a bit of information on the Wear Device to pass a long with the exception
            dataMap.putInt("board", intent.getInt("HeartRate"));

            // "Fire and forget" send to connected Smartphone/Tablet using the Wearable Message API
            Wearable.MessageApi.sendMessage(mGoogleAppiClient, nodes.get(0), "/wear/heart_rate_event", dataMap.toByteArray());

        } catch (Exception e) {
            e.printStackTrace();
        } finally {

        }
    }
}
