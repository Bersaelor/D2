#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Mesh[]
struct MeshU5BU5D_t1759126828;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.ImageEffects.Quads
struct  Quads_t365352830  : public Il2CppObject
{
public:

public:
};

struct Quads_t365352830_StaticFields
{
public:
	// UnityEngine.Mesh[] UnityStandardAssets.ImageEffects.Quads::meshes
	MeshU5BU5D_t1759126828* ___meshes_0;
	// System.Int32 UnityStandardAssets.ImageEffects.Quads::currentQuads
	int32_t ___currentQuads_1;

public:
	inline static int32_t get_offset_of_meshes_0() { return static_cast<int32_t>(offsetof(Quads_t365352830_StaticFields, ___meshes_0)); }
	inline MeshU5BU5D_t1759126828* get_meshes_0() const { return ___meshes_0; }
	inline MeshU5BU5D_t1759126828** get_address_of_meshes_0() { return &___meshes_0; }
	inline void set_meshes_0(MeshU5BU5D_t1759126828* value)
	{
		___meshes_0 = value;
		Il2CppCodeGenWriteBarrier(&___meshes_0, value);
	}

	inline static int32_t get_offset_of_currentQuads_1() { return static_cast<int32_t>(offsetof(Quads_t365352830_StaticFields, ___currentQuads_1)); }
	inline int32_t get_currentQuads_1() const { return ___currentQuads_1; }
	inline int32_t* get_address_of_currentQuads_1() { return &___currentQuads_1; }
	inline void set_currentQuads_1(int32_t value)
	{
		___currentQuads_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
