// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: BeatmapDifficulty
  struct BeatmapDifficulty;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: BeatmapDifficultyMethods
  // [TokenAttribute] Offset: FFFFFFFF
  // [ExtensionAttribute] Offset: FFFFFFFF
  class BeatmapDifficultyMethods : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: BeatmapDifficultyMethods
    BeatmapDifficultyMethods() noexcept {}
    // static public System.String Name(BeatmapDifficulty difficulty)
    // Offset: 0x11EA21C
    static ::Il2CppString* Name(GlobalNamespace::BeatmapDifficulty difficulty);
    // static public System.String ShortName(BeatmapDifficulty difficulty)
    // Offset: 0x11EA7E0
    static ::Il2CppString* ShortName(GlobalNamespace::BeatmapDifficulty difficulty);
    // static public System.Int32 DefaultRating(BeatmapDifficulty difficulty)
    // Offset: 0x11EA848
    static int DefaultRating(GlobalNamespace::BeatmapDifficulty difficulty);
    // static public System.Single NoteJumpMovementSpeed(BeatmapDifficulty difficulty)
    // Offset: 0x11EA870
    static float NoteJumpMovementSpeed(GlobalNamespace::BeatmapDifficulty difficulty);
  }; // BeatmapDifficultyMethods
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BeatmapDifficultyMethods*, "", "BeatmapDifficultyMethods");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::BeatmapDifficultyMethods::Name
// Il2CppName: Name
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (*)(GlobalNamespace::BeatmapDifficulty)>(&GlobalNamespace::BeatmapDifficultyMethods::Name)> {
  static const MethodInfo* get() {
    static auto* difficulty = &::il2cpp_utils::GetClassFromName("", "BeatmapDifficulty")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapDifficultyMethods*), "Name", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{difficulty});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapDifficultyMethods::ShortName
// Il2CppName: ShortName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (*)(GlobalNamespace::BeatmapDifficulty)>(&GlobalNamespace::BeatmapDifficultyMethods::ShortName)> {
  static const MethodInfo* get() {
    static auto* difficulty = &::il2cpp_utils::GetClassFromName("", "BeatmapDifficulty")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapDifficultyMethods*), "ShortName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{difficulty});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapDifficultyMethods::DefaultRating
// Il2CppName: DefaultRating
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(GlobalNamespace::BeatmapDifficulty)>(&GlobalNamespace::BeatmapDifficultyMethods::DefaultRating)> {
  static const MethodInfo* get() {
    static auto* difficulty = &::il2cpp_utils::GetClassFromName("", "BeatmapDifficulty")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapDifficultyMethods*), "DefaultRating", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{difficulty});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapDifficultyMethods::NoteJumpMovementSpeed
// Il2CppName: NoteJumpMovementSpeed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)(GlobalNamespace::BeatmapDifficulty)>(&GlobalNamespace::BeatmapDifficultyMethods::NoteJumpMovementSpeed)> {
  static const MethodInfo* get() {
    static auto* difficulty = &::il2cpp_utils::GetClassFromName("", "BeatmapDifficulty")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapDifficultyMethods*), "NoteJumpMovementSpeed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{difficulty});
  }
};
