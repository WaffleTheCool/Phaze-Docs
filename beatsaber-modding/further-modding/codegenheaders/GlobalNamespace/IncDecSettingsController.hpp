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
  // Forward declaring type: StepValuePicker
  class StepValuePicker;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: IncDecSettingsController
  // [TokenAttribute] Offset: FFFFFFFF
  class IncDecSettingsController : public UnityEngine::MonoBehaviour {
    public:
    // private StepValuePicker _stepValuePicker
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::StepValuePicker* stepValuePicker;
    // Field size check
    static_assert(sizeof(GlobalNamespace::StepValuePicker*) == 0x8);
    // Creating value type constructor for type: IncDecSettingsController
    IncDecSettingsController(GlobalNamespace::StepValuePicker* stepValuePicker_ = {}) noexcept : stepValuePicker{stepValuePicker_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get instance field reference: private StepValuePicker _stepValuePicker
    GlobalNamespace::StepValuePicker*& dyn__stepValuePicker();
    // protected System.Void set_enableDec(System.Boolean value)
    // Offset: 0x1188D94
    void set_enableDec(bool value);
    // protected System.Void set_enableInc(System.Boolean value)
    // Offset: 0x1188DB4
    void set_enableInc(bool value);
    // protected System.Void set_text(System.String value)
    // Offset: 0x1188DD4
    void set_text(::Il2CppString* value);
    // protected System.Void Awake()
    // Offset: 0x1188DF0
    void Awake();
    // protected System.Void OnDestroy()
    // Offset: 0x1188EB4
    void OnDestroy();
    // protected System.Void IncButtonPressed()
    // Offset: 0xFFFFFFFF
    void IncButtonPressed();
    // protected System.Void DecButtonPressed()
    // Offset: 0xFFFFFFFF
    void DecButtonPressed();
    // protected System.Void .ctor()
    // Offset: 0x1188FBC
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IncDecSettingsController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::IncDecSettingsController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IncDecSettingsController*, creationType>()));
    }
  }; // IncDecSettingsController
  #pragma pack(pop)
  static check_size<sizeof(IncDecSettingsController), 24 + sizeof(GlobalNamespace::StepValuePicker*)> __GlobalNamespace_IncDecSettingsControllerSizeCheck;
  static_assert(sizeof(IncDecSettingsController) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::IncDecSettingsController*, "", "IncDecSettingsController");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::IncDecSettingsController::set_enableDec
// Il2CppName: set_enableDec
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::IncDecSettingsController::*)(bool)>(&GlobalNamespace::IncDecSettingsController::set_enableDec)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::IncDecSettingsController*), "set_enableDec", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::IncDecSettingsController::set_enableInc
// Il2CppName: set_enableInc
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::IncDecSettingsController::*)(bool)>(&GlobalNamespace::IncDecSettingsController::set_enableInc)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::IncDecSettingsController*), "set_enableInc", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::IncDecSettingsController::set_text
// Il2CppName: set_text
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::IncDecSettingsController::*)(::Il2CppString*)>(&GlobalNamespace::IncDecSettingsController::set_text)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::IncDecSettingsController*), "set_text", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::IncDecSettingsController::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::IncDecSettingsController::*)()>(&GlobalNamespace::IncDecSettingsController::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::IncDecSettingsController*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::IncDecSettingsController::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::IncDecSettingsController::*)()>(&GlobalNamespace::IncDecSettingsController::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::IncDecSettingsController*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::IncDecSettingsController::IncButtonPressed
// Il2CppName: IncButtonPressed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::IncDecSettingsController::*)()>(&GlobalNamespace::IncDecSettingsController::IncButtonPressed)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::IncDecSettingsController*), "IncButtonPressed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::IncDecSettingsController::DecButtonPressed
// Il2CppName: DecButtonPressed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::IncDecSettingsController::*)()>(&GlobalNamespace::IncDecSettingsController::DecButtonPressed)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::IncDecSettingsController*), "DecButtonPressed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::IncDecSettingsController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
