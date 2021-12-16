// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: OVR.OpenVR.IVRScreenshots
#include "OVR/OpenVR/IVRScreenshots.hpp"
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
  // Forward declaring type: EVRScreenshotError
  struct EVRScreenshotError;
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
  // Autogenerated type: OVR.OpenVR.IVRScreenshots/OVR.OpenVR._TakeStereoScreenshot
  // [TokenAttribute] Offset: FFFFFFFF
  // [UnmanagedFunctionPointerAttribute] Offset: DF405C
  class IVRScreenshots::_TakeStereoScreenshot : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: _TakeStereoScreenshot
    _TakeStereoScreenshot() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x20EE5E8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRScreenshots::_TakeStereoScreenshot* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("OVR::OpenVR::IVRScreenshots::_TakeStereoScreenshot::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRScreenshots::_TakeStereoScreenshot*, creationType>(object, method)));
    }
    // public OVR.OpenVR.EVRScreenshotError Invoke(ref System.UInt32 pOutScreenshotHandle, System.String pchPreviewFilename, System.String pchVRFilename)
    // Offset: 0x20EE5F8
    OVR::OpenVR::EVRScreenshotError Invoke(ByRef<uint> pOutScreenshotHandle, ::Il2CppString* pchPreviewFilename, ::Il2CppString* pchVRFilename);
    // public System.IAsyncResult BeginInvoke(ref System.UInt32 pOutScreenshotHandle, System.String pchPreviewFilename, System.String pchVRFilename, System.AsyncCallback callback, System.Object object)
    // Offset: 0x20EE888
    System::IAsyncResult* BeginInvoke(ByRef<uint> pOutScreenshotHandle, ::Il2CppString* pchPreviewFilename, ::Il2CppString* pchVRFilename, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public OVR.OpenVR.EVRScreenshotError EndInvoke(ref System.UInt32 pOutScreenshotHandle, System.IAsyncResult result)
    // Offset: 0x20EE930
    OVR::OpenVR::EVRScreenshotError EndInvoke(ByRef<uint> pOutScreenshotHandle, System::IAsyncResult* result);
  }; // OVR.OpenVR.IVRScreenshots/OVR.OpenVR._TakeStereoScreenshot
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::IVRScreenshots::_TakeStereoScreenshot*, "OVR.OpenVR", "IVRScreenshots/_TakeStereoScreenshot");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: OVR::OpenVR::IVRScreenshots::_TakeStereoScreenshot::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: OVR::OpenVR::IVRScreenshots::_TakeStereoScreenshot::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<OVR::OpenVR::EVRScreenshotError (OVR::OpenVR::IVRScreenshots::_TakeStereoScreenshot::*)(ByRef<uint>, ::Il2CppString*, ::Il2CppString*)>(&OVR::OpenVR::IVRScreenshots::_TakeStereoScreenshot::Invoke)> {
  static const MethodInfo* get() {
    static auto* pOutScreenshotHandle = &::il2cpp_utils::GetClassFromName("System", "UInt32")->this_arg;
    static auto* pchPreviewFilename = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* pchVRFilename = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVRScreenshots::_TakeStereoScreenshot*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pOutScreenshotHandle, pchPreviewFilename, pchVRFilename});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::IVRScreenshots::_TakeStereoScreenshot::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult* (OVR::OpenVR::IVRScreenshots::_TakeStereoScreenshot::*)(ByRef<uint>, ::Il2CppString*, ::Il2CppString*, System::AsyncCallback*, ::Il2CppObject*)>(&OVR::OpenVR::IVRScreenshots::_TakeStereoScreenshot::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* pOutScreenshotHandle = &::il2cpp_utils::GetClassFromName("System", "UInt32")->this_arg;
    static auto* pchPreviewFilename = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* pchVRFilename = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVRScreenshots::_TakeStereoScreenshot*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pOutScreenshotHandle, pchPreviewFilename, pchVRFilename, callback, object});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::IVRScreenshots::_TakeStereoScreenshot::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<OVR::OpenVR::EVRScreenshotError (OVR::OpenVR::IVRScreenshots::_TakeStereoScreenshot::*)(ByRef<uint>, System::IAsyncResult*)>(&OVR::OpenVR::IVRScreenshots::_TakeStereoScreenshot::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* pOutScreenshotHandle = &::il2cpp_utils::GetClassFromName("System", "UInt32")->this_arg;
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVRScreenshots::_TakeStereoScreenshot*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pOutScreenshotHandle, result});
  }
};
