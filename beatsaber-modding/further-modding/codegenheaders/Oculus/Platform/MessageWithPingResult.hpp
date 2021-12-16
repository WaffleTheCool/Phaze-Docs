// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: Oculus.Platform.Message`1
#include "Oculus/Platform/Message_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Oculus::Platform::Models
namespace Oculus::Platform::Models {
  // Forward declaring type: PingResult
  class PingResult;
}
// Completed forward declares
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // WARNING Size may be invalid!
  // Autogenerated type: Oculus.Platform.MessageWithPingResult
  // [TokenAttribute] Offset: FFFFFFFF
  class MessageWithPingResult : public Oculus::Platform::Message_1<Oculus::Platform::Models::PingResult*> {
    public:
    // Creating value type constructor for type: MessageWithPingResult
    MessageWithPingResult() noexcept {}
    // protected Oculus.Platform.Models.PingResult GetDataFromMessage(System.IntPtr c_message)
    // Offset: 0x153383C
    Oculus::Platform::Models::PingResult* GetDataFromMessage(System::IntPtr c_message);
    // public System.Void .ctor(System.IntPtr c_message)
    // Offset: 0x152B494
    // Implemented from: Oculus.Platform.Message`1
    // Base method: System.Void Message_1::.ctor(System.IntPtr c_message)
    // Base method: System.Void Message::.ctor(System.IntPtr c_message)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MessageWithPingResult* New_ctor(System::IntPtr c_message) {
      static auto ___internal__logger = ::Logger::get().WithContext("Oculus::Platform::MessageWithPingResult::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MessageWithPingResult*, creationType>(c_message)));
    }
    // public override Oculus.Platform.Models.PingResult GetPingResult()
    // Offset: 0x15337F8
    // Implemented from: Oculus.Platform.Message
    // Base method: Oculus.Platform.Models.PingResult Message::GetPingResult()
    Oculus::Platform::Models::PingResult* GetPingResult();
  }; // Oculus.Platform.MessageWithPingResult
}
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::MessageWithPingResult*, "Oculus.Platform", "MessageWithPingResult");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Platform::MessageWithPingResult::GetDataFromMessage
// Il2CppName: GetDataFromMessage
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Oculus::Platform::Models::PingResult* (Oculus::Platform::MessageWithPingResult::*)(System::IntPtr)>(&Oculus::Platform::MessageWithPingResult::GetDataFromMessage)> {
  static const MethodInfo* get() {
    static auto* c_message = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::MessageWithPingResult*), "GetDataFromMessage", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{c_message});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::MessageWithPingResult::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Oculus::Platform::MessageWithPingResult::GetPingResult
// Il2CppName: GetPingResult
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Oculus::Platform::Models::PingResult* (Oculus::Platform::MessageWithPingResult::*)()>(&Oculus::Platform::MessageWithPingResult::GetPingResult)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::MessageWithPingResult*), "GetPingResult", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
