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
			if (!gazableScript.fairyLights.isPlaying)
				gazableScript.fairyLights.Play ();
			gazableScript.gazedCount += Time.deltaTime * 50;
			Debug.Log ("gazedCount: " + gazableScript.gazedCount);

			if (gazableScript.gazedCount > 60) {
				gazableScript.Explode ();
				gazableScript.fairyLights.Stop ();
			} 

			if (gazableScript.gazedCount > 110) {
				Destroy (cachedObj);
				cachedObj = null;
			}
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
