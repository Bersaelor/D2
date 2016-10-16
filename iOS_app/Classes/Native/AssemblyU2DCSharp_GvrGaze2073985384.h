#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t3674682005;
// IGvrGazePointer
struct IGvrGazePointer_t1822538814;
// IGvrGazeResponder
struct IGvrGazeResponder_t4177935811;
// UnityEngine.Camera
struct Camera_t2727095145;
// System.Func`2<UnityEngine.MonoBehaviour,IGvrGazePointer>
struct Func_2_t1151686355;
// System.Func`2<IGvrGazePointer,System.Boolean>
struct Func_2_t3502538861;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "UnityEngine_UnityEngine_LayerMask3236759763.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GvrGaze
struct  GvrGaze_t2073985384  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.GameObject GvrGaze::pointerObject
	GameObject_t3674682005 * ___pointerObject_2;
	// IGvrGazePointer GvrGaze::pointer
	Il2CppObject * ___pointer_3;
	// UnityEngine.LayerMask GvrGaze::mask
	LayerMask_t3236759763  ___mask_4;
	// IGvrGazeResponder GvrGaze::currentTarget
	Il2CppObject * ___currentTarget_5;
	// UnityEngine.GameObject GvrGaze::currentGazeObject
	GameObject_t3674682005 * ___currentGazeObject_6;
	// UnityEngine.Vector3 GvrGaze::lastIntersectPosition
	Vector3_t4282066566  ___lastIntersectPosition_7;
	// System.Boolean GvrGaze::isTriggered
	bool ___isTriggered_8;
	// UnityEngine.Camera GvrGaze::<cam>k__BackingField
	Camera_t2727095145 * ___U3CcamU3Ek__BackingField_9;

public:
	inline static int32_t get_offset_of_pointerObject_2() { return static_cast<int32_t>(offsetof(GvrGaze_t2073985384, ___pointerObject_2)); }
	inline GameObject_t3674682005 * get_pointerObject_2() const { return ___pointerObject_2; }
	inline GameObject_t3674682005 ** get_address_of_pointerObject_2() { return &___pointerObject_2; }
	inline void set_pointerObject_2(GameObject_t3674682005 * value)
	{
		___pointerObject_2 = value;
		Il2CppCodeGenWriteBarrier(&___pointerObject_2, value);
	}

	inline static int32_t get_offset_of_pointer_3() { return static_cast<int32_t>(offsetof(GvrGaze_t2073985384, ___pointer_3)); }
	inline Il2CppObject * get_pointer_3() const { return ___pointer_3; }
	inline Il2CppObject ** get_address_of_pointer_3() { return &___pointer_3; }
	inline void set_pointer_3(Il2CppObject * value)
	{
		___pointer_3 = value;
		Il2CppCodeGenWriteBarrier(&___pointer_3, value);
	}

	inline static int32_t get_offset_of_mask_4() { return static_cast<int32_t>(offsetof(GvrGaze_t2073985384, ___mask_4)); }
	inline LayerMask_t3236759763  get_mask_4() const { return ___mask_4; }
	inline LayerMask_t3236759763 * get_address_of_mask_4() { return &___mask_4; }
	inline void set_mask_4(LayerMask_t3236759763  value)
	{
		___mask_4 = value;
	}

	inline static int32_t get_offset_of_currentTarget_5() { return static_cast<int32_t>(offsetof(GvrGaze_t2073985384, ___currentTarget_5)); }
	inline Il2CppObject * get_currentTarget_5() const { return ___currentTarget_5; }
	inline Il2CppObject ** get_address_of_currentTarget_5() { return &___currentTarget_5; }
	inline void set_currentTarget_5(Il2CppObject * value)
	{
		___currentTarget_5 = value;
		Il2CppCodeGenWriteBarrier(&___currentTarget_5, value);
	}

	inline static int32_t get_offset_of_currentGazeObject_6() { return static_cast<int32_t>(offsetof(GvrGaze_t2073985384, ___currentGazeObject_6)); }
	inline GameObject_t3674682005 * get_currentGazeObject_6() const { return ___currentGazeObject_6; }
	inline GameObject_t3674682005 ** get_address_of_currentGazeObject_6() { return &___currentGazeObject_6; }
	inline void set_currentGazeObject_6(GameObject_t3674682005 * value)
	{
		___currentGazeObject_6 = value;
		Il2CppCodeGenWriteBarrier(&___currentGazeObject_6, value);
	}

	inline static int32_t get_offset_of_lastIntersectPosition_7() { return static_cast<int32_t>(offsetof(GvrGaze_t2073985384, ___lastIntersectPosition_7)); }
	inline Vector3_t4282066566  get_lastIntersectPosition_7() const { return ___lastIntersectPosition_7; }
	inline Vector3_t4282066566 * get_address_of_lastIntersectPosition_7() { return &___lastIntersectPosition_7; }
	inline void set_lastIntersectPosition_7(Vector3_t4282066566  value)
	{
		___lastIntersectPosition_7 = value;
	}

	inline static int32_t get_offset_of_isTriggered_8() { return static_cast<int32_t>(offsetof(GvrGaze_t2073985384, ___isTriggered_8)); }
	inline bool get_isTriggered_8() const { return ___isTriggered_8; }
	inline bool* get_address_of_isTriggered_8() { return &___isTriggered_8; }
	inline void set_isTriggered_8(bool value)
	{
		___isTriggered_8 = value;
	}

	inline static int32_t get_offset_of_U3CcamU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(GvrGaze_t2073985384, ___U3CcamU3Ek__BackingField_9)); }
	inline Camera_t2727095145 * get_U3CcamU3Ek__BackingField_9() const { return ___U3CcamU3Ek__BackingField_9; }
	inline Camera_t2727095145 ** get_address_of_U3CcamU3Ek__BackingField_9() { return &___U3CcamU3Ek__BackingField_9; }
	inline void set_U3CcamU3Ek__BackingField_9(Camera_t2727095145 * value)
	{
		___U3CcamU3Ek__BackingField_9 = value;
		Il2CppCodeGenWriteBarrier(&___U3CcamU3Ek__BackingField_9, value);
	}
};

struct GvrGaze_t2073985384_StaticFields
{
public:
	// System.Func`2<UnityEngine.MonoBehaviour,IGvrGazePointer> GvrGaze::<>f__am$cache8
	Func_2_t1151686355 * ___U3CU3Ef__amU24cache8_10;
	// System.Func`2<IGvrGazePointer,System.Boolean> GvrGaze::<>f__am$cache9
	Func_2_t3502538861 * ___U3CU3Ef__amU24cache9_11;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cache8_10() { return static_cast<int32_t>(offsetof(GvrGaze_t2073985384_StaticFields, ___U3CU3Ef__amU24cache8_10)); }
	inline Func_2_t1151686355 * get_U3CU3Ef__amU24cache8_10() const { return ___U3CU3Ef__amU24cache8_10; }
	inline Func_2_t1151686355 ** get_address_of_U3CU3Ef__amU24cache8_10() { return &___U3CU3Ef__amU24cache8_10; }
	inline void set_U3CU3Ef__amU24cache8_10(Func_2_t1151686355 * value)
	{
		___U3CU3Ef__amU24cache8_10 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache8_10, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache9_11() { return static_cast<int32_t>(offsetof(GvrGaze_t2073985384_StaticFields, ___U3CU3Ef__amU24cache9_11)); }
	inline Func_2_t3502538861 * get_U3CU3Ef__amU24cache9_11() const { return ___U3CU3Ef__amU24cache9_11; }
	inline Func_2_t3502538861 ** get_address_of_U3CU3Ef__amU24cache9_11() { return &___U3CU3Ef__amU24cache9_11; }
	inline void set_U3CU3Ef__amU24cache9_11(Func_2_t3502538861 * value)
	{
		___U3CU3Ef__amU24cache9_11 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache9_11, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
