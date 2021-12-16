// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: OVRPlugin
#include "GlobalNamespace/OVRPlugin.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Version
  class Version;
  // Forward declaring type: IntPtr
  struct IntPtr;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: OVRPlugin/OVRP_0_1_1
  // [TokenAttribute] Offset: FFFFFFFF
  class OVRPlugin::OVRP_0_1_1 : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: OVRP_0_1_1
    OVRP_0_1_1() noexcept {}
    // Get static field: static public readonly System.Version version
    static System::Version* _get_version();
    // Set static field: static public readonly System.Version version
    static void _set_version(System::Version* value);
    // static private System.Void .cctor()
    // Offset: 0x1631BA8
    static void _cctor();
    // static public OVRPlugin/Bool ovrp_SetOverlayQuad2(OVRPlugin/Bool onTop, OVRPlugin/Bool headLocked, System.IntPtr texture, System.IntPtr device, OVRPlugin/Posef pose, OVRPlugin/Vector3f scale)
    // Offset: 0x1631AC0
    static GlobalNamespace::OVRPlugin::Bool ovrp_SetOverlayQuad2(GlobalNamespace::OVRPlugin::Bool onTop, GlobalNamespace::OVRPlugin::Bool headLocked, System::IntPtr texture, System::IntPtr device, GlobalNamespace::OVRPlugin::Posef pose, GlobalNamespace::OVRPlugin::Vector3f scale);
  }; // OVRPlugin/OVRP_0_1_1
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRPlugin::OVRP_0_1_1*, "", "OVRPlugin/OVRP_0_1_1");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::OVRP_0_1_1::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&GlobalNamespace::OVRPlugin::OVRP_0_1_1::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::OVRP_0_1_1*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::OVRP_0_1_1::ovrp_SetOverlayQuad2
// Il2CppName: ovrp_SetOverlayQuad2
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::OVRPlugin::Bool (*)(GlobalNamespace::OVRPlugin::Bool, GlobalNamespace::OVRPlugin::Bool, System::IntPtr, System::IntPtr, GlobalNamespace::OVRPlugin::Posef, GlobalNamespace::OVRPlugin::Vector3f)>(&GlobalNamespace::OVRPlugin::OVRP_0_1_1::ovrp_SetOverlayQuad2)> {
  static const MethodInfo* get() {
    static auto* onTop = &::il2cpp_utils::GetClassFromName("", "OVRPlugin/Bool")->byval_arg;
    static auto* headLocked = &::il2cpp_utils::GetClassFromName("", "OVRPlugin/Bool")->byval_arg;
    static auto* texture = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* device = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* pose = &::il2cpp_utils::GetClassFromName("", "OVRPlugin/Posef")->byval_arg;
    static auto* scale = &::il2cpp_utils::GetClassFromName("", "OVRPlugin/Vector3f")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::OVRP_0_1_1*), "ovrp_SetOverlayQuad2", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{onTop, headLocked, texture, device, pose, scale});
  }
};
