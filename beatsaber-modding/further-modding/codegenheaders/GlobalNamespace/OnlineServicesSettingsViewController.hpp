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
  // Forward declaring type: BoolSO
  class BoolSO;
}
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Toggle
  class Toggle;
}
// Forward declaring namespace: HMUI
namespace HMUI {
  // Forward declaring type: ToggleBinder
  class ToggleBinder;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x88
  #pragma pack(push, 1)
  // Autogenerated type: OnlineServicesSettingsViewController
  // [TokenAttribute] Offset: FFFFFFFF
  class OnlineServicesSettingsViewController : public HMUI::ViewController {
    public:
    // private BoolSO _onlineServicesEnabled
    // Size: 0x8
    // Offset: 0x70
    GlobalNamespace::BoolSO* onlineServicesEnabled;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BoolSO*) == 0x8);
    // [SpaceAttribute] Offset: 0xE48EAC
    // private UnityEngine.UI.Toggle _enableOnlineServicesToggle
    // Size: 0x8
    // Offset: 0x78
    UnityEngine::UI::Toggle* enableOnlineServicesToggle;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::Toggle*) == 0x8);
    // private HMUI.ToggleBinder _toggleBinder
    // Size: 0x8
    // Offset: 0x80
    HMUI::ToggleBinder* toggleBinder;
    // Field size check
    static_assert(sizeof(HMUI::ToggleBinder*) == 0x8);
    // Creating value type constructor for type: OnlineServicesSettingsViewController
    OnlineServicesSettingsViewController(GlobalNamespace::BoolSO* onlineServicesEnabled_ = {}, UnityEngine::UI::Toggle* enableOnlineServicesToggle_ = {}, HMUI::ToggleBinder* toggleBinder_ = {}) noexcept : onlineServicesEnabled{onlineServicesEnabled_}, enableOnlineServicesToggle{enableOnlineServicesToggle_}, toggleBinder{toggleBinder_} {}
    // Get instance field reference: private BoolSO _onlineServicesEnabled
    GlobalNamespace::BoolSO*& dyn__onlineServicesEnabled();
    // Get instance field reference: private UnityEngine.UI.Toggle _enableOnlineServicesToggle
    UnityEngine::UI::Toggle*& dyn__enableOnlineServicesToggle();
    // Get instance field reference: private HMUI.ToggleBinder _toggleBinder
    HMUI::ToggleBinder*& dyn__toggleBinder();
    // private System.Void HandleEnableOnlineServicesToggleValueChanged(System.Boolean value)
    // Offset: 0x10337AC
    void HandleEnableOnlineServicesToggleValueChanged(bool value);
    // public System.Void .ctor()
    // Offset: 0x10337B0
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OnlineServicesSettingsViewController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::OnlineServicesSettingsViewController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OnlineServicesSettingsViewController*, creationType>()));
    }
    // protected override System.Void DidActivate(System.Boolean firstActivation, System.Boolean addedToHierarchy, System.Boolean screenSystemEnabling)
    // Offset: 0x10336C4
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::DidActivate(System.Boolean firstActivation, System.Boolean addedToHierarchy, System.Boolean screenSystemEnabling)
    void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);
  }; // OnlineServicesSettingsViewController
  #pragma pack(pop)
  static check_size<sizeof(OnlineServicesSettingsViewController), 128 + sizeof(HMUI::ToggleBinder*)> __GlobalNamespace_OnlineServicesSettingsViewControllerSizeCheck;
  static_assert(sizeof(OnlineServicesSettingsViewController) == 0x88);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OnlineServicesSettingsViewController*, "", "OnlineServicesSettingsViewController");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::OnlineServicesSettingsViewController::HandleEnableOnlineServicesToggleValueChanged
// Il2CppName: HandleEnableOnlineServicesToggleValueChanged
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OnlineServicesSettingsViewController::*)(bool)>(&GlobalNamespace::OnlineServicesSettingsViewController::HandleEnableOnlineServicesToggleValueChanged)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OnlineServicesSettingsViewController*), "HandleEnableOnlineServicesToggleValueChanged", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OnlineServicesSettingsViewController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::OnlineServicesSettingsViewController::DidActivate
// Il2CppName: DidActivate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OnlineServicesSettingsViewController::*)(bool, bool, bool)>(&GlobalNamespace::OnlineServicesSettingsViewController::DidActivate)> {
  static const MethodInfo* get() {
    static auto* firstActivation = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* addedToHierarchy = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* screenSystemEnabling = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OnlineServicesSettingsViewController*), "DidActivate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{firstActivation, addedToHierarchy, screenSystemEnabling});
  }
};
