#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>

// UnityStandardAssets.Characters.FirstPerson.FirstPersonController
struct FirstPersonController_t2196128127;
// UnityEngine.CharacterController
struct CharacterController_t2029520850;
// System.Object
struct Il2CppObject;
// UnityEngine.Renderer
struct Renderer_t1092684080;
// UnityEngine.MeshCollider
struct MeshCollider_t1080724846;
// UnityEngine.MeshRenderer
struct MeshRenderer_t1217738301;
// UnityStandardAssets.Characters.FirstPerson.MouseLook
struct MouseLook_t2714862274;
// UnityEngine.Transform
struct Transform_t284553113;

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Array2840145358.h"
#include "AssemblyU2DCSharp_U3CModuleU3E86524790.h"
#include "AssemblyU2DCSharp_U3CModuleU3E86524790MethodDeclarations.h"
#include "AssemblyU2DCSharp_UnityStandardAssets_Characters_F2196128127.h"
#include "AssemblyU2DCSharp_UnityStandardAssets_Characters_F2196128127MethodDeclarations.h"
#include "mscorlib_System_Void2779279689.h"
#include "UnityEngine_UnityEngine_Vector33525329789MethodDeclarations.h"
#include "UnityEngine_UnityEngine_MonoBehaviour3012272455MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"
#include "UnityEngine_UnityEngine_Component2126946602MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Camera3533968274MethodDeclarations.h"
#include "UnityEngine_UnityEngine_CharacterController2029520850.h"
#include "UnityEngine_UnityEngine_Component2126946602.h"
#include "UnityEngine_UnityEngine_Camera3533968274.h"
#include "mscorlib_System_Boolean211005341.h"
#include "UnityEngine_UnityEngine_Input1593691127MethodDeclarations.h"
#include "UnityEngine_UnityEngine_RaycastHit46221527MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Renderer1092684080MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Material1886596500MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Physics2601443956MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Object3878351788MethodDeclarations.h"
#include "mscorlib_System_String968488902MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Color1588175760MethodDeclarations.h"
#include "mscorlib_System_Int322847414787.h"
#include "UnityEngine_UnityEngine_RaycastHit46221527.h"
#include "UnityEngine_UnityEngine_Collider955670625.h"
#include "UnityEngine_UnityEngine_Renderer1092684080.h"
#include "UnityEngine_UnityEngine_Material1886596500.h"
#include "UnityEngine_UnityEngine_Color1588175760.h"
#include "UnityEngine_UnityEngine_Ray1522967639.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Single958209021.h"
#include "UnityEngine_UnityEngine_Transform284553113MethodDeclarations.h"
#include "UnityEngine_UnityEngine_CharacterController2029520850MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Time1525492538MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Transform284553113.h"
#include "UnityEngine_UnityEngine_QueryTriggerInteraction4085533775.h"
#include "UnityEngine_UnityEngine_CollisionFlags165451490.h"
#include "AssemblyU2DCSharp_UnityStandardAssets_Characters_F2714862274MethodDeclarations.h"
#include "AssemblyU2DCSharp_UnityStandardAssets_Characters_F2714862274.h"
#include "UnityEngine_UnityEngine_GameObject4012695102MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Collider955670625MethodDeclarations.h"
#include "UnityEngine_UnityEngine_GameObject4012695102.h"
#include "UnityEngine_UnityEngine_MeshCollider1080724846.h"
#include "UnityEngine_UnityEngine_MeshRenderer1217738301.h"
#include "mscorlib_System_Object837106420MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Mathf1597001355MethodDeclarations.h"
#include "AssemblyU2DCSharp_UnityStandardAssets_Characters_F1834209251.h"
#include "AssemblyU2DCSharp_UnityStandardAssets_Characters_F1834209251MethodDeclarations.h"

// !!0 UnityEngine.Component::GetComponent<System.Object>()
extern "C"  Il2CppObject * Component_GetComponent_TisIl2CppObject_m267839954_gshared (Component_t2126946602 * __this, const MethodInfo* method);
#define Component_GetComponent_TisIl2CppObject_m267839954(__this, method) ((  Il2CppObject * (*) (Component_t2126946602 *, const MethodInfo*))Component_GetComponent_TisIl2CppObject_m267839954_gshared)(__this, method)
// !!0 UnityEngine.Component::GetComponent<UnityEngine.CharacterController>()
#define Component_GetComponent_TisCharacterController_t2029520850_m2645817963(__this, method) ((  CharacterController_t2029520850 * (*) (Component_t2126946602 *, const MethodInfo*))Component_GetComponent_TisIl2CppObject_m267839954_gshared)(__this, method)
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Renderer>()
#define Component_GetComponent_TisRenderer_t1092684080_m500377675(__this, method) ((  Renderer_t1092684080 * (*) (Component_t2126946602 *, const MethodInfo*))Component_GetComponent_TisIl2CppObject_m267839954_gshared)(__this, method)
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
extern "C"  Il2CppObject * GameObject_GetComponent_TisIl2CppObject_m2447772384_gshared (GameObject_t4012695102 * __this, const MethodInfo* method);
#define GameObject_GetComponent_TisIl2CppObject_m2447772384(__this, method) ((  Il2CppObject * (*) (GameObject_t4012695102 *, const MethodInfo*))GameObject_GetComponent_TisIl2CppObject_m2447772384_gshared)(__this, method)
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.MeshCollider>()
#define GameObject_GetComponent_TisMeshCollider_t1080724846_m1137991205(__this, method) ((  MeshCollider_t1080724846 * (*) (GameObject_t4012695102 *, const MethodInfo*))GameObject_GetComponent_TisIl2CppObject_m2447772384_gshared)(__this, method)
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.MeshRenderer>()
#define GameObject_GetComponent_TisMeshRenderer_t1217738301_m2686897910(__this, method) ((  MeshRenderer_t1217738301 * (*) (GameObject_t4012695102 *, const MethodInfo*))GameObject_GetComponent_TisIl2CppObject_m2447772384_gshared)(__this, method)
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityStandardAssets.Characters.FirstPerson.FirstPersonController::.ctor()
extern "C"  void FirstPersonController__ctor_m1942351182 (FirstPersonController_t2196128127 * __this, const MethodInfo* method)
{
	{
		Vector3_t3525329789  L_0 = Vector3_get_zero_m2017759730(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_m_MoveDir_8(L_0);
		MonoBehaviour__ctor_m2022291967(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets.Characters.FirstPerson.FirstPersonController::Start()
extern const MethodInfo* Component_GetComponent_TisCharacterController_t2029520850_m2645817963_MethodInfo_var;
extern const uint32_t FirstPersonController_Start_m889488974_MetadataUsageId;
extern "C"  void FirstPersonController_Start_m889488974 (FirstPersonController_t2196128127 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (FirstPersonController_Start_m889488974_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		CharacterController_t2029520850 * L_0 = Component_GetComponent_TisCharacterController_t2029520850_m2645817963(__this, /*hidden argument*/Component_GetComponent_TisCharacterController_t2029520850_m2645817963_MethodInfo_var);
		__this->set_m_CharacterController_9(L_0);
		Camera_t3533968274 * L_1 = Camera_get_main_m671815697(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_m_Camera_7(L_1);
		__this->set_flagWalls_16((bool)1);
		return;
	}
}
// System.Void UnityStandardAssets.Characters.FirstPerson.FirstPersonController::Update()
extern Il2CppClass* Input_t1593691127_il2cpp_TypeInfo_var;
extern Il2CppClass* String_t_il2cpp_TypeInfo_var;
extern const MethodInfo* Component_GetComponent_TisRenderer_t1092684080_m500377675_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral112895977;
extern Il2CppCodeGenString* _stringLiteral110363525;
extern Il2CppCodeGenString* _stringLiteral2907718525;
extern const uint32_t FirstPersonController_Update_m1810206591_MetadataUsageId;
extern "C"  void FirstPersonController_Update_m1810206591 (FirstPersonController_t2196128127 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (FirstPersonController_Update_m1810206591_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1593691127_il2cpp_TypeInfo_var);
		bool L_0 = Input_GetMouseButtonUp_m2588144188(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_003d;
		}
	}
	{
		bool L_1 = __this->get_flagMovie_13();
		if (!L_1)
		{
			goto IL_003d;
		}
	}
	{
		__this->set_flagMovie_13((bool)0);
		RaycastHit_t46221527 * L_2 = __this->get_address_of_hit_12();
		Collider_t955670625 * L_3 = RaycastHit_get_collider_m3116882274(L_2, /*hidden argument*/NULL);
		NullCheck(L_3);
		Renderer_t1092684080 * L_4 = Component_GetComponent_TisRenderer_t1092684080_m500377675(L_3, /*hidden argument*/Component_GetComponent_TisRenderer_t1092684080_m500377675_MethodInfo_var);
		NullCheck(L_4);
		Material_t1886596500 * L_5 = Renderer_get_material_m2720864603(L_4, /*hidden argument*/NULL);
		Color_t1588175760  L_6 = __this->get_colorObjectCurrent_14();
		NullCheck(L_5);
		Material_set_color_m3296857020(L_5, L_6, /*hidden argument*/NULL);
	}

IL_003d:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1593691127_il2cpp_TypeInfo_var);
		bool L_7 = Input_GetMouseButtonDown_m2031691843(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0112;
		}
	}
	{
		Camera_t3533968274 * L_8 = Camera_get_main_m671815697(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1593691127_il2cpp_TypeInfo_var);
		Vector3_t3525329789  L_9 = Input_get_mousePosition_m4020233228(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_8);
		Ray_t1522967639  L_10 = Camera_ScreenPointToRay_m1733083890(L_8, L_9, /*hidden argument*/NULL);
		__this->set_ray_11(L_10);
		Ray_t1522967639  L_11 = __this->get_ray_11();
		RaycastHit_t46221527 * L_12 = __this->get_address_of_hit_12();
		bool L_13 = Physics_Raycast_m1343340263(NULL /*static, unused*/, L_11, L_12, /*hidden argument*/NULL);
		if (!L_13)
		{
			goto IL_0112;
		}
	}
	{
		RaycastHit_t46221527 * L_14 = __this->get_address_of_hit_12();
		Collider_t955670625 * L_15 = RaycastHit_get_collider_m3116882274(L_14, /*hidden argument*/NULL);
		NullCheck(L_15);
		String_t* L_16 = Object_get_name_m3709440845(L_15, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_17 = String_op_Equality_m1260523650(NULL /*static, unused*/, L_16, _stringLiteral112895977, /*hidden argument*/NULL);
		if (L_17)
		{
			goto IL_00bc;
		}
	}
	{
		RaycastHit_t46221527 * L_18 = __this->get_address_of_hit_12();
		Collider_t955670625 * L_19 = RaycastHit_get_collider_m3116882274(L_18, /*hidden argument*/NULL);
		NullCheck(L_19);
		String_t* L_20 = Object_get_name_m3709440845(L_19, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_21 = String_op_Equality_m1260523650(NULL /*static, unused*/, L_20, _stringLiteral110363525, /*hidden argument*/NULL);
		if (!L_21)
		{
			goto IL_0112;
		}
	}
	{
		bool L_22 = __this->get_flagMovie_13();
		if (L_22)
		{
			goto IL_0112;
		}
	}

IL_00bc:
	{
		RaycastHit_t46221527 * L_23 = __this->get_address_of_hit_12();
		Collider_t955670625 * L_24 = RaycastHit_get_collider_m3116882274(L_23, /*hidden argument*/NULL);
		NullCheck(L_24);
		Renderer_t1092684080 * L_25 = Component_GetComponent_TisRenderer_t1092684080_m500377675(L_24, /*hidden argument*/Component_GetComponent_TisRenderer_t1092684080_m500377675_MethodInfo_var);
		NullCheck(L_25);
		Material_t1886596500 * L_26 = Renderer_get_material_m2720864603(L_25, /*hidden argument*/NULL);
		NullCheck(L_26);
		Color_t1588175760  L_27 = Material_get_color_m2268945527(L_26, /*hidden argument*/NULL);
		__this->set_colorObjectCurrent_14(L_27);
		RaycastHit_t46221527 * L_28 = __this->get_address_of_hit_12();
		Collider_t955670625 * L_29 = RaycastHit_get_collider_m3116882274(L_28, /*hidden argument*/NULL);
		NullCheck(L_29);
		Renderer_t1092684080 * L_30 = Component_GetComponent_TisRenderer_t1092684080_m500377675(L_29, /*hidden argument*/Component_GetComponent_TisRenderer_t1092684080_m500377675_MethodInfo_var);
		NullCheck(L_30);
		Material_t1886596500 * L_31 = Renderer_get_material_m2720864603(L_30, /*hidden argument*/NULL);
		Color_t1588175760  L_32 = Color_get_red_m4288945411(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_31);
		Material_set_color_m3296857020(L_31, L_32, /*hidden argument*/NULL);
		__this->set_flagMovie_13((bool)1);
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1593691127_il2cpp_TypeInfo_var);
		float L_33 = Input_GetAxis_m2027668530(NULL /*static, unused*/, _stringLiteral2907718525, /*hidden argument*/NULL);
		__this->set_posXI_15(L_33);
	}

IL_0112:
	{
		bool L_34 = __this->get_flagMovie_13();
		if (!L_34)
		{
			goto IL_0123;
		}
	}
	{
		FirstPersonController_RotateView_m3260391702(__this, /*hidden argument*/NULL);
	}

IL_0123:
	{
		return;
	}
}
// System.Void UnityStandardAssets.Characters.FirstPerson.FirstPersonController::FixedUpdate()
extern "C"  void FirstPersonController_FixedUpdate_m3843037257 (FirstPersonController_t2196128127 * __this, const MethodInfo* method)
{
	RaycastHit_t46221527  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		Transform_t284553113 * L_0 = Component_get_transform_m4257140443(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Vector3_t3525329789  L_1 = Transform_get_position_m2211398607(L_0, /*hidden argument*/NULL);
		CharacterController_t2029520850 * L_2 = __this->get_m_CharacterController_9();
		NullCheck(L_2);
		float L_3 = CharacterController_get_radius_m2930031455(L_2, /*hidden argument*/NULL);
		Vector3_t3525329789  L_4 = Vector3_get_down_m1397301612(NULL /*static, unused*/, /*hidden argument*/NULL);
		CharacterController_t2029520850 * L_5 = __this->get_m_CharacterController_9();
		NullCheck(L_5);
		float L_6 = CharacterController_get_height_m2077757108(L_5, /*hidden argument*/NULL);
		Physics_SphereCast_m3149979635(NULL /*static, unused*/, L_1, L_3, L_4, (&V_0), L_6, (-1), 1, /*hidden argument*/NULL);
		CharacterController_t2029520850 * L_7 = __this->get_m_CharacterController_9();
		Vector3_t3525329789  L_8 = __this->get_m_MoveDir_8();
		float L_9 = Time_get_fixedDeltaTime_m1418463946(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t3525329789  L_10 = Vector3_op_Multiply_m973638459(NULL /*static, unused*/, L_8, L_9, /*hidden argument*/NULL);
		NullCheck(L_7);
		int32_t L_11 = CharacterController_Move_m3043020731(L_7, L_10, /*hidden argument*/NULL);
		__this->set_m_CollisionFlags_10(L_11);
		return;
	}
}
// System.Void UnityStandardAssets.Characters.FirstPerson.FirstPersonController::RotateView()
extern "C"  void FirstPersonController_RotateView_m3260391702 (FirstPersonController_t2196128127 * __this, const MethodInfo* method)
{
	{
		MouseLook_t2714862274 * L_0 = __this->get_m_MouseLook_2();
		Transform_t284553113 * L_1 = Component_get_transform_m4257140443(__this, /*hidden argument*/NULL);
		Camera_t3533968274 * L_2 = __this->get_m_Camera_7();
		NullCheck(L_2);
		Transform_t284553113 * L_3 = Component_get_transform_m4257140443(L_2, /*hidden argument*/NULL);
		float L_4 = __this->get_posXI_15();
		NullCheck(L_0);
		MouseLook_LookRotation_m2248845347(L_0, L_1, L_3, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets.Characters.FirstPerson.FirstPersonController::Menu()
extern const MethodInfo* GameObject_GetComponent_TisMeshCollider_t1080724846_m1137991205_MethodInfo_var;
extern const MethodInfo* GameObject_GetComponent_TisMeshRenderer_t1217738301_m2686897910_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral112895977;
extern const uint32_t FirstPersonController_Menu_m3722778581_MetadataUsageId;
extern "C"  void FirstPersonController_Menu_m3722778581 (FirstPersonController_t2196128127 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (FirstPersonController_Menu_m3722778581_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	GameObject_t4012695102 * V_0 = NULL;
	GameObject_t4012695102 * V_1 = NULL;
	{
		bool L_0 = __this->get_flagWalls_16();
		if (L_0)
		{
			goto IL_003a;
		}
	}
	{
		GameObject_t4012695102 * L_1 = GameObject_FindGameObjectWithTag_m2635560165(NULL /*static, unused*/, _stringLiteral112895977, /*hidden argument*/NULL);
		V_0 = L_1;
		GameObject_t4012695102 * L_2 = V_0;
		NullCheck(L_2);
		MeshCollider_t1080724846 * L_3 = GameObject_GetComponent_TisMeshCollider_t1080724846_m1137991205(L_2, /*hidden argument*/GameObject_GetComponent_TisMeshCollider_t1080724846_m1137991205_MethodInfo_var);
		NullCheck(L_3);
		Collider_set_enabled_m2575670866(L_3, (bool)1, /*hidden argument*/NULL);
		GameObject_t4012695102 * L_4 = V_0;
		NullCheck(L_4);
		MeshRenderer_t1217738301 * L_5 = GameObject_GetComponent_TisMeshRenderer_t1217738301_m2686897910(L_4, /*hidden argument*/GameObject_GetComponent_TisMeshRenderer_t1217738301_m2686897910_MethodInfo_var);
		NullCheck(L_5);
		Renderer_set_enabled_m2514140131(L_5, (bool)1, /*hidden argument*/NULL);
		__this->set_flagWalls_16((bool)1);
		goto IL_0064;
	}

IL_003a:
	{
		GameObject_t4012695102 * L_6 = GameObject_FindGameObjectWithTag_m2635560165(NULL /*static, unused*/, _stringLiteral112895977, /*hidden argument*/NULL);
		V_1 = L_6;
		GameObject_t4012695102 * L_7 = V_1;
		NullCheck(L_7);
		MeshCollider_t1080724846 * L_8 = GameObject_GetComponent_TisMeshCollider_t1080724846_m1137991205(L_7, /*hidden argument*/GameObject_GetComponent_TisMeshCollider_t1080724846_m1137991205_MethodInfo_var);
		NullCheck(L_8);
		Collider_set_enabled_m2575670866(L_8, (bool)0, /*hidden argument*/NULL);
		GameObject_t4012695102 * L_9 = V_1;
		NullCheck(L_9);
		MeshRenderer_t1217738301 * L_10 = GameObject_GetComponent_TisMeshRenderer_t1217738301_m2686897910(L_9, /*hidden argument*/GameObject_GetComponent_TisMeshRenderer_t1217738301_m2686897910_MethodInfo_var);
		NullCheck(L_10);
		Renderer_set_enabled_m2514140131(L_10, (bool)0, /*hidden argument*/NULL);
		__this->set_flagWalls_16((bool)0);
	}

IL_0064:
	{
		return;
	}
}
// System.Void UnityStandardAssets.Characters.FirstPerson.MouseLook::.ctor()
extern "C"  void MouseLook__ctor_m141609323 (MouseLook_t2714862274 * __this, const MethodInfo* method)
{
	{
		__this->set_sensitivityX_1((15.0f));
		__this->set_sensitivityY_2((15.0f));
		__this->set_minimumX_3((-360.0f));
		__this->set_maximumX_4((360.0f));
		__this->set_minimumY_5((-60.0f));
		__this->set_maximumY_6((60.0f));
		Object__ctor_m1772956182(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets.Characters.FirstPerson.MouseLook::LookRotation(UnityEngine.Transform,UnityEngine.Transform,System.Single)
extern Il2CppClass* Input_t1593691127_il2cpp_TypeInfo_var;
extern Il2CppClass* Mathf_t1597001355_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2907718525;
extern Il2CppCodeGenString* _stringLiteral2907718526;
extern const uint32_t MouseLook_LookRotation_m2248845347_MetadataUsageId;
extern "C"  void MouseLook_LookRotation_m2248845347 (MouseLook_t2714862274 * __this, Transform_t284553113 * ___character0, Transform_t284553113 * ___camera1, float ___posXI2, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (MouseLook_LookRotation_m2248845347_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	Vector3_t3525329789  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		int32_t L_0 = __this->get_axes_0();
		if (L_0)
		{
			goto IL_00b7;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1593691127_il2cpp_TypeInfo_var);
		float L_1 = Input_GetAxis_m2027668530(NULL /*static, unused*/, _stringLiteral2907718525, /*hidden argument*/NULL);
		float L_2 = ___posXI2;
		if ((((float)L_1) == ((float)L_2)))
		{
			goto IL_00b7;
		}
	}
	{
		float L_3 = __this->get_rotationX_8();
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1593691127_il2cpp_TypeInfo_var);
		float L_4 = Input_GetAxis_m2027668530(NULL /*static, unused*/, _stringLiteral2907718525, /*hidden argument*/NULL);
		float L_5 = __this->get_sensitivityY_2();
		__this->set_rotationX_8(((float)((float)L_3+(float)((float)((float)L_4*(float)L_5)))));
		float L_6 = __this->get_rotationX_8();
		float L_7 = __this->get_minimumX_3();
		float L_8 = __this->get_maximumX_4();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t1597001355_il2cpp_TypeInfo_var);
		float L_9 = Mathf_Clamp_m3872743893(NULL /*static, unused*/, L_6, L_7, L_8, /*hidden argument*/NULL);
		__this->set_rotationX_8(L_9);
		float L_10 = __this->get_rotationY_7();
		float L_11 = Input_GetAxis_m2027668530(NULL /*static, unused*/, _stringLiteral2907718526, /*hidden argument*/NULL);
		float L_12 = __this->get_sensitivityY_2();
		__this->set_rotationY_7(((float)((float)L_10+(float)((float)((float)L_11*(float)L_12)))));
		float L_13 = __this->get_rotationY_7();
		float L_14 = __this->get_minimumY_5();
		float L_15 = __this->get_maximumY_6();
		float L_16 = Mathf_Clamp_m3872743893(NULL /*static, unused*/, L_13, L_14, L_15, /*hidden argument*/NULL);
		__this->set_rotationY_7(L_16);
		Transform_t284553113 * L_17 = ___character0;
		float L_18 = __this->get_rotationY_7();
		float L_19 = __this->get_rotationX_8();
		Transform_t284553113 * L_20 = ___character0;
		NullCheck(L_20);
		Vector3_t3525329789  L_21 = Transform_get_localEulerAngles_m3489183428(L_20, /*hidden argument*/NULL);
		V_0 = L_21;
		float L_22 = (&V_0)->get_z_3();
		Vector3_t3525329789  L_23;
		memset(&L_23, 0, sizeof(L_23));
		Vector3__ctor_m2926210380(&L_23, L_18, ((-L_19)), L_22, /*hidden argument*/NULL);
		NullCheck(L_17);
		Transform_set_localEulerAngles_m3898859559(L_17, L_23, /*hidden argument*/NULL);
	}

IL_00b7:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
