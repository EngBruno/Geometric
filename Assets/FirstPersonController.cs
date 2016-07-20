using System;
using UnityEngine;
using Random = UnityEngine.Random;
using System.IO.Ports;

namespace UnityStandardAssets.Characters.FirstPerson
{
    [RequireComponent(typeof (CharacterController))]
    public class FirstPersonController : MonoBehaviour
    {
        [SerializeField] private MouseLook m_MouseLook;
        [SerializeField] private float m_StepInterval;
        [SerializeField] private AudioClip[] m_FootstepSounds;    // an array of footstep sounds that will be randomly selected from.
        [SerializeField] private AudioClip m_JumpSound;           // the sound played when character leaves the ground.
        [SerializeField] private AudioClip m_LandSound;           // the sound played when character touches back on ground.

        private Camera m_Camera;
        
        private Vector3 m_MoveDir = Vector3.zero;
        private CharacterController m_CharacterController;
        private CollisionFlags m_CollisionFlags;
        private Ray ray;
		private RaycastHit hit;
		private bool flagMovie;
		public Color colorObjectCurrent;
		private float posXI;
		public bool flagWalls;
        // Use this for initialization
        private void Start(){
            m_CharacterController = GetComponent<CharacterController>();
			m_Camera = Camera.main;
			flagWalls = true;


			// Get a list of serial port names.
			string[] ports = SerialPort.GetPortNames();

			Debug.Log("The following serial ports were found: ");

			// Display each port name to the console.
			foreach(string port in ports) {
				Debug.Log(port);
			}
            

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
						posXI = Input.GetAxis ("Mouse X");
					}
				}
			} 

			if (flagMovie) {
				RotateView();
			}
        }


       


        private void FixedUpdate()
        {
            // always move along the camera forward as it is the direction that it being aimed at
//            Vector3 desiredMove = transform.forward*m_Input.y + transform.right*m_Input.x;

            // get a normal for the surface that is being touched to move along it
            RaycastHit hitInfo;
            Physics.SphereCast(transform.position, m_CharacterController.radius, Vector3.down, out hitInfo,
                               m_CharacterController.height, Physics.AllLayers, QueryTriggerInteraction.Ignore);
           


            
            m_CollisionFlags = m_CharacterController.Move(m_MoveDir*Time.fixedDeltaTime);

        }
			
        private void RotateView()
        {
			m_MouseLook.LookRotation (transform, m_Camera.transform,posXI);
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
}
