#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Transform
struct Transform_t1659122786;
// UnityEngine.Rigidbody
struct Rigidbody_t3346577219;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "AssemblyU2DCSharp_UnityStandardAssets_Cameras_Abstr181978984.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.Cameras.AbstractTargetFollower
struct  AbstractTargetFollower_t2600961761  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.Transform UnityStandardAssets.Cameras.AbstractTargetFollower::m_Target
	Transform_t1659122786 * ___m_Target_2;
	// System.Boolean UnityStandardAssets.Cameras.AbstractTargetFollower::m_AutoTargetPlayer
	bool ___m_AutoTargetPlayer_3;
	// UnityStandardAssets.Cameras.AbstractTargetFollower/UpdateType UnityStandardAssets.Cameras.AbstractTargetFollower::m_UpdateType
	int32_t ___m_UpdateType_4;
	// UnityEngine.Rigidbody UnityStandardAssets.Cameras.AbstractTargetFollower::targetRigidbody
	Rigidbody_t3346577219 * ___targetRigidbody_5;

public:
	inline static int32_t get_offset_of_m_Target_2() { return static_cast<int32_t>(offsetof(AbstractTargetFollower_t2600961761, ___m_Target_2)); }
	inline Transform_t1659122786 * get_m_Target_2() const { return ___m_Target_2; }
	inline Transform_t1659122786 ** get_address_of_m_Target_2() { return &___m_Target_2; }
	inline void set_m_Target_2(Transform_t1659122786 * value)
	{
		___m_Target_2 = value;
		Il2CppCodeGenWriteBarrier(&___m_Target_2, value);
	}

	inline static int32_t get_offset_of_m_AutoTargetPlayer_3() { return static_cast<int32_t>(offsetof(AbstractTargetFollower_t2600961761, ___m_AutoTargetPlayer_3)); }
	inline bool get_m_AutoTargetPlayer_3() const { return ___m_AutoTargetPlayer_3; }
	inline bool* get_address_of_m_AutoTargetPlayer_3() { return &___m_AutoTargetPlayer_3; }
	inline void set_m_AutoTargetPlayer_3(bool value)
	{
		___m_AutoTargetPlayer_3 = value;
	}

	inline static int32_t get_offset_of_m_UpdateType_4() { return static_cast<int32_t>(offsetof(AbstractTargetFollower_t2600961761, ___m_UpdateType_4)); }
	inline int32_t get_m_UpdateType_4() const { return ___m_UpdateType_4; }
	inline int32_t* get_address_of_m_UpdateType_4() { return &___m_UpdateType_4; }
	inline void set_m_UpdateType_4(int32_t value)
	{
		___m_UpdateType_4 = value;
	}

	inline static int32_t get_offset_of_targetRigidbody_5() { return static_cast<int32_t>(offsetof(AbstractTargetFollower_t2600961761, ___targetRigidbody_5)); }
	inline Rigidbody_t3346577219 * get_targetRigidbody_5() const { return ___targetRigidbody_5; }
	inline Rigidbody_t3346577219 ** get_address_of_targetRigidbody_5() { return &___targetRigidbody_5; }
	inline void set_targetRigidbody_5(Rigidbody_t3346577219 * value)
	{
		___targetRigidbody_5 = value;
		Il2CppCodeGenWriteBarrier(&___targetRigidbody_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
