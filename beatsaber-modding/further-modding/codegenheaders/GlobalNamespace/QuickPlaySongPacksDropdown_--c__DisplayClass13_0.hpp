// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: QuickPlaySongPacksDropdown
#include "GlobalNamespace/QuickPlaySongPacksDropdown.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: QuickPlaySongPacksDropdown/<>c__DisplayClass13_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class QuickPlaySongPacksDropdown::$$c__DisplayClass13_0 : public ::Il2CppObject {
    public:
    // public System.String serializedName
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* serializedName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // Creating value type constructor for type: $$c__DisplayClass13_0
    $$c__DisplayClass13_0(::Il2CppString* serializedName_ = {}) noexcept : serializedName{serializedName_} {}
    // Creating conversion operator: operator ::Il2CppString*
    constexpr operator ::Il2CppString*() const noexcept {
      return serializedName;
    }
    // Get instance field reference: public System.String serializedName
    ::Il2CppString*& dyn_serializedName();
    // System.Boolean <SelectCellWithSerializedName>b__0(QuickPlaySongPacksDropdown/SongPackMaskItem item)
    // Offset: 0x11269E4
    bool $SelectCellWithSerializedName$b__0(GlobalNamespace::QuickPlaySongPacksDropdown::SongPackMaskItem* item);
    // public System.Void .ctor()
    // Offset: 0x11265B8
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static QuickPlaySongPacksDropdown::$$c__DisplayClass13_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::QuickPlaySongPacksDropdown::$$c__DisplayClass13_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<QuickPlaySongPacksDropdown::$$c__DisplayClass13_0*, creationType>()));
    }
  }; // QuickPlaySongPacksDropdown/<>c__DisplayClass13_0
  #pragma pack(pop)
  static check_size<sizeof(QuickPlaySongPacksDropdown::$$c__DisplayClass13_0), 16 + sizeof(::Il2CppString*)> __GlobalNamespace_QuickPlaySongPacksDropdown_$$c__DisplayClass13_0SizeCheck;
  static_assert(sizeof(QuickPlaySongPacksDropdown::$$c__DisplayClass13_0) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::QuickPlaySongPacksDropdown::$$c__DisplayClass13_0*, "", "QuickPlaySongPacksDropdown/<>c__DisplayClass13_0");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::QuickPlaySongPacksDropdown::$$c__DisplayClass13_0::$SelectCellWithSerializedName$b__0
// Il2CppName: <SelectCellWithSerializedName>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::QuickPlaySongPacksDropdown::$$c__DisplayClass13_0::*)(GlobalNamespace::QuickPlaySongPacksDropdown::SongPackMaskItem*)>(&GlobalNamespace::QuickPlaySongPacksDropdown::$$c__DisplayClass13_0::$SelectCellWithSerializedName$b__0)> {
  static const MethodInfo* get() {
    static auto* item = &::il2cpp_utils::GetClassFromName("", "QuickPlaySongPacksDropdown/SongPackMaskItem")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::QuickPlaySongPacksDropdown::$$c__DisplayClass13_0*), "<SelectCellWithSerializedName>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{item});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::QuickPlaySongPacksDropdown::$$c__DisplayClass13_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
