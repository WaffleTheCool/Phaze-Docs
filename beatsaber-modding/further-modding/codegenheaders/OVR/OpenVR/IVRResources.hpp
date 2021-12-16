// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: OVR::OpenVR
namespace OVR::OpenVR {
}
// Completed forward declares
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Size: 0x10
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: OVR.OpenVR.IVRResources
  // [TokenAttribute] Offset: FFFFFFFF
  struct IVRResources/*, public System::ValueType*/ {
    public:
    // Nested type: OVR::OpenVR::IVRResources::_LoadSharedResource
    class _LoadSharedResource;
    // Nested type: OVR::OpenVR::IVRResources::_GetResourceFullPath
    class _GetResourceFullPath;
    // OVR.OpenVR.IVRResources/OVR.OpenVR._LoadSharedResource LoadSharedResource
    // Size: 0x8
    // Offset: 0x0
    OVR::OpenVR::IVRResources::_LoadSharedResource* LoadSharedResource;
    // Field size check
    static_assert(sizeof(OVR::OpenVR::IVRResources::_LoadSharedResource*) == 0x8);
    // OVR.OpenVR.IVRResources/OVR.OpenVR._GetResourceFullPath GetResourceFullPath
    // Size: 0x8
    // Offset: 0x8
    OVR::OpenVR::IVRResources::_GetResourceFullPath* GetResourceFullPath;
    // Field size check
    static_assert(sizeof(OVR::OpenVR::IVRResources::_GetResourceFullPath*) == 0x8);
    // Creating value type constructor for type: IVRResources
    constexpr IVRResources(OVR::OpenVR::IVRResources::_LoadSharedResource* LoadSharedResource_ = {}, OVR::OpenVR::IVRResources::_GetResourceFullPath* GetResourceFullPath_ = {}) noexcept : LoadSharedResource{LoadSharedResource_}, GetResourceFullPath{GetResourceFullPath_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Get instance field reference: OVR.OpenVR.IVRResources/OVR.OpenVR._LoadSharedResource LoadSharedResource
    OVR::OpenVR::IVRResources::_LoadSharedResource*& dyn_LoadSharedResource();
    // Get instance field reference: OVR.OpenVR.IVRResources/OVR.OpenVR._GetResourceFullPath GetResourceFullPath
    OVR::OpenVR::IVRResources::_GetResourceFullPath*& dyn_GetResourceFullPath();
  }; // OVR.OpenVR.IVRResources
  #pragma pack(pop)
  static check_size<sizeof(IVRResources), 8 + sizeof(OVR::OpenVR::IVRResources::_GetResourceFullPath*)> __OVR_OpenVR_IVRResourcesSizeCheck;
  static_assert(sizeof(IVRResources) == 0x10);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::IVRResources, "OVR.OpenVR", "IVRResources");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
