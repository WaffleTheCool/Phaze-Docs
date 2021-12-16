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
// Forward declaring namespace: UnityEngine::SceneManagement
namespace UnityEngine::SceneManagement {
  // Forward declaring type: Scene
  struct Scene;
  // Forward declaring type: LoadSceneMode
  struct LoadSceneMode;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: SceneLoadedCallbacksOrderDebug
  // [TokenAttribute] Offset: FFFFFFFF
  class SceneLoadedCallbacksOrderDebug : public UnityEngine::MonoBehaviour {
    public:
    // Creating value type constructor for type: SceneLoadedCallbacksOrderDebug
    SceneLoadedCallbacksOrderDebug() noexcept {}
    // protected System.Void Awake()
    // Offset: 0x2392AE4
    void Awake();
    // protected System.Void OnEnable()
    // Offset: 0x2392B50
    void OnEnable();
    // protected System.Void OnSceneLoaded(UnityEngine.SceneManagement.Scene scene, UnityEngine.SceneManagement.LoadSceneMode mode)
    // Offset: 0x2392C20
    void OnSceneLoaded(UnityEngine::SceneManagement::Scene scene, UnityEngine::SceneManagement::LoadSceneMode mode);
    // protected System.Void Start()
    // Offset: 0x2392CE8
    void Start();
    // protected System.Void OnDisable()
    // Offset: 0x2392D54
    void OnDisable();
    // public System.Void .ctor()
    // Offset: 0x2392E24
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SceneLoadedCallbacksOrderDebug* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::SceneLoadedCallbacksOrderDebug::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SceneLoadedCallbacksOrderDebug*, creationType>()));
    }
  }; // SceneLoadedCallbacksOrderDebug
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SceneLoadedCallbacksOrderDebug*, "", "SceneLoadedCallbacksOrderDebug");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::SceneLoadedCallbacksOrderDebug::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SceneLoadedCallbacksOrderDebug::*)()>(&GlobalNamespace::SceneLoadedCallbacksOrderDebug::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SceneLoadedCallbacksOrderDebug*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SceneLoadedCallbacksOrderDebug::OnEnable
// Il2CppName: OnEnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SceneLoadedCallbacksOrderDebug::*)()>(&GlobalNamespace::SceneLoadedCallbacksOrderDebug::OnEnable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SceneLoadedCallbacksOrderDebug*), "OnEnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SceneLoadedCallbacksOrderDebug::OnSceneLoaded
// Il2CppName: OnSceneLoaded
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SceneLoadedCallbacksOrderDebug::*)(UnityEngine::SceneManagement::Scene, UnityEngine::SceneManagement::LoadSceneMode)>(&GlobalNamespace::SceneLoadedCallbacksOrderDebug::OnSceneLoaded)> {
  static const MethodInfo* get() {
    static auto* scene = &::il2cpp_utils::GetClassFromName("UnityEngine.SceneManagement", "Scene")->byval_arg;
    static auto* mode = &::il2cpp_utils::GetClassFromName("UnityEngine.SceneManagement", "LoadSceneMode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SceneLoadedCallbacksOrderDebug*), "OnSceneLoaded", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{scene, mode});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SceneLoadedCallbacksOrderDebug::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SceneLoadedCallbacksOrderDebug::*)()>(&GlobalNamespace::SceneLoadedCallbacksOrderDebug::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SceneLoadedCallbacksOrderDebug*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SceneLoadedCallbacksOrderDebug::OnDisable
// Il2CppName: OnDisable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SceneLoadedCallbacksOrderDebug::*)()>(&GlobalNamespace::SceneLoadedCallbacksOrderDebug::OnDisable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SceneLoadedCallbacksOrderDebug*), "OnDisable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SceneLoadedCallbacksOrderDebug::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
