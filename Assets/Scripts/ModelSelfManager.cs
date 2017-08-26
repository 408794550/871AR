using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Lean.Touch;
using DG.Tweening;
using UnityEngine.Events;

public enum ModelOffCardHeightEnum
{
	one_eighth,
	two_eighth,
	three_eighth,
	four_eighth
};

public class ModelSelfManager : MonoBehaviour {

	public 	ModelOffCardHeightEnum 		modelOnScreenHeight 	= ModelOffCardHeightEnum.four_eighth;
	private Animator 				animator;
	private List<AudioSource> 		foundAudioSourceList	= new List<AudioSource> ();
	private List<AudioSource>		tapAudioSourceList		= new List<AudioSource> ();
	private List<ParticleSystem> 	foundPSList 			= new List<ParticleSystem> ();
	private List<ParticleSystem> 	tapPSList				= new List<ParticleSystem> ();
	private Vector3 				touchPosition			= Vector3.zero;
	private Vector3 				startPos 	  			= Vector3.zero;
	private float   				baseLerpTime 			= 5.0f;
	private float   				lerpTime 				= 0.0f;
	private float   				currentLerpTime 		= 0.0f;
	private bool    				keyHit 					= false;
	private bool 					isFirst					= false;
	//模型初始状态相关的一些变量
	[HideInInspector]	
	public Vector3 					modelOriginLocalPos;
	[HideInInspector]
	public Quaternion				modelOriginLocalQua;
	[HideInInspector]
	public Vector3 					modelOriginScale;
	private ParticleTransformInfo   particleTransformInfo;
	private UnityAction 			foundListener;
		
	void Awake()
	{
		//这里记录初始位置，便于以后各种手势之后可以恢复原来的状态。
//		modelOriginLocalPos = transform.localPosition;
//		modelOriginLocalQua = transform.localRotation;
//		modelOriginScale 	= transform.localScale;
	}
	//在found识别图之后，模型SetActive（True），将会执行这里，从而可以在这里触发一些粒子效果和音效等。
	void OnEnable()
	{
		keyHit = false;
		if (foundListener != null)
		{
			EventManager.StartListening ("Found", foundListener);
		}
		foreach (ParticleSystem ps in foundPSList)
		{
			if(!ps.isPlaying)
				ps.Play ();
		}
		if (animator) 		{	animator.Play ("Take 001");  }
		//模型回到初始位置
		if (isFirst)
		{
			transform.localPosition = modelOriginLocalPos;
			transform.localRotation = modelOriginLocalQua;
			transform.localScale = modelOriginScale;
			return;
		}
		isFirst = !isFirst;
	}

	void OnDisable()
	{
		EventManager.StopListening ("Found",foundListener);
		//如果此时模型在运动中，会自动终止行走，也就应该重置与行走相关的变量
		touchPosition = Vector3.zero;
		startPos = transform.position;
		currentLerpTime = 0;		
	}
	#if UNITY_EDITOR
	protected virtual void Reset()
	{
		if (animator == null)
		{
			animator = GetComponent<Animator>();
		}
	}
	#endif
	void Start()
	{
		//因为在发现多个模型之后，只播放最后一个出现的模型的音效，所以，当有新的模型出现时，需要监听关闭音效的事件
		foundListener = new UnityAction (StopAudioSource);
		if (animator == null)	 
		{ 
			animator 		  = GetComponent<Animator> ();
		}
		particleTransformInfo = GetComponent<ParticleTransformInfo> ();
		if (particleTransformInfo)
		{
			foreach (GameObject go in particleTransformInfo.particleSystemObj)
			{
				ParticleSystem[] pss = go.GetComponentsInChildren<ParticleSystem> (true);
				foreach (ParticleSystem ps in pss)
				{
					if (ps.name.ToLower ().Equals ("found_particle"))
					{
						foundPSList.Add (ps); 
						AudioSource[] ass = ps.transform.GetComponentsInChildren<AudioSource> ();
						foreach (AudioSource audiosource in ass)
						{
							foundAudioSourceList.Add (audiosource);
							Utility.LogPrint ("found audioSource");
						}
					}
					if (ps.name.ToLower ().Equals ("tap_particle"))
					{	
						tapPSList.Add (ps);
						AudioSource[] ass = ps.transform.GetComponentsInChildren<AudioSource> ();
						foreach (AudioSource audiosource in ass)
						{
							tapAudioSourceList.Add (audiosource);
							Utility.LogPrint ("tap audioSource");
						}
					}
				}
			}
		}
	}
	public void HandleTapEvent()
	{
		//shadowTransform.gameObject.SetActive (true);
		keyHit = false;
		if (foundAudioSourceList != null)
		{
			foreach (AudioSource audiosource in foundAudioSourceList)
			{
				if (audiosource.isPlaying)
				{
					audiosource.Stop ();
				}
				audiosource.SetScheduledStartTime (0.0f);
			}
		}

		if (animator  && !animator.GetCurrentAnimatorStateInfo(0).IsName ("Take 003")) 
		{	
			animator.Play ("Take 003"); 
			foreach (ParticleSystem ps in tapPSList)	
			{ 
				if (!ps.isPlaying)
				{
					ps.Play (); 
				}
			}		
		}
		//如果有音乐，可以也在这里加上
	}
	void StopAudioSource()
	{
		if (foundAudioSourceList != null)
		{
			foreach (AudioSource audiosource in foundAudioSourceList)
			{
				if (audiosource.isPlaying)
				{
					audiosource.Stop ();
				}
				audiosource.SetScheduledStartTime (0.0f);
			}	
		}
		if (tapAudioSourceList != null)
		{
			foreach (AudioSource audiosource in tapAudioSourceList)
			{
				if (audiosource.isPlaying)
				{
					audiosource.Stop ();
				}
				audiosource.SetScheduledStartTime (0.0f);
			}		
		}
	}
	public void HandleTapWalkEvent(LeanFinger finger)
	{
		foreach (ParticleSystem ps in tapPSList)	
		{ 
			ps.Stop (); 
		}	
		currentLerpTime = 0.0f;
		startPos = transform.position;
		Ray ray = ModelManager._instance.isOffCard ? ModelManager._instance.offCardCamera.ScreenPointToRay(finger.ScreenPosition) : Camera.main.ScreenPointToRay(finger.ScreenPosition);
		RaycastHit hitInfo;  
		if (Physics.Raycast(ray, out hitInfo , 100))  
		{  
			GameObject gameObj = hitInfo.collider.gameObject;  
			touchPosition = hitInfo.point;  
			Utility.LogPrint("click object name is " + gameObj.name + " , hit point " + touchPosition.ToString() );  
		}
		if (touchPosition == Vector3.zero) { return; }
		//--------------------
		lerpTime = Vector3.Distance (startPos, touchPosition) / 18f * baseLerpTime;
		transform.DOLookAt (touchPosition, 0.5f).OnComplete (() =>
		{
			keyHit = true;
		});
	}
	public void StopAnimatorAndParticle()
	{
		if (tapPSList != null)
		{
			foreach (ParticleSystem ps in tapPSList)
			{ 
				ps.Stop (); 
			}	
		}
		if (animator)
		{
			animator.Play ("Take 001");
		}
	}
	void Update()
	{
		if (keyHit)
		{
			if (ModelManager._instance.currentModelisMoving == false  && ModelManager._instance.offCardModelIsMoving == false)
			{
				keyHit = false;
				return;
			}

			if (Vector3.Distance (transform.position, touchPosition) >= 0.5f)
			{
				currentLerpTime += Time.deltaTime;
				if (currentLerpTime >= lerpTime)
				{
					currentLerpTime = lerpTime;
				}
				float perc = currentLerpTime / lerpTime;
				if (!animator.GetCurrentAnimatorStateInfo(0).IsName ("Base Layer.Take 002"))
				{
					animator.Play("Take 002");
				}
				//animator.SetTrigger("Take002_Trigger");
				transform.position = Vector3.Lerp (startPos, touchPosition, perc);
			} else
			{
				if (animator)
				{
					animator.Play("Take 001");	
				}
				touchPosition = Vector3.zero;
				startPos = transform.position;
				currentLerpTime = 0;
				keyHit = false;
				ModelManager._instance.currentModelisMoving = false;
				ModelManager._instance.offCardModelIsMoving = false;
			}
		}	
	}

}
