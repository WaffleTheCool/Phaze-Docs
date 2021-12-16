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
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x2
  #pragma pack(push, 1)
  // Autogenerated type: GameplayModifierMask
  // [TokenAttribute] Offset: FFFFFFFF
  // [FlagsAttribute] Offset: FFFFFFFF
  struct GameplayModifierMask/*, public System::Enum*/ {
    public:
    // public System.UInt16 value__
    // Size: 0x2
    // Offset: 0x0
    uint16_t value;
    // Field size check
    static_assert(sizeof(uint16_t) == 0x2);
    // Creating value type constructor for type: GameplayModifierMask
    constexpr GameplayModifierMask(uint16_t value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator uint16_t
    constexpr operator uint16_t() const noexcept {
      return value;
    }
    // static field const value: static public GameplayModifierMask None
    static constexpr const uint16_t None = 0u;
    // Get static field: static public GameplayModifierMask None
    static GlobalNamespace::GameplayModifierMask _get_None();
    // Set static field: static public GameplayModifierMask None
    static void _set_None(GlobalNamespace::GameplayModifierMask value);
    // static field const value: static public GameplayModifierMask BatteryEnergy
    static constexpr const uint16_t BatteryEnergy = 1u;
    // Get static field: static public GameplayModifierMask BatteryEnergy
    static GlobalNamespace::GameplayModifierMask _get_BatteryEnergy();
    // Set static field: static public GameplayModifierMask BatteryEnergy
    static void _set_BatteryEnergy(GlobalNamespace::GameplayModifierMask value);
    // static field const value: static public GameplayModifierMask NoFail
    static constexpr const uint16_t NoFail = 2u;
    // Get static field: static public GameplayModifierMask NoFail
    static GlobalNamespace::GameplayModifierMask _get_NoFail();
    // Set static field: static public GameplayModifierMask NoFail
    static void _set_NoFail(GlobalNamespace::GameplayModifierMask value);
    // static field const value: static public GameplayModifierMask InstaFail
    static constexpr const uint16_t InstaFail = 4u;
    // Get static field: static public GameplayModifierMask InstaFail
    static GlobalNamespace::GameplayModifierMask _get_InstaFail();
    // Set static field: static public GameplayModifierMask InstaFail
    static void _set_InstaFail(GlobalNamespace::GameplayModifierMask value);
    // static field const value: static public GameplayModifierMask NoObstacles
    static constexpr const uint16_t NoObstacles = 8u;
    // Get static field: static public GameplayModifierMask NoObstacles
    static GlobalNamespace::GameplayModifierMask _get_NoObstacles();
    // Set static field: static public GameplayModifierMask NoObstacles
    static void _set_NoObstacles(GlobalNamespace::GameplayModifierMask value);
    // static field const value: static public GameplayModifierMask NoBombs
    static constexpr const uint16_t NoBombs = 16u;
    // Get static field: static public GameplayModifierMask NoBombs
    static GlobalNamespace::GameplayModifierMask _get_NoBombs();
    // Set static field: static public GameplayModifierMask NoBombs
    static void _set_NoBombs(GlobalNamespace::GameplayModifierMask value);
    // static field const value: static public GameplayModifierMask FastNotes
    static constexpr const uint16_t FastNotes = 32u;
    // Get static field: static public GameplayModifierMask FastNotes
    static GlobalNamespace::GameplayModifierMask _get_FastNotes();
    // Set static field: static public GameplayModifierMask FastNotes
    static void _set_FastNotes(GlobalNamespace::GameplayModifierMask value);
    // static field const value: static public GameplayModifierMask StrictAngles
    static constexpr const uint16_t StrictAngles = 64u;
    // Get static field: static public GameplayModifierMask StrictAngles
    static GlobalNamespace::GameplayModifierMask _get_StrictAngles();
    // Set static field: static public GameplayModifierMask StrictAngles
    static void _set_StrictAngles(GlobalNamespace::GameplayModifierMask value);
    // static field const value: static public GameplayModifierMask DisappearingArrows
    static constexpr const uint16_t DisappearingArrows = 128u;
    // Get static field: static public GameplayModifierMask DisappearingArrows
    static GlobalNamespace::GameplayModifierMask _get_DisappearingArrows();
    // Set static field: static public GameplayModifierMask DisappearingArrows
    static void _set_DisappearingArrows(GlobalNamespace::GameplayModifierMask value);
    // static field const value: static public GameplayModifierMask FasterSong
    static constexpr const uint16_t FasterSong = 256u;
    // Get static field: static public GameplayModifierMask FasterSong
    static GlobalNamespace::GameplayModifierMask _get_FasterSong();
    // Set static field: static public GameplayModifierMask FasterSong
    static void _set_FasterSong(GlobalNamespace::GameplayModifierMask value);
    // static field const value: static public GameplayModifierMask SlowerSong
    static constexpr const uint16_t SlowerSong = 512u;
    // Get static field: static public GameplayModifierMask SlowerSong
    static GlobalNamespace::GameplayModifierMask _get_SlowerSong();
    // Set static field: static public GameplayModifierMask SlowerSong
    static void _set_SlowerSong(GlobalNamespace::GameplayModifierMask value);
    // static field const value: static public GameplayModifierMask NoArrows
    static constexpr const uint16_t NoArrows = 1024u;
    // Get static field: static public GameplayModifierMask NoArrows
    static GlobalNamespace::GameplayModifierMask _get_NoArrows();
    // Set static field: static public GameplayModifierMask NoArrows
    static void _set_NoArrows(GlobalNamespace::GameplayModifierMask value);
    // static field const value: static public GameplayModifierMask GhostNotes
    static constexpr const uint16_t GhostNotes = 2048u;
    // Get static field: static public GameplayModifierMask GhostNotes
    static GlobalNamespace::GameplayModifierMask _get_GhostNotes();
    // Set static field: static public GameplayModifierMask GhostNotes
    static void _set_GhostNotes(GlobalNamespace::GameplayModifierMask value);
    // static field const value: static public GameplayModifierMask SuperFastSong
    static constexpr const uint16_t SuperFastSong = 4096u;
    // Get static field: static public GameplayModifierMask SuperFastSong
    static GlobalNamespace::GameplayModifierMask _get_SuperFastSong();
    // Set static field: static public GameplayModifierMask SuperFastSong
    static void _set_SuperFastSong(GlobalNamespace::GameplayModifierMask value);
    // static field const value: static public GameplayModifierMask ProMode
    static constexpr const uint16_t ProMode = 8192u;
    // Get static field: static public GameplayModifierMask ProMode
    static GlobalNamespace::GameplayModifierMask _get_ProMode();
    // Set static field: static public GameplayModifierMask ProMode
    static void _set_ProMode(GlobalNamespace::GameplayModifierMask value);
    // static field const value: static public GameplayModifierMask ZenMode
    static constexpr const uint16_t ZenMode = 16384u;
    // Get static field: static public GameplayModifierMask ZenMode
    static GlobalNamespace::GameplayModifierMask _get_ZenMode();
    // Set static field: static public GameplayModifierMask ZenMode
    static void _set_ZenMode(GlobalNamespace::GameplayModifierMask value);
    // static field const value: static public GameplayModifierMask SmallCubes
    static constexpr const uint16_t SmallCubes = 32768u;
    // Get static field: static public GameplayModifierMask SmallCubes
    static GlobalNamespace::GameplayModifierMask _get_SmallCubes();
    // Set static field: static public GameplayModifierMask SmallCubes
    static void _set_SmallCubes(GlobalNamespace::GameplayModifierMask value);
    // static field const value: static public GameplayModifierMask All
    static constexpr const uint16_t All = 65535u;
    // Get static field: static public GameplayModifierMask All
    static GlobalNamespace::GameplayModifierMask _get_All();
    // Set static field: static public GameplayModifierMask All
    static void _set_All(GlobalNamespace::GameplayModifierMask value);
    // Get instance field reference: public System.UInt16 value__
    uint16_t& dyn_value__();
  }; // GameplayModifierMask
  #pragma pack(pop)
  static check_size<sizeof(GameplayModifierMask), 0 + sizeof(uint16_t)> __GlobalNamespace_GameplayModifierMaskSizeCheck;
  static_assert(sizeof(GameplayModifierMask) == 0x2);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GameplayModifierMask, "", "GameplayModifierMask");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
