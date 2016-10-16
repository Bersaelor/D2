#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Light
struct Light_t4202674828;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DemoTimeOfDay
struct  DemoTimeOfDay_t768954549  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.Light DemoTimeOfDay::lightSource
	Light_t4202674828 * ___lightSource_2;
	// System.Single DemoTimeOfDay::minAngle
	float ___minAngle_3;
	// System.Single DemoTimeOfDay::cycleDuration
	float ___cycleDuration_4;
	// System.Single DemoTimeOfDay::maxAngle
	float ___maxAngle_5;
	// System.Single DemoTimeOfDay::yAngle
	float ___yAngle_6;
	// System.Single DemoTimeOfDay::maxIntensity
	float ___maxIntensity_7;

public:
	inline static int32_t get_offset_of_lightSource_2() { return static_cast<int32_t>(offsetof(DemoTimeOfDay_t768954549, ___lightSource_2)); }
	inline Light_t4202674828 * get_lightSource_2() const { return ___lightSource_2; }
	inline Light_t4202674828 ** get_address_of_lightSource_2() { return &___lightSource_2; }
	inline void set_lightSource_2(Light_t4202674828 * value)
	{
		___lightSource_2 = value;
		Il2CppCodeGenWriteBarrier(&___lightSource_2, value);
	}

	inline static int32_t get_offset_of_minAngle_3() { return static_cast<int32_t>(offsetof(DemoTimeOfDay_t768954549, ___minAngle_3)); }
	inline float get_minAngle_3() const { return ___minAngle_3; }
	inline float* get_address_of_minAngle_3() { return &___minAngle_3; }
	inline void set_minAngle_3(float value)
	{
		___minAngle_3 = value;
	}

	inline static int32_t get_offset_of_cycleDuration_4() { return static_cast<int32_t>(offsetof(DemoTimeOfDay_t768954549, ___cycleDuration_4)); }
	inline float get_cycleDuration_4() const { return ___cycleDuration_4; }
	inline float* get_address_of_cycleDuration_4() { return &___cycleDuration_4; }
	inline void set_cycleDuration_4(float value)
	{
		___cycleDuration_4 = value;
	}

	inline static int32_t get_offset_of_maxAngle_5() { return static_cast<int32_t>(offsetof(DemoTimeOfDay_t768954549, ___maxAngle_5)); }
	inline float get_maxAngle_5() const { return ___maxAngle_5; }
	inline float* get_address_of_maxAngle_5() { return &___maxAngle_5; }
	inline void set_maxAngle_5(float value)
	{
		___maxAngle_5 = value;
	}

	inline static int32_t get_offset_of_yAngle_6() { return static_cast<int32_t>(offsetof(DemoTimeOfDay_t768954549, ___yAngle_6)); }
	inline float get_yAngle_6() const { return ___yAngle_6; }
	inline float* get_address_of_yAngle_6() { return &___yAngle_6; }
	inline void set_yAngle_6(float value)
	{
		___yAngle_6 = value;
	}

	inline static int32_t get_offset_of_maxIntensity_7() { return static_cast<int32_t>(offsetof(DemoTimeOfDay_t768954549, ___maxIntensity_7)); }
	inline float get_maxIntensity_7() const { return ___maxIntensity_7; }
	inline float* get_address_of_maxIntensity_7() { return &___maxIntensity_7; }
	inline void set_maxIntensity_7(float value)
	{
		___maxIntensity_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
