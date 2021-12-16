// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: BeatmapEventType
#include "GlobalNamespace/BeatmapEventType.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x1C
  #pragma pack(push, 1)
  // Autogenerated type: BeatmapEventData
  // [TokenAttribute] Offset: FFFFFFFF
  class BeatmapEventData : public ::Il2CppObject {
    public:
    // public readonly BeatmapEventType type
    // Size: 0x4
    // Offset: 0x10
    GlobalNamespace::BeatmapEventType type;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BeatmapEventType) == 0x4);
    // public readonly System.Single time
    // Size: 0x4
    // Offset: 0x14
    float time;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public readonly System.Int32 value
    // Size: 0x4
    // Offset: 0x18
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: BeatmapEventData
    BeatmapEventData(GlobalNamespace::BeatmapEventType type_ = {}, float time_ = {}, int value_ = {}) noexcept : type{type_}, time{time_}, value{value_} {}
    // Get instance field reference: public readonly BeatmapEventType type
    GlobalNamespace::BeatmapEventType& dyn_type();
    // Get instance field reference: public readonly System.Single time
    float& dyn_time();
    // Get instance field reference: public readonly System.Int32 value
    int& dyn_value();
    // public System.Void .ctor(System.Single time, BeatmapEventType type, System.Int32 value)
    // Offset: 0x2409278
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BeatmapEventData* New_ctor(float time, GlobalNamespace::BeatmapEventType type, int value) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::BeatmapEventData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BeatmapEventData*, creationType>(time, type, value)));
    }
  }; // BeatmapEventData
  #pragma pack(pop)
  static check_size<sizeof(BeatmapEventData), 24 + sizeof(int)> __GlobalNamespace_BeatmapEventDataSizeCheck;
  static_assert(sizeof(BeatmapEventData) == 0x1C);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BeatmapEventData*, "", "BeatmapEventData");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::BeatmapEventData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
