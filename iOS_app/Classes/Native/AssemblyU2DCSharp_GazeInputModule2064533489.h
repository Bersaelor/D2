#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// IGvrGazePointer
struct IGvrGazePointer_t1822538814;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t1848751023;

#include "UnityEngine_UI_UnityEngine_EventSystems_BaseInputMod15847059.h"
#include "UnityEngine_UnityEngine_Vector24282066565.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GazeInputModule
struct  GazeInputModule_t2064533489  : public BaseInputModule_t15847059
{
public:
	// System.Boolean GazeInputModule::vrModeOnly
	bool ___vrModeOnly_7;
	// UnityEngine.EventSystems.PointerEventData GazeInputModule::pointerData
	PointerEventData_t1848751023 * ___pointerData_9;
	// UnityEngine.Vector2 GazeInputModule::lastHeadPose
	Vector2_t4282066565  ___lastHeadPose_10;
	// System.Boolean GazeInputModule::isActive
	bool ___isActive_11;

public:
	inline static int32_t get_offset_of_vrModeOnly_7() { return static_cast<int32_t>(offsetof(GazeInputModule_t2064533489, ___vrModeOnly_7)); }
	inline bool get_vrModeOnly_7() const { return ___vrModeOnly_7; }
	inline bool* get_address_of_vrModeOnly_7() { return &___vrModeOnly_7; }
	inline void set_vrModeOnly_7(bool value)
	{
		___vrModeOnly_7 = value;
	}

	inline static int32_t get_offset_of_pointerData_9() { return static_cast<int32_t>(offsetof(GazeInputModule_t2064533489, ___pointerData_9)); }
	inline PointerEventData_t1848751023 * get_pointerData_9() const { return ___pointerData_9; }
	inline PointerEventData_t1848751023 ** get_address_of_pointerData_9() { return &___pointerData_9; }
	inline void set_pointerData_9(PointerEventData_t1848751023 * value)
	{
		___pointerData_9 = value;
		Il2CppCodeGenWriteBarrier(&___pointerData_9, value);
	}

	inline static int32_t get_offset_of_lastHeadPose_10() { return static_cast<int32_t>(offsetof(GazeInputModule_t2064533489, ___lastHeadPose_10)); }
	inline Vector2_t4282066565  get_lastHeadPose_10() const { return ___lastHeadPose_10; }
	inline Vector2_t4282066565 * get_address_of_lastHeadPose_10() { return &___lastHeadPose_10; }
	inline void set_lastHeadPose_10(Vector2_t4282066565  value)
	{
		___lastHeadPose_10 = value;
	}

	inline static int32_t get_offset_of_isActive_11() { return static_cast<int32_t>(offsetof(GazeInputModule_t2064533489, ___isActive_11)); }
	inline bool get_isActive_11() const { return ___isActive_11; }
	inline bool* get_address_of_isActive_11() { return &___isActive_11; }
	inline void set_isActive_11(bool value)
	{
		___isActive_11 = value;
	}
};

struct GazeInputModule_t2064533489_StaticFields
{
public:
	// IGvrGazePointer GazeInputModule::gazePointer
	Il2CppObject * ___gazePointer_8;

public:
	inline static int32_t get_offset_of_gazePointer_8() { return static_cast<int32_t>(offsetof(GazeInputModule_t2064533489_StaticFields, ___gazePointer_8)); }
	inline Il2CppObject * get_gazePointer_8() const { return ___gazePointer_8; }
	inline Il2CppObject ** get_address_of_gazePointer_8() { return &___gazePointer_8; }
	inline void set_gazePointer_8(Il2CppObject * value)
	{
		___gazePointer_8 = value;
		Il2CppCodeGenWriteBarrier(&___gazePointer_8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
