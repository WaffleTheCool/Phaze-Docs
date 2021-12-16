// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: MasterServerQuickPlaySetupData/QuickPlaySongPacksOverride
#include "GlobalNamespace/MasterServerQuickPlaySetupData_QuickPlaySongPacksOverride.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: MasterServerQuickPlaySetupData/QuickPlaySongPacksOverride/PredefinedPack
  // [TokenAttribute] Offset: FFFFFFFF
  class MasterServerQuickPlaySetupData::QuickPlaySongPacksOverride::PredefinedPack : public ::Il2CppObject {
    public:
    // public System.Int32 order
    // Size: 0x4
    // Offset: 0x10
    int order;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: order and: packId
    char __padding0[0x4] = {};
    // public System.String packId
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppString* packId;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // Creating value type constructor for type: PredefinedPack
    PredefinedPack(int order_ = {}, ::Il2CppString* packId_ = {}) noexcept : order{order_}, packId{packId_} {}
    // Get instance field reference: public System.Int32 order
    int& dyn_order();
    // Get instance field reference: public System.String packId
    ::Il2CppString*& dyn_packId();
    // public System.Void .ctor()
    // Offset: 0x11A72C4
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MasterServerQuickPlaySetupData::QuickPlaySongPacksOverride::PredefinedPack* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MasterServerQuickPlaySetupData::QuickPlaySongPacksOverride::PredefinedPack::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MasterServerQuickPlaySetupData::QuickPlaySongPacksOverride::PredefinedPack*, creationType>()));
    }
  }; // MasterServerQuickPlaySetupData/QuickPlaySongPacksOverride/PredefinedPack
  #pragma pack(pop)
  static check_size<sizeof(MasterServerQuickPlaySetupData::QuickPlaySongPacksOverride::PredefinedPack), 24 + sizeof(::Il2CppString*)> __GlobalNamespace_MasterServerQuickPlaySetupData_QuickPlaySongPacksOverride_PredefinedPackSizeCheck;
  static_assert(sizeof(MasterServerQuickPlaySetupData::QuickPlaySongPacksOverride::PredefinedPack) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MasterServerQuickPlaySetupData::QuickPlaySongPacksOverride::PredefinedPack*, "", "MasterServerQuickPlaySetupData/QuickPlaySongPacksOverride/PredefinedPack");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MasterServerQuickPlaySetupData::QuickPlaySongPacksOverride::PredefinedPack::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
