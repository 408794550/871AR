using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Runtime.InteropServices;
using System.IO;
using System.Runtime.Serialization.Formatters.Binary;
using Vuforia;

public class InteractInterface : MonoBehaviour {

	void Start () 
	{
		//Debug.LogError (Application.persistentDataPath+"create");
		CreatePlatformPath ();
	}
	//Unity回调移动端的方法

	/*
	 * 每次移动端调用方法之后，最后Unity都得调用UnityCallBack（）通知移动端调用函数的状态，
	 * 有哪些信息是要回传给移动端的 
	 */
	#if UNITY_IPHONE		
	[DllImport("__Internal")]
	public static extern void UnityCallBack(string json);
	#endif
	//移动端请求执行Unity方法
	public static void InteractionInterfaceMethod(string methodArgumentsJSON)
	{
		//解析JSON字符串
		//读取json文件 (这里测试本地读取json文件，实际使用时是从参数methodArgumentsJSON中获取)
//		string path = Application.dataPath + "/Resources/LoadDataSetJSON.json";
//		if (!File.Exists (path)) {
//			Debug.Log ("file not exists");
//			return;
//		}
//		StreamReader sr = new StreamReader (path);
//		if (sr == null) {
//			Debug.Log ("file not exists");
//			return;
//		}
//		string json = sr.ReadToEnd ();
//
	
  // Litjson读取json字符串并可以以键值对的形式访问
			//没有解决的问题，当键值对不存在时，不知道是否程序会崩溃
		LitJson.JsonData data = LitJson.JsonMapper.ToObject (methodArgumentsJSON);

		string callMethod = (string)data ["Method"];
		//EventManager.TriggerEvent (callMethod, data);
	}


	void CreatePlatformPath()
	{
		string platformPath = "";
		if (Application.platform == RuntimePlatform.Android || Application.platform == RuntimePlatform.IPhonePlayer) 
		{
			platformPath = Path.Combine (Application.persistentDataPath,"DataSets");
			if (!Directory.Exists (platformPath))
			{
				Directory.CreateDirectory (platformPath);
			}
			platformPath = Path.Combine (Application.persistentDataPath,"AssetsBundles");
			if(!Directory.Exists(platformPath))
			{
				Directory.CreateDirectory(platformPath);
			}
			platformPath = Path.Combine (Application.persistentDataPath,"ScreenShots");
			if(!Directory.Exists(platformPath))
			{
				Directory.CreateDirectory(platformPath);
			}
			platformPath = Path.Combine (Application.persistentDataPath,"ScreenCaps");
			if(!Directory.Exists(platformPath))
			{
				Directory.CreateDirectory(platformPath);
			}
		}
	}
	public void ShotBtnClicked ()
	{
		string json = "{'Method': 'ScreenShot','DataSetName': 'Tarmac','TestNull':''}";
		InteractInterface.InteractionInterfaceMethod (json);
	}
	public void LoadBtnClicked()
	{
		string json = "{'Method': 'LoadDataSet','DataSetName': 'Tarmac','TestNull':''}";
		InteractInterface.InteractionInterfaceMethod (json);
	}
	public void StartCapBtnClicked()
	{
		string json = "{'Method': 'StartScreenCap','DataSetName': 'Tarmac','TestNull':''}";
		InteractInterface.InteractionInterfaceMethod (json);
	}
	public void StopCapBtnClicked()
	{
		string json = "{'Method': 'StopScreenCap','DataSetName': 'Tarmac','TestNull':''}";
		InteractInterface.InteractionInterfaceMethod (json);
	}
	public void SwitchFlashBtnClicked()
	{
		string json = "{'Method': 'SwitchFlash','DataSetName': 'Tarmac','TestNull':''}";
		InteractInterface.InteractionInterfaceMethod (json);
	}
	public void SwitchCameraBtnClicked()
	{
		string json = "{'Method': 'SwitchCamera','DataSetName': 'Tarmac','TestNull':''}";
		InteractInterface.InteractionInterfaceMethod (json);
	}

	public void DisableCamera()
	{
		string json = "{'Method': 'DisableCamera','DataSetName': 'Tarmac','TestNull':''}";
		InteractInterface.InteractionInterfaceMethod (json);
	}
	public void EnableCamera()
	{
		string json = "{'Method': 'DisableCamera','DataSetName': 'Tarmac','TestNull':''}";
		InteractInterface.InteractionInterfaceMethod (json);
	}
}
