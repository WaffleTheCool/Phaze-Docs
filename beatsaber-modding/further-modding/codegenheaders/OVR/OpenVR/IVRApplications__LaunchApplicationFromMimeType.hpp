// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: OVR.OpenVR.IVRApplications
#include "OVR/OpenVR/IVRApplications.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: OVR::OpenVR
namespace OVR::OpenVR {
  // Forward declaring type: EVRApplicationError
  struct EVRApplicationError;
}
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
  // Autogenerated type: OVR.OpenVR.IVRApplications/OVR.OpenVR._LaunchApplicationFromMimeType
  // [TokenAttribute] Offset: FFFFFFFF
  // [UnmanagedFunctionPointerAttribute] Offset: DF2FA4
  class IVRApplications::_LaunchApplicationFromMimeType : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: _LaunchApplicationFromMimeType
    _LaunchApplicationFromMimeType() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x15CD594
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRApplications::_LaunchApplicationFromMimeType* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("OVR::OpenVR::IVRApplications::_LaunchApplicationFromMimeType::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRApplications::_LaunchApplicationFromMimeType*, creationType>(object, method)));
    }
    // public OVR.OpenVR.EVRApplicationError Invoke(System.String pchMimeType, System.String pchArgs)
    // Offset: 0x15BD920
    OVR::OpenVR::EVRApplicationError Invoke(::Il2CppString* pchMimeType, ::Il2CppString* pchArgs);
    // public System.IAsyncResult BeginInvoke(System.String pchMimeType, System.String pchArgs, System.AsyncCallback callback, System.Object object)
    // Offset: 0x15CD5A4
    System::IAsyncResult* BeginInvoke(::Il2CppString* pchMimeType, ::Il2CppString* pchArgs, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public OVR.OpenVR.EVRApplicationError EndInvoke(System.IAsyncResult result)
    // Offset: 0x15CD5D4
    OVR::OpenVR::EVRApplicationError EndInvoke(System::IAsyncResult* result);
  }; // OVR.OpenVR.IVRApplications/OVR.OpenVR._LaunchApplicationFromMimeType
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::IVRApplications::_LaunchApplicationFromMimeType*, "OVR.OpenVR", "IVRApplications/_LaunchApplicationFromMimeType");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: OVR::OpenVR::IVRApplications::_LaunchApplicationFromMimeType::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: OVR::OpenVR::IVRApplications::_LaunchApplicationFromMimeType::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<OVR::OpenVR::EVRApplicationError (OVR::OpenVR::IVRApplications::_LaunchApplicationFromMimeType::*)(::Il2CppString*, ::Il2CppString*)>(&OVR::OpenVR::IVRApplications::_LaunchApplicationFromMimeType::Invoke)> {
  static const MethodInfo* get() {
    static auto* pchMimeType = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* pchArgs = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVRApplications::_LaunchApplicationFromMimeType*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pchMimeType, pchArgs});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::IVRApplications::_LaunchApplicationFromMimeType::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult* (OVR::OpenVR::IVRApplications::_LaunchApplicationFromMimeType::*)(::Il2CppString*, ::Il2CppString*, System::AsyncCallback*, ::Il2CppObject*)>(&OVR::OpenVR::IVRApplications::_LaunchApplicationFromMimeType::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* pchMimeType = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* pchArgs = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVRApplications::_LaunchApplicationFromMimeType*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pchMimeType, pchArgs, callback, object});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::IVRApplications::_LaunchApplicationFromMimeType::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<OVR::OpenVR::EVRApplicationError (OVR::OpenVR::IVRApplications::_LaunchApplicationFromMimeType::*)(System::IAsyncResult*)>(&OVR::OpenVR::IVRApplications::_LaunchApplicationFromMimeType::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVRApplications::_LaunchApplicationFromMimeType*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};
