// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: BeatmapLevelsModel
#include "GlobalNamespace/BeatmapLevelsModel.hpp"
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
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: BeatmapLevelsModel/<>c__DisplayClass34_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class BeatmapLevelsModel::$$c__DisplayClass34_0 : public ::Il2CppObject {
    public:
    // public System.String levelId
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* levelId;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // Creating value type constructor for type: $$c__DisplayClass34_0
    $$c__DisplayClass34_0(::Il2CppString* levelId_ = {}) noexcept : levelId{levelId_} {}
    // Creating conversion operator: operator ::Il2CppString*
    constexpr operator ::Il2CppString*() const noexcept {
      return levelId;
    }
    // Get instance field reference: public System.String levelId
    ::Il2CppString*& dyn_levelId();
    // System.Boolean <GetLevelPreviewForLevelId>b__1(IPreviewBeatmapLevel beatmapLevel)
    // Offset: 0x10CC02C
    bool $GetLevelPreviewForLevelId$b__1(GlobalNamespace::IPreviewBeatmapLevel* beatmapLevel);
    // public System.Void .ctor()
    // Offset: 0x10CB964
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BeatmapLevelsModel::$$c__DisplayClass34_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::BeatmapLevelsModel::$$c__DisplayClass34_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BeatmapLevelsModel::$$c__DisplayClass34_0*, creationType>()));
    }
  }; // BeatmapLevelsModel/<>c__DisplayClass34_0
  #pragma pack(pop)
  static check_size<sizeof(BeatmapLevelsModel::$$c__DisplayClass34_0), 16 + sizeof(::Il2CppString*)> __GlobalNamespace_BeatmapLevelsModel_$$c__DisplayClass34_0SizeCheck;
  static_assert(sizeof(BeatmapLevelsModel::$$c__DisplayClass34_0) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BeatmapLevelsModel::$$c__DisplayClass34_0*, "", "BeatmapLevelsModel/<>c__DisplayClass34_0");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::BeatmapLevelsModel::$$c__DisplayClass34_0::$GetLevelPreviewForLevelId$b__1
// Il2CppName: <GetLevelPreviewForLevelId>b__1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::BeatmapLevelsModel::$$c__DisplayClass34_0::*)(GlobalNamespace::IPreviewBeatmapLevel*)>(&GlobalNamespace::BeatmapLevelsModel::$$c__DisplayClass34_0::$GetLevelPreviewForLevelId$b__1)> {
  static const MethodInfo* get() {
    static auto* beatmapLevel = &::il2cpp_utils::GetClassFromName("", "IPreviewBeatmapLevel")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapLevelsModel::$$c__DisplayClass34_0*), "<GetLevelPreviewForLevelId>b__1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{beatmapLevel});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapLevelsModel::$$c__DisplayClass34_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
