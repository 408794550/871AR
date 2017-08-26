using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SetModelCenter : MonoBehaviour {

	// Use this for initialization
	Vector3 vec3;
	void Start () 
	{
		vec3 = GetComponent<Renderer> ().bounds.center;
		GameObject cube = GameObject.CreatePrimitive(PrimitiveType.Cube);  
		cube.transform.localScale = new Vector3 (3, 3, 3);
		cube.transform.position = vec3;
		transform.SetParent (cube.transform);
	}
	
	// Update is called once per frame
	void Update () 
	{
		
	}
}
