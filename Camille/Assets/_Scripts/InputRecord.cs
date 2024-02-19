using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[System.Serializable]
public class InputRecord : IJSONData<InputRecord>
{
    public List<int> aPress;
    public List<int> dPress;
    public List<int> spacePress;

    public InputRecord CreateNewFile() {
        InputRecord inputRecord = new InputRecord();
        inputRecord.aPress = new List<int>();
        inputRecord.dPress = new List<int>();
        inputRecord.spacePress = new List<int>();
        return inputRecord;
    }
}