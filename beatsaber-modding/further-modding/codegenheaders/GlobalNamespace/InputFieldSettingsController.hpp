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
// Forward declaring namespace: HMUI
namespace HMUI {
  // Forward declaring type: InputFieldView
  class InputFieldView;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: StringSO
  class StringSO;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: InputFieldSettingsController
  // [TokenAttribute] Offset: FFFFFFFF
  class InputFieldSettingsController : public UnityEngine::MonoBehaviour {
    public:
    // private HMUI.InputFieldView _inputFieldView
    // Size: 0x8
    // Offset: 0x18
    HMUI::InputFieldView* inputFieldView;
    // Field size check
    static_assert(sizeof(HMUI::InputFieldView*) == 0x8);
    // protected StringSO _settingsValue
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::StringSO* settingsValue;
    // Field size check
    static_assert(sizeof(GlobalNamespace::StringSO*) == 0x8);
    // Creating value type constructor for type: InputFieldSettingsController
    InputFieldSettingsController(HMUI::InputFieldView* inputFieldView_ = {}, GlobalNamespace::StringSO* settingsValue_ = {}) noexcept : inputFieldView{inputFieldView_}, settingsValue{settingsValue_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get instance field reference: private HMUI.InputFieldView _inputFieldView
    HMUI::InputFieldView*& dyn__inputFieldView();
    // Get instance field reference: protected StringSO _settingsValue
    GlobalNamespace::StringSO*& dyn__settingsValue();
    // protected System.Void Awake()
    // Offset: 0x1188FC4
    void Awake();
    // protected System.Void OnDestroy()
    // Offset: 0x1189064
    void OnDestroy();
    // protected System.Void OnEnable()
    // Offset: 0x1189104
    void OnEnable();
    // protected System.Void HandleInputFieldDidChange(HMUI.InputFieldView inputFieldView)
    // Offset: 0x1189160
    void HandleInputFieldDidChange(HMUI::InputFieldView* inputFieldView);
    // public System.Void .ctor()
    // Offset: 0x11891CC
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static InputFieldSettingsController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::InputFieldSettingsController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<InputFieldSettingsController*, creationType>()));
    }
  }; // InputFieldSettingsController
  #pragma pack(pop)
  static check_size<sizeof(InputFieldSettingsController), 32 + sizeof(GlobalNamespace::StringSO*)> __GlobalNamespace_InputFieldSettingsControllerSizeCheck;
  static_assert(sizeof(InputFieldSettingsController) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::InputFieldSettingsController*, "", "InputFieldSettingsController");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::InputFieldSettingsController::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::InputFieldSettingsController::*)()>(&GlobalNamespace::InputFieldSettingsController::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::InputFieldSettingsController*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::InputFieldSettingsController::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::InputFieldSettingsController::*)()>(&GlobalNamespace::InputFieldSettingsController::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::InputFieldSettingsController*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::InputFieldSettingsController::OnEnable
// Il2CppName: OnEnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::InputFieldSettingsController::*)()>(&GlobalNamespace::InputFieldSettingsController::OnEnable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::InputFieldSettingsController*), "OnEnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::InputFieldSettingsController::HandleInputFieldDidChange
// Il2CppName: HandleInputFieldDidChange
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::InputFieldSettingsController::*)(HMUI::InputFieldView*)>(&GlobalNamespace::InputFieldSettingsController::HandleInputFieldDidChange)> {
  static const MethodInfo* get() {
    static auto* inputFieldView = &::il2cpp_utils::GetClassFromName("HMUI", "InputFieldView")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::InputFieldSettingsController*), "HandleInputFieldDidChange", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{inputFieldView});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::InputFieldSettingsController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
