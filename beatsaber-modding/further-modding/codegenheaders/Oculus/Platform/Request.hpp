// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: Oculus.Platform.Message
#include "Oculus/Platform/Message.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Platform.Request
  // [TokenAttribute] Offset: FFFFFFFF
  class Request : public ::Il2CppObject {
    public:
    // private Oculus.Platform.Message/Oculus.Platform.Callback callback_
    // Size: 0x8
    // Offset: 0x10
    Oculus::Platform::Message::Callback* callback;
    // Field size check
    static_assert(sizeof(Oculus::Platform::Message::Callback*) == 0x8);
    // private System.UInt64 <RequestID>k__BackingField
    // Size: 0x8
    // Offset: 0x18
    uint64_t RequestID;
    // Field size check
    static_assert(sizeof(uint64_t) == 0x8);
    // Creating value type constructor for type: Request
    Request(Oculus::Platform::Message::Callback* callback_ = {}, uint64_t RequestID_ = {}) noexcept : callback{callback_}, RequestID{RequestID_} {}
    // Get instance field reference: private Oculus.Platform.Message/Oculus.Platform.Callback callback_
    Oculus::Platform::Message::Callback*& dyn_callback_();
    // Get instance field reference: private System.UInt64 <RequestID>k__BackingField
    uint64_t& dyn_$RequestID$k__BackingField();
    // public System.UInt64 get_RequestID()
    // Offset: 0x23B3980
    uint64_t get_RequestID();
    // public System.Void set_RequestID(System.UInt64 value)
    // Offset: 0x23B3988
    void set_RequestID(uint64_t value);
    // public System.Void .ctor(System.UInt64 requestID)
    // Offset: 0x23B20E8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Request* New_ctor(uint64_t requestID) {
      static auto ___internal__logger = ::Logger::get().WithContext("Oculus::Platform::Request::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Request*, creationType>(requestID)));
    }
    // public Oculus.Platform.Request OnComplete(Oculus.Platform.Message/Oculus.Platform.Callback callback)
    // Offset: 0x23B3990
    Oculus::Platform::Request* OnComplete(Oculus::Platform::Message::Callback* callback);
    // public System.Void HandleMessage(Oculus.Platform.Message msg)
    // Offset: 0x23B3A10
    void HandleMessage(Oculus::Platform::Message* msg);
    // static public System.Void RunCallbacks(System.UInt32 limit)
    // Offset: 0x23B3AA8
    static void RunCallbacks(uint limit);
  }; // Oculus.Platform.Request
  #pragma pack(pop)
  static check_size<sizeof(Request), 24 + sizeof(uint64_t)> __Oculus_Platform_RequestSizeCheck;
  static_assert(sizeof(Request) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::Request*, "Oculus.Platform", "Request");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Platform::Request::get_RequestID
// Il2CppName: get_RequestID
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (Oculus::Platform::Request::*)()>(&Oculus::Platform::Request::get_RequestID)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::Request*), "get_RequestID", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::Request::set_RequestID
// Il2CppName: set_RequestID
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Platform::Request::*)(uint64_t)>(&Oculus::Platform::Request::set_RequestID)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::Request*), "set_RequestID", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::Request::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Oculus::Platform::Request::OnComplete
// Il2CppName: OnComplete
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Oculus::Platform::Request* (Oculus::Platform::Request::*)(Oculus::Platform::Message::Callback*)>(&Oculus::Platform::Request::OnComplete)> {
  static const MethodInfo* get() {
    static auto* callback = &::il2cpp_utils::GetClassFromName("Oculus.Platform", "Message/Callback")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::Request*), "OnComplete", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{callback});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::Request::HandleMessage
// Il2CppName: HandleMessage
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Platform::Request::*)(Oculus::Platform::Message*)>(&Oculus::Platform::Request::HandleMessage)> {
  static const MethodInfo* get() {
    static auto* msg = &::il2cpp_utils::GetClassFromName("Oculus.Platform", "Message")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::Request*), "HandleMessage", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{msg});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::Request::RunCallbacks
// Il2CppName: RunCallbacks
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(uint)>(&Oculus::Platform::Request::RunCallbacks)> {
  static const MethodInfo* get() {
    static auto* limit = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::Request*), "RunCallbacks", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{limit});
  }
};
