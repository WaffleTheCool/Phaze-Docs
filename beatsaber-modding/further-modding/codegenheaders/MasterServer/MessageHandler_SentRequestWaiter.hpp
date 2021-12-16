// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: MasterServer.MessageHandler
#include "MasterServer/MessageHandler.hpp"
// Including type: MasterServer.MessageHandler/MasterServer.RequestWaiter
#include "MasterServer/MessageHandler_RequestWaiter.hpp"
// Including type: System.Threading.CancellationTokenRegistration
#include "System/Threading/CancellationTokenRegistration.hpp"
// Including type: System.Threading.CancellationToken
#include "System/Threading/CancellationToken.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: TaskCompletionSource`1<TResult>
  template<typename TResult>
  class TaskCompletionSource_1;
  // Forward declaring type: Task
  class Task;
}
// Completed forward declares
// Type namespace: MasterServer
namespace MasterServer {
  // WARNING Size may be invalid!
  // Autogenerated type: MasterServer.MessageHandler/MasterServer.SentRequestWaiter
  // [TokenAttribute] Offset: FFFFFFFF
  class MessageHandler::SentRequestWaiter : public MasterServer::MessageHandler::RequestWaiter {
    public:
    // private readonly System.Threading.Tasks.TaskCompletionSource`1<System.Boolean> _taskCompletionSource
    // Size: 0x8
    // Offset: 0x10
    System::Threading::Tasks::TaskCompletionSource_1<bool>* taskCompletionSource;
    // Field size check
    static_assert(sizeof(System::Threading::Tasks::TaskCompletionSource_1<bool>*) == 0x8);
    // private readonly System.Threading.CancellationTokenRegistration _disposedCancellationTokenRegistration
    // Size: 0xFFFFFFFF
    // Offset: 0x18
    System::Threading::CancellationTokenRegistration disposedCancellationTokenRegistration;
    // private readonly System.Threading.CancellationTokenRegistration _requestCancellationTokenRegistration
    // Size: 0xFFFFFFFF
    // Offset: 0x30
    System::Threading::CancellationTokenRegistration requestCancellationTokenRegistration;
    // Creating value type constructor for type: SentRequestWaiter
    SentRequestWaiter(System::Threading::Tasks::TaskCompletionSource_1<bool>* taskCompletionSource_ = {}, System::Threading::CancellationTokenRegistration disposedCancellationTokenRegistration_ = {}, System::Threading::CancellationTokenRegistration requestCancellationTokenRegistration_ = {}) noexcept : taskCompletionSource{taskCompletionSource_}, disposedCancellationTokenRegistration{disposedCancellationTokenRegistration_}, requestCancellationTokenRegistration{requestCancellationTokenRegistration_} {}
    // Get instance field reference: private readonly System.Threading.Tasks.TaskCompletionSource`1<System.Boolean> _taskCompletionSource
    System::Threading::Tasks::TaskCompletionSource_1<bool>*& dyn__taskCompletionSource();
    // Get instance field reference: private readonly System.Threading.CancellationTokenRegistration _disposedCancellationTokenRegistration
    System::Threading::CancellationTokenRegistration& dyn__disposedCancellationTokenRegistration();
    // Get instance field reference: private readonly System.Threading.CancellationTokenRegistration _requestCancellationTokenRegistration
    System::Threading::CancellationTokenRegistration& dyn__requestCancellationTokenRegistration();
    // public System.Threading.Tasks.Task get_task()
    // Offset: 0x1222DD8
    System::Threading::Tasks::Task* get_task();
    // public System.Boolean get_isWaiting()
    // Offset: 0x1222E28
    bool get_isWaiting();
    // public System.Void .ctor(System.Threading.CancellationToken disposedCancellationToken, System.Threading.CancellationToken requestCancellationToken)
    // Offset: 0x1222CBC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MessageHandler::SentRequestWaiter* New_ctor(System::Threading::CancellationToken disposedCancellationToken, System::Threading::CancellationToken requestCancellationToken) {
      static auto ___internal__logger = ::Logger::get().WithContext("MasterServer::MessageHandler::SentRequestWaiter::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MessageHandler::SentRequestWaiter*, creationType>(disposedCancellationToken, requestCancellationToken)));
    }
    // public System.Void Complete(System.Boolean handled)
    // Offset: 0x12204BC
    void Complete(bool handled);
    // public System.Void Cancel()
    // Offset: 0x1222E98
    void Cancel();
    // public override System.Void Dispose()
    // Offset: 0x1224844
    // Implemented from: MasterServer.MessageHandler/MasterServer.RequestWaiter
    // Base method: System.Void RequestWaiter::Dispose()
    void Dispose();
  }; // MasterServer.MessageHandler/MasterServer.SentRequestWaiter
  // WARNING Not writing size check since size may be invalid!
}
DEFINE_IL2CPP_ARG_TYPE(MasterServer::MessageHandler::SentRequestWaiter*, "MasterServer", "MessageHandler/SentRequestWaiter");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: MasterServer::MessageHandler::SentRequestWaiter::get_task
// Il2CppName: get_task
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task* (MasterServer::MessageHandler::SentRequestWaiter::*)()>(&MasterServer::MessageHandler::SentRequestWaiter::get_task)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MasterServer::MessageHandler::SentRequestWaiter*), "get_task", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MasterServer::MessageHandler::SentRequestWaiter::get_isWaiting
// Il2CppName: get_isWaiting
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (MasterServer::MessageHandler::SentRequestWaiter::*)()>(&MasterServer::MessageHandler::SentRequestWaiter::get_isWaiting)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MasterServer::MessageHandler::SentRequestWaiter*), "get_isWaiting", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MasterServer::MessageHandler::SentRequestWaiter::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: MasterServer::MessageHandler::SentRequestWaiter::Complete
// Il2CppName: Complete
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MasterServer::MessageHandler::SentRequestWaiter::*)(bool)>(&MasterServer::MessageHandler::SentRequestWaiter::Complete)> {
  static const MethodInfo* get() {
    static auto* handled = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MasterServer::MessageHandler::SentRequestWaiter*), "Complete", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{handled});
  }
};
// Writing MetadataGetter for method: MasterServer::MessageHandler::SentRequestWaiter::Cancel
// Il2CppName: Cancel
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MasterServer::MessageHandler::SentRequestWaiter::*)()>(&MasterServer::MessageHandler::SentRequestWaiter::Cancel)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MasterServer::MessageHandler::SentRequestWaiter*), "Cancel", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MasterServer::MessageHandler::SentRequestWaiter::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MasterServer::MessageHandler::SentRequestWaiter::*)()>(&MasterServer::MessageHandler::SentRequestWaiter::Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MasterServer::MessageHandler::SentRequestWaiter*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
