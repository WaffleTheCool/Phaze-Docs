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
  // Size: 0x0
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: Mono.Unity.UnityTls/Mono.Unity.unitytls_key
  // [TokenAttribute] Offset: FFFFFFFF
  struct UnityTls::unitytls_key/*, public System::ValueType*/ {
    public:
    // Creating value type constructor for type: unitytls_key
    constexpr unitytls_key() noexcept {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
  }; // Mono.Unity.UnityTls/Mono.Unity.unitytls_key
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Mono::Unity::UnityTls::unitytls_key, "Mono.Unity", "UnityTls/unitytls_key");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
