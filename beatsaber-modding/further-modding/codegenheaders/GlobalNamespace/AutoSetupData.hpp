// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x14
  #pragma pack(push, 1)
  // Autogenerated type: AutoSetupData
  // [TokenAttribute] Offset: FFFFFFFF
  class AutoSetupData : public ::Il2CppObject {
    public:
    // public System.Boolean selectBasedOnSuggestions
    // Size: 0x1
    // Offset: 0x10
    bool selectBasedOnSuggestions;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean autoStartWhenAllReady
    // Size: 0x1
    // Offset: 0x11
    bool autoStartWhenAllReady;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean forceAutoStartAfterSongSelection
    // Size: 0x1
    // Offset: 0x12
    bool forceAutoStartAfterSongSelection;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean randomSongIfNoneSuggested
    // Size: 0x1
    // Offset: 0x13
    bool randomSongIfNoneSuggested;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: AutoSetupData
    AutoSetupData(bool selectBasedOnSuggestions_ = {}, bool autoStartWhenAllReady_ = {}, bool forceAutoStartAfterSongSelection_ = {}, bool randomSongIfNoneSuggested_ = {}) noexcept : selectBasedOnSuggestions{selectBasedOnSuggestions_}, autoStartWhenAllReady{autoStartWhenAllReady_}, forceAutoStartAfterSongSelection{forceAutoStartAfterSongSelection_}, randomSongIfNoneSuggested{randomSongIfNoneSuggested_} {}
    // Get instance field reference: public System.Boolean selectBasedOnSuggestions
    bool& dyn_selectBasedOnSuggestions();
    // Get instance field reference: public System.Boolean autoStartWhenAllReady
    bool& dyn_autoStartWhenAllReady();
    // Get instance field reference: public System.Boolean forceAutoStartAfterSongSelection
    bool& dyn_forceAutoStartAfterSongSelection();
    // Get instance field reference: public System.Boolean randomSongIfNoneSuggested
    bool& dyn_randomSongIfNoneSuggested();
    // public System.Void .ctor()
    // Offset: 0x1178EFC
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AutoSetupData* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::AutoSetupData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AutoSetupData*, creationType>()));
    }
  }; // AutoSetupData
  #pragma pack(pop)
  static check_size<sizeof(AutoSetupData), 19 + sizeof(bool)> __GlobalNamespace_AutoSetupDataSizeCheck;
  static_assert(sizeof(AutoSetupData) == 0x14);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::AutoSetupData*, "", "AutoSetupData");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::AutoSetupData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
