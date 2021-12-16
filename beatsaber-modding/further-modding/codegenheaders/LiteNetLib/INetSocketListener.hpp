// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include <stdint.h>
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Net::Sockets
namespace System::Net::Sockets {
  // Forward declaring type: SocketError
  struct SocketError;
}
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: IPEndPoint
  class IPEndPoint;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
template<class T>
struct Array;
// Completed il2cpp-utils forward declares
// Type namespace: LiteNetLib
namespace LiteNetLib {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: LiteNetLib.INetSocketListener
  // [TokenAttribute] Offset: FFFFFFFF
  class INetSocketListener {
    public:
    // Creating value type constructor for type: INetSocketListener
    INetSocketListener() noexcept {}
    // public System.Void OnMessageReceived(System.Byte[] data, System.Int32 length, System.Net.Sockets.SocketError errorCode, System.Net.IPEndPoint remoteEndPoint)
    // Offset: 0xFFFFFFFF
    void OnMessageReceived(::Array<uint8_t>* data, int length, System::Net::Sockets::SocketError errorCode, System::Net::IPEndPoint* remoteEndPoint);
  }; // LiteNetLib.INetSocketListener
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(LiteNetLib::INetSocketListener*, "LiteNetLib", "INetSocketListener");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: LiteNetLib::INetSocketListener::OnMessageReceived
// Il2CppName: OnMessageReceived
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::INetSocketListener::*)(::Array<uint8_t>*, int, System::Net::Sockets::SocketError, System::Net::IPEndPoint*)>(&LiteNetLib::INetSocketListener::OnMessageReceived)> {
  static const MethodInfo* get() {
    static auto* data = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* length = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* errorCode = &::il2cpp_utils::GetClassFromName("System.Net.Sockets", "SocketError")->byval_arg;
    static auto* remoteEndPoint = &::il2cpp_utils::GetClassFromName("System.Net", "IPEndPoint")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::INetSocketListener*), "OnMessageReceived", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{data, length, errorCode, remoteEndPoint});
  }
};
