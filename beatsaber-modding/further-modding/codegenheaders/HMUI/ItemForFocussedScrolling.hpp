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
// Type namespace: HMUI
namespace HMUI {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: HMUI.ItemForFocussedScrolling
  // [TokenAttribute] Offset: FFFFFFFF
  class ItemForFocussedScrolling : public UnityEngine::MonoBehaviour {
    public:
    // Creating value type constructor for type: ItemForFocussedScrolling
    ItemForFocussedScrolling() noexcept {}
    // public System.Void .ctor()
    // Offset: 0x130F124
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ItemForFocussedScrolling* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("HMUI::ItemForFocussedScrolling::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ItemForFocussedScrolling*, creationType>()));
    }
  }; // HMUI.ItemForFocussedScrolling
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(HMUI::ItemForFocussedScrolling*, "HMUI", "ItemForFocussedScrolling");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: HMUI::ItemForFocussedScrolling::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
