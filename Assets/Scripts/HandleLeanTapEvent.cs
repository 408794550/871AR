using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Lean.Touch;

public class HandleLeanTapEvent : LeanSelect 
{
	[Tooltip("Ignore fingers with StartedOverGui?")]
	public 	bool 	IgnoreGuiFingers 	= true;
	private float 	pressTime 			= 0.0f;

	protected virtual void OnEnable()
	{
		// Hook events
		LeanTouch.OnFingerDown += FingerDown;
		LeanTouch.OnFingerUp   += FingerUp;
	}

	protected virtual void OnDisable()
	{
		// Unhook events
		LeanTouch.OnFingerDown -= FingerDown;
		LeanTouch.OnFingerUp   -= FingerUp;
	}

	private void FingerDown(LeanFinger finger)
	{
		// Ignore this finger?
		if (IgnoreGuiFingers == true && finger.StartedOverGui == true)
		{
			return;
		}

		if (CurrentSelectable != null && CurrentSelectable.SelectingFinger != null)
		{
			return;
		}
		pressTime = Time.time;
		// Try and select
		Select(finger);
	}

	private void FingerUp(LeanFinger finger)
	{
		CountDown._instance.ResetTime ();
		pressTime = Time.time - pressTime;//这里计算了手指从按下到抬起的时间差，如果小于0.2s，则认为是点击，否则是长按
		if (pressTime <= 0.2f)
		{
			ModelManager._instance.offCardQuad.SetActive ( ModelManager._instance.isOffCard ? true : false);
			Ray ray = ModelManager._instance.isOffCard ? ModelManager._instance.offCardCamera.ScreenPointToRay(finger.ScreenPosition) : Camera.main.ScreenPointToRay(finger.ScreenPosition);
			RaycastHit hitInfo;  
			if (Physics.Raycast (ray, out hitInfo, 100))
			{  
				GameObject gameObj = hitInfo.collider.gameObject;  
				if (CurrentSelectable && gameObj.name.Equals (CurrentSelectable.name))
				{
					//这里相当于点击中了物体，触发Tap事件
					ModelSelfManager modelselfManager = CurrentSelectable.transform.GetComponent<ModelSelfManager> ();
					if(modelselfManager)
					{
						modelselfManager.HandleTapEvent();
						ModelManager._instance.currentRotationTransform = CurrentSelectable.transform;
					}
					if (CurrentSelectable != null)
					{
						if (CurrentSelectable.SelectingFinger == finger || CurrentSelectable.SelectingFinger == null)
						{
							Deselect();
						}
					}
					return;
				}
				if (!FunctionModeleManager.Instance.TapWalk)
				{
					return;
				}
				//确保点击了平面，点击了平面就是行走动画了。
				if (gameObj.name.Equals ("Quad") || gameObj.name.Equals ("OffCardQuad"))
				{
					if (ModelManager._instance.isOffCard && ModelManager._instance.offCardModelTransform)
					{
						ModelSelfManager modelselfManager = ModelManager._instance.offCardModelTransform.GetComponent<ModelSelfManager> ();
						if(modelselfManager)
						{
							ModelManager._instance.offCardModelIsMoving = true;
							modelselfManager.HandleTapWalkEvent(finger);
						}
					} else
					{
						if (ModelManager._instance.currentRotationTransform)
						{
							ModelSelfManager modelselfManager = ModelManager._instance.currentRotationTransform.GetComponent<ModelSelfManager> ();
							if(modelselfManager)
							{
								ModelManager._instance.offCardQuad.SetActive (false);
								ModelManager._instance.currentModelisMoving = true;
								modelselfManager.HandleTapWalkEvent(finger);
							}
						}
					}
				}
			} else
			{
				//没有碰到任何东西，直接忽略
				Utility.LogPrint ("touch nothing");
			}
		}
		if (CurrentSelectable != null)
		{
			if (CurrentSelectable.SelectingFinger == finger || CurrentSelectable.SelectingFinger == null)
			{
				Deselect();
			}
		}
	}
}
