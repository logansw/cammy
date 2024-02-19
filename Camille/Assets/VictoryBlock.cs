using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class VictoryBlock : MonoBehaviour
{
    [SerializeField] private BoxCollider _boxCollider;

    void OnCollisionEnter(Collision collision) {
        Debug.Log("Collision");
        if (collision.gameObject.tag.Equals("Player")) {
        GameManager.s_instance.Victory();
            AudioManager.s_instance.PlayVictory();
        }
    }
}
