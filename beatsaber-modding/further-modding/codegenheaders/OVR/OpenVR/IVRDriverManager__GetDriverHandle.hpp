// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: OVR.OpenVR.IVRDriverManager
#include "OVR/OpenVR/IVRDriverManager.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
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
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: OVR.OpenVR.IVRDriverManager/OVR.OpenVR._GetDriverHandle
  // [TokenAttribute] Offset: FFFFFFFF
  // [UnmanagedFunctionPointerAttribute] Offset: DF40D4
  class IVRDriverManager::_GetDriverHandle : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: _GetDriverHandle
    _GetDriverHandle() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1F59038
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRDriverManager::_GetDriverHandle* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("OVR::OpenVR::IVRDriverManager::_GetDriverHandle::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRDriverManager::_GetDriverHandle*, creationType>(object, method)));
    }
    // public System.UInt64 Invoke(System.String pchDriverName)
    // Offset: 0x1F59048
    uint64_t Invoke(::Il2CppString* pchDriverName);
    // public System.IAsyncResult BeginInvoke(System.String pchDriverName, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1F593E4
    System::IAsyncResult* BeginInvoke(::Il2CppString* pchDriverName, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.UInt64 EndInvoke(System.IAsyncResult result)
    // Offset: 0x1F59408
    uint64_t EndInvoke(System::IAsyncResult* result);
  }; // OVR.OpenVR.IVRDriverManager/OVR.OpenVR._GetDriverHandle
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::IVRDriverManager::_GetDriverHandle*, "OVR.OpenVR", "IVRDriverManager/_GetDriverHandle");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: OVR::OpenVR::IVRDriverManager::_GetDriverHandle::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: OVR::OpenVR::IVRDriverManager::_GetDriverHandle::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (OVR::OpenVR::IVRDriverManager::_GetDriverHandle::*)(::Il2CppString*)>(&OVR::OpenVR::IVRDriverManager::_GetDriverHandle::Invoke)> {
  static const MethodInfo* get() {
    static auto* pchDriverName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVRDriverManager::_GetDriverHandle*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pchDriverName});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::IVRDriverManager::_GetDriverHandle::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult* (OVR::OpenVR::IVRDriverManager::_GetDriverHandle::*)(::Il2CppString*, System::AsyncCallback*, ::Il2CppObject*)>(&OVR::OpenVR::IVRDriverManager::_GetDriverHandle::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* pchDriverName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVRDriverManager::_GetDriverHandle*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pchDriverName, callback, object});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::IVRDriverManager::_GetDriverHandle::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (OVR::OpenVR::IVRDriverManager::_GetDriverHandle::*)(System::IAsyncResult*)>(&OVR::OpenVR::IVRDriverManager::_GetDriverHandle::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVRDriverManager::_GetDriverHandle*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};
