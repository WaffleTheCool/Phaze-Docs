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
  // Forward declaring type: RectTransform
  class RectTransform;
  // Forward declaring type: Vector2
  struct Vector2;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: MissionStage
  // [TokenAttribute] Offset: FFFFFFFF
  class MissionStage : public UnityEngine::MonoBehaviour {
    public:
    // private System.Int32 _minimumMissionsToUnlock
    // Size: 0x4
    // Offset: 0x18
    int minimumMissionsToUnlock;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: minimumMissionsToUnlock and: rectTransform
    char __padding0[0x4] = {};
    // private UnityEngine.RectTransform _rectTransform
    // Size: 0x8
    // Offset: 0x20
    UnityEngine::RectTransform* rectTransform;
    // Field size check
    static_assert(sizeof(UnityEngine::RectTransform*) == 0x8);
    // Creating value type constructor for type: MissionStage
    MissionStage(int minimumMissionsToUnlock_ = {}, UnityEngine::RectTransform* rectTransform_ = {}) noexcept : minimumMissionsToUnlock{minimumMissionsToUnlock_}, rectTransform{rectTransform_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get instance field reference: private System.Int32 _minimumMissionsToUnlock
    int& dyn__minimumMissionsToUnlock();
    // Get instance field reference: private UnityEngine.RectTransform _rectTransform
    UnityEngine::RectTransform*& dyn__rectTransform();
    // public System.Int32 get_minimumMissionsToUnlock()
    // Offset: 0x1147664
    int get_minimumMissionsToUnlock();
    // public UnityEngine.Vector2 get_position()
    // Offset: 0x114442C
    UnityEngine::Vector2 get_position();
    // public System.Void .ctor()
    // Offset: 0x114766C
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MissionStage* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MissionStage::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MissionStage*, creationType>()));
    }
  }; // MissionStage
  #pragma pack(pop)
  static check_size<sizeof(MissionStage), 32 + sizeof(UnityEngine::RectTransform*)> __GlobalNamespace_MissionStageSizeCheck;
  static_assert(sizeof(MissionStage) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MissionStage*, "", "MissionStage");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MissionStage::get_minimumMissionsToUnlock
// Il2CppName: get_minimumMissionsToUnlock
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::MissionStage::*)()>(&GlobalNamespace::MissionStage::get_minimumMissionsToUnlock)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MissionStage*), "get_minimumMissionsToUnlock", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MissionStage::get_position
// Il2CppName: get_position
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector2 (GlobalNamespace::MissionStage::*)()>(&GlobalNamespace::MissionStage::get_position)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MissionStage*), "get_position", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MissionStage::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
