using UnityEngine;
using System.Collections;

[ExecuteInEditMode]
public class Gazable : MonoBehaviour {

	public ParticleSystem fairyLights;
	public GameObject explosionPrefab;
	public float gazedCount = 0;
	private bool isExploded = false;

	// Use this for initialization
	void Start () {
		GameObject particlePrefab = transform.Find ("Charge_01.3 Fairydust").gameObject;
		if (particlePrefab != null) {
			Debug.Log ("particlePrefab: " + particlePrefab);
			fairyLights = particlePrefab.GetComponent<ParticleSystem> ();
			Debug.Log ("fairyLights: " + fairyLights);
		}
	}

	public void Explode () {
		if (isExploded)
			return;

		AudioSource audio = gameObject.GetComponent<AudioSource> ();
		AudioSource.PlayClipAtPoint (audio.clip, gameObject.transform.position);
		audio.Play ();
		
		GameObject explosion = Instantiate (explosionPrefab,
			transform.position, transform.rotation) as GameObject;
		isExploded = true;
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
