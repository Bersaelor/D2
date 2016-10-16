#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Rigidbody
struct Rigidbody_t3346577219;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.Vehicles.Ball.Ball
struct  Ball_t3028487487  : public MonoBehaviour_t667441552
{
public:
	// System.Single UnityStandardAssets.Vehicles.Ball.Ball::m_MovePower
	float ___m_MovePower_3;
	// System.Boolean UnityStandardAssets.Vehicles.Ball.Ball::m_UseTorque
	bool ___m_UseTorque_4;
	// System.Single UnityStandardAssets.Vehicles.Ball.Ball::m_MaxAngularVelocity
	float ___m_MaxAngularVelocity_5;
	// System.Single UnityStandardAssets.Vehicles.Ball.Ball::m_JumpPower
	float ___m_JumpPower_6;
	// UnityEngine.Rigidbody UnityStandardAssets.Vehicles.Ball.Ball::m_Rigidbody
	Rigidbody_t3346577219 * ___m_Rigidbody_7;

public:
	inline static int32_t get_offset_of_m_MovePower_3() { return static_cast<int32_t>(offsetof(Ball_t3028487487, ___m_MovePower_3)); }
	inline float get_m_MovePower_3() const { return ___m_MovePower_3; }
	inline float* get_address_of_m_MovePower_3() { return &___m_MovePower_3; }
	inline void set_m_MovePower_3(float value)
	{
		___m_MovePower_3 = value;
	}

	inline static int32_t get_offset_of_m_UseTorque_4() { return static_cast<int32_t>(offsetof(Ball_t3028487487, ___m_UseTorque_4)); }
	inline bool get_m_UseTorque_4() const { return ___m_UseTorque_4; }
	inline bool* get_address_of_m_UseTorque_4() { return &___m_UseTorque_4; }
	inline void set_m_UseTorque_4(bool value)
	{
		___m_UseTorque_4 = value;
	}

	inline static int32_t get_offset_of_m_MaxAngularVelocity_5() { return static_cast<int32_t>(offsetof(Ball_t3028487487, ___m_MaxAngularVelocity_5)); }
	inline float get_m_MaxAngularVelocity_5() const { return ___m_MaxAngularVelocity_5; }
	inline float* get_address_of_m_MaxAngularVelocity_5() { return &___m_MaxAngularVelocity_5; }
	inline void set_m_MaxAngularVelocity_5(float value)
	{
		___m_MaxAngularVelocity_5 = value;
	}

	inline static int32_t get_offset_of_m_JumpPower_6() { return static_cast<int32_t>(offsetof(Ball_t3028487487, ___m_JumpPower_6)); }
	inline float get_m_JumpPower_6() const { return ___m_JumpPower_6; }
	inline float* get_address_of_m_JumpPower_6() { return &___m_JumpPower_6; }
	inline void set_m_JumpPower_6(float value)
	{
		___m_JumpPower_6 = value;
	}

	inline static int32_t get_offset_of_m_Rigidbody_7() { return static_cast<int32_t>(offsetof(Ball_t3028487487, ___m_Rigidbody_7)); }
	inline Rigidbody_t3346577219 * get_m_Rigidbody_7() const { return ___m_Rigidbody_7; }
	inline Rigidbody_t3346577219 ** get_address_of_m_Rigidbody_7() { return &___m_Rigidbody_7; }
	inline void set_m_Rigidbody_7(Rigidbody_t3346577219 * value)
	{
		___m_Rigidbody_7 = value;
		Il2CppCodeGenWriteBarrier(&___m_Rigidbody_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
