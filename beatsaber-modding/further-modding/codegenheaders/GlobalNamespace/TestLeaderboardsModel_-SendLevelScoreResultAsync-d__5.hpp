// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: TestLeaderboardsModel
#include "GlobalNamespace/TestLeaderboardsModel.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.Runtime.CompilerServices.IAsyncStateMachine
#include "System/Runtime/CompilerServices/IAsyncStateMachine.hpp"
// Including type: System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1
#include "System/Runtime/CompilerServices/AsyncTaskMethodBuilder_1.hpp"
// Including type: OnlineServices.SendLeaderboardEntryResult
#include "OnlineServices/SendLeaderboardEntryResult.hpp"
// Including type: OnlineServices.LevelScoreResultsData
#include "OnlineServices/LevelScoreResultsData.hpp"
// Including type: System.Runtime.CompilerServices.TaskAwaiter
#include "System/Runtime/CompilerServices/TaskAwaiter.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // WARNING Size may be invalid!
  // Autogenerated type: TestLeaderboardsModel/<SendLevelScoreResultAsync>d__5
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  struct TestLeaderboardsModel::$SendLevelScoreResultAsync$d__5/*, public System::ValueType, public System::Runtime::CompilerServices::IAsyncStateMachine*/ {
    public:
    // public System.Int32 <>1__state
    // Size: 0x4
    // Offset: 0x0
    int $$1__state;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<OnlineServices.SendLeaderboardEntryResult> <>t__builder
    // Size: 0xFFFFFFFF
    // Offset: 0x8
    System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<OnlineServices::SendLeaderboardEntryResult> $$t__builder;
    // public TestLeaderboardsModel <>4__this
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::TestLeaderboardsModel* $$4__this;
    // Field size check
    static_assert(sizeof(GlobalNamespace::TestLeaderboardsModel*) == 0x8);
    // public OnlineServices.LevelScoreResultsData levelScoreResult
    // Size: 0x30
    // Offset: 0x28
    OnlineServices::LevelScoreResultsData levelScoreResult;
    // Field size check
    static_assert(sizeof(OnlineServices::LevelScoreResultsData) == 0x30);
    // private System.Runtime.CompilerServices.TaskAwaiter <>u__1
    // Size: 0x8
    // Offset: 0x58
    System::Runtime::CompilerServices::TaskAwaiter $$u__1;
    // Field size check
    static_assert(sizeof(System::Runtime::CompilerServices::TaskAwaiter) == 0x8);
    // Creating value type constructor for type: $SendLevelScoreResultAsync$d__5
    constexpr $SendLevelScoreResultAsync$d__5(int $$1__state_ = {}, System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<OnlineServices::SendLeaderboardEntryResult> $$t__builder_ = {}, GlobalNamespace::TestLeaderboardsModel* $$4__this_ = {}, OnlineServices::LevelScoreResultsData levelScoreResult_ = {}, System::Runtime::CompilerServices::TaskAwaiter $$u__1_ = {}) noexcept : $$1__state{$$1__state_}, $$t__builder{$$t__builder_}, $$4__this{$$4__this_}, levelScoreResult{levelScoreResult_}, $$u__1{$$u__1_} {}
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
    // Get instance field reference: public System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<OnlineServices.SendLeaderboardEntryResult> <>t__builder
    System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<OnlineServices::SendLeaderboardEntryResult>& dyn_$$t__builder();
    // Get instance field reference: public TestLeaderboardsModel <>4__this
    GlobalNamespace::TestLeaderboardsModel*& dyn_$$4__this();
    // Get instance field reference: public OnlineServices.LevelScoreResultsData levelScoreResult
    OnlineServices::LevelScoreResultsData& dyn_levelScoreResult();
    // Get instance field reference: private System.Runtime.CompilerServices.TaskAwaiter <>u__1
    System::Runtime::CompilerServices::TaskAwaiter& dyn_$$u__1();
    // private System.Void MoveNext()
    // Offset: 0x106FA88
    void MoveNext();
    // private System.Void SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine stateMachine)
    // Offset: 0x106FC78
    void SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);
  }; // TestLeaderboardsModel/<SendLevelScoreResultAsync>d__5
  // WARNING Not writing size check since size may be invalid!
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::TestLeaderboardsModel::$SendLevelScoreResultAsync$d__5, "", "TestLeaderboardsModel/<SendLevelScoreResultAsync>d__5");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::TestLeaderboardsModel::$SendLevelScoreResultAsync$d__5::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::TestLeaderboardsModel::$SendLevelScoreResultAsync$d__5::*)()>(&GlobalNamespace::TestLeaderboardsModel::$SendLevelScoreResultAsync$d__5::MoveNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TestLeaderboardsModel::$SendLevelScoreResultAsync$d__5), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TestLeaderboardsModel::$SendLevelScoreResultAsync$d__5::SetStateMachine
// Il2CppName: SetStateMachine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::TestLeaderboardsModel::$SendLevelScoreResultAsync$d__5::*)(System::Runtime::CompilerServices::IAsyncStateMachine*)>(&GlobalNamespace::TestLeaderboardsModel::$SendLevelScoreResultAsync$d__5::SetStateMachine)> {
  static const MethodInfo* get() {
    static auto* stateMachine = &::il2cpp_utils::GetClassFromName("System.Runtime.CompilerServices", "IAsyncStateMachine")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TestLeaderboardsModel::$SendLevelScoreResultAsync$d__5), "SetStateMachine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{stateMachine});
  }
};
