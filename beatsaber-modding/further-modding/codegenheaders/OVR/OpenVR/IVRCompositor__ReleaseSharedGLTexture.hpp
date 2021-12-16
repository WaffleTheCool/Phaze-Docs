// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: OVR.OpenVR.IVRCompositor
#include "OVR/OpenVR/IVRCompositor.hpp"
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
  // Autogenerated type: OVR.OpenVR.IVRCompositor/OVR.OpenVR._ReleaseSharedGLTexture
  // [TokenAttribute] Offset: FFFFFFFF
  // [UnmanagedFunctionPointerAttribute] Offset: DF3670
  class IVRCompositor::_ReleaseSharedGLTexture : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: _ReleaseSharedGLTexture
    _ReleaseSharedGLTexture() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1F56BB0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRCompositor::_ReleaseSharedGLTexture* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("OVR::OpenVR::IVRCompositor::_ReleaseSharedGLTexture::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRCompositor::_ReleaseSharedGLTexture*, creationType>(object, method)));
    }
    // public System.Boolean Invoke(System.UInt32 glTextureId, System.IntPtr glSharedTextureHandle)
    // Offset: 0x1F56BC0
    bool Invoke(uint glTextureId, System::IntPtr glSharedTextureHandle);
    // public System.IAsyncResult BeginInvoke(System.UInt32 glTextureId, System.IntPtr glSharedTextureHandle, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1F56E48
    System::IAsyncResult* BeginInvoke(uint glTextureId, System::IntPtr glSharedTextureHandle, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Boolean EndInvoke(System.IAsyncResult result)
    // Offset: 0x1F56EF4
    bool EndInvoke(System::IAsyncResult* result);
  }; // OVR.OpenVR.IVRCompositor/OVR.OpenVR._ReleaseSharedGLTexture
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::IVRCompositor::_ReleaseSharedGLTexture*, "OVR.OpenVR", "IVRCompositor/_ReleaseSharedGLTexture");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: OVR::OpenVR::IVRCompositor::_ReleaseSharedGLTexture::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: OVR::OpenVR::IVRCompositor::_ReleaseSharedGLTexture::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (OVR::OpenVR::IVRCompositor::_ReleaseSharedGLTexture::*)(uint, System::IntPtr)>(&OVR::OpenVR::IVRCompositor::_ReleaseSharedGLTexture::Invoke)> {
  static const MethodInfo* get() {
    static auto* glTextureId = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* glSharedTextureHandle = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVRCompositor::_ReleaseSharedGLTexture*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{glTextureId, glSharedTextureHandle});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::IVRCompositor::_ReleaseSharedGLTexture::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult* (OVR::OpenVR::IVRCompositor::_ReleaseSharedGLTexture::*)(uint, System::IntPtr, System::AsyncCallback*, ::Il2CppObject*)>(&OVR::OpenVR::IVRCompositor::_ReleaseSharedGLTexture::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* glTextureId = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* glSharedTextureHandle = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVRCompositor::_ReleaseSharedGLTexture*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{glTextureId, glSharedTextureHandle, callback, object});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::IVRCompositor::_ReleaseSharedGLTexture::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (OVR::OpenVR::IVRCompositor::_ReleaseSharedGLTexture::*)(System::IAsyncResult*)>(&OVR::OpenVR::IVRCompositor::_ReleaseSharedGLTexture::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVRCompositor::_ReleaseSharedGLTexture*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};
