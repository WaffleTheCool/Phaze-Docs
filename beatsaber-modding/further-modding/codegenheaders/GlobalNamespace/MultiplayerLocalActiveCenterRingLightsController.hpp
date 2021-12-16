// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: MultiplayerCenterResizeController
  class MultiplayerCenterResizeController;
  // Forward declaring type: MultiplayerLayoutProvider
  class MultiplayerLayoutProvider;
  // Forward declaring type: BeatmapObjectSpawnCenter
  class BeatmapObjectSpawnCenter;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x42
  #pragma pack(push, 1)
  // Autogenerated type: MultiplayerLocalActiveCenterRingLightsController
  // [TokenAttribute] Offset: FFFFFFFF
  class MultiplayerLocalActiveCenterRingLightsController : public UnityEngine::MonoBehaviour {
    public:
    // private System.Single[] _verticalLinePositions
    // Size: 0x8
    // Offset: 0x18
    ::Array<float>* verticalLinePositions;
    // Field size check
    static_assert(sizeof(::Array<float>*) == 0x8);
    // private UnityEngine.Transform[] _horizontalLines
    // Size: 0x8
    // Offset: 0x20
    ::Array<UnityEngine::Transform*>* horizontalLines;
    // Field size check
    static_assert(sizeof(::Array<UnityEngine::Transform*>*) == 0x8);
    // [InjectAttribute] Offset: 0xE400CC
    // private readonly MultiplayerCenterResizeController _centerResizeController
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::MultiplayerCenterResizeController* centerResizeController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MultiplayerCenterResizeController*) == 0x8);
    // [InjectAttribute] Offset: 0xE400DC
    // private readonly MultiplayerLayoutProvider _layoutProvider
    // Size: 0x8
    // Offset: 0x30
    GlobalNamespace::MultiplayerLayoutProvider* layoutProvider;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MultiplayerLayoutProvider*) == 0x8);
    // [InjectAttribute] Offset: 0xE400EC
    // private readonly BeatmapObjectSpawnCenter _beatmapObjectSpawnCenter
    // Size: 0x8
    // Offset: 0x38
    GlobalNamespace::BeatmapObjectSpawnCenter* beatmapObjectSpawnCenter;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BeatmapObjectSpawnCenter*) == 0x8);
    // private System.Boolean _edgeDistanceFromCenterCalculated
    // Size: 0x1
    // Offset: 0x40
    bool edgeDistanceFromCenterCalculated;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean _spawnCenterDistanceFound
    // Size: 0x1
    // Offset: 0x41
    bool spawnCenterDistanceFound;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: MultiplayerLocalActiveCenterRingLightsController
    MultiplayerLocalActiveCenterRingLightsController(::Array<float>* verticalLinePositions_ = {}, ::Array<UnityEngine::Transform*>* horizontalLines_ = {}, GlobalNamespace::MultiplayerCenterResizeController* centerResizeController_ = {}, GlobalNamespace::MultiplayerLayoutProvider* layoutProvider_ = {}, GlobalNamespace::BeatmapObjectSpawnCenter* beatmapObjectSpawnCenter_ = {}, bool edgeDistanceFromCenterCalculated_ = {}, bool spawnCenterDistanceFound_ = {}) noexcept : verticalLinePositions{verticalLinePositions_}, horizontalLines{horizontalLines_}, centerResizeController{centerResizeController_}, layoutProvider{layoutProvider_}, beatmapObjectSpawnCenter{beatmapObjectSpawnCenter_}, edgeDistanceFromCenterCalculated{edgeDistanceFromCenterCalculated_}, spawnCenterDistanceFound{spawnCenterDistanceFound_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get instance field reference: private System.Single[] _verticalLinePositions
    ::Array<float>*& dyn__verticalLinePositions();
    // Get instance field reference: private UnityEngine.Transform[] _horizontalLines
    ::Array<UnityEngine::Transform*>*& dyn__horizontalLines();
    // Get instance field reference: private readonly MultiplayerCenterResizeController _centerResizeController
    GlobalNamespace::MultiplayerCenterResizeController*& dyn__centerResizeController();
    // Get instance field reference: private readonly MultiplayerLayoutProvider _layoutProvider
    GlobalNamespace::MultiplayerLayoutProvider*& dyn__layoutProvider();
    // Get instance field reference: private readonly BeatmapObjectSpawnCenter _beatmapObjectSpawnCenter
    GlobalNamespace::BeatmapObjectSpawnCenter*& dyn__beatmapObjectSpawnCenter();
    // Get instance field reference: private System.Boolean _edgeDistanceFromCenterCalculated
    bool& dyn__edgeDistanceFromCenterCalculated();
    // Get instance field reference: private System.Boolean _spawnCenterDistanceFound
    bool& dyn__spawnCenterDistanceFound();
    // protected System.Void Start()
    // Offset: 0x1080D18
    void Start();
    // protected System.Void OnDestroy()
    // Offset: 0x1080EE8
    void OnDestroy();
    // private System.Void TryResize()
    // Offset: 0x1081040
    void TryResize();
    // private System.Void Resize()
    // Offset: 0x1081058
    void Resize();
    // private System.Void HandleSpawnCenterDistanceWasFound(System.Single spawnCenterDistance)
    // Offset: 0x1080ED0
    void HandleSpawnCenterDistanceWasFound(float spawnCenterDistance);
    // private System.Void HandleEdgeDistanceFromCenterWasCalculated(System.Single constructEdgeDistanceFromCenter)
    // Offset: 0x1080EB8
    void HandleEdgeDistanceFromCenterWasCalculated(float constructEdgeDistanceFromCenter);
    // public System.Void .ctor()
    // Offset: 0x10813C8
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MultiplayerLocalActiveCenterRingLightsController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MultiplayerLocalActiveCenterRingLightsController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MultiplayerLocalActiveCenterRingLightsController*, creationType>()));
    }
  }; // MultiplayerLocalActiveCenterRingLightsController
  #pragma pack(pop)
  static check_size<sizeof(MultiplayerLocalActiveCenterRingLightsController), 65 + sizeof(bool)> __GlobalNamespace_MultiplayerLocalActiveCenterRingLightsControllerSizeCheck;
  static_assert(sizeof(MultiplayerLocalActiveCenterRingLightsController) == 0x42);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultiplayerLocalActiveCenterRingLightsController*, "", "MultiplayerLocalActiveCenterRingLightsController");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLocalActiveCenterRingLightsController::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLocalActiveCenterRingLightsController::*)()>(&GlobalNamespace::MultiplayerLocalActiveCenterRingLightsController::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLocalActiveCenterRingLightsController*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLocalActiveCenterRingLightsController::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLocalActiveCenterRingLightsController::*)()>(&GlobalNamespace::MultiplayerLocalActiveCenterRingLightsController::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLocalActiveCenterRingLightsController*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLocalActiveCenterRingLightsController::TryResize
// Il2CppName: TryResize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLocalActiveCenterRingLightsController::*)()>(&GlobalNamespace::MultiplayerLocalActiveCenterRingLightsController::TryResize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLocalActiveCenterRingLightsController*), "TryResize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLocalActiveCenterRingLightsController::Resize
// Il2CppName: Resize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLocalActiveCenterRingLightsController::*)()>(&GlobalNamespace::MultiplayerLocalActiveCenterRingLightsController::Resize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLocalActiveCenterRingLightsController*), "Resize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLocalActiveCenterRingLightsController::HandleSpawnCenterDistanceWasFound
// Il2CppName: HandleSpawnCenterDistanceWasFound
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLocalActiveCenterRingLightsController::*)(float)>(&GlobalNamespace::MultiplayerLocalActiveCenterRingLightsController::HandleSpawnCenterDistanceWasFound)> {
  static const MethodInfo* get() {
    static auto* spawnCenterDistance = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLocalActiveCenterRingLightsController*), "HandleSpawnCenterDistanceWasFound", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{spawnCenterDistance});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLocalActiveCenterRingLightsController::HandleEdgeDistanceFromCenterWasCalculated
// Il2CppName: HandleEdgeDistanceFromCenterWasCalculated
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLocalActiveCenterRingLightsController::*)(float)>(&GlobalNamespace::MultiplayerLocalActiveCenterRingLightsController::HandleEdgeDistanceFromCenterWasCalculated)> {
  static const MethodInfo* get() {
    static auto* constructEdgeDistanceFromCenter = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLocalActiveCenterRingLightsController*), "HandleEdgeDistanceFromCenterWasCalculated", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{constructEdgeDistanceFromCenter});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLocalActiveCenterRingLightsController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
