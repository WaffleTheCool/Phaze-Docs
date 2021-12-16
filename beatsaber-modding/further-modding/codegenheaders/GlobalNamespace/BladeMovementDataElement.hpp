// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x2C
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: BladeMovementDataElement
  // [TokenAttribute] Offset: FFFFFFFF
  struct BladeMovementDataElement/*, public System::ValueType*/ {
    public:
    // public System.Single time
    // Size: 0x4
    // Offset: 0x0
    float time;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single segmentAngle
    // Size: 0x4
    // Offset: 0x4
    float segmentAngle;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public UnityEngine.Vector3 topPos
    // Size: 0xC
    // Offset: 0x8
    UnityEngine::Vector3 topPos;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // public UnityEngine.Vector3 bottomPos
    // Size: 0xC
    // Offset: 0x14
    UnityEngine::Vector3 bottomPos;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // public UnityEngine.Vector3 segmentNormal
    // Size: 0xC
    // Offset: 0x20
    UnityEngine::Vector3 segmentNormal;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // Creating value type constructor for type: BladeMovementDataElement
    constexpr BladeMovementDataElement(float time_ = {}, float segmentAngle_ = {}, UnityEngine::Vector3 topPos_ = {}, UnityEngine::Vector3 bottomPos_ = {}, UnityEngine::Vector3 segmentNormal_ = {}) noexcept : time{time_}, segmentAngle{segmentAngle_}, topPos{topPos_}, bottomPos{bottomPos_}, segmentNormal{segmentNormal_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Get instance field reference: public System.Single time
    float& dyn_time();
    // Get instance field reference: public System.Single segmentAngle
    float& dyn_segmentAngle();
    // Get instance field reference: public UnityEngine.Vector3 topPos
    UnityEngine::Vector3& dyn_topPos();
    // Get instance field reference: public UnityEngine.Vector3 bottomPos
    UnityEngine::Vector3& dyn_bottomPos();
    // Get instance field reference: public UnityEngine.Vector3 segmentNormal
    UnityEngine::Vector3& dyn_segmentNormal();
  }; // BladeMovementDataElement
  #pragma pack(pop)
  static check_size<sizeof(BladeMovementDataElement), 32 + sizeof(UnityEngine::Vector3)> __GlobalNamespace_BladeMovementDataElementSizeCheck;
  static_assert(sizeof(BladeMovementDataElement) == 0x2C);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BladeMovementDataElement, "", "BladeMovementDataElement");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
