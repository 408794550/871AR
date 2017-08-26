using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ParticleTransformInfo : MonoBehaviour {
	public 	GameObject[]				particleSystemObj;
	private List<GameObject>			particleSystemObjList = new List<GameObject>();
	void Start()
	{
		
	}
	#if UNITY_EDITOR
	protected virtual void Reset()
	{
		Transform []tfs = GetComponentsInChildren<Transform> ();
		foreach (Transform t in tfs)
		{
			if (t.name.ToLower ().Equals ("tap_particle") || t.name.ToLower ().Equals ("found_particle"))
			{
				particleSystemObjList.Add (t.gameObject);
			}
		}
		particleSystemObj = particleSystemObjList.ToArray ();
	}
	#endif
}
