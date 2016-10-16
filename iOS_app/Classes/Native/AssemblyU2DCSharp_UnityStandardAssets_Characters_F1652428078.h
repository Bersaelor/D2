#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "mscorlib_System_Object4170816371.h"
#include "UnityEngine_UnityEngine_Quaternion1553702882.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.Characters.FirstPerson.MouseLook
struct  MouseLook_t1652428078  : public Il2CppObject
{
public:
	// System.Single UnityStandardAssets.Characters.FirstPerson.MouseLook::XSensitivity
	float ___XSensitivity_0;
	// System.Single UnityStandardAssets.Characters.FirstPerson.MouseLook::YSensitivity
	float ___YSensitivity_1;
	// System.Boolean UnityStandardAssets.Characters.FirstPerson.MouseLook::clampVerticalRotation
	bool ___clampVerticalRotation_2;
	// System.Single UnityStandardAssets.Characters.FirstPerson.MouseLook::MinimumX
	float ___MinimumX_3;
	// System.Single UnityStandardAssets.Characters.FirstPerson.MouseLook::MaximumX
	float ___MaximumX_4;
	// System.Boolean UnityStandardAssets.Characters.FirstPerson.MouseLook::smooth
	bool ___smooth_5;
	// System.Single UnityStandardAssets.Characters.FirstPerson.MouseLook::smoothTime
	float ___smoothTime_6;
	// System.Boolean UnityStandardAssets.Characters.FirstPerson.MouseLook::lockCursor
	bool ___lockCursor_7;
	// UnityEngine.Quaternion UnityStandardAssets.Characters.FirstPerson.MouseLook::m_CharacterTargetRot
	Quaternion_t1553702882  ___m_CharacterTargetRot_8;
	// UnityEngine.Quaternion UnityStandardAssets.Characters.FirstPerson.MouseLook::m_CameraTargetRot
	Quaternion_t1553702882  ___m_CameraTargetRot_9;
	// System.Boolean UnityStandardAssets.Characters.FirstPerson.MouseLook::m_cursorIsLocked
	bool ___m_cursorIsLocked_10;

public:
	inline static int32_t get_offset_of_XSensitivity_0() { return static_cast<int32_t>(offsetof(MouseLook_t1652428078, ___XSensitivity_0)); }
	inline float get_XSensitivity_0() const { return ___XSensitivity_0; }
	inline float* get_address_of_XSensitivity_0() { return &___XSensitivity_0; }
	inline void set_XSensitivity_0(float value)
	{
		___XSensitivity_0 = value;
	}

	inline static int32_t get_offset_of_YSensitivity_1() { return static_cast<int32_t>(offsetof(MouseLook_t1652428078, ___YSensitivity_1)); }
	inline float get_YSensitivity_1() const { return ___YSensitivity_1; }
	inline float* get_address_of_YSensitivity_1() { return &___YSensitivity_1; }
	inline void set_YSensitivity_1(float value)
	{
		___YSensitivity_1 = value;
	}

	inline static int32_t get_offset_of_clampVerticalRotation_2() { return static_cast<int32_t>(offsetof(MouseLook_t1652428078, ___clampVerticalRotation_2)); }
	inline bool get_clampVerticalRotation_2() const { return ___clampVerticalRotation_2; }
	inline bool* get_address_of_clampVerticalRotation_2() { return &___clampVerticalRotation_2; }
	inline void set_clampVerticalRotation_2(bool value)
	{
		___clampVerticalRotation_2 = value;
	}

	inline static int32_t get_offset_of_MinimumX_3() { return static_cast<int32_t>(offsetof(MouseLook_t1652428078, ___MinimumX_3)); }
	inline float get_MinimumX_3() const { return ___MinimumX_3; }
	inline float* get_address_of_MinimumX_3() { return &___MinimumX_3; }
	inline void set_MinimumX_3(float value)
	{
		___MinimumX_3 = value;
	}

	inline static int32_t get_offset_of_MaximumX_4() { return static_cast<int32_t>(offsetof(MouseLook_t1652428078, ___MaximumX_4)); }
	inline float get_MaximumX_4() const { return ___MaximumX_4; }
	inline float* get_address_of_MaximumX_4() { return &___MaximumX_4; }
	inline void set_MaximumX_4(float value)
	{
		___MaximumX_4 = value;
	}

	inline static int32_t get_offset_of_smooth_5() { return static_cast<int32_t>(offsetof(MouseLook_t1652428078, ___smooth_5)); }
	inline bool get_smooth_5() const { return ___smooth_5; }
	inline bool* get_address_of_smooth_5() { return &___smooth_5; }
	inline void set_smooth_5(bool value)
	{
		___smooth_5 = value;
	}

	inline static int32_t get_offset_of_smoothTime_6() { return static_cast<int32_t>(offsetof(MouseLook_t1652428078, ___smoothTime_6)); }
	inline float get_smoothTime_6() const { return ___smoothTime_6; }
	inline float* get_address_of_smoothTime_6() { return &___smoothTime_6; }
	inline void set_smoothTime_6(float value)
	{
		___smoothTime_6 = value;
	}

	inline static int32_t get_offset_of_lockCursor_7() { return static_cast<int32_t>(offsetof(MouseLook_t1652428078, ___lockCursor_7)); }
	inline bool get_lockCursor_7() const { return ___lockCursor_7; }
	inline bool* get_address_of_lockCursor_7() { return &___lockCursor_7; }
	inline void set_lockCursor_7(bool value)
	{
		___lockCursor_7 = value;
	}

	inline static int32_t get_offset_of_m_CharacterTargetRot_8() { return static_cast<int32_t>(offsetof(MouseLook_t1652428078, ___m_CharacterTargetRot_8)); }
	inline Quaternion_t1553702882  get_m_CharacterTargetRot_8() const { return ___m_CharacterTargetRot_8; }
	inline Quaternion_t1553702882 * get_address_of_m_CharacterTargetRot_8() { return &___m_CharacterTargetRot_8; }
	inline void set_m_CharacterTargetRot_8(Quaternion_t1553702882  value)
	{
		___m_CharacterTargetRot_8 = value;
	}

	inline static int32_t get_offset_of_m_CameraTargetRot_9() { return static_cast<int32_t>(offsetof(MouseLook_t1652428078, ___m_CameraTargetRot_9)); }
	inline Quaternion_t1553702882  get_m_CameraTargetRot_9() const { return ___m_CameraTargetRot_9; }
	inline Quaternion_t1553702882 * get_address_of_m_CameraTargetRot_9() { return &___m_CameraTargetRot_9; }
	inline void set_m_CameraTargetRot_9(Quaternion_t1553702882  value)
	{
		___m_CameraTargetRot_9 = value;
	}

	inline static int32_t get_offset_of_m_cursorIsLocked_10() { return static_cast<int32_t>(offsetof(MouseLook_t1652428078, ___m_cursorIsLocked_10)); }
	inline bool get_m_cursorIsLocked_10() const { return ___m_cursorIsLocked_10; }
	inline bool* get_address_of_m_cursorIsLocked_10() { return &___m_cursorIsLocked_10; }
	inline void set_m_cursorIsLocked_10(bool value)
	{
		___m_cursorIsLocked_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
