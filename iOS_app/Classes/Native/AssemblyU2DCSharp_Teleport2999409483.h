#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Teleport
struct  Teleport_t2999409483  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.Vector3 Teleport::startingPosition
	Vector3_t4282066566  ___startingPosition_2;

public:
	inline static int32_t get_offset_of_startingPosition_2() { return static_cast<int32_t>(offsetof(Teleport_t2999409483, ___startingPosition_2)); }
	inline Vector3_t4282066566  get_startingPosition_2() const { return ___startingPosition_2; }
	inline Vector3_t4282066566 * get_address_of_startingPosition_2() { return &___startingPosition_2; }
	inline void set_startingPosition_2(Vector3_t4282066566  value)
	{
		___startingPosition_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
