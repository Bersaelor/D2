#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Mesh
struct Mesh_t4241756145;
// UnityEngine.Material
struct Material_t3870600107;
// System.Single[]
struct SingleU5BU5D_t2316563989;
// UnityEngine.Camera
struct Camera_t2727095145;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "UnityEngine_UnityEngine_Matrix4x41651859333.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GvrPostRender
struct  GvrPostRender_t3571076089  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.Mesh GvrPostRender::distortionMesh
	Mesh_t4241756145 * ___distortionMesh_14;
	// UnityEngine.Material GvrPostRender::meshMaterial
	Material_t3870600107 * ___meshMaterial_15;
	// UnityEngine.Material GvrPostRender::uiMaterial
	Material_t3870600107 * ___uiMaterial_16;
	// System.Single GvrPostRender::centerWidthPx
	float ___centerWidthPx_17;
	// System.Single GvrPostRender::buttonWidthPx
	float ___buttonWidthPx_18;
	// System.Single GvrPostRender::xScale
	float ___xScale_19;
	// System.Single GvrPostRender::yScale
	float ___yScale_20;
	// UnityEngine.Matrix4x4 GvrPostRender::xfm
	Matrix4x4_t1651859333  ___xfm_21;
	// UnityEngine.Camera GvrPostRender::<cam>k__BackingField
	Camera_t2727095145 * ___U3CcamU3Ek__BackingField_23;

public:
	inline static int32_t get_offset_of_distortionMesh_14() { return static_cast<int32_t>(offsetof(GvrPostRender_t3571076089, ___distortionMesh_14)); }
	inline Mesh_t4241756145 * get_distortionMesh_14() const { return ___distortionMesh_14; }
	inline Mesh_t4241756145 ** get_address_of_distortionMesh_14() { return &___distortionMesh_14; }
	inline void set_distortionMesh_14(Mesh_t4241756145 * value)
	{
		___distortionMesh_14 = value;
		Il2CppCodeGenWriteBarrier(&___distortionMesh_14, value);
	}

	inline static int32_t get_offset_of_meshMaterial_15() { return static_cast<int32_t>(offsetof(GvrPostRender_t3571076089, ___meshMaterial_15)); }
	inline Material_t3870600107 * get_meshMaterial_15() const { return ___meshMaterial_15; }
	inline Material_t3870600107 ** get_address_of_meshMaterial_15() { return &___meshMaterial_15; }
	inline void set_meshMaterial_15(Material_t3870600107 * value)
	{
		___meshMaterial_15 = value;
		Il2CppCodeGenWriteBarrier(&___meshMaterial_15, value);
	}

	inline static int32_t get_offset_of_uiMaterial_16() { return static_cast<int32_t>(offsetof(GvrPostRender_t3571076089, ___uiMaterial_16)); }
	inline Material_t3870600107 * get_uiMaterial_16() const { return ___uiMaterial_16; }
	inline Material_t3870600107 ** get_address_of_uiMaterial_16() { return &___uiMaterial_16; }
	inline void set_uiMaterial_16(Material_t3870600107 * value)
	{
		___uiMaterial_16 = value;
		Il2CppCodeGenWriteBarrier(&___uiMaterial_16, value);
	}

	inline static int32_t get_offset_of_centerWidthPx_17() { return static_cast<int32_t>(offsetof(GvrPostRender_t3571076089, ___centerWidthPx_17)); }
	inline float get_centerWidthPx_17() const { return ___centerWidthPx_17; }
	inline float* get_address_of_centerWidthPx_17() { return &___centerWidthPx_17; }
	inline void set_centerWidthPx_17(float value)
	{
		___centerWidthPx_17 = value;
	}

	inline static int32_t get_offset_of_buttonWidthPx_18() { return static_cast<int32_t>(offsetof(GvrPostRender_t3571076089, ___buttonWidthPx_18)); }
	inline float get_buttonWidthPx_18() const { return ___buttonWidthPx_18; }
	inline float* get_address_of_buttonWidthPx_18() { return &___buttonWidthPx_18; }
	inline void set_buttonWidthPx_18(float value)
	{
		___buttonWidthPx_18 = value;
	}

	inline static int32_t get_offset_of_xScale_19() { return static_cast<int32_t>(offsetof(GvrPostRender_t3571076089, ___xScale_19)); }
	inline float get_xScale_19() const { return ___xScale_19; }
	inline float* get_address_of_xScale_19() { return &___xScale_19; }
	inline void set_xScale_19(float value)
	{
		___xScale_19 = value;
	}

	inline static int32_t get_offset_of_yScale_20() { return static_cast<int32_t>(offsetof(GvrPostRender_t3571076089, ___yScale_20)); }
	inline float get_yScale_20() const { return ___yScale_20; }
	inline float* get_address_of_yScale_20() { return &___yScale_20; }
	inline void set_yScale_20(float value)
	{
		___yScale_20 = value;
	}

	inline static int32_t get_offset_of_xfm_21() { return static_cast<int32_t>(offsetof(GvrPostRender_t3571076089, ___xfm_21)); }
	inline Matrix4x4_t1651859333  get_xfm_21() const { return ___xfm_21; }
	inline Matrix4x4_t1651859333 * get_address_of_xfm_21() { return &___xfm_21; }
	inline void set_xfm_21(Matrix4x4_t1651859333  value)
	{
		___xfm_21 = value;
	}

	inline static int32_t get_offset_of_U3CcamU3Ek__BackingField_23() { return static_cast<int32_t>(offsetof(GvrPostRender_t3571076089, ___U3CcamU3Ek__BackingField_23)); }
	inline Camera_t2727095145 * get_U3CcamU3Ek__BackingField_23() const { return ___U3CcamU3Ek__BackingField_23; }
	inline Camera_t2727095145 ** get_address_of_U3CcamU3Ek__BackingField_23() { return &___U3CcamU3Ek__BackingField_23; }
	inline void set_U3CcamU3Ek__BackingField_23(Camera_t2727095145 * value)
	{
		___U3CcamU3Ek__BackingField_23 = value;
		Il2CppCodeGenWriteBarrier(&___U3CcamU3Ek__BackingField_23, value);
	}
};

struct GvrPostRender_t3571076089_StaticFields
{
public:
	// System.Single[] GvrPostRender::Angles
	SingleU5BU5D_t2316563989* ___Angles_22;

public:
	inline static int32_t get_offset_of_Angles_22() { return static_cast<int32_t>(offsetof(GvrPostRender_t3571076089_StaticFields, ___Angles_22)); }
	inline SingleU5BU5D_t2316563989* get_Angles_22() const { return ___Angles_22; }
	inline SingleU5BU5D_t2316563989** get_address_of_Angles_22() { return &___Angles_22; }
	inline void set_Angles_22(SingleU5BU5D_t2316563989* value)
	{
		___Angles_22 = value;
		Il2CppCodeGenWriteBarrier(&___Angles_22, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
