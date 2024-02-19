using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Spike : MonoBehaviour
{
    [SerializeField] private BoxCollider _boxCollider;

    private void OnCollisionEnter(Collision collision) {
        if (collision.gameObject.tag.Equals("Player")) {
            GameManager.s_instance.GameOver();
        }
    }
}
