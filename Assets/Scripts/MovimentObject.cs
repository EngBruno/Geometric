using System;
using UnityEngine;


    [RequireComponent(typeof (CharacterController))]
    public class MovimentObject : MonoBehaviour
    {
        [SerializeField] private MouseLookObject m_MouseLook;

        private Camera m_Camera;
        
        private Vector3 m_MoveDir = Vector3.zero;
        private CharacterController m_CharacterController;
        private Ray ray;
		private RaycastHit hit;
		private bool flagMovie;
		private Color colorObjectCurrent;
		private float posXInitial;
		private bool flagWalls;
        // Use this for initialization
        private void Start(){
            m_CharacterController = GetComponent<CharacterController>();
			m_Camera = Camera.main;
			flagWalls = true;
        }


        // Update is called once per frame
        private void Update(){
			if (Input.GetMouseButtonUp (0) && flagMovie) {
				flagMovie = false;
				hit.collider.GetComponent<Renderer> ().material.color = colorObjectCurrent;
			}

			if (Input.GetMouseButtonDown (0)) {
				ray = Camera.main.ScreenPointToRay (Input.mousePosition);
				if (Physics.Raycast (ray, out hit)) {
					if (hit.collider.name == "walls" ||hit.collider.name == "tiles" && flagMovie == false) {
						colorObjectCurrent = hit.collider.GetComponent<Renderer> ().material.color;
						hit.collider.GetComponent<Renderer> ().material.color=Color.red;
						flagMovie = true;
						posXInitial = Input.GetAxis ("Mouse X");
					}
				}
			} 

			if (flagMovie) {
				RotateView();
			}
        }
			
        private void RotateView()
        {
			m_MouseLook.LookRotation (transform, m_Camera.transform,posXInitial);
        }


		public void Menu(){

			if (!flagWalls) {
				GameObject tiles = GameObject.FindGameObjectWithTag ("walls");
				tiles.GetComponent<MeshCollider> ().enabled = true;
				tiles.GetComponent<MeshRenderer> ().enabled = true;
				flagWalls = true;
			} else {
				GameObject tiles = GameObject.FindGameObjectWithTag ("walls");
				tiles.GetComponent<MeshCollider> ().enabled = false;
				tiles.GetComponent<MeshRenderer> ().enabled = false;
				flagWalls = false;
			}
		}
    }

