using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Vuforia;
using System.Linq;
using UnityEngine.Events;
using System.IO;
using UnityEngine.UI;



public class dynamicLoad : MonoBehaviour
{
	//测试加载多个dataset使用，正式时要删去
	private GameObject augmentObject = null;

	public Text logText;
	//private UnityAction<LitJson.JsonData> listener;

	private string dataSetName = "";

	void Awake()
	{
//		Debug.Log (Application.persistentDataPath);
//		listener = new UnityAction<LitJson.JsonData> (LoadDataSetFromPathWithName);
//		//TestInstanceFromWeb ();
//
//		//EventManager.StartListening("LoadDataSet");
//		EventManager.StartListening ("LoadDataSet", listener);
	}


	void Start ()
	{
		Debug.Log (Application.persistentDataPath);
		//listener = new UnityAction<LitJson.JsonData> (LoadDataSetFromPathWithName);
		//TestInstanceFromWeb ();

		//EventManager.StartListening("LoadDataSet");
		//EventManager.StartListening ("LoadDataSet", listener);
	}

	void LoadDataSetFromPathWithName (LitJson.JsonData data)
	{
		logText.text = "respond success";
		//TestInstanceFromWeb ();
		string dataSetName = (string)data ["DataSetName"];

		ObjectTracker tracker = TrackerManager.Instance.GetTracker<ObjectTracker> ();
		List<DataSet> activeDataSets = tracker.GetDataSets ().ToList ();
		List<DataSet> dataSets = tracker.GetDataSets ().ToList ();
		Debug.Log ("activeDataset count:" + activeDataSets.Count);
		Debug.Log ("Dataset count:" + dataSets.Count);

		foreach (DataSet ds in activeDataSets) {
			Debug.Log ("dataset name-" + GetDataSetName (ds));

			string dsName = GetDataSetName (ds);
			if (dsName == dataSetName.ToLower ())
				return;
		}

		Debug.Log ("start load");
		DataSet dataSet = tracker.CreateDataSet ();


		string path = Path.Combine (Application.persistentDataPath, "DataSets");
		path = Path.Combine (path, dataSetName + ".xml");
		Debug.Log ("dataset filepath is:" + path);
//		#if UNITY_ANDROID
//		path="file://"+path;
//		#endif
		if (dataSet.Load (path, VuforiaUnity.StorageType.STORAGE_ABSOLUTE)) {


			tracker.Stop ();
			if (!tracker.ActivateDataSet (dataSet)) {
				Debug.Log ("fail to activate dataset" + dataSetName);
			}
			if (!tracker.Start ()) {
				Debug.Log ("fail to start tracker");
			}

			IEnumerable<TrackableBehaviour> tbs = TrackerManager.Instance.GetStateManager ().GetTrackableBehaviours ();
			foreach (TrackableBehaviour tb in tbs) {
				Debug.Log ("memory already has imageTarget:" + tb.name);
				if (tb.name == "New Game Object") {// 新创建的总是被命名为 "New Game Object"
					Debug.Log ("new imageTarget");
					//if (tb.TrackableName == "tarmac") {//可以通过这个属性来加载特定的模型
					tb.gameObject.name = "DynamicImageTarget-" + tb.TrackableName;
					tb.gameObject.AddComponent<DefaultTrackableEventHandler> ();
					tb.gameObject.AddComponent<TurnOffBehaviour> ();
					InstanceModel (tb);
				}
			}
		} else {
			Debug.Log ("Failed to load dataset" + dataSetName);
		}

/*
		if (dataSet.Load (dataSetName)) {
			tracker.Stop ();
			if (!tracker.ActivateDataSet (dataSet)) {
				Debug.Log ("fail to activate dataset" + dataSetName);
			}
			if (!tracker.Start ()) {
				Debug.Log ("fail to start tracker");
			}

			IEnumerable<TrackableBehaviour> tbs = TrackerManager.Instance.GetStateManager ().GetTrackableBehaviours ();
			foreach (TrackableBehaviour tb in tbs) {
				Debug.Log ("memory already has imageTarget:"+tb.name);
				if (tb.name == "New Game Object") {// 新创建的总是被命名为 "New Game Object"
					Debug.Log ("new imageTarget");
					//if (tb.TrackableName == "tarmac") {//可以通过这个属性来加载特定的模型
					tb.gameObject.name = "DynamicImageTarget-" + tb.TrackableName;
					tb.gameObject.AddComponent<DefaultTrackableEventHandler> ();
					tb.gameObject.AddComponent<TurnOffBehaviour> ();
					if (augmentObject != null) {
						GameObject augmentation = (GameObject)GameObject.Instantiate (augmentObject);
						augmentation.transform.transform.parent = tb.gameObject.transform;
						augmentation.transform.localPosition = new Vector3 (0f, 0f, 0f);
						//augmentation.transform.localRotation = Quaternion.identity;
						//augmentation.transform.localRotation = Quaternion.identity;
						augmentation.transform.Rotate(new Vector3 (0f, 90f, 0f));
						augmentation.transform.localScale = new Vector3 (0.07f, 0.07f, 0.07f); //maomao's size is 0.07
						//augmentation.transform.localScale = new Vector3 (0.6f, 0.6f, 0.6f);
						augmentation.gameObject.SetActive (true);
						AudioSource audio = augmentation.GetComponent<AudioSource> ();
						audio.Stop ();
					} else {
						Debug.Log ("no augmentation object for :" + tb.TrackableName);
					}
					//}
				}
			}
		} else {
			Debug.Log ("Failed to load dataset" + dataSetName);
		}
	*/
	}

	void InstanceModel (TrackableBehaviour tb)
	{
		logText.text = "start load";

		//从Application.persistentDataPath加载assetbundle文件
		string basePathURL = Application.persistentDataPath + "/AssetsBundles/";
		string path = basePathURL + "yellowcube.assetbundle";

		#if UNITY_ANDROID
		path = "file://" + path;
		#endif

		Debug.Log (path);
		StartCoroutine (LoadGameObject (path, tb));
	}

	IEnumerator LoadGameObject (string path, TrackableBehaviour tb)
	{
		/*
			using (WWW www = new WWW (path)) {
			logText.text = "success:"+path;

			yield return www;
			if (www.error != null) {
				Debug.LogError ("has erro on load assetbundle..." + www.error);
				logText.text = "error:"+path;
				yield break;
			}
			if (www.isDone) {
				logText.text = "done:"+path;

				GameObject asset = Instantiate (www.assetBundle.LoadAsset("YellowCube")) as GameObject;
				GameObject asset1 = Instantiate(www.assetBundle.mainAsset) as GameObject;
				if (asset1 != null) {
					logText.text = "done11111111111111";
				}
				if (asset != null) {
					logText.text = "2222222222222222";
				}
				GameObject augmentation = (GameObject)GameObject.Instantiate (asset);
				augmentation.transform.transform.parent = tb.gameObject.transform;
				augmentation.transform.localPosition = new Vector3 (0f, 0f, 0f);
				augmentation.transform.Rotate (new Vector3 (0f, 90f, 0f));
				//augmentation.transform.localScale = new Vector3 (0.07f, 0.07f, 0.07f); //maomao's size is 0.07
				augmentation.transform.localScale = new Vector3 (0.4f, 0.4f, 0.4f);
				augmentation.gameObject.SetActive (true);
				www.assetBundle.Unload (false);
			}
		}
*/



		WWW bundle = new WWW (path);
		logText.text = path;
		if (bundle.error != null) {
			logText.text = "load error:" + bundle.error;

		}
		yield return bundle; 
		GameObject targetModel = Instantiate(bundle.assetBundle.LoadAsset("YellowCube")) as GameObject; // @todo check memory
		Renderer[] rendererComponents =targetModel.GetComponentsInChildren<Renderer>(true);
		Collider[] colliderComponents = targetModel.GetComponentsInChildren<Collider>(true);

		// Disable rendering:
		foreach (Renderer component in rendererComponents)
		{
			component.enabled = false;
		}

		// Disable colliders:
		foreach (Collider component in colliderComponents)
		{
			component.enabled = false;
		}




		if (bundle.error != null) {
			logText.text = "load error:" + bundle.error;
		
		}
		Debug.Log ("DynamicModelTrackableEventHandler LoadModel FileLoaded");
		//GameObject.Find ("YellowCube" + "(Clone)");
		if (targetModel != null) {
			logText.text = "load target:" + bundle.isDone;

		}
		logText.text = "model create success";
		targetModel.transform.SetParent (tb.gameObject.transform);
		targetModel.transform.localPosition = new Vector3 (0f, 0f, 0f);
		targetModel.transform.localRotation = new Quaternion(0f, 0f, 0f, 0f);
		targetModel.transform.localScale = new Vector3 (0.5f, 0.5f, 0.5f);
		targetModel.gameObject.SetActive (true);

		Debug.Log ("DynamicModelTrackableEventHandler LoadModel Created");
		logText.text = "DynamicModelTrackableEventHandler LoadModel Created";
		bundle.assetBundle.Unload(false);
		logText.text = "load success";
	}

	public void Btnclick ()
	{
		var vb = VuforiaARController.Instance;
		vb.RegisterVuforiaStartedCallback (LoadDataSet);
	}

	public void unloadBtnClicked ()
	{
		UnloadDataSet ();
	}
	public void ShowDataSetBtnClicked ()
	{
		show ();
	}

	void show ()
	{
		ObjectTracker tracker = TrackerManager.Instance.GetTracker<ObjectTracker> ();

		List<DataSet> dataSets = tracker.GetDataSets ().ToList ();
		if (dataSets.Count > 0) {
			foreach (var dataset in dataSets)
				Debug.Log ("datasetName------" + GetDataSetName (dataset));
		}
		Debug.Log ("--------------------");
	}

	void UnloadDataSet ()
	{
		ObjectTracker tracker = TrackerManager.Instance.GetTracker<ObjectTracker> ();
		if (tracker != null)
			tracker.Stop ();
		List<DataSet> activeDataSets = tracker.GetActiveDataSets ().ToList ();

		if (activeDataSets.Count > 0) {
			DataSet ds = activeDataSets.ElementAt (0);
			IEnumerable<Trackable> tbs = ds.GetTrackables ();
			StateManager stateManager = TrackerManager.Instance.GetStateManager ();
			tracker.DeactivateDataSet (ds);
			foreach (Trackable tb in tbs) {
				Debug.Log (tb.Name);

				stateManager.DestroyTrackableBehavioursForTrackable (tb, false);
				GameObject ob = GameObject.Find ("DynamicImageTarget-" + tb.Name);
				if (ob != null) {
					Debug.Log (tb.Name);
					ob.SetActive (false);
					Destroy (ob);
				}
			}
			tracker.DestroyDataSet (ds, false);
			Resources.UnloadUnusedAssets ();
		}
		tracker.Start ();

		List<DataSet> dataSets = tracker.GetDataSets ().ToList ();
		if (dataSets.Count > 0) {
			foreach (var dataset in dataSets)
				Debug.Log ("datasetName------" + GetDataSetName (dataset));
		}
	}
		
	string GetDataSetName (DataSet ds)
	{
		string datasetPath = ds.Path;
		string datasetName = datasetPath.Substring (datasetPath.LastIndexOf ("/") + 1);
		string datasetName2 = datasetName.TrimEnd (".xml".ToCharArray ());
		return datasetName2.ToLower ();//使用小写形式，因为trackablename属性返回的是小写形式
	}

	void LoadDataSet ()
	{
		ObjectTracker tracker = TrackerManager.Instance.GetTracker<ObjectTracker> ();
		List<DataSet> activeDataSets = tracker.GetDataSets ().ToList ();
		List<DataSet> dataSets = tracker.GetDataSets ().ToList ();
		Debug.Log ("activeDataset count:" + activeDataSets.Count);
		Debug.Log ("Dataset count:" + dataSets.Count);

		foreach (DataSet ds in activeDataSets) {
			Debug.Log ("dataset name-" + GetDataSetName (ds));

			string dsName = GetDataSetName (ds);
			if (dsName == dataSetName.ToLower ())
				return;
		}

		Debug.Log ("start load");
		DataSet dataSet = tracker.CreateDataSet ();

		if (dataSet.Load (dataSetName)) {
			tracker.Stop ();
			if (!tracker.ActivateDataSet (dataSet)) {
				Debug.Log ("fail to activate dataset" + dataSetName);
			}
			if (!tracker.Start ()) {
				Debug.Log ("fail to start tracker");
			}

			IEnumerable<TrackableBehaviour> tbs = TrackerManager.Instance.GetStateManager ().GetTrackableBehaviours ();
			foreach (TrackableBehaviour tb in tbs) {
				Debug.Log ("memory already has imageTarget:" + tb.name);
				if (tb.name == "New Game Object") {// 新创建的总是被命名为 "New Game Object"
					Debug.Log ("new imageTarget");
					//if (tb.TrackableName == "tarmac") {//可以通过这个属性来加载特定的模型
					tb.gameObject.name = "DynamicImageTarget-" + tb.TrackableName;
					tb.gameObject.AddComponent<DefaultTrackableEventHandler> ();
					tb.gameObject.AddComponent<TurnOffBehaviour> ();

					if (augmentObject != null) {
						GameObject augmentation = (GameObject)GameObject.Instantiate (augmentObject);
						augmentation.transform.transform.parent = tb.gameObject.transform;
						augmentation.transform.localPosition = new Vector3 (0f, 0f, 0f);
						//augmentation.transform.localRotation = Quaternion.identity;
						//augmentation.transform.localRotation = Quaternion.identity;
						augmentation.transform.Rotate (new Vector3 (0f, 90f, 0f));
						augmentation.transform.localScale = new Vector3 (0.07f, 0.07f, 0.07f); //maomao's size is 0.07
						//augmentation.transform.localScale = new Vector3 (0.6f, 0.6f, 0.6f);
						augmentation.gameObject.SetActive (true);
						AudioSource audio = augmentation.GetComponent<AudioSource> ();
						if (audio != null)
							audio.Stop ();
					} else {
						Debug.Log ("no augmentation object for :" + tb.TrackableName);
					}

					//}
				}
			}
		} else {
			Debug.Log ("Failed to load dataset" + dataSetName);
		}
	}

	void Update ()
	{
		
	}



}
