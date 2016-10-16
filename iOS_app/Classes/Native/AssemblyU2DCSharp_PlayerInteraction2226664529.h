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

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayerInteraction
struct  PlayerInteraction_t2226664529  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.GameObject PlayerInteraction::mainCam
	GameObject_t3674682005 * ___mainCam_2;
	// UnityEngine.GameObject PlayerInteraction::selectedTerrain
	GameObject_t3674682005 * ___selectedTerrain_3;
	// System.Single PlayerInteraction::initialHeight
	float ___initialHeight_4;

public:
	inline static int32_t get_offset_of_mainCam_2() { return static_cast<int32_t>(offsetof(PlayerInteraction_t2226664529, ___mainCam_2)); }
	inline GameObject_t3674682005 * get_mainCam_2() const { return ___mainCam_2; }
	inline GameObject_t3674682005 ** get_address_of_mainCam_2() { return &___mainCam_2; }
	inline void set_mainCam_2(GameObject_t3674682005 * value)
	{
		___mainCam_2 = value;
		Il2CppCodeGenWriteBarrier(&___mainCam_2, value);
	}

	inline static int32_t get_offset_of_selectedTerrain_3() { return static_cast<int32_t>(offsetof(PlayerInteraction_t2226664529, ___selectedTerrain_3)); }
	inline GameObject_t3674682005 * get_selectedTerrain_3() const { return ___selectedTerrain_3; }
	inline GameObject_t3674682005 ** get_address_of_selectedTerrain_3() { return &___selectedTerrain_3; }
	inline void set_selectedTerrain_3(GameObject_t3674682005 * value)
	{
		___selectedTerrain_3 = value;
		Il2CppCodeGenWriteBarrier(&___selectedTerrain_3, value);
	}

	inline static int32_t get_offset_of_initialHeight_4() { return static_cast<int32_t>(offsetof(PlayerInteraction_t2226664529, ___initialHeight_4)); }
	inline float get_initialHeight_4() const { return ___initialHeight_4; }
	inline float* get_address_of_initialHeight_4() { return &___initialHeight_4; }
	inline void set_initialHeight_4(float value)
	{
		___initialHeight_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
