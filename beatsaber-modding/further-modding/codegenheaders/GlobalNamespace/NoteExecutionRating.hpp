// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: BeatmapObjectExecutionRating
#include "GlobalNamespace/BeatmapObjectExecutionRating.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Skipping declaration: Rating because it is already included!
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x2C
  #pragma pack(push, 1)
  // Autogenerated type: NoteExecutionRating
  // [TokenAttribute] Offset: FFFFFFFF
  class NoteExecutionRating : public GlobalNamespace::BeatmapObjectExecutionRating {
    public:
    // Nested type: GlobalNamespace::NoteExecutionRating::Rating
    struct Rating;
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: NoteExecutionRating/Rating
    // [TokenAttribute] Offset: FFFFFFFF
    struct Rating/*, public System::Enum*/ {
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      // Creating value type constructor for type: Rating
      constexpr Rating(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator System::Enum
      operator System::Enum() noexcept {
        return *reinterpret_cast<System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public NoteExecutionRating/Rating GoodCut
      static constexpr const int GoodCut = 0;
      // Get static field: static public NoteExecutionRating/Rating GoodCut
      static GlobalNamespace::NoteExecutionRating::Rating _get_GoodCut();
      // Set static field: static public NoteExecutionRating/Rating GoodCut
      static void _set_GoodCut(GlobalNamespace::NoteExecutionRating::Rating value);
      // static field const value: static public NoteExecutionRating/Rating Missed
      static constexpr const int Missed = 1;
      // Get static field: static public NoteExecutionRating/Rating Missed
      static GlobalNamespace::NoteExecutionRating::Rating _get_Missed();
      // Set static field: static public NoteExecutionRating/Rating Missed
      static void _set_Missed(GlobalNamespace::NoteExecutionRating::Rating value);
      // static field const value: static public NoteExecutionRating/Rating BadCut
      static constexpr const int BadCut = 2;
      // Get static field: static public NoteExecutionRating/Rating BadCut
      static GlobalNamespace::NoteExecutionRating::Rating _get_BadCut();
      // Set static field: static public NoteExecutionRating/Rating BadCut
      static void _set_BadCut(GlobalNamespace::NoteExecutionRating::Rating value);
      // Get instance field reference: public System.Int32 value__
      int& dyn_value__();
    }; // NoteExecutionRating/Rating
    #pragma pack(pop)
    static check_size<sizeof(NoteExecutionRating::Rating), 0 + sizeof(int)> __GlobalNamespace_NoteExecutionRating_RatingSizeCheck;
    static_assert(sizeof(NoteExecutionRating::Rating) == 0x4);
    // private NoteExecutionRating/Rating <rating>k__BackingField
    // Size: 0x4
    // Offset: 0x18
    GlobalNamespace::NoteExecutionRating::Rating rating;
    // Field size check
    static_assert(sizeof(GlobalNamespace::NoteExecutionRating::Rating) == 0x4);
    // private System.Int32 <cutScore>k__BackingField
    // Size: 0x4
    // Offset: 0x1C
    int cutScore;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 <cutDistanceScore>k__BackingField
    // Size: 0x4
    // Offset: 0x20
    int cutDistanceScore;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Single <cutTimeDeviation>k__BackingField
    // Size: 0x4
    // Offset: 0x24
    float cutTimeDeviation;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single <cutDirDeviation>k__BackingField
    // Size: 0x4
    // Offset: 0x28
    float cutDirDeviation;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Creating value type constructor for type: NoteExecutionRating
    NoteExecutionRating(GlobalNamespace::NoteExecutionRating::Rating rating_ = {}, int cutScore_ = {}, int cutDistanceScore_ = {}, float cutTimeDeviation_ = {}, float cutDirDeviation_ = {}) noexcept : rating{rating_}, cutScore{cutScore_}, cutDistanceScore{cutDistanceScore_}, cutTimeDeviation{cutTimeDeviation_}, cutDirDeviation{cutDirDeviation_} {}
    // Get instance field reference: private NoteExecutionRating/Rating <rating>k__BackingField
    GlobalNamespace::NoteExecutionRating::Rating& dyn_$rating$k__BackingField();
    // Get instance field reference: private System.Int32 <cutScore>k__BackingField
    int& dyn_$cutScore$k__BackingField();
    // Get instance field reference: private System.Int32 <cutDistanceScore>k__BackingField
    int& dyn_$cutDistanceScore$k__BackingField();
    // Get instance field reference: private System.Single <cutTimeDeviation>k__BackingField
    float& dyn_$cutTimeDeviation$k__BackingField();
    // Get instance field reference: private System.Single <cutDirDeviation>k__BackingField
    float& dyn_$cutDirDeviation$k__BackingField();
    // public NoteExecutionRating/Rating get_rating()
    // Offset: 0x124A09C
    GlobalNamespace::NoteExecutionRating::Rating get_rating();
    // public System.Void set_rating(NoteExecutionRating/Rating value)
    // Offset: 0x124A0A4
    void set_rating(GlobalNamespace::NoteExecutionRating::Rating value);
    // public System.Int32 get_cutScore()
    // Offset: 0x124A0AC
    int get_cutScore();
    // public System.Void set_cutScore(System.Int32 value)
    // Offset: 0x124A0B4
    void set_cutScore(int value);
    // public System.Int32 get_cutDistanceScore()
    // Offset: 0x124A0BC
    int get_cutDistanceScore();
    // public System.Void set_cutDistanceScore(System.Int32 value)
    // Offset: 0x124A0C4
    void set_cutDistanceScore(int value);
    // public System.Single get_cutTimeDeviation()
    // Offset: 0x124A0CC
    float get_cutTimeDeviation();
    // public System.Void set_cutTimeDeviation(System.Single value)
    // Offset: 0x124A0D4
    void set_cutTimeDeviation(float value);
    // public System.Single get_cutDirDeviation()
    // Offset: 0x124A0DC
    float get_cutDirDeviation();
    // public System.Void set_cutDirDeviation(System.Single value)
    // Offset: 0x124A0E4
    void set_cutDirDeviation(float value);
    // public System.Void .ctor(System.Single time, NoteExecutionRating/Rating rating, System.Int32 cutScore, System.Int32 cutDistanceScore, System.Single cutTimeDeviation, System.Single cutDirDeviation)
    // Offset: 0x124A0EC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NoteExecutionRating* New_ctor(float time, GlobalNamespace::NoteExecutionRating::Rating rating, int cutScore, int cutDistanceScore, float cutTimeDeviation, float cutDirDeviation) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::NoteExecutionRating::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NoteExecutionRating*, creationType>(time, rating, cutScore, cutDistanceScore, cutTimeDeviation, cutDirDeviation)));
    }
  }; // NoteExecutionRating
  #pragma pack(pop)
  static check_size<sizeof(NoteExecutionRating), 40 + sizeof(float)> __GlobalNamespace_NoteExecutionRatingSizeCheck;
  static_assert(sizeof(NoteExecutionRating) == 0x2C);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::NoteExecutionRating*, "", "NoteExecutionRating");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::NoteExecutionRating::Rating, "", "NoteExecutionRating/Rating");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::NoteExecutionRating::get_rating
// Il2CppName: get_rating
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::NoteExecutionRating::Rating (GlobalNamespace::NoteExecutionRating::*)()>(&GlobalNamespace::NoteExecutionRating::get_rating)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NoteExecutionRating*), "get_rating", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NoteExecutionRating::set_rating
// Il2CppName: set_rating
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NoteExecutionRating::*)(GlobalNamespace::NoteExecutionRating::Rating)>(&GlobalNamespace::NoteExecutionRating::set_rating)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("", "NoteExecutionRating/Rating")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NoteExecutionRating*), "set_rating", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NoteExecutionRating::get_cutScore
// Il2CppName: get_cutScore
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::NoteExecutionRating::*)()>(&GlobalNamespace::NoteExecutionRating::get_cutScore)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NoteExecutionRating*), "get_cutScore", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NoteExecutionRating::set_cutScore
// Il2CppName: set_cutScore
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NoteExecutionRating::*)(int)>(&GlobalNamespace::NoteExecutionRating::set_cutScore)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NoteExecutionRating*), "set_cutScore", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NoteExecutionRating::get_cutDistanceScore
// Il2CppName: get_cutDistanceScore
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::NoteExecutionRating::*)()>(&GlobalNamespace::NoteExecutionRating::get_cutDistanceScore)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NoteExecutionRating*), "get_cutDistanceScore", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NoteExecutionRating::set_cutDistanceScore
// Il2CppName: set_cutDistanceScore
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NoteExecutionRating::*)(int)>(&GlobalNamespace::NoteExecutionRating::set_cutDistanceScore)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NoteExecutionRating*), "set_cutDistanceScore", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NoteExecutionRating::get_cutTimeDeviation
// Il2CppName: get_cutTimeDeviation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::NoteExecutionRating::*)()>(&GlobalNamespace::NoteExecutionRating::get_cutTimeDeviation)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NoteExecutionRating*), "get_cutTimeDeviation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NoteExecutionRating::set_cutTimeDeviation
// Il2CppName: set_cutTimeDeviation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NoteExecutionRating::*)(float)>(&GlobalNamespace::NoteExecutionRating::set_cutTimeDeviation)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NoteExecutionRating*), "set_cutTimeDeviation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NoteExecutionRating::get_cutDirDeviation
// Il2CppName: get_cutDirDeviation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::NoteExecutionRating::*)()>(&GlobalNamespace::NoteExecutionRating::get_cutDirDeviation)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NoteExecutionRating*), "get_cutDirDeviation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NoteExecutionRating::set_cutDirDeviation
// Il2CppName: set_cutDirDeviation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NoteExecutionRating::*)(float)>(&GlobalNamespace::NoteExecutionRating::set_cutDirDeviation)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NoteExecutionRating*), "set_cutDirDeviation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NoteExecutionRating::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
