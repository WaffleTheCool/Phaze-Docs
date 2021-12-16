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
  // Autogenerated type: OVR.OpenVR.EVRCompositorError
  // [TokenAttribute] Offset: FFFFFFFF
  struct EVRCompositorError/*, public System::Enum*/ {
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: EVRCompositorError
    constexpr EVRCompositorError(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public OVR.OpenVR.EVRCompositorError None
    static constexpr const int None = 0;
    // Get static field: static public OVR.OpenVR.EVRCompositorError None
    static OVR::OpenVR::EVRCompositorError _get_None();
    // Set static field: static public OVR.OpenVR.EVRCompositorError None
    static void _set_None(OVR::OpenVR::EVRCompositorError value);
    // static field const value: static public OVR.OpenVR.EVRCompositorError RequestFailed
    static constexpr const int RequestFailed = 1;
    // Get static field: static public OVR.OpenVR.EVRCompositorError RequestFailed
    static OVR::OpenVR::EVRCompositorError _get_RequestFailed();
    // Set static field: static public OVR.OpenVR.EVRCompositorError RequestFailed
    static void _set_RequestFailed(OVR::OpenVR::EVRCompositorError value);
    // static field const value: static public OVR.OpenVR.EVRCompositorError IncompatibleVersion
    static constexpr const int IncompatibleVersion = 100;
    // Get static field: static public OVR.OpenVR.EVRCompositorError IncompatibleVersion
    static OVR::OpenVR::EVRCompositorError _get_IncompatibleVersion();
    // Set static field: static public OVR.OpenVR.EVRCompositorError IncompatibleVersion
    static void _set_IncompatibleVersion(OVR::OpenVR::EVRCompositorError value);
    // static field const value: static public OVR.OpenVR.EVRCompositorError DoNotHaveFocus
    static constexpr const int DoNotHaveFocus = 101;
    // Get static field: static public OVR.OpenVR.EVRCompositorError DoNotHaveFocus
    static OVR::OpenVR::EVRCompositorError _get_DoNotHaveFocus();
    // Set static field: static public OVR.OpenVR.EVRCompositorError DoNotHaveFocus
    static void _set_DoNotHaveFocus(OVR::OpenVR::EVRCompositorError value);
    // static field const value: static public OVR.OpenVR.EVRCompositorError InvalidTexture
    static constexpr const int InvalidTexture = 102;
    // Get static field: static public OVR.OpenVR.EVRCompositorError InvalidTexture
    static OVR::OpenVR::EVRCompositorError _get_InvalidTexture();
    // Set static field: static public OVR.OpenVR.EVRCompositorError InvalidTexture
    static void _set_InvalidTexture(OVR::OpenVR::EVRCompositorError value);
    // static field const value: static public OVR.OpenVR.EVRCompositorError IsNotSceneApplication
    static constexpr const int IsNotSceneApplication = 103;
    // Get static field: static public OVR.OpenVR.EVRCompositorError IsNotSceneApplication
    static OVR::OpenVR::EVRCompositorError _get_IsNotSceneApplication();
    // Set static field: static public OVR.OpenVR.EVRCompositorError IsNotSceneApplication
    static void _set_IsNotSceneApplication(OVR::OpenVR::EVRCompositorError value);
    // static field const value: static public OVR.OpenVR.EVRCompositorError TextureIsOnWrongDevice
    static constexpr const int TextureIsOnWrongDevice = 104;
    // Get static field: static public OVR.OpenVR.EVRCompositorError TextureIsOnWrongDevice
    static OVR::OpenVR::EVRCompositorError _get_TextureIsOnWrongDevice();
    // Set static field: static public OVR.OpenVR.EVRCompositorError TextureIsOnWrongDevice
    static void _set_TextureIsOnWrongDevice(OVR::OpenVR::EVRCompositorError value);
    // static field const value: static public OVR.OpenVR.EVRCompositorError TextureUsesUnsupportedFormat
    static constexpr const int TextureUsesUnsupportedFormat = 105;
    // Get static field: static public OVR.OpenVR.EVRCompositorError TextureUsesUnsupportedFormat
    static OVR::OpenVR::EVRCompositorError _get_TextureUsesUnsupportedFormat();
    // Set static field: static public OVR.OpenVR.EVRCompositorError TextureUsesUnsupportedFormat
    static void _set_TextureUsesUnsupportedFormat(OVR::OpenVR::EVRCompositorError value);
    // static field const value: static public OVR.OpenVR.EVRCompositorError SharedTexturesNotSupported
    static constexpr const int SharedTexturesNotSupported = 106;
    // Get static field: static public OVR.OpenVR.EVRCompositorError SharedTexturesNotSupported
    static OVR::OpenVR::EVRCompositorError _get_SharedTexturesNotSupported();
    // Set static field: static public OVR.OpenVR.EVRCompositorError SharedTexturesNotSupported
    static void _set_SharedTexturesNotSupported(OVR::OpenVR::EVRCompositorError value);
    // static field const value: static public OVR.OpenVR.EVRCompositorError IndexOutOfRange
    static constexpr const int IndexOutOfRange = 107;
    // Get static field: static public OVR.OpenVR.EVRCompositorError IndexOutOfRange
    static OVR::OpenVR::EVRCompositorError _get_IndexOutOfRange();
    // Set static field: static public OVR.OpenVR.EVRCompositorError IndexOutOfRange
    static void _set_IndexOutOfRange(OVR::OpenVR::EVRCompositorError value);
    // static field const value: static public OVR.OpenVR.EVRCompositorError AlreadySubmitted
    static constexpr const int AlreadySubmitted = 108;
    // Get static field: static public OVR.OpenVR.EVRCompositorError AlreadySubmitted
    static OVR::OpenVR::EVRCompositorError _get_AlreadySubmitted();
    // Set static field: static public OVR.OpenVR.EVRCompositorError AlreadySubmitted
    static void _set_AlreadySubmitted(OVR::OpenVR::EVRCompositorError value);
    // static field const value: static public OVR.OpenVR.EVRCompositorError InvalidBounds
    static constexpr const int InvalidBounds = 109;
    // Get static field: static public OVR.OpenVR.EVRCompositorError InvalidBounds
    static OVR::OpenVR::EVRCompositorError _get_InvalidBounds();
    // Set static field: static public OVR.OpenVR.EVRCompositorError InvalidBounds
    static void _set_InvalidBounds(OVR::OpenVR::EVRCompositorError value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // OVR.OpenVR.EVRCompositorError
  #pragma pack(pop)
  static check_size<sizeof(EVRCompositorError), 0 + sizeof(int)> __OVR_OpenVR_EVRCompositorErrorSizeCheck;
  static_assert(sizeof(EVRCompositorError) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::EVRCompositorError, "OVR.OpenVR", "EVRCompositorError");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
