// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: AdditionalContentModel
#include "GlobalNamespace/AdditionalContentModel.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.Runtime.CompilerServices.IAsyncStateMachine
#include "System/Runtime/CompilerServices/IAsyncStateMachine.hpp"
// Including type: System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1
#include "System/Runtime/CompilerServices/AsyncTaskMethodBuilder_1.hpp"
// Including type: System.Threading.CancellationToken
#include "System/Threading/CancellationToken.hpp"
// Including type: System.Runtime.CompilerServices.TaskAwaiter`1
#include "System/Runtime/CompilerServices/TaskAwaiter_1.hpp"
// Completed includes
// Begin il2cpp-utils forward declares
struct Il2CppString;
// Completed il2cpp-utils forward declares
// Type namespace: 
namespace GlobalNamespace {
  // WARNING Size may be invalid!
  // Autogenerated type: AdditionalContentModel/<GetLevelEntitlementStatusAsync>d__10
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  struct AdditionalContentModel::$GetLevelEntitlementStatusAsync$d__10/*, public System::ValueType, public System::Runtime::CompilerServices::IAsyncStateMachine*/ {
    public:
    // public System.Int32 <>1__state
    // Size: 0x4
    // Offset: 0x0
    int $$1__state;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<AdditionalContentModel/EntitlementStatus> <>t__builder
    // Size: 0xFFFFFFFF
    // Offset: 0x8
    System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::AdditionalContentModel::EntitlementStatus> $$t__builder;
    // public AdditionalContentModel <>4__this
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::AdditionalContentModel* $$4__this;
    // Field size check
    static_assert(sizeof(GlobalNamespace::AdditionalContentModel*) == 0x8);
    // public System.String levelId
    // Size: 0x8
    // Offset: 0x28
    ::Il2CppString* levelId;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public System.Threading.CancellationToken token
    // Size: 0x8
    // Offset: 0x30
    System::Threading::CancellationToken token;
    // Field size check
    static_assert(sizeof(System::Threading::CancellationToken) == 0x8);
    // private System.Runtime.CompilerServices.TaskAwaiter`1<AdditionalContentModel/EntitlementStatus> <>u__1
    // Size: 0xFFFFFFFF
    // Offset: 0x38
    System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::AdditionalContentModel::EntitlementStatus> $$u__1;
    // Creating value type constructor for type: $GetLevelEntitlementStatusAsync$d__10
    constexpr $GetLevelEntitlementStatusAsync$d__10(int $$1__state_ = {}, System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::AdditionalContentModel::EntitlementStatus> $$t__builder_ = {}, GlobalNamespace::AdditionalContentModel* $$4__this_ = {}, ::Il2CppString* levelId_ = {}, System::Threading::CancellationToken token_ = {}, System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::AdditionalContentModel::EntitlementStatus> $$u__1_ = {}) noexcept : $$1__state{$$1__state_}, $$t__builder{$$t__builder_}, $$4__this{$$4__this_}, levelId{levelId_}, token{token_}, $$u__1{$$u__1_} {}
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
    // Get instance field reference: public System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<AdditionalContentModel/EntitlementStatus> <>t__builder
    System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::AdditionalContentModel::EntitlementStatus>& dyn_$$t__builder();
    // Get instance field reference: public AdditionalContentModel <>4__this
    GlobalNamespace::AdditionalContentModel*& dyn_$$4__this();
    // Get instance field reference: public System.String levelId
    ::Il2CppString*& dyn_levelId();
    // Get instance field reference: public System.Threading.CancellationToken token
    System::Threading::CancellationToken& dyn_token();
    // Get instance field reference: private System.Runtime.CompilerServices.TaskAwaiter`1<AdditionalContentModel/EntitlementStatus> <>u__1
    System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::AdditionalContentModel::EntitlementStatus>& dyn_$$u__1();
    // private System.Void MoveNext()
    // Offset: 0x1171C20
    void MoveNext();
    // private System.Void SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine stateMachine)
    // Offset: 0x1171E6C
    void SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);
  }; // AdditionalContentModel/<GetLevelEntitlementStatusAsync>d__10
  // WARNING Not writing size check since size may be invalid!
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::AdditionalContentModel::$GetLevelEntitlementStatusAsync$d__10, "", "AdditionalContentModel/<GetLevelEntitlementStatusAsync>d__10");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::AdditionalContentModel::$GetLevelEntitlementStatusAsync$d__10::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AdditionalContentModel::$GetLevelEntitlementStatusAsync$d__10::*)()>(&GlobalNamespace::AdditionalContentModel::$GetLevelEntitlementStatusAsync$d__10::MoveNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AdditionalContentModel::$GetLevelEntitlementStatusAsync$d__10), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AdditionalContentModel::$GetLevelEntitlementStatusAsync$d__10::SetStateMachine
// Il2CppName: SetStateMachine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AdditionalContentModel::$GetLevelEntitlementStatusAsync$d__10::*)(System::Runtime::CompilerServices::IAsyncStateMachine*)>(&GlobalNamespace::AdditionalContentModel::$GetLevelEntitlementStatusAsync$d__10::SetStateMachine)> {
  static const MethodInfo* get() {
    static auto* stateMachine = &::il2cpp_utils::GetClassFromName("System.Runtime.CompilerServices", "IAsyncStateMachine")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AdditionalContentModel::$GetLevelEntitlementStatusAsync$d__10), "SetStateMachine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{stateMachine});
  }
};
