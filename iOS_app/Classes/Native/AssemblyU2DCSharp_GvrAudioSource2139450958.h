#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.AudioClip
struct AudioClip_t794140988;
// UnityEngine.AudioSource
struct AudioSource_t1740077639;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "UnityEngine_UnityEngine_AudioRolloffMode1562508899.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GvrAudioSource
struct  GvrAudioSource_t2139450958  : public MonoBehaviour_t667441552
{
public:
	// System.Boolean GvrAudioSource::bypassRoomEffects
	bool ___bypassRoomEffects_2;
	// System.Single GvrAudioSource::directivityAlpha
	float ___directivityAlpha_3;
	// System.Single GvrAudioSource::directivitySharpness
	float ___directivitySharpness_4;
	// System.Single GvrAudioSource::gainDb
	float ___gainDb_5;
	// System.Boolean GvrAudioSource::occlusionEnabled
	bool ___occlusionEnabled_6;
	// System.Boolean GvrAudioSource::playOnAwake
	bool ___playOnAwake_7;
	// UnityEngine.AudioRolloffMode GvrAudioSource::rolloffMode
	int32_t ___rolloffMode_8;
	// System.Single GvrAudioSource::spread
	float ___spread_9;
	// UnityEngine.AudioClip GvrAudioSource::sourceClip
	AudioClip_t794140988 * ___sourceClip_10;
	// System.Boolean GvrAudioSource::sourceLoop
	bool ___sourceLoop_11;
	// System.Boolean GvrAudioSource::sourceMute
	bool ___sourceMute_12;
	// System.Single GvrAudioSource::sourcePitch
	float ___sourcePitch_13;
	// System.Int32 GvrAudioSource::sourcePriority
	int32_t ___sourcePriority_14;
	// System.Single GvrAudioSource::sourceVolume
	float ___sourceVolume_15;
	// System.Single GvrAudioSource::sourceMaxDistance
	float ___sourceMaxDistance_16;
	// System.Single GvrAudioSource::sourceMinDistance
	float ___sourceMinDistance_17;
	// System.Boolean GvrAudioSource::hrtfEnabled
	bool ___hrtfEnabled_18;
	// UnityEngine.AudioSource GvrAudioSource::audioSource
	AudioSource_t1740077639 * ___audioSource_19;
	// System.Int32 GvrAudioSource::id
	int32_t ___id_20;
	// System.Single GvrAudioSource::currentOcclusion
	float ___currentOcclusion_21;
	// System.Single GvrAudioSource::nextOcclusionUpdate
	float ___nextOcclusionUpdate_22;
	// System.Boolean GvrAudioSource::isPaused
	bool ___isPaused_23;

public:
	inline static int32_t get_offset_of_bypassRoomEffects_2() { return static_cast<int32_t>(offsetof(GvrAudioSource_t2139450958, ___bypassRoomEffects_2)); }
	inline bool get_bypassRoomEffects_2() const { return ___bypassRoomEffects_2; }
	inline bool* get_address_of_bypassRoomEffects_2() { return &___bypassRoomEffects_2; }
	inline void set_bypassRoomEffects_2(bool value)
	{
		___bypassRoomEffects_2 = value;
	}

	inline static int32_t get_offset_of_directivityAlpha_3() { return static_cast<int32_t>(offsetof(GvrAudioSource_t2139450958, ___directivityAlpha_3)); }
	inline float get_directivityAlpha_3() const { return ___directivityAlpha_3; }
	inline float* get_address_of_directivityAlpha_3() { return &___directivityAlpha_3; }
	inline void set_directivityAlpha_3(float value)
	{
		___directivityAlpha_3 = value;
	}

	inline static int32_t get_offset_of_directivitySharpness_4() { return static_cast<int32_t>(offsetof(GvrAudioSource_t2139450958, ___directivitySharpness_4)); }
	inline float get_directivitySharpness_4() const { return ___directivitySharpness_4; }
	inline float* get_address_of_directivitySharpness_4() { return &___directivitySharpness_4; }
	inline void set_directivitySharpness_4(float value)
	{
		___directivitySharpness_4 = value;
	}

	inline static int32_t get_offset_of_gainDb_5() { return static_cast<int32_t>(offsetof(GvrAudioSource_t2139450958, ___gainDb_5)); }
	inline float get_gainDb_5() const { return ___gainDb_5; }
	inline float* get_address_of_gainDb_5() { return &___gainDb_5; }
	inline void set_gainDb_5(float value)
	{
		___gainDb_5 = value;
	}

	inline static int32_t get_offset_of_occlusionEnabled_6() { return static_cast<int32_t>(offsetof(GvrAudioSource_t2139450958, ___occlusionEnabled_6)); }
	inline bool get_occlusionEnabled_6() const { return ___occlusionEnabled_6; }
	inline bool* get_address_of_occlusionEnabled_6() { return &___occlusionEnabled_6; }
	inline void set_occlusionEnabled_6(bool value)
	{
		___occlusionEnabled_6 = value;
	}

	inline static int32_t get_offset_of_playOnAwake_7() { return static_cast<int32_t>(offsetof(GvrAudioSource_t2139450958, ___playOnAwake_7)); }
	inline bool get_playOnAwake_7() const { return ___playOnAwake_7; }
	inline bool* get_address_of_playOnAwake_7() { return &___playOnAwake_7; }
	inline void set_playOnAwake_7(bool value)
	{
		___playOnAwake_7 = value;
	}

	inline static int32_t get_offset_of_rolloffMode_8() { return static_cast<int32_t>(offsetof(GvrAudioSource_t2139450958, ___rolloffMode_8)); }
	inline int32_t get_rolloffMode_8() const { return ___rolloffMode_8; }
	inline int32_t* get_address_of_rolloffMode_8() { return &___rolloffMode_8; }
	inline void set_rolloffMode_8(int32_t value)
	{
		___rolloffMode_8 = value;
	}

	inline static int32_t get_offset_of_spread_9() { return static_cast<int32_t>(offsetof(GvrAudioSource_t2139450958, ___spread_9)); }
	inline float get_spread_9() const { return ___spread_9; }
	inline float* get_address_of_spread_9() { return &___spread_9; }
	inline void set_spread_9(float value)
	{
		___spread_9 = value;
	}

	inline static int32_t get_offset_of_sourceClip_10() { return static_cast<int32_t>(offsetof(GvrAudioSource_t2139450958, ___sourceClip_10)); }
	inline AudioClip_t794140988 * get_sourceClip_10() const { return ___sourceClip_10; }
	inline AudioClip_t794140988 ** get_address_of_sourceClip_10() { return &___sourceClip_10; }
	inline void set_sourceClip_10(AudioClip_t794140988 * value)
	{
		___sourceClip_10 = value;
		Il2CppCodeGenWriteBarrier(&___sourceClip_10, value);
	}

	inline static int32_t get_offset_of_sourceLoop_11() { return static_cast<int32_t>(offsetof(GvrAudioSource_t2139450958, ___sourceLoop_11)); }
	inline bool get_sourceLoop_11() const { return ___sourceLoop_11; }
	inline bool* get_address_of_sourceLoop_11() { return &___sourceLoop_11; }
	inline void set_sourceLoop_11(bool value)
	{
		___sourceLoop_11 = value;
	}

	inline static int32_t get_offset_of_sourceMute_12() { return static_cast<int32_t>(offsetof(GvrAudioSource_t2139450958, ___sourceMute_12)); }
	inline bool get_sourceMute_12() const { return ___sourceMute_12; }
	inline bool* get_address_of_sourceMute_12() { return &___sourceMute_12; }
	inline void set_sourceMute_12(bool value)
	{
		___sourceMute_12 = value;
	}

	inline static int32_t get_offset_of_sourcePitch_13() { return static_cast<int32_t>(offsetof(GvrAudioSource_t2139450958, ___sourcePitch_13)); }
	inline float get_sourcePitch_13() const { return ___sourcePitch_13; }
	inline float* get_address_of_sourcePitch_13() { return &___sourcePitch_13; }
	inline void set_sourcePitch_13(float value)
	{
		___sourcePitch_13 = value;
	}

	inline static int32_t get_offset_of_sourcePriority_14() { return static_cast<int32_t>(offsetof(GvrAudioSource_t2139450958, ___sourcePriority_14)); }
	inline int32_t get_sourcePriority_14() const { return ___sourcePriority_14; }
	inline int32_t* get_address_of_sourcePriority_14() { return &___sourcePriority_14; }
	inline void set_sourcePriority_14(int32_t value)
	{
		___sourcePriority_14 = value;
	}

	inline static int32_t get_offset_of_sourceVolume_15() { return static_cast<int32_t>(offsetof(GvrAudioSource_t2139450958, ___sourceVolume_15)); }
	inline float get_sourceVolume_15() const { return ___sourceVolume_15; }
	inline float* get_address_of_sourceVolume_15() { return &___sourceVolume_15; }
	inline void set_sourceVolume_15(float value)
	{
		___sourceVolume_15 = value;
	}

	inline static int32_t get_offset_of_sourceMaxDistance_16() { return static_cast<int32_t>(offsetof(GvrAudioSource_t2139450958, ___sourceMaxDistance_16)); }
	inline float get_sourceMaxDistance_16() const { return ___sourceMaxDistance_16; }
	inline float* get_address_of_sourceMaxDistance_16() { return &___sourceMaxDistance_16; }
	inline void set_sourceMaxDistance_16(float value)
	{
		___sourceMaxDistance_16 = value;
	}

	inline static int32_t get_offset_of_sourceMinDistance_17() { return static_cast<int32_t>(offsetof(GvrAudioSource_t2139450958, ___sourceMinDistance_17)); }
	inline float get_sourceMinDistance_17() const { return ___sourceMinDistance_17; }
	inline float* get_address_of_sourceMinDistance_17() { return &___sourceMinDistance_17; }
	inline void set_sourceMinDistance_17(float value)
	{
		___sourceMinDistance_17 = value;
	}

	inline static int32_t get_offset_of_hrtfEnabled_18() { return static_cast<int32_t>(offsetof(GvrAudioSource_t2139450958, ___hrtfEnabled_18)); }
	inline bool get_hrtfEnabled_18() const { return ___hrtfEnabled_18; }
	inline bool* get_address_of_hrtfEnabled_18() { return &___hrtfEnabled_18; }
	inline void set_hrtfEnabled_18(bool value)
	{
		___hrtfEnabled_18 = value;
	}

	inline static int32_t get_offset_of_audioSource_19() { return static_cast<int32_t>(offsetof(GvrAudioSource_t2139450958, ___audioSource_19)); }
	inline AudioSource_t1740077639 * get_audioSource_19() const { return ___audioSource_19; }
	inline AudioSource_t1740077639 ** get_address_of_audioSource_19() { return &___audioSource_19; }
	inline void set_audioSource_19(AudioSource_t1740077639 * value)
	{
		___audioSource_19 = value;
		Il2CppCodeGenWriteBarrier(&___audioSource_19, value);
	}

	inline static int32_t get_offset_of_id_20() { return static_cast<int32_t>(offsetof(GvrAudioSource_t2139450958, ___id_20)); }
	inline int32_t get_id_20() const { return ___id_20; }
	inline int32_t* get_address_of_id_20() { return &___id_20; }
	inline void set_id_20(int32_t value)
	{
		___id_20 = value;
	}

	inline static int32_t get_offset_of_currentOcclusion_21() { return static_cast<int32_t>(offsetof(GvrAudioSource_t2139450958, ___currentOcclusion_21)); }
	inline float get_currentOcclusion_21() const { return ___currentOcclusion_21; }
	inline float* get_address_of_currentOcclusion_21() { return &___currentOcclusion_21; }
	inline void set_currentOcclusion_21(float value)
	{
		___currentOcclusion_21 = value;
	}

	inline static int32_t get_offset_of_nextOcclusionUpdate_22() { return static_cast<int32_t>(offsetof(GvrAudioSource_t2139450958, ___nextOcclusionUpdate_22)); }
	inline float get_nextOcclusionUpdate_22() const { return ___nextOcclusionUpdate_22; }
	inline float* get_address_of_nextOcclusionUpdate_22() { return &___nextOcclusionUpdate_22; }
	inline void set_nextOcclusionUpdate_22(float value)
	{
		___nextOcclusionUpdate_22 = value;
	}

	inline static int32_t get_offset_of_isPaused_23() { return static_cast<int32_t>(offsetof(GvrAudioSource_t2139450958, ___isPaused_23)); }
	inline bool get_isPaused_23() const { return ___isPaused_23; }
	inline bool* get_address_of_isPaused_23() { return &___isPaused_23; }
	inline void set_isPaused_23(bool value)
	{
		___isPaused_23 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
