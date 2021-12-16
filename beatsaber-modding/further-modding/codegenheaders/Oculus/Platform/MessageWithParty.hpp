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
  // Forward declaring type: Party
  class Party;
}
// Completed forward declares
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // WARNING Size may be invalid!
  // Autogenerated type: Oculus.Platform.MessageWithParty
  // [TokenAttribute] Offset: FFFFFFFF
  class MessageWithParty : public Oculus::Platform::Message_1<Oculus::Platform::Models::Party*> {
    public:
    // Creating value type constructor for type: MessageWithParty
    MessageWithParty() noexcept {}
    // protected Oculus.Platform.Models.Party GetDataFromMessage(System.IntPtr c_message)
    // Offset: 0x1532E04
    Oculus::Platform::Models::Party* GetDataFromMessage(System::IntPtr c_message);
    // public System.Void .ctor(System.IntPtr c_message)
    // Offset: 0x1532D60
    // Implemented from: Oculus.Platform.Message`1
    // Base method: System.Void Message_1::.ctor(System.IntPtr c_message)
    // Base method: System.Void Message::.ctor(System.IntPtr c_message)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MessageWithParty* New_ctor(System::IntPtr c_message) {
      static auto ___internal__logger = ::Logger::get().WithContext("Oculus::Platform::MessageWithParty::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MessageWithParty*, creationType>(c_message)));
    }
    // public override Oculus.Platform.Models.Party GetParty()
    // Offset: 0x1532DC0
    // Implemented from: Oculus.Platform.Message
    // Base method: Oculus.Platform.Models.Party Message::GetParty()
    Oculus::Platform::Models::Party* GetParty();
  }; // Oculus.Platform.MessageWithParty
}
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::MessageWithParty*, "Oculus.Platform", "MessageWithParty");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Platform::MessageWithParty::GetDataFromMessage
// Il2CppName: GetDataFromMessage
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Oculus::Platform::Models::Party* (Oculus::Platform::MessageWithParty::*)(System::IntPtr)>(&Oculus::Platform::MessageWithParty::GetDataFromMessage)> {
  static const MethodInfo* get() {
    static auto* c_message = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::MessageWithParty*), "GetDataFromMessage", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{c_message});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::MessageWithParty::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Oculus::Platform::MessageWithParty::GetParty
// Il2CppName: GetParty
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Oculus::Platform::Models::Party* (Oculus::Platform::MessageWithParty::*)()>(&Oculus::Platform::MessageWithParty::GetParty)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::MessageWithParty*), "GetParty", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
