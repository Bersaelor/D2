using UnityEngine;
using System.Collections;

public class Suicide : MonoBehaviour {

	public float maxLifeTime = 2.0f;
	private float lifeTime = 0.0f;

	// Use this for initialization
	void Start () {
	
	}
	
	// Update is called once per frame
	void Update () {
		lifeTime += Time.deltaTime;

		if (lifeTime > maxLifeTime) {
			Debug.Log ("Self destroying object" + gameObject.name);
			Destroy (gameObject);
		}
	}
}
