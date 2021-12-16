// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: Mono.Unity.UnityTls
#include "Mono/Unity/UnityTls.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Type namespace: Mono.Unity
namespace Mono::Unity {
  // Size: 0x8
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: Mono.Unity.UnityTls/Mono.Unity.unitytls_key_ref
  // [TokenAttribute] Offset: FFFFFFFF
  struct UnityTls::unitytls_key_ref/*, public System::ValueType*/ {
    public:
    // public System.UInt64 handle
    // Size: 0x8
    // Offset: 0x0
    uint64_t handle;
    // Field size check
    static_assert(sizeof(uint64_t) == 0x8);
    // Creating value type constructor for type: unitytls_key_ref
    constexpr unitytls_key_ref(uint64_t handle_ = {}) noexcept : handle{handle_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Creating conversion operator: operator uint64_t
    constexpr operator uint64_t() const noexcept {
      return handle;
    }
    // Get instance field reference: public System.UInt64 handle
    uint64_t& dyn_handle();
  }; // Mono.Unity.UnityTls/Mono.Unity.unitytls_key_ref
  #pragma pack(pop)
  static check_size<sizeof(UnityTls::unitytls_key_ref), 0 + sizeof(uint64_t)> __Mono_Unity_UnityTls_unitytls_key_refSizeCheck;
  static_assert(sizeof(UnityTls::unitytls_key_ref) == 0x8);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Mono::Unity::UnityTls::unitytls_key_ref, "Mono.Unity", "UnityTls/unitytls_key_ref");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
