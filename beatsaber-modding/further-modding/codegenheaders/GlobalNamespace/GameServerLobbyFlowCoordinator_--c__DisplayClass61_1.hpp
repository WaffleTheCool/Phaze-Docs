// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: GameServerLobbyFlowCoordinator
#include "GlobalNamespace/GameServerLobbyFlowCoordinator.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::EventSystems
namespace UnityEngine::EventSystems {
  // Forward declaring type: EventSystem
  class EventSystem;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: GameServerLobbyFlowCoordinator/<>c__DisplayClass61_1
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class GameServerLobbyFlowCoordinator::$$c__DisplayClass61_1 : public ::Il2CppObject {
    public:
    // public UnityEngine.EventSystems.EventSystem eventSystem
    // Size: 0x8
    // Offset: 0x10
    UnityEngine::EventSystems::EventSystem* eventSystem;
    // Field size check
    static_assert(sizeof(UnityEngine::EventSystems::EventSystem*) == 0x8);
    // public GameServerLobbyFlowCoordinator/<>c__DisplayClass61_0 CS$<>8__locals1
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::GameServerLobbyFlowCoordinator::$$c__DisplayClass61_0* CS$$$8__locals1;
    // Field size check
    static_assert(sizeof(GlobalNamespace::GameServerLobbyFlowCoordinator::$$c__DisplayClass61_0*) == 0x8);
    // Creating value type constructor for type: $$c__DisplayClass61_1
    $$c__DisplayClass61_1(UnityEngine::EventSystems::EventSystem* eventSystem_ = {}, GlobalNamespace::GameServerLobbyFlowCoordinator::$$c__DisplayClass61_0* CS$$$8__locals1_ = {}) noexcept : eventSystem{eventSystem_}, CS$$$8__locals1{CS$$$8__locals1_} {}
    // Get instance field reference: public UnityEngine.EventSystems.EventSystem eventSystem
    UnityEngine::EventSystems::EventSystem*& dyn_eventSystem();
    // Get instance field reference: public GameServerLobbyFlowCoordinator/<>c__DisplayClass61_0 CS$<>8__locals1
    GlobalNamespace::GameServerLobbyFlowCoordinator::$$c__DisplayClass61_0*& dyn_CS$$$8__locals1();
    // System.Void <Finish>b__0()
    // Offset: 0x10F9CEC
    void $Finish$b__0();
    // public System.Void .ctor()
    // Offset: 0x10F70E4
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GameServerLobbyFlowCoordinator::$$c__DisplayClass61_1* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::GameServerLobbyFlowCoordinator::$$c__DisplayClass61_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GameServerLobbyFlowCoordinator::$$c__DisplayClass61_1*, creationType>()));
    }
  }; // GameServerLobbyFlowCoordinator/<>c__DisplayClass61_1
  #pragma pack(pop)
  static check_size<sizeof(GameServerLobbyFlowCoordinator::$$c__DisplayClass61_1), 24 + sizeof(GlobalNamespace::GameServerLobbyFlowCoordinator::$$c__DisplayClass61_0*)> __GlobalNamespace_GameServerLobbyFlowCoordinator_$$c__DisplayClass61_1SizeCheck;
  static_assert(sizeof(GameServerLobbyFlowCoordinator::$$c__DisplayClass61_1) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GameServerLobbyFlowCoordinator::$$c__DisplayClass61_1*, "", "GameServerLobbyFlowCoordinator/<>c__DisplayClass61_1");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::GameServerLobbyFlowCoordinator::$$c__DisplayClass61_1::$Finish$b__0
// Il2CppName: <Finish>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameServerLobbyFlowCoordinator::$$c__DisplayClass61_1::*)()>(&GlobalNamespace::GameServerLobbyFlowCoordinator::$$c__DisplayClass61_1::$Finish$b__0)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameServerLobbyFlowCoordinator::$$c__DisplayClass61_1*), "<Finish>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameServerLobbyFlowCoordinator::$$c__DisplayClass61_1::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
