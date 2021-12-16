// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: NUnit.Framework.Internal.TestNameGenerator
#include "NUnit/Framework/Internal/TestNameGenerator.hpp"
// Including type: NUnit.Framework.Internal.TestNameGenerator/NUnit.Framework.Internal.NameFragment
#include "NUnit/Framework/Internal/TestNameGenerator_NameFragment.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: MethodInfo
  class MethodInfo;
}
// Forward declaring namespace: NUnit::Framework::Internal
namespace NUnit::Framework::Internal {
  // Forward declaring type: TestMethod
  class TestMethod;
}
// Completed forward declares
// Type namespace: NUnit.Framework.Internal
namespace NUnit::Framework::Internal {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: NUnit.Framework.Internal.TestNameGenerator/NUnit.Framework.Internal.TestIDFragment
  // [TokenAttribute] Offset: FFFFFFFF
  class TestNameGenerator::TestIDFragment : public NUnit::Framework::Internal::TestNameGenerator::NameFragment {
    public:
    // Creating value type constructor for type: TestIDFragment
    TestIDFragment() noexcept {}
    // public System.Void .ctor()
    // Offset: 0x229B2D4
    // Implemented from: NUnit.Framework.Internal.TestNameGenerator/NUnit.Framework.Internal.NameFragment
    // Base method: System.Void NameFragment::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TestNameGenerator::TestIDFragment* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("NUnit::Framework::Internal::TestNameGenerator::TestIDFragment::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TestNameGenerator::TestIDFragment*, creationType>()));
    }
    // public override System.String GetText(System.Reflection.MethodInfo method, System.Object[] args)
    // Offset: 0x229C5C4
    // Implemented from: NUnit.Framework.Internal.TestNameGenerator/NUnit.Framework.Internal.NameFragment
    // Base method: System.String NameFragment::GetText(System.Reflection.MethodInfo method, System.Object[] args)
    ::Il2CppString* GetText(System::Reflection::MethodInfo* method, ::Array<::Il2CppObject*>* args);
    // public override System.String GetText(NUnit.Framework.Internal.TestMethod testMethod, System.Object[] args)
    // Offset: 0x229C60C
    // Implemented from: NUnit.Framework.Internal.TestNameGenerator/NUnit.Framework.Internal.NameFragment
    // Base method: System.String NameFragment::GetText(NUnit.Framework.Internal.TestMethod testMethod, System.Object[] args)
    ::Il2CppString* GetText(NUnit::Framework::Internal::TestMethod* testMethod, ::Array<::Il2CppObject*>* args);
  }; // NUnit.Framework.Internal.TestNameGenerator/NUnit.Framework.Internal.TestIDFragment
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(NUnit::Framework::Internal::TestNameGenerator::TestIDFragment*, "NUnit.Framework.Internal", "TestNameGenerator/TestIDFragment");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: NUnit::Framework::Internal::TestNameGenerator::TestIDFragment::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: NUnit::Framework::Internal::TestNameGenerator::TestIDFragment::GetText
// Il2CppName: GetText
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (NUnit::Framework::Internal::TestNameGenerator::TestIDFragment::*)(System::Reflection::MethodInfo*, ::Array<::Il2CppObject*>*)>(&NUnit::Framework::Internal::TestNameGenerator::TestIDFragment::GetText)> {
  static const MethodInfo* get() {
    static auto* method = &::il2cpp_utils::GetClassFromName("System.Reflection", "MethodInfo")->byval_arg;
    static auto* args = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Object"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::TestNameGenerator::TestIDFragment*), "GetText", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{method, args});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::TestNameGenerator::TestIDFragment::GetText
// Il2CppName: GetText
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (NUnit::Framework::Internal::TestNameGenerator::TestIDFragment::*)(NUnit::Framework::Internal::TestMethod*, ::Array<::Il2CppObject*>*)>(&NUnit::Framework::Internal::TestNameGenerator::TestIDFragment::GetText)> {
  static const MethodInfo* get() {
    static auto* testMethod = &::il2cpp_utils::GetClassFromName("NUnit.Framework.Internal", "TestMethod")->byval_arg;
    static auto* args = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Object"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::TestNameGenerator::TestIDFragment*), "GetText", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{testMethod, args});
  }
};
