#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.ArrayList
struct ArrayList_t3948406897;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MotionTrack
struct  MotionTrack_t794643221  : public MonoBehaviour_t667441552
{
public:
	// System.Collections.ArrayList MotionTrack::pos
	ArrayList_t3948406897 * ___pos_2;
	// System.Boolean MotionTrack::isRec
	bool ___isRec_3;
	// System.Single MotionTrack::tempX
	float ___tempX_4;
	// System.Single MotionTrack::tempY
	float ___tempY_5;
	// System.Single MotionTrack::tempZ
	float ___tempZ_6;

public:
	inline static int32_t get_offset_of_pos_2() { return static_cast<int32_t>(offsetof(MotionTrack_t794643221, ___pos_2)); }
	inline ArrayList_t3948406897 * get_pos_2() const { return ___pos_2; }
	inline ArrayList_t3948406897 ** get_address_of_pos_2() { return &___pos_2; }
	inline void set_pos_2(ArrayList_t3948406897 * value)
	{
		___pos_2 = value;
		Il2CppCodeGenWriteBarrier(&___pos_2, value);
	}

	inline static int32_t get_offset_of_isRec_3() { return static_cast<int32_t>(offsetof(MotionTrack_t794643221, ___isRec_3)); }
	inline bool get_isRec_3() const { return ___isRec_3; }
	inline bool* get_address_of_isRec_3() { return &___isRec_3; }
	inline void set_isRec_3(bool value)
	{
		___isRec_3 = value;
	}

	inline static int32_t get_offset_of_tempX_4() { return static_cast<int32_t>(offsetof(MotionTrack_t794643221, ___tempX_4)); }
	inline float get_tempX_4() const { return ___tempX_4; }
	inline float* get_address_of_tempX_4() { return &___tempX_4; }
	inline void set_tempX_4(float value)
	{
		___tempX_4 = value;
	}

	inline static int32_t get_offset_of_tempY_5() { return static_cast<int32_t>(offsetof(MotionTrack_t794643221, ___tempY_5)); }
	inline float get_tempY_5() const { return ___tempY_5; }
	inline float* get_address_of_tempY_5() { return &___tempY_5; }
	inline void set_tempY_5(float value)
	{
		___tempY_5 = value;
	}

	inline static int32_t get_offset_of_tempZ_6() { return static_cast<int32_t>(offsetof(MotionTrack_t794643221, ___tempZ_6)); }
	inline float get_tempZ_6() const { return ___tempZ_6; }
	inline float* get_address_of_tempZ_6() { return &___tempZ_6; }
	inline void set_tempZ_6(float value)
	{
		___tempZ_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
