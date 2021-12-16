// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Microsoft::Win32
namespace Microsoft::Win32 {
}
// Completed forward declares
// Type namespace: Microsoft.Win32
namespace Microsoft::Win32 {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Microsoft.Win32.Win32Native
  // [TokenAttribute] Offset: FFFFFFFF
  class Win32Native : public ::Il2CppObject {
    public:
    // Nested type: Microsoft::Win32::Win32Native::WIN32_FIND_DATA
    class WIN32_FIND_DATA;
    // Creating value type constructor for type: Win32Native
    Win32Native() noexcept {}
    // static public System.String GetMessage(System.Int32 hr)
    // Offset: 0x1A67E14
    static ::Il2CppString* GetMessage(int hr);
    // static public System.Int32 MakeHRFromErrorCode(System.Int32 errorCode)
    // Offset: 0x1A67E90
    static int MakeHRFromErrorCode(int errorCode);
  }; // Microsoft.Win32.Win32Native
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Microsoft::Win32::Win32Native*, "Microsoft.Win32", "Win32Native");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Microsoft::Win32::Win32Native::GetMessage
// Il2CppName: GetMessage
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (*)(int)>(&Microsoft::Win32::Win32Native::GetMessage)> {
  static const MethodInfo* get() {
    static auto* hr = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Microsoft::Win32::Win32Native*), "GetMessage", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{hr});
  }
};
// Writing MetadataGetter for method: Microsoft::Win32::Win32Native::MakeHRFromErrorCode
// Il2CppName: MakeHRFromErrorCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(int)>(&Microsoft::Win32::Win32Native::MakeHRFromErrorCode)> {
  static const MethodInfo* get() {
    static auto* errorCode = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Microsoft::Win32::Win32Native*), "MakeHRFromErrorCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{errorCode});
  }
};
