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
  // Autogenerated type: JetBrains.Annotations.RazorPageBaseTypeAttribute
  // [TokenAttribute] Offset: FFFFFFFF
  // [AttributeUsageAttribute] Offset: DF0944
  class RazorPageBaseTypeAttribute : public System::Attribute {
    public:
    // private System.String <BaseType>k__BackingField
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* BaseType;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.String <PageName>k__BackingField
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppString* PageName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // Creating value type constructor for type: RazorPageBaseTypeAttribute
    RazorPageBaseTypeAttribute(::Il2CppString* BaseType_ = {}, ::Il2CppString* PageName_ = {}) noexcept : BaseType{BaseType_}, PageName{PageName_} {}
    // Get instance field reference: private System.String <BaseType>k__BackingField
    ::Il2CppString*& dyn_$BaseType$k__BackingField();
    // Get instance field reference: private System.String <PageName>k__BackingField
    ::Il2CppString*& dyn_$PageName$k__BackingField();
    // public System.String get_BaseType()
    // Offset: 0x2406634
    ::Il2CppString* get_BaseType();
    // private System.Void set_BaseType(System.String value)
    // Offset: 0x240663C
    void set_BaseType(::Il2CppString* value);
    // public System.String get_PageName()
    // Offset: 0x2406644
    ::Il2CppString* get_PageName();
    // private System.Void set_PageName(System.String value)
    // Offset: 0x240664C
    void set_PageName(::Il2CppString* value);
    // public System.Void .ctor(System.String baseType)
    // Offset: 0x24065D0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RazorPageBaseTypeAttribute* New_ctor(::Il2CppString* baseType) {
      static auto ___internal__logger = ::Logger::get().WithContext("JetBrains::Annotations::RazorPageBaseTypeAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RazorPageBaseTypeAttribute*, creationType>(baseType)));
    }
    // public System.Void .ctor(System.String baseType, System.String pageName)
    // Offset: 0x24065FC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RazorPageBaseTypeAttribute* New_ctor(::Il2CppString* baseType, ::Il2CppString* pageName) {
      static auto ___internal__logger = ::Logger::get().WithContext("JetBrains::Annotations::RazorPageBaseTypeAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RazorPageBaseTypeAttribute*, creationType>(baseType, pageName)));
    }
  }; // JetBrains.Annotations.RazorPageBaseTypeAttribute
  #pragma pack(pop)
  static check_size<sizeof(RazorPageBaseTypeAttribute), 24 + sizeof(::Il2CppString*)> __JetBrains_Annotations_RazorPageBaseTypeAttributeSizeCheck;
  static_assert(sizeof(RazorPageBaseTypeAttribute) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(JetBrains::Annotations::RazorPageBaseTypeAttribute*, "JetBrains.Annotations", "RazorPageBaseTypeAttribute");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: JetBrains::Annotations::RazorPageBaseTypeAttribute::get_BaseType
// Il2CppName: get_BaseType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (JetBrains::Annotations::RazorPageBaseTypeAttribute::*)()>(&JetBrains::Annotations::RazorPageBaseTypeAttribute::get_BaseType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(JetBrains::Annotations::RazorPageBaseTypeAttribute*), "get_BaseType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: JetBrains::Annotations::RazorPageBaseTypeAttribute::set_BaseType
// Il2CppName: set_BaseType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (JetBrains::Annotations::RazorPageBaseTypeAttribute::*)(::Il2CppString*)>(&JetBrains::Annotations::RazorPageBaseTypeAttribute::set_BaseType)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(JetBrains::Annotations::RazorPageBaseTypeAttribute*), "set_BaseType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: JetBrains::Annotations::RazorPageBaseTypeAttribute::get_PageName
// Il2CppName: get_PageName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (JetBrains::Annotations::RazorPageBaseTypeAttribute::*)()>(&JetBrains::Annotations::RazorPageBaseTypeAttribute::get_PageName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(JetBrains::Annotations::RazorPageBaseTypeAttribute*), "get_PageName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: JetBrains::Annotations::RazorPageBaseTypeAttribute::set_PageName
// Il2CppName: set_PageName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (JetBrains::Annotations::RazorPageBaseTypeAttribute::*)(::Il2CppString*)>(&JetBrains::Annotations::RazorPageBaseTypeAttribute::set_PageName)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(JetBrains::Annotations::RazorPageBaseTypeAttribute*), "set_PageName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: JetBrains::Annotations::RazorPageBaseTypeAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: JetBrains::Annotations::RazorPageBaseTypeAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
