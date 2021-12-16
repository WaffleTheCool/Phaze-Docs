// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IGameplayRpcManager
  class IGameplayRpcManager;
  // Forward declaring type: IMultiplayerLevelEndActionsListener
  class IMultiplayerLevelEndActionsListener;
  // Forward declaring type: LobbyPlayerPermissionsModel
  class LobbyPlayerPermissionsModel;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: String
  class String;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: MultiplayerLocalPlayerDisconnectHelper
  // [TokenAttribute] Offset: FFFFFFFF
  class MultiplayerLocalPlayerDisconnectHelper : public ::Il2CppObject {
    public:
    // [InjectAttribute] Offset: 0xE404AC
    // private readonly IGameplayRpcManager _gameplayRpcManager
    // Size: 0x8
    // Offset: 0x10
    GlobalNamespace::IGameplayRpcManager* gameplayRpcManager;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IGameplayRpcManager*) == 0x8);
    // [InjectAttribute] Offset: 0xE404BC
    // private readonly IMultiplayerLevelEndActionsListener _multiplayerLevelEndActions
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::IMultiplayerLevelEndActionsListener* multiplayerLevelEndActions;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IMultiplayerLevelEndActionsListener*) == 0x8);
    // [InjectAttribute] Offset: 0xE404CC
    // private readonly LobbyPlayerPermissionsModel _lobbyPlayerPermissionsModel
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::LobbyPlayerPermissionsModel* lobbyPlayerPermissionsModel;
    // Field size check
    static_assert(sizeof(GlobalNamespace::LobbyPlayerPermissionsModel*) == 0x8);
    // Creating value type constructor for type: MultiplayerLocalPlayerDisconnectHelper
    MultiplayerLocalPlayerDisconnectHelper(GlobalNamespace::IGameplayRpcManager* gameplayRpcManager_ = {}, GlobalNamespace::IMultiplayerLevelEndActionsListener* multiplayerLevelEndActions_ = {}, GlobalNamespace::LobbyPlayerPermissionsModel* lobbyPlayerPermissionsModel_ = {}) noexcept : gameplayRpcManager{gameplayRpcManager_}, multiplayerLevelEndActions{multiplayerLevelEndActions_}, lobbyPlayerPermissionsModel{lobbyPlayerPermissionsModel_} {}
    // static field const value: static private System.String kDisconnectLabel
    static constexpr const char* kDisconnectLabel = "BUTTON_DISCONNECT";
    // Get static field: static private System.String kDisconnectLabel
    static ::Il2CppString* _get_kDisconnectLabel();
    // Set static field: static private System.String kDisconnectLabel
    static void _set_kDisconnectLabel(::Il2CppString* value);
    // static field const value: static private System.String kEndGameLabel
    static constexpr const char* kEndGameLabel = "BUTTON_END_GAME";
    // Get static field: static private System.String kEndGameLabel
    static ::Il2CppString* _get_kEndGameLabel();
    // Set static field: static private System.String kEndGameLabel
    static void _set_kEndGameLabel(::Il2CppString* value);
    // Get instance field reference: private readonly IGameplayRpcManager _gameplayRpcManager
    GlobalNamespace::IGameplayRpcManager*& dyn__gameplayRpcManager();
    // Get instance field reference: private readonly IMultiplayerLevelEndActionsListener _multiplayerLevelEndActions
    GlobalNamespace::IMultiplayerLevelEndActionsListener*& dyn__multiplayerLevelEndActions();
    // Get instance field reference: private readonly LobbyPlayerPermissionsModel _lobbyPlayerPermissionsModel
    GlobalNamespace::LobbyPlayerPermissionsModel*& dyn__lobbyPlayerPermissionsModel();
    // public System.Void Disconnect()
    // Offset: 0x1084914
    void Disconnect();
    // public System.String ResolveDisconnectButtonString()
    // Offset: 0x1085F00
    ::Il2CppString* ResolveDisconnectButtonString();
    // public System.Void .ctor()
    // Offset: 0x10883D0
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MultiplayerLocalPlayerDisconnectHelper* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MultiplayerLocalPlayerDisconnectHelper::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MultiplayerLocalPlayerDisconnectHelper*, creationType>()));
    }
  }; // MultiplayerLocalPlayerDisconnectHelper
  #pragma pack(pop)
  static check_size<sizeof(MultiplayerLocalPlayerDisconnectHelper), 32 + sizeof(GlobalNamespace::LobbyPlayerPermissionsModel*)> __GlobalNamespace_MultiplayerLocalPlayerDisconnectHelperSizeCheck;
  static_assert(sizeof(MultiplayerLocalPlayerDisconnectHelper) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultiplayerLocalPlayerDisconnectHelper*, "", "MultiplayerLocalPlayerDisconnectHelper");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLocalPlayerDisconnectHelper::Disconnect
// Il2CppName: Disconnect
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLocalPlayerDisconnectHelper::*)()>(&GlobalNamespace::MultiplayerLocalPlayerDisconnectHelper::Disconnect)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLocalPlayerDisconnectHelper*), "Disconnect", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLocalPlayerDisconnectHelper::ResolveDisconnectButtonString
// Il2CppName: ResolveDisconnectButtonString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (GlobalNamespace::MultiplayerLocalPlayerDisconnectHelper::*)()>(&GlobalNamespace::MultiplayerLocalPlayerDisconnectHelper::ResolveDisconnectButtonString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLocalPlayerDisconnectHelper*), "ResolveDisconnectButtonString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLocalPlayerDisconnectHelper::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
