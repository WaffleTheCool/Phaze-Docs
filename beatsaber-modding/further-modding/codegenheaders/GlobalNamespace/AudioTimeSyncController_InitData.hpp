// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: AudioTimeSyncController
#include "GlobalNamespace/AudioTimeSyncController.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AudioClip
  class AudioClip;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x24
  #pragma pack(push, 1)
  // Autogenerated type: AudioTimeSyncController/InitData
  // [TokenAttribute] Offset: FFFFFFFF
  class AudioTimeSyncController::InitData : public ::Il2CppObject {
    public:
    // public readonly UnityEngine.AudioClip audioClip
    // Size: 0x8
    // Offset: 0x10
    UnityEngine::AudioClip* audioClip;
    // Field size check
    static_assert(sizeof(UnityEngine::AudioClip*) == 0x8);
    // public readonly System.Single startSongTime
    // Size: 0x4
    // Offset: 0x18
    float startSongTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public readonly System.Single songTimeOffset
    // Size: 0x4
    // Offset: 0x1C
    float songTimeOffset;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public readonly System.Single timeScale
    // Size: 0x4
    // Offset: 0x20
    float timeScale;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Creating value type constructor for type: InitData
    InitData(UnityEngine::AudioClip* audioClip_ = {}, float startSongTime_ = {}, float songTimeOffset_ = {}, float timeScale_ = {}) noexcept : audioClip{audioClip_}, startSongTime{startSongTime_}, songTimeOffset{songTimeOffset_}, timeScale{timeScale_} {}
    // Get instance field reference: public readonly UnityEngine.AudioClip audioClip
    UnityEngine::AudioClip*& dyn_audioClip();
    // Get instance field reference: public readonly System.Single startSongTime
    float& dyn_startSongTime();
    // Get instance field reference: public readonly System.Single songTimeOffset
    float& dyn_songTimeOffset();
    // Get instance field reference: public readonly System.Single timeScale
    float& dyn_timeScale();
    // public System.Void .ctor(UnityEngine.AudioClip audioClip, System.Single startSongTime, System.Single songTimeOffset, System.Single timeScale)
    // Offset: 0x1178A84
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AudioTimeSyncController::InitData* New_ctor(UnityEngine::AudioClip* audioClip, float startSongTime, float songTimeOffset, float timeScale) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::AudioTimeSyncController::InitData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AudioTimeSyncController::InitData*, creationType>(audioClip, startSongTime, songTimeOffset, timeScale)));
    }
  }; // AudioTimeSyncController/InitData
  #pragma pack(pop)
  static check_size<sizeof(AudioTimeSyncController::InitData), 32 + sizeof(float)> __GlobalNamespace_AudioTimeSyncController_InitDataSizeCheck;
  static_assert(sizeof(AudioTimeSyncController::InitData) == 0x24);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::AudioTimeSyncController::InitData*, "", "AudioTimeSyncController/InitData");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::AudioTimeSyncController::InitData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
