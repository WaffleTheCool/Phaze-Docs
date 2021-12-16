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
  // Forward declaring type: LaunchUnblockFlowResult
  class LaunchUnblockFlowResult;
}
// Completed forward declares
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // WARNING Size may be invalid!
  // Autogenerated type: Oculus.Platform.MessageWithLaunchUnblockFlowResult
  // [TokenAttribute] Offset: FFFFFFFF
  class MessageWithLaunchUnblockFlowResult : public Oculus::Platform::Message_1<Oculus::Platform::Models::LaunchUnblockFlowResult*> {
    public:
    // Creating value type constructor for type: MessageWithLaunchUnblockFlowResult
    MessageWithLaunchUnblockFlowResult() noexcept {}
    // protected Oculus.Platform.Models.LaunchUnblockFlowResult GetDataFromMessage(System.IntPtr c_message)
    // Offset: 0x152FE34
    Oculus::Platform::Models::LaunchUnblockFlowResult* GetDataFromMessage(System::IntPtr c_message);
    // public System.Void .ctor(System.IntPtr c_message)
    // Offset: 0x152FD90
    // Implemented from: Oculus.Platform.Message`1
    // Base method: System.Void Message_1::.ctor(System.IntPtr c_message)
    // Base method: System.Void Message::.ctor(System.IntPtr c_message)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MessageWithLaunchUnblockFlowResult* New_ctor(System::IntPtr c_message) {
      static auto ___internal__logger = ::Logger::get().WithContext("Oculus::Platform::MessageWithLaunchUnblockFlowResult::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MessageWithLaunchUnblockFlowResult*, creationType>(c_message)));
    }
    // public override Oculus.Platform.Models.LaunchUnblockFlowResult GetLaunchUnblockFlowResult()
    // Offset: 0x152FDF0
    // Implemented from: Oculus.Platform.Message
    // Base method: Oculus.Platform.Models.LaunchUnblockFlowResult Message::GetLaunchUnblockFlowResult()
    Oculus::Platform::Models::LaunchUnblockFlowResult* GetLaunchUnblockFlowResult();
  }; // Oculus.Platform.MessageWithLaunchUnblockFlowResult
}
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::MessageWithLaunchUnblockFlowResult*, "Oculus.Platform", "MessageWithLaunchUnblockFlowResult");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Platform::MessageWithLaunchUnblockFlowResult::GetDataFromMessage
// Il2CppName: GetDataFromMessage
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Oculus::Platform::Models::LaunchUnblockFlowResult* (Oculus::Platform::MessageWithLaunchUnblockFlowResult::*)(System::IntPtr)>(&Oculus::Platform::MessageWithLaunchUnblockFlowResult::GetDataFromMessage)> {
  static const MethodInfo* get() {
    static auto* c_message = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::MessageWithLaunchUnblockFlowResult*), "GetDataFromMessage", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{c_message});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::MessageWithLaunchUnblockFlowResult::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Oculus::Platform::MessageWithLaunchUnblockFlowResult::GetLaunchUnblockFlowResult
// Il2CppName: GetLaunchUnblockFlowResult
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Oculus::Platform::Models::LaunchUnblockFlowResult* (Oculus::Platform::MessageWithLaunchUnblockFlowResult::*)()>(&Oculus::Platform::MessageWithLaunchUnblockFlowResult::GetLaunchUnblockFlowResult)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::MessageWithLaunchUnblockFlowResult*), "GetLaunchUnblockFlowResult", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
