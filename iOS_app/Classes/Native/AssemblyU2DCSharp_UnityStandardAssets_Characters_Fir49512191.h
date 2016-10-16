#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Camera
struct Camera_t2727095145;
// UnityStandardAssets.Utility.CurveControlledBob
struct CurveControlledBob_t1713654004;
// UnityStandardAssets.Utility.LerpControlledBob
struct LerpControlledBob_t2756642198;
// UnityStandardAssets.Characters.FirstPerson.RigidbodyFirstPersonController
struct RigidbodyFirstPersonController_t3033543302;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.Characters.FirstPerson.HeadBob
struct  HeadBob_t49512191  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.Camera UnityStandardAssets.Characters.FirstPerson.HeadBob::Camera
	Camera_t2727095145 * ___Camera_2;
	// UnityStandardAssets.Utility.CurveControlledBob UnityStandardAssets.Characters.FirstPerson.HeadBob::motionBob
	CurveControlledBob_t1713654004 * ___motionBob_3;
	// UnityStandardAssets.Utility.LerpControlledBob UnityStandardAssets.Characters.FirstPerson.HeadBob::jumpAndLandingBob
	LerpControlledBob_t2756642198 * ___jumpAndLandingBob_4;
	// UnityStandardAssets.Characters.FirstPerson.RigidbodyFirstPersonController UnityStandardAssets.Characters.FirstPerson.HeadBob::rigidbodyFirstPersonController
	RigidbodyFirstPersonController_t3033543302 * ___rigidbodyFirstPersonController_5;
	// System.Single UnityStandardAssets.Characters.FirstPerson.HeadBob::StrideInterval
	float ___StrideInterval_6;
	// System.Single UnityStandardAssets.Characters.FirstPerson.HeadBob::RunningStrideLengthen
	float ___RunningStrideLengthen_7;
	// System.Boolean UnityStandardAssets.Characters.FirstPerson.HeadBob::m_PreviouslyGrounded
	bool ___m_PreviouslyGrounded_8;
	// UnityEngine.Vector3 UnityStandardAssets.Characters.FirstPerson.HeadBob::m_OriginalCameraPosition
	Vector3_t4282066566  ___m_OriginalCameraPosition_9;

public:
	inline static int32_t get_offset_of_Camera_2() { return static_cast<int32_t>(offsetof(HeadBob_t49512191, ___Camera_2)); }
	inline Camera_t2727095145 * get_Camera_2() const { return ___Camera_2; }
	inline Camera_t2727095145 ** get_address_of_Camera_2() { return &___Camera_2; }
	inline void set_Camera_2(Camera_t2727095145 * value)
	{
		___Camera_2 = value;
		Il2CppCodeGenWriteBarrier(&___Camera_2, value);
	}

	inline static int32_t get_offset_of_motionBob_3() { return static_cast<int32_t>(offsetof(HeadBob_t49512191, ___motionBob_3)); }
	inline CurveControlledBob_t1713654004 * get_motionBob_3() const { return ___motionBob_3; }
	inline CurveControlledBob_t1713654004 ** get_address_of_motionBob_3() { return &___motionBob_3; }
	inline void set_motionBob_3(CurveControlledBob_t1713654004 * value)
	{
		___motionBob_3 = value;
		Il2CppCodeGenWriteBarrier(&___motionBob_3, value);
	}

	inline static int32_t get_offset_of_jumpAndLandingBob_4() { return static_cast<int32_t>(offsetof(HeadBob_t49512191, ___jumpAndLandingBob_4)); }
	inline LerpControlledBob_t2756642198 * get_jumpAndLandingBob_4() const { return ___jumpAndLandingBob_4; }
	inline LerpControlledBob_t2756642198 ** get_address_of_jumpAndLandingBob_4() { return &___jumpAndLandingBob_4; }
	inline void set_jumpAndLandingBob_4(LerpControlledBob_t2756642198 * value)
	{
		___jumpAndLandingBob_4 = value;
		Il2CppCodeGenWriteBarrier(&___jumpAndLandingBob_4, value);
	}

	inline static int32_t get_offset_of_rigidbodyFirstPersonController_5() { return static_cast<int32_t>(offsetof(HeadBob_t49512191, ___rigidbodyFirstPersonController_5)); }
	inline RigidbodyFirstPersonController_t3033543302 * get_rigidbodyFirstPersonController_5() const { return ___rigidbodyFirstPersonController_5; }
	inline RigidbodyFirstPersonController_t3033543302 ** get_address_of_rigidbodyFirstPersonController_5() { return &___rigidbodyFirstPersonController_5; }
	inline void set_rigidbodyFirstPersonController_5(RigidbodyFirstPersonController_t3033543302 * value)
	{
		___rigidbodyFirstPersonController_5 = value;
		Il2CppCodeGenWriteBarrier(&___rigidbodyFirstPersonController_5, value);
	}

	inline static int32_t get_offset_of_StrideInterval_6() { return static_cast<int32_t>(offsetof(HeadBob_t49512191, ___StrideInterval_6)); }
	inline float get_StrideInterval_6() const { return ___StrideInterval_6; }
	inline float* get_address_of_StrideInterval_6() { return &___StrideInterval_6; }
	inline void set_StrideInterval_6(float value)
	{
		___StrideInterval_6 = value;
	}

	inline static int32_t get_offset_of_RunningStrideLengthen_7() { return static_cast<int32_t>(offsetof(HeadBob_t49512191, ___RunningStrideLengthen_7)); }
	inline float get_RunningStrideLengthen_7() const { return ___RunningStrideLengthen_7; }
	inline float* get_address_of_RunningStrideLengthen_7() { return &___RunningStrideLengthen_7; }
	inline void set_RunningStrideLengthen_7(float value)
	{
		___RunningStrideLengthen_7 = value;
	}

	inline static int32_t get_offset_of_m_PreviouslyGrounded_8() { return static_cast<int32_t>(offsetof(HeadBob_t49512191, ___m_PreviouslyGrounded_8)); }
	inline bool get_m_PreviouslyGrounded_8() const { return ___m_PreviouslyGrounded_8; }
	inline bool* get_address_of_m_PreviouslyGrounded_8() { return &___m_PreviouslyGrounded_8; }
	inline void set_m_PreviouslyGrounded_8(bool value)
	{
		___m_PreviouslyGrounded_8 = value;
	}

	inline static int32_t get_offset_of_m_OriginalCameraPosition_9() { return static_cast<int32_t>(offsetof(HeadBob_t49512191, ___m_OriginalCameraPosition_9)); }
	inline Vector3_t4282066566  get_m_OriginalCameraPosition_9() const { return ___m_OriginalCameraPosition_9; }
	inline Vector3_t4282066566 * get_address_of_m_OriginalCameraPosition_9() { return &___m_OriginalCameraPosition_9; }
	inline void set_m_OriginalCameraPosition_9(Vector3_t4282066566  value)
	{
		___m_OriginalCameraPosition_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
