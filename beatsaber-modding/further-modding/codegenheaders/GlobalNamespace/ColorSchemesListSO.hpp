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
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: ColorSchemeSO
  class ColorSchemeSO;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: ColorSchemesListSO
  // [TokenAttribute] Offset: FFFFFFFF
  class ColorSchemesListSO : public UnityEngine::ScriptableObject {
    public:
    // private ColorSchemeSO[] _colorSchemes
    // Size: 0x8
    // Offset: 0x18
    ::Array<GlobalNamespace::ColorSchemeSO*>* colorSchemes;
    // Field size check
    static_assert(sizeof(::Array<GlobalNamespace::ColorSchemeSO*>*) == 0x8);
    // Creating value type constructor for type: ColorSchemesListSO
    ColorSchemesListSO(::Array<GlobalNamespace::ColorSchemeSO*>* colorSchemes_ = {}) noexcept : colorSchemes{colorSchemes_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get instance field reference: private ColorSchemeSO[] _colorSchemes
    ::Array<GlobalNamespace::ColorSchemeSO*>*& dyn__colorSchemes();
    // public ColorSchemeSO[] get_colorSchemes()
    // Offset: 0x241BF64
    ::Array<GlobalNamespace::ColorSchemeSO*>* get_colorSchemes();
    // public System.Void .ctor()
    // Offset: 0x241BF6C
    // Implemented from: UnityEngine.ScriptableObject
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ColorSchemesListSO* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::ColorSchemesListSO::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ColorSchemesListSO*, creationType>()));
    }
  }; // ColorSchemesListSO
  #pragma pack(pop)
  static check_size<sizeof(ColorSchemesListSO), 24 + sizeof(::Array<GlobalNamespace::ColorSchemeSO*>*)> __GlobalNamespace_ColorSchemesListSOSizeCheck;
  static_assert(sizeof(ColorSchemesListSO) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ColorSchemesListSO*, "", "ColorSchemesListSO");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::ColorSchemesListSO::get_colorSchemes
// Il2CppName: get_colorSchemes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<GlobalNamespace::ColorSchemeSO*>* (GlobalNamespace::ColorSchemesListSO::*)()>(&GlobalNamespace::ColorSchemesListSO::get_colorSchemes)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ColorSchemesListSO*), "get_colorSchemes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ColorSchemesListSO::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
