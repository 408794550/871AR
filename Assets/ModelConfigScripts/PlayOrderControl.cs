using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayOrderControl : MonoBehaviour
{

    public GameObject TheModel;
    public float delayTime = 0.0f;
    private ParticleSystem particleSystem;

    void OnEnable()
    {
        TheModel.SetActive(false);
        particleSystem = GetComponent<ParticleSystem>();
    }

     void Update()
    {
        if (!TheModel.activeSelf && Mathf.Abs(delayTime - particleSystem.time) < 0.1f)
        {
            TheModel.SetActive(true);
        }
    }


}
