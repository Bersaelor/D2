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
// UnityEngine.Transform
struct Transform_t1659122786;

#include "AssemblyU2DCSharp_UnityStandardAssets_Cameras_Abst2600961761.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.Cameras.TargetFieldOfView
struct  TargetFieldOfView_t689211939  : public AbstractTargetFollower_t2600961761
{
public:
	// System.Single UnityStandardAssets.Cameras.TargetFieldOfView::m_FovAdjustTime
	float ___m_FovAdjustTime_6;
	// System.Single UnityStandardAssets.Cameras.TargetFieldOfView::m_ZoomAmountMultiplier
	float ___m_ZoomAmountMultiplier_7;
	// System.Boolean UnityStandardAssets.Cameras.TargetFieldOfView::m_IncludeEffectsInSize
	bool ___m_IncludeEffectsInSize_8;
	// System.Single UnityStandardAssets.Cameras.TargetFieldOfView::m_BoundSize
	float ___m_BoundSize_9;
	// System.Single UnityStandardAssets.Cameras.TargetFieldOfView::m_FovAdjustVelocity
	float ___m_FovAdjustVelocity_10;
	// UnityEngine.Camera UnityStandardAssets.Cameras.TargetFieldOfView::m_Cam
	Camera_t2727095145 * ___m_Cam_11;
	// UnityEngine.Transform UnityStandardAssets.Cameras.TargetFieldOfView::m_LastTarget
	Transform_t1659122786 * ___m_LastTarget_12;

public:
	inline static int32_t get_offset_of_m_FovAdjustTime_6() { return static_cast<int32_t>(offsetof(TargetFieldOfView_t689211939, ___m_FovAdjustTime_6)); }
	inline float get_m_FovAdjustTime_6() const { return ___m_FovAdjustTime_6; }
	inline float* get_address_of_m_FovAdjustTime_6() { return &___m_FovAdjustTime_6; }
	inline void set_m_FovAdjustTime_6(float value)
	{
		___m_FovAdjustTime_6 = value;
	}

	inline static int32_t get_offset_of_m_ZoomAmountMultiplier_7() { return static_cast<int32_t>(offsetof(TargetFieldOfView_t689211939, ___m_ZoomAmountMultiplier_7)); }
	inline float get_m_ZoomAmountMultiplier_7() const { return ___m_ZoomAmountMultiplier_7; }
	inline float* get_address_of_m_ZoomAmountMultiplier_7() { return &___m_ZoomAmountMultiplier_7; }
	inline void set_m_ZoomAmountMultiplier_7(float value)
	{
		___m_ZoomAmountMultiplier_7 = value;
	}

	inline static int32_t get_offset_of_m_IncludeEffectsInSize_8() { return static_cast<int32_t>(offsetof(TargetFieldOfView_t689211939, ___m_IncludeEffectsInSize_8)); }
	inline bool get_m_IncludeEffectsInSize_8() const { return ___m_IncludeEffectsInSize_8; }
	inline bool* get_address_of_m_IncludeEffectsInSize_8() { return &___m_IncludeEffectsInSize_8; }
	inline void set_m_IncludeEffectsInSize_8(bool value)
	{
		___m_IncludeEffectsInSize_8 = value;
	}

	inline static int32_t get_offset_of_m_BoundSize_9() { return static_cast<int32_t>(offsetof(TargetFieldOfView_t689211939, ___m_BoundSize_9)); }
	inline float get_m_BoundSize_9() const { return ___m_BoundSize_9; }
	inline float* get_address_of_m_BoundSize_9() { return &___m_BoundSize_9; }
	inline void set_m_BoundSize_9(float value)
	{
		___m_BoundSize_9 = value;
	}

	inline static int32_t get_offset_of_m_FovAdjustVelocity_10() { return static_cast<int32_t>(offsetof(TargetFieldOfView_t689211939, ___m_FovAdjustVelocity_10)); }
	inline float get_m_FovAdjustVelocity_10() const { return ___m_FovAdjustVelocity_10; }
	inline float* get_address_of_m_FovAdjustVelocity_10() { return &___m_FovAdjustVelocity_10; }
	inline void set_m_FovAdjustVelocity_10(float value)
	{
		___m_FovAdjustVelocity_10 = value;
	}

	inline static int32_t get_offset_of_m_Cam_11() { return static_cast<int32_t>(offsetof(TargetFieldOfView_t689211939, ___m_Cam_11)); }
	inline Camera_t2727095145 * get_m_Cam_11() const { return ___m_Cam_11; }
	inline Camera_t2727095145 ** get_address_of_m_Cam_11() { return &___m_Cam_11; }
	inline void set_m_Cam_11(Camera_t2727095145 * value)
	{
		___m_Cam_11 = value;
		Il2CppCodeGenWriteBarrier(&___m_Cam_11, value);
	}

	inline static int32_t get_offset_of_m_LastTarget_12() { return static_cast<int32_t>(offsetof(TargetFieldOfView_t689211939, ___m_LastTarget_12)); }
	inline Transform_t1659122786 * get_m_LastTarget_12() const { return ___m_LastTarget_12; }
	inline Transform_t1659122786 ** get_address_of_m_LastTarget_12() { return &___m_LastTarget_12; }
	inline void set_m_LastTarget_12(Transform_t1659122786 * value)
	{
		___m_LastTarget_12 = value;
		Il2CppCodeGenWriteBarrier(&___m_LastTarget_12, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
