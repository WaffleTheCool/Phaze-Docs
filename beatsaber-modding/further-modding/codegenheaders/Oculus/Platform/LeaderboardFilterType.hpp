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
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Platform.LeaderboardFilterType
  // [TokenAttribute] Offset: FFFFFFFF
  struct LeaderboardFilterType/*, public System::Enum*/ {
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: LeaderboardFilterType
    constexpr LeaderboardFilterType(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // [DescriptionAttribute] Offset: 0xE215A8
    // static field const value: static public Oculus.Platform.LeaderboardFilterType None
    static constexpr const int None = 0;
    // Get static field: static public Oculus.Platform.LeaderboardFilterType None
    static Oculus::Platform::LeaderboardFilterType _get_None();
    // Set static field: static public Oculus.Platform.LeaderboardFilterType None
    static void _set_None(Oculus::Platform::LeaderboardFilterType value);
    // [DescriptionAttribute] Offset: 0xE215E0
    // static field const value: static public Oculus.Platform.LeaderboardFilterType Friends
    static constexpr const int Friends = 1;
    // Get static field: static public Oculus.Platform.LeaderboardFilterType Friends
    static Oculus::Platform::LeaderboardFilterType _get_Friends();
    // Set static field: static public Oculus.Platform.LeaderboardFilterType Friends
    static void _set_Friends(Oculus::Platform::LeaderboardFilterType value);
    // [DescriptionAttribute] Offset: 0xE21618
    // static field const value: static public Oculus.Platform.LeaderboardFilterType Unknown
    static constexpr const int Unknown = 2;
    // Get static field: static public Oculus.Platform.LeaderboardFilterType Unknown
    static Oculus::Platform::LeaderboardFilterType _get_Unknown();
    // Set static field: static public Oculus.Platform.LeaderboardFilterType Unknown
    static void _set_Unknown(Oculus::Platform::LeaderboardFilterType value);
    // [DescriptionAttribute] Offset: 0xE21650
    // static field const value: static public Oculus.Platform.LeaderboardFilterType UserIds
    static constexpr const int UserIds = 3;
    // Get static field: static public Oculus.Platform.LeaderboardFilterType UserIds
    static Oculus::Platform::LeaderboardFilterType _get_UserIds();
    // Set static field: static public Oculus.Platform.LeaderboardFilterType UserIds
    static void _set_UserIds(Oculus::Platform::LeaderboardFilterType value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // Oculus.Platform.LeaderboardFilterType
  #pragma pack(pop)
  static check_size<sizeof(LeaderboardFilterType), 0 + sizeof(int)> __Oculus_Platform_LeaderboardFilterTypeSizeCheck;
  static_assert(sizeof(LeaderboardFilterType) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::LeaderboardFilterType, "Oculus.Platform", "LeaderboardFilterType");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
