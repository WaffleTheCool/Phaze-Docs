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
  // Forward declaring type: Challenge
  class Challenge;
}
// Completed forward declares
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // WARNING Size may be invalid!
  // Autogenerated type: Oculus.Platform.MessageWithChallenge
  // [TokenAttribute] Offset: FFFFFFFF
  class MessageWithChallenge : public Oculus::Platform::Message_1<Oculus::Platform::Models::Challenge*> {
    public:
    // Creating value type constructor for type: MessageWithChallenge
    MessageWithChallenge() noexcept {}
    // protected Oculus.Platform.Models.Challenge GetDataFromMessage(System.IntPtr c_message)
    // Offset: 0x152D660
    Oculus::Platform::Models::Challenge* GetDataFromMessage(System::IntPtr c_message);
    // public System.Void .ctor(System.IntPtr c_message)
    // Offset: 0x152A174
    // Implemented from: Oculus.Platform.Message`1
    // Base method: System.Void Message_1::.ctor(System.IntPtr c_message)
    // Base method: System.Void Message::.ctor(System.IntPtr c_message)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MessageWithChallenge* New_ctor(System::IntPtr c_message) {
      static auto ___internal__logger = ::Logger::get().WithContext("Oculus::Platform::MessageWithChallenge::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MessageWithChallenge*, creationType>(c_message)));
    }
    // public override Oculus.Platform.Models.Challenge GetChallenge()
    // Offset: 0x152D61C
    // Implemented from: Oculus.Platform.Message
    // Base method: Oculus.Platform.Models.Challenge Message::GetChallenge()
    Oculus::Platform::Models::Challenge* GetChallenge();
  }; // Oculus.Platform.MessageWithChallenge
}
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::MessageWithChallenge*, "Oculus.Platform", "MessageWithChallenge");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Platform::MessageWithChallenge::GetDataFromMessage
// Il2CppName: GetDataFromMessage
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Oculus::Platform::Models::Challenge* (Oculus::Platform::MessageWithChallenge::*)(System::IntPtr)>(&Oculus::Platform::MessageWithChallenge::GetDataFromMessage)> {
  static const MethodInfo* get() {
    static auto* c_message = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::MessageWithChallenge*), "GetDataFromMessage", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{c_message});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::MessageWithChallenge::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Oculus::Platform::MessageWithChallenge::GetChallenge
// Il2CppName: GetChallenge
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Oculus::Platform::Models::Challenge* (Oculus::Platform::MessageWithChallenge::*)()>(&Oculus::Platform::MessageWithChallenge::GetChallenge)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::MessageWithChallenge*), "GetChallenge", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
