// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: Zenject.MonoInstaller
#include "Zenject/MonoInstaller.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: AudioManagerSO
  class AudioManagerSO;
  // Forward declaring type: GameplayCoreSceneSetupData
  class GameplayCoreSceneSetupData;
}
// Forward declaring namespace: DataModels::Levels
namespace DataModels::Levels {
  // Forward declaring type: PerceivedLoudnessPerLevelModel
  class PerceivedLoudnessPerLevelModel;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: MultiplayerLocalInactivePlayerInstaller
  // [TokenAttribute] Offset: FFFFFFFF
  class MultiplayerLocalInactivePlayerInstaller : public Zenject::MonoInstaller {
    public:
    // private AudioManagerSO _audioManager
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::AudioManagerSO* audioManager;
    // Field size check
    static_assert(sizeof(GlobalNamespace::AudioManagerSO*) == 0x8);
    // [InjectAttribute] Offset: 0xE40404
    // private readonly GameplayCoreSceneSetupData _sceneSetupData
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::GameplayCoreSceneSetupData* sceneSetupData;
    // Field size check
    static_assert(sizeof(GlobalNamespace::GameplayCoreSceneSetupData*) == 0x8);
    // [InjectAttribute] Offset: 0xE40414
    // private readonly DataModels.Levels.PerceivedLoudnessPerLevelModel _beatmapLoudnessModel
    // Size: 0x8
    // Offset: 0x30
    DataModels::Levels::PerceivedLoudnessPerLevelModel* beatmapLoudnessModel;
    // Field size check
    static_assert(sizeof(DataModels::Levels::PerceivedLoudnessPerLevelModel*) == 0x8);
    // Creating value type constructor for type: MultiplayerLocalInactivePlayerInstaller
    MultiplayerLocalInactivePlayerInstaller(GlobalNamespace::AudioManagerSO* audioManager_ = {}, GlobalNamespace::GameplayCoreSceneSetupData* sceneSetupData_ = {}, DataModels::Levels::PerceivedLoudnessPerLevelModel* beatmapLoudnessModel_ = {}) noexcept : audioManager{audioManager_}, sceneSetupData{sceneSetupData_}, beatmapLoudnessModel{beatmapLoudnessModel_} {}
    // Get instance field reference: private AudioManagerSO _audioManager
    GlobalNamespace::AudioManagerSO*& dyn__audioManager();
    // Get instance field reference: private readonly GameplayCoreSceneSetupData _sceneSetupData
    GlobalNamespace::GameplayCoreSceneSetupData*& dyn__sceneSetupData();
    // Get instance field reference: private readonly DataModels.Levels.PerceivedLoudnessPerLevelModel _beatmapLoudnessModel
    DataModels::Levels::PerceivedLoudnessPerLevelModel*& dyn__beatmapLoudnessModel();
    // public System.Void .ctor()
    // Offset: 0x108782C
    // Implemented from: Zenject.MonoInstaller
    // Base method: System.Void MonoInstaller::.ctor()
    // Base method: System.Void MonoInstallerBase::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MultiplayerLocalInactivePlayerInstaller* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MultiplayerLocalInactivePlayerInstaller::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MultiplayerLocalInactivePlayerInstaller*, creationType>()));
    }
    // public override System.Void InstallBindings()
    // Offset: 0x108730C
    // Implemented from: Zenject.MonoInstallerBase
    // Base method: System.Void MonoInstallerBase::InstallBindings()
    void InstallBindings();
  }; // MultiplayerLocalInactivePlayerInstaller
  #pragma pack(pop)
  static check_size<sizeof(MultiplayerLocalInactivePlayerInstaller), 48 + sizeof(DataModels::Levels::PerceivedLoudnessPerLevelModel*)> __GlobalNamespace_MultiplayerLocalInactivePlayerInstallerSizeCheck;
  static_assert(sizeof(MultiplayerLocalInactivePlayerInstaller) == 0x38);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultiplayerLocalInactivePlayerInstaller*, "", "MultiplayerLocalInactivePlayerInstaller");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLocalInactivePlayerInstaller::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLocalInactivePlayerInstaller::InstallBindings
// Il2CppName: InstallBindings
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLocalInactivePlayerInstaller::*)()>(&GlobalNamespace::MultiplayerLocalInactivePlayerInstaller::InstallBindings)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLocalInactivePlayerInstaller*), "InstallBindings", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
