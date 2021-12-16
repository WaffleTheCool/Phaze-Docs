// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: NUnit.Framework.Interfaces
namespace NUnit::Framework::Interfaces {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: NUnit.Framework.Interfaces.TestOutput
  // [TokenAttribute] Offset: FFFFFFFF
  class TestOutput : public ::Il2CppObject {
    public:
    // [DebuggerBrowsableAttribute] Offset: 0xE28FB4
    // private System.String <Text>k__BackingField
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* Text;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // [DebuggerBrowsableAttribute] Offset: 0xE28FF0
    // private System.String <Stream>k__BackingField
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppString* Stream;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // [DebuggerBrowsableAttribute] Offset: 0xE2902C
    // private System.String <TestName>k__BackingField
    // Size: 0x8
    // Offset: 0x20
    ::Il2CppString* TestName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // Creating value type constructor for type: TestOutput
    TestOutput(::Il2CppString* Text_ = {}, ::Il2CppString* Stream_ = {}, ::Il2CppString* TestName_ = {}) noexcept : Text{Text_}, Stream{Stream_}, TestName{TestName_} {}
    // Get instance field reference: private System.String <Text>k__BackingField
    ::Il2CppString*& dyn_$Text$k__BackingField();
    // Get instance field reference: private System.String <Stream>k__BackingField
    ::Il2CppString*& dyn_$Stream$k__BackingField();
    // Get instance field reference: private System.String <TestName>k__BackingField
    ::Il2CppString*& dyn_$TestName$k__BackingField();
    // public System.String get_Text()
    // Offset: 0x1777CA0
    ::Il2CppString* get_Text();
    // private System.Void set_Text(System.String value)
    // Offset: 0x1777CA8
    void set_Text(::Il2CppString* value);
    // public System.String get_Stream()
    // Offset: 0x1777CB0
    ::Il2CppString* get_Stream();
    // private System.Void set_Stream(System.String value)
    // Offset: 0x1777CB8
    void set_Stream(::Il2CppString* value);
    // private System.Void set_TestName(System.String value)
    // Offset: 0x1777CC0
    void set_TestName(::Il2CppString* value);
    // public System.Void .ctor(System.String text, System.String stream, System.String testName)
    // Offset: 0x1777C0C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TestOutput* New_ctor(::Il2CppString* text, ::Il2CppString* stream, ::Il2CppString* testName) {
      static auto ___internal__logger = ::Logger::get().WithContext("NUnit::Framework::Interfaces::TestOutput::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TestOutput*, creationType>(text, stream, testName)));
    }
    // public override System.String ToString()
    // Offset: 0x1777C4C
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::Il2CppString* ToString();
  }; // NUnit.Framework.Interfaces.TestOutput
  #pragma pack(pop)
  static check_size<sizeof(TestOutput), 32 + sizeof(::Il2CppString*)> __NUnit_Framework_Interfaces_TestOutputSizeCheck;
  static_assert(sizeof(TestOutput) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(NUnit::Framework::Interfaces::TestOutput*, "NUnit.Framework.Interfaces", "TestOutput");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: NUnit::Framework::Interfaces::TestOutput::get_Text
// Il2CppName: get_Text
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (NUnit::Framework::Interfaces::TestOutput::*)()>(&NUnit::Framework::Interfaces::TestOutput::get_Text)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Interfaces::TestOutput*), "get_Text", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Interfaces::TestOutput::set_Text
// Il2CppName: set_Text
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (NUnit::Framework::Interfaces::TestOutput::*)(::Il2CppString*)>(&NUnit::Framework::Interfaces::TestOutput::set_Text)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Interfaces::TestOutput*), "set_Text", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Interfaces::TestOutput::get_Stream
// Il2CppName: get_Stream
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (NUnit::Framework::Interfaces::TestOutput::*)()>(&NUnit::Framework::Interfaces::TestOutput::get_Stream)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Interfaces::TestOutput*), "get_Stream", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Interfaces::TestOutput::set_Stream
// Il2CppName: set_Stream
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (NUnit::Framework::Interfaces::TestOutput::*)(::Il2CppString*)>(&NUnit::Framework::Interfaces::TestOutput::set_Stream)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Interfaces::TestOutput*), "set_Stream", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Interfaces::TestOutput::set_TestName
// Il2CppName: set_TestName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (NUnit::Framework::Interfaces::TestOutput::*)(::Il2CppString*)>(&NUnit::Framework::Interfaces::TestOutput::set_TestName)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Interfaces::TestOutput*), "set_TestName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Interfaces::TestOutput::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: NUnit::Framework::Interfaces::TestOutput::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (NUnit::Framework::Interfaces::TestOutput::*)()>(&NUnit::Framework::Interfaces::TestOutput::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Interfaces::TestOutput*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
