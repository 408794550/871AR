using UnityEngine;
using UnityEngine.Events;

namespace Lean.Touch
{
	// This script calls the OnFingerTap event when a finger taps the screen
	public class LeanFingerTap : MonoBehaviour
	{
		// Event signature
		//[System.Serializable] public class LeanFingerEvent : UnityEvent<LeanFinger> {}

		[Tooltip("Ignore fingers with StartedOverGui?")]
		public bool IgnoreGuiFingers = true;

		[Tooltip("How many times must this finger tap before OnFingerTap gets called? (0 = every time)")]
		public int RequiredTapCount = 0;

		[Tooltip("How many times repeating must this finger tap before OnFingerTap gets called? (e.g. 2 = 2, 4, 6, 8, etc) (0 = every time)")]
		public int RequiredTapInterval;

		[Tooltip("Does scaling require an object to be selected?")]
		public LeanSelectable RequiredSelectable;

		#region MODELINFO_MEMBERS
		Animator animator;
		private bool isAnimatorLoaded = false;
		public GameObject nextARObject;
		public string modelType;
		public bool hasMask = false;
		#endregion
		//public LeanFingerEvent OnFingerTap;

		public void HandleTap()
		{
			//EventManager.TriggerEvent (transform.name);

			//return;
			if (modelType.Equals ("Animator")) 
			{
				if (!isAnimatorLoaded) 
				{
					Debug.Log ("LeanFingerTap isAnimatorLoaded load Animator");
					animator = this.gameObject.GetComponent<Animator> ();

					if (animator != null) 
					{
						isAnimatorLoaded = true;
						Debug.Log ("LeanFingerTap isAnimatorLoaded Animator load success");
					}
				}
				AnimatorStateInfo stateinfo = animator.GetCurrentAnimatorStateInfo(0);

				if (animator != null && !stateinfo.IsName ("Base Layer.Take003")) 
				{
					//animator.Play ();
					//animator.Play ("Take002");
					//animator.SetTrigger ("Animation");
					animator.Play("Take 003");
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
				LeanFingerTap fingerTap = this.gameObject.GetComponent<LeanFingerTap> ();
				if (fingerTap) 
				{
					fingerTap.enabled = false;
					Debug.Log ("tap disable success;");
				}
				// Disable rendering:
				Utility.HideRendererAndCollider (this.transform);

				if (nextARObject) 
				{
					LeanFingerTap nextObjFingerTap = nextARObject.GetComponentInChildren<LeanFingerTap> (true);
					if (nextObjFingerTap) 
					{
						nextObjFingerTap.enabled = true;
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
		#if UNITY_EDITOR
		protected virtual void Reset()
		{
			if (RequiredSelectable == null)
			{
				RequiredSelectable = GetComponent<LeanSelectable>();
			}
		}
		#endif
	}
}