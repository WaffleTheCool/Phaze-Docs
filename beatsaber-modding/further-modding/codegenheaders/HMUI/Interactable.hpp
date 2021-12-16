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
// Type namespace: HMUI
namespace HMUI {
  // Size: 0x19
  #pragma pack(push, 1)
  // Autogenerated type: HMUI.Interactable
  // [TokenAttribute] Offset: FFFFFFFF
  class Interactable : public UnityEngine::MonoBehaviour {
    public:
    // private System.Boolean _interactable
    // Size: 0x1
    // Offset: 0x18
    bool interactable;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: Interactable
    Interactable(bool interactable_ = {}) noexcept : interactable{interactable_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get instance field reference: private System.Boolean _interactable
    bool& dyn__interactable();
    // public System.Boolean get_interactable()
    // Offset: 0x130EEEC
    bool get_interactable();
    // public System.Void set_interactable(System.Boolean value)
    // Offset: 0x130EEF4
    void set_interactable(bool value);
    // public System.Void .ctor()
    // Offset: 0x130EF00
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Interactable* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("HMUI::Interactable::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Interactable*, creationType>()));
    }
  }; // HMUI.Interactable
  #pragma pack(pop)
  static check_size<sizeof(Interactable), 24 + sizeof(bool)> __HMUI_InteractableSizeCheck;
  static_assert(sizeof(Interactable) == 0x19);
}
DEFINE_IL2CPP_ARG_TYPE(HMUI::Interactable*, "HMUI", "Interactable");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: HMUI::Interactable::get_interactable
// Il2CppName: get_interactable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (HMUI::Interactable::*)()>(&HMUI::Interactable::get_interactable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::Interactable*), "get_interactable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HMUI::Interactable::set_interactable
// Il2CppName: set_interactable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::Interactable::*)(bool)>(&HMUI::Interactable::set_interactable)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::Interactable*), "set_interactable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: HMUI::Interactable::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
