#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityStandardAssets.Characters.FirstPerson.MouseLook
struct MouseLook_t2714862274;
// UnityEngine.AudioClip[]
struct AudioClipU5BU5D_t2889538658;
// UnityEngine.AudioClip
struct AudioClip_t3714538611;
// UnityEngine.Camera
struct Camera_t3533968274;
// UnityEngine.CharacterController
struct CharacterController_t2029520850;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"
#include "UnityEngine_UnityEngine_CollisionFlags165451490.h"
#include "UnityEngine_UnityEngine_Ray1522967639.h"
#include "UnityEngine_UnityEngine_RaycastHit46221527.h"
#include "UnityEngine_UnityEngine_Color1588175760.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.Characters.FirstPerson.FirstPersonController
struct  FirstPersonController_t2196128127  : public MonoBehaviour_t3012272455
{
public:
	// UnityStandardAssets.Characters.FirstPerson.MouseLook UnityStandardAssets.Characters.FirstPerson.FirstPersonController::m_MouseLook
	MouseLook_t2714862274 * ___m_MouseLook_2;
	// System.Single UnityStandardAssets.Characters.FirstPerson.FirstPersonController::m_StepInterval
	float ___m_StepInterval_3;
	// UnityEngine.AudioClip[] UnityStandardAssets.Characters.FirstPerson.FirstPersonController::m_FootstepSounds
	AudioClipU5BU5D_t2889538658* ___m_FootstepSounds_4;
	// UnityEngine.AudioClip UnityStandardAssets.Characters.FirstPerson.FirstPersonController::m_JumpSound
	AudioClip_t3714538611 * ___m_JumpSound_5;
	// UnityEngine.AudioClip UnityStandardAssets.Characters.FirstPerson.FirstPersonController::m_LandSound
	AudioClip_t3714538611 * ___m_LandSound_6;
	// UnityEngine.Camera UnityStandardAssets.Characters.FirstPerson.FirstPersonController::m_Camera
	Camera_t3533968274 * ___m_Camera_7;
	// UnityEngine.Vector3 UnityStandardAssets.Characters.FirstPerson.FirstPersonController::m_MoveDir
	Vector3_t3525329789  ___m_MoveDir_8;
	// UnityEngine.CharacterController UnityStandardAssets.Characters.FirstPerson.FirstPersonController::m_CharacterController
	CharacterController_t2029520850 * ___m_CharacterController_9;
	// UnityEngine.CollisionFlags UnityStandardAssets.Characters.FirstPerson.FirstPersonController::m_CollisionFlags
	int32_t ___m_CollisionFlags_10;
	// UnityEngine.Ray UnityStandardAssets.Characters.FirstPerson.FirstPersonController::ray
	Ray_t1522967639  ___ray_11;
	// UnityEngine.RaycastHit UnityStandardAssets.Characters.FirstPerson.FirstPersonController::hit
	RaycastHit_t46221527  ___hit_12;
	// System.Boolean UnityStandardAssets.Characters.FirstPerson.FirstPersonController::flagMovie
	bool ___flagMovie_13;
	// UnityEngine.Color UnityStandardAssets.Characters.FirstPerson.FirstPersonController::colorObjectCurrent
	Color_t1588175760  ___colorObjectCurrent_14;
	// System.Single UnityStandardAssets.Characters.FirstPerson.FirstPersonController::posXI
	float ___posXI_15;
	// System.Boolean UnityStandardAssets.Characters.FirstPerson.FirstPersonController::flagWalls
	bool ___flagWalls_16;

public:
	inline static int32_t get_offset_of_m_MouseLook_2() { return static_cast<int32_t>(offsetof(FirstPersonController_t2196128127, ___m_MouseLook_2)); }
	inline MouseLook_t2714862274 * get_m_MouseLook_2() const { return ___m_MouseLook_2; }
	inline MouseLook_t2714862274 ** get_address_of_m_MouseLook_2() { return &___m_MouseLook_2; }
	inline void set_m_MouseLook_2(MouseLook_t2714862274 * value)
	{
		___m_MouseLook_2 = value;
		Il2CppCodeGenWriteBarrier(&___m_MouseLook_2, value);
	}

	inline static int32_t get_offset_of_m_StepInterval_3() { return static_cast<int32_t>(offsetof(FirstPersonController_t2196128127, ___m_StepInterval_3)); }
	inline float get_m_StepInterval_3() const { return ___m_StepInterval_3; }
	inline float* get_address_of_m_StepInterval_3() { return &___m_StepInterval_3; }
	inline void set_m_StepInterval_3(float value)
	{
		___m_StepInterval_3 = value;
	}

	inline static int32_t get_offset_of_m_FootstepSounds_4() { return static_cast<int32_t>(offsetof(FirstPersonController_t2196128127, ___m_FootstepSounds_4)); }
	inline AudioClipU5BU5D_t2889538658* get_m_FootstepSounds_4() const { return ___m_FootstepSounds_4; }
	inline AudioClipU5BU5D_t2889538658** get_address_of_m_FootstepSounds_4() { return &___m_FootstepSounds_4; }
	inline void set_m_FootstepSounds_4(AudioClipU5BU5D_t2889538658* value)
	{
		___m_FootstepSounds_4 = value;
		Il2CppCodeGenWriteBarrier(&___m_FootstepSounds_4, value);
	}

	inline static int32_t get_offset_of_m_JumpSound_5() { return static_cast<int32_t>(offsetof(FirstPersonController_t2196128127, ___m_JumpSound_5)); }
	inline AudioClip_t3714538611 * get_m_JumpSound_5() const { return ___m_JumpSound_5; }
	inline AudioClip_t3714538611 ** get_address_of_m_JumpSound_5() { return &___m_JumpSound_5; }
	inline void set_m_JumpSound_5(AudioClip_t3714538611 * value)
	{
		___m_JumpSound_5 = value;
		Il2CppCodeGenWriteBarrier(&___m_JumpSound_5, value);
	}

	inline static int32_t get_offset_of_m_LandSound_6() { return static_cast<int32_t>(offsetof(FirstPersonController_t2196128127, ___m_LandSound_6)); }
	inline AudioClip_t3714538611 * get_m_LandSound_6() const { return ___m_LandSound_6; }
	inline AudioClip_t3714538611 ** get_address_of_m_LandSound_6() { return &___m_LandSound_6; }
	inline void set_m_LandSound_6(AudioClip_t3714538611 * value)
	{
		___m_LandSound_6 = value;
		Il2CppCodeGenWriteBarrier(&___m_LandSound_6, value);
	}

	inline static int32_t get_offset_of_m_Camera_7() { return static_cast<int32_t>(offsetof(FirstPersonController_t2196128127, ___m_Camera_7)); }
	inline Camera_t3533968274 * get_m_Camera_7() const { return ___m_Camera_7; }
	inline Camera_t3533968274 ** get_address_of_m_Camera_7() { return &___m_Camera_7; }
	inline void set_m_Camera_7(Camera_t3533968274 * value)
	{
		___m_Camera_7 = value;
		Il2CppCodeGenWriteBarrier(&___m_Camera_7, value);
	}

	inline static int32_t get_offset_of_m_MoveDir_8() { return static_cast<int32_t>(offsetof(FirstPersonController_t2196128127, ___m_MoveDir_8)); }
	inline Vector3_t3525329789  get_m_MoveDir_8() const { return ___m_MoveDir_8; }
	inline Vector3_t3525329789 * get_address_of_m_MoveDir_8() { return &___m_MoveDir_8; }
	inline void set_m_MoveDir_8(Vector3_t3525329789  value)
	{
		___m_MoveDir_8 = value;
	}

	inline static int32_t get_offset_of_m_CharacterController_9() { return static_cast<int32_t>(offsetof(FirstPersonController_t2196128127, ___m_CharacterController_9)); }
	inline CharacterController_t2029520850 * get_m_CharacterController_9() const { return ___m_CharacterController_9; }
	inline CharacterController_t2029520850 ** get_address_of_m_CharacterController_9() { return &___m_CharacterController_9; }
	inline void set_m_CharacterController_9(CharacterController_t2029520850 * value)
	{
		___m_CharacterController_9 = value;
		Il2CppCodeGenWriteBarrier(&___m_CharacterController_9, value);
	}

	inline static int32_t get_offset_of_m_CollisionFlags_10() { return static_cast<int32_t>(offsetof(FirstPersonController_t2196128127, ___m_CollisionFlags_10)); }
	inline int32_t get_m_CollisionFlags_10() const { return ___m_CollisionFlags_10; }
	inline int32_t* get_address_of_m_CollisionFlags_10() { return &___m_CollisionFlags_10; }
	inline void set_m_CollisionFlags_10(int32_t value)
	{
		___m_CollisionFlags_10 = value;
	}

	inline static int32_t get_offset_of_ray_11() { return static_cast<int32_t>(offsetof(FirstPersonController_t2196128127, ___ray_11)); }
	inline Ray_t1522967639  get_ray_11() const { return ___ray_11; }
	inline Ray_t1522967639 * get_address_of_ray_11() { return &___ray_11; }
	inline void set_ray_11(Ray_t1522967639  value)
	{
		___ray_11 = value;
	}

	inline static int32_t get_offset_of_hit_12() { return static_cast<int32_t>(offsetof(FirstPersonController_t2196128127, ___hit_12)); }
	inline RaycastHit_t46221527  get_hit_12() const { return ___hit_12; }
	inline RaycastHit_t46221527 * get_address_of_hit_12() { return &___hit_12; }
	inline void set_hit_12(RaycastHit_t46221527  value)
	{
		___hit_12 = value;
	}

	inline static int32_t get_offset_of_flagMovie_13() { return static_cast<int32_t>(offsetof(FirstPersonController_t2196128127, ___flagMovie_13)); }
	inline bool get_flagMovie_13() const { return ___flagMovie_13; }
	inline bool* get_address_of_flagMovie_13() { return &___flagMovie_13; }
	inline void set_flagMovie_13(bool value)
	{
		___flagMovie_13 = value;
	}

	inline static int32_t get_offset_of_colorObjectCurrent_14() { return static_cast<int32_t>(offsetof(FirstPersonController_t2196128127, ___colorObjectCurrent_14)); }
	inline Color_t1588175760  get_colorObjectCurrent_14() const { return ___colorObjectCurrent_14; }
	inline Color_t1588175760 * get_address_of_colorObjectCurrent_14() { return &___colorObjectCurrent_14; }
	inline void set_colorObjectCurrent_14(Color_t1588175760  value)
	{
		___colorObjectCurrent_14 = value;
	}

	inline static int32_t get_offset_of_posXI_15() { return static_cast<int32_t>(offsetof(FirstPersonController_t2196128127, ___posXI_15)); }
	inline float get_posXI_15() const { return ___posXI_15; }
	inline float* get_address_of_posXI_15() { return &___posXI_15; }
	inline void set_posXI_15(float value)
	{
		___posXI_15 = value;
	}

	inline static int32_t get_offset_of_flagWalls_16() { return static_cast<int32_t>(offsetof(FirstPersonController_t2196128127, ___flagWalls_16)); }
	inline bool get_flagWalls_16() const { return ___flagWalls_16; }
	inline bool* get_address_of_flagWalls_16() { return &___flagWalls_16; }
	inline void set_flagWalls_16(bool value)
	{
		___flagWalls_16 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
