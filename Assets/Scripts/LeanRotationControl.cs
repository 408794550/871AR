using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using DG.Tweening;


enum SwipDirection
{
	up,
	down,
	left,
	right,
	none
};

namespace Lean.Touch
{
	public class LeanRotationControl : MonoBehaviour
	{
		Vector2 startPosition = new Vector2 ();
		private bool isFirst = true;
		float distanceX = 0;

		protected virtual void OnEnable()
		{
			if (!FunctionModeleManager.Instance.Rotation)
			{
				this.enabled = false;
				return;
			}
			// Hook events
			LeanTouch.OnFingerSet += OnFingerSet;
			LeanTouch.OnFingerUp  += OnFingerUp;

		}

		protected virtual void OnDisable()
		{
			// Unhook events
			LeanTouch.OnFingerSet -= OnFingerSet;
			LeanTouch.OnFingerUp  -= OnFingerUp;
		}
		//手指按下的时候触发的事件。
		private void OnFingerSet(LeanFinger finger)
		{
			if (ModelManager._instance.currentModelisMoving || ModelManager._instance.offCardModelIsMoving || LeanTouch.Fingers.Count >=2) 
			{
				return;
			};
			CountDown._instance.ResetTime();
			if (isFirst)
			{
				startPosition = finger.ScreenPosition;
				isFirst = false;
			}
			//这里的distanceX用来模拟手指的拖动距离，距离越大，则模型旋转的越大
			distanceX = (startPosition.x - finger.ScreenPosition.x);
			if (ModelManager._instance.isOffCard && ModelManager._instance.offCardModelTransform)
			{
				ModelManager._instance.offCardModelTransform.DOLocalRotate (new Vector3 (0, distanceX / 3, 0), 0, RotateMode.LocalAxisAdd);
			} else
			{
				if (ModelManager._instance.currentRotationTransform)
				{
					ModelManager._instance.currentRotationTransform.DOLocalRotate (new Vector3 (0, distanceX / 3, 0), 0, RotateMode.LocalAxisAdd);
				}
			}
			startPosition = finger.ScreenPosition;
		}

		private void OnFingerUp(LeanFinger finger)
		{
			isFirst = true;
		}
	}
}