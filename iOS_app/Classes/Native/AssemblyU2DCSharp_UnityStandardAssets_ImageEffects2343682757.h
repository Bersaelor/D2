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

// UnityStandardAssets.ImageEffects.ColorCorrectionRamp
struct  ColorCorrectionRamp_t2343682757  : public ImageEffectBase_t3325865135
{
public:
	// UnityEngine.Texture UnityStandardAssets.ImageEffects.ColorCorrectionRamp::textureRamp
	Texture_t2526458961 * ___textureRamp_4;

public:
	inline static int32_t get_offset_of_textureRamp_4() { return static_cast<int32_t>(offsetof(ColorCorrectionRamp_t2343682757, ___textureRamp_4)); }
	inline Texture_t2526458961 * get_textureRamp_4() const { return ___textureRamp_4; }
	inline Texture_t2526458961 ** get_address_of_textureRamp_4() { return &___textureRamp_4; }
	inline void set_textureRamp_4(Texture_t2526458961 * value)
	{
		___textureRamp_4 = value;
		Il2CppCodeGenWriteBarrier(&___textureRamp_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
