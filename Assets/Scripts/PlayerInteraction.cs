using UnityEngine;
using System.Collections;

public class PlayerInteraction : MonoBehaviour {

	public GameObject mainCam;

	// Use this for initialization
	void Start () {
	
	}
	
	// Update is called once per frame
	void Update () {
		if (Input.GetKeyDown ("space")) {
			Debug.Log ("Space pressed");
			transform.position = transform.position + mainCam.transform.forward;
		}
	}
}
