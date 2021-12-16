// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: OVRInput
#include "GlobalNamespace/OVRInput.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: OVRInput/RawButton
  // [TokenAttribute] Offset: FFFFFFFF
  // [FlagsAttribute] Offset: FFFFFFFF
  struct OVRInput::RawButton/*, public System::Enum*/ {
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: RawButton
    constexpr RawButton(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public OVRInput/RawButton None
    static constexpr const int None = 0;
    // Get static field: static public OVRInput/RawButton None
    static GlobalNamespace::OVRInput::RawButton _get_None();
    // Set static field: static public OVRInput/RawButton None
    static void _set_None(GlobalNamespace::OVRInput::RawButton value);
    // static field const value: static public OVRInput/RawButton A
    static constexpr const int A = 1;
    // Get static field: static public OVRInput/RawButton A
    static GlobalNamespace::OVRInput::RawButton _get_A();
    // Set static field: static public OVRInput/RawButton A
    static void _set_A(GlobalNamespace::OVRInput::RawButton value);
    // static field const value: static public OVRInput/RawButton B
    static constexpr const int B = 2;
    // Get static field: static public OVRInput/RawButton B
    static GlobalNamespace::OVRInput::RawButton _get_B();
    // Set static field: static public OVRInput/RawButton B
    static void _set_B(GlobalNamespace::OVRInput::RawButton value);
    // static field const value: static public OVRInput/RawButton X
    static constexpr const int X = 256;
    // Get static field: static public OVRInput/RawButton X
    static GlobalNamespace::OVRInput::RawButton _get_X();
    // Set static field: static public OVRInput/RawButton X
    static void _set_X(GlobalNamespace::OVRInput::RawButton value);
    // static field const value: static public OVRInput/RawButton Y
    static constexpr const int Y = 512;
    // Get static field: static public OVRInput/RawButton Y
    static GlobalNamespace::OVRInput::RawButton _get_Y();
    // Set static field: static public OVRInput/RawButton Y
    static void _set_Y(GlobalNamespace::OVRInput::RawButton value);
    // static field const value: static public OVRInput/RawButton Start
    static constexpr const int Start = 1048576;
    // Get static field: static public OVRInput/RawButton Start
    static GlobalNamespace::OVRInput::RawButton _get_Start();
    // Set static field: static public OVRInput/RawButton Start
    static void _set_Start(GlobalNamespace::OVRInput::RawButton value);
    // static field const value: static public OVRInput/RawButton Back
    static constexpr const int Back = 2097152;
    // Get static field: static public OVRInput/RawButton Back
    static GlobalNamespace::OVRInput::RawButton _get_Back();
    // Set static field: static public OVRInput/RawButton Back
    static void _set_Back(GlobalNamespace::OVRInput::RawButton value);
    // static field const value: static public OVRInput/RawButton LShoulder
    static constexpr const int LShoulder = 2048;
    // Get static field: static public OVRInput/RawButton LShoulder
    static GlobalNamespace::OVRInput::RawButton _get_LShoulder();
    // Set static field: static public OVRInput/RawButton LShoulder
    static void _set_LShoulder(GlobalNamespace::OVRInput::RawButton value);
    // static field const value: static public OVRInput/RawButton LIndexTrigger
    static constexpr const int LIndexTrigger = 268435456;
    // Get static field: static public OVRInput/RawButton LIndexTrigger
    static GlobalNamespace::OVRInput::RawButton _get_LIndexTrigger();
    // Set static field: static public OVRInput/RawButton LIndexTrigger
    static void _set_LIndexTrigger(GlobalNamespace::OVRInput::RawButton value);
    // static field const value: static public OVRInput/RawButton LHandTrigger
    static constexpr const int LHandTrigger = 536870912;
    // Get static field: static public OVRInput/RawButton LHandTrigger
    static GlobalNamespace::OVRInput::RawButton _get_LHandTrigger();
    // Set static field: static public OVRInput/RawButton LHandTrigger
    static void _set_LHandTrigger(GlobalNamespace::OVRInput::RawButton value);
    // static field const value: static public OVRInput/RawButton LThumbstick
    static constexpr const int LThumbstick = 1024;
    // Get static field: static public OVRInput/RawButton LThumbstick
    static GlobalNamespace::OVRInput::RawButton _get_LThumbstick();
    // Set static field: static public OVRInput/RawButton LThumbstick
    static void _set_LThumbstick(GlobalNamespace::OVRInput::RawButton value);
    // static field const value: static public OVRInput/RawButton LThumbstickUp
    static constexpr const int LThumbstickUp = 16;
    // Get static field: static public OVRInput/RawButton LThumbstickUp
    static GlobalNamespace::OVRInput::RawButton _get_LThumbstickUp();
    // Set static field: static public OVRInput/RawButton LThumbstickUp
    static void _set_LThumbstickUp(GlobalNamespace::OVRInput::RawButton value);
    // static field const value: static public OVRInput/RawButton LThumbstickDown
    static constexpr const int LThumbstickDown = 32;
    // Get static field: static public OVRInput/RawButton LThumbstickDown
    static GlobalNamespace::OVRInput::RawButton _get_LThumbstickDown();
    // Set static field: static public OVRInput/RawButton LThumbstickDown
    static void _set_LThumbstickDown(GlobalNamespace::OVRInput::RawButton value);
    // static field const value: static public OVRInput/RawButton LThumbstickLeft
    static constexpr const int LThumbstickLeft = 64;
    // Get static field: static public OVRInput/RawButton LThumbstickLeft
    static GlobalNamespace::OVRInput::RawButton _get_LThumbstickLeft();
    // Set static field: static public OVRInput/RawButton LThumbstickLeft
    static void _set_LThumbstickLeft(GlobalNamespace::OVRInput::RawButton value);
    // static field const value: static public OVRInput/RawButton LThumbstickRight
    static constexpr const int LThumbstickRight = 128;
    // Get static field: static public OVRInput/RawButton LThumbstickRight
    static GlobalNamespace::OVRInput::RawButton _get_LThumbstickRight();
    // Set static field: static public OVRInput/RawButton LThumbstickRight
    static void _set_LThumbstickRight(GlobalNamespace::OVRInput::RawButton value);
    // static field const value: static public OVRInput/RawButton LTouchpad
    static constexpr const int LTouchpad = 1073741824;
    // Get static field: static public OVRInput/RawButton LTouchpad
    static GlobalNamespace::OVRInput::RawButton _get_LTouchpad();
    // Set static field: static public OVRInput/RawButton LTouchpad
    static void _set_LTouchpad(GlobalNamespace::OVRInput::RawButton value);
    // static field const value: static public OVRInput/RawButton RShoulder
    static constexpr const int RShoulder = 8;
    // Get static field: static public OVRInput/RawButton RShoulder
    static GlobalNamespace::OVRInput::RawButton _get_RShoulder();
    // Set static field: static public OVRInput/RawButton RShoulder
    static void _set_RShoulder(GlobalNamespace::OVRInput::RawButton value);
    // static field const value: static public OVRInput/RawButton RIndexTrigger
    static constexpr const int RIndexTrigger = 67108864;
    // Get static field: static public OVRInput/RawButton RIndexTrigger
    static GlobalNamespace::OVRInput::RawButton _get_RIndexTrigger();
    // Set static field: static public OVRInput/RawButton RIndexTrigger
    static void _set_RIndexTrigger(GlobalNamespace::OVRInput::RawButton value);
    // static field const value: static public OVRInput/RawButton RHandTrigger
    static constexpr const int RHandTrigger = 134217728;
    // Get static field: static public OVRInput/RawButton RHandTrigger
    static GlobalNamespace::OVRInput::RawButton _get_RHandTrigger();
    // Set static field: static public OVRInput/RawButton RHandTrigger
    static void _set_RHandTrigger(GlobalNamespace::OVRInput::RawButton value);
    // static field const value: static public OVRInput/RawButton RThumbstick
    static constexpr const int RThumbstick = 4;
    // Get static field: static public OVRInput/RawButton RThumbstick
    static GlobalNamespace::OVRInput::RawButton _get_RThumbstick();
    // Set static field: static public OVRInput/RawButton RThumbstick
    static void _set_RThumbstick(GlobalNamespace::OVRInput::RawButton value);
    // static field const value: static public OVRInput/RawButton RThumbstickUp
    static constexpr const int RThumbstickUp = 4096;
    // Get static field: static public OVRInput/RawButton RThumbstickUp
    static GlobalNamespace::OVRInput::RawButton _get_RThumbstickUp();
    // Set static field: static public OVRInput/RawButton RThumbstickUp
    static void _set_RThumbstickUp(GlobalNamespace::OVRInput::RawButton value);
    // static field const value: static public OVRInput/RawButton RThumbstickDown
    static constexpr const int RThumbstickDown = 8192;
    // Get static field: static public OVRInput/RawButton RThumbstickDown
    static GlobalNamespace::OVRInput::RawButton _get_RThumbstickDown();
    // Set static field: static public OVRInput/RawButton RThumbstickDown
    static void _set_RThumbstickDown(GlobalNamespace::OVRInput::RawButton value);
    // static field const value: static public OVRInput/RawButton RThumbstickLeft
    static constexpr const int RThumbstickLeft = 16384;
    // Get static field: static public OVRInput/RawButton RThumbstickLeft
    static GlobalNamespace::OVRInput::RawButton _get_RThumbstickLeft();
    // Set static field: static public OVRInput/RawButton RThumbstickLeft
    static void _set_RThumbstickLeft(GlobalNamespace::OVRInput::RawButton value);
    // static field const value: static public OVRInput/RawButton RThumbstickRight
    static constexpr const int RThumbstickRight = 32768;
    // Get static field: static public OVRInput/RawButton RThumbstickRight
    static GlobalNamespace::OVRInput::RawButton _get_RThumbstickRight();
    // Set static field: static public OVRInput/RawButton RThumbstickRight
    static void _set_RThumbstickRight(GlobalNamespace::OVRInput::RawButton value);
    // static field const value: static public OVRInput/RawButton RTouchpad
    static constexpr const int RTouchpad = -2147483648;
    // Get static field: static public OVRInput/RawButton RTouchpad
    static GlobalNamespace::OVRInput::RawButton _get_RTouchpad();
    // Set static field: static public OVRInput/RawButton RTouchpad
    static void _set_RTouchpad(GlobalNamespace::OVRInput::RawButton value);
    // static field const value: static public OVRInput/RawButton DpadUp
    static constexpr const int DpadUp = 65536;
    // Get static field: static public OVRInput/RawButton DpadUp
    static GlobalNamespace::OVRInput::RawButton _get_DpadUp();
    // Set static field: static public OVRInput/RawButton DpadUp
    static void _set_DpadUp(GlobalNamespace::OVRInput::RawButton value);
    // static field const value: static public OVRInput/RawButton DpadDown
    static constexpr const int DpadDown = 131072;
    // Get static field: static public OVRInput/RawButton DpadDown
    static GlobalNamespace::OVRInput::RawButton _get_DpadDown();
    // Set static field: static public OVRInput/RawButton DpadDown
    static void _set_DpadDown(GlobalNamespace::OVRInput::RawButton value);
    // static field const value: static public OVRInput/RawButton DpadLeft
    static constexpr const int DpadLeft = 262144;
    // Get static field: static public OVRInput/RawButton DpadLeft
    static GlobalNamespace::OVRInput::RawButton _get_DpadLeft();
    // Set static field: static public OVRInput/RawButton DpadLeft
    static void _set_DpadLeft(GlobalNamespace::OVRInput::RawButton value);
    // static field const value: static public OVRInput/RawButton DpadRight
    static constexpr const int DpadRight = 524288;
    // Get static field: static public OVRInput/RawButton DpadRight
    static GlobalNamespace::OVRInput::RawButton _get_DpadRight();
    // Set static field: static public OVRInput/RawButton DpadRight
    static void _set_DpadRight(GlobalNamespace::OVRInput::RawButton value);
    // static field const value: static public OVRInput/RawButton Any
    static constexpr const int Any = -1;
    // Get static field: static public OVRInput/RawButton Any
    static GlobalNamespace::OVRInput::RawButton _get_Any();
    // Set static field: static public OVRInput/RawButton Any
    static void _set_Any(GlobalNamespace::OVRInput::RawButton value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // OVRInput/RawButton
  #pragma pack(pop)
  static check_size<sizeof(OVRInput::RawButton), 0 + sizeof(int)> __GlobalNamespace_OVRInput_RawButtonSizeCheck;
  static_assert(sizeof(OVRInput::RawButton) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRInput::RawButton, "", "OVRInput/RawButton");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
