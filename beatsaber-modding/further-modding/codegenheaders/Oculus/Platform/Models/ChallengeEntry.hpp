// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.DateTime
#include "System/DateTime.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Oculus::Platform::Models
namespace Oculus::Platform::Models {
  // Forward declaring type: User
  class User;
}
// Completed forward declares
// Type namespace: Oculus.Platform.Models
namespace Oculus::Platform::Models {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Platform.Models.ChallengeEntry
  // [TokenAttribute] Offset: FFFFFFFF
  class ChallengeEntry : public ::Il2CppObject {
    public:
    // public readonly System.String DisplayScore
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* DisplayScore;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public readonly System.Byte[] ExtraData
    // Size: 0x8
    // Offset: 0x18
    ::Array<uint8_t>* ExtraData;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // public readonly System.Int32 Rank
    // Size: 0x4
    // Offset: 0x20
    int Rank;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: Rank and: Score
    char __padding2[0x4] = {};
    // public readonly System.Int64 Score
    // Size: 0x8
    // Offset: 0x28
    int64_t Score;
    // Field size check
    static_assert(sizeof(int64_t) == 0x8);
    // public readonly System.DateTime Timestamp
    // Size: 0x8
    // Offset: 0x30
    System::DateTime Timestamp;
    // Field size check
    static_assert(sizeof(System::DateTime) == 0x8);
    // public readonly Oculus.Platform.Models.User User
    // Size: 0x8
    // Offset: 0x38
    Oculus::Platform::Models::User* User;
    // Field size check
    static_assert(sizeof(Oculus::Platform::Models::User*) == 0x8);
    // Creating value type constructor for type: ChallengeEntry
    ChallengeEntry(::Il2CppString* DisplayScore_ = {}, ::Array<uint8_t>* ExtraData_ = {}, int Rank_ = {}, int64_t Score_ = {}, System::DateTime Timestamp_ = {}, Oculus::Platform::Models::User* User_ = {}) noexcept : DisplayScore{DisplayScore_}, ExtraData{ExtraData_}, Rank{Rank_}, Score{Score_}, Timestamp{Timestamp_}, User{User_} {}
    // Get instance field reference: public readonly System.String DisplayScore
    ::Il2CppString*& dyn_DisplayScore();
    // Get instance field reference: public readonly System.Byte[] ExtraData
    ::Array<uint8_t>*& dyn_ExtraData();
    // Get instance field reference: public readonly System.Int32 Rank
    int& dyn_Rank();
    // Get instance field reference: public readonly System.Int64 Score
    int64_t& dyn_Score();
    // Get instance field reference: public readonly System.DateTime Timestamp
    System::DateTime& dyn_Timestamp();
    // Get instance field reference: public readonly Oculus.Platform.Models.User User
    Oculus::Platform::Models::User*& dyn_User();
    // public System.Void .ctor(System.IntPtr o)
    // Offset: 0x1535F28
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ChallengeEntry* New_ctor(System::IntPtr o) {
      static auto ___internal__logger = ::Logger::get().WithContext("Oculus::Platform::Models::ChallengeEntry::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ChallengeEntry*, creationType>(o)));
    }
  }; // Oculus.Platform.Models.ChallengeEntry
  #pragma pack(pop)
  static check_size<sizeof(ChallengeEntry), 56 + sizeof(Oculus::Platform::Models::User*)> __Oculus_Platform_Models_ChallengeEntrySizeCheck;
  static_assert(sizeof(ChallengeEntry) == 0x40);
}
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::Models::ChallengeEntry*, "Oculus.Platform.Models", "ChallengeEntry");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Platform::Models::ChallengeEntry::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
