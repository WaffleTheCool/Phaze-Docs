// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: BaseMasterServerReliableRequest
#include "GlobalNamespace/BaseMasterServerReliableRequest.hpp"
// Including type: MasterServer.IUserClientToServerMessage
#include "MasterServer/IUserClientToServerMessage.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: ByteArrayNetSerializable
  class ByteArrayNetSerializable;
}
// Forward declaring namespace: LiteNetLib::Utils
namespace LiteNetLib::Utils {
  // Forward declaring type: NetDataWriter
  class NetDataWriter;
  // Forward declaring type: NetDataReader
  class NetDataReader;
}
// Completed forward declares
// Type namespace: MasterServer
namespace MasterServer {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: MasterServer.BaseConnectToServerRequest
  // [TokenAttribute] Offset: FFFFFFFF
  class BaseConnectToServerRequest : public GlobalNamespace::BaseMasterServerReliableRequest/*, public MasterServer::IUserClientToServerMessage*/ {
    public:
    // Writing base type padding for base size: 0x14 to desired offset: 0x18
    char ___base_padding[0x4] = {};
    // private System.String <userId>k__BackingField
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppString* userId;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.String <userName>k__BackingField
    // Size: 0x8
    // Offset: 0x20
    ::Il2CppString* userName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public readonly ByteArrayNetSerializable random
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::ByteArrayNetSerializable* random;
    // Field size check
    static_assert(sizeof(GlobalNamespace::ByteArrayNetSerializable*) == 0x8);
    // public readonly ByteArrayNetSerializable publicKey
    // Size: 0x8
    // Offset: 0x30
    GlobalNamespace::ByteArrayNetSerializable* publicKey;
    // Field size check
    static_assert(sizeof(GlobalNamespace::ByteArrayNetSerializable*) == 0x8);
    // Creating value type constructor for type: BaseConnectToServerRequest
    BaseConnectToServerRequest(::Il2CppString* userId_ = {}, ::Il2CppString* userName_ = {}, GlobalNamespace::ByteArrayNetSerializable* random_ = {}, GlobalNamespace::ByteArrayNetSerializable* publicKey_ = {}) noexcept : userId{userId_}, userName{userName_}, random{random_}, publicKey{publicKey_} {}
    // Creating interface conversion operator: operator MasterServer::IUserClientToServerMessage
    operator MasterServer::IUserClientToServerMessage() noexcept {
      return *reinterpret_cast<MasterServer::IUserClientToServerMessage*>(this);
    }
    // Deleting conversion operator: operator uint
    constexpr operator uint() const noexcept = delete;
    // Get instance field reference: private System.String <userId>k__BackingField
    ::Il2CppString*& dyn_$userId$k__BackingField();
    // Get instance field reference: private System.String <userName>k__BackingField
    ::Il2CppString*& dyn_$userName$k__BackingField();
    // Get instance field reference: public readonly ByteArrayNetSerializable random
    GlobalNamespace::ByteArrayNetSerializable*& dyn_random();
    // Get instance field reference: public readonly ByteArrayNetSerializable publicKey
    GlobalNamespace::ByteArrayNetSerializable*& dyn_publicKey();
    // public System.String get_userId()
    // Offset: 0x121A450
    ::Il2CppString* get_userId();
    // protected System.Void set_userId(System.String value)
    // Offset: 0x121A458
    void set_userId(::Il2CppString* value);
    // public System.String get_userName()
    // Offset: 0x121A460
    ::Il2CppString* get_userName();
    // protected System.Void set_userName(System.String value)
    // Offset: 0x121A468
    void set_userName(::Il2CppString* value);
    // public MasterServer.BaseConnectToServerRequest WithEncryptionParams(System.Byte[] random, System.Byte[] publicKey)
    // Offset: 0x121A470
    MasterServer::BaseConnectToServerRequest* WithEncryptionParams(::Array<uint8_t>* random, ::Array<uint8_t>* publicKey);
    // protected System.Void .ctor()
    // Offset: 0x121A5E4
    // Implemented from: BaseMasterServerReliableRequest
    // Base method: System.Void BaseMasterServerReliableRequest::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BaseConnectToServerRequest* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("MasterServer::BaseConnectToServerRequest::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BaseConnectToServerRequest*, creationType>()));
    }
    // public override System.Void Serialize(LiteNetLib.Utils.NetDataWriter writer)
    // Offset: 0x121A4BC
    // Implemented from: BaseMasterServerReliableRequest
    // Base method: System.Void BaseMasterServerReliableRequest::Serialize(LiteNetLib.Utils.NetDataWriter writer)
    void Serialize(LiteNetLib::Utils::NetDataWriter* writer);
    // public override System.Void Deserialize(LiteNetLib.Utils.NetDataReader reader)
    // Offset: 0x121A530
    // Implemented from: BaseMasterServerReliableRequest
    // Base method: System.Void BaseMasterServerReliableRequest::Deserialize(LiteNetLib.Utils.NetDataReader reader)
    void Deserialize(LiteNetLib::Utils::NetDataReader* reader);
    // public override System.Void Release()
    // Offset: 0x121A5A8
    // Implemented from: BaseMasterServerReliableRequest
    // Base method: System.Void BaseMasterServerReliableRequest::Release()
    void Release();
  }; // MasterServer.BaseConnectToServerRequest
  #pragma pack(pop)
  static check_size<sizeof(BaseConnectToServerRequest), 48 + sizeof(GlobalNamespace::ByteArrayNetSerializable*)> __MasterServer_BaseConnectToServerRequestSizeCheck;
  static_assert(sizeof(BaseConnectToServerRequest) == 0x38);
}
DEFINE_IL2CPP_ARG_TYPE(MasterServer::BaseConnectToServerRequest*, "MasterServer", "BaseConnectToServerRequest");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: MasterServer::BaseConnectToServerRequest::get_userId
// Il2CppName: get_userId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (MasterServer::BaseConnectToServerRequest::*)()>(&MasterServer::BaseConnectToServerRequest::get_userId)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MasterServer::BaseConnectToServerRequest*), "get_userId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MasterServer::BaseConnectToServerRequest::set_userId
// Il2CppName: set_userId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MasterServer::BaseConnectToServerRequest::*)(::Il2CppString*)>(&MasterServer::BaseConnectToServerRequest::set_userId)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MasterServer::BaseConnectToServerRequest*), "set_userId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: MasterServer::BaseConnectToServerRequest::get_userName
// Il2CppName: get_userName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (MasterServer::BaseConnectToServerRequest::*)()>(&MasterServer::BaseConnectToServerRequest::get_userName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MasterServer::BaseConnectToServerRequest*), "get_userName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MasterServer::BaseConnectToServerRequest::set_userName
// Il2CppName: set_userName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MasterServer::BaseConnectToServerRequest::*)(::Il2CppString*)>(&MasterServer::BaseConnectToServerRequest::set_userName)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MasterServer::BaseConnectToServerRequest*), "set_userName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: MasterServer::BaseConnectToServerRequest::WithEncryptionParams
// Il2CppName: WithEncryptionParams
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<MasterServer::BaseConnectToServerRequest* (MasterServer::BaseConnectToServerRequest::*)(::Array<uint8_t>*, ::Array<uint8_t>*)>(&MasterServer::BaseConnectToServerRequest::WithEncryptionParams)> {
  static const MethodInfo* get() {
    static auto* random = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* publicKey = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MasterServer::BaseConnectToServerRequest*), "WithEncryptionParams", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{random, publicKey});
  }
};
// Writing MetadataGetter for method: MasterServer::BaseConnectToServerRequest::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: MasterServer::BaseConnectToServerRequest::Serialize
// Il2CppName: Serialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MasterServer::BaseConnectToServerRequest::*)(LiteNetLib::Utils::NetDataWriter*)>(&MasterServer::BaseConnectToServerRequest::Serialize)> {
  static const MethodInfo* get() {
    static auto* writer = &::il2cpp_utils::GetClassFromName("LiteNetLib.Utils", "NetDataWriter")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MasterServer::BaseConnectToServerRequest*), "Serialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{writer});
  }
};
// Writing MetadataGetter for method: MasterServer::BaseConnectToServerRequest::Deserialize
// Il2CppName: Deserialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MasterServer::BaseConnectToServerRequest::*)(LiteNetLib::Utils::NetDataReader*)>(&MasterServer::BaseConnectToServerRequest::Deserialize)> {
  static const MethodInfo* get() {
    static auto* reader = &::il2cpp_utils::GetClassFromName("LiteNetLib.Utils", "NetDataReader")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MasterServer::BaseConnectToServerRequest*), "Deserialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{reader});
  }
};
// Writing MetadataGetter for method: MasterServer::BaseConnectToServerRequest::Release
// Il2CppName: Release
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MasterServer::BaseConnectToServerRequest::*)()>(&MasterServer::BaseConnectToServerRequest::Release)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MasterServer::BaseConnectToServerRequest*), "Release", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
