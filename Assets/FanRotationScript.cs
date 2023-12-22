using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FanRotationScript : MonoBehaviour
{
    private bool isOn;
    [SerializeField] float speed;
    [SerializeField] Transform fanBlades;
    [SerializeField] GameObject FanOn;
    [SerializeField] GameObject FanOff;

    // Start is called before the first frame update
    void Start()
    {
        FanOff.SetActive(true); FanOn.SetActive(false);
    }

    // Update is called once per frame
    void Update()
    {
        if (isOn)
        {
            fanBlades.eulerAngles += Vector3.forward * speed;
            FanOff.SetActive(false); FanOn.SetActive(true);
        }
        else { FanOff.SetActive(true); FanOn.SetActive(false); }
        isOn = SerialController.instance.GetFan();
    }
    public void ChangeState()
    {
        isOn = !isOn;
        SerialController.instance.SetFan(isOn);
    }
}
