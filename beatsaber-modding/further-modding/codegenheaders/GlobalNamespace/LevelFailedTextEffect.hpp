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
  // Forward declaring type: Animator
  class Animator;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: LevelFailedTextEffect
  // [TokenAttribute] Offset: FFFFFFFF
  class LevelFailedTextEffect : public UnityEngine::MonoBehaviour {
    public:
    // private UnityEngine.Animator _animator
    // Size: 0x8
    // Offset: 0x18
    UnityEngine::Animator* animator;
    // Field size check
    static_assert(sizeof(UnityEngine::Animator*) == 0x8);
    // Creating value type constructor for type: LevelFailedTextEffect
    LevelFailedTextEffect(UnityEngine::Animator* animator_ = {}) noexcept : animator{animator_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get instance field reference: private UnityEngine.Animator _animator
    UnityEngine::Animator*& dyn__animator();
    // public System.Void ShowEffect()
    // Offset: 0x11930CC
    void ShowEffect();
    // public System.Void .ctor()
    // Offset: 0x1193114
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LevelFailedTextEffect* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::LevelFailedTextEffect::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LevelFailedTextEffect*, creationType>()));
    }
  }; // LevelFailedTextEffect
  #pragma pack(pop)
  static check_size<sizeof(LevelFailedTextEffect), 24 + sizeof(UnityEngine::Animator*)> __GlobalNamespace_LevelFailedTextEffectSizeCheck;
  static_assert(sizeof(LevelFailedTextEffect) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::LevelFailedTextEffect*, "", "LevelFailedTextEffect");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::LevelFailedTextEffect::ShowEffect
// Il2CppName: ShowEffect
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LevelFailedTextEffect::*)()>(&GlobalNamespace::LevelFailedTextEffect::ShowEffect)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LevelFailedTextEffect*), "ShowEffect", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LevelFailedTextEffect::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
