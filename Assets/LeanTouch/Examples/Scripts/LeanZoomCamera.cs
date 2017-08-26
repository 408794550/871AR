using UnityEngine;

namespace Lean.Touch
{
	// This script allows you to zoom a camera in and out based on the pinch gesture
	// This supports both perspective and orthographic cameras
	public class LeanZoomCamera : MonoBehaviour
	{
		[Tooltip("Ignore fingers with StartedOverGui?")]
		public bool IgnoreGuiFingers = true;

		[Tooltip("Allows you to force rotation with a specific amount of fingers (0 = any)")]
		public int RequiredFingerCount;

		[Tooltip("If you want the mouse wheel to simulate pinching then set the strength of it here")]
		[Range(-1.0f, 1.0f)]
		public float WheelSensitivity;

		[Tooltip("The camera that will be zoomed")]
		public Camera Camera;

		[Tooltip("The minimum FOV/Size we want to zoom to")]
		public float Minimum = 10.0f;
		
		[Tooltip("The maximum FOV/Size we want to zoom to")]
		public float Maximum = 60.0f;
		
		protected virtual void LateUpdate()
		{
			// If camera is null, try and get the main camera, return true if a camera was found
			if (LeanTouch.GetCamera(ref Camera) == true)
			{
				// Get the fingers we want to use
				var fingers = LeanTouch.GetFingers(IgnoreGuiFingers, RequiredFingerCount);
				
				// Store the current size/fov in a temp variable
				var current = GetCurrent();

				// Scale the current value based on the pinch ratio
				current *= LeanGesture.GetPinchRatio(fingers, WheelSensitivity);
				
				// Clamp the current value to min/max values
				current = Mathf.Clamp(current, Minimum, Maximum);

				// Set the new size/fov
				SetCurrent(current);
			}
		}

		private float GetCurrent()
		{
			if (Camera.orthographic == true)
			{
				return Camera.orthographicSize;
			}
			else
			{
				return Camera.fieldOfView;
			}
		}

		private void SetCurrent(float current)
		{
			if (Camera.orthographic == true)
			{
				Camera.orthographicSize = current;
			}
			else
			{
				Camera.fieldOfView = current;
			}
		}
	}
}