// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: OVRInput
#include "GlobalNamespace/OVRInput.hpp"
// Including type: OVRInput/OVRControllerBase
#include "GlobalNamespace/OVRInput_OVRControllerBase.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x101
  #pragma pack(push, 1)
  // Autogenerated type: OVRInput/OVRControllerRHand
  // [TokenAttribute] Offset: FFFFFFFF
  class OVRInput::OVRControllerRHand : public GlobalNamespace::OVRInput::OVRControllerBase {
    public:
    // Creating value type constructor for type: OVRControllerRHand
    OVRControllerRHand() noexcept {}
    // public System.Void .ctor()
    // Offset: 0x1540618
    // Implemented from: OVRInput/OVRControllerBase
    // Base method: System.Void OVRControllerBase::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OVRInput::OVRControllerRHand* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::OVRInput::OVRControllerRHand::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OVRInput::OVRControllerRHand*, creationType>()));
    }
    // public override System.Void ConfigureButtonMap()
    // Offset: 0x1547624
    // Implemented from: OVRInput/OVRControllerBase
    // Base method: System.Void OVRControllerBase::ConfigureButtonMap()
    void ConfigureButtonMap();
    // public override System.Void ConfigureTouchMap()
    // Offset: 0x15477CC
    // Implemented from: OVRInput/OVRControllerBase
    // Base method: System.Void OVRControllerBase::ConfigureTouchMap()
    void ConfigureTouchMap();
    // public override System.Void ConfigureNearTouchMap()
    // Offset: 0x154787C
    // Implemented from: OVRInput/OVRControllerBase
    // Base method: System.Void OVRControllerBase::ConfigureNearTouchMap()
    void ConfigureNearTouchMap();
    // public override System.Void ConfigureAxis1DMap()
    // Offset: 0x15478CC
    // Implemented from: OVRInput/OVRControllerBase
    // Base method: System.Void OVRControllerBase::ConfigureAxis1DMap()
    void ConfigureAxis1DMap();
    // public override System.Void ConfigureAxis2DMap()
    // Offset: 0x154791C
    // Implemented from: OVRInput/OVRControllerBase
    // Base method: System.Void OVRControllerBase::ConfigureAxis2DMap()
    void ConfigureAxis2DMap();
    // public override System.Byte GetBatteryPercentRemaining()
    // Offset: 0x154796C
    // Implemented from: OVRInput/OVRControllerBase
    // Base method: System.Byte OVRControllerBase::GetBatteryPercentRemaining()
    uint8_t GetBatteryPercentRemaining();
  }; // OVRInput/OVRControllerRHand
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRInput::OVRControllerRHand*, "", "OVRInput/OVRControllerRHand");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::OVRInput::OVRControllerRHand::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::OVRInput::OVRControllerRHand::ConfigureButtonMap
// Il2CppName: ConfigureButtonMap
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRInput::OVRControllerRHand::*)()>(&GlobalNamespace::OVRInput::OVRControllerRHand::ConfigureButtonMap)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRInput::OVRControllerRHand*), "ConfigureButtonMap", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRInput::OVRControllerRHand::ConfigureTouchMap
// Il2CppName: ConfigureTouchMap
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRInput::OVRControllerRHand::*)()>(&GlobalNamespace::OVRInput::OVRControllerRHand::ConfigureTouchMap)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRInput::OVRControllerRHand*), "ConfigureTouchMap", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRInput::OVRControllerRHand::ConfigureNearTouchMap
// Il2CppName: ConfigureNearTouchMap
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRInput::OVRControllerRHand::*)()>(&GlobalNamespace::OVRInput::OVRControllerRHand::ConfigureNearTouchMap)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRInput::OVRControllerRHand*), "ConfigureNearTouchMap", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRInput::OVRControllerRHand::ConfigureAxis1DMap
// Il2CppName: ConfigureAxis1DMap
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRInput::OVRControllerRHand::*)()>(&GlobalNamespace::OVRInput::OVRControllerRHand::ConfigureAxis1DMap)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRInput::OVRControllerRHand*), "ConfigureAxis1DMap", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRInput::OVRControllerRHand::ConfigureAxis2DMap
// Il2CppName: ConfigureAxis2DMap
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRInput::OVRControllerRHand::*)()>(&GlobalNamespace::OVRInput::OVRControllerRHand::ConfigureAxis2DMap)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRInput::OVRControllerRHand*), "ConfigureAxis2DMap", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRInput::OVRControllerRHand::GetBatteryPercentRemaining
// Il2CppName: GetBatteryPercentRemaining
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint8_t (GlobalNamespace::OVRInput::OVRControllerRHand::*)()>(&GlobalNamespace::OVRInput::OVRControllerRHand::GetBatteryPercentRemaining)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRInput::OVRControllerRHand*), "GetBatteryPercentRemaining", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
