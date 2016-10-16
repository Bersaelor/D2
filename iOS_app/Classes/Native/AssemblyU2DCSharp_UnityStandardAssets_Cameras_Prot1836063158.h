#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// UnityEngine.Transform
struct Transform_t1659122786;
// UnityEngine.RaycastHit[]
struct RaycastHitU5BU5D_t528650843;
// UnityStandardAssets.Cameras.ProtectCameraFromWallClip/RayHitComparer
struct RayHitComparer_t1977523238;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "UnityEngine_UnityEngine_Ray3134616544.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.Cameras.ProtectCameraFromWallClip
struct  ProtectCameraFromWallClip_t1836063158  : public MonoBehaviour_t667441552
{
public:
	// System.Single UnityStandardAssets.Cameras.ProtectCameraFromWallClip::clipMoveTime
	float ___clipMoveTime_2;
	// System.Single UnityStandardAssets.Cameras.ProtectCameraFromWallClip::returnTime
	float ___returnTime_3;
	// System.Single UnityStandardAssets.Cameras.ProtectCameraFromWallClip::sphereCastRadius
	float ___sphereCastRadius_4;
	// System.Boolean UnityStandardAssets.Cameras.ProtectCameraFromWallClip::visualiseInEditor
	bool ___visualiseInEditor_5;
	// System.Single UnityStandardAssets.Cameras.ProtectCameraFromWallClip::closestDistance
	float ___closestDistance_6;
	// System.String UnityStandardAssets.Cameras.ProtectCameraFromWallClip::dontClipTag
	String_t* ___dontClipTag_7;
	// UnityEngine.Transform UnityStandardAssets.Cameras.ProtectCameraFromWallClip::m_Cam
	Transform_t1659122786 * ___m_Cam_8;
	// UnityEngine.Transform UnityStandardAssets.Cameras.ProtectCameraFromWallClip::m_Pivot
	Transform_t1659122786 * ___m_Pivot_9;
	// System.Single UnityStandardAssets.Cameras.ProtectCameraFromWallClip::m_OriginalDist
	float ___m_OriginalDist_10;
	// System.Single UnityStandardAssets.Cameras.ProtectCameraFromWallClip::m_MoveVelocity
	float ___m_MoveVelocity_11;
	// System.Single UnityStandardAssets.Cameras.ProtectCameraFromWallClip::m_CurrentDist
	float ___m_CurrentDist_12;
	// UnityEngine.Ray UnityStandardAssets.Cameras.ProtectCameraFromWallClip::m_Ray
	Ray_t3134616544  ___m_Ray_13;
	// UnityEngine.RaycastHit[] UnityStandardAssets.Cameras.ProtectCameraFromWallClip::m_Hits
	RaycastHitU5BU5D_t528650843* ___m_Hits_14;
	// UnityStandardAssets.Cameras.ProtectCameraFromWallClip/RayHitComparer UnityStandardAssets.Cameras.ProtectCameraFromWallClip::m_RayHitComparer
	RayHitComparer_t1977523238 * ___m_RayHitComparer_15;
	// System.Boolean UnityStandardAssets.Cameras.ProtectCameraFromWallClip::<protecting>k__BackingField
	bool ___U3CprotectingU3Ek__BackingField_16;

public:
	inline static int32_t get_offset_of_clipMoveTime_2() { return static_cast<int32_t>(offsetof(ProtectCameraFromWallClip_t1836063158, ___clipMoveTime_2)); }
	inline float get_clipMoveTime_2() const { return ___clipMoveTime_2; }
	inline float* get_address_of_clipMoveTime_2() { return &___clipMoveTime_2; }
	inline void set_clipMoveTime_2(float value)
	{
		___clipMoveTime_2 = value;
	}

	inline static int32_t get_offset_of_returnTime_3() { return static_cast<int32_t>(offsetof(ProtectCameraFromWallClip_t1836063158, ___returnTime_3)); }
	inline float get_returnTime_3() const { return ___returnTime_3; }
	inline float* get_address_of_returnTime_3() { return &___returnTime_3; }
	inline void set_returnTime_3(float value)
	{
		___returnTime_3 = value;
	}

	inline static int32_t get_offset_of_sphereCastRadius_4() { return static_cast<int32_t>(offsetof(ProtectCameraFromWallClip_t1836063158, ___sphereCastRadius_4)); }
	inline float get_sphereCastRadius_4() const { return ___sphereCastRadius_4; }
	inline float* get_address_of_sphereCastRadius_4() { return &___sphereCastRadius_4; }
	inline void set_sphereCastRadius_4(float value)
	{
		___sphereCastRadius_4 = value;
	}

	inline static int32_t get_offset_of_visualiseInEditor_5() { return static_cast<int32_t>(offsetof(ProtectCameraFromWallClip_t1836063158, ___visualiseInEditor_5)); }
	inline bool get_visualiseInEditor_5() const { return ___visualiseInEditor_5; }
	inline bool* get_address_of_visualiseInEditor_5() { return &___visualiseInEditor_5; }
	inline void set_visualiseInEditor_5(bool value)
	{
		___visualiseInEditor_5 = value;
	}

	inline static int32_t get_offset_of_closestDistance_6() { return static_cast<int32_t>(offsetof(ProtectCameraFromWallClip_t1836063158, ___closestDistance_6)); }
	inline float get_closestDistance_6() const { return ___closestDistance_6; }
	inline float* get_address_of_closestDistance_6() { return &___closestDistance_6; }
	inline void set_closestDistance_6(float value)
	{
		___closestDistance_6 = value;
	}

	inline static int32_t get_offset_of_dontClipTag_7() { return static_cast<int32_t>(offsetof(ProtectCameraFromWallClip_t1836063158, ___dontClipTag_7)); }
	inline String_t* get_dontClipTag_7() const { return ___dontClipTag_7; }
	inline String_t** get_address_of_dontClipTag_7() { return &___dontClipTag_7; }
	inline void set_dontClipTag_7(String_t* value)
	{
		___dontClipTag_7 = value;
		Il2CppCodeGenWriteBarrier(&___dontClipTag_7, value);
	}

	inline static int32_t get_offset_of_m_Cam_8() { return static_cast<int32_t>(offsetof(ProtectCameraFromWallClip_t1836063158, ___m_Cam_8)); }
	inline Transform_t1659122786 * get_m_Cam_8() const { return ___m_Cam_8; }
	inline Transform_t1659122786 ** get_address_of_m_Cam_8() { return &___m_Cam_8; }
	inline void set_m_Cam_8(Transform_t1659122786 * value)
	{
		___m_Cam_8 = value;
		Il2CppCodeGenWriteBarrier(&___m_Cam_8, value);
	}

	inline static int32_t get_offset_of_m_Pivot_9() { return static_cast<int32_t>(offsetof(ProtectCameraFromWallClip_t1836063158, ___m_Pivot_9)); }
	inline Transform_t1659122786 * get_m_Pivot_9() const { return ___m_Pivot_9; }
	inline Transform_t1659122786 ** get_address_of_m_Pivot_9() { return &___m_Pivot_9; }
	inline void set_m_Pivot_9(Transform_t1659122786 * value)
	{
		___m_Pivot_9 = value;
		Il2CppCodeGenWriteBarrier(&___m_Pivot_9, value);
	}

	inline static int32_t get_offset_of_m_OriginalDist_10() { return static_cast<int32_t>(offsetof(ProtectCameraFromWallClip_t1836063158, ___m_OriginalDist_10)); }
	inline float get_m_OriginalDist_10() const { return ___m_OriginalDist_10; }
	inline float* get_address_of_m_OriginalDist_10() { return &___m_OriginalDist_10; }
	inline void set_m_OriginalDist_10(float value)
	{
		___m_OriginalDist_10 = value;
	}

	inline static int32_t get_offset_of_m_MoveVelocity_11() { return static_cast<int32_t>(offsetof(ProtectCameraFromWallClip_t1836063158, ___m_MoveVelocity_11)); }
	inline float get_m_MoveVelocity_11() const { return ___m_MoveVelocity_11; }
	inline float* get_address_of_m_MoveVelocity_11() { return &___m_MoveVelocity_11; }
	inline void set_m_MoveVelocity_11(float value)
	{
		___m_MoveVelocity_11 = value;
	}

	inline static int32_t get_offset_of_m_CurrentDist_12() { return static_cast<int32_t>(offsetof(ProtectCameraFromWallClip_t1836063158, ___m_CurrentDist_12)); }
	inline float get_m_CurrentDist_12() const { return ___m_CurrentDist_12; }
	inline float* get_address_of_m_CurrentDist_12() { return &___m_CurrentDist_12; }
	inline void set_m_CurrentDist_12(float value)
	{
		___m_CurrentDist_12 = value;
	}

	inline static int32_t get_offset_of_m_Ray_13() { return static_cast<int32_t>(offsetof(ProtectCameraFromWallClip_t1836063158, ___m_Ray_13)); }
	inline Ray_t3134616544  get_m_Ray_13() const { return ___m_Ray_13; }
	inline Ray_t3134616544 * get_address_of_m_Ray_13() { return &___m_Ray_13; }
	inline void set_m_Ray_13(Ray_t3134616544  value)
	{
		___m_Ray_13 = value;
	}

	inline static int32_t get_offset_of_m_Hits_14() { return static_cast<int32_t>(offsetof(ProtectCameraFromWallClip_t1836063158, ___m_Hits_14)); }
	inline RaycastHitU5BU5D_t528650843* get_m_Hits_14() const { return ___m_Hits_14; }
	inline RaycastHitU5BU5D_t528650843** get_address_of_m_Hits_14() { return &___m_Hits_14; }
	inline void set_m_Hits_14(RaycastHitU5BU5D_t528650843* value)
	{
		___m_Hits_14 = value;
		Il2CppCodeGenWriteBarrier(&___m_Hits_14, value);
	}

	inline static int32_t get_offset_of_m_RayHitComparer_15() { return static_cast<int32_t>(offsetof(ProtectCameraFromWallClip_t1836063158, ___m_RayHitComparer_15)); }
	inline RayHitComparer_t1977523238 * get_m_RayHitComparer_15() const { return ___m_RayHitComparer_15; }
	inline RayHitComparer_t1977523238 ** get_address_of_m_RayHitComparer_15() { return &___m_RayHitComparer_15; }
	inline void set_m_RayHitComparer_15(RayHitComparer_t1977523238 * value)
	{
		___m_RayHitComparer_15 = value;
		Il2CppCodeGenWriteBarrier(&___m_RayHitComparer_15, value);
	}

	inline static int32_t get_offset_of_U3CprotectingU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(ProtectCameraFromWallClip_t1836063158, ___U3CprotectingU3Ek__BackingField_16)); }
	inline bool get_U3CprotectingU3Ek__BackingField_16() const { return ___U3CprotectingU3Ek__BackingField_16; }
	inline bool* get_address_of_U3CprotectingU3Ek__BackingField_16() { return &___U3CprotectingU3Ek__BackingField_16; }
	inline void set_U3CprotectingU3Ek__BackingField_16(bool value)
	{
		___U3CprotectingU3Ek__BackingField_16 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
