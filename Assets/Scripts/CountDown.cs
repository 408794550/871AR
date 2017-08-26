using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Vuforia;

public class CountDown : MonoBehaviour {

	private int time 		= 45;
	public 	static 	CountDown _instance;
	void Awake()
	{
		_instance = this;
	}
	void Start()
	{
		if (Utility.isDebug)
		{
			StartCountDown ();			
		}
	}
	void StartCountDown()
	{
		if (time > 0)
		{
			Invoke ("StartCountDown", 1.0f);
		} else
		{
			//这里通知移动端，用户好久没有操作了
			TrackerManager.Instance.GetTracker<ObjectTracker> ().Stop();
			//ModelManager._instance.ARCamera.SetActive (false);
			ModelManager._instance.ARCamera.SetActive(false);
			//TrackerManager.Instance.DeinitTracker<ObjectTracker>();
			if (ModelManager._instance.isOffCard)
			{
				ModelManager._instance.offCardCamera.gameObject.SetActive (false);
			}
			Utility.PrepareForSendMessage ("CameraClose");
		}
		time--;
		//Utility.LogPrint ("Time Countdown: " + time);
	}
	public void StartTracker()
	{
//		ModelManager._instance.ARCamera.SetActive (true);
//		TrackerManager.Instance.GetTracker<ObjectTracker> ().Start();
	}
	public void TriggerCountDown()
	{
		StartCountDown ();
	}
	public void ResetTime()
	{
		time = 45;
	}
}
