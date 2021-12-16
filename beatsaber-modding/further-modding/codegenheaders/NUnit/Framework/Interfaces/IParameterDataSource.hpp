// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerable
  class IEnumerable;
}
// Forward declaring namespace: NUnit::Framework::Interfaces
namespace NUnit::Framework::Interfaces {
  // Forward declaring type: IParameterInfo
  class IParameterInfo;
}
// Completed forward declares
// Type namespace: NUnit.Framework.Interfaces
namespace NUnit::Framework::Interfaces {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: NUnit.Framework.Interfaces.IParameterDataSource
  // [TokenAttribute] Offset: FFFFFFFF
  class IParameterDataSource {
    public:
    // Creating value type constructor for type: IParameterDataSource
    IParameterDataSource() noexcept {}
    // public System.Collections.IEnumerable GetData(NUnit.Framework.Interfaces.IParameterInfo parameter)
    // Offset: 0xFFFFFFFF
    System::Collections::IEnumerable* GetData(NUnit::Framework::Interfaces::IParameterInfo* parameter);
  }; // NUnit.Framework.Interfaces.IParameterDataSource
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(NUnit::Framework::Interfaces::IParameterDataSource*, "NUnit.Framework.Interfaces", "IParameterDataSource");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: NUnit::Framework::Interfaces::IParameterDataSource::GetData
// Il2CppName: GetData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::IEnumerable* (NUnit::Framework::Interfaces::IParameterDataSource::*)(NUnit::Framework::Interfaces::IParameterInfo*)>(&NUnit::Framework::Interfaces::IParameterDataSource::GetData)> {
  static const MethodInfo* get() {
    static auto* parameter = &::il2cpp_utils::GetClassFromName("NUnit.Framework.Interfaces", "IParameterInfo")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Interfaces::IParameterDataSource*), "GetData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{parameter});
  }
};
