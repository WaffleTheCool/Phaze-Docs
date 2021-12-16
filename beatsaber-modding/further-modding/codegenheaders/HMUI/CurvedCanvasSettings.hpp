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
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Skipping declaration: Vector3 because it is already included!
  // Skipping declaration: Vector2 because it is already included!
  // Forward declaring type: Transform
  class Transform;
}
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: VertexHelper
  class VertexHelper;
}
// Completed forward declares
// Type namespace: HMUI
namespace HMUI {
  // Size: 0x91
  #pragma pack(push, 1)
  // Autogenerated type: HMUI.CurvedCanvasSettings
  // [TokenAttribute] Offset: FFFFFFFF
  // [RequireComponent] Offset: E1A8C4
  // [RequireComponent] Offset: E1A8C4
  class CurvedCanvasSettings : public UnityEngine::UI::Graphic {
    public:
    // Writing base type padding for base size: 0x89 to desired offset: 0x8C
    char ___base_padding[0x3] = {};
    // private System.Single _radius
    // Size: 0x4
    // Offset: 0x8C
    float radius;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Boolean _useFlatInEditMode
    // Size: 0x1
    // Offset: 0x90
    bool useFlatInEditMode;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: CurvedCanvasSettings
    CurvedCanvasSettings(float radius_ = {}, bool useFlatInEditMode_ = {}) noexcept : radius{radius_}, useFlatInEditMode{useFlatInEditMode_} {}
    // static field const value: static public System.Single kMaxElementWidth
    static constexpr const float kMaxElementWidth = 10;
    // Get static field: static public System.Single kMaxElementWidth
    static float _get_kMaxElementWidth();
    // Set static field: static public System.Single kMaxElementWidth
    static void _set_kMaxElementWidth(float value);
    // Get instance field reference: private System.Single _radius
    float& dyn__radius();
    // Get instance field reference: private System.Boolean _useFlatInEditMode
    bool& dyn__useFlatInEditMode();
    // public System.Single get_radius()
    // Offset: 0x136F914
    float get_radius();
    // public System.Void SetRadius(System.Single value)
    // Offset: 0x136F91C
    void SetRadius(float value);
    // private UnityEngine.Vector3 TransformPointFromCanvasTo3D(UnityEngine.Vector2 point)
    // Offset: 0x136FBE8
    UnityEngine::Vector3 TransformPointFromCanvasTo3D(UnityEngine::Vector2 point);
    // static private System.Void RebuildAndSetup(UnityEngine.Transform t)
    // Offset: 0x136F938
    static void RebuildAndSetup(UnityEngine::Transform* t);
    // public System.Void .ctor()
    // Offset: 0x136FCB8
    // Implemented from: UnityEngine.UI.Graphic
    // Base method: System.Void Graphic::.ctor()
    // Base method: System.Void UIBehaviour::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CurvedCanvasSettings* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("HMUI::CurvedCanvasSettings::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CurvedCanvasSettings*, creationType>()));
    }
    // protected override System.Void Start()
    // Offset: 0x136FA2C
    // Implemented from: UnityEngine.EventSystems.UIBehaviour
    // Base method: System.Void UIBehaviour::Start()
    void Start();
    // protected override System.Void OnPopulateMesh(UnityEngine.UI.VertexHelper vh)
    // Offset: 0x136FAD8
    // Implemented from: UnityEngine.UI.Graphic
    // Base method: System.Void Graphic::OnPopulateMesh(UnityEngine.UI.VertexHelper vh)
    void OnPopulateMesh(UnityEngine::UI::VertexHelper* vh);
  }; // HMUI.CurvedCanvasSettings
  #pragma pack(pop)
  static check_size<sizeof(CurvedCanvasSettings), 144 + sizeof(bool)> __HMUI_CurvedCanvasSettingsSizeCheck;
  static_assert(sizeof(CurvedCanvasSettings) == 0x91);
}
DEFINE_IL2CPP_ARG_TYPE(HMUI::CurvedCanvasSettings*, "HMUI", "CurvedCanvasSettings");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: HMUI::CurvedCanvasSettings::get_radius
// Il2CppName: get_radius
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (HMUI::CurvedCanvasSettings::*)()>(&HMUI::CurvedCanvasSettings::get_radius)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::CurvedCanvasSettings*), "get_radius", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HMUI::CurvedCanvasSettings::SetRadius
// Il2CppName: SetRadius
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::CurvedCanvasSettings::*)(float)>(&HMUI::CurvedCanvasSettings::SetRadius)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::CurvedCanvasSettings*), "SetRadius", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: HMUI::CurvedCanvasSettings::TransformPointFromCanvasTo3D
// Il2CppName: TransformPointFromCanvasTo3D
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector3 (HMUI::CurvedCanvasSettings::*)(UnityEngine::Vector2)>(&HMUI::CurvedCanvasSettings::TransformPointFromCanvasTo3D)> {
  static const MethodInfo* get() {
    static auto* point = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::CurvedCanvasSettings*), "TransformPointFromCanvasTo3D", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{point});
  }
};
// Writing MetadataGetter for method: HMUI::CurvedCanvasSettings::RebuildAndSetup
// Il2CppName: RebuildAndSetup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::Transform*)>(&HMUI::CurvedCanvasSettings::RebuildAndSetup)> {
  static const MethodInfo* get() {
    static auto* t = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::CurvedCanvasSettings*), "RebuildAndSetup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{t});
  }
};
// Writing MetadataGetter for method: HMUI::CurvedCanvasSettings::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: HMUI::CurvedCanvasSettings::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::CurvedCanvasSettings::*)()>(&HMUI::CurvedCanvasSettings::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::CurvedCanvasSettings*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HMUI::CurvedCanvasSettings::OnPopulateMesh
// Il2CppName: OnPopulateMesh
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::CurvedCanvasSettings::*)(UnityEngine::UI::VertexHelper*)>(&HMUI::CurvedCanvasSettings::OnPopulateMesh)> {
  static const MethodInfo* get() {
    static auto* vh = &::il2cpp_utils::GetClassFromName("UnityEngine.UI", "VertexHelper")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::CurvedCanvasSettings*), "OnPopulateMesh", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{vh});
  }
};
