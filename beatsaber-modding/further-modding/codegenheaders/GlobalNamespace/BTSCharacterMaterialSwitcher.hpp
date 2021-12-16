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
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: BTSCharacterMaterialSwitcher
  // [TokenAttribute] Offset: FFFFFFFF
  class BTSCharacterMaterialSwitcher : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: GlobalNamespace::BTSCharacterMaterialSwitcher::RendererMaterialsPairs
    class RendererMaterialsPairs;
    // Nested type: GlobalNamespace::BTSCharacterMaterialSwitcher::MaterialPairs
    class MaterialPairs;
    // private BTSCharacterMaterialSwitcher/RendererMaterialsPairs[] _rendererMaterialsPairs
    // Size: 0x8
    // Offset: 0x18
    ::Array<GlobalNamespace::BTSCharacterMaterialSwitcher::RendererMaterialsPairs*>* rendererMaterialsPairs;
    // Field size check
    static_assert(sizeof(::Array<GlobalNamespace::BTSCharacterMaterialSwitcher::RendererMaterialsPairs*>*) == 0x8);
    // Creating value type constructor for type: BTSCharacterMaterialSwitcher
    BTSCharacterMaterialSwitcher(::Array<GlobalNamespace::BTSCharacterMaterialSwitcher::RendererMaterialsPairs*>* rendererMaterialsPairs_ = {}) noexcept : rendererMaterialsPairs{rendererMaterialsPairs_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get instance field reference: private BTSCharacterMaterialSwitcher/RendererMaterialsPairs[] _rendererMaterialsPairs
    ::Array<GlobalNamespace::BTSCharacterMaterialSwitcher::RendererMaterialsPairs*>*& dyn__rendererMaterialsPairs();
    // public System.Void SwapMaterials(System.Boolean alternative)
    // Offset: 0x11800C0
    void SwapMaterials(bool alternative);
    // public System.Void .ctor()
    // Offset: 0x1180348
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BTSCharacterMaterialSwitcher* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::BTSCharacterMaterialSwitcher::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BTSCharacterMaterialSwitcher*, creationType>()));
    }
  }; // BTSCharacterMaterialSwitcher
  #pragma pack(pop)
  static check_size<sizeof(BTSCharacterMaterialSwitcher), 24 + sizeof(::Array<GlobalNamespace::BTSCharacterMaterialSwitcher::RendererMaterialsPairs*>*)> __GlobalNamespace_BTSCharacterMaterialSwitcherSizeCheck;
  static_assert(sizeof(BTSCharacterMaterialSwitcher) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BTSCharacterMaterialSwitcher*, "", "BTSCharacterMaterialSwitcher");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::BTSCharacterMaterialSwitcher::SwapMaterials
// Il2CppName: SwapMaterials
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BTSCharacterMaterialSwitcher::*)(bool)>(&GlobalNamespace::BTSCharacterMaterialSwitcher::SwapMaterials)> {
  static const MethodInfo* get() {
    static auto* alternative = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BTSCharacterMaterialSwitcher*), "SwapMaterials", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{alternative});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BTSCharacterMaterialSwitcher::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
