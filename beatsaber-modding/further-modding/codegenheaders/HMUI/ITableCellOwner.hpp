// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: HMUI
namespace HMUI {
  // Forward declaring type: TableViewSelectionType
  struct TableViewSelectionType;
}
// Completed forward declares
// Type namespace: HMUI
namespace HMUI {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: HMUI.ITableCellOwner
  // [TokenAttribute] Offset: FFFFFFFF
  class ITableCellOwner {
    public:
    // Creating value type constructor for type: ITableCellOwner
    ITableCellOwner() noexcept {}
    // public HMUI.TableViewSelectionType get_selectionType()
    // Offset: 0xFFFFFFFF
    HMUI::TableViewSelectionType get_selectionType();
    // public System.Boolean get_canSelectSelectedCell()
    // Offset: 0xFFFFFFFF
    bool get_canSelectSelectedCell();
    // public System.Int32 get_numberOfCells()
    // Offset: 0xFFFFFFFF
    int get_numberOfCells();
  }; // HMUI.ITableCellOwner
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(HMUI::ITableCellOwner*, "HMUI", "ITableCellOwner");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: HMUI::ITableCellOwner::get_selectionType
// Il2CppName: get_selectionType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<HMUI::TableViewSelectionType (HMUI::ITableCellOwner::*)()>(&HMUI::ITableCellOwner::get_selectionType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::ITableCellOwner*), "get_selectionType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HMUI::ITableCellOwner::get_canSelectSelectedCell
// Il2CppName: get_canSelectSelectedCell
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (HMUI::ITableCellOwner::*)()>(&HMUI::ITableCellOwner::get_canSelectSelectedCell)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::ITableCellOwner*), "get_canSelectSelectedCell", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HMUI::ITableCellOwner::get_numberOfCells
// Il2CppName: get_numberOfCells
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (HMUI::ITableCellOwner::*)()>(&HMUI::ITableCellOwner::get_numberOfCells)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::ITableCellOwner*), "get_numberOfCells", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
