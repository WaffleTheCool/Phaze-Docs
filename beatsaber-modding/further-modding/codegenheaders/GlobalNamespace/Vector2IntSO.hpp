// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: ObservableVariableSO`1
#include "GlobalNamespace/ObservableVariableSO_1.hpp"
// Including type: UnityEngine.Vector2Int
#include "UnityEngine/Vector2Int.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // WARNING Size may be invalid!
  // Autogenerated type: Vector2IntSO
  // [TokenAttribute] Offset: FFFFFFFF
  class Vector2IntSO : public GlobalNamespace::ObservableVariableSO_1<UnityEngine::Vector2Int> {
    public:
    // Creating value type constructor for type: Vector2IntSO
    Vector2IntSO() noexcept {}
    // public System.Void .ctor()
    // Offset: 0x2398674
    // Implemented from: ObservableVariableSO`1
    // Base method: System.Void ObservableVariableSO_1::.ctor()
    // Base method: System.Void PersistentScriptableObject::.ctor()
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Vector2IntSO* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::Vector2IntSO::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Vector2IntSO*, creationType>()));
    }
  }; // Vector2IntSO
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::Vector2IntSO*, "", "Vector2IntSO");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::Vector2IntSO::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
