// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: NUnit.Framework.Constraints.ConstraintBuilder
#include "NUnit/Framework/Constraints/ConstraintBuilder.hpp"
// Completed includes
// Type namespace: NUnit.Framework.Constraints
namespace NUnit::Framework::Constraints {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: NUnit.Framework.Constraints.ConstraintOperator
  // [TokenAttribute] Offset: FFFFFFFF
  class ConstraintOperator : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: ConstraintOperator
    ConstraintOperator() noexcept {}
    // public System.Void Reduce(NUnit.Framework.Constraints.ConstraintBuilder/NUnit.Framework.Constraints.ConstraintStack stack)
    // Offset: 0xFFFFFFFF
    void Reduce(NUnit::Framework::Constraints::ConstraintBuilder::ConstraintStack* stack);
  }; // NUnit.Framework.Constraints.ConstraintOperator
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(NUnit::Framework::Constraints::ConstraintOperator*, "NUnit.Framework.Constraints", "ConstraintOperator");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: NUnit::Framework::Constraints::ConstraintOperator::Reduce
// Il2CppName: Reduce
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (NUnit::Framework::Constraints::ConstraintOperator::*)(NUnit::Framework::Constraints::ConstraintBuilder::ConstraintStack*)>(&NUnit::Framework::Constraints::ConstraintOperator::Reduce)> {
  static const MethodInfo* get() {
    static auto* stack = &::il2cpp_utils::GetClassFromName("NUnit.Framework.Constraints", "ConstraintBuilder/ConstraintStack")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Constraints::ConstraintOperator*), "Reduce", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{stack});
  }
};
