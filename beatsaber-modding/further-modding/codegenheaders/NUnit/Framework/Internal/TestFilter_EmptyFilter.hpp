// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: NUnit.Framework.Internal.TestFilter
#include "NUnit/Framework/Internal/TestFilter.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: NUnit::Framework::Interfaces
namespace NUnit::Framework::Interfaces {
  // Forward declaring type: ITest
  class ITest;
  // Forward declaring type: TNode
  class TNode;
}
// Completed forward declares
// Type namespace: NUnit.Framework.Internal
namespace NUnit::Framework::Internal {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: NUnit.Framework.Internal.TestFilter/NUnit.Framework.Internal.EmptyFilter
  // [TokenAttribute] Offset: FFFFFFFF
  class TestFilter::EmptyFilter : public NUnit::Framework::Internal::TestFilter {
    public:
    // Creating value type constructor for type: EmptyFilter
    EmptyFilter() noexcept {}
    // public System.Void .ctor()
    // Offset: 0x229A058
    // Implemented from: NUnit.Framework.Internal.TestFilter
    // Base method: System.Void TestFilter::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TestFilter::EmptyFilter* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("NUnit::Framework::Internal::TestFilter::EmptyFilter::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TestFilter::EmptyFilter*, creationType>()));
    }
    // public override System.Boolean Match(NUnit.Framework.Interfaces.ITest test)
    // Offset: 0x229A0C0
    // Implemented from: NUnit.Framework.Internal.TestFilter
    // Base method: System.Boolean TestFilter::Match(NUnit.Framework.Interfaces.ITest test)
    bool Match(NUnit::Framework::Interfaces::ITest* test);
    // public override System.Boolean Pass(NUnit.Framework.Interfaces.ITest test)
    // Offset: 0x229A0C8
    // Implemented from: NUnit.Framework.Internal.TestFilter
    // Base method: System.Boolean TestFilter::Pass(NUnit.Framework.Interfaces.ITest test)
    bool Pass(NUnit::Framework::Interfaces::ITest* test);
    // public override System.Boolean IsExplicitMatch(NUnit.Framework.Interfaces.ITest test)
    // Offset: 0x229A0D0
    // Implemented from: NUnit.Framework.Internal.TestFilter
    // Base method: System.Boolean TestFilter::IsExplicitMatch(NUnit.Framework.Interfaces.ITest test)
    bool IsExplicitMatch(NUnit::Framework::Interfaces::ITest* test);
    // public override NUnit.Framework.Interfaces.TNode AddToXml(NUnit.Framework.Interfaces.TNode parentNode, System.Boolean recursive)
    // Offset: 0x229A0D8
    // Implemented from: NUnit.Framework.Internal.TestFilter
    // Base method: NUnit.Framework.Interfaces.TNode TestFilter::AddToXml(NUnit.Framework.Interfaces.TNode parentNode, System.Boolean recursive)
    NUnit::Framework::Interfaces::TNode* AddToXml(NUnit::Framework::Interfaces::TNode* parentNode, bool recursive);
  }; // NUnit.Framework.Internal.TestFilter/NUnit.Framework.Internal.EmptyFilter
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(NUnit::Framework::Internal::TestFilter::EmptyFilter*, "NUnit.Framework.Internal", "TestFilter/EmptyFilter");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: NUnit::Framework::Internal::TestFilter::EmptyFilter::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: NUnit::Framework::Internal::TestFilter::EmptyFilter::Match
// Il2CppName: Match
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (NUnit::Framework::Internal::TestFilter::EmptyFilter::*)(NUnit::Framework::Interfaces::ITest*)>(&NUnit::Framework::Internal::TestFilter::EmptyFilter::Match)> {
  static const MethodInfo* get() {
    static auto* test = &::il2cpp_utils::GetClassFromName("NUnit.Framework.Interfaces", "ITest")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::TestFilter::EmptyFilter*), "Match", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{test});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::TestFilter::EmptyFilter::Pass
// Il2CppName: Pass
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (NUnit::Framework::Internal::TestFilter::EmptyFilter::*)(NUnit::Framework::Interfaces::ITest*)>(&NUnit::Framework::Internal::TestFilter::EmptyFilter::Pass)> {
  static const MethodInfo* get() {
    static auto* test = &::il2cpp_utils::GetClassFromName("NUnit.Framework.Interfaces", "ITest")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::TestFilter::EmptyFilter*), "Pass", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{test});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::TestFilter::EmptyFilter::IsExplicitMatch
// Il2CppName: IsExplicitMatch
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (NUnit::Framework::Internal::TestFilter::EmptyFilter::*)(NUnit::Framework::Interfaces::ITest*)>(&NUnit::Framework::Internal::TestFilter::EmptyFilter::IsExplicitMatch)> {
  static const MethodInfo* get() {
    static auto* test = &::il2cpp_utils::GetClassFromName("NUnit.Framework.Interfaces", "ITest")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::TestFilter::EmptyFilter*), "IsExplicitMatch", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{test});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::TestFilter::EmptyFilter::AddToXml
// Il2CppName: AddToXml
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<NUnit::Framework::Interfaces::TNode* (NUnit::Framework::Internal::TestFilter::EmptyFilter::*)(NUnit::Framework::Interfaces::TNode*, bool)>(&NUnit::Framework::Internal::TestFilter::EmptyFilter::AddToXml)> {
  static const MethodInfo* get() {
    static auto* parentNode = &::il2cpp_utils::GetClassFromName("NUnit.Framework.Interfaces", "TNode")->byval_arg;
    static auto* recursive = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::TestFilter::EmptyFilter*), "AddToXml", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{parentNode, recursive});
  }
};
