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
  // Forward declaring type: FadeInOutController
  class FadeInOutController;
  // Forward declaring type: GameScenesManager
  class GameScenesManager;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: FadeOutOnSceneTransitionStart
  // [TokenAttribute] Offset: FFFFFFFF
  class FadeOutOnSceneTransitionStart : public UnityEngine::MonoBehaviour {
    public:
    // [InjectAttribute] Offset: 0xE23E70
    // private readonly FadeInOutController _fadeInOut
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::FadeInOutController* fadeInOut;
    // Field size check
    static_assert(sizeof(GlobalNamespace::FadeInOutController*) == 0x8);
    // [InjectAttribute] Offset: 0xE23E80
    // private readonly GameScenesManager _gameScenesManager
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::GameScenesManager* gameScenesManager;
    // Field size check
    static_assert(sizeof(GlobalNamespace::GameScenesManager*) == 0x8);
    // Creating value type constructor for type: FadeOutOnSceneTransitionStart
    FadeOutOnSceneTransitionStart(GlobalNamespace::FadeInOutController* fadeInOut_ = {}, GlobalNamespace::GameScenesManager* gameScenesManager_ = {}) noexcept : fadeInOut{fadeInOut_}, gameScenesManager{gameScenesManager_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get instance field reference: private readonly FadeInOutController _fadeInOut
    GlobalNamespace::FadeInOutController*& dyn__fadeInOut();
    // Get instance field reference: private readonly GameScenesManager _gameScenesManager
    GlobalNamespace::GameScenesManager*& dyn__gameScenesManager();
    // protected System.Void Start()
    // Offset: 0x238C428
    void Start();
    // protected System.Void OnDestroy()
    // Offset: 0x238C4BC
    void OnDestroy();
    // private System.Void HandleGameScenesManagerTransitionDidStart(System.Single duration)
    // Offset: 0x238C598
    void HandleGameScenesManagerTransitionDidStart(float duration);
    // public System.Void .ctor()
    // Offset: 0x238C5B4
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FadeOutOnSceneTransitionStart* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::FadeOutOnSceneTransitionStart::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FadeOutOnSceneTransitionStart*, creationType>()));
    }
  }; // FadeOutOnSceneTransitionStart
  #pragma pack(pop)
  static check_size<sizeof(FadeOutOnSceneTransitionStart), 32 + sizeof(GlobalNamespace::GameScenesManager*)> __GlobalNamespace_FadeOutOnSceneTransitionStartSizeCheck;
  static_assert(sizeof(FadeOutOnSceneTransitionStart) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::FadeOutOnSceneTransitionStart*, "", "FadeOutOnSceneTransitionStart");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::FadeOutOnSceneTransitionStart::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::FadeOutOnSceneTransitionStart::*)()>(&GlobalNamespace::FadeOutOnSceneTransitionStart::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FadeOutOnSceneTransitionStart*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::FadeOutOnSceneTransitionStart::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::FadeOutOnSceneTransitionStart::*)()>(&GlobalNamespace::FadeOutOnSceneTransitionStart::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FadeOutOnSceneTransitionStart*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::FadeOutOnSceneTransitionStart::HandleGameScenesManagerTransitionDidStart
// Il2CppName: HandleGameScenesManagerTransitionDidStart
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::FadeOutOnSceneTransitionStart::*)(float)>(&GlobalNamespace::FadeOutOnSceneTransitionStart::HandleGameScenesManagerTransitionDidStart)> {
  static const MethodInfo* get() {
    static auto* duration = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FadeOutOnSceneTransitionStart*), "HandleGameScenesManagerTransitionDidStart", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{duration});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::FadeOutOnSceneTransitionStart::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
