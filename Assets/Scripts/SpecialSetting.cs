using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SpecialSetting : MonoBehaviour {
	public void SetRenderQueue(int layer)
	{
		transform.GetComponent<Renderer> ().sharedMaterial.renderQueue = layer;
	}
}
