#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "AssemblyU2DCSharp_UnityStandardAssets_Cameras_Abst2600961761.h"
#include "UnityEngine_UnityEngine_Vector24282066565.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"
#include "UnityEngine_UnityEngine_Quaternion1553702882.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.Cameras.LookatTarget
struct  LookatTarget_t2497592275  : public AbstractTargetFollower_t2600961761
{
public:
	// UnityEngine.Vector2 UnityStandardAssets.Cameras.LookatTarget::m_RotationRange
	Vector2_t4282066565  ___m_RotationRange_6;
	// System.Single UnityStandardAssets.Cameras.LookatTarget::m_FollowSpeed
	float ___m_FollowSpeed_7;
	// UnityEngine.Vector3 UnityStandardAssets.Cameras.LookatTarget::m_FollowAngles
	Vector3_t4282066566  ___m_FollowAngles_8;
	// UnityEngine.Quaternion UnityStandardAssets.Cameras.LookatTarget::m_OriginalRotation
	Quaternion_t1553702882  ___m_OriginalRotation_9;
	// UnityEngine.Vector3 UnityStandardAssets.Cameras.LookatTarget::m_FollowVelocity
	Vector3_t4282066566  ___m_FollowVelocity_10;

public:
	inline static int32_t get_offset_of_m_RotationRange_6() { return static_cast<int32_t>(offsetof(LookatTarget_t2497592275, ___m_RotationRange_6)); }
	inline Vector2_t4282066565  get_m_RotationRange_6() const { return ___m_RotationRange_6; }
	inline Vector2_t4282066565 * get_address_of_m_RotationRange_6() { return &___m_RotationRange_6; }
	inline void set_m_RotationRange_6(Vector2_t4282066565  value)
	{
		___m_RotationRange_6 = value;
	}

	inline static int32_t get_offset_of_m_FollowSpeed_7() { return static_cast<int32_t>(offsetof(LookatTarget_t2497592275, ___m_FollowSpeed_7)); }
	inline float get_m_FollowSpeed_7() const { return ___m_FollowSpeed_7; }
	inline float* get_address_of_m_FollowSpeed_7() { return &___m_FollowSpeed_7; }
	inline void set_m_FollowSpeed_7(float value)
	{
		___m_FollowSpeed_7 = value;
	}

	inline static int32_t get_offset_of_m_FollowAngles_8() { return static_cast<int32_t>(offsetof(LookatTarget_t2497592275, ___m_FollowAngles_8)); }
	inline Vector3_t4282066566  get_m_FollowAngles_8() const { return ___m_FollowAngles_8; }
	inline Vector3_t4282066566 * get_address_of_m_FollowAngles_8() { return &___m_FollowAngles_8; }
	inline void set_m_FollowAngles_8(Vector3_t4282066566  value)
	{
		___m_FollowAngles_8 = value;
	}

	inline static int32_t get_offset_of_m_OriginalRotation_9() { return static_cast<int32_t>(offsetof(LookatTarget_t2497592275, ___m_OriginalRotation_9)); }
	inline Quaternion_t1553702882  get_m_OriginalRotation_9() const { return ___m_OriginalRotation_9; }
	inline Quaternion_t1553702882 * get_address_of_m_OriginalRotation_9() { return &___m_OriginalRotation_9; }
	inline void set_m_OriginalRotation_9(Quaternion_t1553702882  value)
	{
		___m_OriginalRotation_9 = value;
	}

	inline static int32_t get_offset_of_m_FollowVelocity_10() { return static_cast<int32_t>(offsetof(LookatTarget_t2497592275, ___m_FollowVelocity_10)); }
	inline Vector3_t4282066566  get_m_FollowVelocity_10() const { return ___m_FollowVelocity_10; }
	inline Vector3_t4282066566 * get_address_of_m_FollowVelocity_10() { return &___m_FollowVelocity_10; }
	inline void set_m_FollowVelocity_10(Vector3_t4282066566  value)
	{
		___m_FollowVelocity_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
