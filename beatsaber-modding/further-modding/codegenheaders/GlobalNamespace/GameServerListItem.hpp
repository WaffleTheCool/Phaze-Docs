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
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x21
  #pragma pack(push, 1)
  // Autogenerated type: GameServerListItem
  // [TokenAttribute] Offset: FFFFFFFF
  class GameServerListItem : public ::Il2CppObject {
    public:
    // public readonly System.String serverName
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* serverName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public readonly System.Int32 capacity
    // Size: 0x4
    // Offset: 0x18
    int capacity;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public readonly System.Int32 occupied
    // Size: 0x4
    // Offset: 0x1C
    int occupied;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public readonly System.Boolean password
    // Size: 0x1
    // Offset: 0x20
    bool password;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: GameServerListItem
    GameServerListItem(::Il2CppString* serverName_ = {}, int capacity_ = {}, int occupied_ = {}, bool password_ = {}) noexcept : serverName{serverName_}, capacity{capacity_}, occupied{occupied_}, password{password_} {}
    // Get instance field reference: public readonly System.String serverName
    ::Il2CppString*& dyn_serverName();
    // Get instance field reference: public readonly System.Int32 capacity
    int& dyn_capacity();
    // Get instance field reference: public readonly System.Int32 occupied
    int& dyn_occupied();
    // Get instance field reference: public readonly System.Boolean password
    bool& dyn_password();
    // public System.Void .ctor(System.String serverName, System.Int32 capacity, System.Int32 occupied, System.Boolean password)
    // Offset: 0x10F2E74
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GameServerListItem* New_ctor(::Il2CppString* serverName, int capacity, int occupied, bool password) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::GameServerListItem::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GameServerListItem*, creationType>(serverName, capacity, occupied, password)));
    }
  }; // GameServerListItem
  #pragma pack(pop)
  static check_size<sizeof(GameServerListItem), 32 + sizeof(bool)> __GlobalNamespace_GameServerListItemSizeCheck;
  static_assert(sizeof(GameServerListItem) == 0x21);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GameServerListItem*, "", "GameServerListItem");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::GameServerListItem::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
