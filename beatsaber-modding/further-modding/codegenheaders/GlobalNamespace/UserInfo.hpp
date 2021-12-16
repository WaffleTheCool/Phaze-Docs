// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: UserInfo
  // [TokenAttribute] Offset: FFFFFFFF
  class UserInfo : public ::Il2CppObject {
    public:
    // Nested type: GlobalNamespace::UserInfo::Platform
    struct Platform;
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: UserInfo/Platform
    // [TokenAttribute] Offset: FFFFFFFF
    struct Platform/*, public System::Enum*/ {
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      // Creating value type constructor for type: Platform
      constexpr Platform(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator System::Enum
      operator System::Enum() noexcept {
        return *reinterpret_cast<System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public UserInfo/Platform Test
      static constexpr const int Test = 0;
      // Get static field: static public UserInfo/Platform Test
      static GlobalNamespace::UserInfo::Platform _get_Test();
      // Set static field: static public UserInfo/Platform Test
      static void _set_Test(GlobalNamespace::UserInfo::Platform value);
      // static field const value: static public UserInfo/Platform Steam
      static constexpr const int Steam = 1;
      // Get static field: static public UserInfo/Platform Steam
      static GlobalNamespace::UserInfo::Platform _get_Steam();
      // Set static field: static public UserInfo/Platform Steam
      static void _set_Steam(GlobalNamespace::UserInfo::Platform value);
      // static field const value: static public UserInfo/Platform Oculus
      static constexpr const int Oculus = 2;
      // Get static field: static public UserInfo/Platform Oculus
      static GlobalNamespace::UserInfo::Platform _get_Oculus();
      // Set static field: static public UserInfo/Platform Oculus
      static void _set_Oculus(GlobalNamespace::UserInfo::Platform value);
      // static field const value: static public UserInfo/Platform PS4
      static constexpr const int PS4 = 3;
      // Get static field: static public UserInfo/Platform PS4
      static GlobalNamespace::UserInfo::Platform _get_PS4();
      // Set static field: static public UserInfo/Platform PS4
      static void _set_PS4(GlobalNamespace::UserInfo::Platform value);
      // Get instance field reference: public System.Int32 value__
      int& dyn_value__();
    }; // UserInfo/Platform
    #pragma pack(pop)
    static check_size<sizeof(UserInfo::Platform), 0 + sizeof(int)> __GlobalNamespace_UserInfo_PlatformSizeCheck;
    static_assert(sizeof(UserInfo::Platform) == 0x4);
    // public readonly UserInfo/Platform platform
    // Size: 0x4
    // Offset: 0x10
    GlobalNamespace::UserInfo::Platform platform;
    // Field size check
    static_assert(sizeof(GlobalNamespace::UserInfo::Platform) == 0x4);
    // Padding between fields: platform and: platformUserId
    char __padding0[0x4] = {};
    // public readonly System.String platformUserId
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppString* platformUserId;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public readonly System.String userName
    // Size: 0x8
    // Offset: 0x20
    ::Il2CppString* userName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // Creating value type constructor for type: UserInfo
    UserInfo(GlobalNamespace::UserInfo::Platform platform_ = {}, ::Il2CppString* platformUserId_ = {}, ::Il2CppString* userName_ = {}) noexcept : platform{platform_}, platformUserId{platformUserId_}, userName{userName_} {}
    // Get instance field reference: public readonly UserInfo/Platform platform
    GlobalNamespace::UserInfo::Platform& dyn_platform();
    // Get instance field reference: public readonly System.String platformUserId
    ::Il2CppString*& dyn_platformUserId();
    // Get instance field reference: public readonly System.String userName
    ::Il2CppString*& dyn_userName();
    // public System.Void .ctor(UserInfo/Platform platform, System.String platformUserId, System.String userName)
    // Offset: 0x129BC04
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UserInfo* New_ctor(GlobalNamespace::UserInfo::Platform platform, ::Il2CppString* platformUserId, ::Il2CppString* userName) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::UserInfo::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UserInfo*, creationType>(platform, platformUserId, userName)));
    }
  }; // UserInfo
  #pragma pack(pop)
  static check_size<sizeof(UserInfo), 32 + sizeof(::Il2CppString*)> __GlobalNamespace_UserInfoSizeCheck;
  static_assert(sizeof(UserInfo) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::UserInfo*, "", "UserInfo");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::UserInfo::Platform, "", "UserInfo/Platform");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::UserInfo::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
