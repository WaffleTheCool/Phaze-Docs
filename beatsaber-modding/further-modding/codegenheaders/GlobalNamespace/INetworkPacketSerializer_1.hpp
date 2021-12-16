// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: LiteNetLib::Utils
namespace LiteNetLib::Utils {
  // Forward declaring type: NetDataReader
  class NetDataReader;
  // Forward declaring type: NetDataWriter
  class NetDataWriter;
  // Forward declaring type: INetSerializable
  class INetSerializable;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // WARNING Size may be invalid!
  // Autogenerated type: INetworkPacketSerializer`1
  // [TokenAttribute] Offset: FFFFFFFF
  template<typename TData>
  class INetworkPacketSerializer_1 {
    public:
    // Creating value type constructor for type: INetworkPacketSerializer_1
    INetworkPacketSerializer_1() noexcept {}
    // public System.Void ProcessAllPackets(LiteNetLib.Utils.NetDataReader reader, TData data)
    // Offset: 0xFFFFFFFF
    void ProcessAllPackets(LiteNetLib::Utils::NetDataReader* reader, TData data) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::INetworkPacketSerializer_1::ProcessAllPackets");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "ProcessAllPackets", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(reader), ::il2cpp_utils::ExtractType(data)})));
      auto ___instance_arg = this;
      ::il2cpp_utils::RunMethodThrow<void, false>(___instance_arg, ___internal__method, reader, data);
    }
    // public System.Void SerializePacket(LiteNetLib.Utils.NetDataWriter writer, LiteNetLib.Utils.INetSerializable packet)
    // Offset: 0xFFFFFFFF
    void SerializePacket(LiteNetLib::Utils::NetDataWriter* writer, LiteNetLib::Utils::INetSerializable* packet) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::INetworkPacketSerializer_1::SerializePacket");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "SerializePacket", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(writer), ::il2cpp_utils::ExtractType(packet)})));
      auto ___instance_arg = this;
      ::il2cpp_utils::RunMethodThrow<void, false>(___instance_arg, ___internal__method, writer, packet);
    }
  }; // INetworkPacketSerializer`1
  // Could not write size check! Type: INetworkPacketSerializer`1 is generic, or has no fields that are valid for size checks!
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(GlobalNamespace::INetworkPacketSerializer_1, "", "INetworkPacketSerializer`1");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
