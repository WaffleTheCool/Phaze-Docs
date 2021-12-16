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
  // Forward declaring type: SaberManager
  class SaberManager;
  // Forward declaring type: NoteCutter
  class NoteCutter;
  // Forward declaring type: Saber
  class Saber;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: CuttingManager
  // [TokenAttribute] Offset: FFFFFFFF
  class CuttingManager : public UnityEngine::MonoBehaviour {
    public:
    // private SaberManager _saberManager
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::SaberManager* saberManager;
    // Field size check
    static_assert(sizeof(GlobalNamespace::SaberManager*) == 0x8);
    // [InjectAttribute] Offset: 0xE42018
    // private readonly NoteCutter _noteCutter
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::NoteCutter* noteCutter;
    // Field size check
    static_assert(sizeof(GlobalNamespace::NoteCutter*) == 0x8);
    // Creating value type constructor for type: CuttingManager
    CuttingManager(GlobalNamespace::SaberManager* saberManager_ = {}, GlobalNamespace::NoteCutter* noteCutter_ = {}) noexcept : saberManager{saberManager_}, noteCutter{noteCutter_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get instance field reference: private SaberManager _saberManager
    GlobalNamespace::SaberManager*& dyn__saberManager();
    // Get instance field reference: private readonly NoteCutter _noteCutter
    GlobalNamespace::NoteCutter*& dyn__noteCutter();
    // protected System.Void OnEnable()
    // Offset: 0x10EC9E8
    void OnEnable();
    // protected System.Void OnDisable()
    // Offset: 0x10ECA7C
    void OnDisable();
    // private System.Void HandleSaberManagerDidUpdateSaberPositions(Saber leftSaber, Saber rightSaber)
    // Offset: 0x10ECB10
    void HandleSaberManagerDidUpdateSaberPositions(GlobalNamespace::Saber* leftSaber, GlobalNamespace::Saber* rightSaber);
    // public System.Void .ctor()
    // Offset: 0x10ECB60
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CuttingManager* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::CuttingManager::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CuttingManager*, creationType>()));
    }
  }; // CuttingManager
  #pragma pack(pop)
  static check_size<sizeof(CuttingManager), 32 + sizeof(GlobalNamespace::NoteCutter*)> __GlobalNamespace_CuttingManagerSizeCheck;
  static_assert(sizeof(CuttingManager) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::CuttingManager*, "", "CuttingManager");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::CuttingManager::OnEnable
// Il2CppName: OnEnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::CuttingManager::*)()>(&GlobalNamespace::CuttingManager::OnEnable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CuttingManager*), "OnEnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CuttingManager::OnDisable
// Il2CppName: OnDisable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::CuttingManager::*)()>(&GlobalNamespace::CuttingManager::OnDisable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CuttingManager*), "OnDisable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CuttingManager::HandleSaberManagerDidUpdateSaberPositions
// Il2CppName: HandleSaberManagerDidUpdateSaberPositions
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::CuttingManager::*)(GlobalNamespace::Saber*, GlobalNamespace::Saber*)>(&GlobalNamespace::CuttingManager::HandleSaberManagerDidUpdateSaberPositions)> {
  static const MethodInfo* get() {
    static auto* leftSaber = &::il2cpp_utils::GetClassFromName("", "Saber")->byval_arg;
    static auto* rightSaber = &::il2cpp_utils::GetClassFromName("", "Saber")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CuttingManager*), "HandleSaberManagerDidUpdateSaberPositions", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{leftSaber, rightSaber});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CuttingManager::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
