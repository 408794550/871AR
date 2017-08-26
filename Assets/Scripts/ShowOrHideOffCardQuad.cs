using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;

public class ShowOrHideOffCardQuad : MonoBehaviour {
	private UnityAction offCardListener;
	private UnityAction recoveryModelListener;
	private Collider quadCollider;
	// Use this for initialization
	void Start () {
		quadCollider = GetComponent<MeshCollider> ();
		offCardListener = new UnityAction(OffCard);
		recoveryModelListener = new UnityAction (RecoveryModelToTarget);
		EventManager.StartListening ("OffCard", offCardListener);
		EventManager.StartListening ("RecoveryModelToTarget", recoveryModelListener);
	}

	void OffCard()
	{
		if (ModelManager._instance.isOffCard && quadCollider)
		{
			quadCollider.enabled = false;
		}
	}
	void RecoveryModelToTarget()
	{
		if (!ModelManager._instance.isOffCard && quadCollider)
		{
			quadCollider.enabled = true;
		}
	}

}
