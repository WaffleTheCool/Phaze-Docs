// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: Zenject.NoTransitionInstaller
#include "Zenject/NoTransitionInstaller.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: MultiplayerLevelNoTransitionInstaller
  // [TokenAttribute] Offset: FFFFFFFF
  class MultiplayerLevelNoTransitionInstaller : public Zenject::NoTransitionInstaller {
    public:
    // Creating value type constructor for type: MultiplayerLevelNoTransitionInstaller
    MultiplayerLevelNoTransitionInstaller() noexcept {}
    // public System.Void .ctor()
    // Offset: 0x107B7F4
    // Implemented from: Zenject.NoTransitionInstaller
    // Base method: System.Void NoTransitionInstaller::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MultiplayerLevelNoTransitionInstaller* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MultiplayerLevelNoTransitionInstaller::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MultiplayerLevelNoTransitionInstaller*, creationType>()));
    }
  }; // MultiplayerLevelNoTransitionInstaller
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultiplayerLevelNoTransitionInstaller*, "", "MultiplayerLevelNoTransitionInstaller");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLevelNoTransitionInstaller::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
