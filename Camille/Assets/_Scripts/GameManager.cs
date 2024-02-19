using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class GameManager : MonoBehaviour
{
    public static GameManager s_instance;
    public delegate void OnGameOver();
    public static event OnGameOver e_OnGameOver;
    public delegate void OnVictory();
    public static event OnVictory e_OnVictory;
    public bool GameIsOver;

    private void Awake () {
        s_instance = this;
    }

    public void GameOver() {
        e_OnGameOver?.Invoke();
        GameIsOver = true;
        AudioManager.s_instance.PlayGameOver();
    }

    private void Update() {
        if (Input.GetKeyDown(KeyCode.R)) {
            Restart();
        }
    }

    public void Victory() {
        if (SceneManager.GetActiveScene().name.Equals("4")) {
            e_OnVictory?.Invoke();
            GameIsOver = true;
        } else {
            LoadNextLevel();
        }
    }

    private void LoadNextLevel() {
        SceneManager.LoadScene(SceneManager.GetActiveScene().buildIndex + 1);
    }

    public void Restart() {
        SceneManager.LoadScene(SceneManager.GetActiveScene().name);
        GameIsOver = false;
    }
}
