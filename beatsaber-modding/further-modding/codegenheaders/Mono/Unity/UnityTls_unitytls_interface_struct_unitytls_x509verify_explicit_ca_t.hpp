// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: Mono.Unity.UnityTls/Mono.Unity.unitytls_interface_struct
#include "Mono/Unity/UnityTls_unitytls_interface_struct.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
// Including type: Mono.Unity.UnityTls
#include "Mono/Unity/UnityTls.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
// Type namespace: Mono.Unity
namespace Mono::Unity {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: Mono.Unity.UnityTls/Mono.Unity.unitytls_interface_struct/Mono.Unity.unitytls_x509verify_explicit_ca_t
  // [TokenAttribute] Offset: FFFFFFFF
  // [UnmanagedFunctionPointerAttribute] Offset: DAC4B0
  class UnityTls::unitytls_interface_struct::unitytls_x509verify_explicit_ca_t : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: unitytls_x509verify_explicit_ca_t
    unitytls_x509verify_explicit_ca_t() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x15FCB74
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UnityTls::unitytls_interface_struct::unitytls_x509verify_explicit_ca_t* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("Mono::Unity::UnityTls::unitytls_interface_struct::unitytls_x509verify_explicit_ca_t::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UnityTls::unitytls_interface_struct::unitytls_x509verify_explicit_ca_t*, creationType>(object, method)));
    }
    // public Mono.Unity.UnityTls/Mono.Unity.unitytls_x509verify_result Invoke(Mono.Unity.UnityTls/Mono.Unity.unitytls_x509list_ref chain, Mono.Unity.UnityTls/Mono.Unity.unitytls_x509list_ref trustCA, System.Byte* cn, System.IntPtr cnLen, Mono.Unity.UnityTls/Mono.Unity.unitytls_x509verify_callback cb, System.Void* userData, Mono.Unity.UnityTls/Mono.Unity.unitytls_errorstate* errorState)
    // Offset: 0x15FCB84
    Mono::Unity::UnityTls::unitytls_x509verify_result Invoke(Mono::Unity::UnityTls::unitytls_x509list_ref chain, Mono::Unity::UnityTls::unitytls_x509list_ref trustCA, uint8_t* cn, System::IntPtr cnLen, Mono::Unity::UnityTls::unitytls_x509verify_callback* cb, void* userData, Mono::Unity::UnityTls::unitytls_errorstate* errorState);
    // public System.IAsyncResult BeginInvoke(Mono.Unity.UnityTls/Mono.Unity.unitytls_x509list_ref chain, Mono.Unity.UnityTls/Mono.Unity.unitytls_x509list_ref trustCA, System.Byte* cn, System.IntPtr cnLen, Mono.Unity.UnityTls/Mono.Unity.unitytls_x509verify_callback cb, System.Void* userData, Mono.Unity.UnityTls/Mono.Unity.unitytls_errorstate* errorState, System.AsyncCallback callback, System.Object object)
    // Offset: 0x15FCEAC
    System::IAsyncResult* BeginInvoke(Mono::Unity::UnityTls::unitytls_x509list_ref chain, Mono::Unity::UnityTls::unitytls_x509list_ref trustCA, uint8_t* cn, System::IntPtr cnLen, Mono::Unity::UnityTls::unitytls_x509verify_callback* cb, void* userData, Mono::Unity::UnityTls::unitytls_errorstate* errorState, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public Mono.Unity.UnityTls/Mono.Unity.unitytls_x509verify_result EndInvoke(System.IAsyncResult result)
    // Offset: 0x15FCF8C
    Mono::Unity::UnityTls::unitytls_x509verify_result EndInvoke(System::IAsyncResult* result);
  }; // Mono.Unity.UnityTls/Mono.Unity.unitytls_interface_struct/Mono.Unity.unitytls_x509verify_explicit_ca_t
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(Mono::Unity::UnityTls::unitytls_interface_struct::unitytls_x509verify_explicit_ca_t*, "Mono.Unity", "UnityTls/unitytls_interface_struct/unitytls_x509verify_explicit_ca_t");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Mono::Unity::UnityTls::unitytls_interface_struct::unitytls_x509verify_explicit_ca_t::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Mono::Unity::UnityTls::unitytls_interface_struct::unitytls_x509verify_explicit_ca_t::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Mono::Unity::UnityTls::unitytls_x509verify_result (Mono::Unity::UnityTls::unitytls_interface_struct::unitytls_x509verify_explicit_ca_t::*)(Mono::Unity::UnityTls::unitytls_x509list_ref, Mono::Unity::UnityTls::unitytls_x509list_ref, uint8_t*, System::IntPtr, Mono::Unity::UnityTls::unitytls_x509verify_callback*, void*, Mono::Unity::UnityTls::unitytls_errorstate*)>(&Mono::Unity::UnityTls::unitytls_interface_struct::unitytls_x509verify_explicit_ca_t::Invoke)> {
  static const MethodInfo* get() {
    static auto* chain = &::il2cpp_utils::GetClassFromName("Mono.Unity", "UnityTls/unitytls_x509list_ref")->byval_arg;
    static auto* trustCA = &::il2cpp_utils::GetClassFromName("Mono.Unity", "UnityTls/unitytls_x509list_ref")->byval_arg;
    static auto* cn = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Byte"))->byval_arg;
    static auto* cnLen = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* cb = &::il2cpp_utils::GetClassFromName("Mono.Unity", "UnityTls/unitytls_x509verify_callback")->byval_arg;
    static auto* userData = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Void"))->byval_arg;
    static auto* errorState = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("Mono.Unity", "UnityTls/unitytls_errorstate"))->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Unity::UnityTls::unitytls_interface_struct::unitytls_x509verify_explicit_ca_t*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{chain, trustCA, cn, cnLen, cb, userData, errorState});
  }
};
// Writing MetadataGetter for method: Mono::Unity::UnityTls::unitytls_interface_struct::unitytls_x509verify_explicit_ca_t::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult* (Mono::Unity::UnityTls::unitytls_interface_struct::unitytls_x509verify_explicit_ca_t::*)(Mono::Unity::UnityTls::unitytls_x509list_ref, Mono::Unity::UnityTls::unitytls_x509list_ref, uint8_t*, System::IntPtr, Mono::Unity::UnityTls::unitytls_x509verify_callback*, void*, Mono::Unity::UnityTls::unitytls_errorstate*, System::AsyncCallback*, ::Il2CppObject*)>(&Mono::Unity::UnityTls::unitytls_interface_struct::unitytls_x509verify_explicit_ca_t::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* chain = &::il2cpp_utils::GetClassFromName("Mono.Unity", "UnityTls/unitytls_x509list_ref")->byval_arg;
    static auto* trustCA = &::il2cpp_utils::GetClassFromName("Mono.Unity", "UnityTls/unitytls_x509list_ref")->byval_arg;
    static auto* cn = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Byte"))->byval_arg;
    static auto* cnLen = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* cb = &::il2cpp_utils::GetClassFromName("Mono.Unity", "UnityTls/unitytls_x509verify_callback")->byval_arg;
    static auto* userData = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Void"))->byval_arg;
    static auto* errorState = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("Mono.Unity", "UnityTls/unitytls_errorstate"))->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Unity::UnityTls::unitytls_interface_struct::unitytls_x509verify_explicit_ca_t*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{chain, trustCA, cn, cnLen, cb, userData, errorState, callback, object});
  }
};
// Writing MetadataGetter for method: Mono::Unity::UnityTls::unitytls_interface_struct::unitytls_x509verify_explicit_ca_t::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Mono::Unity::UnityTls::unitytls_x509verify_result (Mono::Unity::UnityTls::unitytls_interface_struct::unitytls_x509verify_explicit_ca_t::*)(System::IAsyncResult*)>(&Mono::Unity::UnityTls::unitytls_interface_struct::unitytls_x509verify_explicit_ca_t::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Unity::UnityTls::unitytls_interface_struct::unitytls_x509verify_explicit_ca_t*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};
