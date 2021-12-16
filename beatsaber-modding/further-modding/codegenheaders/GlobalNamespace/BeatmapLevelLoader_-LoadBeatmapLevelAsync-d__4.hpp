// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: BeatmapLevelLoader
#include "GlobalNamespace/BeatmapLevelLoader.hpp"
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
// Including type: GetAssetBundleFileResult
#include "GlobalNamespace/GetAssetBundleFileResult.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IPreviewBeatmapLevel
  class IPreviewBeatmapLevel;
  // Forward declaring type: IBeatmapLevel
  class IBeatmapLevel;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // WARNING Size may be invalid!
  // Autogenerated type: BeatmapLevelLoader/<LoadBeatmapLevelAsync>d__4
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  struct BeatmapLevelLoader::$LoadBeatmapLevelAsync$d__4/*, public System::ValueType, public System::Runtime::CompilerServices::IAsyncStateMachine*/ {
    public:
    // public System.Int32 <>1__state
    // Size: 0x4
    // Offset: 0x0
    int $$1__state;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<BeatmapLevelLoader/LoadBeatmapLevelResult> <>t__builder
    // Size: 0xFFFFFFFF
    // Offset: 0x8
    System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::BeatmapLevelLoader::LoadBeatmapLevelResult> $$t__builder;
    // public BeatmapLevelLoader <>4__this
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::BeatmapLevelLoader* $$4__this;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BeatmapLevelLoader*) == 0x8);
    // public IPreviewBeatmapLevel previewLevel
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::IPreviewBeatmapLevel* previewLevel;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IPreviewBeatmapLevel*) == 0x8);
    // public System.Threading.CancellationToken cancellationToken
    // Size: 0x8
    // Offset: 0x30
    System::Threading::CancellationToken cancellationToken;
    // Field size check
    static_assert(sizeof(System::Threading::CancellationToken) == 0x8);
    // private IBeatmapLevel <level>5__2
    // Size: 0x8
    // Offset: 0x38
    GlobalNamespace::IBeatmapLevel* $level$5__2;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IBeatmapLevel*) == 0x8);
    // private System.Runtime.CompilerServices.TaskAwaiter`1<GetAssetBundleFileResult> <>u__1
    // Size: 0xFFFFFFFF
    // Offset: 0x40
    System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GetAssetBundleFileResult> $$u__1;
    // private System.Runtime.CompilerServices.TaskAwaiter`1<System.Boolean> <>u__2
    // Size: 0xFFFFFFFF
    // Offset: 0x48
    System::Runtime::CompilerServices::TaskAwaiter_1<bool> $$u__2;
    // private System.Runtime.CompilerServices.TaskAwaiter`1<IBeatmapLevel> <>u__3
    // Size: 0xFFFFFFFF
    // Offset: 0x50
    System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::IBeatmapLevel*> $$u__3;
    // Creating value type constructor for type: $LoadBeatmapLevelAsync$d__4
    constexpr $LoadBeatmapLevelAsync$d__4(int $$1__state_ = {}, System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::BeatmapLevelLoader::LoadBeatmapLevelResult> $$t__builder_ = {}, GlobalNamespace::BeatmapLevelLoader* $$4__this_ = {}, GlobalNamespace::IPreviewBeatmapLevel* previewLevel_ = {}, System::Threading::CancellationToken cancellationToken_ = {}, GlobalNamespace::IBeatmapLevel* $level$5__2_ = {}, System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GetAssetBundleFileResult> $$u__1_ = {}, System::Runtime::CompilerServices::TaskAwaiter_1<bool> $$u__2_ = {}, System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::IBeatmapLevel*> $$u__3_ = {}) noexcept : $$1__state{$$1__state_}, $$t__builder{$$t__builder_}, $$4__this{$$4__this_}, previewLevel{previewLevel_}, cancellationToken{cancellationToken_}, $level$5__2{$level$5__2_}, $$u__1{$$u__1_}, $$u__2{$$u__2_}, $$u__3{$$u__3_} {}
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
    // Get instance field reference: public System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<BeatmapLevelLoader/LoadBeatmapLevelResult> <>t__builder
    System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::BeatmapLevelLoader::LoadBeatmapLevelResult>& dyn_$$t__builder();
    // Get instance field reference: public BeatmapLevelLoader <>4__this
    GlobalNamespace::BeatmapLevelLoader*& dyn_$$4__this();
    // Get instance field reference: public IPreviewBeatmapLevel previewLevel
    GlobalNamespace::IPreviewBeatmapLevel*& dyn_previewLevel();
    // Get instance field reference: public System.Threading.CancellationToken cancellationToken
    System::Threading::CancellationToken& dyn_cancellationToken();
    // Get instance field reference: private IBeatmapLevel <level>5__2
    GlobalNamespace::IBeatmapLevel*& dyn_$level$5__2();
    // Get instance field reference: private System.Runtime.CompilerServices.TaskAwaiter`1<GetAssetBundleFileResult> <>u__1
    System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GetAssetBundleFileResult>& dyn_$$u__1();
    // Get instance field reference: private System.Runtime.CompilerServices.TaskAwaiter`1<System.Boolean> <>u__2
    System::Runtime::CompilerServices::TaskAwaiter_1<bool>& dyn_$$u__2();
    // Get instance field reference: private System.Runtime.CompilerServices.TaskAwaiter`1<IBeatmapLevel> <>u__3
    System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::IBeatmapLevel*>& dyn_$$u__3();
    // private System.Void MoveNext()
    // Offset: 0x10C8BCC
    void MoveNext();
    // private System.Void SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine stateMachine)
    // Offset: 0x10C9240
    void SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);
  }; // BeatmapLevelLoader/<LoadBeatmapLevelAsync>d__4
  // WARNING Not writing size check since size may be invalid!
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BeatmapLevelLoader::$LoadBeatmapLevelAsync$d__4, "", "BeatmapLevelLoader/<LoadBeatmapLevelAsync>d__4");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::BeatmapLevelLoader::$LoadBeatmapLevelAsync$d__4::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapLevelLoader::$LoadBeatmapLevelAsync$d__4::*)()>(&GlobalNamespace::BeatmapLevelLoader::$LoadBeatmapLevelAsync$d__4::MoveNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapLevelLoader::$LoadBeatmapLevelAsync$d__4), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapLevelLoader::$LoadBeatmapLevelAsync$d__4::SetStateMachine
// Il2CppName: SetStateMachine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapLevelLoader::$LoadBeatmapLevelAsync$d__4::*)(System::Runtime::CompilerServices::IAsyncStateMachine*)>(&GlobalNamespace::BeatmapLevelLoader::$LoadBeatmapLevelAsync$d__4::SetStateMachine)> {
  static const MethodInfo* get() {
    static auto* stateMachine = &::il2cpp_utils::GetClassFromName("System.Runtime.CompilerServices", "IAsyncStateMachine")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapLevelLoader::$LoadBeatmapLevelAsync$d__4), "SetStateMachine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{stateMachine});
  }
};
