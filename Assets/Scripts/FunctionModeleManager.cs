using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FunctionModeleManager : MonoBehaviour {

	[SerializeField]
	private bool offCard;
	public 	bool OffCard	{	get{	return offCard;		}	}
	[SerializeField]
	private bool rotation;
	public 	bool Rotation	{	get{	return rotation;	}	}
//	[SerializeField]
//	private bool tapModel;
//	public 	bool TapModel	{	get{	return tapModel;	}	}
	[SerializeField]
	private bool tapWalk;
	public 	bool TapWalk	{	get{	return tapWalk;		}	}
//	[SerializeField]
//	private bool scale;
//	public 	bool Scale		{	get{	return scale;		}	}
//	[SerializeField]
//	private bool translate;
//	public 	bool Translate	{	get{	return translate;	}	}

	private static FunctionModeleManager _instance;
	public static FunctionModeleManager Instance 
	{
		get 
		{
			// 不需要再检查变量是否为null
			return _instance;
		}
	}
	void Awake()
	{
		_instance = this;
	}
}
