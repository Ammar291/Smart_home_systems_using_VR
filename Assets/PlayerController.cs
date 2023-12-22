using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerController : MonoBehaviour
{

    [SerializeField] float speed;
    [SerializeField] float rotationSpeed;
    [SerializeField] Transform cameraTransform;
    [SerializeField] DoorScript door;
    [SerializeField] GameObject LampOn;
    [SerializeField] GameObject LampOff;
    [SerializeField] FanRotationScript Fan;

    private bool nearDoor;
    private bool doorOpen;
    private bool nearFan;

    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        GetComponent<Rigidbody>().MovePosition(transform.position + Time.deltaTime * speed * (transform.right * Input.GetAxis("Horizontal") + transform.forward * Input.GetAxis("Vertical")));
        //transform.position += transform.right * Time.deltaTime * speed * Input.GetAxis("Horizontal");
        //transform.position += transform.forward * Time.deltaTime * speed * Input.GetAxis("Vertical");
        transform.RotateAround(transform.position, Vector3.up, rotationSpeed * Input.GetAxis("Mouse X"));
        cameraTransform.RotateAround(cameraTransform.position, transform.right, - rotationSpeed * Input.GetAxis("Mouse Y"));
        if (Input.GetMouseButtonDown(0))
        {
            if (nearDoor)
            {
                door.ChangeState();
            }
            if (nearFan)
            {
                Fan.ChangeState();
            }
        }
        if (Input.GetMouseButtonDown(1))
        {
            SerialController.instance.SetLight(LampOff.active);
            LampOff.SetActive(!LampOff.active);
            LampOn.SetActive(!LampOn.active);
        }
        LampOn.SetActive(SerialController.instance.GetLight());
        LampOff.SetActive(!SerialController.instance.GetLight());
    }

    private void OnTriggerEnter(Collider other)
    {
        if (other.tag == "Door")
            nearDoor = true;
        if (other.tag == "Fan")
            nearFan = true;
    }

    private void OnTriggerExit(Collider other)
    {
        if (other.tag == "Door")
            nearDoor = false;
        if (other.tag == "Fan")
            nearFan = false;
    }
}
