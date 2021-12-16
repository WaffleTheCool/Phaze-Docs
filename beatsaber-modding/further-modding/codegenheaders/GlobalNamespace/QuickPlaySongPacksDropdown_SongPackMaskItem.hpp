// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: QuickPlaySongPacksDropdown
#include "GlobalNamespace/QuickPlaySongPacksDropdown.hpp"
// Including type: SongPackMask
#include "GlobalNamespace/SongPackMask.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: QuickPlaySongPacksDropdown/SongPackMaskItem
  // [TokenAttribute] Offset: FFFFFFFF
  class QuickPlaySongPacksDropdown::SongPackMaskItem : public ::Il2CppObject {
    public:
    // public System.String serializedName
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* serializedName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public System.String localizedName
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppString* localizedName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public System.Int32 order
    // Size: 0x4
    // Offset: 0x20
    int order;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: order and: songPackMask
    char __padding2[0x4] = {};
    // public SongPackMask songPackMask
    // Size: 0x10
    // Offset: 0x28
    GlobalNamespace::SongPackMask songPackMask;
    // Field size check
    static_assert(sizeof(GlobalNamespace::SongPackMask) == 0x10);
    // Creating value type constructor for type: SongPackMaskItem
    SongPackMaskItem(::Il2CppString* serializedName_ = {}, ::Il2CppString* localizedName_ = {}, int order_ = {}, GlobalNamespace::SongPackMask songPackMask_ = {}) noexcept : serializedName{serializedName_}, localizedName{localizedName_}, order{order_}, songPackMask{songPackMask_} {}
    // Get instance field reference: public System.String serializedName
    ::Il2CppString*& dyn_serializedName();
    // Get instance field reference: public System.String localizedName
    ::Il2CppString*& dyn_localizedName();
    // Get instance field reference: public System.Int32 order
    int& dyn_order();
    // Get instance field reference: public SongPackMask songPackMask
    GlobalNamespace::SongPackMask& dyn_songPackMask();
    // public System.Void .ctor()
    // Offset: 0x11266DC
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static QuickPlaySongPacksDropdown::SongPackMaskItem* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::QuickPlaySongPacksDropdown::SongPackMaskItem::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<QuickPlaySongPacksDropdown::SongPackMaskItem*, creationType>()));
    }
  }; // QuickPlaySongPacksDropdown/SongPackMaskItem
  #pragma pack(pop)
  static check_size<sizeof(QuickPlaySongPacksDropdown::SongPackMaskItem), 40 + sizeof(GlobalNamespace::SongPackMask)> __GlobalNamespace_QuickPlaySongPacksDropdown_SongPackMaskItemSizeCheck;
  static_assert(sizeof(QuickPlaySongPacksDropdown::SongPackMaskItem) == 0x38);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::QuickPlaySongPacksDropdown::SongPackMaskItem*, "", "QuickPlaySongPacksDropdown/SongPackMaskItem");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::QuickPlaySongPacksDropdown::SongPackMaskItem::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
