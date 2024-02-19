using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class InputReplayer : MonoBehaviour
{
    [SerializeField] private PlayerController _playerController;

    public int CurrentRecordIndex;
    private List<InputRecord> _records;
    private int _maxFrames;
    private bool aPressed;
    private bool dPressed;
    private bool spacePressed;

    private void Start()
    {
        _records = new List<InputRecord>();
        InputRecord recordOne = new InputRecord();
        recordOne.aPress = new List<int> {171,24,1438,4,79};
        recordOne.dPress = new List<int> {33,117,78,76,15,25,17,48,17,70,10,496,28,42,36,157,16,37,51,28,38,60,30,88,103};
        recordOne.spacePress = new List<int> {154,20,29,16,92,18,33,25,38,50,78,11,88,11,260,58,44,23,56,11,160,30,57,19,52,18,190,22,53};
        _records.Add(recordOne);
        InputRecord recordTwo = new InputRecord();
        recordTwo.aPress = new List<int> {161,4,32,21,16,10,690,14,843};
        recordTwo.dPress = new List<int> {23,123,143,69,11,31,21,49,14,37,11,382,62,25,19,56,2,90,16,31,87,210,16,82,1,78,10,7,85};
        recordTwo.spacePress = new List<int> {174,38,47,13,25,12,57,17,42,20,86,27,44,19,85,12,203,21,27,27,18,32,35,32,66,35,45,23,15,26,133,45,22,68,127,17,56};
        _records.Add(recordTwo);
        InputRecord recordThree = new InputRecord();
        recordThree.aPress = new List<int> {872,9,385,4,102};
        recordThree.dPress = new List<int> {30,72,16,86,28,17,15,68,8,62,11,133,19,36,32,35,42,52,21,27,17,29,2,4,43,24,26,162,26,31,14,27,17,22,118};
        recordThree.spacePress = new List<int> {60,27,80,13,44,13,28,51,25,39,35,30,61,13,47,15,45,23,45,47,38,16,34,8,235,30,29,22,29,18,79,36,57};
        _records.Add(recordThree);
    }

    private void FixedUpdate() {
        if (!(Physics.Raycast(_playerController.transform.position + new Vector3(0, -1f, 0), Vector3.down, out RaycastHit hit, 0.001f) && hit.collider.tag.Equals("Floor"))) {
            _playerController.TimeSinceGrounded += Time.deltaTime;
        } else {
            _playerController.Ground();
        }

        if (spacePressed) {
            _playerController.CheckJump();
        } else {
            _playerController.FastFall();
        }

        if (aPressed && dPressed) {
            _playerController.StopMoving();
        } else if (aPressed) {
            _playerController.MoveLeft();
        } else if (dPressed) {
            _playerController.MoveRight();
        } else {
            _playerController.StopMoving();
        }

        if (!_playerController.CheckGrounded()) {
            _playerController.TimeSinceGrounded += Time.deltaTime;
        }

        UpdateButtons();
    }

    private void UpdateButtons() {
        if (_records[CurrentRecordIndex].aPress.Count <= 0) {
            aPressed = false;
            dPressed = false;
            spacePressed = false;
            return;
        }
        _records[CurrentRecordIndex].aPress[0]--;
        _records[CurrentRecordIndex].dPress[0]--;
        _records[CurrentRecordIndex].spacePress[0]--;

        if (_records[CurrentRecordIndex].aPress.Count > 0 && _records[CurrentRecordIndex].aPress[0] <= 0) {
            aPressed = !aPressed;
            _records[CurrentRecordIndex].aPress.RemoveAt(0);
        }
        if (_records[CurrentRecordIndex].dPress.Count > 0 && _records[CurrentRecordIndex].dPress[0] <= 0) {
            dPressed = !dPressed;
            _records[CurrentRecordIndex].dPress.RemoveAt(0);
        }
        if (_records[CurrentRecordIndex].spacePress.Count > 0 && _records[CurrentRecordIndex].spacePress[0] <= 0) {
            spacePressed = !spacePressed;
            _records[CurrentRecordIndex].spacePress.RemoveAt(0);
        }
    }
}
