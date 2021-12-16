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
// Forward declaring namespace: HMUI
namespace HMUI {
  // Forward declaring type: UIKeyboard
  class UIKeyboard;
  // Forward declaring type: InputFieldView
  class InputFieldView;
  // Forward declaring type: InputFieldViewChangeBinder
  class InputFieldViewChangeBinder;
}
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Button
  class Button;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`2<T1, T2>
  template<typename T1, typename T2>
  class Action_2;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0xA0
  #pragma pack(push, 1)
  // Autogenerated type: ServerCodeEntryViewController
  // [TokenAttribute] Offset: FFFFFFFF
  class ServerCodeEntryViewController : public HMUI::ViewController {
    public:
    // private HMUI.UIKeyboard _uiKeyboard
    // Size: 0x8
    // Offset: 0x70
    HMUI::UIKeyboard* uiKeyboard;
    // Field size check
    static_assert(sizeof(HMUI::UIKeyboard*) == 0x8);
    // private HMUI.InputFieldView _codeInputField
    // Size: 0x8
    // Offset: 0x78
    HMUI::InputFieldView* codeInputField;
    // Field size check
    static_assert(sizeof(HMUI::InputFieldView*) == 0x8);
    // private UnityEngine.UI.Button _joinButton
    // Size: 0x8
    // Offset: 0x80
    UnityEngine::UI::Button* joinButton;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::Button*) == 0x8);
    // private UnityEngine.UI.Button _cancelButton
    // Size: 0x8
    // Offset: 0x88
    UnityEngine::UI::Button* cancelButton;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::Button*) == 0x8);
    // private System.Action`2<System.Boolean,System.String> didFinishEvent
    // Size: 0x8
    // Offset: 0x90
    System::Action_2<bool, ::Il2CppString*>* didFinishEvent;
    // Field size check
    static_assert(sizeof(System::Action_2<bool, ::Il2CppString*>*) == 0x8);
    // private readonly HMUI.InputFieldViewChangeBinder _inputFieldViewChangeBinder
    // Size: 0x8
    // Offset: 0x98
    HMUI::InputFieldViewChangeBinder* inputFieldViewChangeBinder;
    // Field size check
    static_assert(sizeof(HMUI::InputFieldViewChangeBinder*) == 0x8);
    // Creating value type constructor for type: ServerCodeEntryViewController
    ServerCodeEntryViewController(HMUI::UIKeyboard* uiKeyboard_ = {}, HMUI::InputFieldView* codeInputField_ = {}, UnityEngine::UI::Button* joinButton_ = {}, UnityEngine::UI::Button* cancelButton_ = {}, System::Action_2<bool, ::Il2CppString*>* didFinishEvent_ = {}, HMUI::InputFieldViewChangeBinder* inputFieldViewChangeBinder_ = {}) noexcept : uiKeyboard{uiKeyboard_}, codeInputField{codeInputField_}, joinButton{joinButton_}, cancelButton{cancelButton_}, didFinishEvent{didFinishEvent_}, inputFieldViewChangeBinder{inputFieldViewChangeBinder_} {}
    // Get instance field reference: private HMUI.UIKeyboard _uiKeyboard
    HMUI::UIKeyboard*& dyn__uiKeyboard();
    // Get instance field reference: private HMUI.InputFieldView _codeInputField
    HMUI::InputFieldView*& dyn__codeInputField();
    // Get instance field reference: private UnityEngine.UI.Button _joinButton
    UnityEngine::UI::Button*& dyn__joinButton();
    // Get instance field reference: private UnityEngine.UI.Button _cancelButton
    UnityEngine::UI::Button*& dyn__cancelButton();
    // Get instance field reference: private System.Action`2<System.Boolean,System.String> didFinishEvent
    System::Action_2<bool, ::Il2CppString*>*& dyn_didFinishEvent();
    // Get instance field reference: private readonly HMUI.InputFieldViewChangeBinder _inputFieldViewChangeBinder
    HMUI::InputFieldViewChangeBinder*& dyn__inputFieldViewChangeBinder();
    // public System.Void add_didFinishEvent(System.Action`2<System.Boolean,System.String> value)
    // Offset: 0x109268C
    void add_didFinishEvent(System::Action_2<bool, ::Il2CppString*>* value);
    // public System.Void remove_didFinishEvent(System.Action`2<System.Boolean,System.String> value)
    // Offset: 0x1092730
    void remove_didFinishEvent(System::Action_2<bool, ::Il2CppString*>* value);
    // private System.Void HandleInputFieldChanged(HMUI.InputFieldView obj)
    // Offset: 0x1092990
    void HandleInputFieldChanged(HMUI::InputFieldView* obj);
    // private System.Void HandleJoinButtonPressed()
    // Offset: 0x1092A00
    void HandleJoinButtonPressed();
    // private System.Void HandleCancelButtonPressed()
    // Offset: 0x1092A74
    void HandleCancelButtonPressed();
    // public System.Void .ctor()
    // Offset: 0x1092ADC
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ServerCodeEntryViewController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::ServerCodeEntryViewController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ServerCodeEntryViewController*, creationType>()));
    }
    // protected override System.Void DidActivate(System.Boolean firstActivation, System.Boolean addedToHierarchy, System.Boolean screenSystemEnabling)
    // Offset: 0x10927D4
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::DidActivate(System.Boolean firstActivation, System.Boolean addedToHierarchy, System.Boolean screenSystemEnabling)
    void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);
    // protected override System.Void DidDeactivate(System.Boolean removedFromHierarchy, System.Boolean screenSystemDisabling)
    // Offset: 0x1092964
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::DidDeactivate(System.Boolean removedFromHierarchy, System.Boolean screenSystemDisabling)
    void DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling);
    // protected override System.Void OnDestroy()
    // Offset: 0x10929CC
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::OnDestroy()
    void OnDestroy();
  }; // ServerCodeEntryViewController
  #pragma pack(pop)
  static check_size<sizeof(ServerCodeEntryViewController), 152 + sizeof(HMUI::InputFieldViewChangeBinder*)> __GlobalNamespace_ServerCodeEntryViewControllerSizeCheck;
  static_assert(sizeof(ServerCodeEntryViewController) == 0xA0);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ServerCodeEntryViewController*, "", "ServerCodeEntryViewController");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::ServerCodeEntryViewController::add_didFinishEvent
// Il2CppName: add_didFinishEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ServerCodeEntryViewController::*)(System::Action_2<bool, ::Il2CppString*>*)>(&GlobalNamespace::ServerCodeEntryViewController::add_didFinishEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Boolean"), ::il2cpp_utils::GetClassFromName("System", "String")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ServerCodeEntryViewController*), "add_didFinishEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ServerCodeEntryViewController::remove_didFinishEvent
// Il2CppName: remove_didFinishEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ServerCodeEntryViewController::*)(System::Action_2<bool, ::Il2CppString*>*)>(&GlobalNamespace::ServerCodeEntryViewController::remove_didFinishEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Boolean"), ::il2cpp_utils::GetClassFromName("System", "String")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ServerCodeEntryViewController*), "remove_didFinishEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ServerCodeEntryViewController::HandleInputFieldChanged
// Il2CppName: HandleInputFieldChanged
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ServerCodeEntryViewController::*)(HMUI::InputFieldView*)>(&GlobalNamespace::ServerCodeEntryViewController::HandleInputFieldChanged)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("HMUI", "InputFieldView")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ServerCodeEntryViewController*), "HandleInputFieldChanged", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ServerCodeEntryViewController::HandleJoinButtonPressed
// Il2CppName: HandleJoinButtonPressed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ServerCodeEntryViewController::*)()>(&GlobalNamespace::ServerCodeEntryViewController::HandleJoinButtonPressed)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ServerCodeEntryViewController*), "HandleJoinButtonPressed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ServerCodeEntryViewController::HandleCancelButtonPressed
// Il2CppName: HandleCancelButtonPressed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ServerCodeEntryViewController::*)()>(&GlobalNamespace::ServerCodeEntryViewController::HandleCancelButtonPressed)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ServerCodeEntryViewController*), "HandleCancelButtonPressed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ServerCodeEntryViewController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::ServerCodeEntryViewController::DidActivate
// Il2CppName: DidActivate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ServerCodeEntryViewController::*)(bool, bool, bool)>(&GlobalNamespace::ServerCodeEntryViewController::DidActivate)> {
  static const MethodInfo* get() {
    static auto* firstActivation = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* addedToHierarchy = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* screenSystemEnabling = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ServerCodeEntryViewController*), "DidActivate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{firstActivation, addedToHierarchy, screenSystemEnabling});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ServerCodeEntryViewController::DidDeactivate
// Il2CppName: DidDeactivate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ServerCodeEntryViewController::*)(bool, bool)>(&GlobalNamespace::ServerCodeEntryViewController::DidDeactivate)> {
  static const MethodInfo* get() {
    static auto* removedFromHierarchy = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* screenSystemDisabling = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ServerCodeEntryViewController*), "DidDeactivate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{removedFromHierarchy, screenSystemDisabling});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ServerCodeEntryViewController::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ServerCodeEntryViewController::*)()>(&GlobalNamespace::ServerCodeEntryViewController::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ServerCodeEntryViewController*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
