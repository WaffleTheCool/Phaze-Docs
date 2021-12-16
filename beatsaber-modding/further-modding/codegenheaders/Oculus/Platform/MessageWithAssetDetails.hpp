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
  // Forward declaring type: AssetDetails
  class AssetDetails;
}
// Completed forward declares
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // WARNING Size may be invalid!
  // Autogenerated type: Oculus.Platform.MessageWithAssetDetails
  // [TokenAttribute] Offset: FFFFFFFF
  class MessageWithAssetDetails : public Oculus::Platform::Message_1<Oculus::Platform::Models::AssetDetails*> {
    public:
    // Creating value type constructor for type: MessageWithAssetDetails
    MessageWithAssetDetails() noexcept {}
    // protected Oculus.Platform.Models.AssetDetails GetDataFromMessage(System.IntPtr c_message)
    // Offset: 0x152C524
    Oculus::Platform::Models::AssetDetails* GetDataFromMessage(System::IntPtr c_message);
    // public System.Void .ctor(System.IntPtr c_message)
    // Offset: 0x1529E74
    // Implemented from: Oculus.Platform.Message`1
    // Base method: System.Void Message_1::.ctor(System.IntPtr c_message)
    // Base method: System.Void Message::.ctor(System.IntPtr c_message)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MessageWithAssetDetails* New_ctor(System::IntPtr c_message) {
      static auto ___internal__logger = ::Logger::get().WithContext("Oculus::Platform::MessageWithAssetDetails::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MessageWithAssetDetails*, creationType>(c_message)));
    }
    // public override Oculus.Platform.Models.AssetDetails GetAssetDetails()
    // Offset: 0x152C4E0
    // Implemented from: Oculus.Platform.Message
    // Base method: Oculus.Platform.Models.AssetDetails Message::GetAssetDetails()
    Oculus::Platform::Models::AssetDetails* GetAssetDetails();
  }; // Oculus.Platform.MessageWithAssetDetails
}
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::MessageWithAssetDetails*, "Oculus.Platform", "MessageWithAssetDetails");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Platform::MessageWithAssetDetails::GetDataFromMessage
// Il2CppName: GetDataFromMessage
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Oculus::Platform::Models::AssetDetails* (Oculus::Platform::MessageWithAssetDetails::*)(System::IntPtr)>(&Oculus::Platform::MessageWithAssetDetails::GetDataFromMessage)> {
  static const MethodInfo* get() {
    static auto* c_message = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::MessageWithAssetDetails*), "GetDataFromMessage", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{c_message});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::MessageWithAssetDetails::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Oculus::Platform::MessageWithAssetDetails::GetAssetDetails
// Il2CppName: GetAssetDetails
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Oculus::Platform::Models::AssetDetails* (Oculus::Platform::MessageWithAssetDetails::*)()>(&Oculus::Platform::MessageWithAssetDetails::GetAssetDetails)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::MessageWithAssetDetails*), "GetAssetDetails", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
