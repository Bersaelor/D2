using UnityEngine;
using System.Collections;

public class MotionTrack : MonoBehaviour {

	ArrayList pos = new ArrayList ();

	bool isRec = false;
	float tempX;
	float tempY;
	float tempZ;

	// Use this for initialization
	void Start () {
		isRec = true;
		Debug.Log ("Start Recording!");
	}
	
	// Update is called once per frame
	void Update () {
		if (isRec == true) {
			tempX = transform.position.x;
			tempY = transform.position.y;
			tempZ = transform.position.z;
			pos.Add (tempX);
			pos.Add (tempY);
			pos.Add (tempZ);
			Debug.Log ("now X track" + pos);
			Debug.Log ("Current X pos" + tempX);

		}
	
	}
}
