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

// Suicide
struct  Suicide_t4097995278  : public MonoBehaviour_t667441552
{
public:
	// System.Single Suicide::maxLifeTime
	float ___maxLifeTime_2;
	// System.Single Suicide::lifeTime
	float ___lifeTime_3;

public:
	inline static int32_t get_offset_of_maxLifeTime_2() { return static_cast<int32_t>(offsetof(Suicide_t4097995278, ___maxLifeTime_2)); }
	inline float get_maxLifeTime_2() const { return ___maxLifeTime_2; }
	inline float* get_address_of_maxLifeTime_2() { return &___maxLifeTime_2; }
	inline void set_maxLifeTime_2(float value)
	{
		___maxLifeTime_2 = value;
	}

	inline static int32_t get_offset_of_lifeTime_3() { return static_cast<int32_t>(offsetof(Suicide_t4097995278, ___lifeTime_3)); }
	inline float get_lifeTime_3() const { return ___lifeTime_3; }
	inline float* get_address_of_lifeTime_3() { return &___lifeTime_3; }
	inline void set_lifeTime_3(float value)
	{
		___lifeTime_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
