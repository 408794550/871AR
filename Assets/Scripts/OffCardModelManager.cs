using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class OffCardModelManager{

	//private  Dictionary<string,string> LanguageDic;
	public static Transform offCardModelTransform = null;
	private static OffCardModelManager _instance = null;

	// 单例
	public static OffCardModelManager Create()
	{
		if (_instance == null)
		{
			_instance = new OffCardModelManager();
			//_instance.Init();
		}
		return _instance;
	}
}
