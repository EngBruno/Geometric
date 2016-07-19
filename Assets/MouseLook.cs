using System;
using UnityEngine;

namespace UnityStandardAssets.Characters.FirstPerson
{
    [Serializable]
    public class MouseLook{
		
		public enum RotationAxes { MouseXAndY = 0, MouseX = 1, MouseY = 2 }
		public RotationAxes axes = RotationAxes.MouseXAndY;
		public float sensitivityX = 15F;
		public float sensitivityY = 15F;

		public float minimumX = -360F;
		public float maximumX = 360F;

		public float minimumY = -60F;
		public float maximumY = 60F;


		float rotationY = 0F;
		float rotationX =0F;
		public Quaternion m_CharacterTargetRot;
		private Quaternion m_CameraTargetRot;
		public Quaternion res;

		public void LookRotation(Transform character, Transform camera,float posXI){
			if (axes == RotationAxes.MouseXAndY && Input.GetAxis("Mouse X")!=posXI){
				rotationX += Input.GetAxis("Mouse X") * sensitivityY;
				rotationX = Mathf.Clamp (rotationX, minimumX, maximumX);
				rotationY += Input.GetAxis("Mouse Y") * sensitivityY;
				rotationY = Mathf.Clamp (rotationY, minimumY, maximumY);
				character.localEulerAngles = new Vector3(rotationY,-rotationX, character.localEulerAngles.z);

			}
			
        }
    }
}
