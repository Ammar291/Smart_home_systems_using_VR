using System.Collections;
using System.Collections.Generic;
using System.IO.Ports;
using UnityEngine;


public class DoorScript : MonoBehaviour
{

    private bool isOpen = false;
    private bool isOpening = false;
    private bool isClosing = false;
    private bool isClosed = true;
    private float progress = 0;
    private Vector3 initialRotation;
    [SerializeField] GameObject DoorOpen;
    [SerializeField] GameObject DoorClose;
    
    // Start is called before the first frame update
    void Start()
    {
        initialRotation = transform.eulerAngles;
        DoorClose.SetActive(true); DoorOpen.SetActive(false);
    }

    // Update is called once per frame
    void Update()
    {
        if (isOpening)
        {
            progress += Time.deltaTime * 0.5f;
            transform.eulerAngles = initialRotation + Vector3.forward * progress * 100;
            if (progress >= 1)
            {
                isOpen = true;
                isOpening = false;
                DoorOpen.SetActive(true); DoorClose.SetActive(false);
            }
        }
        if (isClosing)
        {
            progress += Time.deltaTime * 0.5f;
            transform.eulerAngles = initialRotation + Vector3.forward * (1 - progress) * 100;
            if (progress >= 1)
            {
                isClosed = true;
                isClosing = false;
                DoorClose.SetActive(true); DoorOpen.SetActive(false);
            }
        }

        if (!SerialController.instance.GetDoor() && isOpen)
        {
            progress = 0;
            isClosing = true;
            isOpen = false;
        }
        else if (SerialController.instance.GetDoor() && isClosed)
        {
            progress = 0;
            isOpening = true;
            isClosed = false;
        }
    }

    public void ChangeState()
    {
        progress = 0;
        if (isOpen) 
        {
            isClosing = true; 
            isOpen = false;  
            SerialController.instance.SetDoor(false); 
        }
        if (isClosed) 
        { 
            isOpening = true; 
            isClosed = false;
            SerialController.instance.SetDoor(true);
        }
        
    }

}
