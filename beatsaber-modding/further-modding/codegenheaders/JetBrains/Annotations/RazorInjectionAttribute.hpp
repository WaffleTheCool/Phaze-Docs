// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Attribute
#include "System/Attribute.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: JetBrains.Annotations
namespace JetBrains::Annotations {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: JetBrains.Annotations.RazorInjectionAttribute
  // [TokenAttribute] Offset: FFFFFFFF
  // [AttributeUsageAttribute] Offset: DF08D4
  class RazorInjectionAttribute : public System::Attribute {
    public:
    // private System.String <Type>k__BackingField
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* Type;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.String <FieldName>k__BackingField
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppString* FieldName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // Creating value type constructor for type: RazorInjectionAttribute
    RazorInjectionAttribute(::Il2CppString* Type_ = {}, ::Il2CppString* FieldName_ = {}) noexcept : Type{Type_}, FieldName{FieldName_} {}
    // Get instance field reference: private System.String <Type>k__BackingField
    ::Il2CppString*& dyn_$Type$k__BackingField();
    // Get instance field reference: private System.String <FieldName>k__BackingField
    ::Il2CppString*& dyn_$FieldName$k__BackingField();
    // public System.String get_Type()
    // Offset: 0x24065A8
    ::Il2CppString* get_Type();
    // private System.Void set_Type(System.String value)
    // Offset: 0x24065B0
    void set_Type(::Il2CppString* value);
    // public System.String get_FieldName()
    // Offset: 0x24065B8
    ::Il2CppString* get_FieldName();
    // private System.Void set_FieldName(System.String value)
    // Offset: 0x24065C0
    void set_FieldName(::Il2CppString* value);
    // public System.Void .ctor(System.String type, System.String fieldName)
    // Offset: 0x2406570
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RazorInjectionAttribute* New_ctor(::Il2CppString* type, ::Il2CppString* fieldName) {
      static auto ___internal__logger = ::Logger::get().WithContext("JetBrains::Annotations::RazorInjectionAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RazorInjectionAttribute*, creationType>(type, fieldName)));
    }
  }; // JetBrains.Annotations.RazorInjectionAttribute
  #pragma pack(pop)
  static check_size<sizeof(RazorInjectionAttribute), 24 + sizeof(::Il2CppString*)> __JetBrains_Annotations_RazorInjectionAttributeSizeCheck;
  static_assert(sizeof(RazorInjectionAttribute) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(JetBrains::Annotations::RazorInjectionAttribute*, "JetBrains.Annotations", "RazorInjectionAttribute");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: JetBrains::Annotations::RazorInjectionAttribute::get_Type
// Il2CppName: get_Type
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (JetBrains::Annotations::RazorInjectionAttribute::*)()>(&JetBrains::Annotations::RazorInjectionAttribute::get_Type)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(JetBrains::Annotations::RazorInjectionAttribute*), "get_Type", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: JetBrains::Annotations::RazorInjectionAttribute::set_Type
// Il2CppName: set_Type
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (JetBrains::Annotations::RazorInjectionAttribute::*)(::Il2CppString*)>(&JetBrains::Annotations::RazorInjectionAttribute::set_Type)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(JetBrains::Annotations::RazorInjectionAttribute*), "set_Type", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: JetBrains::Annotations::RazorInjectionAttribute::get_FieldName
// Il2CppName: get_FieldName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (JetBrains::Annotations::RazorInjectionAttribute::*)()>(&JetBrains::Annotations::RazorInjectionAttribute::get_FieldName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(JetBrains::Annotations::RazorInjectionAttribute*), "get_FieldName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: JetBrains::Annotations::RazorInjectionAttribute::set_FieldName
// Il2CppName: set_FieldName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (JetBrains::Annotations::RazorInjectionAttribute::*)(::Il2CppString*)>(&JetBrains::Annotations::RazorInjectionAttribute::set_FieldName)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(JetBrains::Annotations::RazorInjectionAttribute*), "set_FieldName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: JetBrains::Annotations::RazorInjectionAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
