using UnityEngine;
using UnityEngine.UI;
using System.Collections;
using System.IO;
using System;
using System.Collections.Generic;
using Lean.Touch;
using UnityEngine.Events;
using Vuforia;

public class TrackableEventHandler : MonoBehaviour,
	ITrackableEventHandler
{   
	#region PUBLIC_MEMBER_VARIABLES
	public bool 				isModelLoaded = false; //这个属性设置为public，因为在内存管理的时候可能需要改变这个值，当内存管理类删除了这个模型之后，需要置为false，不然以后这个识别图对应的这个资源模型加载不了
	[HideInInspector]
	public System.UInt64 		modelIndex = 0; //每个模型，默认的modelIndex都为0，当扫描之后modelIndex的值变为AssMemoryManager类中的index值，最后所有模型中，modelIndex最小的，就删除。
	[HideInInspector]
	public string				trackableName; //
	[HideInInspector]
	public string 				modelSource;
	[HideInInspector]
	public string 				targetName;
	#endregion // PUBLIC_MEMBER_VARIABLES

	#region PRIVATE_MEMBER_VARIABLES
	private TrackableBehaviour 	mTrackableBehaviour; 
	private AudioSource 		audioSource;
	private int 				lostCount = 0;
	private LitJson.JsonData 	targetInfo;
	#endregion // PRIVATE_MEMBER_VARIABLES

	private UnityAction 		offCardListener;
	private UnityAction 		recoveryModelListener;
	private bool 				isFirstFound = true;
	#region UNTIY_MONOBEHAVIOUR_METHODS

	void Start()
	{
		//logText = GameObject.FindObjectOfType<Text>();
		mTrackableBehaviour = GetComponent<TrackableBehaviour>();
		if (mTrackableBehaviour)
		{
			mTrackableBehaviour.RegisterTrackableEventHandler(this);
			trackableName = mTrackableBehaviour.TrackableName;
		}
	}

	#endregion // UNTIY_MONOBEHAVIOUR_METHODS

	#region PUBLIC_METHODS

	public void OnTrackableStateChanged(
		TrackableBehaviour.Status previousStatus,
		TrackableBehaviour.Status newStatus)
	{
		if (newStatus == TrackableBehaviour.Status.DETECTED ||
			newStatus == TrackableBehaviour.Status.TRACKED ||
			newStatus == TrackableBehaviour.Status.EXTENDED_TRACKED)
		{
			OnTrackingFound ();
		}
		else
		{
			OnTrackingLost();
		}
	}
	public void SetModelSource_MiTu(string path, 
		LitJson.JsonData dataSetInfo)
	{
		this.targetInfo = dataSetInfo;
		modelSource = path;
	}


	public void setModelSource(
		string path, 
		LitJson.JsonData targetInfo) 
	{
		this.targetInfo = targetInfo;
		modelSource = path;
		LitJson.JsonData assetbundlesData = this.targetInfo;
		targetName = (string)assetbundlesData ["targetName"];
	}

	#endregion // PUBLIC_METHODS

	private IEnumerator LoadModel() 
	{
		string path = modelSource;
		Utility.LogPrint ("DynamicModelTrackableEventHandler LoadModel " + path);
		if (File.Exists (path)) 
		{
			Utility.PrepareForSendMessage ("LoadAssetBundle", "0", mTrackableBehaviour.TrackableName);
			string path1 = "file://" + modelSource;
			WWW bundle = new WWW (path1);
			yield return bundle;
			GameObject []gos =  bundle.assetBundle.LoadAllAssets<GameObject>();
			for(int i = 0;i<gos.Length;++i)
			{   
				GameObject go;
				yield return  go = Instantiate(gos [i]);
				if (go) 
				{
					go.transform.position = this.transform.position;
					go.transform.SetParent (this.gameObject.transform);
					 
					ModelSelfManager modelSelfManager = go.GetComponent<ModelSelfManager> ();
					modelSelfManager.modelOriginLocalPos = go.transform.localPosition;
					modelSelfManager.modelOriginLocalQua = go.transform.localRotation;
					modelSelfManager.modelOriginScale	 = go.transform.localScale;

					if (i == 0)
					{	continue;	} 	// the first gameobject needn't hidden
					go.SetActive(false);
				} else 
				{
					Utility.LogPrint (mTrackableBehaviour.TrackableName + "--model loaded but instantiate fail");
				}
			}
			bundle.assetBundle.Unload (false);

			isModelLoaded = true;
			Utility.LogPrint (mTrackableBehaviour.TrackableName + "--Model Created");
			//------------------
			//这里先触发了Trigger，然后才调用的SetActive（true），这样应该能避免自己也收到关闭音效的事件。待测试 (没问题)
			if (ModelManager._instance.modelCount > 1)
			{
				EventManager.TriggerEvent ("Found");
			}
			if (ModelManager._instance.modelCount == 1)
			{ 
				Utility.PrepareForSendMessage ("FoundTarget", "1");
			} 
			if (this.transform.childCount >= 1)
			{
				this.transform.GetChild (0).gameObject.SetActive (true);
				//这行代码是方便测试用的，正式使用应该要用LoadModel方法中的。
				if (isFirstFound)
				{ 
					AssMemoryManager.AddGOToMemoryManager (mTrackableBehaviour.TrackableName, this.gameObject); 
				} 
				ModelManager._instance.currentRotationTransform = this.transform.GetChild (0);
			} else
			{
				Utility.LogPrint (mTrackableBehaviour.TrackableName + "--child count is 0");
			}
			//每次扫描过后，更新model的Index值，后面AssMemoryManager会根据这个值来管理这些模型
			AssMemoryManager.UpdateModelIndex (mTrackableBehaviour.TrackableName);
			if (ModelManager._instance.isOffCard)
			{	
				EventManager.TriggerEvent ("OffCard"); 
			}
			//-----------------------
			#region ass memorymanager
			/*
			 * 这里AssetBundle的管理形式是：当程序中已经加载的AssetBundle已经超过一定数目时（现在暂定5个），就从中删除一个index最小的模型，此时在对应加载最新的模型
			 */
			if (AssMemoryManager.instance.dicCount >= 5)  
			{
				Utility.LogPrint("when load "+ mTrackableBehaviour.TrackableName + "--need to delete some model from memory");
				AssMemoryManager.RemoveGoFromMemoryManager();
			}
			AssMemoryManager.AddGOToMemoryManager (mTrackableBehaviour.TrackableName, this.gameObject);
			Utility.LogPrint ("add gameobject to target,the trackName is--" + mTrackableBehaviour.TrackableName);
			#endregion //memorymanager end
			//notify mobile load ass success
			Utility.PrepareForSendMessage ("LoadAssetBundle", "1", mTrackableBehaviour.TrackableName);
		} else 
		{
			//file not exist,notify mobile to load the ass;
			Utility.LogPrint (mTrackableBehaviour.TrackableName+ "--load model error,because the file path is not exist");
			Utility.PrepareForSendMessage ("DownAssetBundle", "1", targetInfo);
		}
	}
	#region PRIVATE_METHODS

	private void OnTrackingFound()
	{
		ModelManager._instance.ModelCountPlusOne ();//发现的模型数目+1
		//在发现模型之后，应该重置手机的休息时间。
		CountDown._instance.ResetTime ();
		if (ModelManager._instance.isOffCard && (ModelManager._instance.offCardTargetTransform && ModelManager._instance.offCardTargetTransform == this.transform))
		{
			Utility.LogPrint ("refound");
//			ModelManager._instance.offCardModelIsMoving = false;
//			ModelManager._instance.ModelCountPlusOne();//发现的模型数目+1
//			float disY = ModelManager._instance.offCardModelTransform.GetComponent<ModelSelfManager> ().tooTall ? Screen.height / 4 : Screen.height / 2;
//			Vector3 position = new Vector3 (Screen.width/2, disY, ModelManager._instance.zAxisDis); 
//			position = ModelManager._instance.offCardCamera.ScreenToWorldPoint (position);
//			ModelManager._instance.offCardModelTransform.position = position;
//			ModelManager._instance.offCardModelTransform.localRotation = Quaternion.Euler(new Vector3(29,151,-8));
//			Utility.LogPrint ("Refound --" + mTrackableBehaviour.TrackableName);
			return;
		}
		//如果模型没有加载，去加载。
		if (!isModelLoaded)
		{ 
			StartCoroutine (LoadModel ()); 
		} else
		{

			//这里先触发了Trigger，然后才调用的SetActive（true），这样应该能避免自己也收到关闭音效的事件。待测试 (没问题)
			if (ModelManager._instance.modelCount > 1)
			{
				EventManager.TriggerEvent ("Found");
			}
			if (ModelManager._instance.modelCount == 1)
			{ 
				Utility.PrepareForSendMessage ("FoundTarget", "1");
			} 
			if (this.transform.childCount >= 1)
			{
				this.transform.GetChild (0).gameObject.SetActive (true);
				//这行代码是方便测试用的，正式使用应该要用LoadModel方法中的。
				if (isFirstFound)
				{ 
					AssMemoryManager.AddGOToMemoryManager (mTrackableBehaviour.TrackableName, this.gameObject); 
				} 
				ModelManager._instance.currentRotationTransform = this.transform.GetChild (0);
			} else
			{
				Utility.LogPrint (mTrackableBehaviour.TrackableName + "--child count is 0");
			}
			//每次扫描过后，更新model的Index值，后面AssMemoryManager会根据这个值来管理这些模型
			AssMemoryManager.UpdateModelIndex (mTrackableBehaviour.TrackableName);
			if (ModelManager._instance.isOffCard)
			{	
				EventManager.TriggerEvent ("OffCard"); 
			}
			//Utility.LogPrint ("--  "+Vector3.Distance (transform.position, Camera.main.transform.position));

		}
		Utility.LogPrint ("Trackable " + mTrackableBehaviour.TrackableName + " --- found");
	}

	private void OnTrackingLost()
	{
		//ModelManager._instance.offCardModelIsMoving = false;
		if (ModelManager._instance.isOffCard && (ModelManager._instance.offCardTargetTransform && ModelManager._instance.offCardTargetTransform == this.transform))
		{
			ModelManager._instance.ModelCountMinusOne();// lost之后，found数目-1
			Utility.LogPrint (mTrackableBehaviour.TrackableName + "--Relost");
//			ModelManager._instance.ModelCountMinusOne();
//			float disY = ModelManager._instance.offCardModelTransform.GetComponent<ModelSelfManager> ().tooTall ? Screen.height / 4 : Screen.height / 2;
//			Vector3 position = new Vector3 (Screen.width / 2, disY, ModelManager._instance.zAxisDis);
//			position = ModelManager._instance.offCardCamera.ScreenToWorldPoint (position);
//			ModelManager._instance.offCardModelTransform.position = position;
//			Animator animator = ModelManager._instance.offCardModelTransform.GetComponent<Animator> ();
//			if (animator)	{	animator.Play ("Take 001");	}
			return;
		}
		for (int i = 0; i < this.transform.childCount; i++) 
		{	
			this.transform.GetChild (i).gameObject.SetActive (false);
		}

		lostCount++;
		if (lostCount > 1) //实际从内存加载识别图的过程中，只会lost一次，但是如果直接在editor中测试，却会先执行两次。
		{
			ModelManager._instance.ModelCountMinusOne();// lost之后，found数目-1
			if (ModelManager._instance.modelCount == 0 && ModelManager._instance.currentRotationTransform)
			{ 
				Utility.PrepareForSendMessage ("FoundTarget", "0");
				ModelManager._instance.currentRotationTransform = null;
//				ModelManager._instance.offCardModelTransform = null;
//				ModelManager._instance.offCardTargetTransform = null;
			} else
			{
				Utility.LogPrint ("===========");
			}
		}
		Utility.LogPrint ("Trackable " + mTrackableBehaviour.TrackableName + " --- lost");
	}
}
	#endregion // PRIVATE_METHODS
