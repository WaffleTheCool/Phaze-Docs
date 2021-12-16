// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Skipping declaration: CompressExpandReductionType because it is already included!
  // Skipping declaration: RotateRingsReductionType because it is already included!
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: EnvironmentIntensityReductionOptions
  // [TokenAttribute] Offset: FFFFFFFF
  class EnvironmentIntensityReductionOptions : public ::Il2CppObject {
    public:
    // Nested type: GlobalNamespace::EnvironmentIntensityReductionOptions::CompressExpandReductionType
    struct CompressExpandReductionType;
    // Nested type: GlobalNamespace::EnvironmentIntensityReductionOptions::RotateRingsReductionType
    struct RotateRingsReductionType;
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: EnvironmentIntensityReductionOptions/CompressExpandReductionType
    // [TokenAttribute] Offset: FFFFFFFF
    struct CompressExpandReductionType/*, public System::Enum*/ {
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      // Creating value type constructor for type: CompressExpandReductionType
      constexpr CompressExpandReductionType(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator System::Enum
      operator System::Enum() noexcept {
        return *reinterpret_cast<System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public EnvironmentIntensityReductionOptions/CompressExpandReductionType Keep
      static constexpr const int Keep = 0;
      // Get static field: static public EnvironmentIntensityReductionOptions/CompressExpandReductionType Keep
      static GlobalNamespace::EnvironmentIntensityReductionOptions::CompressExpandReductionType _get_Keep();
      // Set static field: static public EnvironmentIntensityReductionOptions/CompressExpandReductionType Keep
      static void _set_Keep(GlobalNamespace::EnvironmentIntensityReductionOptions::CompressExpandReductionType value);
      // static field const value: static public EnvironmentIntensityReductionOptions/CompressExpandReductionType RemoveWithStrobeFilter
      static constexpr const int RemoveWithStrobeFilter = 1;
      // Get static field: static public EnvironmentIntensityReductionOptions/CompressExpandReductionType RemoveWithStrobeFilter
      static GlobalNamespace::EnvironmentIntensityReductionOptions::CompressExpandReductionType _get_RemoveWithStrobeFilter();
      // Set static field: static public EnvironmentIntensityReductionOptions/CompressExpandReductionType RemoveWithStrobeFilter
      static void _set_RemoveWithStrobeFilter(GlobalNamespace::EnvironmentIntensityReductionOptions::CompressExpandReductionType value);
      // Get instance field reference: public System.Int32 value__
      int& dyn_value__();
    }; // EnvironmentIntensityReductionOptions/CompressExpandReductionType
    #pragma pack(pop)
    static check_size<sizeof(EnvironmentIntensityReductionOptions::CompressExpandReductionType), 0 + sizeof(int)> __GlobalNamespace_EnvironmentIntensityReductionOptions_CompressExpandReductionTypeSizeCheck;
    static_assert(sizeof(EnvironmentIntensityReductionOptions::CompressExpandReductionType) == 0x4);
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: EnvironmentIntensityReductionOptions/RotateRingsReductionType
    // [TokenAttribute] Offset: FFFFFFFF
    struct RotateRingsReductionType/*, public System::Enum*/ {
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      // Creating value type constructor for type: RotateRingsReductionType
      constexpr RotateRingsReductionType(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator System::Enum
      operator System::Enum() noexcept {
        return *reinterpret_cast<System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public EnvironmentIntensityReductionOptions/RotateRingsReductionType Keep
      static constexpr const int Keep = 0;
      // Get static field: static public EnvironmentIntensityReductionOptions/RotateRingsReductionType Keep
      static GlobalNamespace::EnvironmentIntensityReductionOptions::RotateRingsReductionType _get_Keep();
      // Set static field: static public EnvironmentIntensityReductionOptions/RotateRingsReductionType Keep
      static void _set_Keep(GlobalNamespace::EnvironmentIntensityReductionOptions::RotateRingsReductionType value);
      // static field const value: static public EnvironmentIntensityReductionOptions/RotateRingsReductionType RemoveWithStrobeFilter
      static constexpr const int RemoveWithStrobeFilter = 1;
      // Get static field: static public EnvironmentIntensityReductionOptions/RotateRingsReductionType RemoveWithStrobeFilter
      static GlobalNamespace::EnvironmentIntensityReductionOptions::RotateRingsReductionType _get_RemoveWithStrobeFilter();
      // Set static field: static public EnvironmentIntensityReductionOptions/RotateRingsReductionType RemoveWithStrobeFilter
      static void _set_RemoveWithStrobeFilter(GlobalNamespace::EnvironmentIntensityReductionOptions::RotateRingsReductionType value);
      // Get instance field reference: public System.Int32 value__
      int& dyn_value__();
    }; // EnvironmentIntensityReductionOptions/RotateRingsReductionType
    #pragma pack(pop)
    static check_size<sizeof(EnvironmentIntensityReductionOptions::RotateRingsReductionType), 0 + sizeof(int)> __GlobalNamespace_EnvironmentIntensityReductionOptions_RotateRingsReductionTypeSizeCheck;
    static_assert(sizeof(EnvironmentIntensityReductionOptions::RotateRingsReductionType) == 0x4);
    // private EnvironmentIntensityReductionOptions/CompressExpandReductionType _compressExpand
    // Size: 0x4
    // Offset: 0x10
    GlobalNamespace::EnvironmentIntensityReductionOptions::CompressExpandReductionType compressExpand;
    // Field size check
    static_assert(sizeof(GlobalNamespace::EnvironmentIntensityReductionOptions::CompressExpandReductionType) == 0x4);
    // private EnvironmentIntensityReductionOptions/RotateRingsReductionType _rotateRings
    // Size: 0x4
    // Offset: 0x14
    GlobalNamespace::EnvironmentIntensityReductionOptions::RotateRingsReductionType rotateRings;
    // Field size check
    static_assert(sizeof(GlobalNamespace::EnvironmentIntensityReductionOptions::RotateRingsReductionType) == 0x4);
    // Creating value type constructor for type: EnvironmentIntensityReductionOptions
    EnvironmentIntensityReductionOptions(GlobalNamespace::EnvironmentIntensityReductionOptions::CompressExpandReductionType compressExpand_ = {}, GlobalNamespace::EnvironmentIntensityReductionOptions::RotateRingsReductionType rotateRings_ = {}) noexcept : compressExpand{compressExpand_}, rotateRings{rotateRings_} {}
    // Get instance field reference: private EnvironmentIntensityReductionOptions/CompressExpandReductionType _compressExpand
    GlobalNamespace::EnvironmentIntensityReductionOptions::CompressExpandReductionType& dyn__compressExpand();
    // Get instance field reference: private EnvironmentIntensityReductionOptions/RotateRingsReductionType _rotateRings
    GlobalNamespace::EnvironmentIntensityReductionOptions::RotateRingsReductionType& dyn__rotateRings();
    // public EnvironmentIntensityReductionOptions/CompressExpandReductionType get_compressExpand()
    // Offset: 0x1057DE0
    GlobalNamespace::EnvironmentIntensityReductionOptions::CompressExpandReductionType get_compressExpand();
    // public EnvironmentIntensityReductionOptions/RotateRingsReductionType get_rotateRings()
    // Offset: 0x1057DE8
    GlobalNamespace::EnvironmentIntensityReductionOptions::RotateRingsReductionType get_rotateRings();
    // public System.Void .ctor()
    // Offset: 0x1057DF0
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static EnvironmentIntensityReductionOptions* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::EnvironmentIntensityReductionOptions::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<EnvironmentIntensityReductionOptions*, creationType>()));
    }
  }; // EnvironmentIntensityReductionOptions
  #pragma pack(pop)
  static check_size<sizeof(EnvironmentIntensityReductionOptions), 20 + sizeof(GlobalNamespace::EnvironmentIntensityReductionOptions::RotateRingsReductionType)> __GlobalNamespace_EnvironmentIntensityReductionOptionsSizeCheck;
  static_assert(sizeof(EnvironmentIntensityReductionOptions) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::EnvironmentIntensityReductionOptions*, "", "EnvironmentIntensityReductionOptions");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::EnvironmentIntensityReductionOptions::CompressExpandReductionType, "", "EnvironmentIntensityReductionOptions/CompressExpandReductionType");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::EnvironmentIntensityReductionOptions::RotateRingsReductionType, "", "EnvironmentIntensityReductionOptions/RotateRingsReductionType");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::EnvironmentIntensityReductionOptions::get_compressExpand
// Il2CppName: get_compressExpand
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::EnvironmentIntensityReductionOptions::CompressExpandReductionType (GlobalNamespace::EnvironmentIntensityReductionOptions::*)()>(&GlobalNamespace::EnvironmentIntensityReductionOptions::get_compressExpand)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::EnvironmentIntensityReductionOptions*), "get_compressExpand", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::EnvironmentIntensityReductionOptions::get_rotateRings
// Il2CppName: get_rotateRings
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::EnvironmentIntensityReductionOptions::RotateRingsReductionType (GlobalNamespace::EnvironmentIntensityReductionOptions::*)()>(&GlobalNamespace::EnvironmentIntensityReductionOptions::get_rotateRings)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::EnvironmentIntensityReductionOptions*), "get_rotateRings", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::EnvironmentIntensityReductionOptions::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
