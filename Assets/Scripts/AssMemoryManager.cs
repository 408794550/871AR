using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using Vuforia;
using Lean.Touch;

public class AssMemoryManager : MonoBehaviour {


	public  int 							dicCount 				{	get { return goDictionary.Count; 	 }	}
	public  int 							cameraARModelDicCount 	{	get { return cameraARModelDic.Count; }  }
	// currentModelIndex 每次扫描都会增加1，并且会把当前值赋给target的modelIndex，最后target的modelIndex最小的将会被删除；
	private static System.UInt64 			currentModelIndex = 0;
	// goDictionary 用来管理加载了多少target模型
	private Dictionary<string,GameObject> 	goDictionary;
	// cameraARModelDic 用来管理脱卡类型的模型，这些模型脱卡后会成为摄像机的子物体，需要保存这些子物体，方便脱卡结束后归原位；
	private Dictionary<string,GameObject> 	cameraARModelDic;
	private static AssMemoryManager 		memoryManager;
	public 	static AssMemoryManager 		instance
	{
		get
		{ 
			if (!memoryManager) 
			{
				memoryManager = FindObjectOfType (typeof(AssMemoryManager)) as AssMemoryManager;
				if (!memoryManager) 
				{
					Debug.LogError ("there needs to be one active AssMemoryManager script one in your scene");
				} else 
				{
					memoryManager.Init ();
				}
			}
			return memoryManager;
		}
	}

	void Init()
	{
		if (goDictionary == null) 		{	goDictionary = new Dictionary<string, GameObject> (); 		}
		if (cameraARModelDic == null) 	{	cameraARModelDic = new Dictionary<string, GameObject> ();	}
	}

	public static void AddGOToMemoryManager(string goName,GameObject go)
	{
		GameObject thisGameObject;
		if (instance.goDictionary.TryGetValue (goName,out thisGameObject)) 
		{
			Utility.LogPrint ("add to memory manager ,there already had a same gameObjectName in the dictionary,needn't add it to memoryManager");
			return;
		} else 
		{
			instance.goDictionary.Add (goName, go);
		}
	}

	public static void RemoveGoFromMemoryManager()
	{
		string goName = instance.GetGameojectNameWithMinIndex ();
		if (goName.Equals ("")) 
		{
			Debug.LogError ("delete go fail,because the gameobjectName is nil");
			return;
		}

		GameObject thisGameObject;
		if (memoryManager == null)	{	return;	  }
		if (instance.goDictionary.TryGetValue (goName, out thisGameObject)) 
		{
			Debug.Log ("from dic found track object:"+thisGameObject.name);
			TrackableEventHandler dt = thisGameObject.GetComponent<TrackableEventHandler> ();
			if (dt != null) 
			{
				Debug.Log ("this gameobject has the defaulttrak.. scripts:");
				for (int i = 0; i < thisGameObject.transform.childCount; i++) 
				{
					Destroy (thisGameObject.transform.GetChild (i).gameObject);
					Debug.Log ("delete success");
				}
				//isModelLoaded置false，这样下次再found的时候就会从内存去加载。
				dt.isModelLoaded = false;
			} else 
			{
				Debug.LogError ("there isn't a defaultRrackableEventHandler in this gameobject");
			}
		}
	}
	//每次found方法执行的时候都会执行这个方法
	public static void UpdateModelIndex(string trackName)
	{
		currentModelIndex++;
		GameObject thisGO;
		if (instance.goDictionary.TryGetValue (trackName, out thisGO)) 
		{
			TrackableEventHandler dt = thisGO.GetComponent<TrackableEventHandler> ();
			dt.modelIndex = currentModelIndex;
			Debug.Log ("this model's index is updated to :" + currentModelIndex);
		} else 
		{
			//如果走了这里，肯定有模型漏掉了，代码逻辑一定有问题
			Debug.Log("Utility error,there is a gameobject has not save to dic ---" + trackName);
		}
	}
	public static string GetGameojectNameWithMaxIndex()
	{
		System.UInt64 max = 0;
		string goTrackableName = "";

		foreach (GameObject go in instance.goDictionary.Values) 
		{
			TrackableEventHandler dt = go.GetComponent<TrackableEventHandler> ();
			if (dt.modelIndex > max) 
			{
				max = dt.modelIndex;
				goTrackableName = dt.trackableName;
			}
		}		
		return goTrackableName;
	}
	//在加载的所有模型中，找到一个index最小的。如果有相同的最小的index，取第一次获取到的index的模型作为当前要取的gameobject
	private string GetGameojectNameWithMinIndex()
	{
		System.UInt64 min = 0;
		string goTrackableName = "";
		int i = 0;

		foreach (GameObject go in goDictionary.Values) 
		{
			TrackableEventHandler dt = go.GetComponent<TrackableEventHandler> ();
			if (min == 0 && i == 0) 
			{
				goTrackableName	= dt.trackableName;
				min = dt.modelIndex;
				i++;//保证这里只执行一次
				continue;
			}
			if (dt.modelIndex < min) 
			{
				min = dt.modelIndex;
				goTrackableName = dt.trackableName;
			}
		}		
		return goTrackableName;
	}
	/*
	/// <summary>
	/// Adds the model to camera.  这个方法在每次脱卡后执行，保存脱卡模型
	/// </summary>
	/// <param name="goName">Go name.</param>
	/// <param name="go">Go.</param>
	public static void AddModelToCamera(string goName,GameObject go)
	{
		GameObject thisGameObject;
		if (instance.cameraARModelDic.TryGetValue (goName,out thisGameObject)) 
		{
			Utility.LogPrint ("add  model to camrea fail, there already had a same gameObjectName in the dictionary,needn't add it to memoryManager");
			return;
		} else 
		{
			Debug.Log ("add model to camera success");
			instance.cameraARModelDic.Add (goName, go);
		}
	}
	/// <summary>
	/// Recoveries the model to target. 这个方法在最后脱卡结束后，把脱卡模型归位到原来的target
	/// </summary>
	/// <param name="modelName">Model name.</param>
	/// <param name="target">Target.</param>
	/// <param name="originPos">Origin position.</param>
	public static void RecoveryModelToTarget(string modelName,GameObject target,Vector3 originPos,Quaternion originQua)
	{
		GameObject thisGameObject;
		if (instance.cameraARModelDic.TryGetValue (modelName, out thisGameObject)) 
		{
			//			thisGameObject.transform.position = originPos;
			//			thisGameObject.transform.rotation = originQua;
			thisGameObject.transform.parent = target.transform;
			thisGameObject.transform.localPosition = originPos;
			thisGameObject.transform.localRotation = originQua;
			Debug.Log ("recovery model to target success---");
			instance.cameraARModelDic.Remove (modelName);
			//Utility.HideRendererAndCollider (thisGameObject.transform);
			thisGameObject.SetActive(false);
		} else 
		{
			Debug.Log ("the dic not have a target with name :"+modelName);
		}
	}	
	*/

}
