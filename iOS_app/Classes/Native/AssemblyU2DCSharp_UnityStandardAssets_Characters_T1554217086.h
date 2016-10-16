#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityStandardAssets.Characters.ThirdPerson.ThirdPersonCharacter
struct ThirdPersonCharacter_t925212885;
// UnityEngine.Transform
struct Transform_t1659122786;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.Characters.ThirdPerson.ThirdPersonUserControl
struct  ThirdPersonUserControl_t1554217086  : public MonoBehaviour_t667441552
{
public:
	// UnityStandardAssets.Characters.ThirdPerson.ThirdPersonCharacter UnityStandardAssets.Characters.ThirdPerson.ThirdPersonUserControl::m_Character
	ThirdPersonCharacter_t925212885 * ___m_Character_2;
	// UnityEngine.Transform UnityStandardAssets.Characters.ThirdPerson.ThirdPersonUserControl::m_Cam
	Transform_t1659122786 * ___m_Cam_3;
	// UnityEngine.Vector3 UnityStandardAssets.Characters.ThirdPerson.ThirdPersonUserControl::m_CamForward
	Vector3_t4282066566  ___m_CamForward_4;
	// UnityEngine.Vector3 UnityStandardAssets.Characters.ThirdPerson.ThirdPersonUserControl::m_Move
	Vector3_t4282066566  ___m_Move_5;
	// System.Boolean UnityStandardAssets.Characters.ThirdPerson.ThirdPersonUserControl::m_Jump
	bool ___m_Jump_6;

public:
	inline static int32_t get_offset_of_m_Character_2() { return static_cast<int32_t>(offsetof(ThirdPersonUserControl_t1554217086, ___m_Character_2)); }
	inline ThirdPersonCharacter_t925212885 * get_m_Character_2() const { return ___m_Character_2; }
	inline ThirdPersonCharacter_t925212885 ** get_address_of_m_Character_2() { return &___m_Character_2; }
	inline void set_m_Character_2(ThirdPersonCharacter_t925212885 * value)
	{
		___m_Character_2 = value;
		Il2CppCodeGenWriteBarrier(&___m_Character_2, value);
	}

	inline static int32_t get_offset_of_m_Cam_3() { return static_cast<int32_t>(offsetof(ThirdPersonUserControl_t1554217086, ___m_Cam_3)); }
	inline Transform_t1659122786 * get_m_Cam_3() const { return ___m_Cam_3; }
	inline Transform_t1659122786 ** get_address_of_m_Cam_3() { return &___m_Cam_3; }
	inline void set_m_Cam_3(Transform_t1659122786 * value)
	{
		___m_Cam_3 = value;
		Il2CppCodeGenWriteBarrier(&___m_Cam_3, value);
	}

	inline static int32_t get_offset_of_m_CamForward_4() { return static_cast<int32_t>(offsetof(ThirdPersonUserControl_t1554217086, ___m_CamForward_4)); }
	inline Vector3_t4282066566  get_m_CamForward_4() const { return ___m_CamForward_4; }
	inline Vector3_t4282066566 * get_address_of_m_CamForward_4() { return &___m_CamForward_4; }
	inline void set_m_CamForward_4(Vector3_t4282066566  value)
	{
		___m_CamForward_4 = value;
	}

	inline static int32_t get_offset_of_m_Move_5() { return static_cast<int32_t>(offsetof(ThirdPersonUserControl_t1554217086, ___m_Move_5)); }
	inline Vector3_t4282066566  get_m_Move_5() const { return ___m_Move_5; }
	inline Vector3_t4282066566 * get_address_of_m_Move_5() { return &___m_Move_5; }
	inline void set_m_Move_5(Vector3_t4282066566  value)
	{
		___m_Move_5 = value;
	}

	inline static int32_t get_offset_of_m_Jump_6() { return static_cast<int32_t>(offsetof(ThirdPersonUserControl_t1554217086, ___m_Jump_6)); }
	inline bool get_m_Jump_6() const { return ___m_Jump_6; }
	inline bool* get_address_of_m_Jump_6() { return &___m_Jump_6; }
	inline void set_m_Jump_6(bool value)
	{
		___m_Jump_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
