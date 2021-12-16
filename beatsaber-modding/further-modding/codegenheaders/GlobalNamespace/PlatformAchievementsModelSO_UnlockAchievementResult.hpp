// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: PlatformAchievementsModelSO
#include "GlobalNamespace/PlatformAchievementsModelSO.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: PlatformAchievementsModelSO/UnlockAchievementResult
  // [TokenAttribute] Offset: FFFFFFFF
  struct PlatformAchievementsModelSO::UnlockAchievementResult/*, public System::Enum*/ {
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: UnlockAchievementResult
    constexpr UnlockAchievementResult(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public PlatformAchievementsModelSO/UnlockAchievementResult OK
    static constexpr const int OK = 0;
    // Get static field: static public PlatformAchievementsModelSO/UnlockAchievementResult OK
    static GlobalNamespace::PlatformAchievementsModelSO::UnlockAchievementResult _get_OK();
    // Set static field: static public PlatformAchievementsModelSO/UnlockAchievementResult OK
    static void _set_OK(GlobalNamespace::PlatformAchievementsModelSO::UnlockAchievementResult value);
    // static field const value: static public PlatformAchievementsModelSO/UnlockAchievementResult Failed
    static constexpr const int Failed = 1;
    // Get static field: static public PlatformAchievementsModelSO/UnlockAchievementResult Failed
    static GlobalNamespace::PlatformAchievementsModelSO::UnlockAchievementResult _get_Failed();
    // Set static field: static public PlatformAchievementsModelSO/UnlockAchievementResult Failed
    static void _set_Failed(GlobalNamespace::PlatformAchievementsModelSO::UnlockAchievementResult value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // PlatformAchievementsModelSO/UnlockAchievementResult
  #pragma pack(pop)
  static check_size<sizeof(PlatformAchievementsModelSO::UnlockAchievementResult), 0 + sizeof(int)> __GlobalNamespace_PlatformAchievementsModelSO_UnlockAchievementResultSizeCheck;
  static_assert(sizeof(PlatformAchievementsModelSO::UnlockAchievementResult) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PlatformAchievementsModelSO::UnlockAchievementResult, "", "PlatformAchievementsModelSO/UnlockAchievementResult");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
