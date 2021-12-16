// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: HMUI.ViewController
#include "HMUI/ViewController.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: Vector3SO
  class Vector3SO;
}
// Forward declaring namespace: HMUI
namespace HMUI {
  // Forward declaring type: RangeValuesTextSlider
  class RangeValuesTextSlider;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0xB0
  #pragma pack(push, 1)
  // Autogenerated type: ControllersTransformSettingsViewController
  // [TokenAttribute] Offset: FFFFFFFF
  class ControllersTransformSettingsViewController : public HMUI::ViewController {
    public:
    // private Vector3SO _controllerPosition
    // Size: 0x8
    // Offset: 0x70
    GlobalNamespace::Vector3SO* controllerPosition;
    // Field size check
    static_assert(sizeof(GlobalNamespace::Vector3SO*) == 0x8);
    // private Vector3SO _controllerRotation
    // Size: 0x8
    // Offset: 0x78
    GlobalNamespace::Vector3SO* controllerRotation;
    // Field size check
    static_assert(sizeof(GlobalNamespace::Vector3SO*) == 0x8);
    // [SpaceAttribute] Offset: 0xE46F8C
    // private HMUI.RangeValuesTextSlider _posXSlider
    // Size: 0x8
    // Offset: 0x80
    HMUI::RangeValuesTextSlider* posXSlider;
    // Field size check
    static_assert(sizeof(HMUI::RangeValuesTextSlider*) == 0x8);
    // private HMUI.RangeValuesTextSlider _posYSlider
    // Size: 0x8
    // Offset: 0x88
    HMUI::RangeValuesTextSlider* posYSlider;
    // Field size check
    static_assert(sizeof(HMUI::RangeValuesTextSlider*) == 0x8);
    // private HMUI.RangeValuesTextSlider _posZSlider
    // Size: 0x8
    // Offset: 0x90
    HMUI::RangeValuesTextSlider* posZSlider;
    // Field size check
    static_assert(sizeof(HMUI::RangeValuesTextSlider*) == 0x8);
    // private HMUI.RangeValuesTextSlider _rotXSlider
    // Size: 0x8
    // Offset: 0x98
    HMUI::RangeValuesTextSlider* rotXSlider;
    // Field size check
    static_assert(sizeof(HMUI::RangeValuesTextSlider*) == 0x8);
    // private HMUI.RangeValuesTextSlider _rotYSlider
    // Size: 0x8
    // Offset: 0xA0
    HMUI::RangeValuesTextSlider* rotYSlider;
    // Field size check
    static_assert(sizeof(HMUI::RangeValuesTextSlider*) == 0x8);
    // private HMUI.RangeValuesTextSlider _rotZSlider
    // Size: 0x8
    // Offset: 0xA8
    HMUI::RangeValuesTextSlider* rotZSlider;
    // Field size check
    static_assert(sizeof(HMUI::RangeValuesTextSlider*) == 0x8);
    // Creating value type constructor for type: ControllersTransformSettingsViewController
    ControllersTransformSettingsViewController(GlobalNamespace::Vector3SO* controllerPosition_ = {}, GlobalNamespace::Vector3SO* controllerRotation_ = {}, HMUI::RangeValuesTextSlider* posXSlider_ = {}, HMUI::RangeValuesTextSlider* posYSlider_ = {}, HMUI::RangeValuesTextSlider* posZSlider_ = {}, HMUI::RangeValuesTextSlider* rotXSlider_ = {}, HMUI::RangeValuesTextSlider* rotYSlider_ = {}, HMUI::RangeValuesTextSlider* rotZSlider_ = {}) noexcept : controllerPosition{controllerPosition_}, controllerRotation{controllerRotation_}, posXSlider{posXSlider_}, posYSlider{posYSlider_}, posZSlider{posZSlider_}, rotXSlider{rotXSlider_}, rotYSlider{rotYSlider_}, rotZSlider{rotZSlider_} {}
    // static field const value: static private System.Single kPositionStep
    static constexpr const float kPositionStep = 0.1;
    // Get static field: static private System.Single kPositionStep
    static float _get_kPositionStep();
    // Set static field: static private System.Single kPositionStep
    static void _set_kPositionStep(float value);
    // static field const value: static private System.Single kPositionMul
    static constexpr const float kPositionMul = 100;
    // Get static field: static private System.Single kPositionMul
    static float _get_kPositionMul();
    // Set static field: static private System.Single kPositionMul
    static void _set_kPositionMul(float value);
    // static field const value: static private System.Single kRotationStep
    static constexpr const float kRotationStep = 1;
    // Get static field: static private System.Single kRotationStep
    static float _get_kRotationStep();
    // Set static field: static private System.Single kRotationStep
    static void _set_kRotationStep(float value);
    // Get instance field reference: private Vector3SO _controllerPosition
    GlobalNamespace::Vector3SO*& dyn__controllerPosition();
    // Get instance field reference: private Vector3SO _controllerRotation
    GlobalNamespace::Vector3SO*& dyn__controllerRotation();
    // Get instance field reference: private HMUI.RangeValuesTextSlider _posXSlider
    HMUI::RangeValuesTextSlider*& dyn__posXSlider();
    // Get instance field reference: private HMUI.RangeValuesTextSlider _posYSlider
    HMUI::RangeValuesTextSlider*& dyn__posYSlider();
    // Get instance field reference: private HMUI.RangeValuesTextSlider _posZSlider
    HMUI::RangeValuesTextSlider*& dyn__posZSlider();
    // Get instance field reference: private HMUI.RangeValuesTextSlider _rotXSlider
    HMUI::RangeValuesTextSlider*& dyn__rotXSlider();
    // Get instance field reference: private HMUI.RangeValuesTextSlider _rotYSlider
    HMUI::RangeValuesTextSlider*& dyn__rotYSlider();
    // Get instance field reference: private HMUI.RangeValuesTextSlider _rotZSlider
    HMUI::RangeValuesTextSlider*& dyn__rotZSlider();
    // private System.Void HandlePositionSliderValueDidChange(HMUI.RangeValuesTextSlider slider, System.Single value)
    // Offset: 0x10E6E4C
    void HandlePositionSliderValueDidChange(HMUI::RangeValuesTextSlider* slider, float value);
    // private System.Void HandleRotationSliderValueDidChange(HMUI.RangeValuesTextSlider slider, System.Single value)
    // Offset: 0x10E6F28
    void HandleRotationSliderValueDidChange(HMUI::RangeValuesTextSlider* slider, float value);
    // public System.Void .ctor()
    // Offset: 0x10E6FF8
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ControllersTransformSettingsViewController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::ControllersTransformSettingsViewController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ControllersTransformSettingsViewController*, creationType>()));
    }
    // protected override System.Void DidActivate(System.Boolean firstActivation, System.Boolean addedToHierarchy, System.Boolean screenSystemEnabling)
    // Offset: 0x10E66B0
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::DidActivate(System.Boolean firstActivation, System.Boolean addedToHierarchy, System.Boolean screenSystemEnabling)
    void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);
    // protected override System.Void OnDestroy()
    // Offset: 0x10E6B20
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::OnDestroy()
    void OnDestroy();
  }; // ControllersTransformSettingsViewController
  #pragma pack(pop)
  static check_size<sizeof(ControllersTransformSettingsViewController), 168 + sizeof(HMUI::RangeValuesTextSlider*)> __GlobalNamespace_ControllersTransformSettingsViewControllerSizeCheck;
  static_assert(sizeof(ControllersTransformSettingsViewController) == 0xB0);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ControllersTransformSettingsViewController*, "", "ControllersTransformSettingsViewController");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::ControllersTransformSettingsViewController::HandlePositionSliderValueDidChange
// Il2CppName: HandlePositionSliderValueDidChange
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ControllersTransformSettingsViewController::*)(HMUI::RangeValuesTextSlider*, float)>(&GlobalNamespace::ControllersTransformSettingsViewController::HandlePositionSliderValueDidChange)> {
  static const MethodInfo* get() {
    static auto* slider = &::il2cpp_utils::GetClassFromName("HMUI", "RangeValuesTextSlider")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ControllersTransformSettingsViewController*), "HandlePositionSliderValueDidChange", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{slider, value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ControllersTransformSettingsViewController::HandleRotationSliderValueDidChange
// Il2CppName: HandleRotationSliderValueDidChange
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ControllersTransformSettingsViewController::*)(HMUI::RangeValuesTextSlider*, float)>(&GlobalNamespace::ControllersTransformSettingsViewController::HandleRotationSliderValueDidChange)> {
  static const MethodInfo* get() {
    static auto* slider = &::il2cpp_utils::GetClassFromName("HMUI", "RangeValuesTextSlider")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ControllersTransformSettingsViewController*), "HandleRotationSliderValueDidChange", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{slider, value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ControllersTransformSettingsViewController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::ControllersTransformSettingsViewController::DidActivate
// Il2CppName: DidActivate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ControllersTransformSettingsViewController::*)(bool, bool, bool)>(&GlobalNamespace::ControllersTransformSettingsViewController::DidActivate)> {
  static const MethodInfo* get() {
    static auto* firstActivation = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* addedToHierarchy = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* screenSystemEnabling = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ControllersTransformSettingsViewController*), "DidActivate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{firstActivation, addedToHierarchy, screenSystemEnabling});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ControllersTransformSettingsViewController::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ControllersTransformSettingsViewController::*)()>(&GlobalNamespace::ControllersTransformSettingsViewController::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ControllersTransformSettingsViewController*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
