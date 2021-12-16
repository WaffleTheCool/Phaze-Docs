// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: SteamLevelProductsModelSO
#include "GlobalNamespace/SteamLevelProductsModelSO.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: SteamLevelProductsModelSO/LevelPackProductData
  // [TokenAttribute] Offset: FFFFFFFF
  class SteamLevelProductsModelSO::LevelPackProductData : public ::Il2CppObject {
    public:
    // private System.UInt32 _bundleId
    // Size: 0x4
    // Offset: 0x10
    uint bundleId;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // Padding between fields: bundleId and: levelPackId
    char __padding0[0x4] = {};
    // private System.String _levelPackId
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppString* levelPackId;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private SteamLevelProductsModelSO/LevelProductData[] _levelProductsData
    // Size: 0x8
    // Offset: 0x20
    ::Array<GlobalNamespace::SteamLevelProductsModelSO::LevelProductData*>* levelProductsData;
    // Field size check
    static_assert(sizeof(::Array<GlobalNamespace::SteamLevelProductsModelSO::LevelProductData*>*) == 0x8);
    // Creating value type constructor for type: LevelPackProductData
    LevelPackProductData(uint bundleId_ = {}, ::Il2CppString* levelPackId_ = {}, ::Array<GlobalNamespace::SteamLevelProductsModelSO::LevelProductData*>* levelProductsData_ = {}) noexcept : bundleId{bundleId_}, levelPackId{levelPackId_}, levelProductsData{levelProductsData_} {}
    // Get instance field reference: private System.UInt32 _bundleId
    uint& dyn__bundleId();
    // Get instance field reference: private System.String _levelPackId
    ::Il2CppString*& dyn__levelPackId();
    // Get instance field reference: private SteamLevelProductsModelSO/LevelProductData[] _levelProductsData
    ::Array<GlobalNamespace::SteamLevelProductsModelSO::LevelProductData*>*& dyn__levelProductsData();
    // public System.UInt32 get_bundleId()
    // Offset: 0x106A380
    uint get_bundleId();
    // public System.String get_levelPackId()
    // Offset: 0x106A388
    ::Il2CppString* get_levelPackId();
    // public SteamLevelProductsModelSO/LevelProductData[] get_levelProductsData()
    // Offset: 0x106A390
    ::Array<GlobalNamespace::SteamLevelProductsModelSO::LevelProductData*>* get_levelProductsData();
    // public System.Void .ctor()
    // Offset: 0x106A398
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SteamLevelProductsModelSO::LevelPackProductData* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::SteamLevelProductsModelSO::LevelPackProductData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SteamLevelProductsModelSO::LevelPackProductData*, creationType>()));
    }
  }; // SteamLevelProductsModelSO/LevelPackProductData
  #pragma pack(pop)
  static check_size<sizeof(SteamLevelProductsModelSO::LevelPackProductData), 32 + sizeof(::Array<GlobalNamespace::SteamLevelProductsModelSO::LevelProductData*>*)> __GlobalNamespace_SteamLevelProductsModelSO_LevelPackProductDataSizeCheck;
  static_assert(sizeof(SteamLevelProductsModelSO::LevelPackProductData) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SteamLevelProductsModelSO::LevelPackProductData*, "", "SteamLevelProductsModelSO/LevelPackProductData");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::SteamLevelProductsModelSO::LevelPackProductData::get_bundleId
// Il2CppName: get_bundleId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (GlobalNamespace::SteamLevelProductsModelSO::LevelPackProductData::*)()>(&GlobalNamespace::SteamLevelProductsModelSO::LevelPackProductData::get_bundleId)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamLevelProductsModelSO::LevelPackProductData*), "get_bundleId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamLevelProductsModelSO::LevelPackProductData::get_levelPackId
// Il2CppName: get_levelPackId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (GlobalNamespace::SteamLevelProductsModelSO::LevelPackProductData::*)()>(&GlobalNamespace::SteamLevelProductsModelSO::LevelPackProductData::get_levelPackId)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamLevelProductsModelSO::LevelPackProductData*), "get_levelPackId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamLevelProductsModelSO::LevelPackProductData::get_levelProductsData
// Il2CppName: get_levelProductsData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<GlobalNamespace::SteamLevelProductsModelSO::LevelProductData*>* (GlobalNamespace::SteamLevelProductsModelSO::LevelPackProductData::*)()>(&GlobalNamespace::SteamLevelProductsModelSO::LevelPackProductData::get_levelProductsData)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamLevelProductsModelSO::LevelPackProductData*), "get_levelProductsData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamLevelProductsModelSO::LevelPackProductData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
