// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: DynamicBoneColliderBase
#include "GlobalNamespace/DynamicBoneColliderBase.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Skipping declaration: Vector3 because it is already included!
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x2C
  #pragma pack(push, 1)
  // Autogenerated type: DynamicBonePlaneCollider
  // [TokenAttribute] Offset: FFFFFFFF
  // [AddComponentMenu] Offset: E2A000
  class DynamicBonePlaneCollider : public GlobalNamespace::DynamicBoneColliderBase {
    public:
    // Creating value type constructor for type: DynamicBonePlaneCollider
    DynamicBonePlaneCollider() noexcept {}
    // private System.Void OnValidate()
    // Offset: 0x23FA7DC
    void OnValidate();
    // private System.Void OnDrawGizmosSelected()
    // Offset: 0x23FA9CC
    void OnDrawGizmosSelected();
    // public System.Void .ctor()
    // Offset: 0x23FAB90
    // Implemented from: DynamicBoneColliderBase
    // Base method: System.Void DynamicBoneColliderBase::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DynamicBonePlaneCollider* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::DynamicBonePlaneCollider::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DynamicBonePlaneCollider*, creationType>()));
    }
    // public override System.Void Collide(ref UnityEngine.Vector3 particlePosition, System.Single particleRadius)
    // Offset: 0x23FA7E0
    // Implemented from: DynamicBoneColliderBase
    // Base method: System.Void DynamicBoneColliderBase::Collide(ref UnityEngine.Vector3 particlePosition, System.Single particleRadius)
    void Collide(ByRef<UnityEngine::Vector3> particlePosition, float particleRadius);
  }; // DynamicBonePlaneCollider
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::DynamicBonePlaneCollider*, "", "DynamicBonePlaneCollider");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::DynamicBonePlaneCollider::OnValidate
// Il2CppName: OnValidate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::DynamicBonePlaneCollider::*)()>(&GlobalNamespace::DynamicBonePlaneCollider::OnValidate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::DynamicBonePlaneCollider*), "OnValidate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::DynamicBonePlaneCollider::OnDrawGizmosSelected
// Il2CppName: OnDrawGizmosSelected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::DynamicBonePlaneCollider::*)()>(&GlobalNamespace::DynamicBonePlaneCollider::OnDrawGizmosSelected)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::DynamicBonePlaneCollider*), "OnDrawGizmosSelected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::DynamicBonePlaneCollider::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::DynamicBonePlaneCollider::Collide
// Il2CppName: Collide
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::DynamicBonePlaneCollider::*)(ByRef<UnityEngine::Vector3>, float)>(&GlobalNamespace::DynamicBonePlaneCollider::Collide)> {
  static const MethodInfo* get() {
    static auto* particlePosition = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->this_arg;
    static auto* particleRadius = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::DynamicBonePlaneCollider*), "Collide", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{particlePosition, particleRadius});
  }
};
