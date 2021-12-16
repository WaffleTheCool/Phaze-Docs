// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Size: 0x18
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: OVR.OpenVR.DistortionCoordinates_t
  // [TokenAttribute] Offset: FFFFFFFF
  struct DistortionCoordinates_t/*, public System::ValueType*/ {
    public:
    // public System.Single rfRed0
    // Size: 0x4
    // Offset: 0x0
    float rfRed0;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single rfRed1
    // Size: 0x4
    // Offset: 0x4
    float rfRed1;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single rfGreen0
    // Size: 0x4
    // Offset: 0x8
    float rfGreen0;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single rfGreen1
    // Size: 0x4
    // Offset: 0xC
    float rfGreen1;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single rfBlue0
    // Size: 0x4
    // Offset: 0x10
    float rfBlue0;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single rfBlue1
    // Size: 0x4
    // Offset: 0x14
    float rfBlue1;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Creating value type constructor for type: DistortionCoordinates_t
    constexpr DistortionCoordinates_t(float rfRed0_ = {}, float rfRed1_ = {}, float rfGreen0_ = {}, float rfGreen1_ = {}, float rfBlue0_ = {}, float rfBlue1_ = {}) noexcept : rfRed0{rfRed0_}, rfRed1{rfRed1_}, rfGreen0{rfGreen0_}, rfGreen1{rfGreen1_}, rfBlue0{rfBlue0_}, rfBlue1{rfBlue1_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Get instance field reference: public System.Single rfRed0
    float& dyn_rfRed0();
    // Get instance field reference: public System.Single rfRed1
    float& dyn_rfRed1();
    // Get instance field reference: public System.Single rfGreen0
    float& dyn_rfGreen0();
    // Get instance field reference: public System.Single rfGreen1
    float& dyn_rfGreen1();
    // Get instance field reference: public System.Single rfBlue0
    float& dyn_rfBlue0();
    // Get instance field reference: public System.Single rfBlue1
    float& dyn_rfBlue1();
  }; // OVR.OpenVR.DistortionCoordinates_t
  #pragma pack(pop)
  static check_size<sizeof(DistortionCoordinates_t), 20 + sizeof(float)> __OVR_OpenVR_DistortionCoordinates_tSizeCheck;
  static_assert(sizeof(DistortionCoordinates_t) == 0x18);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::DistortionCoordinates_t, "OVR.OpenVR", "DistortionCoordinates_t");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
