using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class InputRecorder : MonoBehaviour
{
    public InputRecord InputRecord;
    public string fileName;
    private List<bool> aPress;
    private List<bool> dPress;
    private List<bool> spacePress;

    void Start() {
        aPress = new List<bool>();
        dPress = new List<bool>();
        spacePress = new List<bool>();
        InputRecord inputRecord = JSONTool.ReadData<InputRecord>(fileName);
        InputRecord = new InputRecord();
        InputRecord = InputRecord.CreateNewFile();
    }

    void FixedUpdate() {
        if (Input.GetKey(KeyCode.A)) {
            aPress.Add(true);
        } else {
            aPress.Add(false);
        }

        if (Input.GetKey(KeyCode.D)) {
            dPress.Add(true);
        } else {
            dPress.Add(false);
        }

        if (Input.GetKey(KeyCode.Space)) {
            spacePress.Add(true);
        } else {
            spacePress.Add(false);
        }
    }

    public void OnApplicationQuit() {
        Debug.Log("Quit");
        Save();
    }

    public void Save() {
        int count = 1;
        for (int i = 1; i < aPress.Count; i++) {
            if (aPress[i] == aPress[i-1]) {
                count++;
            } else {
                InputRecord.aPress.Add(count);
                count = 1;
            }
        }
        InputRecord.aPress.Add(count);
        count = 1;
        for (int i = 1; i < dPress.Count; i++) {
            if (dPress[i] == dPress[i-1]) {
                count++;
            } else {
                InputRecord.dPress.Add(count);
                count = 1;
            }
        }
        InputRecord.dPress.Add(count);
        count = 1;
        for (int i = 1; i < spacePress.Count; i++) {
            if (spacePress[i] == spacePress[i - 1]) {
                count++;
            } else {
                InputRecord.spacePress.Add(count);
                count = 1;
            }
        }
        InputRecord.spacePress.Add(count);

        JSONTool.WriteData(InputRecord, fileName);
    }
}
