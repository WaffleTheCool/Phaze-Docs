// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: BeatmapDifficulty
#include "GlobalNamespace/BeatmapDifficulty.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: String
  class String;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x2C
  #pragma pack(push, 1)
  // Autogenerated type: PlayerSaveDataV1_0_1
  // [TokenAttribute] Offset: FFFFFFFF
  class PlayerSaveDataV1_0_1 : public ::Il2CppObject {
    public:
    // Nested type: GlobalNamespace::PlayerSaveDataV1_0_1::GameplayModifiers
    class GameplayModifiers;
    // Nested type: GlobalNamespace::PlayerSaveDataV1_0_1::PlayerSpecificSettings
    class PlayerSpecificSettings;
    // Nested type: GlobalNamespace::PlayerSaveDataV1_0_1::PlayerAllOverallStatsData
    class PlayerAllOverallStatsData;
    // Nested type: GlobalNamespace::PlayerSaveDataV1_0_1::PlayerOverallStatsData
    class PlayerOverallStatsData;
    // Nested type: GlobalNamespace::PlayerSaveDataV1_0_1::PlayerLevelStatsData
    class PlayerLevelStatsData;
    // Nested type: GlobalNamespace::PlayerSaveDataV1_0_1::PlayerMissionStatsData
    class PlayerMissionStatsData;
    // Nested type: GlobalNamespace::PlayerSaveDataV1_0_1::AchievementsData
    class AchievementsData;
    // Nested type: GlobalNamespace::PlayerSaveDataV1_0_1::LocalPlayer
    class LocalPlayer;
    // Nested type: GlobalNamespace::PlayerSaveDataV1_0_1::GuestPlayer
    class GuestPlayer;
    // public System.String version
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* version;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public System.Collections.Generic.List`1<PlayerSaveDataV1_0_1/LocalPlayer> localPlayers
    // Size: 0x8
    // Offset: 0x18
    System::Collections::Generic::List_1<GlobalNamespace::PlayerSaveDataV1_0_1::LocalPlayer*>* localPlayers;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<GlobalNamespace::PlayerSaveDataV1_0_1::LocalPlayer*>*) == 0x8);
    // public System.Collections.Generic.List`1<PlayerSaveDataV1_0_1/GuestPlayer> guestPlayers
    // Size: 0x8
    // Offset: 0x20
    System::Collections::Generic::List_1<GlobalNamespace::PlayerSaveDataV1_0_1::GuestPlayer*>* guestPlayers;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<GlobalNamespace::PlayerSaveDataV1_0_1::GuestPlayer*>*) == 0x8);
    // public BeatmapDifficulty lastSelectedBeatmapDifficulty
    // Size: 0x4
    // Offset: 0x28
    GlobalNamespace::BeatmapDifficulty lastSelectedBeatmapDifficulty;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BeatmapDifficulty) == 0x4);
    // Creating value type constructor for type: PlayerSaveDataV1_0_1
    PlayerSaveDataV1_0_1(::Il2CppString* version_ = {}, System::Collections::Generic::List_1<GlobalNamespace::PlayerSaveDataV1_0_1::LocalPlayer*>* localPlayers_ = {}, System::Collections::Generic::List_1<GlobalNamespace::PlayerSaveDataV1_0_1::GuestPlayer*>* guestPlayers_ = {}, GlobalNamespace::BeatmapDifficulty lastSelectedBeatmapDifficulty_ = {}) noexcept : version{version_}, localPlayers{localPlayers_}, guestPlayers{guestPlayers_}, lastSelectedBeatmapDifficulty{lastSelectedBeatmapDifficulty_} {}
    // static field const value: static private BeatmapDifficulty kDefaulLastSelectedBeatmapDifficulty
    static constexpr const int kDefaulLastSelectedBeatmapDifficulty = 1;
    // Get static field: static private BeatmapDifficulty kDefaulLastSelectedBeatmapDifficulty
    static GlobalNamespace::BeatmapDifficulty _get_kDefaulLastSelectedBeatmapDifficulty();
    // Set static field: static private BeatmapDifficulty kDefaulLastSelectedBeatmapDifficulty
    static void _set_kDefaulLastSelectedBeatmapDifficulty(GlobalNamespace::BeatmapDifficulty value);
    // static field const value: static public System.String kCurrentVersion
    static constexpr const char* kCurrentVersion = "";
    // Get static field: static public System.String kCurrentVersion
    static ::Il2CppString* _get_kCurrentVersion();
    // Set static field: static public System.String kCurrentVersion
    static void _set_kCurrentVersion(::Il2CppString* value);
    // Get instance field reference: public System.String version
    ::Il2CppString*& dyn_version();
    // Get instance field reference: public System.Collections.Generic.List`1<PlayerSaveDataV1_0_1/LocalPlayer> localPlayers
    System::Collections::Generic::List_1<GlobalNamespace::PlayerSaveDataV1_0_1::LocalPlayer*>*& dyn_localPlayers();
    // Get instance field reference: public System.Collections.Generic.List`1<PlayerSaveDataV1_0_1/GuestPlayer> guestPlayers
    System::Collections::Generic::List_1<GlobalNamespace::PlayerSaveDataV1_0_1::GuestPlayer*>*& dyn_guestPlayers();
    // Get instance field reference: public BeatmapDifficulty lastSelectedBeatmapDifficulty
    GlobalNamespace::BeatmapDifficulty& dyn_lastSelectedBeatmapDifficulty();
    // public System.Void .ctor()
    // Offset: 0x11FAB1C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PlayerSaveDataV1_0_1* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::PlayerSaveDataV1_0_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PlayerSaveDataV1_0_1*, creationType>()));
    }
  }; // PlayerSaveDataV1_0_1
  #pragma pack(pop)
  static check_size<sizeof(PlayerSaveDataV1_0_1), 40 + sizeof(GlobalNamespace::BeatmapDifficulty)> __GlobalNamespace_PlayerSaveDataV1_0_1SizeCheck;
  static_assert(sizeof(PlayerSaveDataV1_0_1) == 0x2C);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PlayerSaveDataV1_0_1*, "", "PlayerSaveDataV1_0_1");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::PlayerSaveDataV1_0_1::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
