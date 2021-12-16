// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: BeatmapLevelDataSO
#include "GlobalNamespace/BeatmapLevelDataSO.hpp"
// Including type: BeatmapLevelSO
#include "GlobalNamespace/BeatmapLevelSO.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: BeatmapLevelDataSO/DifficultyBeatmapSet
  // [TokenAttribute] Offset: FFFFFFFF
  class BeatmapLevelDataSO::DifficultyBeatmapSet : public ::Il2CppObject {
    public:
    // private System.String _beatmapCharacteristicSerializedName
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* beatmapCharacteristicSerializedName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private BeatmapLevelSO/DifficultyBeatmap[] _difficultyBeatmaps
    // Size: 0x8
    // Offset: 0x18
    ::Array<GlobalNamespace::BeatmapLevelSO::DifficultyBeatmap*>* difficultyBeatmaps;
    // Field size check
    static_assert(sizeof(::Array<GlobalNamespace::BeatmapLevelSO::DifficultyBeatmap*>*) == 0x8);
    // Creating value type constructor for type: DifficultyBeatmapSet
    DifficultyBeatmapSet(::Il2CppString* beatmapCharacteristicSerializedName_ = {}, ::Array<GlobalNamespace::BeatmapLevelSO::DifficultyBeatmap*>* difficultyBeatmaps_ = {}) noexcept : beatmapCharacteristicSerializedName{beatmapCharacteristicSerializedName_}, difficultyBeatmaps{difficultyBeatmaps_} {}
    // Get instance field reference: private System.String _beatmapCharacteristicSerializedName
    ::Il2CppString*& dyn__beatmapCharacteristicSerializedName();
    // Get instance field reference: private BeatmapLevelSO/DifficultyBeatmap[] _difficultyBeatmaps
    ::Array<GlobalNamespace::BeatmapLevelSO::DifficultyBeatmap*>*& dyn__difficultyBeatmaps();
    // public System.String get_beatmapCharacteristicSerializedName()
    // Offset: 0x10C7710
    ::Il2CppString* get_beatmapCharacteristicSerializedName();
    // public BeatmapLevelSO/DifficultyBeatmap[] get_difficultyBeatmaps()
    // Offset: 0x10C7718
    ::Array<GlobalNamespace::BeatmapLevelSO::DifficultyBeatmap*>* get_difficultyBeatmaps();
    // public System.Void .ctor(System.String beatmapCharacteristicSerializedName, BeatmapLevelSO/DifficultyBeatmap[] difficultyBeatmaps)
    // Offset: 0x10C7720
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BeatmapLevelDataSO::DifficultyBeatmapSet* New_ctor(::Il2CppString* beatmapCharacteristicSerializedName, ::Array<GlobalNamespace::BeatmapLevelSO::DifficultyBeatmap*>* difficultyBeatmaps) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::BeatmapLevelDataSO::DifficultyBeatmapSet::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BeatmapLevelDataSO::DifficultyBeatmapSet*, creationType>(beatmapCharacteristicSerializedName, difficultyBeatmaps)));
    }
  }; // BeatmapLevelDataSO/DifficultyBeatmapSet
  #pragma pack(pop)
  static check_size<sizeof(BeatmapLevelDataSO::DifficultyBeatmapSet), 24 + sizeof(::Array<GlobalNamespace::BeatmapLevelSO::DifficultyBeatmap*>*)> __GlobalNamespace_BeatmapLevelDataSO_DifficultyBeatmapSetSizeCheck;
  static_assert(sizeof(BeatmapLevelDataSO::DifficultyBeatmapSet) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BeatmapLevelDataSO::DifficultyBeatmapSet*, "", "BeatmapLevelDataSO/DifficultyBeatmapSet");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::BeatmapLevelDataSO::DifficultyBeatmapSet::get_beatmapCharacteristicSerializedName
// Il2CppName: get_beatmapCharacteristicSerializedName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (GlobalNamespace::BeatmapLevelDataSO::DifficultyBeatmapSet::*)()>(&GlobalNamespace::BeatmapLevelDataSO::DifficultyBeatmapSet::get_beatmapCharacteristicSerializedName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapLevelDataSO::DifficultyBeatmapSet*), "get_beatmapCharacteristicSerializedName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapLevelDataSO::DifficultyBeatmapSet::get_difficultyBeatmaps
// Il2CppName: get_difficultyBeatmaps
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<GlobalNamespace::BeatmapLevelSO::DifficultyBeatmap*>* (GlobalNamespace::BeatmapLevelDataSO::DifficultyBeatmapSet::*)()>(&GlobalNamespace::BeatmapLevelDataSO::DifficultyBeatmapSet::get_difficultyBeatmaps)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapLevelDataSO::DifficultyBeatmapSet*), "get_difficultyBeatmaps", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapLevelDataSO::DifficultyBeatmapSet::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
