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
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: StringBuilder
  class StringBuilder;
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
  // Autogenerated type: OVR.OpenVR.IVRDriverManager/OVR.OpenVR._GetDriverName
  // [TokenAttribute] Offset: FFFFFFFF
  // [UnmanagedFunctionPointerAttribute] Offset: DF40C0
  class IVRDriverManager::_GetDriverName : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: _GetDriverName
    _GetDriverName() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1F59434
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRDriverManager::_GetDriverName* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("OVR::OpenVR::IVRDriverManager::_GetDriverName::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRDriverManager::_GetDriverName*, creationType>(object, method)));
    }
    // public System.UInt32 Invoke(System.UInt32 nDriver, System.Text.StringBuilder pchValue, System.UInt32 unBufferSize)
    // Offset: 0x1F59444
    uint Invoke(uint nDriver, System::Text::StringBuilder* pchValue, uint unBufferSize);
    // public System.IAsyncResult BeginInvoke(System.UInt32 nDriver, System.Text.StringBuilder pchValue, System.UInt32 unBufferSize, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1F596E4
    System::IAsyncResult* BeginInvoke(uint nDriver, System::Text::StringBuilder* pchValue, uint unBufferSize, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.UInt32 EndInvoke(System.IAsyncResult result)
    // Offset: 0x1F59794
    uint EndInvoke(System::IAsyncResult* result);
  }; // OVR.OpenVR.IVRDriverManager/OVR.OpenVR._GetDriverName
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::IVRDriverManager::_GetDriverName*, "OVR.OpenVR", "IVRDriverManager/_GetDriverName");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: OVR::OpenVR::IVRDriverManager::_GetDriverName::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: OVR::OpenVR::IVRDriverManager::_GetDriverName::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (OVR::OpenVR::IVRDriverManager::_GetDriverName::*)(uint, System::Text::StringBuilder*, uint)>(&OVR::OpenVR::IVRDriverManager::_GetDriverName::Invoke)> {
  static const MethodInfo* get() {
    static auto* nDriver = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* pchValue = &::il2cpp_utils::GetClassFromName("System.Text", "StringBuilder")->byval_arg;
    static auto* unBufferSize = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVRDriverManager::_GetDriverName*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{nDriver, pchValue, unBufferSize});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::IVRDriverManager::_GetDriverName::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult* (OVR::OpenVR::IVRDriverManager::_GetDriverName::*)(uint, System::Text::StringBuilder*, uint, System::AsyncCallback*, ::Il2CppObject*)>(&OVR::OpenVR::IVRDriverManager::_GetDriverName::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* nDriver = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* pchValue = &::il2cpp_utils::GetClassFromName("System.Text", "StringBuilder")->byval_arg;
    static auto* unBufferSize = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVRDriverManager::_GetDriverName*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{nDriver, pchValue, unBufferSize, callback, object});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::IVRDriverManager::_GetDriverName::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (OVR::OpenVR::IVRDriverManager::_GetDriverName::*)(System::IAsyncResult*)>(&OVR::OpenVR::IVRDriverManager::_GetDriverName::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVRDriverManager::_GetDriverName*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};
