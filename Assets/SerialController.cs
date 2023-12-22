using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.IO.Ports;

public class SerialController : MonoBehaviour
{
    SerialPort serialPort;
    public string portName = "COM3";
    public int baudRate = 9600;

    public bool lightOn = false;
    public bool fanOn = false;
    public bool doorOpen = false;

    public static SerialController instance;

    void Awake()
    {
        if (SerialController.instance)
        {
            Destroy(this);
        }
        else
        {
            instance = this;
        }
    }

    // Start is called before the first frame update
    void Start()
    {
        serialPort = new SerialPort(portName, baudRate);
        //serialPort.DataReceived += new SerialDataReceivedEventHandler(sp_DataReceived);
        serialPort.Open();
    }

    void Update()
    {
        if (serialPort.BytesToRead > 0)
        {
            char[] dataIn = new char[serialPort.BytesToRead];
            serialPort.Read(dataIn, 0, 5);
            string data = new string(dataIn);
            lightOn = data == "L 1 0" ? false : lightOn;
            lightOn = data == "L 1 1" ? true : lightOn;
            fanOn = data == "F 1 0" ? false : fanOn;
            fanOn = data == "F 1 1" ? true : fanOn;
            doorOpen = data == "D 1 0" ? false : doorOpen;
            doorOpen = data == "D 1 1" ? true : doorOpen;
            Debug.Log(data);
        }
    }

    public void SendMessage(string Message)
    {
        serialPort.WriteLine(Message);
    }

    public void SetLight(bool b)
    {
        SendMessage(b ? "L 1 1" : "L 1 0");
        lightOn = b;
    }

    public void SetFan(bool b)
    {
        SendMessage(b ? "F 1 1" : "F 1 0");
        fanOn = b;
    }

    public void SetDoor(bool b)
    {
        SendMessage(b ? "D 1 1" : "D 1 0");
        doorOpen = b;
    }

    public bool GetDoor() { return doorOpen; }

    public bool GetLight() { return lightOn; }

    public bool GetFan() { return fanOn; }

    //void sp_DataReceived(object sender, SerialDataReceivedEventArgs e)
    //{
    //    string data = serialPort.ReadLine();
    //    lightOn = data == "L 1 0" ? false : lightOn;
    //    lightOn = data == "L 1 1" ? true : lightOn;
    //    fanOn = data == "F 1 0" ? false : fanOn;
    //    fanOn = data == "F 1 1" ? true : fanOn;
    //    doorOpen = data == "D 1 0" ? false : doorOpen;
    //    doorOpen = data == "D 1 1" ? true : doorOpen;
    //    Debug.Log(data);
    //}

}
