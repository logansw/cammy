using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RealCamera : MonoBehaviour
{
    [SerializeField] private GameObject _cammy;
    private Vector3 _offset;

    void Start() {
        _offset = transform.position - _cammy.transform.position;
    }

    void Update() {
        transform.position = _cammy.transform.position + _offset;
    }
}
