// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: HMUI.UIItemsList`1
#include "HMUI/UIItemsList_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: ResultObjectiveListItem
  class ResultObjectiveListItem;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // WARNING Size may be invalid!
  // Autogenerated type: ResultObjectiveListItemsList
  // [TokenAttribute] Offset: FFFFFFFF
  class ResultObjectiveListItemsList : public HMUI::UIItemsList_1<GlobalNamespace::ResultObjectiveListItem*> {
    public:
    // Creating value type constructor for type: ResultObjectiveListItemsList
    ResultObjectiveListItemsList() noexcept {}
    // public System.Void .ctor()
    // Offset: 0x1128284
    // Implemented from: HMUI.UIItemsList`1
    // Base method: System.Void UIItemsList_1::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ResultObjectiveListItemsList* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::ResultObjectiveListItemsList::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ResultObjectiveListItemsList*, creationType>()));
    }
  }; // ResultObjectiveListItemsList
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ResultObjectiveListItemsList*, "", "ResultObjectiveListItemsList");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::ResultObjectiveListItemsList::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
