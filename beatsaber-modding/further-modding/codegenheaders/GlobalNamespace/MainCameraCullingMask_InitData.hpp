// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: MainCameraCullingMask
#include "GlobalNamespace/MainCameraCullingMask.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x11
  #pragma pack(push, 1)
  // Autogenerated type: MainCameraCullingMask/InitData
  // [TokenAttribute] Offset: FFFFFFFF
  class MainCameraCullingMask::InitData : public ::Il2CppObject {
    public:
    // public readonly System.Boolean showDebris
    // Size: 0x1
    // Offset: 0x10
    bool showDebris;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: InitData
    InitData(bool showDebris_ = {}) noexcept : showDebris{showDebris_} {}
    // Creating conversion operator: operator bool
    constexpr operator bool() const noexcept {
      return showDebris;
    }
    // Get instance field reference: public readonly System.Boolean showDebris
    bool& dyn_showDebris();
    // public System.Void .ctor(System.Boolean showDebris)
    // Offset: 0x238CEF0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MainCameraCullingMask::InitData* New_ctor(bool showDebris) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MainCameraCullingMask::InitData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MainCameraCullingMask::InitData*, creationType>(showDebris)));
    }
  }; // MainCameraCullingMask/InitData
  #pragma pack(pop)
  static check_size<sizeof(MainCameraCullingMask::InitData), 16 + sizeof(bool)> __GlobalNamespace_MainCameraCullingMask_InitDataSizeCheck;
  static_assert(sizeof(MainCameraCullingMask::InitData) == 0x11);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MainCameraCullingMask::InitData*, "", "MainCameraCullingMask/InitData");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MainCameraCullingMask::InitData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
