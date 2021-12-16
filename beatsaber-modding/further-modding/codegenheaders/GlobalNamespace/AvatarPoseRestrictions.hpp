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
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: AvatarPoseController
  class AvatarPoseController;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Skipping declaration: Quaternion because it is already included!
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x50
  #pragma pack(push, 1)
  // Autogenerated type: AvatarPoseRestrictions
  // [TokenAttribute] Offset: FFFFFFFF
  class AvatarPoseRestrictions : public UnityEngine::MonoBehaviour {
    public:
    // private System.Single _maxHeadSquareDistanceFromCenter
    // Size: 0x4
    // Offset: 0x18
    float maxHeadSquareDistanceFromCenter;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _minHeadYPos
    // Size: 0x4
    // Offset: 0x1C
    float minHeadYPos;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _maxHeadYPos
    // Size: 0x4
    // Offset: 0x20
    float maxHeadYPos;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [FormerlySerializedAsAttribute] Offset: 0xE3808C
    // private System.Single _minHandXZSquareDistanceFromHeadCenter
    // Size: 0x4
    // Offset: 0x24
    float minHandXZSquareDistanceFromHeadCenter;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [FormerlySerializedAsAttribute] Offset: 0xE380D8
    // private System.Single _maxHandXZSquareDistanceFromHeadCenter
    // Size: 0x4
    // Offset: 0x28
    float maxHandXZSquareDistanceFromHeadCenter;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _minHandYDistanceFromHeadCenter
    // Size: 0x4
    // Offset: 0x2C
    float minHandYDistanceFromHeadCenter;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _maxHandYDistanceFromHeadCenter
    // Size: 0x4
    // Offset: 0x30
    float maxHandYDistanceFromHeadCenter;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Boolean _forceHeadPosition
    // Size: 0x1
    // Offset: 0x34
    bool forceHeadPosition;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: forceHeadPosition and: centerHeadOffset
    char __padding7[0x3] = {};
    // private UnityEngine.Vector3 _centerHeadOffset
    // Size: 0xC
    // Offset: 0x38
    UnityEngine::Vector3 centerHeadOffset;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // Padding between fields: centerHeadOffset and: avatarPoseController
    char __padding8[0x4] = {};
    // [InjectAttribute] Offset: 0xE38164
    // private readonly AvatarPoseController _avatarPoseController
    // Size: 0x8
    // Offset: 0x48
    GlobalNamespace::AvatarPoseController* avatarPoseController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::AvatarPoseController*) == 0x8);
    // Creating value type constructor for type: AvatarPoseRestrictions
    AvatarPoseRestrictions(float maxHeadSquareDistanceFromCenter_ = {}, float minHeadYPos_ = {}, float maxHeadYPos_ = {}, float minHandXZSquareDistanceFromHeadCenter_ = {}, float maxHandXZSquareDistanceFromHeadCenter_ = {}, float minHandYDistanceFromHeadCenter_ = {}, float maxHandYDistanceFromHeadCenter_ = {}, bool forceHeadPosition_ = {}, UnityEngine::Vector3 centerHeadOffset_ = {}, GlobalNamespace::AvatarPoseController* avatarPoseController_ = {}) noexcept : maxHeadSquareDistanceFromCenter{maxHeadSquareDistanceFromCenter_}, minHeadYPos{minHeadYPos_}, maxHeadYPos{maxHeadYPos_}, minHandXZSquareDistanceFromHeadCenter{minHandXZSquareDistanceFromHeadCenter_}, maxHandXZSquareDistanceFromHeadCenter{maxHandXZSquareDistanceFromHeadCenter_}, minHandYDistanceFromHeadCenter{minHandYDistanceFromHeadCenter_}, maxHandYDistanceFromHeadCenter{maxHandYDistanceFromHeadCenter_}, forceHeadPosition{forceHeadPosition_}, centerHeadOffset{centerHeadOffset_}, avatarPoseController{avatarPoseController_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get instance field reference: private System.Single _maxHeadSquareDistanceFromCenter
    float& dyn__maxHeadSquareDistanceFromCenter();
    // Get instance field reference: private System.Single _minHeadYPos
    float& dyn__minHeadYPos();
    // Get instance field reference: private System.Single _maxHeadYPos
    float& dyn__maxHeadYPos();
    // Get instance field reference: private System.Single _minHandXZSquareDistanceFromHeadCenter
    float& dyn__minHandXZSquareDistanceFromHeadCenter();
    // Get instance field reference: private System.Single _maxHandXZSquareDistanceFromHeadCenter
    float& dyn__maxHandXZSquareDistanceFromHeadCenter();
    // Get instance field reference: private System.Single _minHandYDistanceFromHeadCenter
    float& dyn__minHandYDistanceFromHeadCenter();
    // Get instance field reference: private System.Single _maxHandYDistanceFromHeadCenter
    float& dyn__maxHandYDistanceFromHeadCenter();
    // Get instance field reference: private System.Boolean _forceHeadPosition
    bool& dyn__forceHeadPosition();
    // Get instance field reference: private UnityEngine.Vector3 _centerHeadOffset
    UnityEngine::Vector3& dyn__centerHeadOffset();
    // Get instance field reference: private readonly AvatarPoseController _avatarPoseController
    GlobalNamespace::AvatarPoseController*& dyn__avatarPoseController();
    // protected System.Void Start()
    // Offset: 0x117C7B8
    void Start();
    // private System.Void HandleAvatarPoseControllerPositionsWillBeSet(UnityEngine.Quaternion headRotation, UnityEngine.Vector3 headPosition, UnityEngine.Vector3 leftHandPosition, UnityEngine.Vector3 rightHandPosition, out UnityEngine.Vector3 newHeadPosition, out UnityEngine.Vector3 newLeftHandPosition, out UnityEngine.Vector3 newRightHandPosition)
    // Offset: 0x117C830
    void HandleAvatarPoseControllerPositionsWillBeSet(UnityEngine::Quaternion headRotation, UnityEngine::Vector3 headPosition, UnityEngine::Vector3 leftHandPosition, UnityEngine::Vector3 rightHandPosition, ByRef<UnityEngine::Vector3> newHeadPosition, ByRef<UnityEngine::Vector3> newLeftHandPosition, ByRef<UnityEngine::Vector3> newRightHandPosition);
    // private UnityEngine.Vector3 LimitHandPositionRelativeToHead(UnityEngine.Vector3 handPosition, UnityEngine.Vector3 headCenter)
    // Offset: 0x117CBE8
    UnityEngine::Vector3 LimitHandPositionRelativeToHead(UnityEngine::Vector3 handPosition, UnityEngine::Vector3 headCenter);
    // public System.Void .ctor()
    // Offset: 0x117CE34
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AvatarPoseRestrictions* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::AvatarPoseRestrictions::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AvatarPoseRestrictions*, creationType>()));
    }
  }; // AvatarPoseRestrictions
  #pragma pack(pop)
  static check_size<sizeof(AvatarPoseRestrictions), 72 + sizeof(GlobalNamespace::AvatarPoseController*)> __GlobalNamespace_AvatarPoseRestrictionsSizeCheck;
  static_assert(sizeof(AvatarPoseRestrictions) == 0x50);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::AvatarPoseRestrictions*, "", "AvatarPoseRestrictions");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::AvatarPoseRestrictions::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AvatarPoseRestrictions::*)()>(&GlobalNamespace::AvatarPoseRestrictions::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AvatarPoseRestrictions*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AvatarPoseRestrictions::HandleAvatarPoseControllerPositionsWillBeSet
// Il2CppName: HandleAvatarPoseControllerPositionsWillBeSet
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AvatarPoseRestrictions::*)(UnityEngine::Quaternion, UnityEngine::Vector3, UnityEngine::Vector3, UnityEngine::Vector3, ByRef<UnityEngine::Vector3>, ByRef<UnityEngine::Vector3>, ByRef<UnityEngine::Vector3>)>(&GlobalNamespace::AvatarPoseRestrictions::HandleAvatarPoseControllerPositionsWillBeSet)> {
  static const MethodInfo* get() {
    static auto* headRotation = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->byval_arg;
    static auto* headPosition = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* leftHandPosition = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* rightHandPosition = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* newHeadPosition = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->this_arg;
    static auto* newLeftHandPosition = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->this_arg;
    static auto* newRightHandPosition = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AvatarPoseRestrictions*), "HandleAvatarPoseControllerPositionsWillBeSet", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{headRotation, headPosition, leftHandPosition, rightHandPosition, newHeadPosition, newLeftHandPosition, newRightHandPosition});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AvatarPoseRestrictions::LimitHandPositionRelativeToHead
// Il2CppName: LimitHandPositionRelativeToHead
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector3 (GlobalNamespace::AvatarPoseRestrictions::*)(UnityEngine::Vector3, UnityEngine::Vector3)>(&GlobalNamespace::AvatarPoseRestrictions::LimitHandPositionRelativeToHead)> {
  static const MethodInfo* get() {
    static auto* handPosition = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* headCenter = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AvatarPoseRestrictions*), "LimitHandPositionRelativeToHead", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{handPosition, headCenter});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AvatarPoseRestrictions::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
