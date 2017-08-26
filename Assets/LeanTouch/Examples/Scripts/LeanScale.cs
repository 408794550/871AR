using UnityEngine;

namespace Lean.Touch
{
	// This script allows you to scale the current GameObject
	public class LeanScale : MonoBehaviour
	{
		[Tooltip("Ignore fingers with StartedOverGui?")]
		public bool IgnoreGuiFingers;

		[Tooltip("Allows you to force rotation with a specific amount of fingers (0 = any)")]
		public int RequiredFingerCount;

		[Tooltip("Does scaling require an object to be selected?")]
		public LeanSelectable RequiredSelectable;

		[Tooltip("If you want the mouse wheel to simulate pinching then set the strength of it here")]
		[Range(-1.0f, 1.0f)]
		public float WheelSensitivity;

		[Tooltip("Should the scaling be performanced relative to the finger center?")]
		public bool Relative;

		Vector3 scalVec3;
#if UNITY_EDITOR
		protected virtual void Reset()
		{
			if (RequiredSelectable == null)
			{
				RequiredSelectable = GetComponent<LeanSelectable>();
			}
		}
#endif

		void Start()
		{
			scalVec3 = transform.lossyScale;
		}

		protected virtual void Update()
		{
			// If we require a selectable and it isn't selected, cancel scaling
//			if (RequiredSelectable != null && RequiredSelectable.IsSelected == false && !ModelManager._instance)
//			{
//				return;
//			}
			if (RequiredSelectable != null && RequiredSelectable.IsSelected == false)
			{
				return;
			}
			// Get the fingers we want to use
			var fingers = LeanTouch.GetFingers(IgnoreGuiFingers, RequiredFingerCount);
			if (fingers != null) {
				if (fingers.Count >= 2) {
					float dis = Vector2.Distance (fingers [0].ScreenPosition, fingers [1].ScreenPosition);
					//Debug.Log ("-----distance :" + dis);
					if (dis < 300)
						return;
				}
			}
			// Calculate the scaling values based on these fingers
			var scale        = LeanGesture.GetPinchScale(fingers, WheelSensitivity);
			var screenCenter = LeanGesture.GetScreenCenter(fingers);

			// Perform the scaling
			Scale(scale, screenCenter);
		}

		private void Scale(float scale, Vector2 screenCenter)
		{
			// Make sure the scale is valid
			if (scale > 0.0f)
			{
				if (Relative == true)
				{
					// If camera is null, try and get the main camera, return true if a camera was found
					// Screen position of the transform
					var screenPosition = Camera.main.WorldToScreenPoint(transform.position);
					// Push the screen position away from the reference point based on the scale
					screenPosition.x = screenCenter.x + (screenPosition.x - screenCenter.x) * scale;
					screenPosition.y = screenCenter.y + (screenPosition.y - screenCenter.y) * scale;
					// Convert back to world space
					transform.position = Camera.main.ScreenToWorldPoint(screenPosition);
					// Grow the local scale by scale
					//transform.localScale *= scale;
					if (((scalVec3.x * 2.5f) > (transform.lossyScale.x * scale)) && (scalVec3.x * 0.5 < (transform.lossyScale.x * scale))) 
					{
						transform.localScale *= scale;
					}
				}
				else
				{
					if (((scalVec3.x * 2.5f) > (transform.lossyScale.x * scale)) && ((scalVec3.x * 0.6) < (transform.lossyScale.x * scale))) 
					{
						transform.localScale *= scale;
					}
					// Grow the local scale by scale
					//transform.localScale *= scale;

				}
			}
		}
	}
}