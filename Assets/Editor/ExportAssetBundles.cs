using UnityEngine;
using UnityEditor;

public class CreateAssetBundles : MonoBehaviour
{
	[MenuItem ("Assets/Build AssetBundles")]
	static void BuildAllAssetBundles ()
	{
		BuildPipeline.BuildAssetBundles ("Assets/AssetBundles/", BuildAssetBundleOptions.UncompressedAssetBundle | BuildAssetBundleOptions.CollectDependencies, BuildTarget.Android);
		//BuildPipeline.BuildAssetBundles ("Assets/AssetBundles/iOS/", BuildAssetBundleOptions.None, BuildTarget.iOS);

		AssetDatabase.Refresh ();
	}
	[MenuItem ("Assets/Build AssetBundles iOS")]
	static void BuildAllAssetBundlesiOS ()
	{
		BuildPipeline.BuildAssetBundles ("Assets/AssetBundles/iOS", BuildAssetBundleOptions.UncompressedAssetBundle | BuildAssetBundleOptions.CollectDependencies, BuildTarget.iOS);
		//BuildPipeline.BuildAssetBundles ("Assets/AssetBundles/iOS/", BuildAssetBundleOptions.None, BuildTarget.iOS);

		AssetDatabase.Refresh ();
	}
}