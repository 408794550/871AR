/*==============================================================================
Copyright (c) 2010-2014 Qualcomm Connected Experiences, Inc.
All Rights Reserved.
Confidential and Proprietary - Protected under copyright and other laws.
==============================================================================*/

using UnityEngine;
using UnityEngine.UI;
using System.Collections;
using System.IO;
using System;
using System.Collections.Generic;
using Lean.Touch;
using UnityEngine.Events;

namespace Vuforia
{
    /// <summary>
    /// A custom handler that implements the ITrackableEventHandler interface.
    /// </summary>
    public class DefaultTrackableEventHandler : MonoBehaviour,
                                                ITrackableEventHandler
	{   
		#region PUBLIC_MEMBER_VARIABLES
		public bool isModelLoaded = false; //这个属性设置为public，因为在内存管理的时候可能需要改变这个值，当内存管理类删除了这个模型之后，需要置为false，不然以后这个识别图对应的这个资源模型加载不了
		public System.UInt64 modelIndex = 0; //每个模型，默认的modelIndex都为0，当扫描之后modelIndex的值变为AssMemoryManager类中的index值，最后所有模型中，modelIndex最小的，就删除。
		public string trackableName; //
		public string modelSource, targetName;
		#endregion // PUBLIC_MEMBER_VARIABLES

        #region PRIVATE_MEMBER_VARIABLES
		private TrackableBehaviour mTrackableBehaviour; 
		private AudioSource audioSource;
		//GameObject [] initGos;
		private Camera camera1;
		private Transform cameraTransform;
		float zAxisDistance = 0.0f;
		private Vector3 modelOriginPos;
		private Quaternion modelOriginQua;
		private Vector3 modelOriginLocalPos;
		private Quaternion modelOriginLocalQua;
		private Vector3 modelOriginScale;
		//private Text logText;
		//private VuforiaBehaviour vuforiaBehaviour;
		private int lostCount = 0;

		private LitJson.JsonData targetInfo;
        #endregion // PRIVATE_MEMBER_VARIABLES

		private UnityAction offCardListener;
		private UnityAction recoveryModelListener;
		bool isFirstFound = true;
		bool modelIsOffCard = false;
        #region UNTIY_MONOBEHAVIOUR_METHODS
    
        void Start()
        {
			//logText = GameObject.FindObjectOfType<Text>();
            mTrackableBehaviour = GetComponent<TrackableBehaviour>();
            if (mTrackableBehaviour)
            {
                mTrackableBehaviour.RegisterTrackableEventHandler(this);
				trackableName = mTrackableBehaviour.TrackableName;
			}else
			{
				Utility.LogPrint ("==========111111111");
			}

			cameraTransform = GameObject.FindWithTag ("MainCamera").transform;
			offCardListener = new UnityAction(OffCard);
			recoveryModelListener = new UnityAction (RecoveryModelToTarget);
//			if (this.transform.childCount >= 1) {
//				modelOriginPos = this.transform.GetChild (0).position;
//			}
//
        }

        #endregion // UNTIY_MONOBEHAVIOUR_METHODS

        #region PUBLIC_METHODS

        /// <summary>
        /// Implementation of the ITrackableEventHandler function called when the
        /// tracking state changes.
        /// </summary>

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

		public void setModelSource(
			string path, 
			LitJson.JsonData targetInfo) 
		{
			this.targetInfo = targetInfo;
			modelSource = path;
			LitJson.JsonData assetbundlesData = this.targetInfo;
			targetName = (string)assetbundlesData ["targetName"];

			Utility.LogPrint("setModelSource");
			Debug.Log ("targetname already save:"+targetName);
		}

		#endregion // PUBLIC_METHODS

		private IEnumerator LoadModel() 
		{
			string path = modelSource;
			Debug.Log ("DynamicModelTrackableEventHandler LoadModel " + path);
			if (File.Exists (path)) 
			{
				Utility.PrepareForSendMessage ("LoadAssetBundle", "0", targetInfo ["targetName"]);
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
						//Instantiate success
						go.transform.SetParent (this.gameObject.transform);
						if (i == 0) continue; 	// the first gameobject needn't hidden
						Utility.HideRendererAndCollider (go.transform);
					} else 
					{
						Debug.Log ("model loaded but instantiate fail");
					}
				}
				#region MultiTargetManager
				for (int i = 0; i < this.transform.childCount - 1; ++i) 
				{
					LeanFingerTap tap = this.transform.GetChild (i).GetComponentInChildren<LeanFingerTap> (true);
					tap.nextARObject = this.transform.GetChild (i + 1).gameObject;
				}
				if (this.transform.childCount > 1) 
				{
					GameObject startGo = this.transform.GetChild (0).gameObject;
					LeanFingerTap tap = this.transform.GetChild (this.transform.childCount - 1).GetComponentInChildren<LeanFingerTap> (true);
					tap.nextARObject = startGo;
				}
				#endregion //MultiTargetManager

				bundle.assetBundle.Unload (false);
				isModelLoaded = true;
				Debug.Log ("DynamicModelTrackableEventHandler LoadModel Created");

				#region ass memorymanager
				/*
				 * 这里AssetBundle的管理形式是：当程序中已经加载的AssetBundle已经超过一定数目时（现在暂定5个），就从中删除一个index最小的模型，此时在对应加载最新的模型
				 */
				if (AssMemoryManager.instance.dicCount >= 5) 
				{
					Debug.Log("need to delete some model from memory");
					AssMemoryManager.RemoveGoFromMemoryManager();
				}
				AssMemoryManager.AddGOToMemoryManager (mTrackableBehaviour.TrackableName, this.gameObject);
				Utility.LogPrint ("add gameobject to target,the trackName is:" + mTrackableBehaviour.TrackableName);
				#endregion //memorymanager end

				//notify mobile load ass success
				Utility.PrepareForSendMessage ("LoadAssetBundle", "1", targetInfo);
			} else 
			{
				//file not exist,notify mobile to load the ass;
				Utility.LogPrint ("load model error,because the file path is not exist");
				Utility.PrepareForSendMessage ("DownAssetBundle", "1", targetInfo);
			}
		}
        #region PRIVATE_METHODS

        private void OnTrackingFound()
        {
			if (ModelManager._instance.isOffCard && modelIsOffCard)
			{
				Debug.Log ("handle reFound");
				ModelManager._instance.offCardModelIsMoving = false;
				if (LeanTouch.GetCamera(ref camera1) == true)
				{
					ModelManager._instance.ModelCountPlusOne();//发现的模型数目+1
					//float dis = go.transform.position.z - camera1.transform.position.z; //计算与相机之间的距离，确定z = 多少
					Vector3 position = new Vector3 (Screen.width/2, Screen.height/2,zAxisDistance); // 经调试，这里Z直接设置成20，显示在屏幕中的模型大小比较合适
					position = camera1.ScreenToWorldPoint (position);
					ModelManager._instance.offCardModelTransform.position = position;
					//go.transform.localRotation = modelOriginQua;
					//这个角度的模型脱卡后稍微好看一点
					//Utility.offCardModelTransform.localRotation = Quaternion.Euler(new Vector3(-29,-29,8));
					ModelManager._instance.offCardModelTransform.localRotation = Quaternion.Euler(new Vector3(29,151,-8));
					return;
				}				//return;
			}

			if (!isModelLoaded)
			{ //if no model bind
				StartCoroutine (LoadModel ());
			}
			ModelManager._instance.ModelCountPlusOne();//发现的模型数目+1
			if (ModelManager._instance.modelCount == 1)
			{
				Utility.PrepareForSendMessage ("FoundTarget", "1");
			} else
			{
				Debug.Log ("----current model count ----" + ModelManager._instance.modelCount);
			}
			if (ModelManager._instance.isOffCard)
			{
				EventManager.StopListening ("RecoveryModelToTarget", recoveryModelListener);
				EventManager.TriggerEvent ("RecoveryModelToTarget");//还原其他模型到target。因为脱卡只留一个模型
			}
			//RecoveryModelToTarget(); 
			if (this.transform.childCount >= 1) 
			{
				//show the first child transform
				Transform foundTransform = this.transform.GetChild (0);
				if (isFirstFound)
				{
					EventManager.StartListening ("OffCard", offCardListener);
					//这行代码是方便测试用的，正式使用应该要用LoadModel方法中的。
					AssMemoryManager.AddGOToMemoryManager (mTrackableBehaviour.TrackableName, this.gameObject);
					//这里记录初始位置，便于以后各种手势之后可以恢复原来的状态。第一次found的时候肯定是初始状态了
					modelOriginLocalPos = foundTransform.localPosition;
					modelOriginLocalQua = foundTransform.localRotation;
					modelOriginPos = foundTransform.position;
					modelOriginQua = foundTransform.rotation;
					modelOriginScale = foundTransform.localScale;
					isFirstFound = false;
				} else
				{
					foundTransform.localPosition = modelOriginLocalPos;
					foundTransform.localRotation = modelOriginLocalQua;
					foundTransform.localScale = modelOriginScale;
				}
				Utility.ShowRendererAndCollider (foundTransform);
				//ParticleSystem foundParticle = GetTypeParticle (foundTransform, "Found_Particle");
				Animator animator = GetComponentInChildren<Animator> ();
				LeanRotationControl rotationControl = GetComponentInChildren<LeanRotationControl> ();
				if (rotationControl) 	{	rotationControl.enabled = true;		}
				//if (foundParticle)		{	foundParticle.Play ();			}
				if (animator) 			{	animator.Play("Take 001",0,0);		}
				ParticleControl (true, "Found_Particle", this.transform.GetChild (0));

				if (!ModelManager._instance.isOffCard)
					ModelManager._instance.currentRotationTransform = this.transform.GetChild (0);
			} else 
			{
				Debug.Log ("child count is 0");
			}
			//每次扫描过后，更新model的Index值，后面AssMemoryManager会根据这个值来管理这些模型
			//AssMemoryManager.UpdateModelIndex(mTrackableBehaviour.TrackableName);
			if (ModelManager._instance.isOffCard)
			{
				EventManager.TriggerEvent ("OffCard");
			}
			
			Debug.Log ("Trackable " + mTrackableBehaviour.TrackableName + " --------------------------------  found");
		}
			
        private void OnTrackingLost()
        {
			ModelManager._instance.offCardModelIsMoving = false;
			ModelManager._instance.currentModelisMoving = false;
			//EventManager.StopListening ("OffCard", offCardListener);
			if (ModelManager._instance.isOffCard && modelIsOffCard)
			{
				if (LeanTouch.GetCamera(ref camera1) == true)
				{
					//float dis = go.transform.position.z - camera1.transform.position.z; //计算与相机之间的距离，确定z = 多少
					ModelManager._instance.ModelCountMinusOne();
					Vector3 position = new Vector3 (Screen.width/2, Screen.height/2, zAxisDistance); // 经调试，这里Z直接设置成20，显示在屏幕中的模型大小比较合适
					position = camera1.ScreenToWorldPoint (position);
					ModelManager._instance.offCardModelTransform.position = position;
					Animator animator2 = ModelManager._instance.offCardModelTransform.GetComponent<Animator> ();
					if (animator2)
					{
						animator2.Play ("Take 001");
					}
					//go.transform.localRotation = modelOriginQua;
					//这个角度的模型脱卡后稍微好看一点
					//Utility.offCardModelTransform.localRotation = Quaternion.Euler(new Vector3(-29,-29,8));
					//Utility.offCardModelTransform.localRotation = Quaternion.Euler(new Vector3(29,151,-8));
					return;
				}
			}
			for (int i = 0; i < this.transform.childCount; i++) 
			{	
				Utility.HideRendererAndCollider (this.transform.GetChild (i));
			}

			Animator animator = GetComponentInChildren<Animator> ();
			if (animator) 
			{
				animator.Play("Take 001");
				//animator.Stop();
//				ParticleSystem tapParticle = GetTypeParticle (this.transform.GetChild (0),"Tap_Particle");
//				ParticleSystem foundParticle = GetTypeParticle (this.transform.GetChild (0),"Found_Particle");
//				if (tapParticle)	{	tapParticle.Stop ();	} 
//				if (foundParticle)	{	foundParticle.Stop ();	} 
			}
			if (this.transform.childCount > 0)
			{
				ParticleControl (false, "Found_Particle", this.transform.GetChild (0));
			}

			lostCount++;
			if (lostCount > 2)
			{
				if (ModelManager._instance.isOffCard)
				{
					EventManager.StartListening ("RecoveryModelToTarget", recoveryModelListener);
				}
				//刚加载识别图的时候，总是会先执行Lost方法两次，所以，两次之后再执行脱卡的方法，估计还得改
				ModelManager._instance.ModelCountMinusOne ();// lost之后，found数目-1

				if (ModelManager._instance.modelCount == 0 && ModelManager._instance.currentRotationTransform)
				{
					//ModelManager._instance.currentRotationTransform = null;
					//ModelManager._instance.currentModelisMoving = false;
					Utility.PrepareForSendMessage ("FoundTarget", "0");
				}
			}
			Debug.Log ("Trackable " + mTrackableBehaviour.TrackableName + " -------------------------------- lost");
		}

		void SetModelToCamera()
		{
			if (this.transform.childCount > 0) 
			{
				GameObject go = this.transform.GetChild (0).gameObject;
				Utility.ShowRendererAndCollider (go.transform);
				ModelManager._instance.offCardModelTransform = go.transform;
				//AssMemoryManager.AddModelToCamera (mTrackableBehaviour.TrackableName, go);

				if (LeanTouch.GetCamera(ref camera1) == true)
				{
					//go.transform.parent = Camera.main.transform.GetChild (0);
					zAxisDistance = Vector3.Distance (go.transform.parent.position, Camera.main.transform.position) - 2;
					Vector3 position = new Vector3 (Screen.width/2, Screen.height/2, zAxisDistance); // 经调试，这里Z直接设置成20，显示在屏幕中的模型大小比较合适

					position = camera1.ScreenToWorldPoint (position);
					//go.transform.localScale = new Vector3 (1, 1, 1);
					go.transform.position = position;
					go.transform.parent = cameraTransform.parent;

					//go.transform.localRotation = modelOriginQua;
					//这个角度的模型脱卡后稍微好看一点
					ModelManager._instance.offCardModelTransform.localRotation = Quaternion.Euler(new Vector3(29,151,-8));
					//float dis = go.transform.position.z - camera1.transform.position.z; //计算与相机之间的距离，确定z = 多少
				}
			}
		}

		void OffCard()
		{
			//string trackName = mTrackableBehaviour.TrackableName; //AssMemoryManager.GetGameojectNameWithMaxIndex ();

			string trackName = AssMemoryManager.GetGameojectNameWithMaxIndex ();
			if (mTrackableBehaviour.TrackableName.Equals (trackName))
			{
				//SetModelToCamera ();
				modelIsOffCard = true;
				EventManager.StartListening ("RecoveryModelToTarget",recoveryModelListener);
			} else
			{
				for (int i = 0; i < this.transform.childCount; i++) 
				{
					Utility.HideRendererAndCollider (this.transform.GetChild (i));
				}
				modelIsOffCard = false;
				Debug.Log ("---" + mTrackableBehaviour.TrackableName + "is not max index");
			}
		}
			
		/// <summary>
		/// Recoveries the model to target.所有的脱卡类的模型都是记录在AssMemoryManager中的一个Dic中，所以要还原每个模型到原本的识别图，需要去管理类中找到这个模型，
		/// 以及其所对应的位置，再还原
		/// </summary>
		void RecoveryModelToTarget()
		{
			Debug.Log ("originPosition is ---"+modelOriginPos);
			//AssMemoryManager.RecoveryModelToTarget (mTrackableBehaviour.TrackableName,this.gameObject,modelOriginLocalPos,modelOriginLocalQua);	
			EventManager.StopListening ("RecoveryModelToTarget",recoveryModelListener);
			modelIsOffCard = false;
			//EventManager.StopListening ("OffCard", offCardListener);
		}
			
		//考虑规范这个找粒子效果的方法，建个类来管理，然后每种离子类型都考虑换成枚举；
		ParticleSystem GetTypeParticle(Transform tf,string particleType)
		{
			ParticleSystem []pss = tf.GetComponentsInChildren<ParticleSystem> (true);
			foreach (ParticleSystem ps in pss) 
			{
				if (ps.name.ToLower().Equals (particleType.ToLower())) 
				{
					return ps;
				}
			}
			return null;
		}
		void ParticleControl(bool isFound,string particleType,Transform tf)
		{
			ParticleSystem []pss = tf.GetComponentsInChildren<ParticleSystem> (true);
			foreach (ParticleSystem ps in pss) 
			{
				if (ps.name.ToLower().Equals (particleType.ToLower())) 
				{
					if (!isFound)
					{
						ps.Stop ();
					} else
					{
						ps.Play ();
					}
				}
			}
		}
    }
        #endregion // PRIVATE_METHODS
}
