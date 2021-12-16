// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Single
#include "System/Single.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IReadonlyBeatmapData
  class IReadonlyBeatmapData;
  // Forward declaring type: EnvironmentIntensityReductionOptions
  class EnvironmentIntensityReductionOptions;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: BeatmapDataStrobeFilterTransform
  // [TokenAttribute] Offset: FFFFFFFF
  class BeatmapDataStrobeFilterTransform : public ::Il2CppObject {
    public:
    // Nested type: GlobalNamespace::BeatmapDataStrobeFilterTransform::StrobeStreakData
    class StrobeStreakData;
    // Nested type: GlobalNamespace::BeatmapDataStrobeFilterTransform::$$c__DisplayClass2_0
    struct $$c__DisplayClass2_0;
    // Creating value type constructor for type: BeatmapDataStrobeFilterTransform
    BeatmapDataStrobeFilterTransform() noexcept {}
    // static field const value: static private System.Single kMaxSecondsToConsiderStrobe
    static constexpr const float kMaxSecondsToConsiderStrobe = 0.1;
    // Get static field: static private System.Single kMaxSecondsToConsiderStrobe
    static float _get_kMaxSecondsToConsiderStrobe();
    // Set static field: static private System.Single kMaxSecondsToConsiderStrobe
    static void _set_kMaxSecondsToConsiderStrobe(float value);
    // static public IReadonlyBeatmapData CreateTransformedData(IReadonlyBeatmapData beatmapData, EnvironmentIntensityReductionOptions environmentIntensityReductionOptions)
    // Offset: 0x11E9368
    static GlobalNamespace::IReadonlyBeatmapData* CreateTransformedData(GlobalNamespace::IReadonlyBeatmapData* beatmapData, GlobalNamespace::EnvironmentIntensityReductionOptions* environmentIntensityReductionOptions);
    // static System.Void <CreateTransformedData>g__IncreaseAllLaterStrobeStartEndIndexes|2_0(System.Single insertionTime, ref BeatmapDataStrobeFilterTransform/<>c__DisplayClass2_0 param_0000ff87)
    // Offset: 0x11E9B68
    static void $CreateTransformedData$g__IncreaseAllLaterStrobeStartEndIndexes_2_0(float insertionTime, ByRef<GlobalNamespace::BeatmapDataStrobeFilterTransform::$$c__DisplayClass2_0> param_0000ff87);
  }; // BeatmapDataStrobeFilterTransform
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BeatmapDataStrobeFilterTransform*, "", "BeatmapDataStrobeFilterTransform");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::BeatmapDataStrobeFilterTransform::CreateTransformedData
// Il2CppName: CreateTransformedData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::IReadonlyBeatmapData* (*)(GlobalNamespace::IReadonlyBeatmapData*, GlobalNamespace::EnvironmentIntensityReductionOptions*)>(&GlobalNamespace::BeatmapDataStrobeFilterTransform::CreateTransformedData)> {
  static const MethodInfo* get() {
    static auto* beatmapData = &::il2cpp_utils::GetClassFromName("", "IReadonlyBeatmapData")->byval_arg;
    static auto* environmentIntensityReductionOptions = &::il2cpp_utils::GetClassFromName("", "EnvironmentIntensityReductionOptions")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapDataStrobeFilterTransform*), "CreateTransformedData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{beatmapData, environmentIntensityReductionOptions});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapDataStrobeFilterTransform::$CreateTransformedData$g__IncreaseAllLaterStrobeStartEndIndexes_2_0
// Il2CppName: <CreateTransformedData>g__IncreaseAllLaterStrobeStartEndIndexes|2_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(float, ByRef<GlobalNamespace::BeatmapDataStrobeFilterTransform::$$c__DisplayClass2_0>)>(&GlobalNamespace::BeatmapDataStrobeFilterTransform::$CreateTransformedData$g__IncreaseAllLaterStrobeStartEndIndexes_2_0)> {
  static const MethodInfo* get() {
    static auto* insertionTime = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* param_0000ff87 = &::il2cpp_utils::GetClassFromName("", "BeatmapDataStrobeFilterTransform/<>c__DisplayClass2_0")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapDataStrobeFilterTransform*), "<CreateTransformedData>g__IncreaseAllLaterStrobeStartEndIndexes|2_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{insertionTime, param_0000ff87});
  }
};
