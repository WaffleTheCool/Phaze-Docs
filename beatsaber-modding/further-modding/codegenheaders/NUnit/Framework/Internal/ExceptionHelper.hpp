// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: NUnit::Framework::Internal
namespace NUnit::Framework::Internal {
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
  // Forward declaring type: Exception
  class Exception;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: NUnit.Framework.Internal
namespace NUnit::Framework::Internal {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: NUnit.Framework.Internal.ExceptionHelper
  // [TokenAttribute] Offset: FFFFFFFF
  class ExceptionHelper : public ::Il2CppObject {
    public:
    // Nested type: NUnit::Framework::Internal::ExceptionHelper::$$c
    class $$c;
    // Creating value type constructor for type: ExceptionHelper
    ExceptionHelper() noexcept {}
    // Get static field: static private readonly System.Action`1<System.Exception> PreserveStackTrace
    static System::Action_1<System::Exception*>* _get_PreserveStackTrace();
    // Set static field: static private readonly System.Action`1<System.Exception> PreserveStackTrace
    static void _set_PreserveStackTrace(System::Action_1<System::Exception*>* value);
    // static private System.Void .cctor()
    // Offset: 0x177F8A0
    static void _cctor();
    // static public System.String BuildMessage(System.Exception exception)
    // Offset: 0x177FA98
    static ::Il2CppString* BuildMessage(System::Exception* exception);
    // static public System.String BuildStackTrace(System.Exception exception)
    // Offset: 0x177FF58
    static ::Il2CppString* BuildStackTrace(System::Exception* exception);
    // static public System.String GetStackTrace(System.Exception exception)
    // Offset: 0x17801C4
    static ::Il2CppString* GetStackTrace(System::Exception* exception);
    // static private System.Collections.Generic.List`1<System.Exception> FlattenExceptionHierarchy(System.Exception exception)
    // Offset: 0x177FE84
    static System::Collections::Generic::List_1<System::Exception*>* FlattenExceptionHierarchy(System::Exception* exception);
  }; // NUnit.Framework.Internal.ExceptionHelper
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(NUnit::Framework::Internal::ExceptionHelper*, "NUnit.Framework.Internal", "ExceptionHelper");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: NUnit::Framework::Internal::ExceptionHelper::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&NUnit::Framework::Internal::ExceptionHelper::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::ExceptionHelper*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::ExceptionHelper::BuildMessage
// Il2CppName: BuildMessage
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (*)(System::Exception*)>(&NUnit::Framework::Internal::ExceptionHelper::BuildMessage)> {
  static const MethodInfo* get() {
    static auto* exception = &::il2cpp_utils::GetClassFromName("System", "Exception")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::ExceptionHelper*), "BuildMessage", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{exception});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::ExceptionHelper::BuildStackTrace
// Il2CppName: BuildStackTrace
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (*)(System::Exception*)>(&NUnit::Framework::Internal::ExceptionHelper::BuildStackTrace)> {
  static const MethodInfo* get() {
    static auto* exception = &::il2cpp_utils::GetClassFromName("System", "Exception")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::ExceptionHelper*), "BuildStackTrace", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{exception});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::ExceptionHelper::GetStackTrace
// Il2CppName: GetStackTrace
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (*)(System::Exception*)>(&NUnit::Framework::Internal::ExceptionHelper::GetStackTrace)> {
  static const MethodInfo* get() {
    static auto* exception = &::il2cpp_utils::GetClassFromName("System", "Exception")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::ExceptionHelper*), "GetStackTrace", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{exception});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::ExceptionHelper::FlattenExceptionHierarchy
// Il2CppName: FlattenExceptionHierarchy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::List_1<System::Exception*>* (*)(System::Exception*)>(&NUnit::Framework::Internal::ExceptionHelper::FlattenExceptionHierarchy)> {
  static const MethodInfo* get() {
    static auto* exception = &::il2cpp_utils::GetClassFromName("System", "Exception")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::ExceptionHelper*), "FlattenExceptionHierarchy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{exception});
  }
};
