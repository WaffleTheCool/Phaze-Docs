// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: OVR.OpenVR.HmdMatrix44_t
#include "OVR/OpenVR/HmdMatrix44_t.hpp"
// Completed includes
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Size: 0x70
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: OVR.OpenVR.Compositor_OverlaySettings
  // [TokenAttribute] Offset: FFFFFFFF
  struct Compositor_OverlaySettings/*, public System::ValueType*/ {
    public:
    // public System.UInt32 size
    // Size: 0x4
    // Offset: 0x0
    uint size;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // public System.Boolean curved
    // Size: 0x1
    // Offset: 0x4
    bool curved;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean antialias
    // Size: 0x1
    // Offset: 0x5
    bool antialias;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: antialias and: scale
    char __padding2[0x2] = {};
    // public System.Single scale
    // Size: 0x4
    // Offset: 0x8
    float scale;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single distance
    // Size: 0x4
    // Offset: 0xC
    float distance;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single alpha
    // Size: 0x4
    // Offset: 0x10
    float alpha;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single uOffset
    // Size: 0x4
    // Offset: 0x14
    float uOffset;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single vOffset
    // Size: 0x4
    // Offset: 0x18
    float vOffset;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single uScale
    // Size: 0x4
    // Offset: 0x1C
    float uScale;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single vScale
    // Size: 0x4
    // Offset: 0x20
    float vScale;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single gridDivs
    // Size: 0x4
    // Offset: 0x24
    float gridDivs;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single gridWidth
    // Size: 0x4
    // Offset: 0x28
    float gridWidth;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single gridScale
    // Size: 0x4
    // Offset: 0x2C
    float gridScale;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public OVR.OpenVR.HmdMatrix44_t transform
    // Size: 0x40
    // Offset: 0x30
    OVR::OpenVR::HmdMatrix44_t transform;
    // Field size check
    static_assert(sizeof(OVR::OpenVR::HmdMatrix44_t) == 0x40);
    // Creating value type constructor for type: Compositor_OverlaySettings
    constexpr Compositor_OverlaySettings(uint size_ = {}, bool curved_ = {}, bool antialias_ = {}, float scale_ = {}, float distance_ = {}, float alpha_ = {}, float uOffset_ = {}, float vOffset_ = {}, float uScale_ = {}, float vScale_ = {}, float gridDivs_ = {}, float gridWidth_ = {}, float gridScale_ = {}, OVR::OpenVR::HmdMatrix44_t transform_ = {}) noexcept : size{size_}, curved{curved_}, antialias{antialias_}, scale{scale_}, distance{distance_}, alpha{alpha_}, uOffset{uOffset_}, vOffset{vOffset_}, uScale{uScale_}, vScale{vScale_}, gridDivs{gridDivs_}, gridWidth{gridWidth_}, gridScale{gridScale_}, transform{transform_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Get instance field reference: public System.UInt32 size
    uint& dyn_size();
    // Get instance field reference: public System.Boolean curved
    bool& dyn_curved();
    // Get instance field reference: public System.Boolean antialias
    bool& dyn_antialias();
    // Get instance field reference: public System.Single scale
    float& dyn_scale();
    // Get instance field reference: public System.Single distance
    float& dyn_distance();
    // Get instance field reference: public System.Single alpha
    float& dyn_alpha();
    // Get instance field reference: public System.Single uOffset
    float& dyn_uOffset();
    // Get instance field reference: public System.Single vOffset
    float& dyn_vOffset();
    // Get instance field reference: public System.Single uScale
    float& dyn_uScale();
    // Get instance field reference: public System.Single vScale
    float& dyn_vScale();
    // Get instance field reference: public System.Single gridDivs
    float& dyn_gridDivs();
    // Get instance field reference: public System.Single gridWidth
    float& dyn_gridWidth();
    // Get instance field reference: public System.Single gridScale
    float& dyn_gridScale();
    // Get instance field reference: public OVR.OpenVR.HmdMatrix44_t transform
    OVR::OpenVR::HmdMatrix44_t& dyn_transform();
  }; // OVR.OpenVR.Compositor_OverlaySettings
  #pragma pack(pop)
  static check_size<sizeof(Compositor_OverlaySettings), 48 + sizeof(OVR::OpenVR::HmdMatrix44_t)> __OVR_OpenVR_Compositor_OverlaySettingsSizeCheck;
  static_assert(sizeof(Compositor_OverlaySettings) == 0x70);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::Compositor_OverlaySettings, "OVR.OpenVR", "Compositor_OverlaySettings");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
