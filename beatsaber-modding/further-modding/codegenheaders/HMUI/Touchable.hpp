// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.UI.Graphic
#include "UnityEngine/UI/Graphic.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: VertexHelper
  class VertexHelper;
}
// Completed forward declares
// Type namespace: HMUI
namespace HMUI {
  // Size: 0x90
  #pragma pack(push, 1)
  // Autogenerated type: HMUI.Touchable
  // [TokenAttribute] Offset: FFFFFFFF
  class Touchable : public UnityEngine::UI::Graphic {
    public:
    // Writing base type padding for base size: 0x89 to desired offset: 0x8C
    char ___base_padding[0x3] = {};
    // private System.Single _skew
    // Size: 0x4
    // Offset: 0x8C
    float skew;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Creating value type constructor for type: Touchable
    Touchable(float skew_ = {}) noexcept : skew{skew_} {}
    // Get instance field reference: private System.Single _skew
    float& dyn__skew();
    // public System.Single get_skew()
    // Offset: 0x131FC34
    float get_skew();
    // public System.Void .ctor()
    // Offset: 0x131FC58
    // Implemented from: UnityEngine.UI.Graphic
    // Base method: System.Void Graphic::.ctor()
    // Base method: System.Void UIBehaviour::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Touchable* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("HMUI::Touchable::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Touchable*, creationType>()));
    }
    // protected override System.Void OnPopulateMesh(UnityEngine.UI.VertexHelper vh)
    // Offset: 0x131FC3C
    // Implemented from: UnityEngine.UI.Graphic
    // Base method: System.Void Graphic::OnPopulateMesh(UnityEngine.UI.VertexHelper vh)
    void OnPopulateMesh(UnityEngine::UI::VertexHelper* vh);
  }; // HMUI.Touchable
  #pragma pack(pop)
  static check_size<sizeof(Touchable), 140 + sizeof(float)> __HMUI_TouchableSizeCheck;
  static_assert(sizeof(Touchable) == 0x90);
}
DEFINE_IL2CPP_ARG_TYPE(HMUI::Touchable*, "HMUI", "Touchable");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: HMUI::Touchable::get_skew
// Il2CppName: get_skew
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (HMUI::Touchable::*)()>(&HMUI::Touchable::get_skew)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::Touchable*), "get_skew", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HMUI::Touchable::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: HMUI::Touchable::OnPopulateMesh
// Il2CppName: OnPopulateMesh
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::Touchable::*)(UnityEngine::UI::VertexHelper*)>(&HMUI::Touchable::OnPopulateMesh)> {
  static const MethodInfo* get() {
    static auto* vh = &::il2cpp_utils::GetClassFromName("UnityEngine.UI", "VertexHelper")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::Touchable*), "OnPopulateMesh", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{vh});
  }
};
