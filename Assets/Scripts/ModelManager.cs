using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;


public class ModelManager : MonoBehaviour {

	public 	static 	ModelManager 	_instance;
	public 	Camera 			offCardCamera;
	public 	GameObject 		ARCamera;
	[HideInInspector]
	public  bool 			isOffCard 					= false; //这个变量的值只在RespondMethodWithoutMS脚本中的方法SetOffCardState中修改，且Unity不主动修改；
	[HideInInspector]
	public  Transform 		currentRotationTransform; 		//未脱卡时，当前应该旋转的模型;
	[HideInInspector]
	public 	Transform		offCardTargetTransform; 		//脱卡模型所对应的识别图，保存识别图的引用方便脱卡结束后复原模型到识别图
	[HideInInspector]
	public  Transform 		offCardModelTransform; 			//这个是脱卡后的当前脱卡模型
	[HideInInspector]
	public 	int 			modelCount 					= 0;  //这个变量用来记录当前有几个识别图处于found状态，便于通知native 当前的一些按钮是否应该因为模型处于lost状态而置灰
	[HideInInspector]
	public  bool 			currentModelisMoving 		= false;
	[HideInInspector]
	public  bool 			offCardModelIsMoving 		= false;
	[HideInInspector]
	public  float 			zAxisDis 					= 15.0f; 
	[HideInInspector]
	public  AudioSource 	audioSource;//因为只允许一个模型的声音在播放，所以所有模型上的audioSource都使用这个变量来播放，而不是找到他们后播放；
	public  GameObject 		offCardQuad;
	private UnityAction 	offCardListener;
	private UnityAction 	recoveryModelListener;
	private bool 			isFirst 					= true;

	public static ModelManager Instance 
	{
		get 
		{
			// 不需要再检查变量是否为null
			return _instance;
		}
	}

	void Awake () 
	{
		_instance = this;
	}
	// Use this for initialization
	void Start ()
	{
		offCardListener = new UnityAction(OffCard);
		recoveryModelListener = new UnityAction (RecoveryModelToTarget);

		EventManager.StartListening ("OffCard", offCardListener);
		EventManager.StartListening ("RecoveryModelToTarget", recoveryModelListener);
	}

	void OffCard()
	{
		//当前有脱卡模型时，如果又扫了新的模型，需要把旧脱卡模型复原，
		if (isOffCard && (currentRotationTransform != null && currentRotationTransform != offCardModelTransform)) 
		{ 
			RecoveryModelToTarget (); 
		}
		offCardModelTransform = null;
		offCardTargetTransform = null;
		//脱卡
		SetModelToCamera ();
	}
	void SetModelToCamera()
	{
		if (currentRotationTransform)
		{
			Utility.LogPrint("start to set model to camera");

			//确定可以脱卡，给offCardModel赋值
			offCardModelTransform = currentRotationTransform;
			offCardTargetTransform = currentRotationTransform.parent;
			ModelSelfManager modelSelfManager = offCardModelTransform.GetComponent<ModelSelfManager> ();
			//计算纵深、设置角度、位置
			float disY = GetOffCardModelHeight (modelSelfManager.modelOnScreenHeight);
			Vector3 position = new Vector3 (Screen.width / 2, disY, zAxisDis); // 经调试，这里Z直接设置成20，显示在屏幕中的模型大小比较合适
			currentRotationTransform.position = offCardCamera.ScreenToWorldPoint (position);
			currentRotationTransform.parent = offCardCamera.transform;
			modelSelfManager.StopAnimatorAndParticle ();
			currentRotationTransform.localRotation = Quaternion.Euler (new Vector3 (29, 151, -8));
			if (isFirst)
			{
				Vector3 pos = currentRotationTransform.position;
				offCardQuad.transform.position = new Vector3 (0, pos.y, 0);
				isFirst = false;
			}
		} else
		{
			Utility.LogPrint("current rotation transorm is null");
		}
	}
	void RecoveryModelToTarget()
	{
		Utility.LogPrint ("Respond method RecoveryModelToTarget");
		if (offCardModelTransform && offCardTargetTransform)
		{
			offCardModelTransform.parent = offCardTargetTransform;
			offCardModelTransform.gameObject.SetActive (false);
			Utility.LogPrint ("Recovery Model to Target");

		} else
		{
			Utility.LogPrint ("offcard info transform is null");
		}
		offCardModelTransform = null;
		offCardTargetTransform = null;
	}
	float GetOffCardModelHeight(ModelOffCardHeightEnum modelOffcardHeight)
	{
		float dis = 0.0f;
		switch (modelOffcardHeight)
		{
		case ModelOffCardHeightEnum.four_eighth:	{	dis = Screen.height / 2;		break;	}
		case ModelOffCardHeightEnum.three_eighth:	{	dis = Screen.height / 8 * 3;	break;	}
		case ModelOffCardHeightEnum.two_eighth:		{	dis = Screen.height / 8 * 2;	break;	}
		case ModelOffCardHeightEnum.one_eighth:		{	dis = Screen.height / 8;		break;	}
		}
		return dis;
	}

	//这里保证访问模型总数时是原子操作，而不至于同时访问了这个变量
	private static Object lockObj = new Object ();
	public void ModelCountPlusOne()
	{
		lock (lockObj) 
		{
			modelCount++;
		}
	}

	public void ModelCountMinusOne()
	{
		lock (lockObj) 
		{
			modelCount--;
		}
	}
}
