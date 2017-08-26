using UnityEngine;
using DG.Tweening;

namespace Lean.Touch
{
	// This script allows you to select LeanSelectable components while a finger is down
	public class LeanPressSelect : LeanSelect
	{
		[Tooltip("Ignore fingers with StartedOverGui?")]
		public bool IgnoreGuiFingers = true;
		private float pressTime = 0.0f;

		#region 点击行走功能的变量
		public Transform walkQuadTransform;
		Vector3 touchPosition = Vector3.zero;
		Vector3 startPos = Vector3.zero;
		private float baseLerpTime = 5.0f;
		private float lerpTime = 0.0f;
		private float currentLerpTime = 0.0f;
		private bool keyHit = false;
		Animator animator;
		AnimatorStateInfo animatorStateInfo;
		private Transform currentNeedToWalkTransform;
		UnityEngine.Touch touch;
		private GameObject offCardQuad;
		#endregion

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
			pressTime = Time.time - pressTime;//这里计算了手指从按下到抬起的时间差，如果小于0.2s，则认为是点击，否则是长按
			if (pressTime <= 0.2f)
			{
				if (offCardQuad == null)
				{
					offCardQuad = GameObject.CreatePrimitive (PrimitiveType.Quad);  
					offCardQuad.name = "WalkQuad";
					offCardQuad.transform.localScale = new Vector3 (2000, 2000, 1);
					offCardQuad.transform.rotation = Quaternion.Euler (new Vector3(88,0,0));
					Destroy (offCardQuad.GetComponent<MeshRenderer> ());
				}
				if (ModelManager._instance.isOffCard)
				{
					ModelManager._instance.offCardQuad.SetActive (true);
				} else
				{
					ModelManager._instance.offCardQuad.SetActive (false);
				}
				Ray ray = Camera.main.ScreenPointToRay (finger.ScreenPosition);  //摄像机需要设置MainCamera的Tag这里才能找到  
				RaycastHit hitInfo;  
				if (Physics.Raycast (ray, out hitInfo, 100))
				{  
					GameObject gameObj = hitInfo.collider.gameObject;  
					if (CurrentSelectable && gameObj.name.Equals (CurrentSelectable.name))
					{
						//这里相当于点击中了物体，可以在这里播放动画
						ModelSelfManager modelselfManager = CurrentSelectable.transform.GetComponent<ModelSelfManager> ();
						if(modelselfManager)
						{
							modelselfManager.HandleTapEvent();
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
					Debug.Log ("++++++" + gameObj.name);
					//return;
					//没有点中物体，看是否点击了平面，点击了平面就是行走动画了。
					if (gameObj.name.Equals ("Quad") || gameObj.name.Equals ("WalkQuad"))
					{
						if (ModelManager._instance.isOffCard && ModelManager._instance.offCardModelTransform)
						{
							ModelSelfManager modelselfManager = ModelManager._instance.offCardModelTransform.GetComponent<ModelSelfManager> ();
							if(modelselfManager)
							{
								//ModelManager._instance.offCardModelIsMoving = true;
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
									//ModelManager._instance.currentModelisMoving = true;
									modelselfManager.HandleTapWalkEvent(finger);
								}
							}
						}
					}
				} else
				{
					//没有碰到任何东西，直接忽略
					Debug.Log ("touch nothing");
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

		//----------------------------
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
			animator = currentNeedToWalkTransform.GetComponent<Animator> ();
			animatorStateInfo = animator.GetCurrentAnimatorStateInfo (0);
			offCardQuad.transform.rotation = Quaternion.Euler (new Vector3(88,0,0));
			float yDis = currentNeedToWalkTransform.position.y;
			offCardQuad.transform.position = new Vector3 (0, yDis, 0);
			currentLerpTime = 0.0f;
			startPos = currentNeedToWalkTransform.position;

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
			});
		}
		void SetLerpTime()
		{
			float dis = Vector3.Distance (startPos, touchPosition);
			//13这个数字是测出来的，手机屏幕的对角线的长度为13；不过这只是特定一个手机的，不知道换手机有没有改变
			lerpTime = dis / 18f * baseLerpTime;
		}
		void Update()
		{
			if (keyHit)
			{
				//(Utility.currentRotationTransform == null && !Utility.isOffCard)
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
					if (!animatorStateInfo.IsName ("Base Layer.Take 002"))
					{
						animator.Play("Take 002");
					}
					//animator.SetTrigger("Take002_Trigger");
					currentNeedToWalkTransform.position = Vector3.Lerp (startPos, touchPosition, perc);
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
	}
}