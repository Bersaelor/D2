#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityStandardAssets.Characters.FirstPerson.MouseLook
struct MouseLook_t1652428078;
// UnityStandardAssets.Utility.FOVKick
struct FOVKick_t1461625209;
// UnityStandardAssets.Utility.CurveControlledBob
struct CurveControlledBob_t1713654004;
// UnityStandardAssets.Utility.LerpControlledBob
struct LerpControlledBob_t2756642198;
// UnityEngine.AudioClip[]
struct AudioClipU5BU5D_t3001083477;
// UnityEngine.AudioClip
struct AudioClip_t794140988;
// UnityEngine.Camera
struct Camera_t2727095145;
// UnityEngine.CharacterController
struct CharacterController_t1618060635;
// UnityEngine.AudioSource
struct AudioSource_t1740077639;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "UnityEngine_UnityEngine_Vector24282066565.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"
#include "UnityEngine_UnityEngine_CollisionFlags490137529.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.Characters.FirstPerson.FirstPersonController
struct  FirstPersonController_t3797584363  : public MonoBehaviour_t667441552
{
public:
	// System.Boolean UnityStandardAssets.Characters.FirstPerson.FirstPersonController::m_IsWalking
	bool ___m_IsWalking_2;
	// System.Single UnityStandardAssets.Characters.FirstPerson.FirstPersonController::m_WalkSpeed
	float ___m_WalkSpeed_3;
	// System.Single UnityStandardAssets.Characters.FirstPerson.FirstPersonController::m_RunSpeed
	float ___m_RunSpeed_4;
	// System.Single UnityStandardAssets.Characters.FirstPerson.FirstPersonController::m_RunstepLenghten
	float ___m_RunstepLenghten_5;
	// System.Single UnityStandardAssets.Characters.FirstPerson.FirstPersonController::m_JumpSpeed
	float ___m_JumpSpeed_6;
	// System.Single UnityStandardAssets.Characters.FirstPerson.FirstPersonController::m_StickToGroundForce
	float ___m_StickToGroundForce_7;
	// System.Single UnityStandardAssets.Characters.FirstPerson.FirstPersonController::m_GravityMultiplier
	float ___m_GravityMultiplier_8;
	// UnityStandardAssets.Characters.FirstPerson.MouseLook UnityStandardAssets.Characters.FirstPerson.FirstPersonController::m_MouseLook
	MouseLook_t1652428078 * ___m_MouseLook_9;
	// System.Boolean UnityStandardAssets.Characters.FirstPerson.FirstPersonController::m_UseFovKick
	bool ___m_UseFovKick_10;
	// UnityStandardAssets.Utility.FOVKick UnityStandardAssets.Characters.FirstPerson.FirstPersonController::m_FovKick
	FOVKick_t1461625209 * ___m_FovKick_11;
	// System.Boolean UnityStandardAssets.Characters.FirstPerson.FirstPersonController::m_UseHeadBob
	bool ___m_UseHeadBob_12;
	// UnityStandardAssets.Utility.CurveControlledBob UnityStandardAssets.Characters.FirstPerson.FirstPersonController::m_HeadBob
	CurveControlledBob_t1713654004 * ___m_HeadBob_13;
	// UnityStandardAssets.Utility.LerpControlledBob UnityStandardAssets.Characters.FirstPerson.FirstPersonController::m_JumpBob
	LerpControlledBob_t2756642198 * ___m_JumpBob_14;
	// System.Single UnityStandardAssets.Characters.FirstPerson.FirstPersonController::m_StepInterval
	float ___m_StepInterval_15;
	// UnityEngine.AudioClip[] UnityStandardAssets.Characters.FirstPerson.FirstPersonController::m_FootstepSounds
	AudioClipU5BU5D_t3001083477* ___m_FootstepSounds_16;
	// UnityEngine.AudioClip UnityStandardAssets.Characters.FirstPerson.FirstPersonController::m_JumpSound
	AudioClip_t794140988 * ___m_JumpSound_17;
	// UnityEngine.AudioClip UnityStandardAssets.Characters.FirstPerson.FirstPersonController::m_LandSound
	AudioClip_t794140988 * ___m_LandSound_18;
	// UnityEngine.Camera UnityStandardAssets.Characters.FirstPerson.FirstPersonController::m_Camera
	Camera_t2727095145 * ___m_Camera_19;
	// System.Boolean UnityStandardAssets.Characters.FirstPerson.FirstPersonController::m_Jump
	bool ___m_Jump_20;
	// System.Single UnityStandardAssets.Characters.FirstPerson.FirstPersonController::m_YRotation
	float ___m_YRotation_21;
	// UnityEngine.Vector2 UnityStandardAssets.Characters.FirstPerson.FirstPersonController::m_Input
	Vector2_t4282066565  ___m_Input_22;
	// UnityEngine.Vector3 UnityStandardAssets.Characters.FirstPerson.FirstPersonController::m_MoveDir
	Vector3_t4282066566  ___m_MoveDir_23;
	// UnityEngine.CharacterController UnityStandardAssets.Characters.FirstPerson.FirstPersonController::m_CharacterController
	CharacterController_t1618060635 * ___m_CharacterController_24;
	// UnityEngine.CollisionFlags UnityStandardAssets.Characters.FirstPerson.FirstPersonController::m_CollisionFlags
	int32_t ___m_CollisionFlags_25;
	// System.Boolean UnityStandardAssets.Characters.FirstPerson.FirstPersonController::m_PreviouslyGrounded
	bool ___m_PreviouslyGrounded_26;
	// UnityEngine.Vector3 UnityStandardAssets.Characters.FirstPerson.FirstPersonController::m_OriginalCameraPosition
	Vector3_t4282066566  ___m_OriginalCameraPosition_27;
	// System.Single UnityStandardAssets.Characters.FirstPerson.FirstPersonController::m_StepCycle
	float ___m_StepCycle_28;
	// System.Single UnityStandardAssets.Characters.FirstPerson.FirstPersonController::m_NextStep
	float ___m_NextStep_29;
	// System.Boolean UnityStandardAssets.Characters.FirstPerson.FirstPersonController::m_Jumping
	bool ___m_Jumping_30;
	// UnityEngine.AudioSource UnityStandardAssets.Characters.FirstPerson.FirstPersonController::m_AudioSource
	AudioSource_t1740077639 * ___m_AudioSource_31;

public:
	inline static int32_t get_offset_of_m_IsWalking_2() { return static_cast<int32_t>(offsetof(FirstPersonController_t3797584363, ___m_IsWalking_2)); }
	inline bool get_m_IsWalking_2() const { return ___m_IsWalking_2; }
	inline bool* get_address_of_m_IsWalking_2() { return &___m_IsWalking_2; }
	inline void set_m_IsWalking_2(bool value)
	{
		___m_IsWalking_2 = value;
	}

	inline static int32_t get_offset_of_m_WalkSpeed_3() { return static_cast<int32_t>(offsetof(FirstPersonController_t3797584363, ___m_WalkSpeed_3)); }
	inline float get_m_WalkSpeed_3() const { return ___m_WalkSpeed_3; }
	inline float* get_address_of_m_WalkSpeed_3() { return &___m_WalkSpeed_3; }
	inline void set_m_WalkSpeed_3(float value)
	{
		___m_WalkSpeed_3 = value;
	}

	inline static int32_t get_offset_of_m_RunSpeed_4() { return static_cast<int32_t>(offsetof(FirstPersonController_t3797584363, ___m_RunSpeed_4)); }
	inline float get_m_RunSpeed_4() const { return ___m_RunSpeed_4; }
	inline float* get_address_of_m_RunSpeed_4() { return &___m_RunSpeed_4; }
	inline void set_m_RunSpeed_4(float value)
	{
		___m_RunSpeed_4 = value;
	}

	inline static int32_t get_offset_of_m_RunstepLenghten_5() { return static_cast<int32_t>(offsetof(FirstPersonController_t3797584363, ___m_RunstepLenghten_5)); }
	inline float get_m_RunstepLenghten_5() const { return ___m_RunstepLenghten_5; }
	inline float* get_address_of_m_RunstepLenghten_5() { return &___m_RunstepLenghten_5; }
	inline void set_m_RunstepLenghten_5(float value)
	{
		___m_RunstepLenghten_5 = value;
	}

	inline static int32_t get_offset_of_m_JumpSpeed_6() { return static_cast<int32_t>(offsetof(FirstPersonController_t3797584363, ___m_JumpSpeed_6)); }
	inline float get_m_JumpSpeed_6() const { return ___m_JumpSpeed_6; }
	inline float* get_address_of_m_JumpSpeed_6() { return &___m_JumpSpeed_6; }
	inline void set_m_JumpSpeed_6(float value)
	{
		___m_JumpSpeed_6 = value;
	}

	inline static int32_t get_offset_of_m_StickToGroundForce_7() { return static_cast<int32_t>(offsetof(FirstPersonController_t3797584363, ___m_StickToGroundForce_7)); }
	inline float get_m_StickToGroundForce_7() const { return ___m_StickToGroundForce_7; }
	inline float* get_address_of_m_StickToGroundForce_7() { return &___m_StickToGroundForce_7; }
	inline void set_m_StickToGroundForce_7(float value)
	{
		___m_StickToGroundForce_7 = value;
	}

	inline static int32_t get_offset_of_m_GravityMultiplier_8() { return static_cast<int32_t>(offsetof(FirstPersonController_t3797584363, ___m_GravityMultiplier_8)); }
	inline float get_m_GravityMultiplier_8() const { return ___m_GravityMultiplier_8; }
	inline float* get_address_of_m_GravityMultiplier_8() { return &___m_GravityMultiplier_8; }
	inline void set_m_GravityMultiplier_8(float value)
	{
		___m_GravityMultiplier_8 = value;
	}

	inline static int32_t get_offset_of_m_MouseLook_9() { return static_cast<int32_t>(offsetof(FirstPersonController_t3797584363, ___m_MouseLook_9)); }
	inline MouseLook_t1652428078 * get_m_MouseLook_9() const { return ___m_MouseLook_9; }
	inline MouseLook_t1652428078 ** get_address_of_m_MouseLook_9() { return &___m_MouseLook_9; }
	inline void set_m_MouseLook_9(MouseLook_t1652428078 * value)
	{
		___m_MouseLook_9 = value;
		Il2CppCodeGenWriteBarrier(&___m_MouseLook_9, value);
	}

	inline static int32_t get_offset_of_m_UseFovKick_10() { return static_cast<int32_t>(offsetof(FirstPersonController_t3797584363, ___m_UseFovKick_10)); }
	inline bool get_m_UseFovKick_10() const { return ___m_UseFovKick_10; }
	inline bool* get_address_of_m_UseFovKick_10() { return &___m_UseFovKick_10; }
	inline void set_m_UseFovKick_10(bool value)
	{
		___m_UseFovKick_10 = value;
	}

	inline static int32_t get_offset_of_m_FovKick_11() { return static_cast<int32_t>(offsetof(FirstPersonController_t3797584363, ___m_FovKick_11)); }
	inline FOVKick_t1461625209 * get_m_FovKick_11() const { return ___m_FovKick_11; }
	inline FOVKick_t1461625209 ** get_address_of_m_FovKick_11() { return &___m_FovKick_11; }
	inline void set_m_FovKick_11(FOVKick_t1461625209 * value)
	{
		___m_FovKick_11 = value;
		Il2CppCodeGenWriteBarrier(&___m_FovKick_11, value);
	}

	inline static int32_t get_offset_of_m_UseHeadBob_12() { return static_cast<int32_t>(offsetof(FirstPersonController_t3797584363, ___m_UseHeadBob_12)); }
	inline bool get_m_UseHeadBob_12() const { return ___m_UseHeadBob_12; }
	inline bool* get_address_of_m_UseHeadBob_12() { return &___m_UseHeadBob_12; }
	inline void set_m_UseHeadBob_12(bool value)
	{
		___m_UseHeadBob_12 = value;
	}

	inline static int32_t get_offset_of_m_HeadBob_13() { return static_cast<int32_t>(offsetof(FirstPersonController_t3797584363, ___m_HeadBob_13)); }
	inline CurveControlledBob_t1713654004 * get_m_HeadBob_13() const { return ___m_HeadBob_13; }
	inline CurveControlledBob_t1713654004 ** get_address_of_m_HeadBob_13() { return &___m_HeadBob_13; }
	inline void set_m_HeadBob_13(CurveControlledBob_t1713654004 * value)
	{
		___m_HeadBob_13 = value;
		Il2CppCodeGenWriteBarrier(&___m_HeadBob_13, value);
	}

	inline static int32_t get_offset_of_m_JumpBob_14() { return static_cast<int32_t>(offsetof(FirstPersonController_t3797584363, ___m_JumpBob_14)); }
	inline LerpControlledBob_t2756642198 * get_m_JumpBob_14() const { return ___m_JumpBob_14; }
	inline LerpControlledBob_t2756642198 ** get_address_of_m_JumpBob_14() { return &___m_JumpBob_14; }
	inline void set_m_JumpBob_14(LerpControlledBob_t2756642198 * value)
	{
		___m_JumpBob_14 = value;
		Il2CppCodeGenWriteBarrier(&___m_JumpBob_14, value);
	}

	inline static int32_t get_offset_of_m_StepInterval_15() { return static_cast<int32_t>(offsetof(FirstPersonController_t3797584363, ___m_StepInterval_15)); }
	inline float get_m_StepInterval_15() const { return ___m_StepInterval_15; }
	inline float* get_address_of_m_StepInterval_15() { return &___m_StepInterval_15; }
	inline void set_m_StepInterval_15(float value)
	{
		___m_StepInterval_15 = value;
	}

	inline static int32_t get_offset_of_m_FootstepSounds_16() { return static_cast<int32_t>(offsetof(FirstPersonController_t3797584363, ___m_FootstepSounds_16)); }
	inline AudioClipU5BU5D_t3001083477* get_m_FootstepSounds_16() const { return ___m_FootstepSounds_16; }
	inline AudioClipU5BU5D_t3001083477** get_address_of_m_FootstepSounds_16() { return &___m_FootstepSounds_16; }
	inline void set_m_FootstepSounds_16(AudioClipU5BU5D_t3001083477* value)
	{
		___m_FootstepSounds_16 = value;
		Il2CppCodeGenWriteBarrier(&___m_FootstepSounds_16, value);
	}

	inline static int32_t get_offset_of_m_JumpSound_17() { return static_cast<int32_t>(offsetof(FirstPersonController_t3797584363, ___m_JumpSound_17)); }
	inline AudioClip_t794140988 * get_m_JumpSound_17() const { return ___m_JumpSound_17; }
	inline AudioClip_t794140988 ** get_address_of_m_JumpSound_17() { return &___m_JumpSound_17; }
	inline void set_m_JumpSound_17(AudioClip_t794140988 * value)
	{
		___m_JumpSound_17 = value;
		Il2CppCodeGenWriteBarrier(&___m_JumpSound_17, value);
	}

	inline static int32_t get_offset_of_m_LandSound_18() { return static_cast<int32_t>(offsetof(FirstPersonController_t3797584363, ___m_LandSound_18)); }
	inline AudioClip_t794140988 * get_m_LandSound_18() const { return ___m_LandSound_18; }
	inline AudioClip_t794140988 ** get_address_of_m_LandSound_18() { return &___m_LandSound_18; }
	inline void set_m_LandSound_18(AudioClip_t794140988 * value)
	{
		___m_LandSound_18 = value;
		Il2CppCodeGenWriteBarrier(&___m_LandSound_18, value);
	}

	inline static int32_t get_offset_of_m_Camera_19() { return static_cast<int32_t>(offsetof(FirstPersonController_t3797584363, ___m_Camera_19)); }
	inline Camera_t2727095145 * get_m_Camera_19() const { return ___m_Camera_19; }
	inline Camera_t2727095145 ** get_address_of_m_Camera_19() { return &___m_Camera_19; }
	inline void set_m_Camera_19(Camera_t2727095145 * value)
	{
		___m_Camera_19 = value;
		Il2CppCodeGenWriteBarrier(&___m_Camera_19, value);
	}

	inline static int32_t get_offset_of_m_Jump_20() { return static_cast<int32_t>(offsetof(FirstPersonController_t3797584363, ___m_Jump_20)); }
	inline bool get_m_Jump_20() const { return ___m_Jump_20; }
	inline bool* get_address_of_m_Jump_20() { return &___m_Jump_20; }
	inline void set_m_Jump_20(bool value)
	{
		___m_Jump_20 = value;
	}

	inline static int32_t get_offset_of_m_YRotation_21() { return static_cast<int32_t>(offsetof(FirstPersonController_t3797584363, ___m_YRotation_21)); }
	inline float get_m_YRotation_21() const { return ___m_YRotation_21; }
	inline float* get_address_of_m_YRotation_21() { return &___m_YRotation_21; }
	inline void set_m_YRotation_21(float value)
	{
		___m_YRotation_21 = value;
	}

	inline static int32_t get_offset_of_m_Input_22() { return static_cast<int32_t>(offsetof(FirstPersonController_t3797584363, ___m_Input_22)); }
	inline Vector2_t4282066565  get_m_Input_22() const { return ___m_Input_22; }
	inline Vector2_t4282066565 * get_address_of_m_Input_22() { return &___m_Input_22; }
	inline void set_m_Input_22(Vector2_t4282066565  value)
	{
		___m_Input_22 = value;
	}

	inline static int32_t get_offset_of_m_MoveDir_23() { return static_cast<int32_t>(offsetof(FirstPersonController_t3797584363, ___m_MoveDir_23)); }
	inline Vector3_t4282066566  get_m_MoveDir_23() const { return ___m_MoveDir_23; }
	inline Vector3_t4282066566 * get_address_of_m_MoveDir_23() { return &___m_MoveDir_23; }
	inline void set_m_MoveDir_23(Vector3_t4282066566  value)
	{
		___m_MoveDir_23 = value;
	}

	inline static int32_t get_offset_of_m_CharacterController_24() { return static_cast<int32_t>(offsetof(FirstPersonController_t3797584363, ___m_CharacterController_24)); }
	inline CharacterController_t1618060635 * get_m_CharacterController_24() const { return ___m_CharacterController_24; }
	inline CharacterController_t1618060635 ** get_address_of_m_CharacterController_24() { return &___m_CharacterController_24; }
	inline void set_m_CharacterController_24(CharacterController_t1618060635 * value)
	{
		___m_CharacterController_24 = value;
		Il2CppCodeGenWriteBarrier(&___m_CharacterController_24, value);
	}

	inline static int32_t get_offset_of_m_CollisionFlags_25() { return static_cast<int32_t>(offsetof(FirstPersonController_t3797584363, ___m_CollisionFlags_25)); }
	inline int32_t get_m_CollisionFlags_25() const { return ___m_CollisionFlags_25; }
	inline int32_t* get_address_of_m_CollisionFlags_25() { return &___m_CollisionFlags_25; }
	inline void set_m_CollisionFlags_25(int32_t value)
	{
		___m_CollisionFlags_25 = value;
	}

	inline static int32_t get_offset_of_m_PreviouslyGrounded_26() { return static_cast<int32_t>(offsetof(FirstPersonController_t3797584363, ___m_PreviouslyGrounded_26)); }
	inline bool get_m_PreviouslyGrounded_26() const { return ___m_PreviouslyGrounded_26; }
	inline bool* get_address_of_m_PreviouslyGrounded_26() { return &___m_PreviouslyGrounded_26; }
	inline void set_m_PreviouslyGrounded_26(bool value)
	{
		___m_PreviouslyGrounded_26 = value;
	}

	inline static int32_t get_offset_of_m_OriginalCameraPosition_27() { return static_cast<int32_t>(offsetof(FirstPersonController_t3797584363, ___m_OriginalCameraPosition_27)); }
	inline Vector3_t4282066566  get_m_OriginalCameraPosition_27() const { return ___m_OriginalCameraPosition_27; }
	inline Vector3_t4282066566 * get_address_of_m_OriginalCameraPosition_27() { return &___m_OriginalCameraPosition_27; }
	inline void set_m_OriginalCameraPosition_27(Vector3_t4282066566  value)
	{
		___m_OriginalCameraPosition_27 = value;
	}

	inline static int32_t get_offset_of_m_StepCycle_28() { return static_cast<int32_t>(offsetof(FirstPersonController_t3797584363, ___m_StepCycle_28)); }
	inline float get_m_StepCycle_28() const { return ___m_StepCycle_28; }
	inline float* get_address_of_m_StepCycle_28() { return &___m_StepCycle_28; }
	inline void set_m_StepCycle_28(float value)
	{
		___m_StepCycle_28 = value;
	}

	inline static int32_t get_offset_of_m_NextStep_29() { return static_cast<int32_t>(offsetof(FirstPersonController_t3797584363, ___m_NextStep_29)); }
	inline float get_m_NextStep_29() const { return ___m_NextStep_29; }
	inline float* get_address_of_m_NextStep_29() { return &___m_NextStep_29; }
	inline void set_m_NextStep_29(float value)
	{
		___m_NextStep_29 = value;
	}

	inline static int32_t get_offset_of_m_Jumping_30() { return static_cast<int32_t>(offsetof(FirstPersonController_t3797584363, ___m_Jumping_30)); }
	inline bool get_m_Jumping_30() const { return ___m_Jumping_30; }
	inline bool* get_address_of_m_Jumping_30() { return &___m_Jumping_30; }
	inline void set_m_Jumping_30(bool value)
	{
		___m_Jumping_30 = value;
	}

	inline static int32_t get_offset_of_m_AudioSource_31() { return static_cast<int32_t>(offsetof(FirstPersonController_t3797584363, ___m_AudioSource_31)); }
	inline AudioSource_t1740077639 * get_m_AudioSource_31() const { return ___m_AudioSource_31; }
	inline AudioSource_t1740077639 ** get_address_of_m_AudioSource_31() { return &___m_AudioSource_31; }
	inline void set_m_AudioSource_31(AudioSource_t1740077639 * value)
	{
		___m_AudioSource_31 = value;
		Il2CppCodeGenWriteBarrier(&___m_AudioSource_31, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
