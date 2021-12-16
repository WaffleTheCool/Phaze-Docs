// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: Mono.RuntimeStructs
#include "Mono/RuntimeStructs.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
// Completed includes
// Type namespace: Mono
namespace Mono {
  // Size: 0x88
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: Mono.RuntimeStructs/Mono.MonoError
  // [TokenAttribute] Offset: FFFFFFFF
  struct RuntimeStructs::MonoError/*, public System::ValueType*/ {
    public:
    // private System.UInt16 error_code
    // Size: 0x2
    // Offset: 0x0
    uint16_t error_code;
    // Field size check
    static_assert(sizeof(uint16_t) == 0x2);
    // private System.UInt16 hidden_0
    // Size: 0x2
    // Offset: 0x2
    uint16_t hidden_0;
    // Field size check
    static_assert(sizeof(uint16_t) == 0x2);
    // Padding between fields: hidden_0 and: hidden_1
    char __padding1[0x4] = {};
    // private System.IntPtr hidden_1
    // Size: 0x8
    // Offset: 0x8
    System::IntPtr hidden_1;
    // Field size check
    static_assert(sizeof(System::IntPtr) == 0x8);
    // private System.IntPtr hidden_2
    // Size: 0x8
    // Offset: 0x10
    System::IntPtr hidden_2;
    // Field size check
    static_assert(sizeof(System::IntPtr) == 0x8);
    // private System.IntPtr hidden_3
    // Size: 0x8
    // Offset: 0x18
    System::IntPtr hidden_3;
    // Field size check
    static_assert(sizeof(System::IntPtr) == 0x8);
    // private System.IntPtr hidden_4
    // Size: 0x8
    // Offset: 0x20
    System::IntPtr hidden_4;
    // Field size check
    static_assert(sizeof(System::IntPtr) == 0x8);
    // private System.IntPtr hidden_5
    // Size: 0x8
    // Offset: 0x28
    System::IntPtr hidden_5;
    // Field size check
    static_assert(sizeof(System::IntPtr) == 0x8);
    // private System.IntPtr hidden_6
    // Size: 0x8
    // Offset: 0x30
    System::IntPtr hidden_6;
    // Field size check
    static_assert(sizeof(System::IntPtr) == 0x8);
    // private System.IntPtr hidden_7
    // Size: 0x8
    // Offset: 0x38
    System::IntPtr hidden_7;
    // Field size check
    static_assert(sizeof(System::IntPtr) == 0x8);
    // private System.IntPtr hidden_8
    // Size: 0x8
    // Offset: 0x40
    System::IntPtr hidden_8;
    // Field size check
    static_assert(sizeof(System::IntPtr) == 0x8);
    // private System.IntPtr hidden_11
    // Size: 0x8
    // Offset: 0x48
    System::IntPtr hidden_11;
    // Field size check
    static_assert(sizeof(System::IntPtr) == 0x8);
    // private System.IntPtr hidden_12
    // Size: 0x8
    // Offset: 0x50
    System::IntPtr hidden_12;
    // Field size check
    static_assert(sizeof(System::IntPtr) == 0x8);
    // private System.IntPtr hidden_13
    // Size: 0x8
    // Offset: 0x58
    System::IntPtr hidden_13;
    // Field size check
    static_assert(sizeof(System::IntPtr) == 0x8);
    // private System.IntPtr hidden_14
    // Size: 0x8
    // Offset: 0x60
    System::IntPtr hidden_14;
    // Field size check
    static_assert(sizeof(System::IntPtr) == 0x8);
    // private System.IntPtr hidden_15
    // Size: 0x8
    // Offset: 0x68
    System::IntPtr hidden_15;
    // Field size check
    static_assert(sizeof(System::IntPtr) == 0x8);
    // private System.IntPtr hidden_16
    // Size: 0x8
    // Offset: 0x70
    System::IntPtr hidden_16;
    // Field size check
    static_assert(sizeof(System::IntPtr) == 0x8);
    // private System.IntPtr hidden_17
    // Size: 0x8
    // Offset: 0x78
    System::IntPtr hidden_17;
    // Field size check
    static_assert(sizeof(System::IntPtr) == 0x8);
    // private System.IntPtr hidden_18
    // Size: 0x8
    // Offset: 0x80
    System::IntPtr hidden_18;
    // Field size check
    static_assert(sizeof(System::IntPtr) == 0x8);
    // Creating value type constructor for type: MonoError
    constexpr MonoError(uint16_t error_code_ = {}, uint16_t hidden_0_ = {}, System::IntPtr hidden_1_ = {}, System::IntPtr hidden_2_ = {}, System::IntPtr hidden_3_ = {}, System::IntPtr hidden_4_ = {}, System::IntPtr hidden_5_ = {}, System::IntPtr hidden_6_ = {}, System::IntPtr hidden_7_ = {}, System::IntPtr hidden_8_ = {}, System::IntPtr hidden_11_ = {}, System::IntPtr hidden_12_ = {}, System::IntPtr hidden_13_ = {}, System::IntPtr hidden_14_ = {}, System::IntPtr hidden_15_ = {}, System::IntPtr hidden_16_ = {}, System::IntPtr hidden_17_ = {}, System::IntPtr hidden_18_ = {}) noexcept : error_code{error_code_}, hidden_0{hidden_0_}, hidden_1{hidden_1_}, hidden_2{hidden_2_}, hidden_3{hidden_3_}, hidden_4{hidden_4_}, hidden_5{hidden_5_}, hidden_6{hidden_6_}, hidden_7{hidden_7_}, hidden_8{hidden_8_}, hidden_11{hidden_11_}, hidden_12{hidden_12_}, hidden_13{hidden_13_}, hidden_14{hidden_14_}, hidden_15{hidden_15_}, hidden_16{hidden_16_}, hidden_17{hidden_17_}, hidden_18{hidden_18_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Get instance field reference: private System.UInt16 error_code
    uint16_t& dyn_error_code();
    // Get instance field reference: private System.UInt16 hidden_0
    uint16_t& dyn_hidden_0();
    // Get instance field reference: private System.IntPtr hidden_1
    System::IntPtr& dyn_hidden_1();
    // Get instance field reference: private System.IntPtr hidden_2
    System::IntPtr& dyn_hidden_2();
    // Get instance field reference: private System.IntPtr hidden_3
    System::IntPtr& dyn_hidden_3();
    // Get instance field reference: private System.IntPtr hidden_4
    System::IntPtr& dyn_hidden_4();
    // Get instance field reference: private System.IntPtr hidden_5
    System::IntPtr& dyn_hidden_5();
    // Get instance field reference: private System.IntPtr hidden_6
    System::IntPtr& dyn_hidden_6();
    // Get instance field reference: private System.IntPtr hidden_7
    System::IntPtr& dyn_hidden_7();
    // Get instance field reference: private System.IntPtr hidden_8
    System::IntPtr& dyn_hidden_8();
    // Get instance field reference: private System.IntPtr hidden_11
    System::IntPtr& dyn_hidden_11();
    // Get instance field reference: private System.IntPtr hidden_12
    System::IntPtr& dyn_hidden_12();
    // Get instance field reference: private System.IntPtr hidden_13
    System::IntPtr& dyn_hidden_13();
    // Get instance field reference: private System.IntPtr hidden_14
    System::IntPtr& dyn_hidden_14();
    // Get instance field reference: private System.IntPtr hidden_15
    System::IntPtr& dyn_hidden_15();
    // Get instance field reference: private System.IntPtr hidden_16
    System::IntPtr& dyn_hidden_16();
    // Get instance field reference: private System.IntPtr hidden_17
    System::IntPtr& dyn_hidden_17();
    // Get instance field reference: private System.IntPtr hidden_18
    System::IntPtr& dyn_hidden_18();
  }; // Mono.RuntimeStructs/Mono.MonoError
  #pragma pack(pop)
  static check_size<sizeof(RuntimeStructs::MonoError), 128 + sizeof(System::IntPtr)> __Mono_RuntimeStructs_MonoErrorSizeCheck;
  static_assert(sizeof(RuntimeStructs::MonoError) == 0x88);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Mono::RuntimeStructs::MonoError, "Mono", "RuntimeStructs/MonoError");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
