using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;
using System.IO;
using UnityEngine.UI;
/*
using cn.sharerec;
using Vuforia;

public class RespondMoblieMethod : MonoBehaviour {
	public Text logText;

	private UnityAction<LitJson.JsonData> shotListener;
	private UnityAction<LitJson.JsonData> startCapListener;
	private UnityAction<LitJson.JsonData> stopCapListener;
	private UnityAction<LitJson.JsonData> switchFlashListener;
	private UnityAction<LitJson.JsonData> switchCameraListener;
	private UnityAction<LitJson.JsonData> disableCameraListener;
	private UnityAction<LitJson.JsonData> enableCameraListener;

	int switchFlashNum = 0; // 
	int switchCameraNum = 0; // 值为1时是后置摄像头，2为前置，变回后置后，会置0

	private string screenShotPath = "";
	private string screenCapPath = "";

	// Use this for initialization
	void Start () {
		
		shotListener = new UnityAction<LitJson.JsonData> (ScreenShot);
		startCapListener = new UnityAction<LitJson.JsonData> (StartScreenCap);
		stopCapListener = new UnityAction<LitJson.JsonData> (StopScreenCap);
		switchFlashListener = new UnityAction<LitJson.JsonData> (SwitchFlash);
		switchCameraListener = new UnityAction<LitJson.JsonData> (SwitchCamera);
		disableCameraListener = new UnityAction<LitJson.JsonData> (DisableCamera);
		enableCameraListener = new UnityAction<LitJson.JsonData> (EnableCamera);

		//TestInstanceFromWeb ();

		//EventManager.StartListening("LoadDataSet");
		EventManager.StartListening ("ScreenShot", shotListener);
		EventManager.StartListening ("StartScreenCap", startCapListener);
		EventManager.StartListening ("StopScreenCap", stopCapListener);
		EventManager.StartListening ("SwitchFlash", switchFlashListener);
		EventManager.StartListening ("SwitchCamera", switchCameraListener);
		EventManager.StartListening ("DisableCamera", disableCameraListener);
		EventManager.StartListening ("EnableCamera", enableCameraListener);


		screenShotPath = Path.Combine (Application.persistentDataPath,"ScreenShots");
		screenCapPath = Path.Combine (Application.persistentDataPath,"ScreenCaps");

	}

	void ScreenShot(LitJson.JsonData data)
	{
		StartCoroutine (getTexture2d ());
	}
	IEnumerator getTexture2d()
	{
		//在这里隐藏UI再截图

		//截图操作
		yield return new WaitForSeconds(0.1f);
		Texture2D t = new Texture2D(Screen.width, Screen.height, TextureFormat.RGB24, false);
		//截图完毕显示UI

		t.ReadPixels(new Rect(0, 0, Screen.width, Screen.height), 0, 0, true);
		byte[] bytes = t.EncodeToPNG();
		t.Compress(true);
		t.Apply();
		//t就是截到的图片我们可以在这里上传到服务器
		//下面是开始保存
		//获取系统时间
		System.DateTime now = new System.DateTime();
		now = System.DateTime.Now;
		string filename = string.Format("image{0}{1}{2}{3}.png", now.Day, now.Hour, now.Minute, now.Second);
		//应用平台判断，路径选择
		if (Application.platform == RuntimePlatform.Android)
		{
			//保存在Android相册中，如果是PC就改成Application .dataPath 的路径
			if (!Directory.Exists(screenShotPath))
			{
				Directory.CreateDirectory(screenShotPath);
			}
			screenShotPath = screenShotPath + "/" + filename;
		}
		//保存文件
		File.WriteAllBytes(screenShotPath, bytes);
		logText.text = screenShotPath;

	}
		
	void StartScreenCap(LitJson.JsonData data)
	{
		#if UNITY_ANDROID

		if (ShareREC.IsAvailable ()) {
			ShareREC.StartRecorder ();
		}
		#endif
	}
	void StopScreenCap(LitJson.JsonData data)
	{
		#if UNITY_ANDROID

		//ShareREC.OnRecorderStoppedHandler 这里可以监听停止录制之后可以干的事情，开始录制也一样
		ShareREC.OnRecorderStoppedHandler = StopRecorderEnd;//不能在这个函数中回传路径给移动端，因为视频可能还没有合成成功，要监听事件之后成功后再传
		ShareREC.StopRecorder ();
		#endif
	}
	void StopRecorderEnd()
	{
		#if UNITY_ANDROID

		long[] videoArr = ShareREC.ListLocalVideos ();

		string videoPath = ShareREC.GetLocalVideoPath (videoArr [videoArr.Length - 1]);
		logText.text = videoPath;
		#endif
	}
	void SwitchFlash(LitJson.JsonData data)
	{
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
	void SwitchCamera(LitJson.JsonData data)
	{
		
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
	void DisableCamera(LitJson.JsonData data)
	{
		Vuforia.CameraDevice.Instance.Deinit ();
		Vuforia.CameraDevice.Instance.Stop ();

	}
	void EnableCamera(LitJson.JsonData data)
	{
		Vuforia.CameraDevice.Instance.Init (Vuforia.CameraDevice.CameraDirection.CAMERA_BACK);
		Vuforia.CameraDevice.Instance.Start ();
		Vuforia.CameraDevice.Instance.SetFocusMode (Vuforia.CameraDevice.FocusMode.FOCUS_MODE_CONTINUOUSAUTO);
	}
}
*/