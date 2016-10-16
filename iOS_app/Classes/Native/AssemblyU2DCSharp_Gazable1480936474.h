#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.ParticleSystem
struct ParticleSystem_t381473177;
// UnityEngine.GameObject
struct GameObject_t3674682005;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Gazable
struct  Gazable_t1480936474  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.ParticleSystem Gazable::fairyLights
	ParticleSystem_t381473177 * ___fairyLights_2;
	// UnityEngine.GameObject Gazable::explosionPrefab
	GameObject_t3674682005 * ___explosionPrefab_3;
	// System.Single Gazable::gazedCount
	float ___gazedCount_4;
	// System.Boolean Gazable::isExploded
	bool ___isExploded_5;

public:
	inline static int32_t get_offset_of_fairyLights_2() { return static_cast<int32_t>(offsetof(Gazable_t1480936474, ___fairyLights_2)); }
	inline ParticleSystem_t381473177 * get_fairyLights_2() const { return ___fairyLights_2; }
	inline ParticleSystem_t381473177 ** get_address_of_fairyLights_2() { return &___fairyLights_2; }
	inline void set_fairyLights_2(ParticleSystem_t381473177 * value)
	{
		___fairyLights_2 = value;
		Il2CppCodeGenWriteBarrier(&___fairyLights_2, value);
	}

	inline static int32_t get_offset_of_explosionPrefab_3() { return static_cast<int32_t>(offsetof(Gazable_t1480936474, ___explosionPrefab_3)); }
	inline GameObject_t3674682005 * get_explosionPrefab_3() const { return ___explosionPrefab_3; }
	inline GameObject_t3674682005 ** get_address_of_explosionPrefab_3() { return &___explosionPrefab_3; }
	inline void set_explosionPrefab_3(GameObject_t3674682005 * value)
	{
		___explosionPrefab_3 = value;
		Il2CppCodeGenWriteBarrier(&___explosionPrefab_3, value);
	}

	inline static int32_t get_offset_of_gazedCount_4() { return static_cast<int32_t>(offsetof(Gazable_t1480936474, ___gazedCount_4)); }
	inline float get_gazedCount_4() const { return ___gazedCount_4; }
	inline float* get_address_of_gazedCount_4() { return &___gazedCount_4; }
	inline void set_gazedCount_4(float value)
	{
		___gazedCount_4 = value;
	}

	inline static int32_t get_offset_of_isExploded_5() { return static_cast<int32_t>(offsetof(Gazable_t1480936474, ___isExploded_5)); }
	inline bool get_isExploded_5() const { return ___isExploded_5; }
	inline bool* get_address_of_isExploded_5() { return &___isExploded_5; }
	inline void set_isExploded_5(bool value)
	{
		___isExploded_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
