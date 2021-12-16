// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: HMUI.ButtonSpriteSwap
#include "HMUI/ButtonSpriteSwap.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: HMUI
namespace HMUI {
  // Size: 0x4C
  #pragma pack(push, 1)
  // Autogenerated type: HMUI.ButtonSpriteSwapToggle
  // [TokenAttribute] Offset: FFFFFFFF
  class ButtonSpriteSwapToggle : public HMUI::ButtonSpriteSwap {
    public:
    // private System.Boolean _resetToggleOnEnable
    // Size: 0x1
    // Offset: 0x49
    bool resetToggleOnEnable;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean _ignoreHighlight
    // Size: 0x1
    // Offset: 0x4A
    bool ignoreHighlight;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean _isToggled
    // Size: 0x1
    // Offset: 0x4B
    bool isToggled;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: ButtonSpriteSwapToggle
    ButtonSpriteSwapToggle(bool resetToggleOnEnable_ = {}, bool ignoreHighlight_ = {}, bool isToggled_ = {}) noexcept : resetToggleOnEnable{resetToggleOnEnable_}, ignoreHighlight{ignoreHighlight_}, isToggled{isToggled_} {}
    // Get instance field reference: private System.Boolean _resetToggleOnEnable
    bool& dyn__resetToggleOnEnable();
    // Get instance field reference: private System.Boolean _ignoreHighlight
    bool& dyn__ignoreHighlight();
    // Get instance field reference: private System.Boolean _isToggled
    bool& dyn__isToggled();
    // public System.Void .ctor()
    // Offset: 0x136C9D4
    // Implemented from: HMUI.ButtonSpriteSwap
    // Base method: System.Void ButtonSpriteSwap::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ButtonSpriteSwapToggle* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("HMUI::ButtonSpriteSwapToggle::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ButtonSpriteSwapToggle*, creationType>()));
    }
    // protected override System.Void OnEnable()
    // Offset: 0x136C850
    // Implemented from: HMUI.ButtonSpriteSwap
    // Base method: System.Void ButtonSpriteSwap::OnEnable()
    void OnEnable();
    // protected override System.Void HandleButtonSelectionStateDidChange(HMUI.NoTransitionsButton/HMUI.SelectionState state)
    // Offset: 0x136C880
    // Implemented from: HMUI.ButtonSpriteSwap
    // Base method: System.Void ButtonSpriteSwap::HandleButtonSelectionStateDidChange(HMUI.NoTransitionsButton/HMUI.SelectionState state)
    void HandleButtonSelectionStateDidChange(HMUI::NoTransitionsButton::SelectionState state);
  }; // HMUI.ButtonSpriteSwapToggle
  #pragma pack(pop)
  static check_size<sizeof(ButtonSpriteSwapToggle), 75 + sizeof(bool)> __HMUI_ButtonSpriteSwapToggleSizeCheck;
  static_assert(sizeof(ButtonSpriteSwapToggle) == 0x4C);
}
DEFINE_IL2CPP_ARG_TYPE(HMUI::ButtonSpriteSwapToggle*, "HMUI", "ButtonSpriteSwapToggle");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: HMUI::ButtonSpriteSwapToggle::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: HMUI::ButtonSpriteSwapToggle::OnEnable
// Il2CppName: OnEnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::ButtonSpriteSwapToggle::*)()>(&HMUI::ButtonSpriteSwapToggle::OnEnable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::ButtonSpriteSwapToggle*), "OnEnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HMUI::ButtonSpriteSwapToggle::HandleButtonSelectionStateDidChange
// Il2CppName: HandleButtonSelectionStateDidChange
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::ButtonSpriteSwapToggle::*)(HMUI::NoTransitionsButton::SelectionState)>(&HMUI::ButtonSpriteSwapToggle::HandleButtonSelectionStateDidChange)> {
  static const MethodInfo* get() {
    static auto* state = &::il2cpp_utils::GetClassFromName("HMUI", "NoTransitionsButton/SelectionState")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::ButtonSpriteSwapToggle*), "HandleButtonSelectionStateDidChange", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{state});
  }
};
