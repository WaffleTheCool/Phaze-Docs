// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: NUnit.Framework.Constraints.ToleranceMode
#include "NUnit/Framework/Constraints/ToleranceMode.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: NUnit.Framework.Constraints
namespace NUnit::Framework::Constraints {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: NUnit.Framework.Constraints.Tolerance
  // [TokenAttribute] Offset: FFFFFFFF
  class Tolerance : public ::Il2CppObject {
    public:
    // private readonly NUnit.Framework.Constraints.ToleranceMode mode
    // Size: 0x4
    // Offset: 0x10
    NUnit::Framework::Constraints::ToleranceMode mode;
    // Field size check
    static_assert(sizeof(NUnit::Framework::Constraints::ToleranceMode) == 0x4);
    // Padding between fields: mode and: amount
    char __padding0[0x4] = {};
    // private readonly System.Object amount
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppObject* amount;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // Creating value type constructor for type: Tolerance
    Tolerance(NUnit::Framework::Constraints::ToleranceMode mode_ = {}, ::Il2CppObject* amount_ = {}) noexcept : mode{mode_}, amount{amount_} {}
    // Get instance field reference: private readonly NUnit.Framework.Constraints.ToleranceMode mode
    NUnit::Framework::Constraints::ToleranceMode& dyn_mode();
    // Get instance field reference: private readonly System.Object amount
    ::Il2CppObject*& dyn_amount();
    // static public NUnit.Framework.Constraints.Tolerance get_Default()
    // Offset: 0x176A6E0
    static NUnit::Framework::Constraints::Tolerance* get_Default();
    // static public NUnit.Framework.Constraints.Tolerance get_Exact()
    // Offset: 0x1772DAC
    static NUnit::Framework::Constraints::Tolerance* get_Exact();
    // public NUnit.Framework.Constraints.ToleranceMode get_Mode()
    // Offset: 0x176CC7C
    NUnit::Framework::Constraints::ToleranceMode get_Mode();
    // public System.Object get_Value()
    // Offset: 0x176CC74
    ::Il2CppObject* get_Value();
    // public System.Boolean get_IsUnsetOrDefault()
    // Offset: 0x176CC64
    bool get_IsUnsetOrDefault();
    // public System.Void .ctor(System.Object amount)
    // Offset: 0x1775B28
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Tolerance* New_ctor(::Il2CppObject* amount) {
      static auto ___internal__logger = ::Logger::get().WithContext("NUnit::Framework::Constraints::Tolerance::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Tolerance*, creationType>(amount)));
    }
    // private System.Void .ctor(System.Object amount, NUnit.Framework.Constraints.ToleranceMode mode)
    // Offset: 0x177638C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Tolerance* New_ctor(::Il2CppObject* amount, NUnit::Framework::Constraints::ToleranceMode mode) {
      static auto ___internal__logger = ::Logger::get().WithContext("NUnit::Framework::Constraints::Tolerance::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Tolerance*, creationType>(amount, mode)));
    }
  }; // NUnit.Framework.Constraints.Tolerance
  #pragma pack(pop)
  static check_size<sizeof(Tolerance), 24 + sizeof(::Il2CppObject*)> __NUnit_Framework_Constraints_ToleranceSizeCheck;
  static_assert(sizeof(Tolerance) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(NUnit::Framework::Constraints::Tolerance*, "NUnit.Framework.Constraints", "Tolerance");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: NUnit::Framework::Constraints::Tolerance::get_Default
// Il2CppName: get_Default
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<NUnit::Framework::Constraints::Tolerance* (*)()>(&NUnit::Framework::Constraints::Tolerance::get_Default)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Constraints::Tolerance*), "get_Default", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Constraints::Tolerance::get_Exact
// Il2CppName: get_Exact
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<NUnit::Framework::Constraints::Tolerance* (*)()>(&NUnit::Framework::Constraints::Tolerance::get_Exact)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Constraints::Tolerance*), "get_Exact", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Constraints::Tolerance::get_Mode
// Il2CppName: get_Mode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<NUnit::Framework::Constraints::ToleranceMode (NUnit::Framework::Constraints::Tolerance::*)()>(&NUnit::Framework::Constraints::Tolerance::get_Mode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Constraints::Tolerance*), "get_Mode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Constraints::Tolerance::get_Value
// Il2CppName: get_Value
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (NUnit::Framework::Constraints::Tolerance::*)()>(&NUnit::Framework::Constraints::Tolerance::get_Value)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Constraints::Tolerance*), "get_Value", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Constraints::Tolerance::get_IsUnsetOrDefault
// Il2CppName: get_IsUnsetOrDefault
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (NUnit::Framework::Constraints::Tolerance::*)()>(&NUnit::Framework::Constraints::Tolerance::get_IsUnsetOrDefault)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Constraints::Tolerance*), "get_IsUnsetOrDefault", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Constraints::Tolerance::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: NUnit::Framework::Constraints::Tolerance::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
