// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AudioSource
  class AudioSource;
  // Forward declaring type: AudioClip
  class AudioClip;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x2C
  #pragma pack(push, 1)
  // Autogenerated type: AudioClipQueue
  // [TokenAttribute] Offset: FFFFFFFF
  class AudioClipQueue : public UnityEngine::MonoBehaviour {
    public:
    // private UnityEngine.AudioSource _audioSource
    // Size: 0x8
    // Offset: 0x18
    UnityEngine::AudioSource* audioSource;
    // Field size check
    static_assert(sizeof(UnityEngine::AudioSource*) == 0x8);
    // private System.Collections.Generic.List`1<UnityEngine.AudioClip> _queue
    // Size: 0x8
    // Offset: 0x20
    System::Collections::Generic::List_1<UnityEngine::AudioClip*>* queue;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<UnityEngine::AudioClip*>*) == 0x8);
    // private System.Single _delay
    // Size: 0x4
    // Offset: 0x28
    float delay;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Creating value type constructor for type: AudioClipQueue
    AudioClipQueue(UnityEngine::AudioSource* audioSource_ = {}, System::Collections::Generic::List_1<UnityEngine::AudioClip*>* queue_ = {}, float delay_ = {}) noexcept : audioSource{audioSource_}, queue{queue_}, delay{delay_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get instance field reference: private UnityEngine.AudioSource _audioSource
    UnityEngine::AudioSource*& dyn__audioSource();
    // Get instance field reference: private System.Collections.Generic.List`1<UnityEngine.AudioClip> _queue
    System::Collections::Generic::List_1<UnityEngine::AudioClip*>*& dyn__queue();
    // Get instance field reference: private System.Single _delay
    float& dyn__delay();
    // protected System.Void Awake()
    // Offset: 0x1177094
    void Awake();
    // protected System.Void Update()
    // Offset: 0x11770B4
    void Update();
    // public System.Void PlayAudioClipWithDelay(UnityEngine.AudioClip audioClip, System.Single delay)
    // Offset: 0x11771E0
    void PlayAudioClipWithDelay(UnityEngine::AudioClip* audioClip, float delay);
    // public System.Void .ctor()
    // Offset: 0x117729C
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AudioClipQueue* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::AudioClipQueue::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AudioClipQueue*, creationType>()));
    }
  }; // AudioClipQueue
  #pragma pack(pop)
  static check_size<sizeof(AudioClipQueue), 40 + sizeof(float)> __GlobalNamespace_AudioClipQueueSizeCheck;
  static_assert(sizeof(AudioClipQueue) == 0x2C);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::AudioClipQueue*, "", "AudioClipQueue");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::AudioClipQueue::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AudioClipQueue::*)()>(&GlobalNamespace::AudioClipQueue::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AudioClipQueue*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AudioClipQueue::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AudioClipQueue::*)()>(&GlobalNamespace::AudioClipQueue::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AudioClipQueue*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AudioClipQueue::PlayAudioClipWithDelay
// Il2CppName: PlayAudioClipWithDelay
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AudioClipQueue::*)(UnityEngine::AudioClip*, float)>(&GlobalNamespace::AudioClipQueue::PlayAudioClipWithDelay)> {
  static const MethodInfo* get() {
    static auto* audioClip = &::il2cpp_utils::GetClassFromName("UnityEngine", "AudioClip")->byval_arg;
    static auto* delay = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AudioClipQueue*), "PlayAudioClipWithDelay", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{audioClip, delay});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AudioClipQueue::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
