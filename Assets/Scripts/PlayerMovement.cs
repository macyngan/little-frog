﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerMovement : MonoBehaviour {

	private Animator playerAnimator;
	private float moveHorizontal;
	private float moveVertical;
	private Vector3 movement;
	private float turningSpeed = 20f;
	private Rigidbody playerRigidbody;
	[SerializeField]
	private RandomSoundPlayer playerFootsteps;

	// Use this for initialization
	void Start () {
		
		// Gather component from the GameObject
		playerAnimator = GetComponent<Animator> ();
		playerRigidbody = GetComponent<Rigidbody> ();
		
	}
	
	// Update is called once per frame
	void Update () {
		// Gather input from the keyboard
		moveHorizontal = Input.GetAxisRaw ("Horizontal");
		moveVertical = Input.GetAxisRaw ("Vertical");

		movement = new Vector3 (moveHorizontal, 0.0f, moveVertical);
	}

	void FixedUpdate() {
		// If the player's movement vector does not equal zero
		if (movement != Vector3.zero) {
			// create a target rotation based on the movement vector
			Quaternion targetRotation = Quaternion.LookRotation(movement, Vector3.up);

			// create another rotation that moves from the current rotation to the target rotation
			Quaternion newRotation = Quaternion.Lerp(playerRigidbody.rotation, targetRotation, turningSpeed * Time.deltaTime);

			// change the palyer's rotation to the new incremental rotation ...
			playerRigidbody.MoveRotation(newRotation);

			// play the jump animaton
			playerAnimator.SetFloat ("Speed", 3f);

			// play footstep sounds
			playerFootsteps.enabled = true;

		} else {
			// Don't play the jump animation
			playerAnimator.SetFloat ("Speed", 0f);

			// Don't play footstep sounds
			playerFootsteps.enabled = false;
		}
	}

}
