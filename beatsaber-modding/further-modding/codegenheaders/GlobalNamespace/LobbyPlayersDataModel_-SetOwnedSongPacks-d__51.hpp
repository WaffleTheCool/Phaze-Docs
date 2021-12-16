// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: LobbyPlayersDataModel
#include "GlobalNamespace/LobbyPlayersDataModel.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.Runtime.CompilerServices.IAsyncStateMachine
#include "System/Runtime/CompilerServices/IAsyncStateMachine.hpp"
// Including type: System.Runtime.CompilerServices.AsyncVoidMethodBuilder
#include "System/Runtime/CompilerServices/AsyncVoidMethodBuilder.hpp"
// Including type: SongPackMask
#include "GlobalNamespace/SongPackMask.hpp"
// Including type: System.Runtime.CompilerServices.TaskAwaiter`1
#include "System/Runtime/CompilerServices/TaskAwaiter_1.hpp"
// Including type: AdditionalContentModel/EntitlementStatus
#include "GlobalNamespace/AdditionalContentModel.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IBeatmapLevelPack
  class IBeatmapLevelPack;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // WARNING Size may be invalid!
  // Autogenerated type: LobbyPlayersDataModel/<SetOwnedSongPacks>d__51
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  struct LobbyPlayersDataModel::$SetOwnedSongPacks$d__51/*, public System::ValueType, public System::Runtime::CompilerServices::IAsyncStateMachine*/ {
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
    // public LobbyPlayersDataModel <>4__this
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::LobbyPlayersDataModel* $$4__this;
    // Field size check
    static_assert(sizeof(GlobalNamespace::LobbyPlayersDataModel*) == 0x8);
    // private SongPackMask <songPackMask>5__2
    // Size: 0x10
    // Offset: 0x30
    GlobalNamespace::SongPackMask $songPackMask$5__2;
    // Field size check
    static_assert(sizeof(GlobalNamespace::SongPackMask) == 0x10);
    // private IBeatmapLevelPack[] <>7__wrap2
    // Size: 0x8
    // Offset: 0x40
    ::Array<GlobalNamespace::IBeatmapLevelPack*>* $$7__wrap2;
    // Field size check
    static_assert(sizeof(::Array<GlobalNamespace::IBeatmapLevelPack*>*) == 0x8);
    // private System.Int32 <>7__wrap3
    // Size: 0x4
    // Offset: 0x48
    int $$7__wrap3;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private IBeatmapLevelPack <dlcSongPack>5__5
    // Size: 0x8
    // Offset: 0x50
    GlobalNamespace::IBeatmapLevelPack* $dlcSongPack$5__5;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IBeatmapLevelPack*) == 0x8);
    // private System.Runtime.CompilerServices.TaskAwaiter`1<AdditionalContentModel/EntitlementStatus> <>u__1
    // Size: 0xFFFFFFFF
    // Offset: 0x58
    System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::AdditionalContentModel::EntitlementStatus> $$u__1;
    // Creating value type constructor for type: $SetOwnedSongPacks$d__51
    constexpr $SetOwnedSongPacks$d__51(int $$1__state_ = {}, System::Runtime::CompilerServices::AsyncVoidMethodBuilder $$t__builder_ = {}, GlobalNamespace::LobbyPlayersDataModel* $$4__this_ = {}, GlobalNamespace::SongPackMask $songPackMask$5__2_ = {}, ::Array<GlobalNamespace::IBeatmapLevelPack*>* $$7__wrap2_ = {}, int $$7__wrap3_ = {}, GlobalNamespace::IBeatmapLevelPack* $dlcSongPack$5__5_ = {}, System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::AdditionalContentModel::EntitlementStatus> $$u__1_ = {}) noexcept : $$1__state{$$1__state_}, $$t__builder{$$t__builder_}, $$4__this{$$4__this_}, $songPackMask$5__2{$songPackMask$5__2_}, $$7__wrap2{$$7__wrap2_}, $$7__wrap3{$$7__wrap3_}, $dlcSongPack$5__5{$dlcSongPack$5__5_}, $$u__1{$$u__1_} {}
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
    // Get instance field reference: public LobbyPlayersDataModel <>4__this
    GlobalNamespace::LobbyPlayersDataModel*& dyn_$$4__this();
    // Get instance field reference: private SongPackMask <songPackMask>5__2
    GlobalNamespace::SongPackMask& dyn_$songPackMask$5__2();
    // Get instance field reference: private IBeatmapLevelPack[] <>7__wrap2
    ::Array<GlobalNamespace::IBeatmapLevelPack*>*& dyn_$$7__wrap2();
    // Get instance field reference: private System.Int32 <>7__wrap3
    int& dyn_$$7__wrap3();
    // Get instance field reference: private IBeatmapLevelPack <dlcSongPack>5__5
    GlobalNamespace::IBeatmapLevelPack*& dyn_$dlcSongPack$5__5();
    // Get instance field reference: private System.Runtime.CompilerServices.TaskAwaiter`1<AdditionalContentModel/EntitlementStatus> <>u__1
    System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::AdditionalContentModel::EntitlementStatus>& dyn_$$u__1();
    // private System.Void MoveNext()
    // Offset: 0x1212D20
    void MoveNext();
    // private System.Void SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine stateMachine)
    // Offset: 0x1213378
    void SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);
  }; // LobbyPlayersDataModel/<SetOwnedSongPacks>d__51
  // WARNING Not writing size check since size may be invalid!
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::LobbyPlayersDataModel::$SetOwnedSongPacks$d__51, "", "LobbyPlayersDataModel/<SetOwnedSongPacks>d__51");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::LobbyPlayersDataModel::$SetOwnedSongPacks$d__51::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LobbyPlayersDataModel::$SetOwnedSongPacks$d__51::*)()>(&GlobalNamespace::LobbyPlayersDataModel::$SetOwnedSongPacks$d__51::MoveNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LobbyPlayersDataModel::$SetOwnedSongPacks$d__51), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LobbyPlayersDataModel::$SetOwnedSongPacks$d__51::SetStateMachine
// Il2CppName: SetStateMachine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LobbyPlayersDataModel::$SetOwnedSongPacks$d__51::*)(System::Runtime::CompilerServices::IAsyncStateMachine*)>(&GlobalNamespace::LobbyPlayersDataModel::$SetOwnedSongPacks$d__51::SetStateMachine)> {
  static const MethodInfo* get() {
    static auto* stateMachine = &::il2cpp_utils::GetClassFromName("System.Runtime.CompilerServices", "IAsyncStateMachine")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LobbyPlayersDataModel::$SetOwnedSongPacks$d__51), "SetStateMachine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{stateMachine});
  }
};
