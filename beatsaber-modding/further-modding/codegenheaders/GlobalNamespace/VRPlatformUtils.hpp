// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: XRDeviceModel
  struct XRDeviceModel;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: VRPlatformUtils
  // [TokenAttribute] Offset: FFFFFFFF
  class VRPlatformUtils : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: VRPlatformUtils
    VRPlatformUtils() noexcept {}
    // static public XRDeviceModel GetXRDeviceModel()
    // Offset: 0x2398570
    static GlobalNamespace::XRDeviceModel GetXRDeviceModel();
  }; // VRPlatformUtils
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::VRPlatformUtils*, "", "VRPlatformUtils");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::VRPlatformUtils::GetXRDeviceModel
// Il2CppName: GetXRDeviceModel
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::XRDeviceModel (*)()>(&GlobalNamespace::VRPlatformUtils::GetXRDeviceModel)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::VRPlatformUtils*), "GetXRDeviceModel", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
