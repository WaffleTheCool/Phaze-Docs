// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: UnityEngine.LayerMask
#include "UnityEngine/LayerMask.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
  // Forward declaring type: Camera
  class Camera;
}
// Completed forward declares
// Type namespace: LIV.SDK.Unity
namespace LIV::SDK::Unity {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: LIV.SDK.Unity.LIV
  // [TokenAttribute] Offset: FFFFFFFF
  // [AddComponentMenu] Offset: E1FF04
  class LIV : public UnityEngine::MonoBehaviour {
    public:
    // [TooltipAttribute] Offset: 0xE1FF3C
    // public UnityEngine.Transform TrackedSpaceOrigin
    // Size: 0x8
    // Offset: 0x18
    UnityEngine::Transform* TrackedSpaceOrigin;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // [SpaceAttribute] Offset: 0xE1FF74
    // public UnityEngine.Camera HMDCamera
    // Size: 0x8
    // Offset: 0x20
    UnityEngine::Camera* HMDCamera;
    // Field size check
    static_assert(sizeof(UnityEngine::Camera*) == 0x8);
    // [SpaceAttribute] Offset: 0xE1FF84
    // public System.Boolean DisableStandardAssets
    // Size: 0x1
    // Offset: 0x28
    bool DisableStandardAssets;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: DisableStandardAssets and: SpectatorLayerMask
    char __padding2[0x3] = {};
    // [SpaceAttribute] Offset: 0xE1FF94
    // public UnityEngine.LayerMask SpectatorLayerMask
    // Size: 0x4
    // Offset: 0x2C
    UnityEngine::LayerMask SpectatorLayerMask;
    // Field size check
    static_assert(sizeof(UnityEngine::LayerMask) == 0x4);
    // Creating value type constructor for type: LIV
    LIV(UnityEngine::Transform* TrackedSpaceOrigin_ = {}, UnityEngine::Camera* HMDCamera_ = {}, bool DisableStandardAssets_ = {}, UnityEngine::LayerMask SpectatorLayerMask_ = {}) noexcept : TrackedSpaceOrigin{TrackedSpaceOrigin_}, HMDCamera{HMDCamera_}, DisableStandardAssets{DisableStandardAssets_}, SpectatorLayerMask{SpectatorLayerMask_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get instance field reference: public UnityEngine.Transform TrackedSpaceOrigin
    UnityEngine::Transform*& dyn_TrackedSpaceOrigin();
    // Get instance field reference: public UnityEngine.Camera HMDCamera
    UnityEngine::Camera*& dyn_HMDCamera();
    // Get instance field reference: public System.Boolean DisableStandardAssets
    bool& dyn_DisableStandardAssets();
    // Get instance field reference: public UnityEngine.LayerMask SpectatorLayerMask
    UnityEngine::LayerMask& dyn_SpectatorLayerMask();
    // public System.Void .ctor()
    // Offset: 0x241EF8C
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LIV* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("LIV::SDK::Unity::LIV::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LIV*, creationType>()));
    }
  }; // LIV.SDK.Unity.LIV
  #pragma pack(pop)
  static check_size<sizeof(LIV), 44 + sizeof(UnityEngine::LayerMask)> __LIV_SDK_Unity_LIVSizeCheck;
  static_assert(sizeof(LIV) == 0x30);
}
DEFINE_IL2CPP_ARG_TYPE(LIV::SDK::Unity::LIV*, "LIV.SDK.Unity", "LIV");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: LIV::SDK::Unity::LIV::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
