// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Object
#include "UnityEngine/Object.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: OVRProfile
  // [TokenAttribute] Offset: FFFFFFFF
  class OVRProfile : public UnityEngine::Object {
    public:
    // Nested type: GlobalNamespace::OVRProfile::State
    struct State;
    // Creating value type constructor for type: OVRProfile
    OVRProfile() noexcept {}
    // public System.String get_id()
    // Offset: 0x163B1E4
    ::Il2CppString* get_id();
    // public System.String get_userName()
    // Offset: 0x163B22C
    ::Il2CppString* get_userName();
    // public System.String get_locale()
    // Offset: 0x163B274
    ::Il2CppString* get_locale();
    // public System.Single get_ipd()
    // Offset: 0x163B2BC
    float get_ipd();
    // public System.Single get_eyeHeight()
    // Offset: 0x163B3F0
    float get_eyeHeight();
    // public System.Single get_eyeDepth()
    // Offset: 0x163B450
    float get_eyeDepth();
    // public System.Single get_neckHeight()
    // Offset: 0x163B4B0
    float get_neckHeight();
    // public OVRProfile/State get_state()
    // Offset: 0x163B4D0
    GlobalNamespace::OVRProfile::State get_state();
    // public System.Void .ctor()
    // Offset: 0x163B4D8
    // Implemented from: UnityEngine.Object
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OVRProfile* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::OVRProfile::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OVRProfile*, creationType>()));
    }
  }; // OVRProfile
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRProfile*, "", "OVRProfile");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::OVRProfile::get_id
// Il2CppName: get_id
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (GlobalNamespace::OVRProfile::*)()>(&GlobalNamespace::OVRProfile::get_id)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRProfile*), "get_id", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRProfile::get_userName
// Il2CppName: get_userName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (GlobalNamespace::OVRProfile::*)()>(&GlobalNamespace::OVRProfile::get_userName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRProfile*), "get_userName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRProfile::get_locale
// Il2CppName: get_locale
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (GlobalNamespace::OVRProfile::*)()>(&GlobalNamespace::OVRProfile::get_locale)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRProfile*), "get_locale", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRProfile::get_ipd
// Il2CppName: get_ipd
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::OVRProfile::*)()>(&GlobalNamespace::OVRProfile::get_ipd)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRProfile*), "get_ipd", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRProfile::get_eyeHeight
// Il2CppName: get_eyeHeight
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::OVRProfile::*)()>(&GlobalNamespace::OVRProfile::get_eyeHeight)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRProfile*), "get_eyeHeight", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRProfile::get_eyeDepth
// Il2CppName: get_eyeDepth
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::OVRProfile::*)()>(&GlobalNamespace::OVRProfile::get_eyeDepth)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRProfile*), "get_eyeDepth", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRProfile::get_neckHeight
// Il2CppName: get_neckHeight
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::OVRProfile::*)()>(&GlobalNamespace::OVRProfile::get_neckHeight)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRProfile*), "get_neckHeight", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRProfile::get_state
// Il2CppName: get_state
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::OVRProfile::State (GlobalNamespace::OVRProfile::*)()>(&GlobalNamespace::OVRProfile::get_state)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRProfile*), "get_state", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRProfile::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
