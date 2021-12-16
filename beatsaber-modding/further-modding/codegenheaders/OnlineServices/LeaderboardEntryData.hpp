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
  // Forward declaring type: GameplayModifiers
  class GameplayModifiers;
}
// Completed forward declares
// Type namespace: OnlineServices
namespace OnlineServices {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: OnlineServices.LeaderboardEntryData
  // [TokenAttribute] Offset: FFFFFFFF
  class LeaderboardEntryData : public ::Il2CppObject {
    public:
    // public readonly System.Int32 score
    // Size: 0x4
    // Offset: 0x10
    int score;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public readonly System.Int32 rank
    // Size: 0x4
    // Offset: 0x14
    int rank;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.String displayName
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppString* displayName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public readonly System.String playerId
    // Size: 0x8
    // Offset: 0x20
    ::Il2CppString* playerId;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public readonly GameplayModifiers gameplayModifiers
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::GameplayModifiers* gameplayModifiers;
    // Field size check
    static_assert(sizeof(GlobalNamespace::GameplayModifiers*) == 0x8);
    // Creating value type constructor for type: LeaderboardEntryData
    LeaderboardEntryData(int score_ = {}, int rank_ = {}, ::Il2CppString* displayName_ = {}, ::Il2CppString* playerId_ = {}, GlobalNamespace::GameplayModifiers* gameplayModifiers_ = {}) noexcept : score{score_}, rank{rank_}, displayName{displayName_}, playerId{playerId_}, gameplayModifiers{gameplayModifiers_} {}
    // Get instance field reference: public readonly System.Int32 score
    int& dyn_score();
    // Get instance field reference: public readonly System.Int32 rank
    int& dyn_rank();
    // Get instance field reference: public System.String displayName
    ::Il2CppString*& dyn_displayName();
    // Get instance field reference: public readonly System.String playerId
    ::Il2CppString*& dyn_playerId();
    // Get instance field reference: public readonly GameplayModifiers gameplayModifiers
    GlobalNamespace::GameplayModifiers*& dyn_gameplayModifiers();
    // public System.Void .ctor(System.Int32 score, System.Int32 rank, System.String displayName, System.String playerId, GameplayModifiers gameplayModifiers)
    // Offset: 0x1030FF8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LeaderboardEntryData* New_ctor(int score, int rank, ::Il2CppString* displayName, ::Il2CppString* playerId, GlobalNamespace::GameplayModifiers* gameplayModifiers) {
      static auto ___internal__logger = ::Logger::get().WithContext("OnlineServices::LeaderboardEntryData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LeaderboardEntryData*, creationType>(score, rank, displayName, playerId, gameplayModifiers)));
    }
    // public override System.String ToString()
    // Offset: 0x103104C
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::Il2CppString* ToString();
  }; // OnlineServices.LeaderboardEntryData
  #pragma pack(pop)
  static check_size<sizeof(LeaderboardEntryData), 40 + sizeof(GlobalNamespace::GameplayModifiers*)> __OnlineServices_LeaderboardEntryDataSizeCheck;
  static_assert(sizeof(LeaderboardEntryData) == 0x30);
}
DEFINE_IL2CPP_ARG_TYPE(OnlineServices::LeaderboardEntryData*, "OnlineServices", "LeaderboardEntryData");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: OnlineServices::LeaderboardEntryData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: OnlineServices::LeaderboardEntryData::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (OnlineServices::LeaderboardEntryData::*)()>(&OnlineServices::LeaderboardEntryData::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OnlineServices::LeaderboardEntryData*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
