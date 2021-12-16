// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Vector3
  struct Vector3;
  // Forward declaring type: Quaternion
  struct Quaternion;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: GeometryTools
  // [TokenAttribute] Offset: FFFFFFFF
  class GeometryTools : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: GeometryTools
    GeometryTools() noexcept {}
    // static public System.Boolean ThreePointsToBox(UnityEngine.Vector3 p0, UnityEngine.Vector3 p1, UnityEngine.Vector3 p2, out UnityEngine.Vector3 center, out UnityEngine.Vector3 halfSize, out UnityEngine.Quaternion orientation)
    // Offset: 0x1268190
    static bool ThreePointsToBox(UnityEngine::Vector3 p0, UnityEngine::Vector3 p1, UnityEngine::Vector3 p2, ByRef<UnityEngine::Vector3> center, ByRef<UnityEngine::Vector3> halfSize, ByRef<UnityEngine::Quaternion> orientation);
    // public System.Void .ctor()
    // Offset: 0x1268574
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GeometryTools* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::GeometryTools::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GeometryTools*, creationType>()));
    }
  }; // GeometryTools
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GeometryTools*, "", "GeometryTools");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::GeometryTools::ThreePointsToBox
// Il2CppName: ThreePointsToBox
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(UnityEngine::Vector3, UnityEngine::Vector3, UnityEngine::Vector3, ByRef<UnityEngine::Vector3>, ByRef<UnityEngine::Vector3>, ByRef<UnityEngine::Quaternion>)>(&GlobalNamespace::GeometryTools::ThreePointsToBox)> {
  static const MethodInfo* get() {
    static auto* p0 = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* p1 = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* p2 = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* center = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->this_arg;
    static auto* halfSize = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->this_arg;
    static auto* orientation = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GeometryTools*), "ThreePointsToBox", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{p0, p1, p2, center, halfSize, orientation});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GeometryTools::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
