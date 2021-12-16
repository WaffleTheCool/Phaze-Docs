// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Playables.PlayableAsset
#include "UnityEngine/Playables/PlayableAsset.hpp"
// Including type: UnityEngine.Timeline.ITimelineClipAsset
#include "UnityEngine/Timeline/ITimelineClipAsset.hpp"
// Including type: UnityEngine.ExposedReference`1
#include "UnityEngine/ExposedReference_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: TimelineArrayReference
  class TimelineArrayReference;
  // Forward declaring type: CustomTweenBehaviour
  class CustomTweenBehaviour;
}
// Forward declaring namespace: UnityEngine::Timeline
namespace UnityEngine::Timeline {
  // Forward declaring type: ClipCaps
  struct ClipCaps;
}
// Forward declaring namespace: UnityEngine::Playables
namespace UnityEngine::Playables {
  // Forward declaring type: Playable
  struct Playable;
  // Forward declaring type: PlayableGraph
  struct PlayableGraph;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // WARNING Size may be invalid!
  // Autogenerated type: ArrayPositionTween
  // [TokenAttribute] Offset: FFFFFFFF
  class ArrayPositionTween : public UnityEngine::Playables::PlayableAsset/*, public UnityEngine::Timeline::ITimelineClipAsset*/ {
    public:
    // [NullAllowed] Offset: 0xE4B744
    // public UnityEngine.ExposedReference`1<TimelineArrayReference> arrayReference
    // Size: 0xFFFFFFFF
    // Offset: 0x18
    UnityEngine::ExposedReference_1<GlobalNamespace::TimelineArrayReference*> arrayReference;
    // public System.Single elementDelay
    // Size: 0x4
    // Offset: 0x28
    float elementDelay;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public CustomTweenBehaviour template
    // Size: 0x8
    // Offset: 0x30
    GlobalNamespace::CustomTweenBehaviour* _template;
    // Field size check
    static_assert(sizeof(GlobalNamespace::CustomTweenBehaviour*) == 0x8);
    // Creating value type constructor for type: ArrayPositionTween
    ArrayPositionTween(UnityEngine::ExposedReference_1<GlobalNamespace::TimelineArrayReference*> arrayReference_ = {}, float elementDelay_ = {}, GlobalNamespace::CustomTweenBehaviour* _template_ = {}) noexcept : arrayReference{arrayReference_}, elementDelay{elementDelay_}, _template{_template_} {}
    // Creating interface conversion operator: operator UnityEngine::Timeline::ITimelineClipAsset
    operator UnityEngine::Timeline::ITimelineClipAsset() noexcept {
      return *reinterpret_cast<UnityEngine::Timeline::ITimelineClipAsset*>(this);
    }
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get instance field reference: public UnityEngine.ExposedReference`1<TimelineArrayReference> arrayReference
    UnityEngine::ExposedReference_1<GlobalNamespace::TimelineArrayReference*>& dyn_arrayReference();
    // Get instance field reference: public System.Single elementDelay
    float& dyn_elementDelay();
    // Get instance field reference: public CustomTweenBehaviour template
    GlobalNamespace::CustomTweenBehaviour*& dyn_template();
    // public UnityEngine.Timeline.ClipCaps get_clipCaps()
    // Offset: 0x1176A24
    UnityEngine::Timeline::ClipCaps get_clipCaps();
    // public System.Void .ctor()
    // Offset: 0x1176B64
    // Implemented from: UnityEngine.Playables.PlayableAsset
    // Base method: System.Void PlayableAsset::.ctor()
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ArrayPositionTween* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::ArrayPositionTween::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ArrayPositionTween*, creationType>()));
    }
    // public override UnityEngine.Playables.Playable CreatePlayable(UnityEngine.Playables.PlayableGraph graph, UnityEngine.GameObject go)
    // Offset: 0x1176A2C
    // Implemented from: UnityEngine.Playables.PlayableAsset
    // Base method: UnityEngine.Playables.Playable PlayableAsset::CreatePlayable(UnityEngine.Playables.PlayableGraph graph, UnityEngine.GameObject go)
    UnityEngine::Playables::Playable CreatePlayable(UnityEngine::Playables::PlayableGraph graph, UnityEngine::GameObject* go);
  }; // ArrayPositionTween
  // WARNING Not writing size check since size may be invalid!
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ArrayPositionTween*, "", "ArrayPositionTween");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::ArrayPositionTween::get_clipCaps
// Il2CppName: get_clipCaps
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Timeline::ClipCaps (GlobalNamespace::ArrayPositionTween::*)()>(&GlobalNamespace::ArrayPositionTween::get_clipCaps)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ArrayPositionTween*), "get_clipCaps", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ArrayPositionTween::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::ArrayPositionTween::CreatePlayable
// Il2CppName: CreatePlayable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Playables::Playable (GlobalNamespace::ArrayPositionTween::*)(UnityEngine::Playables::PlayableGraph, UnityEngine::GameObject*)>(&GlobalNamespace::ArrayPositionTween::CreatePlayable)> {
  static const MethodInfo* get() {
    static auto* graph = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "PlayableGraph")->byval_arg;
    static auto* go = &::il2cpp_utils::GetClassFromName("UnityEngine", "GameObject")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ArrayPositionTween*), "CreatePlayable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{graph, go});
  }
};
