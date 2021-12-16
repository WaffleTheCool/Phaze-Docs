// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include <initializer_list>
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Exception
  class Exception;
}
// Completed forward declares
// Type namespace: ModestTree
namespace ModestTree {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: ModestTree.Log
  // [TokenAttribute] Offset: FFFFFFFF
  class Log : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: Log
    Log() noexcept {}
    // static public System.Void Debug(System.String message, params System.Object[] args)
    // Offset: 0x13DBB4C
    static void Debug(::Il2CppString* message, ::Array<::Il2CppObject*>* args);
    // Creating initializer_list -> params proxy for: System.Void Debug(System.String message, params System.Object[] args)
    static void Debug(::Il2CppString* message, std::initializer_list<::Il2CppObject*> args);
    // Creating TArgs -> initializer_list proxy for: System.Void Debug(System.String message, params System.Object[] args)
    template<class ...TParams>
    static void Debug(::Il2CppString* message, TParams&&... args) {
      Debug(message, {args...});
    }
    // static public System.Void Info(System.String message, params System.Object[] args)
    // Offset: 0x13DBB50
    static void Info(::Il2CppString* message, ::Array<::Il2CppObject*>* args);
    // Creating initializer_list -> params proxy for: System.Void Info(System.String message, params System.Object[] args)
    static void Info(::Il2CppString* message, std::initializer_list<::Il2CppObject*> args);
    // Creating TArgs -> initializer_list proxy for: System.Void Info(System.String message, params System.Object[] args)
    template<class ...TParams>
    static void Info(::Il2CppString* message, TParams&&... args) {
      Info(message, {args...});
    }
    // static public System.Void Warn(System.String message, params System.Object[] args)
    // Offset: 0x13DB3EC
    static void Warn(::Il2CppString* message, ::Array<::Il2CppObject*>* args);
    // Creating initializer_list -> params proxy for: System.Void Warn(System.String message, params System.Object[] args)
    static void Warn(::Il2CppString* message, std::initializer_list<::Il2CppObject*> args);
    // Creating TArgs -> initializer_list proxy for: System.Void Warn(System.String message, params System.Object[] args)
    template<class ...TParams>
    static void Warn(::Il2CppString* message, TParams&&... args) {
      Warn(message, {args...});
    }
    // static public System.Void Trace(System.String message, params System.Object[] args)
    // Offset: 0x13DBBD8
    static void Trace(::Il2CppString* message, ::Array<::Il2CppObject*>* args);
    // Creating initializer_list -> params proxy for: System.Void Trace(System.String message, params System.Object[] args)
    static void Trace(::Il2CppString* message, std::initializer_list<::Il2CppObject*> args);
    // Creating TArgs -> initializer_list proxy for: System.Void Trace(System.String message, params System.Object[] args)
    template<class ...TParams>
    static void Trace(::Il2CppString* message, TParams&&... args) {
      Trace(message, {args...});
    }
    // static public System.Void ErrorException(System.Exception e)
    // Offset: 0x13DBC60
    static void ErrorException(System::Exception* e);
    // static public System.Void ErrorException(System.String message, System.Exception e)
    // Offset: 0x13DBCC8
    static void ErrorException(::Il2CppString* message, System::Exception* e);
    // static public System.Void Error(System.String message, params System.Object[] args)
    // Offset: 0x13DBD48
    static void Error(::Il2CppString* message, ::Array<::Il2CppObject*>* args);
    // Creating initializer_list -> params proxy for: System.Void Error(System.String message, params System.Object[] args)
    static void Error(::Il2CppString* message, std::initializer_list<::Il2CppObject*> args);
    // Creating TArgs -> initializer_list proxy for: System.Void Error(System.String message, params System.Object[] args)
    template<class ...TParams>
    static void Error(::Il2CppString* message, TParams&&... args) {
      Error(message, {args...});
    }
  }; // ModestTree.Log
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(ModestTree::Log*, "ModestTree", "Log");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: ModestTree::Log::Debug
// Il2CppName: Debug
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Il2CppString*, ::Array<::Il2CppObject*>*)>(&ModestTree::Log::Debug)> {
  static const MethodInfo* get() {
    static auto* message = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* args = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Object"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(ModestTree::Log*), "Debug", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{message, args});
  }
};
// Writing MetadataGetter for method: ModestTree::Log::Info
// Il2CppName: Info
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Il2CppString*, ::Array<::Il2CppObject*>*)>(&ModestTree::Log::Info)> {
  static const MethodInfo* get() {
    static auto* message = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* args = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Object"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(ModestTree::Log*), "Info", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{message, args});
  }
};
// Writing MetadataGetter for method: ModestTree::Log::Warn
// Il2CppName: Warn
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Il2CppString*, ::Array<::Il2CppObject*>*)>(&ModestTree::Log::Warn)> {
  static const MethodInfo* get() {
    static auto* message = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* args = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Object"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(ModestTree::Log*), "Warn", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{message, args});
  }
};
// Writing MetadataGetter for method: ModestTree::Log::Trace
// Il2CppName: Trace
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Il2CppString*, ::Array<::Il2CppObject*>*)>(&ModestTree::Log::Trace)> {
  static const MethodInfo* get() {
    static auto* message = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* args = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Object"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(ModestTree::Log*), "Trace", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{message, args});
  }
};
// Writing MetadataGetter for method: ModestTree::Log::ErrorException
// Il2CppName: ErrorException
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(System::Exception*)>(&ModestTree::Log::ErrorException)> {
  static const MethodInfo* get() {
    static auto* e = &::il2cpp_utils::GetClassFromName("System", "Exception")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(ModestTree::Log*), "ErrorException", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{e});
  }
};
// Writing MetadataGetter for method: ModestTree::Log::ErrorException
// Il2CppName: ErrorException
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Il2CppString*, System::Exception*)>(&ModestTree::Log::ErrorException)> {
  static const MethodInfo* get() {
    static auto* message = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* e = &::il2cpp_utils::GetClassFromName("System", "Exception")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(ModestTree::Log*), "ErrorException", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{message, e});
  }
};
// Writing MetadataGetter for method: ModestTree::Log::Error
// Il2CppName: Error
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Il2CppString*, ::Array<::Il2CppObject*>*)>(&ModestTree::Log::Error)> {
  static const MethodInfo* get() {
    static auto* message = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* args = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Object"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(ModestTree::Log*), "Error", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{message, args});
  }
};
