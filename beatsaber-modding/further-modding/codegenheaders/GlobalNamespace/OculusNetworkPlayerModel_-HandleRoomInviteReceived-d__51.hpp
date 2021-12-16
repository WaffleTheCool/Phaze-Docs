// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: OculusNetworkPlayerModel
#include "GlobalNamespace/OculusNetworkPlayerModel.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.Runtime.CompilerServices.IAsyncStateMachine
#include "System/Runtime/CompilerServices/IAsyncStateMachine.hpp"
// Including type: System.Runtime.CompilerServices.AsyncVoidMethodBuilder
#include "System/Runtime/CompilerServices/AsyncVoidMethodBuilder.hpp"
// Including type: System.Runtime.CompilerServices.TaskAwaiter`1
#include "System/Runtime/CompilerServices/TaskAwaiter_1.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Oculus::Platform
namespace Oculus::Platform {
  // Forward declaring type: Message`1<T>
  template<typename T>
  class Message_1;
}
// Forward declaring namespace: Oculus::Platform::Models
namespace Oculus::Platform::Models {
  // Forward declaring type: RoomInviteNotification
  class RoomInviteNotification;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
struct Il2CppString;
// Completed il2cpp-utils forward declares
// Type namespace: 
namespace GlobalNamespace {
  // WARNING Size may be invalid!
  // Autogenerated type: OculusNetworkPlayerModel/<HandleRoomInviteReceived>d__51
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  struct OculusNetworkPlayerModel::$HandleRoomInviteReceived$d__51/*, public System::ValueType, public System::Runtime::CompilerServices::IAsyncStateMachine*/ {
    public:
    // public System.Int32 <>1__state
    // Size: 0x4
    // Offset: 0x0
    int $$1__state;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Runtime.CompilerServices.AsyncVoidMethodBuilder <>t__builder
    // Size: 0x20
    // Offset: 0x8
    System::Runtime::CompilerServices::AsyncVoidMethodBuilder $$t__builder;
    // Field size check
    static_assert(sizeof(System::Runtime::CompilerServices::AsyncVoidMethodBuilder) == 0x20);
    // public OculusNetworkPlayerModel <>4__this
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::OculusNetworkPlayerModel* $$4__this;
    // Field size check
    static_assert(sizeof(GlobalNamespace::OculusNetworkPlayerModel*) == 0x8);
    // public Oculus.Platform.Message`1<Oculus.Platform.Models.RoomInviteNotification> message
    // Size: 0x8
    // Offset: 0x30
    Oculus::Platform::Message_1<Oculus::Platform::Models::RoomInviteNotification*>* message;
    // Field size check
    static_assert(sizeof(Oculus::Platform::Message_1<Oculus::Platform::Models::RoomInviteNotification*>*) == 0x8);
    // private OculusNetworkPlayerModel/<>c__DisplayClass51_0 <>8__1
    // Size: 0x8
    // Offset: 0x38
    GlobalNamespace::OculusNetworkPlayerModel::$$c__DisplayClass51_0* $$8__1;
    // Field size check
    static_assert(sizeof(GlobalNamespace::OculusNetworkPlayerModel::$$c__DisplayClass51_0*) == 0x8);
    // private System.Runtime.CompilerServices.TaskAwaiter`1<System.String> <>u__1
    // Size: 0xFFFFFFFF
    // Offset: 0x40
    System::Runtime::CompilerServices::TaskAwaiter_1<::Il2CppString*> $$u__1;
    // Creating value type constructor for type: $HandleRoomInviteReceived$d__51
    constexpr $HandleRoomInviteReceived$d__51(int $$1__state_ = {}, System::Runtime::CompilerServices::AsyncVoidMethodBuilder $$t__builder_ = {}, GlobalNamespace::OculusNetworkPlayerModel* $$4__this_ = {}, Oculus::Platform::Message_1<Oculus::Platform::Models::RoomInviteNotification*>* message_ = {}, GlobalNamespace::OculusNetworkPlayerModel::$$c__DisplayClass51_0* $$8__1_ = {}, System::Runtime::CompilerServices::TaskAwaiter_1<::Il2CppString*> $$u__1_ = {}) noexcept : $$1__state{$$1__state_}, $$t__builder{$$t__builder_}, $$4__this{$$4__this_}, message{message_}, $$8__1{$$8__1_}, $$u__1{$$u__1_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator System::Runtime::CompilerServices::IAsyncStateMachine
    operator System::Runtime::CompilerServices::IAsyncStateMachine() noexcept {
      return *reinterpret_cast<System::Runtime::CompilerServices::IAsyncStateMachine*>(this);
    }
    // Get instance field reference: public System.Int32 <>1__state
    int& dyn_$$1__state();
    // Get instance field reference: public System.Runtime.CompilerServices.AsyncVoidMethodBuilder <>t__builder
    System::Runtime::CompilerServices::AsyncVoidMethodBuilder& dyn_$$t__builder();
    // Get instance field reference: public OculusNetworkPlayerModel <>4__this
    GlobalNamespace::OculusNetworkPlayerModel*& dyn_$$4__this();
    // Get instance field reference: public Oculus.Platform.Message`1<Oculus.Platform.Models.RoomInviteNotification> message
    Oculus::Platform::Message_1<Oculus::Platform::Models::RoomInviteNotification*>*& dyn_message();
    // Get instance field reference: private OculusNetworkPlayerModel/<>c__DisplayClass51_0 <>8__1
    GlobalNamespace::OculusNetworkPlayerModel::$$c__DisplayClass51_0*& dyn_$$8__1();
    // Get instance field reference: private System.Runtime.CompilerServices.TaskAwaiter`1<System.String> <>u__1
    System::Runtime::CompilerServices::TaskAwaiter_1<::Il2CppString*>& dyn_$$u__1();
    // private System.Void MoveNext()
    // Offset: 0x125A238
    void MoveNext();
    // private System.Void SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine stateMachine)
    // Offset: 0x125A598
    void SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);
  }; // OculusNetworkPlayerModel/<HandleRoomInviteReceived>d__51
  // WARNING Not writing size check since size may be invalid!
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OculusNetworkPlayerModel::$HandleRoomInviteReceived$d__51, "", "OculusNetworkPlayerModel/<HandleRoomInviteReceived>d__51");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::OculusNetworkPlayerModel::$HandleRoomInviteReceived$d__51::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OculusNetworkPlayerModel::$HandleRoomInviteReceived$d__51::*)()>(&GlobalNamespace::OculusNetworkPlayerModel::$HandleRoomInviteReceived$d__51::MoveNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OculusNetworkPlayerModel::$HandleRoomInviteReceived$d__51), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OculusNetworkPlayerModel::$HandleRoomInviteReceived$d__51::SetStateMachine
// Il2CppName: SetStateMachine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OculusNetworkPlayerModel::$HandleRoomInviteReceived$d__51::*)(System::Runtime::CompilerServices::IAsyncStateMachine*)>(&GlobalNamespace::OculusNetworkPlayerModel::$HandleRoomInviteReceived$d__51::SetStateMachine)> {
  static const MethodInfo* get() {
    static auto* stateMachine = &::il2cpp_utils::GetClassFromName("System.Runtime.CompilerServices", "IAsyncStateMachine")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OculusNetworkPlayerModel::$HandleRoomInviteReceived$d__51), "SetStateMachine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{stateMachine});
  }
};
