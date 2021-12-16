// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include <initializer_list>
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: NUnit::Framework::Constraints
namespace NUnit::Framework::Constraints {
  // Forward declaring type: IResolveConstraint
  class IResolveConstraint;
}
// Completed forward declares
// Type namespace: NUnit.Framework
namespace NUnit::Framework {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: NUnit.Framework.Assert
  // [TokenAttribute] Offset: FFFFFFFF
  class _Assert : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: _Assert
    _Assert() noexcept {}
    // static public System.Void AreEqual(System.Object expected, System.Object actual)
    // Offset: 0x176933C
    static void AreEqual(::Il2CppObject* expected, ::Il2CppObject* actual);
    // static private System.Void IncrementAssertCount()
    // Offset: 0x17693B0
    static void IncrementAssertCount();
    // static public System.Void That(TActual actual, NUnit.Framework.Constraints.IResolveConstraint expression, System.String message, params System.Object[] args)
    // Offset: 0xFFFFFFFF
    template<class TActual>
    static void That(TActual actual, NUnit::Framework::Constraints::IResolveConstraint* expression, ::Il2CppString* message, ::Array<::Il2CppObject*>* args) {
      static auto ___internal__logger = ::Logger::get().WithContext("NUnit::Framework::_Assert::That");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("NUnit.Framework", "Assert", "That", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TActual>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(actual), ::il2cpp_utils::ExtractType(expression), ::il2cpp_utils::ExtractType(message), ::il2cpp_utils::ExtractType(args)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TActual>::get()}));
      ::il2cpp_utils::RunMethodThrow<void, false>(static_cast<Il2CppClass*>(nullptr), ___generic__method, actual, expression, message, args);
    }
    // Creating initializer_list -> params proxy for: System.Void That(TActual actual, NUnit.Framework.Constraints.IResolveConstraint expression, System.String message, params System.Object[] args)
    template<class TActual>
    static void That(TActual actual, NUnit::Framework::Constraints::IResolveConstraint* expression, ::Il2CppString* message, std::initializer_list<::Il2CppObject*> args) {
      That(actual, expression, message, ::Array<::Il2CppObject*>::New(args));
    }
    // Creating TArgs -> initializer_list proxy for: System.Void That(TActual actual, NUnit.Framework.Constraints.IResolveConstraint expression, System.String message, params System.Object[] args)
    template<class TActual, class ...TParams>
    static void That(TActual actual, NUnit::Framework::Constraints::IResolveConstraint* expression, ::Il2CppString* message, TParams&&... args) {
      That<TActual>(actual, expression, message, {args...});
    }
    // static public System.Void GreaterOrEqual(System.Single arg1, System.Single arg2, System.String message, params System.Object[] args)
    // Offset: 0x1769488
    static void GreaterOrEqual(float arg1, float arg2, ::Il2CppString* message, ::Array<::Il2CppObject*>* args);
    // Creating initializer_list -> params proxy for: System.Void GreaterOrEqual(System.Single arg1, System.Single arg2, System.String message, params System.Object[] args)
    static void GreaterOrEqual(float arg1, float arg2, ::Il2CppString* message, std::initializer_list<::Il2CppObject*> args);
    // Creating TArgs -> initializer_list proxy for: System.Void GreaterOrEqual(System.Single arg1, System.Single arg2, System.String message, params System.Object[] args)
    template<class ...TParams>
    static void GreaterOrEqual(float arg1, float arg2, ::Il2CppString* message, TParams&&... args) {
      GreaterOrEqual(arg1, arg2, message, {args...});
    }
    // static public System.Void LessOrEqual(System.Single arg1, System.Single arg2, System.String message, params System.Object[] args)
    // Offset: 0x1769520
    static void LessOrEqual(float arg1, float arg2, ::Il2CppString* message, ::Array<::Il2CppObject*>* args);
    // Creating initializer_list -> params proxy for: System.Void LessOrEqual(System.Single arg1, System.Single arg2, System.String message, params System.Object[] args)
    static void LessOrEqual(float arg1, float arg2, ::Il2CppString* message, std::initializer_list<::Il2CppObject*> args);
    // Creating TArgs -> initializer_list proxy for: System.Void LessOrEqual(System.Single arg1, System.Single arg2, System.String message, params System.Object[] args)
    template<class ...TParams>
    static void LessOrEqual(float arg1, float arg2, ::Il2CppString* message, TParams&&... args) {
      LessOrEqual(arg1, arg2, message, {args...});
    }
    // static public System.Void IsTrue(System.Boolean condition, System.String message, params System.Object[] args)
    // Offset: 0x17695B8
    static void IsTrue(bool condition, ::Il2CppString* message, ::Array<::Il2CppObject*>* args);
    // Creating initializer_list -> params proxy for: System.Void IsTrue(System.Boolean condition, System.String message, params System.Object[] args)
    static void IsTrue(bool condition, ::Il2CppString* message, std::initializer_list<::Il2CppObject*> args);
    // Creating TArgs -> initializer_list proxy for: System.Void IsTrue(System.Boolean condition, System.String message, params System.Object[] args)
    template<class ...TParams>
    static void IsTrue(bool condition, ::Il2CppString* message, TParams&&... args) {
      IsTrue(condition, message, {args...});
    }
    // static public System.Void IsTrue(System.Boolean condition)
    // Offset: 0x1769630
    static void IsTrue(bool condition);
  }; // NUnit.Framework.Assert
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(NUnit::Framework::_Assert*, "NUnit.Framework", "Assert");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: NUnit::Framework::_Assert::AreEqual
// Il2CppName: AreEqual
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Il2CppObject*, ::Il2CppObject*)>(&NUnit::Framework::_Assert::AreEqual)> {
  static const MethodInfo* get() {
    static auto* expected = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* actual = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::_Assert*), "AreEqual", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{expected, actual});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::_Assert::IncrementAssertCount
// Il2CppName: IncrementAssertCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&NUnit::Framework::_Assert::IncrementAssertCount)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::_Assert*), "IncrementAssertCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::_Assert::That
// Il2CppName: That
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: NUnit::Framework::_Assert::GreaterOrEqual
// Il2CppName: GreaterOrEqual
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(float, float, ::Il2CppString*, ::Array<::Il2CppObject*>*)>(&NUnit::Framework::_Assert::GreaterOrEqual)> {
  static const MethodInfo* get() {
    static auto* arg1 = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* arg2 = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* message = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* args = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Object"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::_Assert*), "GreaterOrEqual", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{arg1, arg2, message, args});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::_Assert::LessOrEqual
// Il2CppName: LessOrEqual
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(float, float, ::Il2CppString*, ::Array<::Il2CppObject*>*)>(&NUnit::Framework::_Assert::LessOrEqual)> {
  static const MethodInfo* get() {
    static auto* arg1 = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* arg2 = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* message = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* args = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Object"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::_Assert*), "LessOrEqual", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{arg1, arg2, message, args});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::_Assert::IsTrue
// Il2CppName: IsTrue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(bool, ::Il2CppString*, ::Array<::Il2CppObject*>*)>(&NUnit::Framework::_Assert::IsTrue)> {
  static const MethodInfo* get() {
    static auto* condition = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* message = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* args = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Object"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::_Assert*), "IsTrue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{condition, message, args});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::_Assert::IsTrue
// Il2CppName: IsTrue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(bool)>(&NUnit::Framework::_Assert::IsTrue)> {
  static const MethodInfo* get() {
    static auto* condition = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::_Assert*), "IsTrue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{condition});
  }
};
