using UnityEngine;
using System.Collections;
using Vuforia;
using System.Collections.Generic;
using UnityEngine.UI;
using System.Runtime.Serialization.Formatters.Binary;
using System;

public class Utility : MonoBehaviour {
	
	//Unity回调移动端的方法

	/*
	 * 每次移动端调用方法之后，最后Unity都得调用UnityCallBack（）通知移动端调用函数的状态，
	 * 有哪些信息是要回传给移动端的 
	 */

	//这里的属性使用单例来管理比较方便，有时间做做修改
	public static bool isDebug = false;

	private static void SendMessageToMobile(LitJson.JsonData data)
	{
		Utility.LogPrint (data.ToString ());
		switch (Application.platform) 
		{
		case RuntimePlatform.Android:
			AndroidJavaClass jc = new AndroidJavaClass ("com.unity3d.player.UnityPlayer");
			AndroidJavaObject jo = jc.GetStatic<AndroidJavaObject> ("currentActivity");
			if (data.ToJson () != "") 
			{
				jo.Call ("UnityCallBack", data.ToJson ());
			}
			break;
		case RuntimePlatform.IPhonePlayer:
		#if UNITY_IPHONE		
		InteractInterface.UnityCallBack (data.ToJson ());
		#endif
			break;
		default:
			break;
		}
	}
		
	public static string GetDataSetName (DataSet ds)
	{
		string datasetPath = ds.Path;
		string datasetName = datasetPath.Substring (datasetPath.LastIndexOf ("/") + 1);
		string datasetName2 = datasetName.TrimEnd (".xml".ToCharArray ());
		return datasetName2.ToLower ();//使用小写形式，因为trackablename属性返回的是小写形式
	}

	public static void LogPrint(string logStr)
	{
		//if (isDebug)
		//{
			Debug.Log ("Debug Print--" + logStr);
		//}
	}

	public static void PrepareForSendMessage(string methodName)
	{
		if (!isDebug)
		{
			LitJson.JsonData data = new LitJson.JsonData ();
			data ["Method"] = methodName;
			Utility.SendMessageToMobile (data);
		}
	}
	public static void PrepareForSendMessage(string methodName, string status)
	{
		if (!isDebug)
		{
			LitJson.JsonData data = new LitJson.JsonData ();
			data ["Method"] = methodName;
			data ["Status"] = status;
			Utility.SendMessageToMobile (data);
		}
		//test
		if (methodName.Equals ("FoundTarget"))
		{
			if (status.Equals ("0"))
			{
				Utility.LogPrint ("null model");
			}
			if (status.Equals ("1"))
			{
				Utility.LogPrint ("has model");
			}
		}
	}
	public static void PrepareForSendMessage(string methodName, string status,string errorTips)
	{
		if (!isDebug) 
		{
			LitJson.JsonData data = new LitJson.JsonData ();
			data ["Method"] = methodName;
			data ["Status"] = status;
			data ["ErrorTips"] = errorTips;
			Utility.SendMessageToMobile (data);
		}
	}
	public static void PrepareForSendMessage(string methodName, string status,LitJson.JsonData json)
	{
		if (!isDebug) 
		{
			LitJson.JsonData data = new LitJson.JsonData ();
			data ["Method"] = methodName;
			data ["Status"] = status;
			data ["target"] = json.ToJson ();
			Utility.SendMessageToMobile (data);
		}
	}
	public static void PrepareForSendMessage(string methodName, string status,string path,bool isVideo)
	{
		if (!isDebug) 
		{
			LitJson.JsonData data = new LitJson.JsonData ();
			data ["Method"] = methodName;
			data ["Status"] = status;
			if (isVideo) 
			{
				data ["VideoPath"] = path;
			} else 
			{
				data ["ImagePath"] = path;
			}
			Utility.SendMessageToMobile (data);
		}
	}
	//这个方法用来判断移动端传过来的
	public static bool CheckJson(LitJson.JsonData data,List<string> keyList)
	{
		IDictionary dic = (IDictionary)data;
		foreach (string keyStr in keyList)
		{
			bool isMatch = false;
			foreach (string jsonStrKey in dic.Keys)
			{
				if (jsonStrKey.Equals (keyStr))
				{
					isMatch = true;
				}
			}
			if (!isMatch) 
			{
				Utility.PrepareForSendMessage ("LoadDataSet", "1", "JSON analysis error,please check whether JSON format is correct");
				return false;
			}
		}
		return true;
	}


	public static void ShowRendererAndCollider(Transform tf)
	{
		Collider cl = tf.GetComponent<Collider> ();
		if (cl)
		{
			cl.enabled = true;
		}
		Collider[] colliders = tf.GetComponentsInChildren<Collider> (true);
		Renderer[] renderers = tf.GetComponentsInChildren<Renderer> (true);

		foreach (Renderer renderer in renderers) 
		{
			renderer.enabled = true;
		}
		foreach (Collider collider in colliders) 
		{
			collider.enabled = true;
		}	
	}
	public static void HideRendererAndCollider(Transform tf)
	{
		Collider[] colliders = tf.GetComponentsInChildren<Collider> (true);
		Renderer[] renderers = tf.GetComponentsInChildren<Renderer> (true);

		foreach (Renderer renderer in renderers) 
		{
			renderer.enabled = false;
		}
		foreach (Collider collider in colliders) 
		{
			collider.enabled = false;
		}	
	}
	public static Vector3 ModelReturnToWorldScreenCenter()
	{
		Vector3 position = new Vector3 (Screen.width/2, Screen.height/2, ModelManager._instance.zAxisDis); 
		position = Camera.main.ScreenToWorldPoint (position);
		return position;
	}
	public static string GetTimeStamp()
	{
		TimeSpan ts = DateTime.UtcNow - new DateTime(1970, 1, 1, 0, 0, 0, 0);  
		return Convert.ToInt64(ts.TotalSeconds).ToString();  
	}

}
