using UnityEngine;
using System.Collections;

[ExecuteInEditMode]
public class RayScript : MonoBehaviour
{

	//private bool canRotate;
	private GameObject cachedObj;

	// Use this for initialization
	void Start ()
	{

	}
	
	// Update is called once per frame
	void Update ()
	{

		RaycastHit hitInfo;
			
		if (Physics.Raycast (Camera.main.transform.position, Camera.main.transform.forward, out hitInfo) && hitInfo.collider.gameObject.CompareTag ("Gazable")) {
			Debug.Log (hitInfo.collider.name);
			//canRotate = true;
			Debug.Log ("On Gazable");
			cachedObj = hitInfo.collider.gameObject;
			Gazable gazableScript =	cachedObj.GetComponent<Gazable> ();
			Debug.Log ("fairyLights: " + gazableScript.fairyLights);
			if (!gazableScript.fairyLights.isPlaying)
				gazableScript.fairyLights.Play ();		
		} else if (cachedObj != null) {
			Gazable gazableScript =	cachedObj.GetComponent<Gazable> ();
			gazableScript.fairyLights.Stop ();
			cachedObj = null;
		}
				
	}

	void OnDrawGizmos ()
	{

		Gizmos.color = Color.red;
		Gizmos.DrawLine (Camera.main.transform.position, Camera.main.transform.forward * 100.0f);
	}
}
