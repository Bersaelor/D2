using UnityEngine;
using System.Collections;

public class PlayerInteraction : MonoBehaviour {

	public GameObject mainCam;
	public GameObject selectedTerrain;
	private float initialHeight = 0;

	// Use this for initialization
	void Start () {
		initialHeight = transform.position.y - getTerrain().SampleHeight (transform.position);
		Debug.Log ("Initial height is " + initialHeight);
	}

	Terrain getTerrain() {
		return selectedTerrain.GetComponent<Terrain> ();
		//		return Terrain.activeTerrain;
	}

	// Update is called once per frame
	void Update () {
		if (Input.GetButton ("Fire1")) {
			float maxPos = 110;

			Vector3 newPos = transform.position + mainCam.transform.forward;
			newPos.y = getTerrain().SampleHeight (transform.position) + initialHeight;
			newPos.x = Mathf.Min (newPos.x, maxPos);
			newPos.x = Mathf.Max (newPos.x, -maxPos);
			newPos.z = Mathf.Min (newPos.z, maxPos);
			newPos.z = Mathf.Max (newPos.z, -maxPos);

			transform.position = newPos;
		}
	}
}
