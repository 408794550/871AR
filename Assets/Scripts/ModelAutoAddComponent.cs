using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Lean.Touch;

public class ModelAutoAddComponent : MonoBehaviour {

	// Use this for initialization
	void Start () {
		
	}
	#if UNITY_EDITOR
	protected virtual void Reset()
	{
		gameObject.AddComponent<LeanSelectable> ();
		gameObject.AddComponent<ModelSelfManager> ();
		gameObject.AddComponent<LeanScale> ().RequiredFingerCount = 2;
		gameObject.AddComponent<LeanTranslate> ().RequiredFingerCount = 2;
		gameObject.AddComponent<CapsuleCollider> ().height = 7.0f;
		gameObject.GetComponent<CapsuleCollider> ().radius = 1.5f;

		Animator animator = gameObject.GetComponent<Animator> ();
		AnimatorTransitionInfo animatorTransitionInfo = animator.GetAnimatorTransitionInfo (0);


	}
	#endif
}
