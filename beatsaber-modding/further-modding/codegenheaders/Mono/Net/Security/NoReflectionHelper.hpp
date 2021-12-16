// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Type namespace: Mono.Net.Security
namespace Mono::Net::Security {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Mono.Net.Security.NoReflectionHelper
  // [TokenAttribute] Offset: FFFFFFFF
  class NoReflectionHelper : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: NoReflectionHelper
    NoReflectionHelper() noexcept {}
    // static System.Object GetInternalValidator(System.Object provider, System.Object settings)
    // Offset: 0x15F6114
    static ::Il2CppObject* GetInternalValidator(::Il2CppObject* provider, ::Il2CppObject* settings);
    // static System.Object GetProvider()
    // Offset: 0x15F61CC
    static ::Il2CppObject* GetProvider();
  }; // Mono.Net.Security.NoReflectionHelper
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Mono::Net::Security::NoReflectionHelper*, "Mono.Net.Security", "NoReflectionHelper");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Mono::Net::Security::NoReflectionHelper::GetInternalValidator
// Il2CppName: GetInternalValidator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (*)(::Il2CppObject*, ::Il2CppObject*)>(&Mono::Net::Security::NoReflectionHelper::GetInternalValidator)> {
  static const MethodInfo* get() {
    static auto* provider = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* settings = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Net::Security::NoReflectionHelper*), "GetInternalValidator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{provider, settings});
  }
};
// Writing MetadataGetter for method: Mono::Net::Security::NoReflectionHelper::GetProvider
// Il2CppName: GetProvider
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (*)()>(&Mono::Net::Security::NoReflectionHelper::GetProvider)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Net::Security::NoReflectionHelper*), "GetProvider", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
