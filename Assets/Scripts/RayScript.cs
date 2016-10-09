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

		RaycastHit hitInfo;
		if (Physics.Raycast (Camera.main.transform.position, Camera.main.transform.forward, out hitInfo )) {
			if (hitInfo.collider.gameObject.CompareTag ("Gazable")) {
				//canRotate = true;
				Debug.Log ("On Gazable");
				cachedObj = hitInfo.collider.gameObject;
				Gazable gazableScript =	cachedObj.GetComponent<Gazable> ();
				Debug.Log ("fairyLights: " + gazableScript.fairyLights);
				gazableScript.fairyLights.Play ();		
			} else if (cachedObj != null) {
				Gazable gazableScript =	cachedObj.GetComponent<Gazable> ();
				gazableScript.fairyLights.Stop ();
				cachedObj = null;
			}
		}
				
	}
}
