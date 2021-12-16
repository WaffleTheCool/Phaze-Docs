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
  // Autogenerated type: OVRPlugin/OVRP_1_6_0
  // [TokenAttribute] Offset: FFFFFFFF
  class OVRPlugin::OVRP_1_6_0 : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: OVRP_1_6_0
    OVRP_1_6_0() noexcept {}
    // Get static field: static public readonly System.Version version
    static System::Version* _get_version();
    // Set static field: static public readonly System.Version version
    static void _set_version(System::Version* value);
    // static private System.Void .cctor()
    // Offset: 0x1639134
    static void _cctor();
    // static public OVRPlugin/Bool ovrp_GetTrackingIPDEnabled()
    // Offset: 0x1638C4C
    static GlobalNamespace::OVRPlugin::Bool ovrp_GetTrackingIPDEnabled();
    // static public OVRPlugin/Bool ovrp_SetTrackingIPDEnabled(OVRPlugin/Bool value)
    // Offset: 0x1638CC0
    static GlobalNamespace::OVRPlugin::Bool ovrp_SetTrackingIPDEnabled(GlobalNamespace::OVRPlugin::Bool value);
    // static public OVRPlugin/HapticsDesc ovrp_GetControllerHapticsDesc(System.UInt32 controllerMask)
    // Offset: 0x1638D40
    static GlobalNamespace::OVRPlugin::HapticsDesc ovrp_GetControllerHapticsDesc(uint controllerMask);
    // static public OVRPlugin/HapticsState ovrp_GetControllerHapticsState(System.UInt32 controllerMask)
    // Offset: 0x1638DD0
    static GlobalNamespace::OVRPlugin::HapticsState ovrp_GetControllerHapticsState(uint controllerMask);
    // static public OVRPlugin/Bool ovrp_SetControllerHaptics(System.UInt32 controllerMask, OVRPlugin/HapticsBuffer hapticsBuffer)
    // Offset: 0x1638E50
    static GlobalNamespace::OVRPlugin::Bool ovrp_SetControllerHaptics(uint controllerMask, GlobalNamespace::OVRPlugin::HapticsBuffer hapticsBuffer);
    // static public OVRPlugin/Bool ovrp_SetOverlayQuad3(System.UInt32 flags, System.IntPtr textureLeft, System.IntPtr textureRight, System.IntPtr device, OVRPlugin/Posef pose, OVRPlugin/Vector3f scale, System.Int32 layerIndex)
    // Offset: 0x1638EE8
    static GlobalNamespace::OVRPlugin::Bool ovrp_SetOverlayQuad3(uint flags, System::IntPtr textureLeft, System::IntPtr textureRight, System::IntPtr device, GlobalNamespace::OVRPlugin::Posef pose, GlobalNamespace::OVRPlugin::Vector3f scale, int layerIndex);
    // static public System.Single ovrp_GetEyeRecommendedResolutionScale()
    // Offset: 0x1638FE0
    static float ovrp_GetEyeRecommendedResolutionScale();
    // static public System.Single ovrp_GetAppCpuStartToGpuEndTime()
    // Offset: 0x1639050
    static float ovrp_GetAppCpuStartToGpuEndTime();
    // static public System.Int32 ovrp_GetSystemRecommendedMSAALevel()
    // Offset: 0x16390C0
    static int ovrp_GetSystemRecommendedMSAALevel();
  }; // OVRPlugin/OVRP_1_6_0
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRPlugin::OVRP_1_6_0*, "", "OVRPlugin/OVRP_1_6_0");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::OVRP_1_6_0::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&GlobalNamespace::OVRPlugin::OVRP_1_6_0::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::OVRP_1_6_0*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::OVRP_1_6_0::ovrp_GetTrackingIPDEnabled
// Il2CppName: ovrp_GetTrackingIPDEnabled
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::OVRPlugin::Bool (*)()>(&GlobalNamespace::OVRPlugin::OVRP_1_6_0::ovrp_GetTrackingIPDEnabled)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::OVRP_1_6_0*), "ovrp_GetTrackingIPDEnabled", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::OVRP_1_6_0::ovrp_SetTrackingIPDEnabled
// Il2CppName: ovrp_SetTrackingIPDEnabled
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::OVRPlugin::Bool (*)(GlobalNamespace::OVRPlugin::Bool)>(&GlobalNamespace::OVRPlugin::OVRP_1_6_0::ovrp_SetTrackingIPDEnabled)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("", "OVRPlugin/Bool")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::OVRP_1_6_0*), "ovrp_SetTrackingIPDEnabled", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::OVRP_1_6_0::ovrp_GetControllerHapticsDesc
// Il2CppName: ovrp_GetControllerHapticsDesc
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::OVRPlugin::HapticsDesc (*)(uint)>(&GlobalNamespace::OVRPlugin::OVRP_1_6_0::ovrp_GetControllerHapticsDesc)> {
  static const MethodInfo* get() {
    static auto* controllerMask = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::OVRP_1_6_0*), "ovrp_GetControllerHapticsDesc", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{controllerMask});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::OVRP_1_6_0::ovrp_GetControllerHapticsState
// Il2CppName: ovrp_GetControllerHapticsState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::OVRPlugin::HapticsState (*)(uint)>(&GlobalNamespace::OVRPlugin::OVRP_1_6_0::ovrp_GetControllerHapticsState)> {
  static const MethodInfo* get() {
    static auto* controllerMask = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::OVRP_1_6_0*), "ovrp_GetControllerHapticsState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{controllerMask});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::OVRP_1_6_0::ovrp_SetControllerHaptics
// Il2CppName: ovrp_SetControllerHaptics
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::OVRPlugin::Bool (*)(uint, GlobalNamespace::OVRPlugin::HapticsBuffer)>(&GlobalNamespace::OVRPlugin::OVRP_1_6_0::ovrp_SetControllerHaptics)> {
  static const MethodInfo* get() {
    static auto* controllerMask = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* hapticsBuffer = &::il2cpp_utils::GetClassFromName("", "OVRPlugin/HapticsBuffer")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::OVRP_1_6_0*), "ovrp_SetControllerHaptics", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{controllerMask, hapticsBuffer});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::OVRP_1_6_0::ovrp_SetOverlayQuad3
// Il2CppName: ovrp_SetOverlayQuad3
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::OVRPlugin::Bool (*)(uint, System::IntPtr, System::IntPtr, System::IntPtr, GlobalNamespace::OVRPlugin::Posef, GlobalNamespace::OVRPlugin::Vector3f, int)>(&GlobalNamespace::OVRPlugin::OVRP_1_6_0::ovrp_SetOverlayQuad3)> {
  static const MethodInfo* get() {
    static auto* flags = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* textureLeft = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* textureRight = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* device = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* pose = &::il2cpp_utils::GetClassFromName("", "OVRPlugin/Posef")->byval_arg;
    static auto* scale = &::il2cpp_utils::GetClassFromName("", "OVRPlugin/Vector3f")->byval_arg;
    static auto* layerIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::OVRP_1_6_0*), "ovrp_SetOverlayQuad3", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{flags, textureLeft, textureRight, device, pose, scale, layerIndex});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::OVRP_1_6_0::ovrp_GetEyeRecommendedResolutionScale
// Il2CppName: ovrp_GetEyeRecommendedResolutionScale
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)()>(&GlobalNamespace::OVRPlugin::OVRP_1_6_0::ovrp_GetEyeRecommendedResolutionScale)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::OVRP_1_6_0*), "ovrp_GetEyeRecommendedResolutionScale", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::OVRP_1_6_0::ovrp_GetAppCpuStartToGpuEndTime
// Il2CppName: ovrp_GetAppCpuStartToGpuEndTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)()>(&GlobalNamespace::OVRPlugin::OVRP_1_6_0::ovrp_GetAppCpuStartToGpuEndTime)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::OVRP_1_6_0*), "ovrp_GetAppCpuStartToGpuEndTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::OVRP_1_6_0::ovrp_GetSystemRecommendedMSAALevel
// Il2CppName: ovrp_GetSystemRecommendedMSAALevel
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)()>(&GlobalNamespace::OVRPlugin::OVRP_1_6_0::ovrp_GetSystemRecommendedMSAALevel)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::OVRP_1_6_0*), "ovrp_GetSystemRecommendedMSAALevel", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
