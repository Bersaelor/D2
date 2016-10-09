using UnityEngine;
using System.Collections;

[ExecuteInEditMode]
public class Gazable : MonoBehaviour {

	public ParticleSystem fairyLights;

	// Use this for initialization
	void Start () {
		GameObject particlePrefab = transform.Find ("Charge_01.3 Fairydust").gameObject;
		if (particlePrefab != null) {
			Debug.Log ("particlePrefab: " + particlePrefab);
			fairyLights = particlePrefab.GetComponent<ParticleSystem> ();
			Debug.Log ("fairyLights: " + fairyLights);
		}
	}

	// Update is called once per frame
	void Update () {
		transform.Rotate(0.0f, 0.0f, 35.0f * Time.deltaTime);
	}

	void OnDrawGizmos(){
		Gizmos.color = Color.green;
		Gizmos.DrawWireSphere (transform.position, 20*0.04f); 
	}
}
