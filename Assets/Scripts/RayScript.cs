using UnityEngine;
using System.Collections;

public class RayScript : MonoBehaviour {

	//private bool canRotate;
	private GameObject cachedObj;

	// Use this for initialization
	void Start () {
	
	}
	
	// Update is called once per frame
	void Update () {

		cachedObj = null;

		RaycastHit hitInfo;
		if (Physics.Raycast (Camera.main.transform.position, Camera.main.transform.forward, out hitInfo )) {
			if (hitInfo.collider.gameObject.CompareTag ("Gazable")) {
				//canRotate = true;
				Debug.Log("On Gazable");
				cachedObj = hitInfo.collider.gameObject;
			}
		}

		if (cachedObj != null) {
			cachedObj.transform.Rotate(15.0f * Time.deltaTime, 15.0f * Time.deltaTime, 15.0f * Time.deltaTime);
		}
	
	}
}
