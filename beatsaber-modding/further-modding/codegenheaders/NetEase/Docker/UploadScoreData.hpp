// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include <stdint.h>
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Begin il2cpp-utils forward declares
struct Il2CppString;
// Completed il2cpp-utils forward declares
// Type namespace: NetEase.Docker
namespace NetEase::Docker {
  // Size: 0x2C
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: NetEase.Docker.UploadScoreData
  // [TokenAttribute] Offset: FFFFFFFF
  struct UploadScoreData/*, public System::ValueType*/ {
    public:
    // [DebuggerBrowsableAttribute] Offset: 0xE27818
    // private System.String <Track>k__BackingField
    // Size: 0x8
    // Offset: 0x0
    ::Il2CppString* Track;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // [DebuggerBrowsableAttribute] Offset: 0xE27854
    // private System.Int32 <Difficulty>k__BackingField
    // Size: 0x4
    // Offset: 0x8
    int Difficulty;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // [DebuggerBrowsableAttribute] Offset: 0xE27890
    // private System.Int32 <Score>k__BackingField
    // Size: 0x4
    // Offset: 0xC
    int Score;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // [DebuggerBrowsableAttribute] Offset: 0xE278CC
    // private System.Int64 <TimeStamp>k__BackingField
    // Size: 0x8
    // Offset: 0x10
    int64_t TimeStamp;
    // Field size check
    static_assert(sizeof(int64_t) == 0x8);
    // [DebuggerBrowsableAttribute] Offset: 0xE27908
    // private System.Boolean <PlayedUntilEnd>k__BackingField
    // Size: 0x1
    // Offset: 0x18
    bool PlayedUntilEnd;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: PlayedUntilEnd and: AccuracyPercentage
    char __padding4[0x3] = {};
    // [DebuggerBrowsableAttribute] Offset: 0xE27944
    // private System.Single <AccuracyPercentage>k__BackingField
    // Size: 0x4
    // Offset: 0x1C
    float AccuracyPercentage;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [DebuggerBrowsableAttribute] Offset: 0xE27980
    // private System.Int32 <NoOfHits>k__BackingField
    // Size: 0x4
    // Offset: 0x20
    int NoOfHits;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // [DebuggerBrowsableAttribute] Offset: 0xE279BC
    // private System.Int32 <NoOfMisses>k__BackingField
    // Size: 0x4
    // Offset: 0x24
    int NoOfMisses;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // [DebuggerBrowsableAttribute] Offset: 0xE279F8
    // private System.Int32 <NoOfBombsHit>k__BackingField
    // Size: 0x4
    // Offset: 0x28
    int NoOfBombsHit;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: UploadScoreData
    constexpr UploadScoreData(::Il2CppString* Track_ = {}, int Difficulty_ = {}, int Score_ = {}, int64_t TimeStamp_ = {}, bool PlayedUntilEnd_ = {}, float AccuracyPercentage_ = {}, int NoOfHits_ = {}, int NoOfMisses_ = {}, int NoOfBombsHit_ = {}) noexcept : Track{Track_}, Difficulty{Difficulty_}, Score{Score_}, TimeStamp{TimeStamp_}, PlayedUntilEnd{PlayedUntilEnd_}, AccuracyPercentage{AccuracyPercentage_}, NoOfHits{NoOfHits_}, NoOfMisses{NoOfMisses_}, NoOfBombsHit{NoOfBombsHit_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Get instance field reference: private System.String <Track>k__BackingField
    ::Il2CppString*& dyn_$Track$k__BackingField();
    // Get instance field reference: private System.Int32 <Difficulty>k__BackingField
    int& dyn_$Difficulty$k__BackingField();
    // Get instance field reference: private System.Int32 <Score>k__BackingField
    int& dyn_$Score$k__BackingField();
    // Get instance field reference: private System.Int64 <TimeStamp>k__BackingField
    int64_t& dyn_$TimeStamp$k__BackingField();
    // Get instance field reference: private System.Boolean <PlayedUntilEnd>k__BackingField
    bool& dyn_$PlayedUntilEnd$k__BackingField();
    // Get instance field reference: private System.Single <AccuracyPercentage>k__BackingField
    float& dyn_$AccuracyPercentage$k__BackingField();
    // Get instance field reference: private System.Int32 <NoOfHits>k__BackingField
    int& dyn_$NoOfHits$k__BackingField();
    // Get instance field reference: private System.Int32 <NoOfMisses>k__BackingField
    int& dyn_$NoOfMisses$k__BackingField();
    // Get instance field reference: private System.Int32 <NoOfBombsHit>k__BackingField
    int& dyn_$NoOfBombsHit$k__BackingField();
    // public System.Void set_Track(System.String value)
    // Offset: 0x24159A8
    void set_Track(::Il2CppString* value);
    // public System.Void set_Score(System.Int32 value)
    // Offset: 0x24159B0
    void set_Score(int value);
  }; // NetEase.Docker.UploadScoreData
  #pragma pack(pop)
  static check_size<sizeof(UploadScoreData), 40 + sizeof(int)> __NetEase_Docker_UploadScoreDataSizeCheck;
  static_assert(sizeof(UploadScoreData) == 0x2C);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(NetEase::Docker::UploadScoreData, "NetEase.Docker", "UploadScoreData");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: NetEase::Docker::UploadScoreData::set_Track
// Il2CppName: set_Track
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (NetEase::Docker::UploadScoreData::*)(::Il2CppString*)>(&NetEase::Docker::UploadScoreData::set_Track)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NetEase::Docker::UploadScoreData), "set_Track", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: NetEase::Docker::UploadScoreData::set_Score
// Il2CppName: set_Score
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (NetEase::Docker::UploadScoreData::*)(int)>(&NetEase::Docker::UploadScoreData::set_Score)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NetEase::Docker::UploadScoreData), "set_Score", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
