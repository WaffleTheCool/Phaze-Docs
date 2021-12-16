// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: PlatformLeaderboardsModel
#include "GlobalNamespace/PlatformLeaderboardsModel.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: PlatformLeaderboardsModel/GetScoresResult
  // [TokenAttribute] Offset: FFFFFFFF
  struct PlatformLeaderboardsModel::GetScoresResult/*, public System::Enum*/ {
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: GetScoresResult
    constexpr GetScoresResult(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public PlatformLeaderboardsModel/GetScoresResult Ok
    static constexpr const int Ok = 0;
    // Get static field: static public PlatformLeaderboardsModel/GetScoresResult Ok
    static GlobalNamespace::PlatformLeaderboardsModel::GetScoresResult _get_Ok();
    // Set static field: static public PlatformLeaderboardsModel/GetScoresResult Ok
    static void _set_Ok(GlobalNamespace::PlatformLeaderboardsModel::GetScoresResult value);
    // static field const value: static public PlatformLeaderboardsModel/GetScoresResult Failed
    static constexpr const int Failed = 1;
    // Get static field: static public PlatformLeaderboardsModel/GetScoresResult Failed
    static GlobalNamespace::PlatformLeaderboardsModel::GetScoresResult _get_Failed();
    // Set static field: static public PlatformLeaderboardsModel/GetScoresResult Failed
    static void _set_Failed(GlobalNamespace::PlatformLeaderboardsModel::GetScoresResult value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // PlatformLeaderboardsModel/GetScoresResult
  #pragma pack(pop)
  static check_size<sizeof(PlatformLeaderboardsModel::GetScoresResult), 0 + sizeof(int)> __GlobalNamespace_PlatformLeaderboardsModel_GetScoresResultSizeCheck;
  static_assert(sizeof(PlatformLeaderboardsModel::GetScoresResult) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PlatformLeaderboardsModel::GetScoresResult, "", "PlatformLeaderboardsModel/GetScoresResult");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
