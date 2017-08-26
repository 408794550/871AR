using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ControlAudioSourcePlay : MonoBehaviour {

	public  float           delayTime                   = 0.0f;
    private float           particleSystemStartDelay    = 0.0f;
	private ParticleSystem 	particleSystem;
	private AudioSource 	audioSource;
	// Use this for initialization
	void Start () {
		particleSystem = GetComponent<ParticleSystem> ();
		audioSource = GetComponent<AudioSource> ();

    }
	
	// Update is called once per frame
	void Update () {
		if (!audioSource.isPlaying && Mathf.Abs(delayTime - particleSystem.time) < 0.1f)
		{
			audioSource.Play ();
		}
	}
}
