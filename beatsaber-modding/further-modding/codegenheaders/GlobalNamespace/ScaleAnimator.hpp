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
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
  // Skipping declaration: Vector3 because it is already included!
  // Skipping declaration: Quaternion because it is already included!
}
// Forward declaring namespace: Tweening
namespace Tweening {
  // Forward declaring type: TweeningManager
  class TweeningManager;
  // Forward declaring type: Tween`1<T>
  template<typename T>
  class Tween_1;
  // Forward declaring type: EaseType
  struct EaseType;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x41
  #pragma pack(push, 1)
  // Autogenerated type: ScaleAnimator
  // [TokenAttribute] Offset: FFFFFFFF
  class ScaleAnimator : public UnityEngine::MonoBehaviour {
    public:
    // private System.Single _displayedScale
    // Size: 0x4
    // Offset: 0x18
    float displayedScale;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: displayedScale and: targetTransform
    char __padding0[0x4] = {};
    // private UnityEngine.Transform _targetTransform
    // Size: 0x8
    // Offset: 0x20
    UnityEngine::Transform* targetTransform;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // [InjectAttribute] Offset: 0xE41A20
    // private readonly Tweening.TweeningManager _tweeningManager
    // Size: 0x8
    // Offset: 0x28
    Tweening::TweeningManager* tweeningManager;
    // Field size check
    static_assert(sizeof(Tweening::TweeningManager*) == 0x8);
    // private Tweening.Tween`1<System.Single> _scaleUpTween
    // Size: 0x8
    // Offset: 0x30
    Tweening::Tween_1<float>* scaleUpTween;
    // Field size check
    static_assert(sizeof(Tweening::Tween_1<float>*) == 0x8);
    // private Tweening.Tween`1<System.Single> _scaleDownTween
    // Size: 0x8
    // Offset: 0x38
    Tweening::Tween_1<float>* scaleDownTween;
    // Field size check
    static_assert(sizeof(Tweening::Tween_1<float>*) == 0x8);
    // private System.Boolean _initialized
    // Size: 0x1
    // Offset: 0x40
    bool initialized;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: ScaleAnimator
    ScaleAnimator(float displayedScale_ = {}, UnityEngine::Transform* targetTransform_ = {}, Tweening::TweeningManager* tweeningManager_ = {}, Tweening::Tween_1<float>* scaleUpTween_ = {}, Tweening::Tween_1<float>* scaleDownTween_ = {}, bool initialized_ = {}) noexcept : displayedScale{displayedScale_}, targetTransform{targetTransform_}, tweeningManager{tweeningManager_}, scaleUpTween{scaleUpTween_}, scaleDownTween{scaleDownTween_}, initialized{initialized_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get instance field reference: private System.Single _displayedScale
    float& dyn__displayedScale();
    // Get instance field reference: private UnityEngine.Transform _targetTransform
    UnityEngine::Transform*& dyn__targetTransform();
    // Get instance field reference: private readonly Tweening.TweeningManager _tweeningManager
    Tweening::TweeningManager*& dyn__tweeningManager();
    // Get instance field reference: private Tweening.Tween`1<System.Single> _scaleUpTween
    Tweening::Tween_1<float>*& dyn__scaleUpTween();
    // Get instance field reference: private Tweening.Tween`1<System.Single> _scaleDownTween
    Tweening::Tween_1<float>*& dyn__scaleDownTween();
    // Get instance field reference: private System.Boolean _initialized
    bool& dyn__initialized();
    // protected System.Void OnDestroy()
    // Offset: 0x1134F00
    void OnDestroy();
    // private System.Void InitIfNeeded()
    // Offset: 0x1134F98
    void InitIfNeeded();
    // public System.Void SetPositionAndRotation(UnityEngine.Vector3 position, UnityEngine.Quaternion rotation)
    // Offset: 0x1135188
    void SetPositionAndRotation(UnityEngine::Vector3 position, UnityEngine::Quaternion rotation);
    // public System.Void HideInstant()
    // Offset: 0x1135204
    void HideInstant();
    // public System.Void ShowInstant()
    // Offset: 0x11352C8
    void ShowInstant();
    // public System.Void Animate(System.Boolean show, System.Single duration, Tweening.EaseType easeType, System.Single delay)
    // Offset: 0x1135370
    void Animate(bool show, float duration, Tweening::EaseType easeType, float delay);
    // private System.Void <InitIfNeeded>b__7_0(System.Single val)
    // Offset: 0x11354AC
    void $InitIfNeeded$b__7_0(float val);
    // private System.Void <InitIfNeeded>b__7_2()
    // Offset: 0x1135508
    void $InitIfNeeded$b__7_2();
    // private System.Void <InitIfNeeded>b__7_1(System.Single val)
    // Offset: 0x1135538
    void $InitIfNeeded$b__7_1(float val);
    // private System.Void <InitIfNeeded>b__7_3()
    // Offset: 0x1135594
    void $InitIfNeeded$b__7_3();
    // public System.Void .ctor()
    // Offset: 0x113549C
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ScaleAnimator* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::ScaleAnimator::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ScaleAnimator*, creationType>()));
    }
  }; // ScaleAnimator
  #pragma pack(pop)
  static check_size<sizeof(ScaleAnimator), 64 + sizeof(bool)> __GlobalNamespace_ScaleAnimatorSizeCheck;
  static_assert(sizeof(ScaleAnimator) == 0x41);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ScaleAnimator*, "", "ScaleAnimator");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::ScaleAnimator::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ScaleAnimator::*)()>(&GlobalNamespace::ScaleAnimator::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ScaleAnimator*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ScaleAnimator::InitIfNeeded
// Il2CppName: InitIfNeeded
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ScaleAnimator::*)()>(&GlobalNamespace::ScaleAnimator::InitIfNeeded)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ScaleAnimator*), "InitIfNeeded", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ScaleAnimator::SetPositionAndRotation
// Il2CppName: SetPositionAndRotation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ScaleAnimator::*)(UnityEngine::Vector3, UnityEngine::Quaternion)>(&GlobalNamespace::ScaleAnimator::SetPositionAndRotation)> {
  static const MethodInfo* get() {
    static auto* position = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* rotation = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ScaleAnimator*), "SetPositionAndRotation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{position, rotation});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ScaleAnimator::HideInstant
// Il2CppName: HideInstant
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ScaleAnimator::*)()>(&GlobalNamespace::ScaleAnimator::HideInstant)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ScaleAnimator*), "HideInstant", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ScaleAnimator::ShowInstant
// Il2CppName: ShowInstant
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ScaleAnimator::*)()>(&GlobalNamespace::ScaleAnimator::ShowInstant)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ScaleAnimator*), "ShowInstant", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ScaleAnimator::Animate
// Il2CppName: Animate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ScaleAnimator::*)(bool, float, Tweening::EaseType, float)>(&GlobalNamespace::ScaleAnimator::Animate)> {
  static const MethodInfo* get() {
    static auto* show = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* duration = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* easeType = &::il2cpp_utils::GetClassFromName("Tweening", "EaseType")->byval_arg;
    static auto* delay = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ScaleAnimator*), "Animate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{show, duration, easeType, delay});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ScaleAnimator::$InitIfNeeded$b__7_0
// Il2CppName: <InitIfNeeded>b__7_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ScaleAnimator::*)(float)>(&GlobalNamespace::ScaleAnimator::$InitIfNeeded$b__7_0)> {
  static const MethodInfo* get() {
    static auto* val = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ScaleAnimator*), "<InitIfNeeded>b__7_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{val});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ScaleAnimator::$InitIfNeeded$b__7_2
// Il2CppName: <InitIfNeeded>b__7_2
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ScaleAnimator::*)()>(&GlobalNamespace::ScaleAnimator::$InitIfNeeded$b__7_2)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ScaleAnimator*), "<InitIfNeeded>b__7_2", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ScaleAnimator::$InitIfNeeded$b__7_1
// Il2CppName: <InitIfNeeded>b__7_1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ScaleAnimator::*)(float)>(&GlobalNamespace::ScaleAnimator::$InitIfNeeded$b__7_1)> {
  static const MethodInfo* get() {
    static auto* val = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ScaleAnimator*), "<InitIfNeeded>b__7_1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{val});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ScaleAnimator::$InitIfNeeded$b__7_3
// Il2CppName: <InitIfNeeded>b__7_3
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ScaleAnimator::*)()>(&GlobalNamespace::ScaleAnimator::$InitIfNeeded$b__7_3)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ScaleAnimator*), "<InitIfNeeded>b__7_3", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ScaleAnimator::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
