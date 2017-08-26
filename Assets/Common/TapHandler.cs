/*===============================================================================
Copyright (c) 2015-2016 PTC Inc. All Rights Reserved.
 
Copyright (c) 2015 Qualcomm Connected Experiences, Inc. All Rights Reserved.
 
Vuforia is a trademark of PTC Inc., registered in the United States and other 
countries.
===============================================================================*/
using UnityEngine;
using System.Collections;
using Lean.Touch;
using UnityEngine.UI;

public class TapHandler : MonoBehaviour
{		
	// Event signature
	//[System.Serializable] public class LeanFingerEvent : UnityEvent<LeanFinger> {}
	public Image image; 

	[Tooltip("Ignore fingers with StartedOverGui?")]
	public bool IgnoreGuiFingers = true;

	[Tooltip("How many times must this finger tap before OnFingerTap gets called? (0 = every time)")]
	public int RequiredTapCount = 0;

	[Tooltip("How many times repeating must this finger tap before OnFingerTap gets called? (e.g. 2 = 2, 4, 6, 8, etc) (0 = every time)")]
	public int RequiredTapInterval;

	protected virtual void OnEnable()
	{
		// Hook events
		image.gameObject.SetActive (false);
		LeanTouch.OnFingerTap += FingerTap;
	}

	protected virtual void OnDisable()
	{
		// Unhook events
		if (image)
		{
			image.gameObject.SetActive (true);
		}
		LeanTouch.OnFingerTap -= FingerTap;
	}

	private void FingerTap(LeanFinger finger)
	{
		if (ModelManager._instance.modelCount > 0 || ModelManager._instance.isOffCard || ModelManager._instance.currentRotationTransform)
		{
			return;
		}
		// Ignore this finger?
		if (IgnoreGuiFingers == true && finger.StartedOverGui == true)
		{
			return;
		}

		if (RequiredTapCount > 0 && finger.TapCount != RequiredTapCount)
		{
			return;
		}

		if (RequiredTapInterval > 0 && (finger.TapCount % RequiredTapInterval) != 0)
		{
			return;
		}

		// Call event
		//OnFingerTap.Invoke(finger);
		OnSingleTapConfirmed();
	}
   

    protected virtual void OnSingleTapConfirmed()
    {
        CameraSettings camSettings = GetComponentInChildren<CameraSettings>();
        if (camSettings)
        {
            camSettings.TriggerAutofocusEvent();
        }
    }
}
