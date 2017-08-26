using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;
using System.IO;
using UnityEngine.UI;
using Vuforia;
using UnityEngine.SceneManagement;
#if UNITY_ANDROID
using cn.sharerec;
#endif
#if UNITY_IPHONE
//using com.mob;
#endif
using System.Linq;
using System;

public class RespondMethodWithoutMS : MonoBehaviour 
{
	public GameObject 	ARCamera;
	int 				switchFlashNum 		 = 0; // 
	int 				switchCameraNum 	 = 0; // 值为1时是后置摄像头，2为前置，变回后置后，会置0
	string 				shotFolder 			 = "ScreenShots";
	string 				assetBundleFolder 	 = "AssetsBundles";
	string 				dataSetsFolder 		 = "DataSets";
	string 				assetBundleSuf 		 = ".ass";
	string 				dataSetDir			 = string.Empty;
	bool isDeleteVideo = false;
	ObjectTracker tracker;
	#if UNITY_IPHONE
	bool isDeleteVideoIniOS = false;
	#endif

	void Start () 
	{
		#if UNITY_IPHONE	

//		ShareREC.registerApp("1111");
//		ShareREC.setMinimumRecordingTime(2);

		#endif
		dataSetDir = Path.Combine (Application.persistentDataPath, dataSetsFolder);
		tracker = TrackerManager.Instance.GetTracker<ObjectTracker> ();
		if (tracker == null) 
		{
			TrackerManager.Instance.InitTracker<ObjectTracker> ();
			tracker = TrackerManager.Instance.GetTracker<ObjectTracker> ();
		}
	} 
	void Update()
	{
		#if UNITY_ANDROID
		if (Input.GetKeyDown(KeyCode.Escape)){	Utility.PrepareForSendMessage ("EscapeClicked", "0");	}
		#endif
	}

	#region LoadDataSet
	public void LoadDataSet1(string datasetJson)
	{
		string datasetJsonTest = @"[{'dataSetName': 'MiTu_Sea','id': 1,'targets':[{'targetName': 'mitu_sea_haitun','url': 'http://static.eschervr-dev.com/uploads/ar/asset/201702/20170209150230611/test_10.ass','md5': '282047229818f6ed2a1dec788d8d7887','id': 1,'size': 174274},{'targetName': 'mitu_sea_haigui','url': 'http://static.eschervr-dev.com/uploads/ar/asset/201702/20170209150319012/test_apple.ass','md5': '3d78689f1de9c55b5ec3a6e1cb82d242','id': 2,'size': 174278}]}]";
		string jsonStr = Utility.isDebug ? datasetJsonTest : datasetJson;

//		#if UNITY_ANDROID
//		VuforiaBehaviour vb = GameObject.FindObjectOfType<VuforiaBehaviour> ();
//		if (vb == null) 
//		{ 
//			Instantiate (ARCamera);	
//			Utility.LogPrint ("ARCamera Init");	
//		}
//		#endif



		if (jsonStr.Equals("") || jsonStr == null)
		{
			Utility.LogPrint ("json string is null or empty,load dataset fail");
			Utility.PrepareForSendMessage ("LoadDataSet", "1");
			return;
		}
		LitJson.JsonData dataSetList = null;
		try 	{	dataSetList = LitJson.JsonMapper.ToObject (jsonStr);																			}
		catch	{	Utility.PrepareForSendMessage ("LoadDataSet", "1","JSON analysis error,please check  whether JSON format is correct");	return;	}
		//load all datasets
		if (dataSetList != null) 
		{
			List<string> keyList = new List<string> () { "dataSetName" , "targets" };
			for (int i = 0; i < dataSetList.Count; i++) 
			{
				if (Utility.CheckJson (dataSetList [i],keyList)) 
				{
					LitJson.JsonData dataSetInfo = dataSetList [i];
					LitJson.JsonData targetDataList = dataSetInfo ["targets"];	
					LoadDataSetWithName ((string)dataSetInfo ["dataSetName"], targetDataList);
				} else 
				{
					Utility.PrepareForSendMessage ("LoadDataSet", "1","Not found the key: \"dataSetName\" or \"targets\",please add the key to the json");
					return;
				}
			}
		} else 
		{
			Utility.LogPrint ("jsonstr is null or ...");
		}
		var vuforia = VuforiaARController.Instance;
		vuforia.RegisterVuforiaStartedCallback (()=>{
			Utility.PrepareForSendMessage ("LoadDataSet", "0");
			CountDown._instance.TriggerCountDown();
		});
	}

	private void LoadDataSetWithName(string dataSetName,LitJson.JsonData targetDataList)
	{
		List<DataSet> activeDataSets = tracker.GetDataSets ().ToList ();
		Utility.LogPrint ("activeDataset count:" + activeDataSets.Count);

		foreach (DataSet ds in activeDataSets) 
		{
			Utility.LogPrint ("dataset name--" + Utility.GetDataSetName (ds));
			string dsName = Utility.GetDataSetName (ds);
			if (dsName == dataSetName.ToLower ())
			{
				Utility.LogPrint ("memory already has the dataset,name--" + Utility.GetDataSetName (ds));
				return;
			}
		}
		DataSet dataSet = tracker.CreateDataSet ();
		string dataSetPath = Path.Combine (dataSetDir, dataSetName + ".xml");
		Utility.LogPrint ("dataset filepath is:" + dataSetPath);

		if (File.Exists (dataSetPath)) 
		{
			if (dataSet.Load (dataSetPath, VuforiaUnity.StorageType.STORAGE_ABSOLUTE)) 
			{
				tracker.Stop ();
				if (!tracker.ActivateDataSet (dataSet)) 	{	Utility.LogPrint ("fail to activate dataset" + dataSetName);	}
				if (!tracker.Start ()) 						{	Utility.LogPrint ("fail to start tracker");						}
				List<string> keyList = new List<string> () 	{ "targetName" , "url" , "size"										};
				IEnumerable<TrackableBehaviour> tbs = TrackerManager.Instance.GetStateManager ().GetTrackableBehaviours ();
				foreach (TrackableBehaviour tb in tbs)
				{
					//tb.transform.position = new Vector3 (0, 0, 0);
					tb.transform.rotation = Quaternion.Euler(new Vector3(tb.transform.rotation.x,tb.transform.rotation.y + 180,tb.transform.rotation.z));
					Debug.Log ("memory already has imageTarget:" + tb.name + "-----" + tb.transform.position);
					if (tb.name.Equals("New Game Object")) 
					{// 新创建的总是被命名为 "New Game Object"
						//ergodic all the targetname,if targetName = modelName then set loadPath and so on
						for (int i = 0; i < targetDataList.Count; i++) 
						{
							if (Utility.CheckJson (targetDataList [i], keyList)) 
							{
								Utility.LogPrint ("find ImageTarget -- " + tb.TrackableName);
								LitJson.JsonData targetData = targetDataList [i];
								string targetName = (string)targetData ["targetName"];
								string str = dataSetName + "_" + tb.TrackableName;

								bool result = targetName.ToLower ().Equals (str.ToLower ());
								Utility.LogPrint (targetName + "----" + tb.TrackableName);

								if (result) 
								{
									string targetModelPath = Path.Combine (Application.persistentDataPath, assetBundleFolder);
									targetModelPath = Path.Combine (targetModelPath, targetName + assetBundleSuf);
									tb.gameObject.name = "DynamicImageTarget-" + tb.TrackableName;
									tb.gameObject.AddComponent<TrackableEventHandler> ().setModelSource(targetModelPath, targetDataList [i]);
									tb.gameObject.AddComponent<TurnOffBehaviour> ();
									break;
								}
							} else 
							{
								Utility.PrepareForSendMessage ("LoadDataSet", "1","Not found the key: \"dataSetName\" or \"targets\",please add the key to the json");
							}
						}
					}
				}
			} else 
			{
				Utility.LogPrint ("Failed to load dataset" + dataSetName);
			}
		} else 
		{
			Utility.LogPrint ("dataset file not exist");
		}
	}
	#endregion

	//---------------------------------------------
	public void LoadDataSet(string datasetJson)
	{
		string datasetJsonTest = @"
		[
            {
                'dataSetName': 'MiTu_Sea',
                'id': 1,
                'url': 'https: //'
            },
            {
                'dataSetName': 'MiTu_KnowSelf',
                'id': 1,
                'url': 'https: //'
            }
        ]";

		string jsonStr = Utility.isDebug ? datasetJsonTest : datasetJson;
		if (jsonStr.Equals("") || jsonStr == null)
		{
			Utility.LogPrint ("json string is null or empty,load dataset fail");
			Utility.PrepareForSendMessage ("LoadDataSet", "1");
			return;
		}
		LitJson.JsonData dataSetList = null;
		try 	{	dataSetList = LitJson.JsonMapper.ToObject (jsonStr);																			}
		catch	{	Utility.PrepareForSendMessage ("LoadDataSet", "1","JSON analysis error,please check  whether JSON format is correct");	return;	}

		if (dataSetList != null)
		{
			List<string> keyList = new List<string> () { "dataSetName", "id", "url" };
			for (int i = 0; i < dataSetList.Count; i++) 
			{
				if (Utility.CheckJson (dataSetList [i],keyList)) 
				{
					//LitJson.JsonData dataSetInfo = dataSetList [i];
					LoadDataSetWithName (dataSetList [i]);
				} else 
				{
					Utility.PrepareForSendMessage ("LoadDataSet", "1","Not found the key: \"dataSetName\" or \"targets\",please add the key to the json");
					return;
				}
			}
		}
		var vuforia = VuforiaARController.Instance;
		vuforia.RegisterVuforiaStartedCallback (()=>{
			Utility.PrepareForSendMessage ("LoadDataSet", "0");
			CountDown._instance.TriggerCountDown();
		});
	}

	private void LoadDataSetWithName(LitJson.JsonData dataSetInfo)
	{
		//如果dataset识别库对应的模型目录不存在，先创建这个目录
		string dataSetName = dataSetInfo ["dataSetName"].ToString();
		string fileDir = Path.Combine (Application.persistentDataPath, "AssetsBundles");
		string dataSetAssDir = Path.Combine (fileDir, dataSetName);
		if (!Directory.Exists (dataSetAssDir))
		{
			Directory.CreateDirectory (dataSetAssDir);
		}
	
		List<DataSet> activeDataSets = tracker.GetDataSets ().ToList ();
		Utility.LogPrint ("activeDataset count:" + activeDataSets.Count);

		foreach (DataSet ds in activeDataSets) 
		{
			Utility.LogPrint ("dataset name--" + Utility.GetDataSetName (ds));
			string dsName = Utility.GetDataSetName (ds);
			if (dsName == dataSetName.ToLower ())
			{
				Utility.LogPrint ("memory already has the dataset,name--" + Utility.GetDataSetName (ds));
				return;
			}
		}
		DataSet dataSet = tracker.CreateDataSet ();
		string dataSetPath = Path.Combine (dataSetDir,dataSetName + ".xml");
		Utility.LogPrint ("dataset filepath is:" + dataSetPath);

		if (File.Exists (dataSetPath))
		{
			if (dataSet.Load (dataSetPath, VuforiaUnity.StorageType.STORAGE_ABSOLUTE))
			{
				tracker.Stop ();
				if (!tracker.ActivateDataSet (dataSet))
				{
					Utility.LogPrint ("fail to activate dataset" + dataSetName);
				}
				if (!tracker.Start ())
				{
					Utility.LogPrint ("fail to start tracker");
				}
				//List<string> keyList = new List<string> () 	{ "targetName", "url", "size"										};
				IEnumerable<TrackableBehaviour> tbs = TrackerManager.Instance.GetStateManager ().GetTrackableBehaviours ();
				foreach (TrackableBehaviour tb in tbs)
				{
					tb.transform.rotation = Quaternion.Euler (new Vector3 (tb.transform.rotation.x, tb.transform.rotation.y + 180, tb.transform.rotation.z));
					Debug.Log ("memory already has imageTarget:" + tb.name + "-----" + tb.transform.position);
					if (tb.name.Equals ("New Game Object"))
					{// 新创建的总是被命名为 "New Game Object"
						if (tb.TrackableName.Contains (dataSetName))
						{
							string assPath = Path.Combine (dataSetAssDir, tb.TrackableName);
							assPath += ".ass";
							tb.gameObject.name = "DynamicImageTarget-" + tb.TrackableName;
							tb.gameObject.AddComponent<TrackableEventHandler> ().SetModelSource_MiTu (assPath, dataSetInfo);
							tb.gameObject.AddComponent<TurnOffBehaviour> ();
						}
					}
				}
			}
		} else
		{
			Utility.LogPrint ("dataset is not in the dir");
		}

	}







	//---------------------------------------------




	#region ScreenShot
	public void ScreenShot()
	{
		StartCoroutine (getTexture2d ());
		CountDown._instance.ResetTime();
	}
	IEnumerator getTexture2d()
	{
		//在这里隐藏UI再截图
		//截图操作
		yield return new WaitForSeconds(0.1f);
		Texture2D t = new Texture2D(Screen.width, Screen.height, TextureFormat.RGB24, false);
		//截图完毕显示UI
		t.ReadPixels(new Rect(0, 0, Screen.width, Screen.height), 0, 0, true);
		byte[] bytes = t.EncodeToJPG();
		t.Compress(true);
		t.Apply();
		//t就是截到的图片我们可以在这里上传到服务器
		//下面是开始保存
		//获取系统时间
		Utility.LogPrint ("shot start");

		string  shotPath = Path.Combine (Application.persistentDataPath,shotFolder);
		System.DateTime oldTime=new System.DateTime(1970,1,1);
		System.TimeSpan span = System.DateTime.Now.Subtract(oldTime);

		double milliSecondsTime = span.TotalSeconds;
		int time = (int)milliSecondsTime * 1000;
		string filename = string.Format("image{0}.jpg",time);
		//应用平台判断，路径选择

		if (Application.platform == RuntimePlatform.Android || Application.platform == RuntimePlatform.IPhonePlayer)
		{
			//保存在Android相册中，如果是PC就改成Application .dataPath 的路径
			if (!Directory.Exists(shotPath))
			{
				Directory.CreateDirectory(shotPath);
			}
			shotPath = shotPath + "/" + filename;
		}
		//保存文件
		File.WriteAllBytes(shotPath, bytes);
		Utility.PrepareForSendMessage ("ScreenShot", "0",shotPath,false);

	}
	#endregion
	#region ScreenCap

	public void StartScreenCap()
	{	
		CountDown._instance.ResetTime();

		#if UNITY_ANDROID
//		if (ShareREC.IsAvailable ()) {
//			ShareREC.StartRecorder ();
//		}
		Everyplay.StartRecording();

		#endif

		#if UNITY_IPHONE
		//ShareRECIOS.startRecording();

		///ShareREC.startRecoring();
		Everyplay.StartRecording();
		#endif
	}
	public void StopScreenCap(string jsonstr)
	{
		#if UNITY_ANDROID

//		//ShareREC.OnRecorderStoppedHandler 这里可以监听停止录制之后可以干的事情，开始录制也一样
//		ShareREC.OnRecorderStoppedHandler = StopRecorderEnd;//不能在这个函数中回传路径给移动端，因为视频可能还没有合成成功，要监听事件之后成功后再传
//		//这里记得加判断，如果jsonstr有值，说明要删除视频
//		if(jsonstr.Length>=1)
//			isDeleteVideo = true;
//		ShareREC.StopRecorder ();
		Everyplay.RecordingStopped += EveryPlayStopREC;
		Everyplay.StopRecording();


		#endif

		#if UNITY_IPHONE

///		if(jsonstr.Length >=1)
//		{
//			isDeleteVideoIniOS = true;
//		}
//		FinishedRecordEvent evt = new FinishedRecordEvent(recordFinishedHandler);
///		ShareREC.stopRecording(evt);

		//ShareRECIOS.stopRecording(evt);
		Everyplay.StopRecording();
		Everyplay.RecordingStopped += EveryPlayStopREC;
		#endif
	}
	void EveryPlayStopREC()
	{
		string videoDir = Path.Combine (Application.temporaryCachePath, "sessions");

		#if UNITY_IPHONE

		string iPhonePersistentDataPath = Application.persistentDataPath.ToString();
		string tmpDir = iPhonePersistentDataPath.Substring (0,iPhonePersistentDataPath.Length - 10);

		videoDir = Path.Combine(tmpDir,"tmp");

		Debug.Log ("--------" + tmpDir);
		 
		#endif
		if (Directory.Exists (videoDir))
		{
			DirectoryInfo direction = new DirectoryInfo (videoDir);
			FileInfo[] files;
			#if UNITY_ANDROID
			files = direction.GetFiles ("*", SearchOption.TopDirectoryOnly);
			#endif
			#if UNITY_IPHONE
			files = direction.GetFiles ("*", SearchOption.AllDirectories);
			#endif
			Debug.Log ("videoDir----:" + files.Length);
			if (files.Length > 0)
			{
				Debug.Log ("videoDir Name:" + files [0].DirectoryName);
				FileInfo[] videoDirFiles;
				#if UNITY_ANDROID
				videoDirFiles = files [0].Directory.GetFiles ("*", SearchOption.TopDirectoryOnly);
				#endif
				#if UNITY_IPHONE
				videoDirFiles = files [0].Directory.GetFiles ("*", SearchOption.AllDirectories);
				#endif
				Debug.Log ("sessions have direction:" + videoDirFiles [0].DirectoryName);
				if (videoDirFiles.Length > 0)
				{
					FileInfo[] videoFiles;
					#if UNITY_ANDROID
					videoFiles = videoDirFiles [0].Directory.GetFiles ("*", SearchOption.AllDirectories);
					#endif
					#if UNITY_IPHONE
					videoFiles = videoDirFiles [0].Directory.GetFiles ("*", SearchOption.AllDirectories);
					#endif
					for (int i = 0; i < videoFiles.Length; i++)
					{
						if (videoFiles [i].Name.EndsWith (".mp4"))
						{
							Debug.Log ("video name is :" + videoFiles [i].Name);
							Debug.Log ("video direction name is :" + videoFiles [i].DirectoryName);
							string sourceFilePath = Path.Combine (videoFiles [i].DirectoryName, videoFiles [i].Name);
							string targetFilePath = Path.Combine (Application.persistentDataPath, "ScreenCaps");
							if (!Directory.Exists (targetFilePath))
							{
								Directory.CreateDirectory (targetFilePath);
							}
							string videoName = Utility.GetTimeStamp ();
							videoName += ".mp4";
							string finalFilePath = Path.Combine (targetFilePath, videoName);
							File.Move (sourceFilePath, finalFilePath);
							Debug.Log ("move file success");
							Utility.PrepareForSendMessage ("StopScreenCap", "0",finalFilePath,true);
						}
					}
				}

			}
		}
	}
	#if UNITY_IPHONE
	/*
	void recordFinishedHandler(Exception ex)
	{
		
		if (isDeleteVideoIniOS) {
			DeleteVideoIniOS ();
		} else {
			string videoPath = ShareREC.lastRecordingPath ();
			if (videoPath != null) {
				string dirPath = Path.Combine (Application.persistentDataPath,"ScreenCaps");
				FileInfo file = new FileInfo (videoPath);
				string realVideoPath = Path.Combine (dirPath, file.Name);
				File.Move (videoPath, realVideoPath);

				Utility.PrepareForSendMessage ("StopScreenCap", "0",realVideoPath,true);

			}
		}
		
	}

	void DeleteVideoIniOS()
	{
		
		Utility.LogPrint ("--------start delete file");

		string videoPath = ShareREC.lastRecordingPath ();
		Utility.LogPrint ("--------"+videoPath);

		if (File.Exists (videoPath)) {
			File.Delete (videoPath);
			Utility.LogPrint ("--------delete file");
		} else {
			Utility.LogPrint ("++++++++++"+videoPath);
		}
		isDeleteVideoIniOS = false;
		
	}
	*/
	#endif

	#if UNITY_ANDROID
	void StopRecorderEnd()
	{
		
		if (!isDeleteVideo) {
			
			long[] videoArr = ShareREC.ListLocalVideos ();
			string videoPath = ShareREC.GetLocalVideoPath (videoArr [videoArr.Length - 1]);

			Utility.PrepareForSendMessage ("StopScreenCap", "0",videoPath,true);

		} else {//delete video
			
			long[] videoArrID = ShareREC.ListLocalVideos ();
			if(videoArrID.Length >= 1)
				ShareREC.DeleteLocalVideo(videoArrID[videoArrID.Length - 1]);
			isDeleteVideo = false;
		}

	}
	#endif

	#endregion

	public void SwitchFlash()
	{
		CountDown._instance.ResetTime();
		switchFlashNum++;  
		if (switchFlashNum==1)  
		{  
			Vuforia.CameraDevice.Instance.SetFlashTorchMode (true);
		}        
		if (switchFlashNum==2)  
		{  
			Vuforia.CameraDevice.Instance.SetFlashTorchMode (false);
			switchFlashNum = 0;  
		}  
	}
	public void SwitchCamera()
	{
		CountDown._instance.ResetTime();
		switchCameraNum++;  
		if (switchCameraNum==1)  
		{  
			CameraDevice.CameraDirection cameraDirection = CameraDevice.CameraDirection.CAMERA_FRONT;  
			CameraDevice.Instance.Stop();  
			CameraDevice.Instance.Deinit();  
			CameraDevice.Instance.Init(cameraDirection);  
			CameraDevice.Instance.Start();            
		}        
		if (switchCameraNum==2)  
		{  
			CameraDevice.CameraDirection cameraDirection = CameraDevice.CameraDirection.CAMERA_BACK;  
			CameraDevice.Instance.Stop();  
			CameraDevice.Instance.Deinit();  
			CameraDevice.Instance.Init(cameraDirection);  
			CameraDevice.Instance.Start();  
			switchCameraNum = 0;  
		}  
	}

	public void DisableCamera()
	{
		Vuforia.CameraDevice.Instance.Deinit ();
		Vuforia.CameraDevice.Instance.Stop ();
	}
	public void EnableCamera()
	{
		Vuforia.CameraDevice.Instance.Init (Vuforia.CameraDevice.CameraDirection.CAMERA_BACK);
		Vuforia.CameraDevice.Instance.Start ();
		Vuforia.CameraDevice.Instance.SetFocusMode (Vuforia.CameraDevice.FocusMode.FOCUS_MODE_CONTINUOUSAUTO);
	}

	public void StopTracker()
	{
		TrackerManager.Instance.GetTracker<ObjectTracker> ().Stop();
		//ModelManager._instance.ARCamera.SetActive (false);
		ModelManager._instance.ARCamera.SetActive(false);
	}

	public void ResetScene()
	{
		string sceneName = SceneManager.GetActiveScene ().name;
		if (sceneName.Equals ("Main"))
		{
			SceneManager.LoadScene ("Main_Reset");
		} else
		{
			SceneManager.LoadScene ("Main");
		}
	}
	public void Reset()
	{
		Everyplay.Quit ();
	}

	public void StartTracker()
	{
		ModelManager._instance.ARCamera.SetActive (true);
		TrackerManager.Instance.GetTracker<ObjectTracker> ().Start();
		//对接反应的问题：摄像头重新打开后无法再次关机，在这里修复了，待测试。
		CountDown._instance.ResetTime ();
		CountDown._instance.TriggerCountDown ();
	}
	public void RestartCamera()
	{
		VuforiaBehaviour vb = GameObject.FindObjectOfType<VuforiaBehaviour> ();
		if (vb != null) 
		{
			vb.enabled = false;
		}
		StartCoroutine (StartCamera ());
	}
	IEnumerator StartCamera()
	{
		yield return new WaitForSeconds (0.1f);
		VuforiaBehaviour vb = GameObject.FindObjectOfType<VuforiaBehaviour> ();
		if (vb != null) 
		{
			vb.enabled = true;
		}
	}

	//这个接口是原生设置脱卡状态的,//如果没有调用，则默认是不脱卡的
	public void SetOffCardState(string boolStr)
	{
		CountDown._instance.ResetTime();
		if (!FunctionModeleManager.Instance.OffCard)
		{
			return;
		}
		if (boolStr.Equals ("true") || boolStr.Equals ("True"))
		{
			if (ModelManager._instance.isOffCard) 
			{
				return;
			}
			if (!ModelManager._instance.offCardCamera.gameObject.activeInHierarchy)
			{
				ModelManager._instance.offCardCamera.gameObject.SetActive (true);
				ModelManager._instance.offCardCamera.tag = "MainCamera";
				ARCamera.transform.GetChild(0).tag = "Untagged";
			}
			ModelManager._instance.isOffCard = true;
			ModelManager._instance.offCardModelIsMoving = false;
			ModelManager._instance.currentModelisMoving = false;
			EventManager.TriggerEvent ("OffCard");
			Utility.PrepareForSendMessage ("FoundTarget", "1");
		} else if (boolStr.Equals ("false") || boolStr.Equals ("False"))
		{
			if (!ModelManager._instance.isOffCard) { return; }
			if (ModelManager._instance.offCardCamera.gameObject.activeInHierarchy)
			{
				ARCamera.transform.GetChild(0).tag = "MainCamera";
				ModelManager._instance.offCardCamera.gameObject.SetActive (false);
			}
			ModelManager._instance.isOffCard = false;
			ModelManager._instance.offCardModelIsMoving = false;
			ModelManager._instance.currentModelisMoving = false;
			ModelManager._instance.currentRotationTransform = null;
			EventManager.TriggerEvent ("RecoveryModelToTarget");
			Utility.PrepareForSendMessage ("FoundTarget", "0");//点击了不脱卡，也得告诉原生当前没有模型了
		}
	}
}
