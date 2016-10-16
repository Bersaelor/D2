#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Texture
struct Texture_t2526458961;

#include "AssemblyU2DCSharp_UnityStandardAssets_ImageEffects3325865135.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.ImageEffects.Grayscale
struct  Grayscale_t842279737  : public ImageEffectBase_t3325865135
{
public:
	// UnityEngine.Texture UnityStandardAssets.ImageEffects.Grayscale::textureRamp
	Texture_t2526458961 * ___textureRamp_4;
	// System.Single UnityStandardAssets.ImageEffects.Grayscale::rampOffset
	float ___rampOffset_5;

public:
	inline static int32_t get_offset_of_textureRamp_4() { return static_cast<int32_t>(offsetof(Grayscale_t842279737, ___textureRamp_4)); }
	inline Texture_t2526458961 * get_textureRamp_4() const { return ___textureRamp_4; }
	inline Texture_t2526458961 ** get_address_of_textureRamp_4() { return &___textureRamp_4; }
	inline void set_textureRamp_4(Texture_t2526458961 * value)
	{
		___textureRamp_4 = value;
		Il2CppCodeGenWriteBarrier(&___textureRamp_4, value);
	}

	inline static int32_t get_offset_of_rampOffset_5() { return static_cast<int32_t>(offsetof(Grayscale_t842279737, ___rampOffset_5)); }
	inline float get_rampOffset_5() const { return ___rampOffset_5; }
	inline float* get_address_of_rampOffset_5() { return &___rampOffset_5; }
	inline void set_rampOffset_5(float value)
	{
		___rampOffset_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
