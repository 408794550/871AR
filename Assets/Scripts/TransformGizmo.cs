using System;
using UnityEngine;
using System.Collections.Generic;
using System.Collections;
using DG.Tweening;

namespace RuntimeGizmos
{
	[RequireComponent(typeof(Camera))]
	public class TransformGizmo : MonoBehaviour
	{
		float allRotateSpeedMultiplier = 2f;
		public Transform target1;
		Transform target;
		Camera myCamera;
		static Material lineMaterial;

		Vector3 touchPosition = Vector3.zero;
		Vector3 startPos = Vector3.zero;
		Touch touch;

		private float baseLerpTime = 5.0f;
		private float lerpTime = 0.0f;
		private float currentLerpTime = 0.0f;

		void Awake()
		{
			myCamera = GetComponent<Camera>();
			//SetMaterial();
		}
		float yRot = -29.0f;
		void Update()
		{
			GetTarget();
			if (target == null)
			{
				if (!ModelManager._instance.isOffCard || ModelManager._instance.offCardModelTransform == null)
				{
					return;
				}
				if (Input.GetMouseButtonDown (0))
				{
					currentLerpTime = 0.0f;
					#if !UNITY_EDITOR
					touch = Input.GetTouch(0);
					#endif

					yRot += 50.0f; 
					//Debug.Log ("------------------11");
					startPos = ModelManager._instance.offCardModelTransform.position;
					#if !UNITY_EDITOR
					touchPosition = Camera.main.ScreenToWorldPoint(new Vector3(touch.position.x, touch.position.y, 20)); 
					#else	//使用鼠标的坐标，方便测试
					touchPosition = Camera.main.ScreenToWorldPoint (new Vector3 (Input.mousePosition.x, Input.mousePosition.y, 20));   
					#endif

					//CalculateAnglesFromTouch (touchPosition);

					SetLerpTime ();
					ModelManager._instance.offCardModelTransform.DOBlendableLocalRotateBy (new Vector3 (-29, -29, 8), 0f).OnComplete (OnComplete);
				}

				//Utility.leavetargetTF.DOLocalRotate (new Vector3(0,yRot,0), 1.0f).OnComplete(OnComplete);

				//Utility.leavetargetTF.localRotation = Quaternion.Euler (new Vector3(-29,yRot,8));
				//Utility.leavetargetTF.DOLocalRotate (new Vector3(-90,0,0), 1.0f).OnComplete(OnComplete);

				/*
					GameObject obj1 = new GameObject ();
					obj1.transform.localPosition = Utility.leavetargetTF.localPosition;
					obj1.transform.localRotation = Utility.leavetargetTF.localRotation;

					obj1.transform.DOLocalRotate(new Vector3(-29, -29,8),0f).OnComplete(() => {
						obj1.transform.DOLocalRotate (new Vector3(0,90,0), 0f,RotateMode.LocalAxisAdd).OnComplete(()=>{
							Utility.leavetargetTF.DOLocalRotate(obj1.transform.localRotation.eulerAngles,1);
							Debug.Log("----------");
						});
					});
					*/

				/*
//					Quaternion qua = Utility.leavetargetTF.localRotation;

					Vector3 targetPos = Utility.leavetargetTF.position;
					Vector3 screenTargetPos = myCamera.WorldToScreenPoint (targetPos);
					Debug.Log ("targetPos in screen-----++++++++" + screenTargetPos);
					Vector3 finalTouchPos = Vector3.zero;
					ScreenTapZone screenTapZone = GetTouchZone (touchPosition, screenTargetPos);
					float x = 0.0f;
					float y = 0.0f;
					x = Input.mousePosition.x - screenTargetPos.x;
					y = Input.mousePosition.y - screenTargetPos.y;

					Debug.Log ("--------"+Vector2.Angle(new Vector2(x,y),new Vector2(0,-1)));

//					if (x < 0)	x = -x;
//					if (y < 0)	y = -y;
					switch (screenTapZone)
					{
					case ScreenTapZone.Screen_Down_Left:
						x += screenTargetPos.x; 
						y += screenTargetPos.y;
						break;
					case ScreenTapZone.Screen_Down_Right:
						x -= screenTargetPos.x; 
						y += screenTargetPos.y;

						break;
					case ScreenTapZone.Screen_Upper_Left:
						x += screenTargetPos.x; 
						y -= screenTargetPos.y;

						break;
					case ScreenTapZone.Screen_Upper_Right:
						x -= screenTargetPos.x; 
						y -= screenTargetPos.y;

						break;
					}

					finalTouchPos = new Vector3 (x,y, 20);
					//Utility.leavetargetTF.DOLookAt (finalTouchPos,1f);
//					Utility.leavetargetTF.localRotation = new Quaternion (qua.w,qua.x,qua.y,qua.z);
					*/
				/*
				if (keyHit) 
				{
					Animator animator = Utility.offCardModelTransform.GetComponentInChildren<Animator> ();
					if (Vector3.Distance (Utility.offCardModelTransform.position, touchPosition) >= 0.5f)
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
						//Utility.offCardModelTransform.position = Vector3.Lerp (startPos, touchPosition, perc);
					} else
					{
						if (animator)
						{
							animator.Play("Take 001");				
						}
						touchPosition = Vector3.zero;
						startPos = Utility.offCardModelTransform.position;
						currentLerpTime = 0;
						keyHit = false;
					}
				}
				return;
			}
			*/
				//Debug.Log ("touch count ---" + Input.touchCount);
			if (ModelManager._instance.isOffCard)
					TransformSelected ();
			}
		}
		void OnComplete()
		{
			//Utility.offCardModelTransform.DOBlendableLocalRotateBy (new Vector3(0,90,0), 0.5f,RotateMode.LocalAxisAdd);

			//keyHit设置为true之后，才行走。
			//keyHit = true; 
			//Utility.leavetargetTF.DOLocalRotate (new Vector3(0,50,0), 1.0f,RotateMode.LocalAxisAdd);
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

		IEnumerator Rotate()
		{
			yield return null;
		}

		void TransformSelected()
		{
			if(Input.GetMouseButtonDown(0))
			{
				StartCoroutine(TransformSelect());
			}
		}
		
		IEnumerator TransformSelect()
		{
			Vector3 originalTargetPosition = target.position;
			Vector3 planeNormal = (transform.position - target.position).normalized;
			Vector3 axis = Vector3.one;
			Vector3 previousMousePosition = Vector3.zero;
			while(!Input.GetMouseButtonUp(0) && Input.touchCount == 1) // touchCount限制了只能触屏来触发这个事件，在Edtor中实现不了。
			{
				Ray mouseRay = myCamera.ScreenPointToRay(Input.mousePosition);
				Vector3 mousePosition = Geometry.LinePlaneIntersect(mouseRay.origin, mouseRay.direction, originalTargetPosition, planeNormal);

				if(previousMousePosition != Vector3.zero && mousePosition != Vector3.zero)
				{
					Vector3 rotation = transform.TransformDirection(new Vector3(Input.GetAxis("Mouse Y"), -Input.GetAxis("Mouse X"), 0));
					target.Rotate(rotation * allRotateSpeedMultiplier, Space.World);
					//transform.RotateAround(GetComponent<Renderer>().bounds.center,rotation , 30);
					//target.Rotate(GetComponent<Renderer>().bounds.center,180, Space.World);
				}
				previousMousePosition = mousePosition;
				yield return null;
			}
		}
	
		void GetTarget()
		{
			if(Input.GetMouseButtonDown(0))
			{
				RaycastHit hitInfo; 
				if(Physics.Raycast(myCamera.ScreenPointToRay(Input.mousePosition), out hitInfo))
				{
					target = hitInfo.transform.parent;
					//target = target1;
					Debug.Log ("---"+hitInfo.transform.parent.name);
				}else{
					target = null;
				}
			}
		}
		void SetLerpTime()
		{
			float dis = Vector3.Distance (startPos, touchPosition);
			//13这个数字是测出来的，手机屏幕的对角线的长度为13；不过这只是特定一个手机的，不知道换手机有没有改变
			lerpTime = dis / 13.0f * baseLerpTime;
		}

		void CalculateAnglesFromTouch(Vector3 touchPosition)
		{
			Vector3 tfScreenVec3 = myCamera.WorldToScreenPoint (touchPosition); 
			Vector2 tfScreenVec2 = new Vector2 (tfScreenVec3.x, tfScreenVec3.y);
			Debug.Log ("---------" + Vector2.Angle (new Vector2(-1,1), Vector2.down));



		}

	}
}