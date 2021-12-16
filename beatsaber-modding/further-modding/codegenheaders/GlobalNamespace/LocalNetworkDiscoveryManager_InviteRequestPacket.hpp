// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: LocalNetworkDiscoveryManager
#include "GlobalNamespace/LocalNetworkDiscoveryManager.hpp"
// Including type: LiteNetLib.Utils.INetSerializable
#include "LiteNetLib/Utils/INetSerializable.hpp"
// Including type: BeatmapLevelSelectionMask
#include "GlobalNamespace/BeatmapLevelSelectionMask.hpp"
// Including type: GameplayServerConfiguration
#include "GlobalNamespace/GameplayServerConfiguration.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: LiteNetLib::Utils
namespace LiteNetLib::Utils {
  // Forward declaring type: NetDataWriter
  class NetDataWriter;
  // Forward declaring type: NetDataReader
  class NetDataReader;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x60
  #pragma pack(push, 1)
  // Autogenerated type: LocalNetworkDiscoveryManager/InviteRequestPacket
  // [TokenAttribute] Offset: FFFFFFFF
  class LocalNetworkDiscoveryManager::InviteRequestPacket : public ::Il2CppObject/*, public LiteNetLib::Utils::INetSerializable*/ {
    public:
    // public System.String userId
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* userId;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public System.String userName
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppString* userName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public System.String secret
    // Size: 0x8
    // Offset: 0x20
    ::Il2CppString* secret;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public System.Int32 multiplayerPort
    // Size: 0x4
    // Offset: 0x28
    int multiplayerPort;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Boolean isPartyOwner
    // Size: 0x1
    // Offset: 0x2C
    bool isPartyOwner;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: isPartyOwner and: selectionMask
    char __padding4[0x3] = {};
    // public BeatmapLevelSelectionMask selectionMask
    // Size: 0x18
    // Offset: 0x30
    GlobalNamespace::BeatmapLevelSelectionMask selectionMask;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BeatmapLevelSelectionMask) == 0x18);
    // public GameplayServerConfiguration configuration
    // Size: 0x18
    // Offset: 0x48
    GlobalNamespace::GameplayServerConfiguration configuration;
    // Field size check
    static_assert(sizeof(GlobalNamespace::GameplayServerConfiguration) == 0x18);
    // Creating value type constructor for type: InviteRequestPacket
    InviteRequestPacket(::Il2CppString* userId_ = {}, ::Il2CppString* userName_ = {}, ::Il2CppString* secret_ = {}, int multiplayerPort_ = {}, bool isPartyOwner_ = {}, GlobalNamespace::BeatmapLevelSelectionMask selectionMask_ = {}, GlobalNamespace::GameplayServerConfiguration configuration_ = {}) noexcept : userId{userId_}, userName{userName_}, secret{secret_}, multiplayerPort{multiplayerPort_}, isPartyOwner{isPartyOwner_}, selectionMask{selectionMask_}, configuration{configuration_} {}
    // Creating interface conversion operator: operator LiteNetLib::Utils::INetSerializable
    operator LiteNetLib::Utils::INetSerializable() noexcept {
      return *reinterpret_cast<LiteNetLib::Utils::INetSerializable*>(this);
    }
    // Get instance field reference: public System.String userId
    ::Il2CppString*& dyn_userId();
    // Get instance field reference: public System.String userName
    ::Il2CppString*& dyn_userName();
    // Get instance field reference: public System.String secret
    ::Il2CppString*& dyn_secret();
    // Get instance field reference: public System.Int32 multiplayerPort
    int& dyn_multiplayerPort();
    // Get instance field reference: public System.Boolean isPartyOwner
    bool& dyn_isPartyOwner();
    // Get instance field reference: public BeatmapLevelSelectionMask selectionMask
    GlobalNamespace::BeatmapLevelSelectionMask& dyn_selectionMask();
    // Get instance field reference: public GameplayServerConfiguration configuration
    GlobalNamespace::GameplayServerConfiguration& dyn_configuration();
    // public System.Void Serialize(LiteNetLib.Utils.NetDataWriter writer)
    // Offset: 0x119BC94
    void Serialize(LiteNetLib::Utils::NetDataWriter* writer);
    // public System.Void Deserialize(LiteNetLib.Utils.NetDataReader reader)
    // Offset: 0x119BD2C
    void Deserialize(LiteNetLib::Utils::NetDataReader* reader);
    // public System.Void .ctor()
    // Offset: 0x1199524
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LocalNetworkDiscoveryManager::InviteRequestPacket* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::LocalNetworkDiscoveryManager::InviteRequestPacket::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LocalNetworkDiscoveryManager::InviteRequestPacket*, creationType>()));
    }
  }; // LocalNetworkDiscoveryManager/InviteRequestPacket
  #pragma pack(pop)
  static check_size<sizeof(LocalNetworkDiscoveryManager::InviteRequestPacket), 72 + sizeof(GlobalNamespace::GameplayServerConfiguration)> __GlobalNamespace_LocalNetworkDiscoveryManager_InviteRequestPacketSizeCheck;
  static_assert(sizeof(LocalNetworkDiscoveryManager::InviteRequestPacket) == 0x60);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::LocalNetworkDiscoveryManager::InviteRequestPacket*, "", "LocalNetworkDiscoveryManager/InviteRequestPacket");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::LocalNetworkDiscoveryManager::InviteRequestPacket::Serialize
// Il2CppName: Serialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LocalNetworkDiscoveryManager::InviteRequestPacket::*)(LiteNetLib::Utils::NetDataWriter*)>(&GlobalNamespace::LocalNetworkDiscoveryManager::InviteRequestPacket::Serialize)> {
  static const MethodInfo* get() {
    static auto* writer = &::il2cpp_utils::GetClassFromName("LiteNetLib.Utils", "NetDataWriter")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LocalNetworkDiscoveryManager::InviteRequestPacket*), "Serialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{writer});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LocalNetworkDiscoveryManager::InviteRequestPacket::Deserialize
// Il2CppName: Deserialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LocalNetworkDiscoveryManager::InviteRequestPacket::*)(LiteNetLib::Utils::NetDataReader*)>(&GlobalNamespace::LocalNetworkDiscoveryManager::InviteRequestPacket::Deserialize)> {
  static const MethodInfo* get() {
    static auto* reader = &::il2cpp_utils::GetClassFromName("LiteNetLib.Utils", "NetDataReader")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LocalNetworkDiscoveryManager::InviteRequestPacket*), "Deserialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{reader});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LocalNetworkDiscoveryManager::InviteRequestPacket::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
