// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: IBeatmapDataAssetFileModel
#include "GlobalNamespace/IBeatmapDataAssetFileModel.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IPreviewBeatmapLevel
  class IPreviewBeatmapLevel;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
  // Forward declaring type: String
  class String;
}
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: Task`1<TResult>
  template<typename TResult>
  class Task_1;
}
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: CancellationToken
  struct CancellationToken;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: TestBeatmapDataAssetFileModel
  // [TokenAttribute] Offset: FFFFFFFF
  class TestBeatmapDataAssetFileModel : public ::Il2CppObject/*, public GlobalNamespace::IBeatmapDataAssetFileModel*/ {
    public:
    // Nested type: GlobalNamespace::TestBeatmapDataAssetFileModel::$GetAssetBundleFileForPreviewLevelAsync$d__4
    struct $GetAssetBundleFileForPreviewLevelAsync$d__4;
    // Nested type: GlobalNamespace::TestBeatmapDataAssetFileModel::$TryDeleteAssetBundleFileForPreviewLevelAsync$d__5
    struct $TryDeleteAssetBundleFileForPreviewLevelAsync$d__5;
    // private System.Action`1<LevelDataAssetDownloadUpdate> levelDataAssetDownloadUpdateEvent
    // Size: 0x8
    // Offset: 0x10
    System::Action_1<GlobalNamespace::LevelDataAssetDownloadUpdate>* levelDataAssetDownloadUpdateEvent;
    // Field size check
    static_assert(sizeof(System::Action_1<GlobalNamespace::LevelDataAssetDownloadUpdate>*) == 0x8);
    // Creating value type constructor for type: TestBeatmapDataAssetFileModel
    TestBeatmapDataAssetFileModel(System::Action_1<GlobalNamespace::LevelDataAssetDownloadUpdate>* levelDataAssetDownloadUpdateEvent_ = {}) noexcept : levelDataAssetDownloadUpdateEvent{levelDataAssetDownloadUpdateEvent_} {}
    // Creating interface conversion operator: operator GlobalNamespace::IBeatmapDataAssetFileModel
    operator GlobalNamespace::IBeatmapDataAssetFileModel() noexcept {
      return *reinterpret_cast<GlobalNamespace::IBeatmapDataAssetFileModel*>(this);
    }
    // Creating conversion operator: operator System::Action_1<GlobalNamespace::LevelDataAssetDownloadUpdate>*
    constexpr operator System::Action_1<GlobalNamespace::LevelDataAssetDownloadUpdate>*() const noexcept {
      return levelDataAssetDownloadUpdateEvent;
    }
    // static field const value: static private System.String kAssetsDir
    static constexpr const char* kAssetsDir = "BeatmapDataAssets";
    // Get static field: static private System.String kAssetsDir
    static ::Il2CppString* _get_kAssetsDir();
    // Set static field: static private System.String kAssetsDir
    static void _set_kAssetsDir(::Il2CppString* value);
    // Get instance field reference: private System.Action`1<LevelDataAssetDownloadUpdate> levelDataAssetDownloadUpdateEvent
    System::Action_1<GlobalNamespace::LevelDataAssetDownloadUpdate>*& dyn_levelDataAssetDownloadUpdateEvent();
    // public System.Void add_levelDataAssetDownloadUpdateEvent(System.Action`1<LevelDataAssetDownloadUpdate> value)
    // Offset: 0x106E318
    void add_levelDataAssetDownloadUpdateEvent(System::Action_1<GlobalNamespace::LevelDataAssetDownloadUpdate>* value);
    // public System.Void remove_levelDataAssetDownloadUpdateEvent(System.Action`1<LevelDataAssetDownloadUpdate> value)
    // Offset: 0x106E3BC
    void remove_levelDataAssetDownloadUpdateEvent(System::Action_1<GlobalNamespace::LevelDataAssetDownloadUpdate>* value);
    // public System.Threading.Tasks.Task`1<GetAssetBundleFileResult> GetAssetBundleFileForPreviewLevelAsync(IPreviewBeatmapLevel previewBeatmapLevel, System.Threading.CancellationToken cancellationToken)
    // Offset: 0x106E460
    System::Threading::Tasks::Task_1<GlobalNamespace::GetAssetBundleFileResult>* GetAssetBundleFileForPreviewLevelAsync(GlobalNamespace::IPreviewBeatmapLevel* previewBeatmapLevel, System::Threading::CancellationToken cancellationToken);
    // public System.Threading.Tasks.Task`1<System.Boolean> TryDeleteAssetBundleFileForPreviewLevelAsync(IPreviewBeatmapLevel previewBeatmapLevel, System.Threading.CancellationToken cancellationToken)
    // Offset: 0x106E580
    System::Threading::Tasks::Task_1<bool>* TryDeleteAssetBundleFileForPreviewLevelAsync(GlobalNamespace::IPreviewBeatmapLevel* previewBeatmapLevel, System::Threading::CancellationToken cancellationToken);
    // public System.Void .ctor()
    // Offset: 0x106E680
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TestBeatmapDataAssetFileModel* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::TestBeatmapDataAssetFileModel::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TestBeatmapDataAssetFileModel*, creationType>()));
    }
  }; // TestBeatmapDataAssetFileModel
  #pragma pack(pop)
  static check_size<sizeof(TestBeatmapDataAssetFileModel), 16 + sizeof(System::Action_1<GlobalNamespace::LevelDataAssetDownloadUpdate>*)> __GlobalNamespace_TestBeatmapDataAssetFileModelSizeCheck;
  static_assert(sizeof(TestBeatmapDataAssetFileModel) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::TestBeatmapDataAssetFileModel*, "", "TestBeatmapDataAssetFileModel");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::TestBeatmapDataAssetFileModel::add_levelDataAssetDownloadUpdateEvent
// Il2CppName: add_levelDataAssetDownloadUpdateEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::TestBeatmapDataAssetFileModel::*)(System::Action_1<GlobalNamespace::LevelDataAssetDownloadUpdate>*)>(&GlobalNamespace::TestBeatmapDataAssetFileModel::add_levelDataAssetDownloadUpdateEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "LevelDataAssetDownloadUpdate")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TestBeatmapDataAssetFileModel*), "add_levelDataAssetDownloadUpdateEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TestBeatmapDataAssetFileModel::remove_levelDataAssetDownloadUpdateEvent
// Il2CppName: remove_levelDataAssetDownloadUpdateEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::TestBeatmapDataAssetFileModel::*)(System::Action_1<GlobalNamespace::LevelDataAssetDownloadUpdate>*)>(&GlobalNamespace::TestBeatmapDataAssetFileModel::remove_levelDataAssetDownloadUpdateEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "LevelDataAssetDownloadUpdate")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TestBeatmapDataAssetFileModel*), "remove_levelDataAssetDownloadUpdateEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TestBeatmapDataAssetFileModel::GetAssetBundleFileForPreviewLevelAsync
// Il2CppName: GetAssetBundleFileForPreviewLevelAsync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task_1<GlobalNamespace::GetAssetBundleFileResult>* (GlobalNamespace::TestBeatmapDataAssetFileModel::*)(GlobalNamespace::IPreviewBeatmapLevel*, System::Threading::CancellationToken)>(&GlobalNamespace::TestBeatmapDataAssetFileModel::GetAssetBundleFileForPreviewLevelAsync)> {
  static const MethodInfo* get() {
    static auto* previewBeatmapLevel = &::il2cpp_utils::GetClassFromName("", "IPreviewBeatmapLevel")->byval_arg;
    static auto* cancellationToken = &::il2cpp_utils::GetClassFromName("System.Threading", "CancellationToken")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TestBeatmapDataAssetFileModel*), "GetAssetBundleFileForPreviewLevelAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{previewBeatmapLevel, cancellationToken});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TestBeatmapDataAssetFileModel::TryDeleteAssetBundleFileForPreviewLevelAsync
// Il2CppName: TryDeleteAssetBundleFileForPreviewLevelAsync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task_1<bool>* (GlobalNamespace::TestBeatmapDataAssetFileModel::*)(GlobalNamespace::IPreviewBeatmapLevel*, System::Threading::CancellationToken)>(&GlobalNamespace::TestBeatmapDataAssetFileModel::TryDeleteAssetBundleFileForPreviewLevelAsync)> {
  static const MethodInfo* get() {
    static auto* previewBeatmapLevel = &::il2cpp_utils::GetClassFromName("", "IPreviewBeatmapLevel")->byval_arg;
    static auto* cancellationToken = &::il2cpp_utils::GetClassFromName("System.Threading", "CancellationToken")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TestBeatmapDataAssetFileModel*), "TryDeleteAssetBundleFileForPreviewLevelAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{previewBeatmapLevel, cancellationToken});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TestBeatmapDataAssetFileModel::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
