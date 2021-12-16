// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: UnityEngine.PropertyName
#include "UnityEngine/PropertyName.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Playables
namespace UnityEngine::Playables {
  // Forward declaring type: PlayableDirector
  class PlayableDirector;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
  // Forward declaring type: GameObject
  class GameObject;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: MultiplayerScoreRingManager
  class MultiplayerScoreRingManager;
  // Forward declaring type: MultiplayerResultsPyramidView
  class MultiplayerResultsPyramidView;
  // Forward declaring type: MultiplayerPlayersManager
  class MultiplayerPlayersManager;
  // Forward declaring type: IMultiplayerSessionManager
  class IMultiplayerSessionManager;
  // Forward declaring type: GameplayCoreSceneSetupData
  class GameplayCoreSceneSetupData;
  // Forward declaring type: MultiplayerResultsData
  class MultiplayerResultsData;
  // Forward declaring type: MultiplayerTimelineMock
  class MultiplayerTimelineMock;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0xB8
  #pragma pack(push, 1)
  // Autogenerated type: MultiplayerOutroAnimationController
  // [TokenAttribute] Offset: FFFFFFFF
  class MultiplayerOutroAnimationController : public UnityEngine::MonoBehaviour {
    public:
    // [HeaderAttribute] Offset: 0xE41008
    // private UnityEngine.Playables.PlayableDirector _outroPlayableDirector
    // Size: 0x8
    // Offset: 0x18
    UnityEngine::Playables::PlayableDirector* outroPlayableDirector;
    // Field size check
    static_assert(sizeof(UnityEngine::Playables::PlayableDirector*) == 0x8);
    // private System.String[] _playerTimelineTrackNames
    // Size: 0x8
    // Offset: 0x20
    ::Array<::Il2CppString*>* playerTimelineTrackNames;
    // Field size check
    static_assert(sizeof(::Array<::Il2CppString*>*) == 0x8);
    // private System.String[] _ringTimelineTrackNames
    // Size: 0x8
    // Offset: 0x28
    ::Array<::Il2CppString*>* ringTimelineTrackNames;
    // Field size check
    static_assert(sizeof(::Array<::Il2CppString*>*) == 0x8);
    // private System.String[] _resultsTimelineTrackNames
    // Size: 0x8
    // Offset: 0x30
    ::Array<::Il2CppString*>* resultsTimelineTrackNames;
    // Field size check
    static_assert(sizeof(::Array<::Il2CppString*>*) == 0x8);
    // private UnityEngine.PropertyName[] _playerTimelinePropertyNames
    // Size: 0x8
    // Offset: 0x38
    ::Array<UnityEngine::PropertyName>* playerTimelinePropertyNames;
    // Field size check
    static_assert(sizeof(::Array<UnityEngine::PropertyName>*) == 0x8);
    // private UnityEngine.PropertyName[] _resultsTimelinePropertyNames
    // Size: 0x8
    // Offset: 0x40
    ::Array<UnityEngine::PropertyName>* resultsTimelinePropertyNames;
    // Field size check
    static_assert(sizeof(::Array<UnityEngine::PropertyName>*) == 0x8);
    // [HeaderAttribute] Offset: 0xE410F4
    // private System.String _localPlayerTrackName
    // Size: 0x8
    // Offset: 0x48
    ::Il2CppString* localPlayerTrackName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private UnityEngine.PropertyName _localPlayerTimelinePropertyName
    // Size: 0x4
    // Offset: 0x50
    UnityEngine::PropertyName localPlayerTimelinePropertyName;
    // Field size check
    static_assert(sizeof(UnityEngine::PropertyName) == 0x4);
    // Padding between fields: localPlayerTimelinePropertyName and: badgeTimelineTrackNames
    char __padding7[0x4] = {};
    // [HeaderAttribute] Offset: 0xE41178
    // private System.String[] _badgeTimelineTrackNames
    // Size: 0x8
    // Offset: 0x58
    ::Array<::Il2CppString*>* badgeTimelineTrackNames;
    // Field size check
    static_assert(sizeof(::Array<::Il2CppString*>*) == 0x8);
    // private UnityEngine.PropertyName[] _badgeTimelinePropertyNames
    // Size: 0x8
    // Offset: 0x60
    ::Array<UnityEngine::PropertyName>* badgeTimelinePropertyNames;
    // Field size check
    static_assert(sizeof(::Array<UnityEngine::PropertyName>*) == 0x8);
    // private UnityEngine.Transform _badgeStartTransform
    // Size: 0x8
    // Offset: 0x68
    UnityEngine::Transform* badgeStartTransform;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // private UnityEngine.Transform _badgeMidTransform
    // Size: 0x8
    // Offset: 0x70
    UnityEngine::Transform* badgeMidTransform;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // [HeaderAttribute] Offset: 0xE4121C
    // private System.String _songPreviewTrackName
    // Size: 0x8
    // Offset: 0x78
    ::Il2CppString* songPreviewTrackName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.String _resultsMocksActivationTrack
    // Size: 0x8
    // Offset: 0x80
    ::Il2CppString* resultsMocksActivationTrack;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // [SpaceAttribute] Offset: 0xE41278
    // private MultiplayerScoreRingManager _multiplayerScoreRingManager
    // Size: 0x8
    // Offset: 0x88
    GlobalNamespace::MultiplayerScoreRingManager* multiplayerScoreRingManager;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MultiplayerScoreRingManager*) == 0x8);
    // private MultiplayerResultsPyramidView _multiplayerResultsPyramidView
    // Size: 0x8
    // Offset: 0x90
    GlobalNamespace::MultiplayerResultsPyramidView* multiplayerResultsPyramidView;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MultiplayerResultsPyramidView*) == 0x8);
    // [InjectAttribute] Offset: 0xE412C0
    // private readonly MultiplayerPlayersManager _multiplayerPlayersManager
    // Size: 0x8
    // Offset: 0x98
    GlobalNamespace::MultiplayerPlayersManager* multiplayerPlayersManager;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MultiplayerPlayersManager*) == 0x8);
    // [InjectAttribute] Offset: 0xE412D0
    // private readonly IMultiplayerSessionManager _multiplayerSessionManager
    // Size: 0x8
    // Offset: 0xA0
    GlobalNamespace::IMultiplayerSessionManager* multiplayerSessionManager;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IMultiplayerSessionManager*) == 0x8);
    // [InjectAttribute] Offset: 0xE412E0
    // private readonly GameplayCoreSceneSetupData _sceneSetupData
    // Size: 0x8
    // Offset: 0xA8
    GlobalNamespace::GameplayCoreSceneSetupData* sceneSetupData;
    // Field size check
    static_assert(sizeof(GlobalNamespace::GameplayCoreSceneSetupData*) == 0x8);
    // private System.Action _onCompleted
    // Size: 0x8
    // Offset: 0xB0
    System::Action* onCompleted;
    // Field size check
    static_assert(sizeof(System::Action*) == 0x8);
    // Creating value type constructor for type: MultiplayerOutroAnimationController
    MultiplayerOutroAnimationController(UnityEngine::Playables::PlayableDirector* outroPlayableDirector_ = {}, ::Array<::Il2CppString*>* playerTimelineTrackNames_ = {}, ::Array<::Il2CppString*>* ringTimelineTrackNames_ = {}, ::Array<::Il2CppString*>* resultsTimelineTrackNames_ = {}, ::Array<UnityEngine::PropertyName>* playerTimelinePropertyNames_ = {}, ::Array<UnityEngine::PropertyName>* resultsTimelinePropertyNames_ = {}, ::Il2CppString* localPlayerTrackName_ = {}, UnityEngine::PropertyName localPlayerTimelinePropertyName_ = {}, ::Array<::Il2CppString*>* badgeTimelineTrackNames_ = {}, ::Array<UnityEngine::PropertyName>* badgeTimelinePropertyNames_ = {}, UnityEngine::Transform* badgeStartTransform_ = {}, UnityEngine::Transform* badgeMidTransform_ = {}, ::Il2CppString* songPreviewTrackName_ = {}, ::Il2CppString* resultsMocksActivationTrack_ = {}, GlobalNamespace::MultiplayerScoreRingManager* multiplayerScoreRingManager_ = {}, GlobalNamespace::MultiplayerResultsPyramidView* multiplayerResultsPyramidView_ = {}, GlobalNamespace::MultiplayerPlayersManager* multiplayerPlayersManager_ = {}, GlobalNamespace::IMultiplayerSessionManager* multiplayerSessionManager_ = {}, GlobalNamespace::GameplayCoreSceneSetupData* sceneSetupData_ = {}, System::Action* onCompleted_ = {}) noexcept : outroPlayableDirector{outroPlayableDirector_}, playerTimelineTrackNames{playerTimelineTrackNames_}, ringTimelineTrackNames{ringTimelineTrackNames_}, resultsTimelineTrackNames{resultsTimelineTrackNames_}, playerTimelinePropertyNames{playerTimelinePropertyNames_}, resultsTimelinePropertyNames{resultsTimelinePropertyNames_}, localPlayerTrackName{localPlayerTrackName_}, localPlayerTimelinePropertyName{localPlayerTimelinePropertyName_}, badgeTimelineTrackNames{badgeTimelineTrackNames_}, badgeTimelinePropertyNames{badgeTimelinePropertyNames_}, badgeStartTransform{badgeStartTransform_}, badgeMidTransform{badgeMidTransform_}, songPreviewTrackName{songPreviewTrackName_}, resultsMocksActivationTrack{resultsMocksActivationTrack_}, multiplayerScoreRingManager{multiplayerScoreRingManager_}, multiplayerResultsPyramidView{multiplayerResultsPyramidView_}, multiplayerPlayersManager{multiplayerPlayersManager_}, multiplayerSessionManager{multiplayerSessionManager_}, sceneSetupData{sceneSetupData_}, onCompleted{onCompleted_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get instance field reference: private UnityEngine.Playables.PlayableDirector _outroPlayableDirector
    UnityEngine::Playables::PlayableDirector*& dyn__outroPlayableDirector();
    // Get instance field reference: private System.String[] _playerTimelineTrackNames
    ::Array<::Il2CppString*>*& dyn__playerTimelineTrackNames();
    // Get instance field reference: private System.String[] _ringTimelineTrackNames
    ::Array<::Il2CppString*>*& dyn__ringTimelineTrackNames();
    // Get instance field reference: private System.String[] _resultsTimelineTrackNames
    ::Array<::Il2CppString*>*& dyn__resultsTimelineTrackNames();
    // Get instance field reference: private UnityEngine.PropertyName[] _playerTimelinePropertyNames
    ::Array<UnityEngine::PropertyName>*& dyn__playerTimelinePropertyNames();
    // Get instance field reference: private UnityEngine.PropertyName[] _resultsTimelinePropertyNames
    ::Array<UnityEngine::PropertyName>*& dyn__resultsTimelinePropertyNames();
    // Get instance field reference: private System.String _localPlayerTrackName
    ::Il2CppString*& dyn__localPlayerTrackName();
    // Get instance field reference: private UnityEngine.PropertyName _localPlayerTimelinePropertyName
    UnityEngine::PropertyName& dyn__localPlayerTimelinePropertyName();
    // Get instance field reference: private System.String[] _badgeTimelineTrackNames
    ::Array<::Il2CppString*>*& dyn__badgeTimelineTrackNames();
    // Get instance field reference: private UnityEngine.PropertyName[] _badgeTimelinePropertyNames
    ::Array<UnityEngine::PropertyName>*& dyn__badgeTimelinePropertyNames();
    // Get instance field reference: private UnityEngine.Transform _badgeStartTransform
    UnityEngine::Transform*& dyn__badgeStartTransform();
    // Get instance field reference: private UnityEngine.Transform _badgeMidTransform
    UnityEngine::Transform*& dyn__badgeMidTransform();
    // Get instance field reference: private System.String _songPreviewTrackName
    ::Il2CppString*& dyn__songPreviewTrackName();
    // Get instance field reference: private System.String _resultsMocksActivationTrack
    ::Il2CppString*& dyn__resultsMocksActivationTrack();
    // Get instance field reference: private MultiplayerScoreRingManager _multiplayerScoreRingManager
    GlobalNamespace::MultiplayerScoreRingManager*& dyn__multiplayerScoreRingManager();
    // Get instance field reference: private MultiplayerResultsPyramidView _multiplayerResultsPyramidView
    GlobalNamespace::MultiplayerResultsPyramidView*& dyn__multiplayerResultsPyramidView();
    // Get instance field reference: private readonly MultiplayerPlayersManager _multiplayerPlayersManager
    GlobalNamespace::MultiplayerPlayersManager*& dyn__multiplayerPlayersManager();
    // Get instance field reference: private readonly IMultiplayerSessionManager _multiplayerSessionManager
    GlobalNamespace::IMultiplayerSessionManager*& dyn__multiplayerSessionManager();
    // Get instance field reference: private readonly GameplayCoreSceneSetupData _sceneSetupData
    GlobalNamespace::GameplayCoreSceneSetupData*& dyn__sceneSetupData();
    // Get instance field reference: private System.Action _onCompleted
    System::Action*& dyn__onCompleted();
    // protected System.Void Start()
    // Offset: 0x108D990
    void Start();
    // protected System.Void OnValidate()
    // Offset: 0x108DB04
    void OnValidate();
    // protected System.Void OnDestroy()
    // Offset: 0x108E220
    void OnDestroy();
    // public System.Void AnimateOutro(MultiplayerResultsData multiplayerResultsData, System.Action onCompleted)
    // Offset: 0x108E394
    void AnimateOutro(GlobalNamespace::MultiplayerResultsData* multiplayerResultsData, System::Action* onCompleted);
    // private System.Void BindOutroTimeline()
    // Offset: 0x108E54C
    void BindOutroTimeline();
    // private System.Void BindRingsAndAudio(UnityEngine.GameObject[] rings, System.Boolean isMock, System.Boolean isDuel, MultiplayerTimelineMock timelineMock)
    // Offset: 0x108EB68
    void BindRingsAndAudio(::Array<UnityEngine::GameObject*>* rings, bool isMock, bool isDuel, GlobalNamespace::MultiplayerTimelineMock* timelineMock);
    // public System.Void SetTimelineMock(MultiplayerTimelineMock multiplayerIntroTimelineMock, System.Boolean isDuel)
    // Offset: 0x108F464
    void SetTimelineMock(GlobalNamespace::MultiplayerTimelineMock* multiplayerIntroTimelineMock, bool isDuel);
    // public System.Void Completed()
    // Offset: 0x108F6F8
    void Completed();
    // private System.Void HandlePlayerSpawningDidFinish()
    // Offset: 0x108DA34
    void HandlePlayerSpawningDidFinish();
    // public System.Void .ctor()
    // Offset: 0x108F714
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MultiplayerOutroAnimationController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MultiplayerOutroAnimationController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MultiplayerOutroAnimationController*, creationType>()));
    }
  }; // MultiplayerOutroAnimationController
  #pragma pack(pop)
  static check_size<sizeof(MultiplayerOutroAnimationController), 176 + sizeof(System::Action*)> __GlobalNamespace_MultiplayerOutroAnimationControllerSizeCheck;
  static_assert(sizeof(MultiplayerOutroAnimationController) == 0xB8);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultiplayerOutroAnimationController*, "", "MultiplayerOutroAnimationController");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerOutroAnimationController::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerOutroAnimationController::*)()>(&GlobalNamespace::MultiplayerOutroAnimationController::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerOutroAnimationController*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerOutroAnimationController::OnValidate
// Il2CppName: OnValidate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerOutroAnimationController::*)()>(&GlobalNamespace::MultiplayerOutroAnimationController::OnValidate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerOutroAnimationController*), "OnValidate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerOutroAnimationController::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerOutroAnimationController::*)()>(&GlobalNamespace::MultiplayerOutroAnimationController::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerOutroAnimationController*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerOutroAnimationController::AnimateOutro
// Il2CppName: AnimateOutro
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerOutroAnimationController::*)(GlobalNamespace::MultiplayerResultsData*, System::Action*)>(&GlobalNamespace::MultiplayerOutroAnimationController::AnimateOutro)> {
  static const MethodInfo* get() {
    static auto* multiplayerResultsData = &::il2cpp_utils::GetClassFromName("", "MultiplayerResultsData")->byval_arg;
    static auto* onCompleted = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerOutroAnimationController*), "AnimateOutro", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{multiplayerResultsData, onCompleted});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerOutroAnimationController::BindOutroTimeline
// Il2CppName: BindOutroTimeline
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerOutroAnimationController::*)()>(&GlobalNamespace::MultiplayerOutroAnimationController::BindOutroTimeline)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerOutroAnimationController*), "BindOutroTimeline", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerOutroAnimationController::BindRingsAndAudio
// Il2CppName: BindRingsAndAudio
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerOutroAnimationController::*)(::Array<UnityEngine::GameObject*>*, bool, bool, GlobalNamespace::MultiplayerTimelineMock*)>(&GlobalNamespace::MultiplayerOutroAnimationController::BindRingsAndAudio)> {
  static const MethodInfo* get() {
    static auto* rings = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "GameObject"), 1)->byval_arg;
    static auto* isMock = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* isDuel = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* timelineMock = &::il2cpp_utils::GetClassFromName("", "MultiplayerTimelineMock")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerOutroAnimationController*), "BindRingsAndAudio", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{rings, isMock, isDuel, timelineMock});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerOutroAnimationController::SetTimelineMock
// Il2CppName: SetTimelineMock
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerOutroAnimationController::*)(GlobalNamespace::MultiplayerTimelineMock*, bool)>(&GlobalNamespace::MultiplayerOutroAnimationController::SetTimelineMock)> {
  static const MethodInfo* get() {
    static auto* multiplayerIntroTimelineMock = &::il2cpp_utils::GetClassFromName("", "MultiplayerTimelineMock")->byval_arg;
    static auto* isDuel = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerOutroAnimationController*), "SetTimelineMock", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{multiplayerIntroTimelineMock, isDuel});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerOutroAnimationController::Completed
// Il2CppName: Completed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerOutroAnimationController::*)()>(&GlobalNamespace::MultiplayerOutroAnimationController::Completed)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerOutroAnimationController*), "Completed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerOutroAnimationController::HandlePlayerSpawningDidFinish
// Il2CppName: HandlePlayerSpawningDidFinish
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerOutroAnimationController::*)()>(&GlobalNamespace::MultiplayerOutroAnimationController::HandlePlayerSpawningDidFinish)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerOutroAnimationController*), "HandlePlayerSpawningDidFinish", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerOutroAnimationController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
