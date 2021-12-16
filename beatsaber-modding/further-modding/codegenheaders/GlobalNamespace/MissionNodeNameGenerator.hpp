// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: MissionNodesManager
  class MissionNodesManager;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: MissionNodeNameGenerator
  // [TokenAttribute] Offset: FFFFFFFF
  class MissionNodeNameGenerator : public UnityEngine::MonoBehaviour {
    public:
    // private MissionNodesManager _missionNodesManager
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::MissionNodesManager* missionNodesManager;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MissionNodesManager*) == 0x8);
    // Creating value type constructor for type: MissionNodeNameGenerator
    MissionNodeNameGenerator(GlobalNamespace::MissionNodesManager* missionNodesManager_ = {}) noexcept : missionNodesManager{missionNodesManager_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get instance field reference: private MissionNodesManager _missionNodesManager
    GlobalNamespace::MissionNodesManager*& dyn__missionNodesManager();
    // public System.Void .ctor()
    // Offset: 0x1142974
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MissionNodeNameGenerator* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MissionNodeNameGenerator::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MissionNodeNameGenerator*, creationType>()));
    }
  }; // MissionNodeNameGenerator
  #pragma pack(pop)
  static check_size<sizeof(MissionNodeNameGenerator), 24 + sizeof(GlobalNamespace::MissionNodesManager*)> __GlobalNamespace_MissionNodeNameGeneratorSizeCheck;
  static_assert(sizeof(MissionNodeNameGenerator) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MissionNodeNameGenerator*, "", "MissionNodeNameGenerator");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MissionNodeNameGenerator::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
