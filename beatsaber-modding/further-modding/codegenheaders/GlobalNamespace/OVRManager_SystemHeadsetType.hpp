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
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: OVRManager/SystemHeadsetType
  // [TokenAttribute] Offset: FFFFFFFF
  struct OVRManager_SystemHeadsetType/*, public System::Enum*/ {
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: OVRManager_SystemHeadsetType
    constexpr OVRManager_SystemHeadsetType(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public OVRManager/SystemHeadsetType None
    static constexpr const int None = 0;
    // Get static field: static public OVRManager/SystemHeadsetType None
    static GlobalNamespace::OVRManager_SystemHeadsetType _get_None();
    // Set static field: static public OVRManager/SystemHeadsetType None
    static void _set_None(GlobalNamespace::OVRManager_SystemHeadsetType value);
    // static field const value: static public OVRManager/SystemHeadsetType Oculus_Quest
    static constexpr const int Oculus_Quest = 8;
    // Get static field: static public OVRManager/SystemHeadsetType Oculus_Quest
    static GlobalNamespace::OVRManager_SystemHeadsetType _get_Oculus_Quest();
    // Set static field: static public OVRManager/SystemHeadsetType Oculus_Quest
    static void _set_Oculus_Quest(GlobalNamespace::OVRManager_SystemHeadsetType value);
    // static field const value: static public OVRManager/SystemHeadsetType Oculus_Quest_2
    static constexpr const int Oculus_Quest_2 = 9;
    // Get static field: static public OVRManager/SystemHeadsetType Oculus_Quest_2
    static GlobalNamespace::OVRManager_SystemHeadsetType _get_Oculus_Quest_2();
    // Set static field: static public OVRManager/SystemHeadsetType Oculus_Quest_2
    static void _set_Oculus_Quest_2(GlobalNamespace::OVRManager_SystemHeadsetType value);
    // static field const value: static public OVRManager/SystemHeadsetType Placeholder_10
    static constexpr const int Placeholder_10 = 10;
    // Get static field: static public OVRManager/SystemHeadsetType Placeholder_10
    static GlobalNamespace::OVRManager_SystemHeadsetType _get_Placeholder_10();
    // Set static field: static public OVRManager/SystemHeadsetType Placeholder_10
    static void _set_Placeholder_10(GlobalNamespace::OVRManager_SystemHeadsetType value);
    // static field const value: static public OVRManager/SystemHeadsetType Placeholder_11
    static constexpr const int Placeholder_11 = 11;
    // Get static field: static public OVRManager/SystemHeadsetType Placeholder_11
    static GlobalNamespace::OVRManager_SystemHeadsetType _get_Placeholder_11();
    // Set static field: static public OVRManager/SystemHeadsetType Placeholder_11
    static void _set_Placeholder_11(GlobalNamespace::OVRManager_SystemHeadsetType value);
    // static field const value: static public OVRManager/SystemHeadsetType Placeholder_12
    static constexpr const int Placeholder_12 = 12;
    // Get static field: static public OVRManager/SystemHeadsetType Placeholder_12
    static GlobalNamespace::OVRManager_SystemHeadsetType _get_Placeholder_12();
    // Set static field: static public OVRManager/SystemHeadsetType Placeholder_12
    static void _set_Placeholder_12(GlobalNamespace::OVRManager_SystemHeadsetType value);
    // static field const value: static public OVRManager/SystemHeadsetType Placeholder_13
    static constexpr const int Placeholder_13 = 13;
    // Get static field: static public OVRManager/SystemHeadsetType Placeholder_13
    static GlobalNamespace::OVRManager_SystemHeadsetType _get_Placeholder_13();
    // Set static field: static public OVRManager/SystemHeadsetType Placeholder_13
    static void _set_Placeholder_13(GlobalNamespace::OVRManager_SystemHeadsetType value);
    // static field const value: static public OVRManager/SystemHeadsetType Placeholder_14
    static constexpr const int Placeholder_14 = 14;
    // Get static field: static public OVRManager/SystemHeadsetType Placeholder_14
    static GlobalNamespace::OVRManager_SystemHeadsetType _get_Placeholder_14();
    // Set static field: static public OVRManager/SystemHeadsetType Placeholder_14
    static void _set_Placeholder_14(GlobalNamespace::OVRManager_SystemHeadsetType value);
    // static field const value: static public OVRManager/SystemHeadsetType Rift_DK1
    static constexpr const int Rift_DK1 = 4096;
    // Get static field: static public OVRManager/SystemHeadsetType Rift_DK1
    static GlobalNamespace::OVRManager_SystemHeadsetType _get_Rift_DK1();
    // Set static field: static public OVRManager/SystemHeadsetType Rift_DK1
    static void _set_Rift_DK1(GlobalNamespace::OVRManager_SystemHeadsetType value);
    // static field const value: static public OVRManager/SystemHeadsetType Rift_DK2
    static constexpr const int Rift_DK2 = 4097;
    // Get static field: static public OVRManager/SystemHeadsetType Rift_DK2
    static GlobalNamespace::OVRManager_SystemHeadsetType _get_Rift_DK2();
    // Set static field: static public OVRManager/SystemHeadsetType Rift_DK2
    static void _set_Rift_DK2(GlobalNamespace::OVRManager_SystemHeadsetType value);
    // static field const value: static public OVRManager/SystemHeadsetType Rift_CV1
    static constexpr const int Rift_CV1 = 4098;
    // Get static field: static public OVRManager/SystemHeadsetType Rift_CV1
    static GlobalNamespace::OVRManager_SystemHeadsetType _get_Rift_CV1();
    // Set static field: static public OVRManager/SystemHeadsetType Rift_CV1
    static void _set_Rift_CV1(GlobalNamespace::OVRManager_SystemHeadsetType value);
    // static field const value: static public OVRManager/SystemHeadsetType Rift_CB
    static constexpr const int Rift_CB = 4099;
    // Get static field: static public OVRManager/SystemHeadsetType Rift_CB
    static GlobalNamespace::OVRManager_SystemHeadsetType _get_Rift_CB();
    // Set static field: static public OVRManager/SystemHeadsetType Rift_CB
    static void _set_Rift_CB(GlobalNamespace::OVRManager_SystemHeadsetType value);
    // static field const value: static public OVRManager/SystemHeadsetType Rift_S
    static constexpr const int Rift_S = 4100;
    // Get static field: static public OVRManager/SystemHeadsetType Rift_S
    static GlobalNamespace::OVRManager_SystemHeadsetType _get_Rift_S();
    // Set static field: static public OVRManager/SystemHeadsetType Rift_S
    static void _set_Rift_S(GlobalNamespace::OVRManager_SystemHeadsetType value);
    // static field const value: static public OVRManager/SystemHeadsetType Oculus_Link_Quest
    static constexpr const int Oculus_Link_Quest = 4101;
    // Get static field: static public OVRManager/SystemHeadsetType Oculus_Link_Quest
    static GlobalNamespace::OVRManager_SystemHeadsetType _get_Oculus_Link_Quest();
    // Set static field: static public OVRManager/SystemHeadsetType Oculus_Link_Quest
    static void _set_Oculus_Link_Quest(GlobalNamespace::OVRManager_SystemHeadsetType value);
    // static field const value: static public OVRManager/SystemHeadsetType Oculus_Link_Quest_2
    static constexpr const int Oculus_Link_Quest_2 = 4102;
    // Get static field: static public OVRManager/SystemHeadsetType Oculus_Link_Quest_2
    static GlobalNamespace::OVRManager_SystemHeadsetType _get_Oculus_Link_Quest_2();
    // Set static field: static public OVRManager/SystemHeadsetType Oculus_Link_Quest_2
    static void _set_Oculus_Link_Quest_2(GlobalNamespace::OVRManager_SystemHeadsetType value);
    // static field const value: static public OVRManager/SystemHeadsetType PC_Placeholder_4103
    static constexpr const int PC_Placeholder_4103 = 4103;
    // Get static field: static public OVRManager/SystemHeadsetType PC_Placeholder_4103
    static GlobalNamespace::OVRManager_SystemHeadsetType _get_PC_Placeholder_4103();
    // Set static field: static public OVRManager/SystemHeadsetType PC_Placeholder_4103
    static void _set_PC_Placeholder_4103(GlobalNamespace::OVRManager_SystemHeadsetType value);
    // static field const value: static public OVRManager/SystemHeadsetType PC_Placeholder_4104
    static constexpr const int PC_Placeholder_4104 = 4104;
    // Get static field: static public OVRManager/SystemHeadsetType PC_Placeholder_4104
    static GlobalNamespace::OVRManager_SystemHeadsetType _get_PC_Placeholder_4104();
    // Set static field: static public OVRManager/SystemHeadsetType PC_Placeholder_4104
    static void _set_PC_Placeholder_4104(GlobalNamespace::OVRManager_SystemHeadsetType value);
    // static field const value: static public OVRManager/SystemHeadsetType PC_Placeholder_4105
    static constexpr const int PC_Placeholder_4105 = 4105;
    // Get static field: static public OVRManager/SystemHeadsetType PC_Placeholder_4105
    static GlobalNamespace::OVRManager_SystemHeadsetType _get_PC_Placeholder_4105();
    // Set static field: static public OVRManager/SystemHeadsetType PC_Placeholder_4105
    static void _set_PC_Placeholder_4105(GlobalNamespace::OVRManager_SystemHeadsetType value);
    // static field const value: static public OVRManager/SystemHeadsetType PC_Placeholder_4106
    static constexpr const int PC_Placeholder_4106 = 4106;
    // Get static field: static public OVRManager/SystemHeadsetType PC_Placeholder_4106
    static GlobalNamespace::OVRManager_SystemHeadsetType _get_PC_Placeholder_4106();
    // Set static field: static public OVRManager/SystemHeadsetType PC_Placeholder_4106
    static void _set_PC_Placeholder_4106(GlobalNamespace::OVRManager_SystemHeadsetType value);
    // static field const value: static public OVRManager/SystemHeadsetType PC_Placeholder_4107
    static constexpr const int PC_Placeholder_4107 = 4107;
    // Get static field: static public OVRManager/SystemHeadsetType PC_Placeholder_4107
    static GlobalNamespace::OVRManager_SystemHeadsetType _get_PC_Placeholder_4107();
    // Set static field: static public OVRManager/SystemHeadsetType PC_Placeholder_4107
    static void _set_PC_Placeholder_4107(GlobalNamespace::OVRManager_SystemHeadsetType value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // OVRManager/SystemHeadsetType
  #pragma pack(pop)
  static check_size<sizeof(OVRManager_SystemHeadsetType), 0 + sizeof(int)> __GlobalNamespace_OVRManager_SystemHeadsetTypeSizeCheck;
  static_assert(sizeof(OVRManager_SystemHeadsetType) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRManager_SystemHeadsetType, "", "OVRManager/SystemHeadsetType");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
