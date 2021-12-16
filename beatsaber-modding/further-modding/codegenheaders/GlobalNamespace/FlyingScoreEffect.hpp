// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: FlyingObjectEffect
#include "GlobalNamespace/FlyingObjectEffect.hpp"
// Including type: ISaberSwingRatingCounterDidChangeReceiver
#include "GlobalNamespace/ISaberSwingRatingCounterDidChangeReceiver.hpp"
// Including type: ISaberSwingRatingCounterDidFinishReceiver
#include "GlobalNamespace/ISaberSwingRatingCounterDidFinishReceiver.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: ISaberSwingRatingCounter
  class ISaberSwingRatingCounter;
  // Forward declaring type: NoteCutInfo
  struct NoteCutInfo;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AnimationCurve
  class AnimationCurve;
  // Forward declaring type: SpriteRenderer
  class SpriteRenderer;
  // Skipping declaration: Vector3 because it is already included!
  // Skipping declaration: Quaternion because it is already included!
}
// Forward declaring namespace: TMPro
namespace TMPro {
  // Forward declaring type: TextMeshPro
  class TextMeshPro;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0xBD
  #pragma pack(push, 1)
  // Autogenerated type: FlyingScoreEffect
  // [TokenAttribute] Offset: FFFFFFFF
  class FlyingScoreEffect : public GlobalNamespace::FlyingObjectEffect/*, public GlobalNamespace::ISaberSwingRatingCounterDidChangeReceiver, public GlobalNamespace::ISaberSwingRatingCounterDidFinishReceiver*/ {
    public:
    // Nested type: GlobalNamespace::FlyingScoreEffect::Pool
    class Pool;
    // private UnityEngine.AnimationCurve _fadeAnimationCurve
    // Size: 0x8
    // Offset: 0x80
    UnityEngine::AnimationCurve* fadeAnimationCurve;
    // Field size check
    static_assert(sizeof(UnityEngine::AnimationCurve*) == 0x8);
    // private UnityEngine.SpriteRenderer _maxCutDistanceScoreIndicator
    // Size: 0x8
    // Offset: 0x88
    UnityEngine::SpriteRenderer* maxCutDistanceScoreIndicator;
    // Field size check
    static_assert(sizeof(UnityEngine::SpriteRenderer*) == 0x8);
    // private TMPro.TextMeshPro _text
    // Size: 0x8
    // Offset: 0x90
    TMPro::TextMeshPro* text;
    // Field size check
    static_assert(sizeof(TMPro::TextMeshPro*) == 0x8);
    // private UnityEngine.Color _color
    // Size: 0x10
    // Offset: 0x98
    UnityEngine::Color color;
    // Field size check
    static_assert(sizeof(UnityEngine::Color) == 0x10);
    // private System.Single _colorAMultiplier
    // Size: 0x4
    // Offset: 0xA8
    float colorAMultiplier;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: colorAMultiplier and: saberSwingRatingCounter
    char __padding4[0x4] = {};
    // private ISaberSwingRatingCounter _saberSwingRatingCounter
    // Size: 0x8
    // Offset: 0xB0
    GlobalNamespace::ISaberSwingRatingCounter* saberSwingRatingCounter;
    // Field size check
    static_assert(sizeof(GlobalNamespace::ISaberSwingRatingCounter*) == 0x8);
    // private System.Single _cutDistanceToCenter
    // Size: 0x4
    // Offset: 0xB8
    float cutDistanceToCenter;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Boolean _registeredToCallbacks
    // Size: 0x1
    // Offset: 0xBC
    bool registeredToCallbacks;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: FlyingScoreEffect
    FlyingScoreEffect(UnityEngine::AnimationCurve* fadeAnimationCurve_ = {}, UnityEngine::SpriteRenderer* maxCutDistanceScoreIndicator_ = {}, TMPro::TextMeshPro* text_ = {}, UnityEngine::Color color_ = {}, float colorAMultiplier_ = {}, GlobalNamespace::ISaberSwingRatingCounter* saberSwingRatingCounter_ = {}, float cutDistanceToCenter_ = {}, bool registeredToCallbacks_ = {}) noexcept : fadeAnimationCurve{fadeAnimationCurve_}, maxCutDistanceScoreIndicator{maxCutDistanceScoreIndicator_}, text{text_}, color{color_}, colorAMultiplier{colorAMultiplier_}, saberSwingRatingCounter{saberSwingRatingCounter_}, cutDistanceToCenter{cutDistanceToCenter_}, registeredToCallbacks{registeredToCallbacks_} {}
    // Creating interface conversion operator: operator GlobalNamespace::ISaberSwingRatingCounterDidChangeReceiver
    operator GlobalNamespace::ISaberSwingRatingCounterDidChangeReceiver() noexcept {
      return *reinterpret_cast<GlobalNamespace::ISaberSwingRatingCounterDidChangeReceiver*>(this);
    }
    // Creating interface conversion operator: operator GlobalNamespace::ISaberSwingRatingCounterDidFinishReceiver
    operator GlobalNamespace::ISaberSwingRatingCounterDidFinishReceiver() noexcept {
      return *reinterpret_cast<GlobalNamespace::ISaberSwingRatingCounterDidFinishReceiver*>(this);
    }
    // Get instance field reference: private UnityEngine.AnimationCurve _fadeAnimationCurve
    UnityEngine::AnimationCurve*& dyn__fadeAnimationCurve();
    // Get instance field reference: private UnityEngine.SpriteRenderer _maxCutDistanceScoreIndicator
    UnityEngine::SpriteRenderer*& dyn__maxCutDistanceScoreIndicator();
    // Get instance field reference: private TMPro.TextMeshPro _text
    TMPro::TextMeshPro*& dyn__text();
    // Get instance field reference: private UnityEngine.Color _color
    UnityEngine::Color& dyn__color();
    // Get instance field reference: private System.Single _colorAMultiplier
    float& dyn__colorAMultiplier();
    // Get instance field reference: private ISaberSwingRatingCounter _saberSwingRatingCounter
    GlobalNamespace::ISaberSwingRatingCounter*& dyn__saberSwingRatingCounter();
    // Get instance field reference: private System.Single _cutDistanceToCenter
    float& dyn__cutDistanceToCenter();
    // Get instance field reference: private System.Boolean _registeredToCallbacks
    bool& dyn__registeredToCallbacks();
    // public System.Void InitAndPresent(in NoteCutInfo noteCutInfo, System.Int32 multiplier, System.Single duration, UnityEngine.Vector3 targetPos, UnityEngine.Quaternion rotation, UnityEngine.Color color)
    // Offset: 0x1060E70
    void InitAndPresent(ByRef<GlobalNamespace::NoteCutInfo> noteCutInfo, int multiplier, float duration, UnityEngine::Vector3 targetPos, UnityEngine::Quaternion rotation, UnityEngine::Color color);
    // public System.Void HandleSaberSwingRatingCounterDidChange(ISaberSwingRatingCounter saberSwingRatingCounter, System.Single rating)
    // Offset: 0x106119C
    void HandleSaberSwingRatingCounterDidChange(GlobalNamespace::ISaberSwingRatingCounter* saberSwingRatingCounter, float rating);
    // private System.String GetScoreText(System.Int32 score)
    // Offset: 0x10610C8
    ::Il2CppString* GetScoreText(int score);
    // public System.Void HandleSaberSwingRatingCounterDidFinish(ISaberSwingRatingCounter saberSwingRatingCounter)
    // Offset: 0x106123C
    void HandleSaberSwingRatingCounterDidFinish(GlobalNamespace::ISaberSwingRatingCounter* saberSwingRatingCounter);
    // private System.Void UnregisterCallbacksIfNeeded()
    // Offset: 0x1061240
    void UnregisterCallbacksIfNeeded();
    // public System.Void .ctor()
    // Offset: 0x106138C
    // Implemented from: FlyingObjectEffect
    // Base method: System.Void FlyingObjectEffect::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FlyingScoreEffect* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::FlyingScoreEffect::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FlyingScoreEffect*, creationType>()));
    }
    // protected override System.Void ManualUpdate(System.Single t)
    // Offset: 0x10610F0
    // Implemented from: FlyingObjectEffect
    // Base method: System.Void FlyingObjectEffect::ManualUpdate(System.Single t)
    void ManualUpdate(float t);
  }; // FlyingScoreEffect
  #pragma pack(pop)
  static check_size<sizeof(FlyingScoreEffect), 188 + sizeof(bool)> __GlobalNamespace_FlyingScoreEffectSizeCheck;
  static_assert(sizeof(FlyingScoreEffect) == 0xBD);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::FlyingScoreEffect*, "", "FlyingScoreEffect");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::FlyingScoreEffect::InitAndPresent
// Il2CppName: InitAndPresent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::FlyingScoreEffect::*)(ByRef<GlobalNamespace::NoteCutInfo>, int, float, UnityEngine::Vector3, UnityEngine::Quaternion, UnityEngine::Color)>(&GlobalNamespace::FlyingScoreEffect::InitAndPresent)> {
  static const MethodInfo* get() {
    static auto* noteCutInfo = &::il2cpp_utils::GetClassFromName("", "NoteCutInfo")->this_arg;
    static auto* multiplier = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* duration = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* targetPos = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* rotation = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->byval_arg;
    static auto* color = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FlyingScoreEffect*), "InitAndPresent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{noteCutInfo, multiplier, duration, targetPos, rotation, color});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::FlyingScoreEffect::HandleSaberSwingRatingCounterDidChange
// Il2CppName: HandleSaberSwingRatingCounterDidChange
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::FlyingScoreEffect::*)(GlobalNamespace::ISaberSwingRatingCounter*, float)>(&GlobalNamespace::FlyingScoreEffect::HandleSaberSwingRatingCounterDidChange)> {
  static const MethodInfo* get() {
    static auto* saberSwingRatingCounter = &::il2cpp_utils::GetClassFromName("", "ISaberSwingRatingCounter")->byval_arg;
    static auto* rating = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FlyingScoreEffect*), "HandleSaberSwingRatingCounterDidChange", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{saberSwingRatingCounter, rating});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::FlyingScoreEffect::GetScoreText
// Il2CppName: GetScoreText
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (GlobalNamespace::FlyingScoreEffect::*)(int)>(&GlobalNamespace::FlyingScoreEffect::GetScoreText)> {
  static const MethodInfo* get() {
    static auto* score = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FlyingScoreEffect*), "GetScoreText", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{score});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::FlyingScoreEffect::HandleSaberSwingRatingCounterDidFinish
// Il2CppName: HandleSaberSwingRatingCounterDidFinish
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::FlyingScoreEffect::*)(GlobalNamespace::ISaberSwingRatingCounter*)>(&GlobalNamespace::FlyingScoreEffect::HandleSaberSwingRatingCounterDidFinish)> {
  static const MethodInfo* get() {
    static auto* saberSwingRatingCounter = &::il2cpp_utils::GetClassFromName("", "ISaberSwingRatingCounter")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FlyingScoreEffect*), "HandleSaberSwingRatingCounterDidFinish", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{saberSwingRatingCounter});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::FlyingScoreEffect::UnregisterCallbacksIfNeeded
// Il2CppName: UnregisterCallbacksIfNeeded
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::FlyingScoreEffect::*)()>(&GlobalNamespace::FlyingScoreEffect::UnregisterCallbacksIfNeeded)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FlyingScoreEffect*), "UnregisterCallbacksIfNeeded", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::FlyingScoreEffect::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::FlyingScoreEffect::ManualUpdate
// Il2CppName: ManualUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::FlyingScoreEffect::*)(float)>(&GlobalNamespace::FlyingScoreEffect::ManualUpdate)> {
  static const MethodInfo* get() {
    static auto* t = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FlyingScoreEffect*), "ManualUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{t});
  }
};
