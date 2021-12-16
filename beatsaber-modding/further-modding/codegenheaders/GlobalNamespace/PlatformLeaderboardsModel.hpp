// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: LeaderboardScoreUploader
#include "GlobalNamespace/LeaderboardScoreUploader.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: HMAsyncRequest
  class HMAsyncRequest;
  // Forward declaring type: GameplayModifiersModelSO
  class GameplayModifiersModelSO;
  // Forward declaring type: IDifficultyBeatmap
  class IDifficultyBeatmap;
  // Forward declaring type: IPlatformUserModel
  class IPlatformUserModel;
  // Forward declaring type: PlatformLeaderboardsHandler
  class PlatformLeaderboardsHandler;
  // Forward declaring type: GameplayModifiers
  class GameplayModifiers;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x50
  #pragma pack(push, 1)
  // Autogenerated type: PlatformLeaderboardsModel
  // [TokenAttribute] Offset: FFFFFFFF
  class PlatformLeaderboardsModel : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: GlobalNamespace::PlatformLeaderboardsModel::State
    struct State;
    // Nested type: GlobalNamespace::PlatformLeaderboardsModel::GetScoresResult
    struct GetScoresResult;
    // Nested type: GlobalNamespace::PlatformLeaderboardsModel::UploadScoreResult
    struct UploadScoreResult;
    // Nested type: GlobalNamespace::PlatformLeaderboardsModel::ScoresScope
    struct ScoresScope;
    // Nested type: GlobalNamespace::PlatformLeaderboardsModel::GetScoresCompletionHandler
    class GetScoresCompletionHandler;
    // Nested type: GlobalNamespace::PlatformLeaderboardsModel::UploadScoreCompletionHandler
    class UploadScoreCompletionHandler;
    // Nested type: GlobalNamespace::PlatformLeaderboardsModel::LeaderboardScore
    class LeaderboardScore;
    // Nested type: GlobalNamespace::PlatformLeaderboardsModel::$Initialize$d__18
    struct $Initialize$d__18;
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: PlatformLeaderboardsModel/State
    // [TokenAttribute] Offset: FFFFFFFF
    struct State/*, public System::Enum*/ {
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      // Creating value type constructor for type: State
      constexpr State(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator System::Enum
      operator System::Enum() noexcept {
        return *reinterpret_cast<System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public PlatformLeaderboardsModel/State NotInitialized
      static constexpr const int NotInitialized = 0;
      // Get static field: static public PlatformLeaderboardsModel/State NotInitialized
      static GlobalNamespace::PlatformLeaderboardsModel::State _get_NotInitialized();
      // Set static field: static public PlatformLeaderboardsModel/State NotInitialized
      static void _set_NotInitialized(GlobalNamespace::PlatformLeaderboardsModel::State value);
      // static field const value: static public PlatformLeaderboardsModel/State Initializing
      static constexpr const int Initializing = 1;
      // Get static field: static public PlatformLeaderboardsModel/State Initializing
      static GlobalNamespace::PlatformLeaderboardsModel::State _get_Initializing();
      // Set static field: static public PlatformLeaderboardsModel/State Initializing
      static void _set_Initializing(GlobalNamespace::PlatformLeaderboardsModel::State value);
      // static field const value: static public PlatformLeaderboardsModel/State Initialized
      static constexpr const int Initialized = 2;
      // Get static field: static public PlatformLeaderboardsModel/State Initialized
      static GlobalNamespace::PlatformLeaderboardsModel::State _get_Initialized();
      // Set static field: static public PlatformLeaderboardsModel/State Initialized
      static void _set_Initialized(GlobalNamespace::PlatformLeaderboardsModel::State value);
      // Get instance field reference: public System.Int32 value__
      int& dyn_value__();
    }; // PlatformLeaderboardsModel/State
    #pragma pack(pop)
    static check_size<sizeof(PlatformLeaderboardsModel::State), 0 + sizeof(int)> __GlobalNamespace_PlatformLeaderboardsModel_StateSizeCheck;
    static_assert(sizeof(PlatformLeaderboardsModel::State) == 0x4);
    // private GameplayModifiersModelSO _gameplayModifiersModel
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::GameplayModifiersModelSO* gameplayModifiersModel;
    // Field size check
    static_assert(sizeof(GlobalNamespace::GameplayModifiersModelSO*) == 0x8);
    // [InjectAttribute] Offset: 0xE39258
    // private readonly LeaderboardScoreUploader _leaderboardScoreUploader
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::LeaderboardScoreUploader* leaderboardScoreUploader;
    // Field size check
    static_assert(sizeof(GlobalNamespace::LeaderboardScoreUploader*) == 0x8);
    // [InjectAttribute] Offset: 0xE39268
    // private readonly IPlatformUserModel _platformUserModel
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::IPlatformUserModel* platformUserModel;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IPlatformUserModel*) == 0x8);
    // [InjectAttribute] Offset: 0xE39278
    // private readonly PlatformLeaderboardsHandler _platformLeaderboardsHandler
    // Size: 0x8
    // Offset: 0x30
    GlobalNamespace::PlatformLeaderboardsHandler* platformLeaderboardsHandler;
    // Field size check
    static_assert(sizeof(GlobalNamespace::PlatformLeaderboardsHandler*) == 0x8);
    // private System.Action allScoresDidUploadEvent
    // Size: 0x8
    // Offset: 0x38
    System::Action* allScoresDidUploadEvent;
    // Field size check
    static_assert(sizeof(System::Action*) == 0x8);
    // private PlatformLeaderboardsModel/State _state
    // Size: 0x4
    // Offset: 0x40
    GlobalNamespace::PlatformLeaderboardsModel::State state;
    // Field size check
    static_assert(sizeof(GlobalNamespace::PlatformLeaderboardsModel::State) == 0x4);
    // Padding between fields: state and: playerId
    char __padding5[0x4] = {};
    // private System.String _playerId
    // Size: 0x8
    // Offset: 0x48
    ::Il2CppString* playerId;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // Creating value type constructor for type: PlatformLeaderboardsModel
    PlatformLeaderboardsModel(GlobalNamespace::GameplayModifiersModelSO* gameplayModifiersModel_ = {}, GlobalNamespace::LeaderboardScoreUploader* leaderboardScoreUploader_ = {}, GlobalNamespace::IPlatformUserModel* platformUserModel_ = {}, GlobalNamespace::PlatformLeaderboardsHandler* platformLeaderboardsHandler_ = {}, System::Action* allScoresDidUploadEvent_ = {}, GlobalNamespace::PlatformLeaderboardsModel::State state_ = {}, ::Il2CppString* playerId_ = {}) noexcept : gameplayModifiersModel{gameplayModifiersModel_}, leaderboardScoreUploader{leaderboardScoreUploader_}, platformUserModel{platformUserModel_}, platformLeaderboardsHandler{platformLeaderboardsHandler_}, allScoresDidUploadEvent{allScoresDidUploadEvent_}, state{state_}, playerId{playerId_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get instance field reference: private GameplayModifiersModelSO _gameplayModifiersModel
    GlobalNamespace::GameplayModifiersModelSO*& dyn__gameplayModifiersModel();
    // Get instance field reference: private readonly LeaderboardScoreUploader _leaderboardScoreUploader
    GlobalNamespace::LeaderboardScoreUploader*& dyn__leaderboardScoreUploader();
    // Get instance field reference: private readonly IPlatformUserModel _platformUserModel
    GlobalNamespace::IPlatformUserModel*& dyn__platformUserModel();
    // Get instance field reference: private readonly PlatformLeaderboardsHandler _platformLeaderboardsHandler
    GlobalNamespace::PlatformLeaderboardsHandler*& dyn__platformLeaderboardsHandler();
    // Get instance field reference: private System.Action allScoresDidUploadEvent
    System::Action*& dyn_allScoresDidUploadEvent();
    // Get instance field reference: private PlatformLeaderboardsModel/State _state
    GlobalNamespace::PlatformLeaderboardsModel::State& dyn__state();
    // Get instance field reference: private System.String _playerId
    ::Il2CppString*& dyn__playerId();
    // private System.Boolean get_initialized()
    // Offset: 0x11F2DA8
    bool get_initialized();
    // public System.Void add_allScoresDidUploadEvent(System.Action value)
    // Offset: 0x11F2154
    void add_allScoresDidUploadEvent(System::Action* value);
    // public System.Void remove_allScoresDidUploadEvent(System.Action value)
    // Offset: 0x11F22FC
    void remove_allScoresDidUploadEvent(System::Action* value);
    // private System.Void Initialize()
    // Offset: 0x11F2DDC
    void Initialize();
    // private HMAsyncRequest UploadScore(LeaderboardScoreUploader/ScoreData scoreData, PlatformLeaderboardsModel/UploadScoreCompletionHandler completionHandler)
    // Offset: 0x11F2E9C
    GlobalNamespace::HMAsyncRequest* UploadScore(GlobalNamespace::LeaderboardScoreUploader::ScoreData* scoreData, GlobalNamespace::PlatformLeaderboardsModel::UploadScoreCompletionHandler* completionHandler);
    // private HMAsyncRequest GetScores(IDifficultyBeatmap beatmap, System.Int32 count, System.Int32 fromRank, PlatformLeaderboardsModel/ScoresScope scope, PlatformLeaderboardsModel/GetScoresCompletionHandler completionHandler)
    // Offset: 0x11F3194
    GlobalNamespace::HMAsyncRequest* GetScores(GlobalNamespace::IDifficultyBeatmap* beatmap, int count, int fromRank, GlobalNamespace::PlatformLeaderboardsModel::ScoresScope scope, GlobalNamespace::PlatformLeaderboardsModel::GetScoresCompletionHandler* completionHandler);
    // private System.Void HandleAllScoresDidUpload()
    // Offset: 0x11F34FC
    void HandleAllScoresDidUpload();
    // public HMAsyncRequest GetScores(IDifficultyBeatmap beatmap, System.Int32 count, System.Int32 fromRank, PlatformLeaderboardsModel/GetScoresCompletionHandler completionHandler)
    // Offset: 0x11F2D08
    GlobalNamespace::HMAsyncRequest* GetScores(GlobalNamespace::IDifficultyBeatmap* beatmap, int count, int fromRank, GlobalNamespace::PlatformLeaderboardsModel::GetScoresCompletionHandler* completionHandler);
    // public HMAsyncRequest GetScoresAroundPlayer(IDifficultyBeatmap beatmap, System.Int32 count, PlatformLeaderboardsModel/GetScoresCompletionHandler completionHandler)
    // Offset: 0x11F2D20
    GlobalNamespace::HMAsyncRequest* GetScoresAroundPlayer(GlobalNamespace::IDifficultyBeatmap* beatmap, int count, GlobalNamespace::PlatformLeaderboardsModel::GetScoresCompletionHandler* completionHandler);
    // public HMAsyncRequest GetFriendsScores(IDifficultyBeatmap beatmap, System.Int32 count, System.Int32 fromRank, PlatformLeaderboardsModel/GetScoresCompletionHandler completionHandler)
    // Offset: 0x11F2D14
    GlobalNamespace::HMAsyncRequest* GetFriendsScores(GlobalNamespace::IDifficultyBeatmap* beatmap, int count, int fromRank, GlobalNamespace::PlatformLeaderboardsModel::GetScoresCompletionHandler* completionHandler);
    // public System.Void UploadScore(IDifficultyBeatmap beatmap, System.Int32 rawScore, System.Int32 modifiedScore, System.Boolean fullCombo, System.Int32 goodCutsCount, System.Int32 badCutsCount, System.Int32 missedCount, System.Int32 maxCombo, System.Single energy, GameplayModifiers gameplayModifiers)
    // Offset: 0x11F3510
    void UploadScore(GlobalNamespace::IDifficultyBeatmap* beatmap, int rawScore, int modifiedScore, bool fullCombo, int goodCutsCount, int badCutsCount, int missedCount, int maxCombo, float energy, GlobalNamespace::GameplayModifiers* gameplayModifiers);
    // public System.Void .ctor()
    // Offset: 0x11F3720
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PlatformLeaderboardsModel* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::PlatformLeaderboardsModel::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PlatformLeaderboardsModel*, creationType>()));
    }
  }; // PlatformLeaderboardsModel
  #pragma pack(pop)
  static check_size<sizeof(PlatformLeaderboardsModel), 72 + sizeof(::Il2CppString*)> __GlobalNamespace_PlatformLeaderboardsModelSizeCheck;
  static_assert(sizeof(PlatformLeaderboardsModel) == 0x50);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PlatformLeaderboardsModel*, "", "PlatformLeaderboardsModel");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PlatformLeaderboardsModel::State, "", "PlatformLeaderboardsModel/State");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::PlatformLeaderboardsModel::get_initialized
// Il2CppName: get_initialized
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::PlatformLeaderboardsModel::*)()>(&GlobalNamespace::PlatformLeaderboardsModel::get_initialized)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlatformLeaderboardsModel*), "get_initialized", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlatformLeaderboardsModel::add_allScoresDidUploadEvent
// Il2CppName: add_allScoresDidUploadEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PlatformLeaderboardsModel::*)(System::Action*)>(&GlobalNamespace::PlatformLeaderboardsModel::add_allScoresDidUploadEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlatformLeaderboardsModel*), "add_allScoresDidUploadEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlatformLeaderboardsModel::remove_allScoresDidUploadEvent
// Il2CppName: remove_allScoresDidUploadEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PlatformLeaderboardsModel::*)(System::Action*)>(&GlobalNamespace::PlatformLeaderboardsModel::remove_allScoresDidUploadEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlatformLeaderboardsModel*), "remove_allScoresDidUploadEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlatformLeaderboardsModel::Initialize
// Il2CppName: Initialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PlatformLeaderboardsModel::*)()>(&GlobalNamespace::PlatformLeaderboardsModel::Initialize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlatformLeaderboardsModel*), "Initialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlatformLeaderboardsModel::UploadScore
// Il2CppName: UploadScore
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::HMAsyncRequest* (GlobalNamespace::PlatformLeaderboardsModel::*)(GlobalNamespace::LeaderboardScoreUploader::ScoreData*, GlobalNamespace::PlatformLeaderboardsModel::UploadScoreCompletionHandler*)>(&GlobalNamespace::PlatformLeaderboardsModel::UploadScore)> {
  static const MethodInfo* get() {
    static auto* scoreData = &::il2cpp_utils::GetClassFromName("", "LeaderboardScoreUploader/ScoreData")->byval_arg;
    static auto* completionHandler = &::il2cpp_utils::GetClassFromName("", "PlatformLeaderboardsModel/UploadScoreCompletionHandler")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlatformLeaderboardsModel*), "UploadScore", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{scoreData, completionHandler});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlatformLeaderboardsModel::GetScores
// Il2CppName: GetScores
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::HMAsyncRequest* (GlobalNamespace::PlatformLeaderboardsModel::*)(GlobalNamespace::IDifficultyBeatmap*, int, int, GlobalNamespace::PlatformLeaderboardsModel::ScoresScope, GlobalNamespace::PlatformLeaderboardsModel::GetScoresCompletionHandler*)>(&GlobalNamespace::PlatformLeaderboardsModel::GetScores)> {
  static const MethodInfo* get() {
    static auto* beatmap = &::il2cpp_utils::GetClassFromName("", "IDifficultyBeatmap")->byval_arg;
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* fromRank = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* scope = &::il2cpp_utils::GetClassFromName("", "PlatformLeaderboardsModel/ScoresScope")->byval_arg;
    static auto* completionHandler = &::il2cpp_utils::GetClassFromName("", "PlatformLeaderboardsModel/GetScoresCompletionHandler")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlatformLeaderboardsModel*), "GetScores", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{beatmap, count, fromRank, scope, completionHandler});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlatformLeaderboardsModel::HandleAllScoresDidUpload
// Il2CppName: HandleAllScoresDidUpload
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PlatformLeaderboardsModel::*)()>(&GlobalNamespace::PlatformLeaderboardsModel::HandleAllScoresDidUpload)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlatformLeaderboardsModel*), "HandleAllScoresDidUpload", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlatformLeaderboardsModel::GetScores
// Il2CppName: GetScores
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::HMAsyncRequest* (GlobalNamespace::PlatformLeaderboardsModel::*)(GlobalNamespace::IDifficultyBeatmap*, int, int, GlobalNamespace::PlatformLeaderboardsModel::GetScoresCompletionHandler*)>(&GlobalNamespace::PlatformLeaderboardsModel::GetScores)> {
  static const MethodInfo* get() {
    static auto* beatmap = &::il2cpp_utils::GetClassFromName("", "IDifficultyBeatmap")->byval_arg;
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* fromRank = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* completionHandler = &::il2cpp_utils::GetClassFromName("", "PlatformLeaderboardsModel/GetScoresCompletionHandler")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlatformLeaderboardsModel*), "GetScores", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{beatmap, count, fromRank, completionHandler});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlatformLeaderboardsModel::GetScoresAroundPlayer
// Il2CppName: GetScoresAroundPlayer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::HMAsyncRequest* (GlobalNamespace::PlatformLeaderboardsModel::*)(GlobalNamespace::IDifficultyBeatmap*, int, GlobalNamespace::PlatformLeaderboardsModel::GetScoresCompletionHandler*)>(&GlobalNamespace::PlatformLeaderboardsModel::GetScoresAroundPlayer)> {
  static const MethodInfo* get() {
    static auto* beatmap = &::il2cpp_utils::GetClassFromName("", "IDifficultyBeatmap")->byval_arg;
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* completionHandler = &::il2cpp_utils::GetClassFromName("", "PlatformLeaderboardsModel/GetScoresCompletionHandler")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlatformLeaderboardsModel*), "GetScoresAroundPlayer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{beatmap, count, completionHandler});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlatformLeaderboardsModel::GetFriendsScores
// Il2CppName: GetFriendsScores
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::HMAsyncRequest* (GlobalNamespace::PlatformLeaderboardsModel::*)(GlobalNamespace::IDifficultyBeatmap*, int, int, GlobalNamespace::PlatformLeaderboardsModel::GetScoresCompletionHandler*)>(&GlobalNamespace::PlatformLeaderboardsModel::GetFriendsScores)> {
  static const MethodInfo* get() {
    static auto* beatmap = &::il2cpp_utils::GetClassFromName("", "IDifficultyBeatmap")->byval_arg;
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* fromRank = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* completionHandler = &::il2cpp_utils::GetClassFromName("", "PlatformLeaderboardsModel/GetScoresCompletionHandler")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlatformLeaderboardsModel*), "GetFriendsScores", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{beatmap, count, fromRank, completionHandler});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlatformLeaderboardsModel::UploadScore
// Il2CppName: UploadScore
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PlatformLeaderboardsModel::*)(GlobalNamespace::IDifficultyBeatmap*, int, int, bool, int, int, int, int, float, GlobalNamespace::GameplayModifiers*)>(&GlobalNamespace::PlatformLeaderboardsModel::UploadScore)> {
  static const MethodInfo* get() {
    static auto* beatmap = &::il2cpp_utils::GetClassFromName("", "IDifficultyBeatmap")->byval_arg;
    static auto* rawScore = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* modifiedScore = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* fullCombo = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* goodCutsCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* badCutsCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* missedCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* maxCombo = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* energy = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* gameplayModifiers = &::il2cpp_utils::GetClassFromName("", "GameplayModifiers")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlatformLeaderboardsModel*), "UploadScore", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{beatmap, rawScore, modifiedScore, fullCombo, goodCutsCount, badCutsCount, missedCount, maxCombo, energy, gameplayModifiers});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlatformLeaderboardsModel::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
