using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerController : MonoBehaviour
{
    [Header("Component References")]
    [SerializeField] private Rigidbody _rb;
    [SerializeField] private Collider _collider;
    [Header("Properties")]
    [SerializeField] private float _jumpForce;
    [SerializeField] private float _acceleration;
    [SerializeField] private float _maxSpeed;
    [SerializeField] private bool _replaying;
    [SerializeField] private float _fastFallForce;
    [SerializeField] private CustomGravity _customGravity;
    [SerializeField] private float _highGravityScale;
    [SerializeField] private float _lowGravityScale;
    [SerializeField] private float _coyoteTime;
    public float TimeSinceGrounded;
    public bool IsJumping;

    public bool IsGrounded;
    public bool FastFalling;

    private void OnEnable() {
        GameManager.e_OnGameOver += OnGameOver;
    }

    private void OnDisable() {
        GameManager.e_OnGameOver -= OnGameOver;
    }

    private void OnGameOver() {
        this.enabled = false;
    }

    public void FixedUpdate()
    {
        if (_replaying) {
            return;
        }

        if (!(Physics.Raycast(transform.position + new Vector3(0, -1f, 0), Vector3.down, out RaycastHit hit, 0.001f) && hit.collider.tag.Equals("Floor"))) {
            TimeSinceGrounded += Time.deltaTime;
        } else {
            Ground();
        }

        if (Input.GetKey(KeyCode.Space)) {
            CheckJump();
        } else if (!Input.GetKey(KeyCode.Space)) {
            FastFall();
        }

        if (Input.GetKey(KeyCode.A) && Input.GetKey(KeyCode.D)) {
            StopMoving();
        } else if (Input.GetKey(KeyCode.A)) {
            MoveLeft();
        } else if (Input.GetKey(KeyCode.D)) {
            MoveRight();
        } else {
            StopMoving();
        }

        if (!CheckGrounded()) {
            TimeSinceGrounded += Time.deltaTime;
        }
    }

    public bool CheckGrounded() {
        Vector3 velocity = _rb.velocity;
        Vector3 displacement = velocity * Time.deltaTime;
        Physics.Raycast(transform.position, displacement, out RaycastHit hit, displacement.magnitude);
        if (hit.collider != null && hit.collider.tag.Equals("Floor")) {
            Ground();
            return true;
        }

        return false;
    }

    public void Ground() {
        IsGrounded = true;
        FastFalling = false;
        _customGravity.gravityScale = _lowGravityScale;
        TimeSinceGrounded = 0f;
    }

    public void CheckJump() {
        if (IsGrounded || (!IsJumping && TimeSinceGrounded < _coyoteTime)) {
            Jump();
        }
    }

    public void Jump() {
        _rb.AddForce(Vector3.up * _jumpForce);
        IsGrounded = false;
        IsJumping = true;
        AudioManager.s_instance.PlayJump();
    }

    public void FastFall() {
        if (!FastFalling && !IsGrounded) {
            _rb.AddForce(Vector3.down * _fastFallForce);
            FastFalling = true;
            _customGravity.gravityScale = _highGravityScale;
        }
    }

    public void MoveLeft() {
        _rb.AddForce(Vector3.left * _acceleration);
        if (_rb.velocity.x < -_maxSpeed) {
            _rb.velocity = new Vector3(-_maxSpeed, _rb.velocity.y, _rb.velocity.z);
        }
    }

    public void MoveRight() {
        _rb.AddForce(Vector3.right * _acceleration);
        if (_rb.velocity.x > _maxSpeed) {
            _rb.velocity = new Vector3(_maxSpeed, _rb.velocity.y, _rb.velocity.z);
        }
    }

    public void StopMoving() {
        _rb.velocity = new Vector3(0, _rb.velocity.y, _rb.velocity.z);
    }
}