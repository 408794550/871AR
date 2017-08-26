using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Lean.Touch;

public class ModelTranslate : MonoBehaviour {

	[Tooltip("Ignore fingers with StartedOverGui?")]
	public bool IgnoreGuiFingers = true;

	[Tooltip("Ignore fingers if the finger count doesn't match? (0 = any)")]
	public int RequiredFingerCount;

	[Tooltip("Does translation require an object to be selected?")]
	public LeanSelectable RequiredSelectable;

	[Tooltip("The camera the translation will be calculated using (default = MainCamera)")]
	public Camera Camera;

	public GameObject modelCenter;

	#if UNITY_EDITOR
	protected virtual void Reset()
	{
		if (RequiredSelectable == null)
		{
			RequiredSelectable = GetComponent<LeanSelectable>();
		}
	}
	#endif

	protected virtual void Update()
	{
		// If we require a selectable and it isn't selected, cancel translation
		//			if ((RequiredSelectable != null && RequiredSelectable.IsSelected == false) && !ModelManager._instance)
		//			{
		//				return;
		//			}
		if ((RequiredSelectable != null && RequiredSelectable.IsSelected == false))
		{
			return;
		}
		// Get the fingers we want to use
		var fingers = LeanTouch.GetFingers(IgnoreGuiFingers, RequiredFingerCount);

		// Calculate the screenDelta value based on these fingers
		var screenDelta = LeanGesture.GetScreenDelta(fingers);

		// Perform the translation
		Translate(screenDelta);
	}

	private void Translate(Vector2 screenDelta)
	{
		// If camera is null, try and get the main camera, return true if a camera was found
		if (LeanTouch.GetCamera(ref Camera) == true)
		{
			// Screen position of the transform
			var screenPosition = Camera.WorldToScreenPoint(transform.parent.position);
			//
			//				Vector2 vec2 = new Vector2 (screenPosition.x, screenPosition.y);
			//				Vector2 screenCenter = new Vector2 (Screen.width/2,Screen.height/2);
			//				float dis = Vector2.Distance (vec2, screenCenter);
			//				float z = 20.0f;
			//				int i = (int)dis / 100;
			//				z = z + i * 2;
			//				Debug.Log (transform.name + "-----------distance is :" + dis);
			//				Vector3 finalVec3 = new Vector3 (screenPosition.x, screenPosition.y, z);
			//				transform.parent.position = Camera.ScreenToWorldPoint(finalVec3);
			// Add the deltaPosition
			screenPosition += (Vector3)screenDelta;



			// Convert back to world space
			transform.parent.position = Camera.ScreenToWorldPoint(screenPosition);
		}
	}
}
