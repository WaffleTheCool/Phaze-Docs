// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: BeatmapCharacteristicSO
  class BeatmapCharacteristicSO;
  // Forward declaring type: IDifficultyBeatmap
  class IDifficultyBeatmap;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
template<class T>
struct Array;
// Completed il2cpp-utils forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: IDifficultyBeatmapSet
  // [TokenAttribute] Offset: FFFFFFFF
  class IDifficultyBeatmapSet {
    public:
    // Creating value type constructor for type: IDifficultyBeatmapSet
    IDifficultyBeatmapSet() noexcept {}
    // public BeatmapCharacteristicSO get_beatmapCharacteristic()
    // Offset: 0xFFFFFFFF
    GlobalNamespace::BeatmapCharacteristicSO* get_beatmapCharacteristic();
    // public IDifficultyBeatmap[] get_difficultyBeatmaps()
    // Offset: 0xFFFFFFFF
    ::Array<GlobalNamespace::IDifficultyBeatmap*>* get_difficultyBeatmaps();
  }; // IDifficultyBeatmapSet
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::IDifficultyBeatmapSet*, "", "IDifficultyBeatmapSet");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::IDifficultyBeatmapSet::get_beatmapCharacteristic
// Il2CppName: get_beatmapCharacteristic
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::BeatmapCharacteristicSO* (GlobalNamespace::IDifficultyBeatmapSet::*)()>(&GlobalNamespace::IDifficultyBeatmapSet::get_beatmapCharacteristic)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::IDifficultyBeatmapSet*), "get_beatmapCharacteristic", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::IDifficultyBeatmapSet::get_difficultyBeatmaps
// Il2CppName: get_difficultyBeatmaps
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<GlobalNamespace::IDifficultyBeatmap*>* (GlobalNamespace::IDifficultyBeatmapSet::*)()>(&GlobalNamespace::IDifficultyBeatmapSet::get_difficultyBeatmaps)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::IDifficultyBeatmapSet*), "get_difficultyBeatmaps", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
