// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: IBeatmapLevelData
#include "GlobalNamespace/IBeatmapLevelData.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AudioClip
  class AudioClip;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IDifficultyBeatmapSet
  class IDifficultyBeatmapSet;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: EmptyBeatmapLevelData
  // [TokenAttribute] Offset: FFFFFFFF
  class EmptyBeatmapLevelData : public ::Il2CppObject/*, public GlobalNamespace::IBeatmapLevelData*/ {
    public:
    // private readonly UnityEngine.AudioClip <audioClip>k__BackingField
    // Size: 0x8
    // Offset: 0x10
    UnityEngine::AudioClip* audioClip;
    // Field size check
    static_assert(sizeof(UnityEngine::AudioClip*) == 0x8);
    // private readonly IDifficultyBeatmapSet[] <difficultyBeatmapSets>k__BackingField
    // Size: 0x8
    // Offset: 0x18
    ::Array<GlobalNamespace::IDifficultyBeatmapSet*>* difficultyBeatmapSets;
    // Field size check
    static_assert(sizeof(::Array<GlobalNamespace::IDifficultyBeatmapSet*>*) == 0x8);
    // Creating value type constructor for type: EmptyBeatmapLevelData
    EmptyBeatmapLevelData(UnityEngine::AudioClip* audioClip_ = {}, ::Array<GlobalNamespace::IDifficultyBeatmapSet*>* difficultyBeatmapSets_ = {}) noexcept : audioClip{audioClip_}, difficultyBeatmapSets{difficultyBeatmapSets_} {}
    // Creating interface conversion operator: operator GlobalNamespace::IBeatmapLevelData
    operator GlobalNamespace::IBeatmapLevelData() noexcept {
      return *reinterpret_cast<GlobalNamespace::IBeatmapLevelData*>(this);
    }
    // Get instance field reference: private readonly UnityEngine.AudioClip <audioClip>k__BackingField
    UnityEngine::AudioClip*& dyn_$audioClip$k__BackingField();
    // Get instance field reference: private readonly IDifficultyBeatmapSet[] <difficultyBeatmapSets>k__BackingField
    ::Array<GlobalNamespace::IDifficultyBeatmapSet*>*& dyn_$difficultyBeatmapSets$k__BackingField();
    // public UnityEngine.AudioClip get_audioClip()
    // Offset: 0x1055ED4
    UnityEngine::AudioClip* get_audioClip();
    // public IDifficultyBeatmapSet[] get_difficultyBeatmapSets()
    // Offset: 0x1055EDC
    ::Array<GlobalNamespace::IDifficultyBeatmapSet*>* get_difficultyBeatmapSets();
    // public System.Void .ctor()
    // Offset: 0x1055ECC
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static EmptyBeatmapLevelData* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::EmptyBeatmapLevelData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<EmptyBeatmapLevelData*, creationType>()));
    }
  }; // EmptyBeatmapLevelData
  #pragma pack(pop)
  static check_size<sizeof(EmptyBeatmapLevelData), 24 + sizeof(::Array<GlobalNamespace::IDifficultyBeatmapSet*>*)> __GlobalNamespace_EmptyBeatmapLevelDataSizeCheck;
  static_assert(sizeof(EmptyBeatmapLevelData) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::EmptyBeatmapLevelData*, "", "EmptyBeatmapLevelData");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::EmptyBeatmapLevelData::get_audioClip
// Il2CppName: get_audioClip
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::AudioClip* (GlobalNamespace::EmptyBeatmapLevelData::*)()>(&GlobalNamespace::EmptyBeatmapLevelData::get_audioClip)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::EmptyBeatmapLevelData*), "get_audioClip", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::EmptyBeatmapLevelData::get_difficultyBeatmapSets
// Il2CppName: get_difficultyBeatmapSets
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<GlobalNamespace::IDifficultyBeatmapSet*>* (GlobalNamespace::EmptyBeatmapLevelData::*)()>(&GlobalNamespace::EmptyBeatmapLevelData::get_difficultyBeatmapSets)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::EmptyBeatmapLevelData*), "get_difficultyBeatmapSets", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::EmptyBeatmapLevelData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
