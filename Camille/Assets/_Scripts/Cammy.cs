using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class Cammy : MonoBehaviour
{
    [SerializeField] private Camera _camera;
    [SerializeField] private GameObject _cubey;
    public float SecondsToDeath;
    [SerializeField] private TMP_Text _countdownText;
    [SerializeField] private PlayerController _playerController;

    private void Start() {
        SecondsToDeath = 3f;
    }

    private void OnEnable() {
        GameManager.e_OnGameOver += OnGameOver;
        GameManager.e_OnVictory += OnVictory;
    }

    private void OnDisable() {
        GameManager.e_OnGameOver -= OnGameOver;
        GameManager.e_OnVictory -= OnVictory;
    }

    public void FixedUpdate() {
        if (GameManager.s_instance.GameIsOver) {
            return;
        }

        Vector2 cubeyPosition = _camera.WorldToViewportPoint(_cubey.transform.position);

        if (cubeyPosition.x < -0.01 || cubeyPosition.x > 1.01 || cubeyPosition.y < -0.01 || cubeyPosition.y > 1.01 ||
            (Physics.Raycast(_camera.transform.position, _cubey.transform.position - _camera.transform.position, out RaycastHit hit, 200f) && !hit.collider.gameObject.name.Equals("Cubey"))) {
            SecondsToDeath -= Time.deltaTime;
            _countdownText.text = SecondsToDeath.ToString("F3");
        } else {
            SecondsToDeath = 3f;
            _countdownText.text = "";
        }

        if (SecondsToDeath <= 0.0f) {
            GameManager.s_instance.GameOver();
        }
    }

    private void OnGameOver() {
        _countdownText.text = "Game Over\nPress R to Restart";
        _playerController.StopMoving();
    }

    private void OnVictory() {
        _countdownText.text = "You Win!";
        _playerController.StopMoving();
    }
}
