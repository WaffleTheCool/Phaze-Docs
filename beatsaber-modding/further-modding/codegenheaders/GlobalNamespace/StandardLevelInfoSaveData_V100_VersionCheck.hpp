// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: StandardLevelInfoSaveData_V100
#include "GlobalNamespace/StandardLevelInfoSaveData_V100.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: StandardLevelInfoSaveData_V100/VersionCheck
  // [TokenAttribute] Offset: FFFFFFFF
  class StandardLevelInfoSaveData_V100::VersionCheck : public ::Il2CppObject {
    public:
    // private System.String _version
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* version;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // Creating value type constructor for type: VersionCheck
    VersionCheck(::Il2CppString* version_ = {}) noexcept : version{version_} {}
    // Creating conversion operator: operator ::Il2CppString*
    constexpr operator ::Il2CppString*() const noexcept {
      return version;
    }
    // Get instance field reference: private System.String _version
    ::Il2CppString*& dyn__version();
    // public System.String get_version()
    // Offset: 0x10694CC
    ::Il2CppString* get_version();
    // public System.Void .ctor()
    // Offset: 0x10694D4
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static StandardLevelInfoSaveData_V100::VersionCheck* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::StandardLevelInfoSaveData_V100::VersionCheck::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<StandardLevelInfoSaveData_V100::VersionCheck*, creationType>()));
    }
  }; // StandardLevelInfoSaveData_V100/VersionCheck
  #pragma pack(pop)
  static check_size<sizeof(StandardLevelInfoSaveData_V100::VersionCheck), 16 + sizeof(::Il2CppString*)> __GlobalNamespace_StandardLevelInfoSaveData_V100_VersionCheckSizeCheck;
  static_assert(sizeof(StandardLevelInfoSaveData_V100::VersionCheck) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::StandardLevelInfoSaveData_V100::VersionCheck*, "", "StandardLevelInfoSaveData_V100/VersionCheck");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::StandardLevelInfoSaveData_V100::VersionCheck::get_version
// Il2CppName: get_version
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (GlobalNamespace::StandardLevelInfoSaveData_V100::VersionCheck::*)()>(&GlobalNamespace::StandardLevelInfoSaveData_V100::VersionCheck::get_version)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::StandardLevelInfoSaveData_V100::VersionCheck*), "get_version", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::StandardLevelInfoSaveData_V100::VersionCheck::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
