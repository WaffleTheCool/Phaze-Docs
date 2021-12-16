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
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: BakedLightWithIdBase
  // [TokenAttribute] Offset: FFFFFFFF
  class BakedLightWithIdBase : public UnityEngine::MonoBehaviour {
    public:
    // Creating value type constructor for type: BakedLightWithIdBase
    BakedLightWithIdBase() noexcept {}
    // public System.Int32 get_id()
    // Offset: 0xFFFFFFFF
    int get_id();
    // public System.Void SetupLightSource(System.Single intensityMultiplier)
    // Offset: 0xFFFFFFFF
    void SetupLightSource(float intensityMultiplier);
    // protected System.Void .ctor()
    // Offset: 0x238AF58
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BakedLightWithIdBase* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::BakedLightWithIdBase::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BakedLightWithIdBase*, creationType>()));
    }
  }; // BakedLightWithIdBase
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BakedLightWithIdBase*, "", "BakedLightWithIdBase");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::BakedLightWithIdBase::get_id
// Il2CppName: get_id
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::BakedLightWithIdBase::*)()>(&GlobalNamespace::BakedLightWithIdBase::get_id)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BakedLightWithIdBase*), "get_id", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BakedLightWithIdBase::SetupLightSource
// Il2CppName: SetupLightSource
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BakedLightWithIdBase::*)(float)>(&GlobalNamespace::BakedLightWithIdBase::SetupLightSource)> {
  static const MethodInfo* get() {
    static auto* intensityMultiplier = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BakedLightWithIdBase*), "SetupLightSource", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{intensityMultiplier});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BakedLightWithIdBase::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
