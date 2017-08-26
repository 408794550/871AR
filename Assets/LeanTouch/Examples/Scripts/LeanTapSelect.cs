using UnityEngine;
using System.Collections;
using DG.Tweening;

enum ScreenTapZone
{
	Screen_Upper_Left,
	Screen_Down_Left,
	Screen_Upper_Right,
	Screen_Down_Right,
	None
};
namespace Lean.Touch
{
	// This script allows you to select LeanSelectable components using finger taps
	public class LeanTapSelect : LeanSelect
	{
		[Tooltip("Ignore fingers with StartedOverGui?")]
		public bool IgnoreGuiFingers = true;

		[Tooltip("How many times must this finger tap before OnFingerTap gets called? (0 = every time)")]
		public int RequiredTapCount = 0;

		[Tooltip("How many times repeating must this finger tap before OnFingerTap gets called? (e.g. 2 = 2, 4, 6, 8, etc) (0 = every time)")]
		public int RequiredTapInterval;

		public Camera ARCamera;
		#region 点击行走功能的变量
		public Transform walkQuadTransform;

		Vector3 touchPosition = Vector3.zero;
		Vector3 startPos = Vector3.zero;
		private float baseLerpTime = 5.0f;
		private float lerpTime = 0.0f;
		private float currentLerpTime = 0.0f;
		private bool keyHit = false;
		Animator animator;
		private Transform currentNeedToWalkTransform;
		UnityEngine.Touch touch;
		float zAxisDistance = 0.0f;
		private GameObject offCardQuad;
		#endregion

		protected virtual void OnEnable()
		{
			// Hook events
			LeanTouch.OnFingerTap += FingerTap;
		}
		
		protected virtual void OnDisable()
		{
			// Unhook events
			LeanTouch.OnFingerTap -= FingerTap;
		}
		
		private void FingerTap(LeanFinger finger)
		{
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

			// Try and select
			Select(finger);
			//Debug.Log ("----distance---"+Get_Z_Axis_Distance(finger.ScreenPosition));

			if (CurrentSelectable)
			{
				TriggerTapEvent ();
			} else
			{
				if (offCardQuad == null)
				{
					offCardQuad = GameObject.CreatePrimitive(PrimitiveType.Quad);  
					offCardQuad.name = "walkQuad";
					offCardQuad.transform.localScale = new Vector3 (2000, 2000, 1);
					Destroy (offCardQuad.GetComponent<MeshRenderer> ());
				}
				if (ModelManager._instance.isOffCard && ModelManager._instance.offCardModelTransform)
				{
					offCardQuad.SetActive (true);
					currentNeedToWalkTransform = ModelManager._instance.offCardModelTransform;
					ModelManager._instance.offCardModelIsMoving = true;
					//offCardQuad.transform.position = currentNeedToWalkTransform.position;
					TriggerWalkEvent (finger);
				} else
				{
					if (ModelManager._instance.currentRotationTransform)
					{
						offCardQuad.SetActive (false);
						currentNeedToWalkTransform = ModelManager._instance.currentRotationTransform;
						ModelManager._instance.currentModelisMoving = true;
						TriggerWalkEvent (finger);
					}
				}
			}
		}
		private void TriggerTapEvent()
		{
			Debug.Log ("-----" + CurrentSelectable.transform.name);
			LeanFingerTap leanFingerTap = CurrentSelectable.transform.GetComponent<LeanFingerTap> ();
			if(leanFingerTap)
			{
				leanFingerTap.HandleTap();
			}
		}
		private void TriggerWalkEvent(LeanFinger finger)
		{
			//Debug.Log ("----Camera distance---" + Vector3.Distance (currentNeedToWalkTransform.position, Camera.main.transform.position));
			animator = currentNeedToWalkTransform.GetComponentInChildren<Animator> ();
			offCardQuad.transform.rotation = Quaternion.Euler (new Vector3(85,0,0));
			float yDis = currentNeedToWalkTransform.position.y;
			offCardQuad.transform.position = new Vector3 (0, yDis, 0);


			currentLerpTime = 0.0f;
			startPos = currentNeedToWalkTransform.position;

//			zAxisDistance = 20.0f;//Vector3.Distance (currentNeedToWalkTransform.position, Camera.main.transform.position);
//			if (!ModelManager._instance)//摄像机与识别图之间的距离
//			{
//				//Debug.Log ("---------"  +currentNeedToWalkTransform.parent.name + Vector3.Distance (currentNeedToWalkTransform.parent.position, Camera.main.transform.position));
//				zAxisDistance = Vector3.Distance (currentNeedToWalkTransform.parent.position, Camera.main.transform.position);
//			}
			//--------------------
			Vector3 lookAtPos = Vector3.zero;
			Ray ray = Camera.main.ScreenPointToRay(finger.ScreenPosition);  //摄像机需要设置MainCamera的Tag这里才能找到  
			RaycastHit hitInfo;  
			if (Physics.Raycast(ray, out hitInfo , 100))  
			{  
				GameObject gameObj = hitInfo.collider.gameObject;  
				lookAtPos = hitInfo.point;  
				Debug.Log("click object name is " + gameObj.name + " , hit point " + lookAtPos.ToString() );  
			}  
			touchPosition = lookAtPos;
			//--------------------
			SetLerpTime ();
			currentNeedToWalkTransform.DOLookAt (touchPosition, 0.5f).OnComplete (() =>
			{
				keyHit = true;
				//float dis = CalCulate_Z_Axis_Distance (finger.ScreenPosition);
				//touchPosition = Camera.main.ScreenToWorldPoint(new Vector3(finger.ScreenPosition.x, finger.ScreenPosition.y,dis)); 
			});
		}
		void Update()
		{
			if (keyHit)
			{
				//(ModelManager._instance == null && !ModelManager._instance)
				if (currentNeedToWalkTransform == null || (ModelManager._instance.currentModelisMoving == false  && ModelManager._instance.offCardModelIsMoving == false))
				{
					keyHit = false;
					return;
				}
				if (Vector3.Distance (currentNeedToWalkTransform.position, touchPosition) >= 0.5f)
				{
					currentLerpTime += Time.deltaTime;
					if (currentLerpTime >= lerpTime)
					{
						currentLerpTime = lerpTime;
					}
					float perc = currentLerpTime / lerpTime;
					if (animator)
					{
						animator.Play("Take 002");
					}
					Vector3 pos1 = Vector3.Lerp (startPos, touchPosition, perc);
					currentNeedToWalkTransform.position = pos1;

					//currentNeedToWalkTransform.position = Vector3.Lerp (startPos, touchPosition, perc);
				} else
				{
					if (animator)
					{
						animator.Play("Take 001");	
					}
					touchPosition = Vector3.zero;
					startPos = currentNeedToWalkTransform.position;
					currentLerpTime = 0;
					keyHit = false;
					ModelManager._instance.currentModelisMoving = false;
					ModelManager._instance.offCardModelIsMoving = false;
				}
			}
		}
			
		void SetLerpTime()
		{
			float dis = Vector3.Distance (startPos, touchPosition);
			//13这个数字是测出来的，手机屏幕的对角线的长度为13；不过这只是特定一个手机的，不知道换手机有没有改变
			lerpTime = dis / 13.0f * baseLerpTime;
		}

		float CalCulate_Z_Axis_Distance(Vector2 fingerPos)
		{
			Vector2 screenCenter = new Vector2 (Screen.width/2, Screen.height/2);
			float distance =  Vector2.Distance (fingerPos, screenCenter);
			if (distance < 250)
				return zAxisDistance;
			if (distance < 500)
				return zAxisDistance + 2.5f;
			if (distance < 750)
				return zAxisDistance + 5.0f;
			if (distance < 1000)
				return zAxisDistance + 7.5f;
			if (distance < 1500)
				return zAxisDistance + 10.0f;
			return zAxisDistance;
		}

		ScreenTapZone GetTouchZone(Vector3 touchPos,Vector3 originPos)
		{
			if (touchPos.x > originPos.x)
			{
				if (touchPos.y > originPos.y)
					return ScreenTapZone.Screen_Upper_Right;
				else
					return ScreenTapZone.Screen_Down_Right;
			} else
			{
				if (touchPos.y > originPos.y)
					return ScreenTapZone.Screen_Upper_Left;
				else
					return ScreenTapZone.Screen_Down_Left;
			}
		}
	}
}