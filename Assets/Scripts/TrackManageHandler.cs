using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using System.IO;
using System;
using Vuforia;
using UnityEngine.UI;
using System.Linq;

public class TrackManageHandler : MonoBehaviour {



	string targetName;
	private LitJson.JsonData dataSetList;

	void Start()
	{
		dataSetList = new LitJson.JsonData();
	}
	void Update () {
		// test @todo remove test code
		// test end
	}


		

//
//	private void LoadDataSetByBeiJing (string dataSetName) {
//		logText.text = "start to load";
//
//		ObjectTracker tracker = TrackerManager.Instance.GetTracker<ObjectTracker>();
//
//		DataSet imageTargetDataSet = null;
//
//		string xmlPath = Path.Combine (Application.persistentDataPath, dataSetsFolder);
//		xmlPath = Path.Combine (xmlPath, dataSetName + xmlSuf);
//
//		// deactive before load, support call function twice
//		if (imageTargetDataSet != null) {
//			tracker.DeactivateDataSet (imageTargetDataSet);
//			//tracker.DestroyDataSet (imageTargetDataSet, true); // cant destory... error
//		}
//
//		imageTargetDataSet = tracker.CreateDataSet();
//
//		if (imageTargetDataSet.Load (xmlPath, VuforiaUnity.StorageType.STORAGE_ABSOLUTE)) {
//			tracker.Stop();// 关闭
//			logText.text = "dataset Load success:"+dataSetName;
//			// @todo
//			// when track reload
//			// 1、不同名称dataset是否正常 (旧的是否无法匹配，新的是否生效)
//			// 2、同dataset，新增imagetarget是否正常
//			// 3、同dataset，减少imagetarget是否正常
//			// 4、同dataset，替换imagetarget(名称相同)是否正常
//
//			if (!tracker.ActivateDataSet(imageTargetDataSet)) {
//				//ImageTracker cannot have more than 100 total targets activated
//				Debug.Log("TrackManageHandler LoadDataSet " + dataSetName + " ActivateDataSet Error");
//			}
//
//			if (!tracker.Start ()) {
//				Debug.Log("TrackManageHandler LoadDataSet " + dataSetName + " Start Error");
//			}; //  开启
//
//			int counter = 0;
//
//			IEnumerable<TrackableBehaviour> tbs = TrackerManager.Instance.GetStateManager().GetTrackableBehaviours();
//			foreach (TrackableBehaviour tb in tbs) {
//				Debug.Log ("TrackManageHandler LoadDataSet " + dataSetName + " TrackableBehaviour tb.name " + tb.name);
//				if (tb.name == "New Game Object") {
//
//					string targetName = dataSetName + "_" + tb.TrackableName;
//					// change generic name to include trackable name
//					tb.gameObject.name = "DynamicImageTarget-" + targetName + ":" + counter++;
//
//					// add additional script components for trackable
//					tb.gameObject.AddComponent<DynamicModelTrackableEventHandler> ();
//					tb.gameObject.AddComponent<TurnOffBehaviour> ();
//
//					// add params for add model
//					DynamicModelTrackableEventHandler dt = tb.gameObject.GetComponent<DynamicModelTrackableEventHandler> ();
//
//					string targetModelPath = Path.Combine (Application.persistentDataPath, targetsFolder);
//					targetModelPath = Path.Combine (targetModelPath, "yellowcube.assetbundle");
//					
//					dt.setModelSource (targetModelPath, "yellowcube.assetbundle");
//					logText.text = dataSetName + "wait to load model";
//
//					Debug.Log ("TrackManageHandler LoadDataSet " + dataSetName + " TrackableBehaviour set to dt " + tb.gameObject.name);
//					Debug.Log ("TrackManageHandler LoadDataSet " + dataSetName + " TrackableBehaviour set to dt " + targetModelPath);
//				}
//			}
//
//			Debug.Log ("TrackManageHandler LoadDataSet " + dataSetName + " Done");
//		} else {
//			Debug.Log ("TrackManageHandler LoadDataSet " + dataSetName + " Error");
//		}
//	}
//	private void LoadConfig () {
//		string configPath = Path.Combine (Application.persistentDataPath, dataSetsFolder);
//		configPath = Path.Combine(configPath, configFileName);
//		FileInfo fileConfig = new FileInfo (configPath);
//
//		if (fileConfig.Exists) {
//			StreamReader streamReader;
//			try {
//				streamReader = fileConfig.OpenText ();
//				string json = streamReader.ReadToEnd ();
//				streamReader.Close();
//
//				dataSetListConfig = JsonUtility.FromJson<DataSetListConfig> (json);
//
//				Debug.Log ("TrackManageHandler LoadConfig Done");
//			} catch (Exception e) {
//				Debug.Log ("Error: TrackManageHandler LoadConfig Exception" + e.ToString());
//
//				throw new Exception ("File Read Exception: " + e.ToString());
//			}
//		} else { // no exists
//			Debug.Log ("Error: TrackManageHandler LoadConfig ConfigFile Missing");
//
//			throw new Exception ("File Missing");
//		}
//	}
//	[Serializable]
//	private class DataSetListConfig {
//		public string url = "", md5 = "";
//		public DataSetConfig[] dataSetList;
//	}
//
//	[Serializable]
//	private class DataSetConfig {
//		public string dataSetName;
//		//public Dictionary<string, TargetConfig> targets;
//		public TargetConfig[] targets;
//	}
//
//	[Serializable]
//	private class TargetConfig {
//		public string name, url, md5;
//	}
}