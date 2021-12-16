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
  // Forward declaring type: InputFieldView
  class InputFieldView;
  // Forward declaring type: UIKeyboard
  class UIKeyboard;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`2<T1, T2>
  template<typename T1, typename T2>
  class Action_2;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: INetworkPlayer
  class INetworkPlayer;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x90
  #pragma pack(push, 1)
  // Autogenerated type: ServerPasswordEntryViewController
  // [TokenAttribute] Offset: FFFFFFFF
  class ServerPasswordEntryViewController : public HMUI::ViewController {
    public:
    // [HeaderAttribute] Offset: 0xE48C8C
    // private HMUI.InputFieldView _passwordInput
    // Size: 0x8
    // Offset: 0x70
    HMUI::InputFieldView* passwordInput;
    // Field size check
    static_assert(sizeof(HMUI::InputFieldView*) == 0x8);
    // private HMUI.UIKeyboard _uiKeyboard
    // Size: 0x8
    // Offset: 0x78
    HMUI::UIKeyboard* uiKeyboard;
    // Field size check
    static_assert(sizeof(HMUI::UIKeyboard*) == 0x8);
    // private System.Action`2<INetworkPlayer,System.String> didFinishEvent
    // Size: 0x8
    // Offset: 0x80
    System::Action_2<GlobalNamespace::INetworkPlayer*, ::Il2CppString*>* didFinishEvent;
    // Field size check
    static_assert(sizeof(System::Action_2<GlobalNamespace::INetworkPlayer*, ::Il2CppString*>*) == 0x8);
    // private INetworkPlayer _selectedNetworkPlayer
    // Size: 0x8
    // Offset: 0x88
    GlobalNamespace::INetworkPlayer* selectedNetworkPlayer;
    // Field size check
    static_assert(sizeof(GlobalNamespace::INetworkPlayer*) == 0x8);
    // Creating value type constructor for type: ServerPasswordEntryViewController
    ServerPasswordEntryViewController(HMUI::InputFieldView* passwordInput_ = {}, HMUI::UIKeyboard* uiKeyboard_ = {}, System::Action_2<GlobalNamespace::INetworkPlayer*, ::Il2CppString*>* didFinishEvent_ = {}, GlobalNamespace::INetworkPlayer* selectedNetworkPlayer_ = {}) noexcept : passwordInput{passwordInput_}, uiKeyboard{uiKeyboard_}, didFinishEvent{didFinishEvent_}, selectedNetworkPlayer{selectedNetworkPlayer_} {}
    // Get instance field reference: private HMUI.InputFieldView _passwordInput
    HMUI::InputFieldView*& dyn__passwordInput();
    // Get instance field reference: private HMUI.UIKeyboard _uiKeyboard
    HMUI::UIKeyboard*& dyn__uiKeyboard();
    // Get instance field reference: private System.Action`2<INetworkPlayer,System.String> didFinishEvent
    System::Action_2<GlobalNamespace::INetworkPlayer*, ::Il2CppString*>*& dyn_didFinishEvent();
    // Get instance field reference: private INetworkPlayer _selectedNetworkPlayer
    GlobalNamespace::INetworkPlayer*& dyn__selectedNetworkPlayer();
    // public System.Void add_didFinishEvent(System.Action`2<INetworkPlayer,System.String> value)
    // Offset: 0x1092D08
    void add_didFinishEvent(System::Action_2<GlobalNamespace::INetworkPlayer*, ::Il2CppString*>* value);
    // public System.Void remove_didFinishEvent(System.Action`2<INetworkPlayer,System.String> value)
    // Offset: 0x1092DAC
    void remove_didFinishEvent(System::Action_2<GlobalNamespace::INetworkPlayer*, ::Il2CppString*>* value);
    // public System.Void Setup(INetworkPlayer selectedPlayer)
    // Offset: 0x1092E50
    void Setup(GlobalNamespace::INetworkPlayer* selectedPlayer);
    // private System.Void HandleJoinClicked()
    // Offset: 0x1092FD8
    void HandleJoinClicked();
    // private System.Void HandleUIKeyboardOkButtonWasPressed()
    // Offset: 0x109304C
    void HandleUIKeyboardOkButtonWasPressed();
    // public System.Void .ctor()
    // Offset: 0x10930C0
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ServerPasswordEntryViewController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::ServerPasswordEntryViewController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ServerPasswordEntryViewController*, creationType>()));
    }
    // protected override System.Void DidActivate(System.Boolean firstActivation, System.Boolean addedToHierarchy, System.Boolean screenSystemEnabling)
    // Offset: 0x1092E58
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::DidActivate(System.Boolean firstActivation, System.Boolean addedToHierarchy, System.Boolean screenSystemEnabling)
    void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);
    // protected override System.Void DidDeactivate(System.Boolean removedFromHierarchy, System.Boolean screenSystemDisabling)
    // Offset: 0x1092F20
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::DidDeactivate(System.Boolean removedFromHierarchy, System.Boolean screenSystemDisabling)
    void DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling);
  }; // ServerPasswordEntryViewController
  #pragma pack(pop)
  static check_size<sizeof(ServerPasswordEntryViewController), 136 + sizeof(GlobalNamespace::INetworkPlayer*)> __GlobalNamespace_ServerPasswordEntryViewControllerSizeCheck;
  static_assert(sizeof(ServerPasswordEntryViewController) == 0x90);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ServerPasswordEntryViewController*, "", "ServerPasswordEntryViewController");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::ServerPasswordEntryViewController::add_didFinishEvent
// Il2CppName: add_didFinishEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ServerPasswordEntryViewController::*)(System::Action_2<GlobalNamespace::INetworkPlayer*, ::Il2CppString*>*)>(&GlobalNamespace::ServerPasswordEntryViewController::add_didFinishEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "INetworkPlayer"), ::il2cpp_utils::GetClassFromName("System", "String")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ServerPasswordEntryViewController*), "add_didFinishEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ServerPasswordEntryViewController::remove_didFinishEvent
// Il2CppName: remove_didFinishEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ServerPasswordEntryViewController::*)(System::Action_2<GlobalNamespace::INetworkPlayer*, ::Il2CppString*>*)>(&GlobalNamespace::ServerPasswordEntryViewController::remove_didFinishEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "INetworkPlayer"), ::il2cpp_utils::GetClassFromName("System", "String")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ServerPasswordEntryViewController*), "remove_didFinishEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ServerPasswordEntryViewController::Setup
// Il2CppName: Setup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ServerPasswordEntryViewController::*)(GlobalNamespace::INetworkPlayer*)>(&GlobalNamespace::ServerPasswordEntryViewController::Setup)> {
  static const MethodInfo* get() {
    static auto* selectedPlayer = &::il2cpp_utils::GetClassFromName("", "INetworkPlayer")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ServerPasswordEntryViewController*), "Setup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{selectedPlayer});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ServerPasswordEntryViewController::HandleJoinClicked
// Il2CppName: HandleJoinClicked
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ServerPasswordEntryViewController::*)()>(&GlobalNamespace::ServerPasswordEntryViewController::HandleJoinClicked)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ServerPasswordEntryViewController*), "HandleJoinClicked", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ServerPasswordEntryViewController::HandleUIKeyboardOkButtonWasPressed
// Il2CppName: HandleUIKeyboardOkButtonWasPressed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ServerPasswordEntryViewController::*)()>(&GlobalNamespace::ServerPasswordEntryViewController::HandleUIKeyboardOkButtonWasPressed)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ServerPasswordEntryViewController*), "HandleUIKeyboardOkButtonWasPressed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ServerPasswordEntryViewController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::ServerPasswordEntryViewController::DidActivate
// Il2CppName: DidActivate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ServerPasswordEntryViewController::*)(bool, bool, bool)>(&GlobalNamespace::ServerPasswordEntryViewController::DidActivate)> {
  static const MethodInfo* get() {
    static auto* firstActivation = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* addedToHierarchy = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* screenSystemEnabling = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ServerPasswordEntryViewController*), "DidActivate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{firstActivation, addedToHierarchy, screenSystemEnabling});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ServerPasswordEntryViewController::DidDeactivate
// Il2CppName: DidDeactivate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ServerPasswordEntryViewController::*)(bool, bool)>(&GlobalNamespace::ServerPasswordEntryViewController::DidDeactivate)> {
  static const MethodInfo* get() {
    static auto* removedFromHierarchy = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* screenSystemDisabling = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ServerPasswordEntryViewController*), "DidDeactivate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{removedFromHierarchy, screenSystemDisabling});
  }
};
