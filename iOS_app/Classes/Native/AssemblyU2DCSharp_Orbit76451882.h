#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Orbit
struct  Orbit_t76451882  : public MonoBehaviour_t667441552
{
public:
	// System.Single Orbit::degreesPerSecond
	float ___degreesPerSecond_2;

public:
	inline static int32_t get_offset_of_degreesPerSecond_2() { return static_cast<int32_t>(offsetof(Orbit_t76451882, ___degreesPerSecond_2)); }
	inline float get_degreesPerSecond_2() const { return ___degreesPerSecond_2; }
	inline float* get_address_of_degreesPerSecond_2() { return &___degreesPerSecond_2; }
	inline void set_degreesPerSecond_2(float value)
	{
		___degreesPerSecond_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
