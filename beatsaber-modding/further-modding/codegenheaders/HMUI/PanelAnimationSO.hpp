// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.ScriptableObject
#include "UnityEngine/ScriptableObject.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AnimationCurve
  class AnimationCurve;
  // Forward declaring type: GameObject
  class GameObject;
  // Forward declaring type: CanvasGroup
  class CanvasGroup;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
}
// Completed forward declares
// Type namespace: HMUI
namespace HMUI {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: HMUI.PanelAnimationSO
  // [TokenAttribute] Offset: FFFFFFFF
  class PanelAnimationSO : public UnityEngine::ScriptableObject {
    public:
    // private System.Single _duration
    // Size: 0x4
    // Offset: 0x18
    float duration;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: duration and: scaleXAnimationCurve
    char __padding0[0x4] = {};
    // private UnityEngine.AnimationCurve _scaleXAnimationCurve
    // Size: 0x8
    // Offset: 0x20
    UnityEngine::AnimationCurve* scaleXAnimationCurve;
    // Field size check
    static_assert(sizeof(UnityEngine::AnimationCurve*) == 0x8);
    // private UnityEngine.AnimationCurve _scaleYAnimationCurve
    // Size: 0x8
    // Offset: 0x28
    UnityEngine::AnimationCurve* scaleYAnimationCurve;
    // Field size check
    static_assert(sizeof(UnityEngine::AnimationCurve*) == 0x8);
    // private UnityEngine.AnimationCurve _alphaAnimationCurve
    // Size: 0x8
    // Offset: 0x30
    UnityEngine::AnimationCurve* alphaAnimationCurve;
    // Field size check
    static_assert(sizeof(UnityEngine::AnimationCurve*) == 0x8);
    // private UnityEngine.AnimationCurve _parentAlphaAnimationCurve
    // Size: 0x8
    // Offset: 0x38
    UnityEngine::AnimationCurve* parentAlphaAnimationCurve;
    // Field size check
    static_assert(sizeof(UnityEngine::AnimationCurve*) == 0x8);
    // Creating value type constructor for type: PanelAnimationSO
    PanelAnimationSO(float duration_ = {}, UnityEngine::AnimationCurve* scaleXAnimationCurve_ = {}, UnityEngine::AnimationCurve* scaleYAnimationCurve_ = {}, UnityEngine::AnimationCurve* alphaAnimationCurve_ = {}, UnityEngine::AnimationCurve* parentAlphaAnimationCurve_ = {}) noexcept : duration{duration_}, scaleXAnimationCurve{scaleXAnimationCurve_}, scaleYAnimationCurve{scaleYAnimationCurve_}, alphaAnimationCurve{alphaAnimationCurve_}, parentAlphaAnimationCurve{parentAlphaAnimationCurve_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get instance field reference: private System.Single _duration
    float& dyn__duration();
    // Get instance field reference: private UnityEngine.AnimationCurve _scaleXAnimationCurve
    UnityEngine::AnimationCurve*& dyn__scaleXAnimationCurve();
    // Get instance field reference: private UnityEngine.AnimationCurve _scaleYAnimationCurve
    UnityEngine::AnimationCurve*& dyn__scaleYAnimationCurve();
    // Get instance field reference: private UnityEngine.AnimationCurve _alphaAnimationCurve
    UnityEngine::AnimationCurve*& dyn__alphaAnimationCurve();
    // Get instance field reference: private UnityEngine.AnimationCurve _parentAlphaAnimationCurve
    UnityEngine::AnimationCurve*& dyn__parentAlphaAnimationCurve();
    // public System.Void ExecuteAnimation(UnityEngine.GameObject go)
    // Offset: 0x1311A3C
    void ExecuteAnimation(UnityEngine::GameObject* go);
    // public System.Void ExecuteAnimation(UnityEngine.GameObject go, System.Action finishedCallback)
    // Offset: 0x1311A4C
    void ExecuteAnimation(UnityEngine::GameObject* go, System::Action* finishedCallback);
    // public System.Void ExecuteAnimation(UnityEngine.GameObject go, UnityEngine.CanvasGroup parentCanvasGroup, System.Action finishedCallback)
    // Offset: 0x1311A5C
    void ExecuteAnimation(UnityEngine::GameObject* go, UnityEngine::CanvasGroup* parentCanvasGroup, System::Action* finishedCallback);
    // public System.Void ExecuteAnimation(UnityEngine.GameObject go, UnityEngine.CanvasGroup parentCanvasGroup, System.Boolean instant, System.Action finishedCallback)
    // Offset: 0x130F828
    void ExecuteAnimation(UnityEngine::GameObject* go, UnityEngine::CanvasGroup* parentCanvasGroup, bool instant, System::Action* finishedCallback);
    // public System.Void .ctor()
    // Offset: 0x1311A68
    // Implemented from: UnityEngine.ScriptableObject
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PanelAnimationSO* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("HMUI::PanelAnimationSO::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PanelAnimationSO*, creationType>()));
    }
  }; // HMUI.PanelAnimationSO
  #pragma pack(pop)
  static check_size<sizeof(PanelAnimationSO), 56 + sizeof(UnityEngine::AnimationCurve*)> __HMUI_PanelAnimationSOSizeCheck;
  static_assert(sizeof(PanelAnimationSO) == 0x40);
}
DEFINE_IL2CPP_ARG_TYPE(HMUI::PanelAnimationSO*, "HMUI", "PanelAnimationSO");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: HMUI::PanelAnimationSO::ExecuteAnimation
// Il2CppName: ExecuteAnimation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::PanelAnimationSO::*)(UnityEngine::GameObject*)>(&HMUI::PanelAnimationSO::ExecuteAnimation)> {
  static const MethodInfo* get() {
    static auto* go = &::il2cpp_utils::GetClassFromName("UnityEngine", "GameObject")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::PanelAnimationSO*), "ExecuteAnimation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{go});
  }
};
// Writing MetadataGetter for method: HMUI::PanelAnimationSO::ExecuteAnimation
// Il2CppName: ExecuteAnimation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::PanelAnimationSO::*)(UnityEngine::GameObject*, System::Action*)>(&HMUI::PanelAnimationSO::ExecuteAnimation)> {
  static const MethodInfo* get() {
    static auto* go = &::il2cpp_utils::GetClassFromName("UnityEngine", "GameObject")->byval_arg;
    static auto* finishedCallback = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::PanelAnimationSO*), "ExecuteAnimation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{go, finishedCallback});
  }
};
// Writing MetadataGetter for method: HMUI::PanelAnimationSO::ExecuteAnimation
// Il2CppName: ExecuteAnimation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::PanelAnimationSO::*)(UnityEngine::GameObject*, UnityEngine::CanvasGroup*, System::Action*)>(&HMUI::PanelAnimationSO::ExecuteAnimation)> {
  static const MethodInfo* get() {
    static auto* go = &::il2cpp_utils::GetClassFromName("UnityEngine", "GameObject")->byval_arg;
    static auto* parentCanvasGroup = &::il2cpp_utils::GetClassFromName("UnityEngine", "CanvasGroup")->byval_arg;
    static auto* finishedCallback = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::PanelAnimationSO*), "ExecuteAnimation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{go, parentCanvasGroup, finishedCallback});
  }
};
// Writing MetadataGetter for method: HMUI::PanelAnimationSO::ExecuteAnimation
// Il2CppName: ExecuteAnimation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::PanelAnimationSO::*)(UnityEngine::GameObject*, UnityEngine::CanvasGroup*, bool, System::Action*)>(&HMUI::PanelAnimationSO::ExecuteAnimation)> {
  static const MethodInfo* get() {
    static auto* go = &::il2cpp_utils::GetClassFromName("UnityEngine", "GameObject")->byval_arg;
    static auto* parentCanvasGroup = &::il2cpp_utils::GetClassFromName("UnityEngine", "CanvasGroup")->byval_arg;
    static auto* instant = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* finishedCallback = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::PanelAnimationSO*), "ExecuteAnimation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{go, parentCanvasGroup, instant, finishedCallback});
  }
};
// Writing MetadataGetter for method: HMUI::PanelAnimationSO::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
