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
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Button
  class Button;
  // Forward declaring type: Toggle
  class Toggle;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: GameServersFilterText
  class GameServersFilterText;
  // Forward declaring type: GameServersListTableView
  class GameServersListTableView;
  // Forward declaring type: LoadingControl
  class LoadingControl;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0xA8
  #pragma pack(push, 1)
  // Autogenerated type: GameServerBrowserViewController
  // [TokenAttribute] Offset: FFFFFFFF
  class GameServerBrowserViewController : public HMUI::ViewController {
    public:
    // [HeaderAttribute] Offset: 0xE485CC
    // private UnityEngine.UI.Button _filterServersButton
    // Size: 0x8
    // Offset: 0x70
    UnityEngine::UI::Button* filterServersButton;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::Button*) == 0x8);
    // private GameServersFilterText _filterText
    // Size: 0x8
    // Offset: 0x78
    GlobalNamespace::GameServersFilterText* filterText;
    // Field size check
    static_assert(sizeof(GlobalNamespace::GameServersFilterText*) == 0x8);
    // private UnityEngine.UI.Toggle _canBeInvitedOnLocalNetworkToggle
    // Size: 0x8
    // Offset: 0x80
    UnityEngine::UI::Toggle* canBeInvitedOnLocalNetworkToggle;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::Toggle*) == 0x8);
    // [HeaderAttribute] Offset: 0xE48638
    // private UnityEngine.UI.Button _createServerButton
    // Size: 0x8
    // Offset: 0x88
    UnityEngine::UI::Button* createServerButton;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::Button*) == 0x8);
    // [HeaderAttribute] Offset: 0xE48684
    // private GameServersListTableView _gameServersListTableView
    // Size: 0x8
    // Offset: 0x90
    GlobalNamespace::GameServersListTableView* gameServersListTableView;
    // Field size check
    static_assert(sizeof(GlobalNamespace::GameServersListTableView*) == 0x8);
    // [HeaderAttribute] Offset: 0xE486D0
    // private LoadingControl _mainLoadingControl
    // Size: 0x8
    // Offset: 0x98
    GlobalNamespace::LoadingControl* mainLoadingControl;
    // Field size check
    static_assert(sizeof(GlobalNamespace::LoadingControl*) == 0x8);
    // private LoadingControl _smallLoadingControl
    // Size: 0x8
    // Offset: 0xA0
    GlobalNamespace::LoadingControl* smallLoadingControl;
    // Field size check
    static_assert(sizeof(GlobalNamespace::LoadingControl*) == 0x8);
    // Creating value type constructor for type: GameServerBrowserViewController
    GameServerBrowserViewController(UnityEngine::UI::Button* filterServersButton_ = {}, GlobalNamespace::GameServersFilterText* filterText_ = {}, UnityEngine::UI::Toggle* canBeInvitedOnLocalNetworkToggle_ = {}, UnityEngine::UI::Button* createServerButton_ = {}, GlobalNamespace::GameServersListTableView* gameServersListTableView_ = {}, GlobalNamespace::LoadingControl* mainLoadingControl_ = {}, GlobalNamespace::LoadingControl* smallLoadingControl_ = {}) noexcept : filterServersButton{filterServersButton_}, filterText{filterText_}, canBeInvitedOnLocalNetworkToggle{canBeInvitedOnLocalNetworkToggle_}, createServerButton{createServerButton_}, gameServersListTableView{gameServersListTableView_}, mainLoadingControl{mainLoadingControl_}, smallLoadingControl{smallLoadingControl_} {}
    // Get instance field reference: private UnityEngine.UI.Button _filterServersButton
    UnityEngine::UI::Button*& dyn__filterServersButton();
    // Get instance field reference: private GameServersFilterText _filterText
    GlobalNamespace::GameServersFilterText*& dyn__filterText();
    // Get instance field reference: private UnityEngine.UI.Toggle _canBeInvitedOnLocalNetworkToggle
    UnityEngine::UI::Toggle*& dyn__canBeInvitedOnLocalNetworkToggle();
    // Get instance field reference: private UnityEngine.UI.Button _createServerButton
    UnityEngine::UI::Button*& dyn__createServerButton();
    // Get instance field reference: private GameServersListTableView _gameServersListTableView
    GlobalNamespace::GameServersListTableView*& dyn__gameServersListTableView();
    // Get instance field reference: private LoadingControl _mainLoadingControl
    GlobalNamespace::LoadingControl*& dyn__mainLoadingControl();
    // Get instance field reference: private LoadingControl _smallLoadingControl
    GlobalNamespace::LoadingControl*& dyn__smallLoadingControl();
    // public System.Void .ctor()
    // Offset: 0x10F2C08
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GameServerBrowserViewController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::GameServerBrowserViewController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GameServerBrowserViewController*, creationType>()));
    }
  }; // GameServerBrowserViewController
  #pragma pack(pop)
  static check_size<sizeof(GameServerBrowserViewController), 160 + sizeof(GlobalNamespace::LoadingControl*)> __GlobalNamespace_GameServerBrowserViewControllerSizeCheck;
  static_assert(sizeof(GameServerBrowserViewController) == 0xA8);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GameServerBrowserViewController*, "", "GameServerBrowserViewController");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::GameServerBrowserViewController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
