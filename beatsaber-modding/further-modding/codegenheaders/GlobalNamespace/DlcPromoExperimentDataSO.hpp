// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.ScriptableObject
#include "UnityEngine/ScriptableObject.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: AbTestExperimentDefinitionSO
  class AbTestExperimentDefinitionSO;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x44
  #pragma pack(push, 1)
  // Autogenerated type: DlcPromoExperimentDataSO
  // [TokenAttribute] Offset: FFFFFFFF
  class DlcPromoExperimentDataSO : public UnityEngine::ScriptableObject {
    public:
    // Nested type: GlobalNamespace::DlcPromoExperimentDataSO::MusicPackPromoInfo
    class MusicPackPromoInfo;
    // private System.Int32 _defaultMusicPackPromoIndex
    // Size: 0x4
    // Offset: 0x18
    int defaultMusicPackPromoIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: defaultMusicPackPromoIndex and: musicPackPromoInfos
    char __padding0[0x4] = {};
    // private DlcPromoExperimentDataSO/MusicPackPromoInfo[] _musicPackPromoInfos
    // Size: 0x8
    // Offset: 0x20
    ::Array<GlobalNamespace::DlcPromoExperimentDataSO::MusicPackPromoInfo*>* musicPackPromoInfos;
    // Field size check
    static_assert(sizeof(::Array<GlobalNamespace::DlcPromoExperimentDataSO::MusicPackPromoInfo*>*) == 0x8);
    // private AbTestExperimentDefinitionSO _newDlcControlAbTestExperimentDefinition
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::AbTestExperimentDefinitionSO* newDlcControlAbTestExperimentDefinition;
    // Field size check
    static_assert(sizeof(GlobalNamespace::AbTestExperimentDefinitionSO*) == 0x8);
    // private AbTestExperimentDefinitionSO _newDlcPromoAbTestExperimentDefinition
    // Size: 0x8
    // Offset: 0x30
    GlobalNamespace::AbTestExperimentDefinitionSO* newDlcPromoAbTestExperimentDefinition;
    // Field size check
    static_assert(sizeof(GlobalNamespace::AbTestExperimentDefinitionSO*) == 0x8);
    // private System.Int32 _cutOffTest1
    // Size: 0x4
    // Offset: 0x38
    int cutOffTest1;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 _cutOffTest2
    // Size: 0x4
    // Offset: 0x3C
    int cutOffTest2;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 _minNumberOfNotOwnedPacks
    // Size: 0x4
    // Offset: 0x40
    int minNumberOfNotOwnedPacks;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: DlcPromoExperimentDataSO
    DlcPromoExperimentDataSO(int defaultMusicPackPromoIndex_ = {}, ::Array<GlobalNamespace::DlcPromoExperimentDataSO::MusicPackPromoInfo*>* musicPackPromoInfos_ = {}, GlobalNamespace::AbTestExperimentDefinitionSO* newDlcControlAbTestExperimentDefinition_ = {}, GlobalNamespace::AbTestExperimentDefinitionSO* newDlcPromoAbTestExperimentDefinition_ = {}, int cutOffTest1_ = {}, int cutOffTest2_ = {}, int minNumberOfNotOwnedPacks_ = {}) noexcept : defaultMusicPackPromoIndex{defaultMusicPackPromoIndex_}, musicPackPromoInfos{musicPackPromoInfos_}, newDlcControlAbTestExperimentDefinition{newDlcControlAbTestExperimentDefinition_}, newDlcPromoAbTestExperimentDefinition{newDlcPromoAbTestExperimentDefinition_}, cutOffTest1{cutOffTest1_}, cutOffTest2{cutOffTest2_}, minNumberOfNotOwnedPacks{minNumberOfNotOwnedPacks_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get instance field reference: private System.Int32 _defaultMusicPackPromoIndex
    int& dyn__defaultMusicPackPromoIndex();
    // Get instance field reference: private DlcPromoExperimentDataSO/MusicPackPromoInfo[] _musicPackPromoInfos
    ::Array<GlobalNamespace::DlcPromoExperimentDataSO::MusicPackPromoInfo*>*& dyn__musicPackPromoInfos();
    // Get instance field reference: private AbTestExperimentDefinitionSO _newDlcControlAbTestExperimentDefinition
    GlobalNamespace::AbTestExperimentDefinitionSO*& dyn__newDlcControlAbTestExperimentDefinition();
    // Get instance field reference: private AbTestExperimentDefinitionSO _newDlcPromoAbTestExperimentDefinition
    GlobalNamespace::AbTestExperimentDefinitionSO*& dyn__newDlcPromoAbTestExperimentDefinition();
    // Get instance field reference: private System.Int32 _cutOffTest1
    int& dyn__cutOffTest1();
    // Get instance field reference: private System.Int32 _cutOffTest2
    int& dyn__cutOffTest2();
    // Get instance field reference: private System.Int32 _minNumberOfNotOwnedPacks
    int& dyn__minNumberOfNotOwnedPacks();
    // public System.Int32 get_cutOffTest1()
    // Offset: 0x10EFF70
    int get_cutOffTest1();
    // public System.Int32 get_cutOffTest2()
    // Offset: 0x10EFF78
    int get_cutOffTest2();
    // public System.Int32 get_minNumberOfNotOwnedPacks()
    // Offset: 0x10EFF80
    int get_minNumberOfNotOwnedPacks();
    // public DlcPromoExperimentDataSO/MusicPackPromoInfo[] get_musicPackPromoInfos()
    // Offset: 0x10EFF88
    ::Array<GlobalNamespace::DlcPromoExperimentDataSO::MusicPackPromoInfo*>* get_musicPackPromoInfos();
    // public DlcPromoExperimentDataSO/MusicPackPromoInfo get_defaultMusicPackPromo()
    // Offset: 0x10EFF90
    GlobalNamespace::DlcPromoExperimentDataSO::MusicPackPromoInfo* get_defaultMusicPackPromo();
    // public AbTestExperimentDefinitionSO get_newDlcControlAbTestExperimentDefinition()
    // Offset: 0x10EFFD0
    GlobalNamespace::AbTestExperimentDefinitionSO* get_newDlcControlAbTestExperimentDefinition();
    // public AbTestExperimentDefinitionSO get_newDlcPromoAbTestExperimentDefinition()
    // Offset: 0x10EFFD8
    GlobalNamespace::AbTestExperimentDefinitionSO* get_newDlcPromoAbTestExperimentDefinition();
    // public System.Void .ctor()
    // Offset: 0x10EFFE0
    // Implemented from: UnityEngine.ScriptableObject
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DlcPromoExperimentDataSO* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::DlcPromoExperimentDataSO::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DlcPromoExperimentDataSO*, creationType>()));
    }
  }; // DlcPromoExperimentDataSO
  #pragma pack(pop)
  static check_size<sizeof(DlcPromoExperimentDataSO), 64 + sizeof(int)> __GlobalNamespace_DlcPromoExperimentDataSOSizeCheck;
  static_assert(sizeof(DlcPromoExperimentDataSO) == 0x44);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::DlcPromoExperimentDataSO*, "", "DlcPromoExperimentDataSO");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::DlcPromoExperimentDataSO::get_cutOffTest1
// Il2CppName: get_cutOffTest1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::DlcPromoExperimentDataSO::*)()>(&GlobalNamespace::DlcPromoExperimentDataSO::get_cutOffTest1)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::DlcPromoExperimentDataSO*), "get_cutOffTest1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::DlcPromoExperimentDataSO::get_cutOffTest2
// Il2CppName: get_cutOffTest2
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::DlcPromoExperimentDataSO::*)()>(&GlobalNamespace::DlcPromoExperimentDataSO::get_cutOffTest2)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::DlcPromoExperimentDataSO*), "get_cutOffTest2", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::DlcPromoExperimentDataSO::get_minNumberOfNotOwnedPacks
// Il2CppName: get_minNumberOfNotOwnedPacks
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::DlcPromoExperimentDataSO::*)()>(&GlobalNamespace::DlcPromoExperimentDataSO::get_minNumberOfNotOwnedPacks)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::DlcPromoExperimentDataSO*), "get_minNumberOfNotOwnedPacks", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::DlcPromoExperimentDataSO::get_musicPackPromoInfos
// Il2CppName: get_musicPackPromoInfos
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<GlobalNamespace::DlcPromoExperimentDataSO::MusicPackPromoInfo*>* (GlobalNamespace::DlcPromoExperimentDataSO::*)()>(&GlobalNamespace::DlcPromoExperimentDataSO::get_musicPackPromoInfos)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::DlcPromoExperimentDataSO*), "get_musicPackPromoInfos", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::DlcPromoExperimentDataSO::get_defaultMusicPackPromo
// Il2CppName: get_defaultMusicPackPromo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::DlcPromoExperimentDataSO::MusicPackPromoInfo* (GlobalNamespace::DlcPromoExperimentDataSO::*)()>(&GlobalNamespace::DlcPromoExperimentDataSO::get_defaultMusicPackPromo)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::DlcPromoExperimentDataSO*), "get_defaultMusicPackPromo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::DlcPromoExperimentDataSO::get_newDlcControlAbTestExperimentDefinition
// Il2CppName: get_newDlcControlAbTestExperimentDefinition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::AbTestExperimentDefinitionSO* (GlobalNamespace::DlcPromoExperimentDataSO::*)()>(&GlobalNamespace::DlcPromoExperimentDataSO::get_newDlcControlAbTestExperimentDefinition)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::DlcPromoExperimentDataSO*), "get_newDlcControlAbTestExperimentDefinition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::DlcPromoExperimentDataSO::get_newDlcPromoAbTestExperimentDefinition
// Il2CppName: get_newDlcPromoAbTestExperimentDefinition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::AbTestExperimentDefinitionSO* (GlobalNamespace::DlcPromoExperimentDataSO::*)()>(&GlobalNamespace::DlcPromoExperimentDataSO::get_newDlcPromoAbTestExperimentDefinition)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::DlcPromoExperimentDataSO*), "get_newDlcPromoAbTestExperimentDefinition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::DlcPromoExperimentDataSO::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
