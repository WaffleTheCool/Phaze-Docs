// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: JetBrains.Annotations
namespace JetBrains::Annotations {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: JetBrains.Annotations.CollectionAccessType
  // [TokenAttribute] Offset: FFFFFFFF
  // [FlagsAttribute] Offset: FFFFFFFF
  struct CollectionAccessType/*, public System::Enum*/ {
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: CollectionAccessType
    constexpr CollectionAccessType(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public JetBrains.Annotations.CollectionAccessType None
    static constexpr const int None = 0;
    // Get static field: static public JetBrains.Annotations.CollectionAccessType None
    static JetBrains::Annotations::CollectionAccessType _get_None();
    // Set static field: static public JetBrains.Annotations.CollectionAccessType None
    static void _set_None(JetBrains::Annotations::CollectionAccessType value);
    // static field const value: static public JetBrains.Annotations.CollectionAccessType Read
    static constexpr const int Read = 1;
    // Get static field: static public JetBrains.Annotations.CollectionAccessType Read
    static JetBrains::Annotations::CollectionAccessType _get_Read();
    // Set static field: static public JetBrains.Annotations.CollectionAccessType Read
    static void _set_Read(JetBrains::Annotations::CollectionAccessType value);
    // static field const value: static public JetBrains.Annotations.CollectionAccessType ModifyExistingContent
    static constexpr const int ModifyExistingContent = 2;
    // Get static field: static public JetBrains.Annotations.CollectionAccessType ModifyExistingContent
    static JetBrains::Annotations::CollectionAccessType _get_ModifyExistingContent();
    // Set static field: static public JetBrains.Annotations.CollectionAccessType ModifyExistingContent
    static void _set_ModifyExistingContent(JetBrains::Annotations::CollectionAccessType value);
    // static field const value: static public JetBrains.Annotations.CollectionAccessType UpdatedContent
    static constexpr const int UpdatedContent = 6;
    // Get static field: static public JetBrains.Annotations.CollectionAccessType UpdatedContent
    static JetBrains::Annotations::CollectionAccessType _get_UpdatedContent();
    // Set static field: static public JetBrains.Annotations.CollectionAccessType UpdatedContent
    static void _set_UpdatedContent(JetBrains::Annotations::CollectionAccessType value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // JetBrains.Annotations.CollectionAccessType
  #pragma pack(pop)
  static check_size<sizeof(CollectionAccessType), 0 + sizeof(int)> __JetBrains_Annotations_CollectionAccessTypeSizeCheck;
  static_assert(sizeof(CollectionAccessType) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(JetBrains::Annotations::CollectionAccessType, "JetBrains.Annotations", "CollectionAccessType");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
