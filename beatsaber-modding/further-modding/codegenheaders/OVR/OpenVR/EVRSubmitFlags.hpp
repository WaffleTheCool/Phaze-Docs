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
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: OVR.OpenVR.EVRSubmitFlags
  // [TokenAttribute] Offset: FFFFFFFF
  struct EVRSubmitFlags/*, public System::Enum*/ {
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: EVRSubmitFlags
    constexpr EVRSubmitFlags(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public OVR.OpenVR.EVRSubmitFlags Submit_Default
    static constexpr const int Submit_Default = 0;
    // Get static field: static public OVR.OpenVR.EVRSubmitFlags Submit_Default
    static OVR::OpenVR::EVRSubmitFlags _get_Submit_Default();
    // Set static field: static public OVR.OpenVR.EVRSubmitFlags Submit_Default
    static void _set_Submit_Default(OVR::OpenVR::EVRSubmitFlags value);
    // static field const value: static public OVR.OpenVR.EVRSubmitFlags Submit_LensDistortionAlreadyApplied
    static constexpr const int Submit_LensDistortionAlreadyApplied = 1;
    // Get static field: static public OVR.OpenVR.EVRSubmitFlags Submit_LensDistortionAlreadyApplied
    static OVR::OpenVR::EVRSubmitFlags _get_Submit_LensDistortionAlreadyApplied();
    // Set static field: static public OVR.OpenVR.EVRSubmitFlags Submit_LensDistortionAlreadyApplied
    static void _set_Submit_LensDistortionAlreadyApplied(OVR::OpenVR::EVRSubmitFlags value);
    // static field const value: static public OVR.OpenVR.EVRSubmitFlags Submit_GlRenderBuffer
    static constexpr const int Submit_GlRenderBuffer = 2;
    // Get static field: static public OVR.OpenVR.EVRSubmitFlags Submit_GlRenderBuffer
    static OVR::OpenVR::EVRSubmitFlags _get_Submit_GlRenderBuffer();
    // Set static field: static public OVR.OpenVR.EVRSubmitFlags Submit_GlRenderBuffer
    static void _set_Submit_GlRenderBuffer(OVR::OpenVR::EVRSubmitFlags value);
    // static field const value: static public OVR.OpenVR.EVRSubmitFlags Submit_Reserved
    static constexpr const int Submit_Reserved = 4;
    // Get static field: static public OVR.OpenVR.EVRSubmitFlags Submit_Reserved
    static OVR::OpenVR::EVRSubmitFlags _get_Submit_Reserved();
    // Set static field: static public OVR.OpenVR.EVRSubmitFlags Submit_Reserved
    static void _set_Submit_Reserved(OVR::OpenVR::EVRSubmitFlags value);
    // static field const value: static public OVR.OpenVR.EVRSubmitFlags Submit_TextureWithPose
    static constexpr const int Submit_TextureWithPose = 8;
    // Get static field: static public OVR.OpenVR.EVRSubmitFlags Submit_TextureWithPose
    static OVR::OpenVR::EVRSubmitFlags _get_Submit_TextureWithPose();
    // Set static field: static public OVR.OpenVR.EVRSubmitFlags Submit_TextureWithPose
    static void _set_Submit_TextureWithPose(OVR::OpenVR::EVRSubmitFlags value);
    // static field const value: static public OVR.OpenVR.EVRSubmitFlags Submit_TextureWithDepth
    static constexpr const int Submit_TextureWithDepth = 16;
    // Get static field: static public OVR.OpenVR.EVRSubmitFlags Submit_TextureWithDepth
    static OVR::OpenVR::EVRSubmitFlags _get_Submit_TextureWithDepth();
    // Set static field: static public OVR.OpenVR.EVRSubmitFlags Submit_TextureWithDepth
    static void _set_Submit_TextureWithDepth(OVR::OpenVR::EVRSubmitFlags value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // OVR.OpenVR.EVRSubmitFlags
  #pragma pack(pop)
  static check_size<sizeof(EVRSubmitFlags), 0 + sizeof(int)> __OVR_OpenVR_EVRSubmitFlagsSizeCheck;
  static_assert(sizeof(EVRSubmitFlags) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::EVRSubmitFlags, "OVR.OpenVR", "EVRSubmitFlags");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
