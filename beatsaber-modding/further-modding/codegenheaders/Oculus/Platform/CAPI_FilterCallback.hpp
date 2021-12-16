// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: Oculus.Platform.CAPI
#include "Oculus/Platform/CAPI.hpp"
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
  // Forward declaring type: UIntPtr
  struct UIntPtr;
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Platform.CAPI/Oculus.Platform.FilterCallback
  // [TokenAttribute] Offset: FFFFFFFF
  // [UnmanagedFunctionPointerAttribute] Offset: E20A7C
  class CAPI::FilterCallback : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: FilterCallback
    FilterCallback() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x151EEBC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CAPI::FilterCallback* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("Oculus::Platform::CAPI::FilterCallback::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CAPI::FilterCallback*, creationType>(object, method)));
    }
    // public System.Void Invoke(in System.Int16[] pcmData, System.UIntPtr pcmDataLength, System.Int32 frequency, System.Int32 numChannels)
    // Offset: 0x151EECC
    void Invoke(ByRef<::Array<int16_t>*> pcmData, System::UIntPtr pcmDataLength, int frequency, int numChannels);
    // public System.IAsyncResult BeginInvoke(in System.Int16[] pcmData, System.UIntPtr pcmDataLength, System.Int32 frequency, System.Int32 numChannels, System.AsyncCallback callback, System.Object object)
    // Offset: 0x151F170
    System::IAsyncResult* BeginInvoke(ByRef<::Array<int16_t>*> pcmData, System::UIntPtr pcmDataLength, int frequency, int numChannels, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0x151F240
    void EndInvoke(System::IAsyncResult* result);
  }; // Oculus.Platform.CAPI/Oculus.Platform.FilterCallback
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::CAPI::FilterCallback*, "Oculus.Platform", "CAPI/FilterCallback");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Platform::CAPI::FilterCallback::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Oculus::Platform::CAPI::FilterCallback::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Platform::CAPI::FilterCallback::*)(ByRef<::Array<int16_t>*>, System::UIntPtr, int, int)>(&Oculus::Platform::CAPI::FilterCallback::Invoke)> {
  static const MethodInfo* get() {
    static auto* pcmData = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Int16"), 1)->this_arg;
    static auto* pcmDataLength = &::il2cpp_utils::GetClassFromName("System", "UIntPtr")->byval_arg;
    static auto* frequency = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* numChannels = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::CAPI::FilterCallback*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pcmData, pcmDataLength, frequency, numChannels});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::CAPI::FilterCallback::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult* (Oculus::Platform::CAPI::FilterCallback::*)(ByRef<::Array<int16_t>*>, System::UIntPtr, int, int, System::AsyncCallback*, ::Il2CppObject*)>(&Oculus::Platform::CAPI::FilterCallback::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* pcmData = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Int16"), 1)->this_arg;
    static auto* pcmDataLength = &::il2cpp_utils::GetClassFromName("System", "UIntPtr")->byval_arg;
    static auto* frequency = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* numChannels = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::CAPI::FilterCallback*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pcmData, pcmDataLength, frequency, numChannels, callback, object});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::CAPI::FilterCallback::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Platform::CAPI::FilterCallback::*)(System::IAsyncResult*)>(&Oculus::Platform::CAPI::FilterCallback::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::CAPI::FilterCallback*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};
