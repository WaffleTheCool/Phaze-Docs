// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include <initializer_list>
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: NUnit.Framework.Internal.Filters.CompositeFilter
#include "NUnit/Framework/Internal/Filters/CompositeFilter.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: NUnit::Framework::Interfaces
namespace NUnit::Framework::Interfaces {
  // Skipping declaration: ITestFilter because it is already included!
  // Forward declaring type: ITest
  class ITest;
}
// Completed forward declares
// Type namespace: NUnit.Framework.Internal.Filters
namespace NUnit::Framework::Internal::Filters {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: NUnit.Framework.Internal.Filters.AndFilter
  // [TokenAttribute] Offset: FFFFFFFF
  class AndFilter : public NUnit::Framework::Internal::Filters::CompositeFilter {
    public:
    // Creating value type constructor for type: AndFilter
    AndFilter() noexcept {}
    // protected override System.String get_ElementName()
    // Offset: 0x1781AD8
    // Implemented from: NUnit.Framework.Internal.Filters.CompositeFilter
    // Base method: System.String CompositeFilter::get_ElementName()
    ::Il2CppString* get_ElementName();
    // public System.Void .ctor()
    // Offset: 0x17810A4
    // Implemented from: NUnit.Framework.Internal.Filters.CompositeFilter
    // Base method: System.Void CompositeFilter::.ctor()
    // Base method: System.Void TestFilter::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AndFilter* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("NUnit::Framework::Internal::Filters::AndFilter::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AndFilter*, creationType>()));
    }
    // public System.Void .ctor(params NUnit.Framework.Interfaces.ITestFilter[] filters)
    // Offset: 0x178113C
    // Implemented from: NUnit.Framework.Internal.Filters.CompositeFilter
    // Base method: System.Void CompositeFilter::.ctor(params NUnit.Framework.Interfaces.ITestFilter[] filters)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AndFilter* New_ctor(::Array<NUnit::Framework::Interfaces::ITestFilter*>* filters) {
      static auto ___internal__logger = ::Logger::get().WithContext("NUnit::Framework::Internal::Filters::AndFilter::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AndFilter*, creationType>(filters)));
    }
    // Creating initializer_list -> params proxy for: System.Void .ctor(params NUnit.Framework.Interfaces.ITestFilter[] filters)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AndFilter* New_ctor(std::initializer_list<NUnit::Framework::Interfaces::ITestFilter*> filters) {
      return New_ctor<creationType>(::Array<NUnit::Framework::Interfaces::ITestFilter*>::New(filters));
    }
    // Creating TArgs -> initializer_list proxy for: System.Void .ctor(params NUnit.Framework.Interfaces.ITestFilter[] filters)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary, class ...TParams>
    static AndFilter* New_ctor(TParams&&... filters) {
      return New_ctor<creationType>({filters...});
    }
    // public override System.Boolean Pass(NUnit.Framework.Interfaces.ITest test)
    // Offset: 0x17811E4
    // Implemented from: NUnit.Framework.Internal.Filters.CompositeFilter
    // Base method: System.Boolean CompositeFilter::Pass(NUnit.Framework.Interfaces.ITest test)
    bool Pass(NUnit::Framework::Interfaces::ITest* test);
    // public override System.Boolean Match(NUnit.Framework.Interfaces.ITest test)
    // Offset: 0x1781500
    // Implemented from: NUnit.Framework.Internal.Filters.CompositeFilter
    // Base method: System.Boolean CompositeFilter::Match(NUnit.Framework.Interfaces.ITest test)
    bool Match(NUnit::Framework::Interfaces::ITest* test);
    // public override System.Boolean IsExplicitMatch(NUnit.Framework.Interfaces.ITest test)
    // Offset: 0x17817EC
    // Implemented from: NUnit.Framework.Internal.Filters.CompositeFilter
    // Base method: System.Boolean CompositeFilter::IsExplicitMatch(NUnit.Framework.Interfaces.ITest test)
    bool IsExplicitMatch(NUnit::Framework::Interfaces::ITest* test);
  }; // NUnit.Framework.Internal.Filters.AndFilter
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(NUnit::Framework::Internal::Filters::AndFilter*, "NUnit.Framework.Internal.Filters", "AndFilter");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: NUnit::Framework::Internal::Filters::AndFilter::get_ElementName
// Il2CppName: get_ElementName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (NUnit::Framework::Internal::Filters::AndFilter::*)()>(&NUnit::Framework::Internal::Filters::AndFilter::get_ElementName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::Filters::AndFilter*), "get_ElementName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::Filters::AndFilter::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: NUnit::Framework::Internal::Filters::AndFilter::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: NUnit::Framework::Internal::Filters::AndFilter::Pass
// Il2CppName: Pass
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (NUnit::Framework::Internal::Filters::AndFilter::*)(NUnit::Framework::Interfaces::ITest*)>(&NUnit::Framework::Internal::Filters::AndFilter::Pass)> {
  static const MethodInfo* get() {
    static auto* test = &::il2cpp_utils::GetClassFromName("NUnit.Framework.Interfaces", "ITest")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::Filters::AndFilter*), "Pass", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{test});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::Filters::AndFilter::Match
// Il2CppName: Match
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (NUnit::Framework::Internal::Filters::AndFilter::*)(NUnit::Framework::Interfaces::ITest*)>(&NUnit::Framework::Internal::Filters::AndFilter::Match)> {
  static const MethodInfo* get() {
    static auto* test = &::il2cpp_utils::GetClassFromName("NUnit.Framework.Interfaces", "ITest")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::Filters::AndFilter*), "Match", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{test});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::Filters::AndFilter::IsExplicitMatch
// Il2CppName: IsExplicitMatch
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (NUnit::Framework::Internal::Filters::AndFilter::*)(NUnit::Framework::Interfaces::ITest*)>(&NUnit::Framework::Internal::Filters::AndFilter::IsExplicitMatch)> {
  static const MethodInfo* get() {
    static auto* test = &::il2cpp_utils::GetClassFromName("NUnit.Framework.Interfaces", "ITest")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::Filters::AndFilter*), "IsExplicitMatch", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{test});
  }
};
