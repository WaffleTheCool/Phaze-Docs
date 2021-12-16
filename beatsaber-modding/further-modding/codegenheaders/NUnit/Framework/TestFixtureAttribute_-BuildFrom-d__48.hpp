// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: NUnit.Framework.TestFixtureAttribute
#include "NUnit/Framework/TestFixtureAttribute.hpp"
// Including type: System.Collections.Generic.IEnumerable`1
#include "System/Collections/Generic/IEnumerable_1.hpp"
// Including type: System.Collections.Generic.IEnumerator`1
#include "System/Collections/Generic/IEnumerator_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: NUnit::Framework::Internal
namespace NUnit::Framework::Internal {
  // Forward declaring type: TestSuite
  class TestSuite;
}
// Forward declaring namespace: NUnit::Framework::Interfaces
namespace NUnit::Framework::Interfaces {
  // Forward declaring type: ITypeInfo
  class ITypeInfo;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Skipping declaration: IEnumerator because it is already included!
}
// Completed forward declares
// Type namespace: NUnit.Framework
namespace NUnit::Framework {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: NUnit.Framework.TestFixtureAttribute/NUnit.Framework.<BuildFrom>d__48
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class TestFixtureAttribute::$BuildFrom$d__48 : public ::Il2CppObject/*, public System::Collections::Generic::IEnumerable_1<NUnit::Framework::Internal::TestSuite*>, public System::Collections::Generic::IEnumerator_1<NUnit::Framework::Internal::TestSuite*>*/ {
    public:
    // private System.Int32 <>1__state
    // Size: 0x4
    // Offset: 0x10
    int $$1__state;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: $$1__state and: $$2__current
    char __padding0[0x4] = {};
    // private NUnit.Framework.Internal.TestSuite <>2__current
    // Size: 0x8
    // Offset: 0x18
    NUnit::Framework::Internal::TestSuite* $$2__current;
    // Field size check
    static_assert(sizeof(NUnit::Framework::Internal::TestSuite*) == 0x8);
    // private System.Int32 <>l__initialThreadId
    // Size: 0x4
    // Offset: 0x20
    int $$l__initialThreadId;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: $$l__initialThreadId and: typeInfo
    char __padding2[0x4] = {};
    // private NUnit.Framework.Interfaces.ITypeInfo typeInfo
    // Size: 0x8
    // Offset: 0x28
    NUnit::Framework::Interfaces::ITypeInfo* typeInfo;
    // Field size check
    static_assert(sizeof(NUnit::Framework::Interfaces::ITypeInfo*) == 0x8);
    // public NUnit.Framework.Interfaces.ITypeInfo <>3__typeInfo
    // Size: 0x8
    // Offset: 0x30
    NUnit::Framework::Interfaces::ITypeInfo* $$3__typeInfo;
    // Field size check
    static_assert(sizeof(NUnit::Framework::Interfaces::ITypeInfo*) == 0x8);
    // public NUnit.Framework.TestFixtureAttribute <>4__this
    // Size: 0x8
    // Offset: 0x38
    NUnit::Framework::TestFixtureAttribute* $$4__this;
    // Field size check
    static_assert(sizeof(NUnit::Framework::TestFixtureAttribute*) == 0x8);
    // Creating value type constructor for type: $BuildFrom$d__48
    $BuildFrom$d__48(int $$1__state_ = {}, NUnit::Framework::Internal::TestSuite* $$2__current_ = {}, int $$l__initialThreadId_ = {}, NUnit::Framework::Interfaces::ITypeInfo* typeInfo_ = {}, NUnit::Framework::Interfaces::ITypeInfo* $$3__typeInfo_ = {}, NUnit::Framework::TestFixtureAttribute* $$4__this_ = {}) noexcept : $$1__state{$$1__state_}, $$2__current{$$2__current_}, $$l__initialThreadId{$$l__initialThreadId_}, typeInfo{typeInfo_}, $$3__typeInfo{$$3__typeInfo_}, $$4__this{$$4__this_} {}
    // Creating interface conversion operator: operator System::Collections::Generic::IEnumerable_1<NUnit::Framework::Internal::TestSuite*>
    operator System::Collections::Generic::IEnumerable_1<NUnit::Framework::Internal::TestSuite*>() noexcept {
      return *reinterpret_cast<System::Collections::Generic::IEnumerable_1<NUnit::Framework::Internal::TestSuite*>*>(this);
    }
    // Creating interface conversion operator: operator System::Collections::Generic::IEnumerator_1<NUnit::Framework::Internal::TestSuite*>
    operator System::Collections::Generic::IEnumerator_1<NUnit::Framework::Internal::TestSuite*>() noexcept {
      return *reinterpret_cast<System::Collections::Generic::IEnumerator_1<NUnit::Framework::Internal::TestSuite*>*>(this);
    }
    // Get instance field reference: private System.Int32 <>1__state
    int& dyn_$$1__state();
    // Get instance field reference: private NUnit.Framework.Internal.TestSuite <>2__current
    NUnit::Framework::Internal::TestSuite*& dyn_$$2__current();
    // Get instance field reference: private System.Int32 <>l__initialThreadId
    int& dyn_$$l__initialThreadId();
    // Get instance field reference: private NUnit.Framework.Interfaces.ITypeInfo typeInfo
    NUnit::Framework::Interfaces::ITypeInfo*& dyn_typeInfo();
    // Get instance field reference: public NUnit.Framework.Interfaces.ITypeInfo <>3__typeInfo
    NUnit::Framework::Interfaces::ITypeInfo*& dyn_$$3__typeInfo();
    // Get instance field reference: public NUnit.Framework.TestFixtureAttribute <>4__this
    NUnit::Framework::TestFixtureAttribute*& dyn_$$4__this();
    // private NUnit.Framework.Internal.TestSuite System.Collections.Generic.IEnumerator<NUnit.Framework.Internal.TestSuite>.get_Current()
    // Offset: 0x22A236C
    NUnit::Framework::Internal::TestSuite* System_Collections_Generic_IEnumerator$NUnit_Framework_Internal_TestSuite$_get_Current();
    // private System.Object System.Collections.IEnumerator.get_Current()
    // Offset: 0x22A23D4
    ::Il2CppObject* System_Collections_IEnumerator_get_Current();
    // public System.Void .ctor(System.Int32 <>1__state)
    // Offset: 0x22A22B0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TestFixtureAttribute::$BuildFrom$d__48* New_ctor(int $$1__state) {
      static auto ___internal__logger = ::Logger::get().WithContext("NUnit::Framework::TestFixtureAttribute::$BuildFrom$d__48::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TestFixtureAttribute::$BuildFrom$d__48*, creationType>($$1__state)));
    }
    // private System.Void System.IDisposable.Dispose()
    // Offset: 0x22A22F8
    void System_IDisposable_Dispose();
    // private System.Boolean MoveNext()
    // Offset: 0x22A22FC
    bool MoveNext();
    // private System.Void System.Collections.IEnumerator.Reset()
    // Offset: 0x22A2374
    void System_Collections_IEnumerator_Reset();
    // private System.Collections.Generic.IEnumerator`1<NUnit.Framework.Internal.TestSuite> System.Collections.Generic.IEnumerable<NUnit.Framework.Internal.TestSuite>.GetEnumerator()
    // Offset: 0x22A23DC
    System::Collections::Generic::IEnumerator_1<NUnit::Framework::Internal::TestSuite*>* System_Collections_Generic_IEnumerable$NUnit_Framework_Internal_TestSuite$_GetEnumerator();
    // private System.Collections.IEnumerator System.Collections.IEnumerable.GetEnumerator()
    // Offset: 0x22A248C
    System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();
  }; // NUnit.Framework.TestFixtureAttribute/NUnit.Framework.<BuildFrom>d__48
  #pragma pack(pop)
  static check_size<sizeof(TestFixtureAttribute::$BuildFrom$d__48), 56 + sizeof(NUnit::Framework::TestFixtureAttribute*)> __NUnit_Framework_TestFixtureAttribute_$BuildFrom$d__48SizeCheck;
  static_assert(sizeof(TestFixtureAttribute::$BuildFrom$d__48) == 0x40);
}
DEFINE_IL2CPP_ARG_TYPE(NUnit::Framework::TestFixtureAttribute::$BuildFrom$d__48*, "NUnit.Framework", "TestFixtureAttribute/<BuildFrom>d__48");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: NUnit::Framework::TestFixtureAttribute::$BuildFrom$d__48::System_Collections_Generic_IEnumerator$NUnit_Framework_Internal_TestSuite$_get_Current
// Il2CppName: System.Collections.Generic.IEnumerator<NUnit.Framework.Internal.TestSuite>.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<NUnit::Framework::Internal::TestSuite* (NUnit::Framework::TestFixtureAttribute::$BuildFrom$d__48::*)()>(&NUnit::Framework::TestFixtureAttribute::$BuildFrom$d__48::System_Collections_Generic_IEnumerator$NUnit_Framework_Internal_TestSuite$_get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::TestFixtureAttribute::$BuildFrom$d__48*), "System.Collections.Generic.IEnumerator<NUnit.Framework.Internal.TestSuite>.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::TestFixtureAttribute::$BuildFrom$d__48::System_Collections_IEnumerator_get_Current
// Il2CppName: System.Collections.IEnumerator.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (NUnit::Framework::TestFixtureAttribute::$BuildFrom$d__48::*)()>(&NUnit::Framework::TestFixtureAttribute::$BuildFrom$d__48::System_Collections_IEnumerator_get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::TestFixtureAttribute::$BuildFrom$d__48*), "System.Collections.IEnumerator.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::TestFixtureAttribute::$BuildFrom$d__48::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: NUnit::Framework::TestFixtureAttribute::$BuildFrom$d__48::System_IDisposable_Dispose
// Il2CppName: System.IDisposable.Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (NUnit::Framework::TestFixtureAttribute::$BuildFrom$d__48::*)()>(&NUnit::Framework::TestFixtureAttribute::$BuildFrom$d__48::System_IDisposable_Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::TestFixtureAttribute::$BuildFrom$d__48*), "System.IDisposable.Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::TestFixtureAttribute::$BuildFrom$d__48::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (NUnit::Framework::TestFixtureAttribute::$BuildFrom$d__48::*)()>(&NUnit::Framework::TestFixtureAttribute::$BuildFrom$d__48::MoveNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::TestFixtureAttribute::$BuildFrom$d__48*), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::TestFixtureAttribute::$BuildFrom$d__48::System_Collections_IEnumerator_Reset
// Il2CppName: System.Collections.IEnumerator.Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (NUnit::Framework::TestFixtureAttribute::$BuildFrom$d__48::*)()>(&NUnit::Framework::TestFixtureAttribute::$BuildFrom$d__48::System_Collections_IEnumerator_Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::TestFixtureAttribute::$BuildFrom$d__48*), "System.Collections.IEnumerator.Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::TestFixtureAttribute::$BuildFrom$d__48::System_Collections_Generic_IEnumerable$NUnit_Framework_Internal_TestSuite$_GetEnumerator
// Il2CppName: System.Collections.Generic.IEnumerable<NUnit.Framework.Internal.TestSuite>.GetEnumerator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::IEnumerator_1<NUnit::Framework::Internal::TestSuite*>* (NUnit::Framework::TestFixtureAttribute::$BuildFrom$d__48::*)()>(&NUnit::Framework::TestFixtureAttribute::$BuildFrom$d__48::System_Collections_Generic_IEnumerable$NUnit_Framework_Internal_TestSuite$_GetEnumerator)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::TestFixtureAttribute::$BuildFrom$d__48*), "System.Collections.Generic.IEnumerable<NUnit.Framework.Internal.TestSuite>.GetEnumerator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::TestFixtureAttribute::$BuildFrom$d__48::System_Collections_IEnumerable_GetEnumerator
// Il2CppName: System.Collections.IEnumerable.GetEnumerator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::IEnumerator* (NUnit::Framework::TestFixtureAttribute::$BuildFrom$d__48::*)()>(&NUnit::Framework::TestFixtureAttribute::$BuildFrom$d__48::System_Collections_IEnumerable_GetEnumerator)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::TestFixtureAttribute::$BuildFrom$d__48*), "System.Collections.IEnumerable.GetEnumerator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
