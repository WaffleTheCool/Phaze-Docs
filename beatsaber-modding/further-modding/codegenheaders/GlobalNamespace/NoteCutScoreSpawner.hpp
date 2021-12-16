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
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: FlyingScoreSpawner
  class FlyingScoreSpawner;
  // Forward declaring type: BeatmapObjectManager
  class BeatmapObjectManager;
  // Forward declaring type: IScoreController
  class IScoreController;
  // Forward declaring type: NoteController
  class NoteController;
  // Forward declaring type: NoteCutInfo
  struct NoteCutInfo;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: NoteCutScoreSpawner
  // [TokenAttribute] Offset: FFFFFFFF
  class NoteCutScoreSpawner : public UnityEngine::MonoBehaviour {
    public:
    // private FlyingScoreSpawner _flyingScoreSpawner
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::FlyingScoreSpawner* flyingScoreSpawner;
    // Field size check
    static_assert(sizeof(GlobalNamespace::FlyingScoreSpawner*) == 0x8);
    // [InjectAttribute] Offset: 0xE3CD54
    // private readonly BeatmapObjectManager _beatmapObjectManager
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::BeatmapObjectManager* beatmapObjectManager;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BeatmapObjectManager*) == 0x8);
    // [InjectAttribute] Offset: 0xE3CD64
    // private readonly IScoreController _scoreController
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::IScoreController* scoreController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IScoreController*) == 0x8);
    // Creating value type constructor for type: NoteCutScoreSpawner
    NoteCutScoreSpawner(GlobalNamespace::FlyingScoreSpawner* flyingScoreSpawner_ = {}, GlobalNamespace::BeatmapObjectManager* beatmapObjectManager_ = {}, GlobalNamespace::IScoreController* scoreController_ = {}) noexcept : flyingScoreSpawner{flyingScoreSpawner_}, beatmapObjectManager{beatmapObjectManager_}, scoreController{scoreController_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get instance field reference: private FlyingScoreSpawner _flyingScoreSpawner
    GlobalNamespace::FlyingScoreSpawner*& dyn__flyingScoreSpawner();
    // Get instance field reference: private readonly BeatmapObjectManager _beatmapObjectManager
    GlobalNamespace::BeatmapObjectManager*& dyn__beatmapObjectManager();
    // Get instance field reference: private readonly IScoreController _scoreController
    GlobalNamespace::IScoreController*& dyn__scoreController();
    // protected System.Void Start()
    // Offset: 0x104F9BC
    void Start();
    // protected System.Void OnDestroy()
    // Offset: 0x104FA48
    void OnDestroy();
    // private System.Void HandleNoteWasCut(NoteController noteController, in NoteCutInfo noteCutInfo)
    // Offset: 0x104FAE0
    void HandleNoteWasCut(GlobalNamespace::NoteController* noteController, ByRef<GlobalNamespace::NoteCutInfo> noteCutInfo);
    // public System.Void .ctor()
    // Offset: 0x104FCFC
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NoteCutScoreSpawner* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::NoteCutScoreSpawner::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NoteCutScoreSpawner*, creationType>()));
    }
  }; // NoteCutScoreSpawner
  #pragma pack(pop)
  static check_size<sizeof(NoteCutScoreSpawner), 40 + sizeof(GlobalNamespace::IScoreController*)> __GlobalNamespace_NoteCutScoreSpawnerSizeCheck;
  static_assert(sizeof(NoteCutScoreSpawner) == 0x30);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::NoteCutScoreSpawner*, "", "NoteCutScoreSpawner");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::NoteCutScoreSpawner::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NoteCutScoreSpawner::*)()>(&GlobalNamespace::NoteCutScoreSpawner::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NoteCutScoreSpawner*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NoteCutScoreSpawner::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NoteCutScoreSpawner::*)()>(&GlobalNamespace::NoteCutScoreSpawner::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NoteCutScoreSpawner*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NoteCutScoreSpawner::HandleNoteWasCut
// Il2CppName: HandleNoteWasCut
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NoteCutScoreSpawner::*)(GlobalNamespace::NoteController*, ByRef<GlobalNamespace::NoteCutInfo>)>(&GlobalNamespace::NoteCutScoreSpawner::HandleNoteWasCut)> {
  static const MethodInfo* get() {
    static auto* noteController = &::il2cpp_utils::GetClassFromName("", "NoteController")->byval_arg;
    static auto* noteCutInfo = &::il2cpp_utils::GetClassFromName("", "NoteCutInfo")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NoteCutScoreSpawner*), "HandleNoteWasCut", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{noteController, noteCutInfo});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NoteCutScoreSpawner::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
