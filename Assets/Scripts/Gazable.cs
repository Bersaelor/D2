using UnityEngine;
using System.Collections;

public class Gazable : MonoBehaviour {

	public ParticleSystem attachedParticles;

	// Use this for initialization
	void Start () {
	
	}
	
	// Update is called once per frame
	void Update () {
		transform.Rotate(15.0f * Time.deltaTime, 35.0f * Time.deltaTime, 0.0f);
	}
}
