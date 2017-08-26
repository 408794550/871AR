using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TouchToMove : MonoBehaviour 
{
	Vector3 touchPosition = Vector3.zero;
	Vector3 startPos = Vector3.zero;
	Touch touch;

	private float baseLerpTime = 5.0f;
	private float lerpTime = 0.0f;
	private float currentLerpTime = 0.0f;
	private bool keyHit = false;
	// Use this for initialization
	void Start () 
	{
		//startPos = transform.position;
	}
	
	// Update is called once per frame
	void Update () 
	{
		if (!ModelManager._instance.isOffCard || ModelManager._instance.offCardModelTransform == null)
		{
			return;
		}
		if (Input.GetMouseButtonDown(0)) 
		{
			currentLerpTime = 0.0f;
			#if !UNITY_EDITOR
			touch = Input.GetTouch(0);
			#endif

			startPos = ModelManager._instance.offCardModelTransform.position;
			#if !UNITY_EDITOR
			touchPosition = Camera.main.ScreenToWorldPoint(new Vector3(touch.position.x, touch.position.y, 20)); 
			#else	//使用鼠标的坐标，方便测试
			touchPosition = Camera.main.ScreenToWorldPoint(new Vector3(Input.mousePosition.x, Input.mousePosition.y, 20));   
			#endif
			SetLerpTime ();
			keyHit = true;
		}

		if (keyHit) 
		{
			Animator animator = ModelManager._instance.offCardModelTransform.GetComponentInChildren<Animator> ();
			if (Vector3.Distance (ModelManager._instance.offCardModelTransform.position, touchPosition) >= 0.5)
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

				ModelManager._instance.offCardModelTransform.position = Vector3.Lerp (startPos, touchPosition, perc);
			} else
			{
				if (animator)
				{
					animator.Play("Take 001");				
				}
				touchPosition = Vector3.zero;
				startPos = ModelManager._instance.offCardModelTransform.position;
				currentLerpTime = 0;
				keyHit = false;
			}
		}
	}

	void SetLerpTime()
	{
		float dis = Vector3.Distance (startPos, touchPosition);
		//13这个数字是测出来的，手机屏幕的对角线的长度为13；不过这只是特定一个手机的，不知道换手机有没有改变
		lerpTime = dis / 13.0f * baseLerpTime;
	}

}
