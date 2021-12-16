// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Security::Cryptography
namespace System::Security::Cryptography {
  // Forward declaring type: HashAlgorithm
  class HashAlgorithm;
}
// Completed forward declares
// Type namespace: Mono.Security.Cryptography
namespace Mono::Security::Cryptography {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Mono.Security.Cryptography.PKCS1
  // [TokenAttribute] Offset: FFFFFFFF
  class PKCS1 : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: PKCS1
    PKCS1() noexcept {}
    // Get static field: static private System.Byte[] emptySHA1
    static ::Array<uint8_t>* _get_emptySHA1();
    // Set static field: static private System.Byte[] emptySHA1
    static void _set_emptySHA1(::Array<uint8_t>* value);
    // Get static field: static private System.Byte[] emptySHA256
    static ::Array<uint8_t>* _get_emptySHA256();
    // Set static field: static private System.Byte[] emptySHA256
    static void _set_emptySHA256(::Array<uint8_t>* value);
    // Get static field: static private System.Byte[] emptySHA384
    static ::Array<uint8_t>* _get_emptySHA384();
    // Set static field: static private System.Byte[] emptySHA384
    static void _set_emptySHA384(::Array<uint8_t>* value);
    // Get static field: static private System.Byte[] emptySHA512
    static ::Array<uint8_t>* _get_emptySHA512();
    // Set static field: static private System.Byte[] emptySHA512
    static void _set_emptySHA512(::Array<uint8_t>* value);
    // static private System.Void .cctor()
    // Offset: 0x1E01D3C
    static void _cctor();
    // static System.String HashNameFromOid(System.String oid, System.Boolean throwOnError)
    // Offset: 0x1E01688
    static ::Il2CppString* HashNameFromOid(::Il2CppString* oid, bool throwOnError);
    // static System.Security.Cryptography.HashAlgorithm CreateFromOid(System.String oid)
    // Offset: 0x1E01958
    static System::Security::Cryptography::HashAlgorithm* CreateFromOid(::Il2CppString* oid);
    // static System.Security.Cryptography.HashAlgorithm CreateFromName(System.String name)
    // Offset: 0x1E019C4
    static System::Security::Cryptography::HashAlgorithm* CreateFromName(::Il2CppString* name);
  }; // Mono.Security.Cryptography.PKCS1
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Mono::Security::Cryptography::PKCS1*, "Mono.Security.Cryptography", "PKCS1");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Mono::Security::Cryptography::PKCS1::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Mono::Security::Cryptography::PKCS1::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Cryptography::PKCS1*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Security::Cryptography::PKCS1::HashNameFromOid
// Il2CppName: HashNameFromOid
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (*)(::Il2CppString*, bool)>(&Mono::Security::Cryptography::PKCS1::HashNameFromOid)> {
  static const MethodInfo* get() {
    static auto* oid = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* throwOnError = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Cryptography::PKCS1*), "HashNameFromOid", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{oid, throwOnError});
  }
};
// Writing MetadataGetter for method: Mono::Security::Cryptography::PKCS1::CreateFromOid
// Il2CppName: CreateFromOid
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Security::Cryptography::HashAlgorithm* (*)(::Il2CppString*)>(&Mono::Security::Cryptography::PKCS1::CreateFromOid)> {
  static const MethodInfo* get() {
    static auto* oid = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Cryptography::PKCS1*), "CreateFromOid", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{oid});
  }
};
// Writing MetadataGetter for method: Mono::Security::Cryptography::PKCS1::CreateFromName
// Il2CppName: CreateFromName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Security::Cryptography::HashAlgorithm* (*)(::Il2CppString*)>(&Mono::Security::Cryptography::PKCS1::CreateFromName)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Cryptography::PKCS1*), "CreateFromName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name});
  }
};
