#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.AnimationCurve
struct AnimationCurve_t3667593487;

#include "mscorlib_System_Object4170816371.h"
#include "UnityEngine_UnityEngine_KeyCode3128317986.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.Characters.FirstPerson.RigidbodyFirstPersonController/MovementSettings
struct  MovementSettings_t275791033  : public Il2CppObject
{
public:
	// System.Single UnityStandardAssets.Characters.FirstPerson.RigidbodyFirstPersonController/MovementSettings::ForwardSpeed
	float ___ForwardSpeed_0;
	// System.Single UnityStandardAssets.Characters.FirstPerson.RigidbodyFirstPersonController/MovementSettings::BackwardSpeed
	float ___BackwardSpeed_1;
	// System.Single UnityStandardAssets.Characters.FirstPerson.RigidbodyFirstPersonController/MovementSettings::StrafeSpeed
	float ___StrafeSpeed_2;
	// System.Single UnityStandardAssets.Characters.FirstPerson.RigidbodyFirstPersonController/MovementSettings::RunMultiplier
	float ___RunMultiplier_3;
	// UnityEngine.KeyCode UnityStandardAssets.Characters.FirstPerson.RigidbodyFirstPersonController/MovementSettings::RunKey
	int32_t ___RunKey_4;
	// System.Single UnityStandardAssets.Characters.FirstPerson.RigidbodyFirstPersonController/MovementSettings::JumpForce
	float ___JumpForce_5;
	// UnityEngine.AnimationCurve UnityStandardAssets.Characters.FirstPerson.RigidbodyFirstPersonController/MovementSettings::SlopeCurveModifier
	AnimationCurve_t3667593487 * ___SlopeCurveModifier_6;
	// System.Single UnityStandardAssets.Characters.FirstPerson.RigidbodyFirstPersonController/MovementSettings::CurrentTargetSpeed
	float ___CurrentTargetSpeed_7;

public:
	inline static int32_t get_offset_of_ForwardSpeed_0() { return static_cast<int32_t>(offsetof(MovementSettings_t275791033, ___ForwardSpeed_0)); }
	inline float get_ForwardSpeed_0() const { return ___ForwardSpeed_0; }
	inline float* get_address_of_ForwardSpeed_0() { return &___ForwardSpeed_0; }
	inline void set_ForwardSpeed_0(float value)
	{
		___ForwardSpeed_0 = value;
	}

	inline static int32_t get_offset_of_BackwardSpeed_1() { return static_cast<int32_t>(offsetof(MovementSettings_t275791033, ___BackwardSpeed_1)); }
	inline float get_BackwardSpeed_1() const { return ___BackwardSpeed_1; }
	inline float* get_address_of_BackwardSpeed_1() { return &___BackwardSpeed_1; }
	inline void set_BackwardSpeed_1(float value)
	{
		___BackwardSpeed_1 = value;
	}

	inline static int32_t get_offset_of_StrafeSpeed_2() { return static_cast<int32_t>(offsetof(MovementSettings_t275791033, ___StrafeSpeed_2)); }
	inline float get_StrafeSpeed_2() const { return ___StrafeSpeed_2; }
	inline float* get_address_of_StrafeSpeed_2() { return &___StrafeSpeed_2; }
	inline void set_StrafeSpeed_2(float value)
	{
		___StrafeSpeed_2 = value;
	}

	inline static int32_t get_offset_of_RunMultiplier_3() { return static_cast<int32_t>(offsetof(MovementSettings_t275791033, ___RunMultiplier_3)); }
	inline float get_RunMultiplier_3() const { return ___RunMultiplier_3; }
	inline float* get_address_of_RunMultiplier_3() { return &___RunMultiplier_3; }
	inline void set_RunMultiplier_3(float value)
	{
		___RunMultiplier_3 = value;
	}

	inline static int32_t get_offset_of_RunKey_4() { return static_cast<int32_t>(offsetof(MovementSettings_t275791033, ___RunKey_4)); }
	inline int32_t get_RunKey_4() const { return ___RunKey_4; }
	inline int32_t* get_address_of_RunKey_4() { return &___RunKey_4; }
	inline void set_RunKey_4(int32_t value)
	{
		___RunKey_4 = value;
	}

	inline static int32_t get_offset_of_JumpForce_5() { return static_cast<int32_t>(offsetof(MovementSettings_t275791033, ___JumpForce_5)); }
	inline float get_JumpForce_5() const { return ___JumpForce_5; }
	inline float* get_address_of_JumpForce_5() { return &___JumpForce_5; }
	inline void set_JumpForce_5(float value)
	{
		___JumpForce_5 = value;
	}

	inline static int32_t get_offset_of_SlopeCurveModifier_6() { return static_cast<int32_t>(offsetof(MovementSettings_t275791033, ___SlopeCurveModifier_6)); }
	inline AnimationCurve_t3667593487 * get_SlopeCurveModifier_6() const { return ___SlopeCurveModifier_6; }
	inline AnimationCurve_t3667593487 ** get_address_of_SlopeCurveModifier_6() { return &___SlopeCurveModifier_6; }
	inline void set_SlopeCurveModifier_6(AnimationCurve_t3667593487 * value)
	{
		___SlopeCurveModifier_6 = value;
		Il2CppCodeGenWriteBarrier(&___SlopeCurveModifier_6, value);
	}

	inline static int32_t get_offset_of_CurrentTargetSpeed_7() { return static_cast<int32_t>(offsetof(MovementSettings_t275791033, ___CurrentTargetSpeed_7)); }
	inline float get_CurrentTargetSpeed_7() const { return ___CurrentTargetSpeed_7; }
	inline float* get_address_of_CurrentTargetSpeed_7() { return &___CurrentTargetSpeed_7; }
	inline void set_CurrentTargetSpeed_7(float value)
	{
		___CurrentTargetSpeed_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
