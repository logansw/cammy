using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AudioManager : MonoBehaviour
{
    public AudioSource _jumpSource;
    public AudioSource _victorySource;
    public AudioSource _gameOverSource;

    public static AudioManager s_instance;

    private void Awake() {
        GameObject.DontDestroyOnLoad(this.gameObject);
        s_instance = this;
    }

    public void PlayJump() {
        _jumpSource.Play();
    }

    public void PlayVictory() {
        _victorySource.Play();
    }

    public void PlayGameOver() {
        _gameOverSource.Play();
    }
}
