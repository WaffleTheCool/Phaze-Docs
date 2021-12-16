// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: LiteNetLib
namespace LiteNetLib {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: LiteNetLib.UnconnectedMessageType
  // [TokenAttribute] Offset: FFFFFFFF
  struct UnconnectedMessageType/*, public System::Enum*/ {
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: UnconnectedMessageType
    constexpr UnconnectedMessageType(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public LiteNetLib.UnconnectedMessageType BasicMessage
    static constexpr const int BasicMessage = 0;
    // Get static field: static public LiteNetLib.UnconnectedMessageType BasicMessage
    static LiteNetLib::UnconnectedMessageType _get_BasicMessage();
    // Set static field: static public LiteNetLib.UnconnectedMessageType BasicMessage
    static void _set_BasicMessage(LiteNetLib::UnconnectedMessageType value);
    // static field const value: static public LiteNetLib.UnconnectedMessageType Broadcast
    static constexpr const int Broadcast = 1;
    // Get static field: static public LiteNetLib.UnconnectedMessageType Broadcast
    static LiteNetLib::UnconnectedMessageType _get_Broadcast();
    // Set static field: static public LiteNetLib.UnconnectedMessageType Broadcast
    static void _set_Broadcast(LiteNetLib::UnconnectedMessageType value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // LiteNetLib.UnconnectedMessageType
  #pragma pack(pop)
  static check_size<sizeof(UnconnectedMessageType), 0 + sizeof(int)> __LiteNetLib_UnconnectedMessageTypeSizeCheck;
  static_assert(sizeof(UnconnectedMessageType) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(LiteNetLib::UnconnectedMessageType, "LiteNetLib", "UnconnectedMessageType");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
