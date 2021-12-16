// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: MainEffectSO
#include "GlobalNamespace/MainEffectSO.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: KawaseBlurRendererSO
  class KawaseBlurRendererSO;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Shader
  class Shader;
  // Forward declaring type: Material
  class Material;
  // Forward declaring type: RenderTexture
  class RenderTexture;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x60
  #pragma pack(push, 1)
  // Autogenerated type: KawaseBloomMainEffectSO
  // [TokenAttribute] Offset: FFFFFFFF
  class KawaseBloomMainEffectSO : public GlobalNamespace::MainEffectSO {
    public:
    // private KawaseBlurRendererSO _kawaseBlurRenderer
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::KawaseBlurRendererSO* kawaseBlurRenderer;
    // Field size check
    static_assert(sizeof(GlobalNamespace::KawaseBlurRendererSO*) == 0x8);
    // private UnityEngine.Shader _fadeShader
    // Size: 0x8
    // Offset: 0x20
    UnityEngine::Shader* fadeShader;
    // Field size check
    static_assert(sizeof(UnityEngine::Shader*) == 0x8);
    // private UnityEngine.Shader _mainEffectShader
    // Size: 0x8
    // Offset: 0x28
    UnityEngine::Shader* mainEffectShader;
    // Field size check
    static_assert(sizeof(UnityEngine::Shader*) == 0x8);
    // [SpaceAttribute] Offset: 0xE23F00
    // [RangeAttribute] Offset: 0xE23F00
    // private System.Single _bloomIntensity
    // Size: 0x4
    // Offset: 0x30
    float bloomIntensity;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Int32 _bloomIterations
    // Size: 0x4
    // Offset: 0x34
    int bloomIterations;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Single _bloomBoost
    // Size: 0x4
    // Offset: 0x38
    float bloomBoost;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _bloomAlphaWeights
    // Size: 0x4
    // Offset: 0x3C
    float bloomAlphaWeights;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [SpaceAttribute] Offset: 0xE23F80
    // private System.Int32 _bloomTextureWidth
    // Size: 0x4
    // Offset: 0x40
    int bloomTextureWidth;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // [SpaceAttribute] Offset: 0xE23FB8
    // [RangeAttribute] Offset: 0xE23FB8
    // private System.Single _baseColorBoost
    // Size: 0x4
    // Offset: 0x44
    float baseColorBoost;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _baseColorBoostThreshold
    // Size: 0x4
    // Offset: 0x48
    float baseColorBoostThreshold;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: baseColorBoostThreshold and: fadeMaterial
    char __padding9[0x4] = {};
    // private UnityEngine.Material _fadeMaterial
    // Size: 0x8
    // Offset: 0x50
    UnityEngine::Material* fadeMaterial;
    // Field size check
    static_assert(sizeof(UnityEngine::Material*) == 0x8);
    // private UnityEngine.Material _mainEffectMaterial
    // Size: 0x8
    // Offset: 0x58
    UnityEngine::Material* mainEffectMaterial;
    // Field size check
    static_assert(sizeof(UnityEngine::Material*) == 0x8);
    // Creating value type constructor for type: KawaseBloomMainEffectSO
    KawaseBloomMainEffectSO(GlobalNamespace::KawaseBlurRendererSO* kawaseBlurRenderer_ = {}, UnityEngine::Shader* fadeShader_ = {}, UnityEngine::Shader* mainEffectShader_ = {}, float bloomIntensity_ = {}, int bloomIterations_ = {}, float bloomBoost_ = {}, float bloomAlphaWeights_ = {}, int bloomTextureWidth_ = {}, float baseColorBoost_ = {}, float baseColorBoostThreshold_ = {}, UnityEngine::Material* fadeMaterial_ = {}, UnityEngine::Material* mainEffectMaterial_ = {}) noexcept : kawaseBlurRenderer{kawaseBlurRenderer_}, fadeShader{fadeShader_}, mainEffectShader{mainEffectShader_}, bloomIntensity{bloomIntensity_}, bloomIterations{bloomIterations_}, bloomBoost{bloomBoost_}, bloomAlphaWeights{bloomAlphaWeights_}, bloomTextureWidth{bloomTextureWidth_}, baseColorBoost{baseColorBoost_}, baseColorBoostThreshold{baseColorBoostThreshold_}, fadeMaterial{fadeMaterial_}, mainEffectMaterial{mainEffectMaterial_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0xE24018
    // Get static field: static private readonly System.Int32 _bloomTexID
    static int _get__bloomTexID();
    // Set static field: static private readonly System.Int32 _bloomTexID
    static void _set__bloomTexID(int value);
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0xE24028
    // Get static field: static private readonly System.Int32 _bloomIntensityID
    static int _get__bloomIntensityID();
    // Set static field: static private readonly System.Int32 _bloomIntensityID
    static void _set__bloomIntensityID(int value);
    // Get instance field reference: private KawaseBlurRendererSO _kawaseBlurRenderer
    GlobalNamespace::KawaseBlurRendererSO*& dyn__kawaseBlurRenderer();
    // Get instance field reference: private UnityEngine.Shader _fadeShader
    UnityEngine::Shader*& dyn__fadeShader();
    // Get instance field reference: private UnityEngine.Shader _mainEffectShader
    UnityEngine::Shader*& dyn__mainEffectShader();
    // Get instance field reference: private System.Single _bloomIntensity
    float& dyn__bloomIntensity();
    // Get instance field reference: private System.Int32 _bloomIterations
    int& dyn__bloomIterations();
    // Get instance field reference: private System.Single _bloomBoost
    float& dyn__bloomBoost();
    // Get instance field reference: private System.Single _bloomAlphaWeights
    float& dyn__bloomAlphaWeights();
    // Get instance field reference: private System.Int32 _bloomTextureWidth
    int& dyn__bloomTextureWidth();
    // Get instance field reference: private System.Single _baseColorBoost
    float& dyn__baseColorBoost();
    // Get instance field reference: private System.Single _baseColorBoostThreshold
    float& dyn__baseColorBoostThreshold();
    // Get instance field reference: private UnityEngine.Material _fadeMaterial
    UnityEngine::Material*& dyn__fadeMaterial();
    // Get instance field reference: private UnityEngine.Material _mainEffectMaterial
    UnityEngine::Material*& dyn__mainEffectMaterial();
    // protected System.Void OnDisable()
    // Offset: 0x238C908
    void OnDisable();
    // private System.Void LazyInitializeMaterials()
    // Offset: 0x238C7D0
    void LazyInitializeMaterials();
    // public override System.Boolean get_hasPostProcessEffect()
    // Offset: 0x238C7A0
    // Implemented from: MainEffectSO
    // Base method: System.Boolean MainEffectSO::get_hasPostProcessEffect()
    bool get_hasPostProcessEffect();
    // public System.Void .ctor()
    // Offset: 0x238CCE4
    // Implemented from: MainEffectSO
    // Base method: System.Void MainEffectSO::.ctor()
    // Base method: System.Void PersistentScriptableObject::.ctor()
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static KawaseBloomMainEffectSO* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::KawaseBloomMainEffectSO::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<KawaseBloomMainEffectSO*, creationType>()));
    }
    // static private System.Void .cctor()
    // Offset: 0x238CD14
    // Implemented from: UnityEngine.Object
    // Base method: System.Void Object::.cctor()
    static void _cctor();
    // protected override System.Void OnEnable()
    // Offset: 0x238C7A8
    // Implemented from: PersistentScriptableObject
    // Base method: System.Void PersistentScriptableObject::OnEnable()
    void OnEnable();
    // public override System.Void PreRender()
    // Offset: 0x238C944
    // Implemented from: MainEffectSO
    // Base method: System.Void MainEffectSO::PreRender()
    void PreRender();
    // public override System.Void Render(UnityEngine.RenderTexture src, UnityEngine.RenderTexture dest, System.Single fade)
    // Offset: 0x238CA50
    // Implemented from: MainEffectSO
    // Base method: System.Void MainEffectSO::Render(UnityEngine.RenderTexture src, UnityEngine.RenderTexture dest, System.Single fade)
    void Render(UnityEngine::RenderTexture* src, UnityEngine::RenderTexture* dest, float fade);
  }; // KawaseBloomMainEffectSO
  #pragma pack(pop)
  static check_size<sizeof(KawaseBloomMainEffectSO), 88 + sizeof(UnityEngine::Material*)> __GlobalNamespace_KawaseBloomMainEffectSOSizeCheck;
  static_assert(sizeof(KawaseBloomMainEffectSO) == 0x60);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::KawaseBloomMainEffectSO*, "", "KawaseBloomMainEffectSO");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::KawaseBloomMainEffectSO::OnDisable
// Il2CppName: OnDisable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::KawaseBloomMainEffectSO::*)()>(&GlobalNamespace::KawaseBloomMainEffectSO::OnDisable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::KawaseBloomMainEffectSO*), "OnDisable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::KawaseBloomMainEffectSO::LazyInitializeMaterials
// Il2CppName: LazyInitializeMaterials
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::KawaseBloomMainEffectSO::*)()>(&GlobalNamespace::KawaseBloomMainEffectSO::LazyInitializeMaterials)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::KawaseBloomMainEffectSO*), "LazyInitializeMaterials", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::KawaseBloomMainEffectSO::get_hasPostProcessEffect
// Il2CppName: get_hasPostProcessEffect
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::KawaseBloomMainEffectSO::*)()>(&GlobalNamespace::KawaseBloomMainEffectSO::get_hasPostProcessEffect)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::KawaseBloomMainEffectSO*), "get_hasPostProcessEffect", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::KawaseBloomMainEffectSO::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::KawaseBloomMainEffectSO::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&GlobalNamespace::KawaseBloomMainEffectSO::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::KawaseBloomMainEffectSO*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::KawaseBloomMainEffectSO::OnEnable
// Il2CppName: OnEnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::KawaseBloomMainEffectSO::*)()>(&GlobalNamespace::KawaseBloomMainEffectSO::OnEnable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::KawaseBloomMainEffectSO*), "OnEnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::KawaseBloomMainEffectSO::PreRender
// Il2CppName: PreRender
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::KawaseBloomMainEffectSO::*)()>(&GlobalNamespace::KawaseBloomMainEffectSO::PreRender)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::KawaseBloomMainEffectSO*), "PreRender", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::KawaseBloomMainEffectSO::Render
// Il2CppName: Render
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::KawaseBloomMainEffectSO::*)(UnityEngine::RenderTexture*, UnityEngine::RenderTexture*, float)>(&GlobalNamespace::KawaseBloomMainEffectSO::Render)> {
  static const MethodInfo* get() {
    static auto* src = &::il2cpp_utils::GetClassFromName("UnityEngine", "RenderTexture")->byval_arg;
    static auto* dest = &::il2cpp_utils::GetClassFromName("UnityEngine", "RenderTexture")->byval_arg;
    static auto* fade = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::KawaseBloomMainEffectSO*), "Render", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{src, dest, fade});
  }
};
