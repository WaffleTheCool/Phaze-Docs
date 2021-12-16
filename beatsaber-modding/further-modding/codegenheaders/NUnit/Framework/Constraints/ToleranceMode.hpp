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
// Type namespace: NUnit.Framework.Constraints
namespace NUnit::Framework::Constraints {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: NUnit.Framework.Constraints.ToleranceMode
  // [TokenAttribute] Offset: FFFFFFFF
  struct ToleranceMode/*, public System::Enum*/ {
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: ToleranceMode
    constexpr ToleranceMode(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public NUnit.Framework.Constraints.ToleranceMode Unset
    static constexpr const int Unset = 0;
    // Get static field: static public NUnit.Framework.Constraints.ToleranceMode Unset
    static NUnit::Framework::Constraints::ToleranceMode _get_Unset();
    // Set static field: static public NUnit.Framework.Constraints.ToleranceMode Unset
    static void _set_Unset(NUnit::Framework::Constraints::ToleranceMode value);
    // static field const value: static public NUnit.Framework.Constraints.ToleranceMode Linear
    static constexpr const int Linear = 1;
    // Get static field: static public NUnit.Framework.Constraints.ToleranceMode Linear
    static NUnit::Framework::Constraints::ToleranceMode _get_Linear();
    // Set static field: static public NUnit.Framework.Constraints.ToleranceMode Linear
    static void _set_Linear(NUnit::Framework::Constraints::ToleranceMode value);
    // static field const value: static public NUnit.Framework.Constraints.ToleranceMode Percent
    static constexpr const int Percent = 2;
    // Get static field: static public NUnit.Framework.Constraints.ToleranceMode Percent
    static NUnit::Framework::Constraints::ToleranceMode _get_Percent();
    // Set static field: static public NUnit.Framework.Constraints.ToleranceMode Percent
    static void _set_Percent(NUnit::Framework::Constraints::ToleranceMode value);
    // static field const value: static public NUnit.Framework.Constraints.ToleranceMode Ulps
    static constexpr const int Ulps = 3;
    // Get static field: static public NUnit.Framework.Constraints.ToleranceMode Ulps
    static NUnit::Framework::Constraints::ToleranceMode _get_Ulps();
    // Set static field: static public NUnit.Framework.Constraints.ToleranceMode Ulps
    static void _set_Ulps(NUnit::Framework::Constraints::ToleranceMode value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // NUnit.Framework.Constraints.ToleranceMode
  #pragma pack(pop)
  static check_size<sizeof(ToleranceMode), 0 + sizeof(int)> __NUnit_Framework_Constraints_ToleranceModeSizeCheck;
  static_assert(sizeof(ToleranceMode) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(NUnit::Framework::Constraints::ToleranceMode, "NUnit.Framework.Constraints", "ToleranceMode");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
