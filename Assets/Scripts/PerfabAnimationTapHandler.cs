/*===============================================================================
Copyright (c) 2015-2016 PTC Inc. All Rights Reserved.
 
Copyright (c) 2015 Qualcomm Connected Experiences, Inc. All Rights Reserved.
 
Vuforia is a trademark of PTC Inc., registered in the United States and other 
countries.
===============================================================================*/
using UnityEngine;
using System.Collections;

public class PerfabAnimationTapHandler : MonoBehaviour
{
	#region PRIVATE_MEMBERS
	private const float DOUBLE_TAP_MAX_DELAY = 0.05f; //0.5f;//seconds
	private float mTimeSinceLastTap = 0;
	//    private MenuAnimator mMenuAnim = null;
	public ParticleSystem particle;
	Animator animator;
	private bool isAnimatorLoaded = false;
	#endregion //PRIVATE_MEMBERS

	#region PROTECTED_MEMBERS
	protected int mTapCount = 0;
	#endregion //PROTECTED_MEMBERS

	public GameObject nextARObject;
	public string modelType;
	public bool hasMask = false;

	#region MONOBEHAVIOUR_METHODS
	void Start() 
	{
		mTapCount = 0;
		mTimeSinceLastTap = 0;
	}

	void Update() 
	{
		//HandleTap();
	}

	void OnMouseUp()
	{
		if (this.isActiveAndEnabled)
		{
			OnSingleTap();
		}
	}
	#endregion //MONOBEHAVIOUR_METHODS


	#region PRIVATE_METHODS
	private void HandleTap()
	{
		if (mTapCount == 1)
		{
			mTimeSinceLastTap += Time.deltaTime;
			if (mTimeSinceLastTap > DOUBLE_TAP_MAX_DELAY)
			{
				// too late for double tap, 
				// we confirm it was a single tap
				OnSingleTapConfirmed();
				// reset touch count and timer
				mTapCount = 0;
				mTimeSinceLastTap = 0;
			}
			mTapCount = 0;
			mTimeSinceLastTap = 0;
		}
		else if (mTapCount == 2)
		{
			// we got a double tap
			OnDoubleTap();
			// reset touch count and timer
			mTimeSinceLastTap = 0;
			mTapCount = 0;
		}
	}
	#endregion // PRIVATE_METHODS


	#region PROTECTED_METHODS
	/// <summary>
	/// This method can be overridden by custom (derived) TapHandler implementations,
	/// to perform special actions upon single tap.
	/// </summary>
	protected virtual void OnSingleTap() 
	{
		if (modelType.Equals ("Animator")) 
		{
			if (!isAnimatorLoaded) 
			{
				Debug.Log ("PerfabAnimationTapHandler isAnimatorLoaded load Animator");
				animator = this.gameObject.GetComponent<Animator> ();
			
				if (animator != null) 
				{
					isAnimatorLoaded = true;
					Debug.Log ("PerfabAnimationTapHandler isAnimatorLoaded Animator load success");
				}
			}
			AnimatorStateInfo stateinfo = animator.GetCurrentAnimatorStateInfo(0);

			if (animator != null && !stateinfo.IsName ("Base Layer.Take002")) 
			{
				//animator.Play ();
				//animator.Play ("Take002");
				animator.SetTrigger ("Animation");
				Debug.Log (this.gameObject.name + " " + "animation");
				ParticleSystem ps = GetTypeParticle (transform,"Tap_Particle");
				if (ps)
				{
					ps.Play ();
				}
			} else 
			{
				Debug.Log ("animation error");
			}
		}

		AudioSource audioSource = this.gameObject.GetComponentInChildren<AudioSource> (true);
		if (audioSource) 
		{
			audioSource.Play ();
		}

		//------------------MiTu test eat apple
		if (modelType.Equals ("MultiPart"))
		{
			PerfabAnimationTapHandler animationTap = this.gameObject.GetComponent<PerfabAnimationTapHandler> ();
			if (animationTap) 
			{
				animationTap.enabled = false;
				Debug.Log ("tap disable success;");
			}
			// Disable rendering:
			Utility.HideRendererAndCollider (this.transform);

			if (nextARObject) 
			{
				PerfabAnimationTapHandler animationTap1 = nextARObject.GetComponentInChildren<PerfabAnimationTapHandler> (true);
				if (animationTap1) 
				{
					animationTap1.enabled = true;
					Debug.Log ("tap enable success;");
				}
				//show nextgameobject render and collider
				Utility.ShowRendererAndCollider (nextARObject.transform);
			} else 
			{
				Utility.LogPrint ("go not exist" + this.gameObject.name);
			}
		}
		//------------------
		Debug.Log (this.gameObject.name + " " + "taped");
	}

	protected virtual void OnSingleTapConfirmed()
	{
		
	}

	protected virtual void OnDoubleTap()
	{

	}
	#endregion // PROTECTED_METHODS
	ParticleSystem GetTypeParticle(Transform tf,string particleType)
	{
		ParticleSystem []pss = tf.GetComponentsInChildren<ParticleSystem> (true);
		foreach (ParticleSystem ps in pss) 
		{
			if (ps.name.Equals (particleType)) 
			{
				return ps;
			}
		}
		return null;
	}
	void AnimationEnd()
	{
		ParticleSystem ps = GetTypeParticle (transform,"Tap_Particle");
		if (ps)
		{
			ps.Stop ();
		}
		else 
		{
			Debug.Log ("animation error");
		}
	}
}
