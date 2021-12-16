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
  // Forward declaring type: MatchmakingBrowseResult
  class MatchmakingBrowseResult;
  // Forward declaring type: MatchmakingEnqueueResult
  class MatchmakingEnqueueResult;
  // Forward declaring type: RoomList
  class RoomList;
}
// Completed forward declares
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // WARNING Size may be invalid!
  // Autogenerated type: Oculus.Platform.MessageWithMatchmakingBrowseResult
  // [TokenAttribute] Offset: FFFFFFFF
  class MessageWithMatchmakingBrowseResult : public Oculus::Platform::Message_1<Oculus::Platform::Models::MatchmakingBrowseResult*> {
    public:
    // Creating value type constructor for type: MessageWithMatchmakingBrowseResult
    MessageWithMatchmakingBrowseResult() noexcept {}
    // protected Oculus.Platform.Models.MatchmakingBrowseResult GetDataFromMessage(System.IntPtr c_message)
    // Offset: 0x153128C
    Oculus::Platform::Models::MatchmakingBrowseResult* GetDataFromMessage(System::IntPtr c_message);
    // public System.Void .ctor(System.IntPtr c_message)
    // Offset: 0x152A954
    // Implemented from: Oculus.Platform.Message`1
    // Base method: System.Void Message_1::.ctor(System.IntPtr c_message)
    // Base method: System.Void Message::.ctor(System.IntPtr c_message)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MessageWithMatchmakingBrowseResult* New_ctor(System::IntPtr c_message) {
      static auto ___internal__logger = ::Logger::get().WithContext("Oculus::Platform::MessageWithMatchmakingBrowseResult::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MessageWithMatchmakingBrowseResult*, creationType>(c_message)));
    }
    // public override Oculus.Platform.Models.MatchmakingEnqueueResult GetMatchmakingEnqueueResult()
    // Offset: 0x15311EC
    // Implemented from: Oculus.Platform.Message
    // Base method: Oculus.Platform.Models.MatchmakingEnqueueResult Message::GetMatchmakingEnqueueResult()
    Oculus::Platform::Models::MatchmakingEnqueueResult* GetMatchmakingEnqueueResult();
    // public override Oculus.Platform.Models.RoomList GetRoomList()
    // Offset: 0x153123C
    // Implemented from: Oculus.Platform.Message
    // Base method: Oculus.Platform.Models.RoomList Message::GetRoomList()
    Oculus::Platform::Models::RoomList* GetRoomList();
  }; // Oculus.Platform.MessageWithMatchmakingBrowseResult
}
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::MessageWithMatchmakingBrowseResult*, "Oculus.Platform", "MessageWithMatchmakingBrowseResult");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Platform::MessageWithMatchmakingBrowseResult::GetDataFromMessage
// Il2CppName: GetDataFromMessage
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Oculus::Platform::Models::MatchmakingBrowseResult* (Oculus::Platform::MessageWithMatchmakingBrowseResult::*)(System::IntPtr)>(&Oculus::Platform::MessageWithMatchmakingBrowseResult::GetDataFromMessage)> {
  static const MethodInfo* get() {
    static auto* c_message = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::MessageWithMatchmakingBrowseResult*), "GetDataFromMessage", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{c_message});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::MessageWithMatchmakingBrowseResult::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Oculus::Platform::MessageWithMatchmakingBrowseResult::GetMatchmakingEnqueueResult
// Il2CppName: GetMatchmakingEnqueueResult
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Oculus::Platform::Models::MatchmakingEnqueueResult* (Oculus::Platform::MessageWithMatchmakingBrowseResult::*)()>(&Oculus::Platform::MessageWithMatchmakingBrowseResult::GetMatchmakingEnqueueResult)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::MessageWithMatchmakingBrowseResult*), "GetMatchmakingEnqueueResult", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::MessageWithMatchmakingBrowseResult::GetRoomList
// Il2CppName: GetRoomList
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Oculus::Platform::Models::RoomList* (Oculus::Platform::MessageWithMatchmakingBrowseResult::*)()>(&Oculus::Platform::MessageWithMatchmakingBrowseResult::GetRoomList)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::MessageWithMatchmakingBrowseResult*), "GetRoomList", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
