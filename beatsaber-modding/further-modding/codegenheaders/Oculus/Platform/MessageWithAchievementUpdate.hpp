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
  // Forward declaring type: AchievementUpdate
  class AchievementUpdate;
}
// Completed forward declares
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // WARNING Size may be invalid!
  // Autogenerated type: Oculus.Platform.MessageWithAchievementUpdate
  // [TokenAttribute] Offset: FFFFFFFF
  class MessageWithAchievementUpdate : public Oculus::Platform::Message_1<Oculus::Platform::Models::AchievementUpdate*> {
    public:
    // Creating value type constructor for type: MessageWithAchievementUpdate
    MessageWithAchievementUpdate() noexcept {}
    // protected Oculus.Platform.Models.AchievementUpdate GetDataFromMessage(System.IntPtr c_message)
    // Offset: 0x152C210
    Oculus::Platform::Models::AchievementUpdate* GetDataFromMessage(System::IntPtr c_message);
    // public System.Void .ctor(System.IntPtr c_message)
    // Offset: 0x1529DB4
    // Implemented from: Oculus.Platform.Message`1
    // Base method: System.Void Message_1::.ctor(System.IntPtr c_message)
    // Base method: System.Void Message::.ctor(System.IntPtr c_message)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MessageWithAchievementUpdate* New_ctor(System::IntPtr c_message) {
      static auto ___internal__logger = ::Logger::get().WithContext("Oculus::Platform::MessageWithAchievementUpdate::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MessageWithAchievementUpdate*, creationType>(c_message)));
    }
    // public override Oculus.Platform.Models.AchievementUpdate GetAchievementUpdate()
    // Offset: 0x152C1CC
    // Implemented from: Oculus.Platform.Message
    // Base method: Oculus.Platform.Models.AchievementUpdate Message::GetAchievementUpdate()
    Oculus::Platform::Models::AchievementUpdate* GetAchievementUpdate();
  }; // Oculus.Platform.MessageWithAchievementUpdate
}
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::MessageWithAchievementUpdate*, "Oculus.Platform", "MessageWithAchievementUpdate");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Platform::MessageWithAchievementUpdate::GetDataFromMessage
// Il2CppName: GetDataFromMessage
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Oculus::Platform::Models::AchievementUpdate* (Oculus::Platform::MessageWithAchievementUpdate::*)(System::IntPtr)>(&Oculus::Platform::MessageWithAchievementUpdate::GetDataFromMessage)> {
  static const MethodInfo* get() {
    static auto* c_message = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::MessageWithAchievementUpdate*), "GetDataFromMessage", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{c_message});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::MessageWithAchievementUpdate::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Oculus::Platform::MessageWithAchievementUpdate::GetAchievementUpdate
// Il2CppName: GetAchievementUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Oculus::Platform::Models::AchievementUpdate* (Oculus::Platform::MessageWithAchievementUpdate::*)()>(&Oculus::Platform::MessageWithAchievementUpdate::GetAchievementUpdate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::MessageWithAchievementUpdate*), "GetAchievementUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
