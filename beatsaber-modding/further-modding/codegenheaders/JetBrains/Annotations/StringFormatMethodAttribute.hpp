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
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: JetBrains.Annotations.StringFormatMethodAttribute
  // [TokenAttribute] Offset: FFFFFFFF
  // [AttributeUsageAttribute] Offset: DF01C0
  class StringFormatMethodAttribute : public System::Attribute {
    public:
    // private System.String <FormatParameterName>k__BackingField
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* FormatParameterName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // Creating value type constructor for type: StringFormatMethodAttribute
    StringFormatMethodAttribute(::Il2CppString* FormatParameterName_ = {}) noexcept : FormatParameterName{FormatParameterName_} {}
    // Creating conversion operator: operator ::Il2CppString*
    constexpr operator ::Il2CppString*() const noexcept {
      return FormatParameterName;
    }
    // Get instance field reference: private System.String <FormatParameterName>k__BackingField
    ::Il2CppString*& dyn_$FormatParameterName$k__BackingField();
    // public System.String get_FormatParameterName()
    // Offset: 0x24066B0
    ::Il2CppString* get_FormatParameterName();
    // private System.Void set_FormatParameterName(System.String value)
    // Offset: 0x24066B8
    void set_FormatParameterName(::Il2CppString* value);
    // public System.Void .ctor(System.String formatParameterName)
    // Offset: 0x2406684
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static StringFormatMethodAttribute* New_ctor(::Il2CppString* formatParameterName) {
      static auto ___internal__logger = ::Logger::get().WithContext("JetBrains::Annotations::StringFormatMethodAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<StringFormatMethodAttribute*, creationType>(formatParameterName)));
    }
  }; // JetBrains.Annotations.StringFormatMethodAttribute
  #pragma pack(pop)
  static check_size<sizeof(StringFormatMethodAttribute), 16 + sizeof(::Il2CppString*)> __JetBrains_Annotations_StringFormatMethodAttributeSizeCheck;
  static_assert(sizeof(StringFormatMethodAttribute) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(JetBrains::Annotations::StringFormatMethodAttribute*, "JetBrains.Annotations", "StringFormatMethodAttribute");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: JetBrains::Annotations::StringFormatMethodAttribute::get_FormatParameterName
// Il2CppName: get_FormatParameterName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (JetBrains::Annotations::StringFormatMethodAttribute::*)()>(&JetBrains::Annotations::StringFormatMethodAttribute::get_FormatParameterName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(JetBrains::Annotations::StringFormatMethodAttribute*), "get_FormatParameterName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: JetBrains::Annotations::StringFormatMethodAttribute::set_FormatParameterName
// Il2CppName: set_FormatParameterName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (JetBrains::Annotations::StringFormatMethodAttribute::*)(::Il2CppString*)>(&JetBrains::Annotations::StringFormatMethodAttribute::set_FormatParameterName)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(JetBrains::Annotations::StringFormatMethodAttribute*), "set_FormatParameterName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: JetBrains::Annotations::StringFormatMethodAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
