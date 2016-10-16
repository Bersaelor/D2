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

#include "AssemblyU2DCSharp_UnityStandardAssets_Cameras_Abst2600961761.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.Cameras.PivotBasedCameraRig
struct  PivotBasedCameraRig_t2501384728  : public AbstractTargetFollower_t2600961761
{
public:
	// UnityEngine.Transform UnityStandardAssets.Cameras.PivotBasedCameraRig::m_Cam
	Transform_t1659122786 * ___m_Cam_6;
	// UnityEngine.Transform UnityStandardAssets.Cameras.PivotBasedCameraRig::m_Pivot
	Transform_t1659122786 * ___m_Pivot_7;
	// UnityEngine.Vector3 UnityStandardAssets.Cameras.PivotBasedCameraRig::m_LastTargetPosition
	Vector3_t4282066566  ___m_LastTargetPosition_8;

public:
	inline static int32_t get_offset_of_m_Cam_6() { return static_cast<int32_t>(offsetof(PivotBasedCameraRig_t2501384728, ___m_Cam_6)); }
	inline Transform_t1659122786 * get_m_Cam_6() const { return ___m_Cam_6; }
	inline Transform_t1659122786 ** get_address_of_m_Cam_6() { return &___m_Cam_6; }
	inline void set_m_Cam_6(Transform_t1659122786 * value)
	{
		___m_Cam_6 = value;
		Il2CppCodeGenWriteBarrier(&___m_Cam_6, value);
	}

	inline static int32_t get_offset_of_m_Pivot_7() { return static_cast<int32_t>(offsetof(PivotBasedCameraRig_t2501384728, ___m_Pivot_7)); }
	inline Transform_t1659122786 * get_m_Pivot_7() const { return ___m_Pivot_7; }
	inline Transform_t1659122786 ** get_address_of_m_Pivot_7() { return &___m_Pivot_7; }
	inline void set_m_Pivot_7(Transform_t1659122786 * value)
	{
		___m_Pivot_7 = value;
		Il2CppCodeGenWriteBarrier(&___m_Pivot_7, value);
	}

	inline static int32_t get_offset_of_m_LastTargetPosition_8() { return static_cast<int32_t>(offsetof(PivotBasedCameraRig_t2501384728, ___m_LastTargetPosition_8)); }
	inline Vector3_t4282066566  get_m_LastTargetPosition_8() const { return ___m_LastTargetPosition_8; }
	inline Vector3_t4282066566 * get_address_of_m_LastTargetPosition_8() { return &___m_LastTargetPosition_8; }
	inline void set_m_LastTargetPosition_8(Vector3_t4282066566  value)
	{
		___m_LastTargetPosition_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
